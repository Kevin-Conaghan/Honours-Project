// Fill out your copyright notice in the Description page of Project Settings.

#include "Checker.h"


// Sets default values
AChecker::AChecker()
{	
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = mesh;

	timer = 0.0f;
	maxTime = 5.0f;

	upBranchNum = 0;
	downBranchNum = 0;
	leftBranchNum = 0;
	rightBranchNum = 0;
}

void AChecker::OnConstruction(const FTransform & transform)
{
	GlobalGoals();
}


bool AChecker::LocalRestraints()
{
	/*
		1. If intersecting with another road, create an intersection object to join the roads.
		2. If reaches a boundary cut off road.
		3. If the road is close to an intersection extend road to meet intersection.
	*/
	condition = false;
	Branches();

	if (upBranchNum < maxHeight)
	{
		condition = true;
	}
	if (downBranchNum < maxHeight)
	{
		condition = true;
	}
	if (leftBranchNum < maxWidth)
	{
		condition = true;
	}
	if (rightBranchNum < maxWidth)
	{
		condition = true;
	}
	else
	{
		condition = false;
	}

	return condition;
}

void AChecker::GlobalGoals()
{
	/*
		1. If this is the fourth road place a branch point (branch points will be intersections).
		2. Extend road in positive y, positive x and negative x.
		3. Extend road for another four times.
	*/

	//Set the spawn parameters of the blueprint 
	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	spawnParams.Instigator = Instigator;

	FVector forwardVector = this->GetActorForwardVector();
	FVector offsetVector = forwardVector * roadLength;

	if (LocalRestraints() == true)
	{
		for (int i = 0; i < numOfRoads; i++)
		{
			if (GetWorld() != NULL)
			{
				roadList.Add(GetWorld()->SpawnActor<ARoad>(bpRoad, this->GetActorLocation(), FRotator(0.0f, 0.0f, 0.0f), spawnParams));
				this->SetActorLocation(this->GetActorLocation() + offsetVector);
			}
		}
		SpawnBranch();
	}
}

void AChecker::SpawnBranch()
{
	//Set the spawn parameters of the blueprint 
	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	spawnParams.Instigator = Instigator;

	branch = GetWorld()->SpawnActor<ABranch>(bpBranch, this->GetActorLocation(), this->GetActorRotation(), spawnParams);
	SetNewBranchDirection();
}

void AChecker::SetNewBranchDirection()
{
	if (branch != NULL)
	{
		if (this->GetActorRotation().Yaw > -180 && this->GetActorRotation().Yaw < -90.0f)
		{
			branch->SetBranchDir(EBranchState::EB_RIGHT);
			branch->SpawnRight();
		}
		else if (this->GetActorRotation().Yaw < 90 && this->GetActorRotation().Yaw > 0.0f)
		{
			branch->SetBranchDir(EBranchState::EB_Up);
			branch->SpawnUp();
		}
		else if (this->GetActorRotation().Yaw > -90 && this->GetActorRotation().Yaw < 0.0f)
		{
			branch->SetBranchDir(EBranchState::EB_DOWN);
			branch->SpawnDown();
		}
		else if (this->GetActorRotation().Yaw == 0.0f)
		{
			branch->SetBranchDir(EBranchState::EB_LEFT);
			branch->SpawnLeft();
		}
	}
}

void AChecker::Branches()
{
	ABranch* numOfBranches;
	
	for (TActorIterator<ABranch> actorItr(GetWorld()); actorItr; ++actorItr)
	{
		if (actorItr)
		{
			numOfBranches = *actorItr;

			if (numOfBranches->GetBranchDir() == EBranchState::EB_Up)
			{
				upBranchNum++;
			}
			if (numOfBranches->GetBranchDir() == EBranchState::EB_DOWN)
			{
				downBranchNum++;
			}
			if (numOfBranches->GetBranchDir() == EBranchState::EB_LEFT)
			{
				leftBranchNum++;
			}
			if (numOfBranches->GetBranchDir() == EBranchState::EB_RIGHT)
			{
				rightBranchNum++;
			}
		}
	}
}
