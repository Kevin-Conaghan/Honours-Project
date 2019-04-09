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
	//Set the spawn parameters of the blueprint 
	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	spawnParams.Instigator = Instigator;

	//if the user has turned on the generation bool then spawn the initial branch which will always have 4 directions
	if (isGenerating)
	{
		SpawnInitialBranch();
	}

	//find the boundary component and attach it to an object for referencing 
	bound = FindBoundary();

	if (bound != NULL && hasSpawned)
	{
		//find out whether the road network is exceeding the max width and height 
		bound->CalcBoundary();

		//get the max amount of branches the user wants
		int max = (bound->maxHeight + bound->maxWidth);

		//spawn the road network from the initial branches
		for (int i = 0; i < max; i++)
		{
			SpawnIntersections();
		}

		APlacement* placer = GetWorld()->SpawnActor<APlacement>(bpPlacement, this->GetActorLocation(), this->GetActorRotation(), spawnParams);

		placer->GetCurrentCheckers();
	}
}

void AManager::FindBranches()
{
	//this will find any branches currently in the scene
	for (TActorIterator<ABranch> actorItr(GetWorld()); actorItr; ++actorItr)
	{
		ABranch* currBranch = *actorItr;

		if (currBranch != NULL && currBranch != initialBranch && CheckBranches(currBranch) == false)
		{
			//add all the branches currently in the scene to a list
			branches.Add(currBranch);
		}
	}

	//if there are any duplicates remove them from the list
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

bool AManager::CheckBranches(ABranch* currBranch)
{
	for (int i = 0; i < oldBranches.Num(); i++)
	{
		if (currBranch == oldBranches[i])
		{
			return true;
		}
	}

	return false;
}

void AManager::SpawnInitialBranch()
{
	//Set the spawn parameters of the blueprint 
	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	spawnParams.Instigator = Instigator;

	//spawn the initial branch and invoke the road method to spawn the intial road networks
	initialBranch = GetWorld()->SpawnActor<ABranch>(bpBranch, this->GetActorLocation(), this->GetActorRotation(), spawnParams);
	initialBranch->InitCheckers(spawnParams);
	initialBranch->SpawnRoads(bound);
	FindBranches();
	hasSpawned = true;	
	
}

void AManager::SpawnIntersections()
{
	//Set the spawn parameters of the blueprint 
	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	spawnParams.Instigator = Instigator;
	//iterate through the branches and spawn more roads to create the grid network
	for (int i = 0; i < branches.Num(); ++i)
	{
		branches[i]->InitCheckers(spawnParams);
		branches[i]->SpawnRoads(bound);
		oldBranches.Add(branches[i]);
	}

	//empty the current branches in the list
	branches.Empty();

	//find all the new branches that have been created
	FindBranches();
}

class ABoundary* AManager::FindBoundary()
{
	//find the current boundary in the scene
	class ABoundary* currBoundary = NULL;
	for (TActorIterator<ABoundary> actorItr(GetWorld()); actorItr; ++actorItr)
	{
		currBoundary = *actorItr;
	}

	return currBoundary;
}
