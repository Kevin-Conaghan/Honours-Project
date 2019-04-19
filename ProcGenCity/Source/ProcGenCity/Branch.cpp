// Fill out your copyright notice in the Description page of Project Settings.

#include "Branch.h"

// Sets default values
ABranch::ABranch()
{
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = mesh;

	oldNum = 0;

	dirAngList.Add(FRotator(0.0f, 90.0f, 0.0f));		//UP
	dirAngList.Add(FRotator(0.0f, -90.0f, 0.0f));		//DOWN
	dirAngList.Add(FRotator(0.0f, 0.0f, 0.0f));			//LEFT
	dirAngList.Add(FRotator(0.0f, 180.0f, 0.0f));		//RIGHT

	branchDirs.Add(EBranchDirection::EB_UP);			//UP
	branchDirs.Add(EBranchDirection::EB_DOWN);			//DOWN
	branchDirs.Add(EBranchDirection::EB_LEFT);			//LEFT
	branchDirs.Add(EBranchDirection::EB_RIGHT);			//RIGHT
}

void ABranch::OnConstruction(const FTransform & transform)
{
	//Set the spawn parameters of the blueprint 
	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	spawnParams.Instigator = Instigator;

	//initialise and spawn the checker objects 
	//InitCheckers(spawnParams);
}

EBranchDirection ABranch::GetDirection()
{
	return branchDirection;
}

void ABranch::SetDirection(EBranchDirection branchDir)
{
	branchDirection = branchDir;
}

void ABranch::InitCheckers(FActorSpawnParameters spawnParams)
{
	if (checkerObjs.Num() < 4)
	{
		for (int i = 0; i < 4; ++i)
		{
			//spawn four checkers a roads with away in all four directions
			AChecker* check1 = GetWorld()->SpawnActor<AChecker>(bpChecker, this->GetActorLocation(), dirAngList[i], spawnParams);
			check1->SetBranchDirection(branchDirs[i]);

			if (check1->LocalRestraints() == true)
			{
				checkerObjs.Add(check1);
			}
			else
			{
				Destroy(check1);
			}
		}
	}
}

void ABranch::SpawnRoads(ABoundary* bound)
{

	//for the number of checker objects in the scene currently invoke the global goals method which will spawn the roads
	for (int i = 0; i < checkerObjs.Num(); ++i)
	{
		//it will only invoke the global goals method if it meets the requirements of the local restraints
		checkerObjs[i]->GlobalGoals();
	}

	//once the checker objects have spawned the roads then spawn the branches for the intersections
	if (checkerObjs.Num() > 0)
	{
		if (checkerObjs[checkerObjs.Num() - 1]->GetIsCompleted() == true && checkerObjs[checkerObjs.Num() - 1]->OverlapCheck() != true)
		{
			for (int i = 0; i < checkerObjs.Num(); ++i)
			{
				if (!checkerObjs[i]->OverlapCheck() && checkerObjs[i]->LocalRestraints() == true)
				{
					SpawnBranch(checkerObjs[i]->GetActorLocation(), checkerObjs[i]->GetActorRotation());
				}
				else
				{
					continue;
				}
			}
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
	branch->InitCheckers(spawnParams);
}
