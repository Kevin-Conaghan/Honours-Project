// Fill out your copyright notice in the Description page of Project Settings.

#include "Checker.h"


// Sets default values
AChecker::AChecker()
{	
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = mesh;

	timer = 0.0f;
	maxTime = 5.0f;
}

void AChecker::OnConstruction(const FTransform & transform)
{
}

class ABoundary* AChecker::FindBoundary()
{

	class ABoundary* currBoundary = NULL;
	for (TActorIterator<ABoundary> actorItr(GetWorld()); actorItr; ++actorItr)
	{
		currBoundary = *actorItr;
	}

	return currBoundary;
}

bool AChecker::LocalRestraints()
{
	/*
		1. If intersecting with another road, create an intersection object to join the roads.
		2. If reaches a boundary cut off road.
		3. If the road is close to an intersection extend road to meet intersection.
	*/

	class ABoundary* boundary = FindBoundary();

	if (boundary != NULL)
	{
		boundary->CalcBoundary();
		heightBound = HeightBoundaryCheck(boundary);
		widthBound = WidthBoundaryCheck(boundary);

		if (!heightBound && !widthBound)
		{
			condition = true;
		}
		else
		{
			condition = false;
		}
	}

	return condition;
}

bool AChecker::HeightBoundaryCheck(ABoundary* bound)
{	 
	return bound->GetBoundingHeight();
}

bool AChecker::WidthBoundaryCheck(ABoundary* bound)
{
	return bound->GetBoundingWidth();
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

	for (int i = 0; i < numOfRoads; i++)
	{
		roadList.Add(GetWorld()->SpawnActor<ARoad>(bpRoad, this->GetActorLocation(), FRotator(0.0f, 0.0f, 0.0f), spawnParams));
		this->SetActorLocation(this->GetActorLocation() + offsetVector);
	}

	isComplete = true;
}

void AChecker::SetNewBranchDirection()
{
	if (this->GetActorRotation().Yaw > -180 && this->GetActorRotation().Yaw < -90.0f)
	{
		branch->SetBranchDir(EBranchState::EB_RIGHT);
	}
	else if (this->GetActorRotation().Yaw < 90 && this->GetActorRotation().Yaw > 0.0f)
	{
		branch->SetBranchDir(EBranchState::EB_Up);
	}
	else if (this->GetActorRotation().Yaw > -90 && this->GetActorRotation().Yaw < 0.0f)
	{
		branch->SetBranchDir(EBranchState::EB_DOWN);
	}
	else if (this->GetActorRotation().Yaw == 0.0f)
	{
		branch->SetBranchDir(EBranchState::EB_LEFT);
	}
}

bool AChecker::GetIsCompleted()
{
	return isComplete;
}

bool AChecker::GetHeightBound()
{
	return heightBound;
}

bool AChecker::GetWidthBound()
{
	return widthBound;
}

