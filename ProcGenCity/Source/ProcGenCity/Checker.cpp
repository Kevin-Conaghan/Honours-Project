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
	GlobalGoals();
}


bool AChecker::LocalRestraints()
{
	/*
		1. If intersecting with another road, create an intersection object to join the roads.
		2. If reaches a boundary cut off road.
		3. If the road is close to an intersection extend road to meet intersection.
	*/
	return true;
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

	SpawnBranch();
}

void AChecker::SpawnBranch()
{

	//Set the spawn parameters of the blueprint 
	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	spawnParams.Instigator = Instigator;

	FVector forwardVector = this->GetActorForwardVector();
	FVector offsetVector = forwardVector * roadLength;

	branch = GetWorld()->SpawnActor<ABranch>(bpBranch, this->GetActorLocation() + offsetVector, this->GetActorRotation(), spawnParams);
	SetNewBranchDirection();
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
