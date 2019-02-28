// Fill out your copyright notice in the Description page of Project Settings.

#include "Branch.h"


// Sets default values
ABranch::ABranch()
{
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = mesh;
}

void ABranch::OnConstruction(const FTransform & transform)
{
	//Set the spawn parameters of the blueprint 
	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	spawnParams.Instigator = Instigator;

	if (isGenerating)
	{
		//initialise and spawn the checker objects 
		InitCheckers(spawnParams);
	}
}

void ABranch::InitCheckers(FActorSpawnParameters spawnParams)
{
	switch (branchDirection)
	{
		case EBranchState::EB_INIT:
		{

			FVector up = this->GetActorLocation() + FVector(0.0f, roadLength, 0.0f);			//positive y-axis
			FVector down = this->GetActorLocation() + FVector(0.0f, -roadLength, 0.0f);			//negative y-axis
			FVector right = this->GetActorLocation() + FVector(-roadLength, 0.0f, 0.0f);		//negative x-axis
			FVector left = this->GetActorLocation() + FVector(roadLength, 0.0f, 0.0f);			//positive x-axis

			FRotator rightAngle = FRotator(0.0f, 180.0f, 0.0f);		//right direction
			FRotator upAngle = FRotator(0.0f, 90.0f, 0.0f);			//up direction
			FRotator downAngle = FRotator(0.0f, -90.0f, 0.0f);		//down direction


			//spawn four checkers a roads with away in all four directions
			checkerObjs.Add(GetWorld()->SpawnActor<AChecker>(bpChecker, up, upAngle, spawnParams));							//Up
			checkerObjs.Add(GetWorld()->SpawnActor<AChecker>(bpChecker, down, downAngle, spawnParams));						//Down
			checkerObjs.Add(GetWorld()->SpawnActor<AChecker>(bpChecker, right, rightAngle, spawnParams));					//Right
			checkerObjs.Add(GetWorld()->SpawnActor<AChecker>(bpChecker, left, FRotator(0.0f, 0.0f, 0.0f), spawnParams));	//Left
		}
		case EBranchState::EB_Up:
		{

			FVector up = this->GetActorLocation() + FVector(0.0f, roadLength, 0.0f);			//positive y-axis
			FVector right = this->GetActorLocation() + FVector(-roadLength, 0.0f, 0.0f);		//negative x-axis
			FVector left = this->GetActorLocation() + FVector(roadLength, 0.0f, 0.0f);			//positive x-axis

			FRotator rightAngle = FRotator(0.0f, 180.0f, 0.0f);		//right direction
			FRotator upAngle = FRotator(0.0f, 90.0f, 0.0f);			//up direction


			//spawn four checkers a roads with away in all four directions
			checkerObjs.Add(GetWorld()->SpawnActor<AChecker>(bpChecker, up, upAngle, spawnParams));							//Up
			checkerObjs.Add(GetWorld()->SpawnActor<AChecker>(bpChecker, right, rightAngle, spawnParams));					//Right
			checkerObjs.Add(GetWorld()->SpawnActor<AChecker>(bpChecker, left, FRotator(0.0f, 0.0f, 0.0f), spawnParams));	//Left
		}
		case EBranchState::EB_DOWN:
		{
			FVector down = this->GetActorLocation() + FVector(0.0f, -roadLength, 0.0f);			//negative y-axis
			FVector right = this->GetActorLocation() + FVector(-roadLength, 0.0f, 0.0f);		//negative x-axis
			FVector left = this->GetActorLocation() + FVector(roadLength, 0.0f, 0.0f);			//positive x-axis

			FRotator rightAngle = FRotator(0.0f, 180.0f, 0.0f);		//right direction
			FRotator downAngle = FRotator(0.0f, -90.0f, 0.0f);		//down direction


			//spawn four checkers a roads with away in all four directions
			checkerObjs.Add(GetWorld()->SpawnActor<AChecker>(bpChecker, down, downAngle, spawnParams));						//Down
			checkerObjs.Add(GetWorld()->SpawnActor<AChecker>(bpChecker, right, rightAngle, spawnParams));					//Right
			checkerObjs.Add(GetWorld()->SpawnActor<AChecker>(bpChecker, left, FRotator(0.0f, 0.0f, 0.0f), spawnParams));	//Left
		}
		case EBranchState::EB_LEFT:
		{

			FVector up = this->GetActorLocation() + FVector(0.0f, roadLength, 0.0f);			//positive y-axis
			FVector down = this->GetActorLocation() + FVector(0.0f, -roadLength, 0.0f);			//negative y-axis
			FVector left = this->GetActorLocation() + FVector(roadLength, 0.0f, 0.0f);			//positive x-axis

			FRotator upAngle = FRotator(0.0f, 90.0f, 0.0f);			//up direction
			FRotator downAngle = FRotator(0.0f, -90.0f, 0.0f);		//down direction


			//spawn four checkers a roads with away in all four directions
			checkerObjs.Add(GetWorld()->SpawnActor<AChecker>(bpChecker, up, upAngle, spawnParams));							//Up
			checkerObjs.Add(GetWorld()->SpawnActor<AChecker>(bpChecker, down, downAngle, spawnParams));						//Down
			checkerObjs.Add(GetWorld()->SpawnActor<AChecker>(bpChecker, left, FRotator(0.0f, 0.0f, 0.0f), spawnParams));	//Left
		}
		case EBranchState::EB_RIGHT:
		{

			FVector up = this->GetActorLocation() + FVector(0.0f, roadLength, 0.0f);			//positive y-axis
			FVector down = this->GetActorLocation() + FVector(0.0f, -roadLength, 0.0f);			//negative y-axis
			FVector right = this->GetActorLocation() + FVector(-roadLength, 0.0f, 0.0f);		//negative x-axis

			FRotator rightAngle = FRotator(0.0f, 180.0f, 0.0f);		//right direction
			FRotator upAngle = FRotator(0.0f, 90.0f, 0.0f);			//up direction
			FRotator downAngle = FRotator(0.0f, -90.0f, 0.0f);		//down direction


			//spawn four checkers a roads with away in all four directions
			checkerObjs.Add(GetWorld()->SpawnActor<AChecker>(bpChecker, up, upAngle, spawnParams));							//Up
			checkerObjs.Add(GetWorld()->SpawnActor<AChecker>(bpChecker, down, downAngle, spawnParams));						//Down
			checkerObjs.Add(GetWorld()->SpawnActor<AChecker>(bpChecker, right, rightAngle, spawnParams));					//Right
		}
		
	}

}


void ABranch::SetBranchDir(EBranchState branchDir)
{
	branchDirection = branchDir;
}

