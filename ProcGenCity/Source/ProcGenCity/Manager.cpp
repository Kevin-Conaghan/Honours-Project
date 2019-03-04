// Fill out your copyright notice in the Description page of Project Settings.

#include "Manager.h"


// Sets default values
AManager::AManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AManager::OnConstruction(const FTransform & transform)
{
	SpawnInitialBranch();

	bound = FindBoundary();

	if (bound != NULL && hasSpawned)
	{
		bound->CalcBoundary();

		SpawnIntersections();
		
	}
}

void AManager::FindBranches()
{
	for (TActorIterator<ABranch> actorItr(GetWorld()); actorItr; ++actorItr)
	{
		ABranch* currBranch = *actorItr;

		if (currBranch != NULL && currBranch != initialBranch)
		{
			branches.Add(currBranch);
		}
	}

	for (int i = 0; i < branches.Num(); ++i)
	{
		ABranch* currBranch = branches[i];

		if (currBranch == oldBranch)
		{
			branches.Remove(branches[i]);
		}
		oldBranch = currBranch;
	}
}

void AManager::SpawnInitialBranch()
{
	//Set the spawn parameters of the blueprint 
	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	spawnParams.Instigator = Instigator;

	if (isGenerating)
	{
		initialBranch = GetWorld()->SpawnActor<ABranch>(bpBranch, this->GetActorLocation(), this->GetActorRotation(), spawnParams);
		initialBranch->SpawnRoads();
		FindBranches();
		hasSpawned = true;	
	}
}

void AManager::SpawnIntersections()
{
	for (int i = 0; i < branches.Num(); ++i)
	{
		branches[i]->SpawnRoads();

	}	
	
	branches.Empty();

	FindBranches();
}

class ABoundary* AManager::FindBoundary()
{

	class ABoundary* currBoundary = NULL;
	for (TActorIterator<ABoundary> actorItr(GetWorld()); actorItr; ++actorItr)
	{
		currBoundary = *actorItr;
	}

	return currBoundary;
}