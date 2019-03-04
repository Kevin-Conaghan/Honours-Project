// Fill out your copyright notice in the Description page of Project Settings.

#include "Branch.h"

// Sets default values
ABranch::ABranch()
{
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = mesh;

	oldNum = 0;
}

void ABranch::OnConstruction(const FTransform & transform)
{
	//Set the spawn parameters of the blueprint 
	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	spawnParams.Instigator = Instigator;

	//initialise and spawn the checker objects 
	InitCheckers(spawnParams);
}

void ABranch::InitCheckers(FActorSpawnParameters spawnParams)
{
	if (checkerObjs.Num() < 4)
	{
		TArray<FVector> dirList;
		TArray<FRotator> dirAngList;
		dirList.Add(this->GetActorLocation() + FVector(0.0f, roadLength, 0.0f));			//UP
		dirList.Add(this->GetActorLocation() + FVector(0.0f, -roadLength, 0.0f));			//DOWN
		dirList.Add(this->GetActorLocation() + FVector(-roadLength, 0.0f, 0.0f));			//LEFT
		dirList.Add(this->GetActorLocation() + FVector(roadLength, 0.0f, 0.0f));			//RIGHT

		dirAngList.Add(FRotator(0.0f, 90.0f, 0.0f));		//UP
		dirAngList.Add(FRotator(0.0f, -90.0f, 0.0f));		//DOWN
		dirAngList.Add(FRotator(0.0f, 0.0f, 0.0f));			//LEFT
		dirAngList.Add(FRotator(0.0f, 180.0f, 0.0f));		//RIGHT


		for (int i = 0; i < dirList.Num(); ++i)
		{
			//spawn four checkers a roads with away in all four directions
			AChecker* check1 = GetWorld()->SpawnActor<AChecker>(bpChecker, dirList[i], dirAngList[i], spawnParams);
			
			checkerObjs.Add(check1);
		}
	}
}

void ABranch::SpawnRoads()
{
	//this function could turn into a threaded process for performance benefit
	for (int i = 0; i < checkerObjs.Num(); i++)
	{
		if (checkerObjs[i]->LocalRestraints() == true)
		{
			checkerObjs[i]->GlobalGoals();
		}
	}

	if (checkerObjs[checkerObjs.Num() - 1]->GetIsCompleted() == true)
	{
		for(int i = 0; i < checkerObjs.Num(); ++i)
		{
			SpawnBranch(checkerObjs[i]->GetActorLocation(), checkerObjs[i]->GetActorRotation());
		}
	}
}

void ABranch::SpawnBranch(FVector checkerLoc, FRotator checkerRot)
{
	//Set the spawn parameters of the blueprint 
	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	spawnParams.Instigator = Instigator;

	branch = GetWorld()->SpawnActor<ABranch>(bpBranch, checkerLoc, checkerRot, spawnParams);
	GEngine->AddOnScreenDebugMessage(1, 15.0f, FColor::Red, "Hit");
}

void ABranch::SetBranchDir(EBranchState branchDir)
{
	branchDirection = branchDir;
}