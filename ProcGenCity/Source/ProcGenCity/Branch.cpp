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
		TArray<FVector> dirList;		//an array for each direction
		TArray<FRotator> dirAngList;	//an array for each angle for the checker objects
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

void ABranch::SpawnRoads(ABoundary* bound)
{
	//for the number of checker objects in the scene currently invoke the global goals method which will spawn the roads
	for (int i = 0; i < checkerObjs.Num(); ++i)
	{
		//it will only invoke the global goals method if it meets the requirements of the local restraints
		if (checkerObjs[i]->LocalRestraints() == true && checkerObjs[i]->OverlapCheck() != true)
		{
			checkerObjs[i]->GlobalGoals();
		}
		else
		{
			break;
		}
	}

	//once the checker objects have spawned the roads then spawn the branches for the intersections
	if (checkerObjs[checkerObjs.Num() - 1]->GetIsCompleted() == true && checkerObjs[checkerObjs.Num() - 1]->OverlapCheck() != true)
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

	//spawn a branch at the checker objects location
	branch = GetWorld()->SpawnActor<ABranch>(bpBranch, checkerLoc, checkerRot, spawnParams);
}
