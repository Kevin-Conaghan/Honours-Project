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

bool AChecker::OverlapCheck()
{

	//TArray<AActor*> actors;
	this->GetOverlappingActors(overlappingActors, TSubclassOf<ARoad>());

	if (overlappingActors.Num() > 0)
	{
		return true;	
	}
	else if (overlappingActors.Num() == 0)
	{
		return false;
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, "FALSE");
	}

	return true;
}

class ABoundary* AChecker::FindBoundary()
{
	//find the boundary in the current scene
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

	//get the forward vector of the checker and offset it so it can spawn more road objects
	FVector forwardVector = this->GetActorForwardVector();
	FVector offsetVector = forwardVector * roadLength;

	for (int i = 0; i < numOfRoads; i++)
	{
		if (!OverlapCheck())
		{
			roadList.Add(GetWorld()->SpawnActor<ARoad>(bpRoad, this->GetActorLocation(), FRotator(0.0f, 0.0f, 0.0f), spawnParams));
			this->SetActorLocation(this->GetActorLocation() + offsetVector);
			this->UpdateComponentTransforms();
			this->UpdateOverlaps();
		}
	}

	isComplete = true;
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


