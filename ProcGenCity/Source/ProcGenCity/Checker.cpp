// Fill out your copyright notice in the Description page of Project Settings.

#include "Checker.h"


// Sets default values
AChecker::AChecker()
{	
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = mesh;

	timer = 0.0f;
	maxTime = 5.0f;
	overlapCount = 0;
}

void AChecker::OnConstruction(const FTransform & transform)
{

}

bool AChecker::OverlapCheck()
{
	ARoad* currRoad = NULL;
	AChecker* checker = this;

	FVector checkerPos = checker->GetActorLocation();

	for (TActorIterator<ARoad> actorItr(GetWorld()); actorItr; ++actorItr)
	{
		currRoad = *actorItr;
		maxPoint.Empty();
		currRoad->GetComponents(maxPoint);

		FVector minRoadPos = currRoad->GetActorLocation();
		FVector maxRoadPos;

		if (maxPoint.Num() > 0)
		{
			maxRoadPos = maxPoint[1]->GetComponentLocation();
			currRoadEdgePos = maxRoadPos;
		}

		if ((checkerPos.X >= minRoadPos.X && checkerPos.X <= maxRoadPos.X) &&
			(checkerPos.Y >= minRoadPos.Y && checkerPos.Y <= maxRoadPos.Y))
		{
			//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, "TRUE");
			overlapCount++;

			return true;
		}

	}
	//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Green, "FALSE");
	return false;
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

FVector AChecker::OffsetRoadLocation()
{
	switch (stateDirection)
	{
	case 0:
	{
		FVector currLoc = this->GetActorLocation();
		FVector offsetVector = FVector(-200, -200, 0) + currLoc;
		return offsetVector;
		break;
	}
	case 1:
	{
		FVector currLoc = this->GetActorLocation();
		FVector offsetVector = FVector(200 - roadLength, 200, 0) + currLoc;
		return offsetVector;
		break;
	}
	case 2:
	{
		FVector currLoc = this->GetActorLocation();
		FVector offsetVector = FVector(200, -200, 0) + currLoc;
		return offsetVector;
		break;
	}
	case 3:
	{
		FVector currLoc = this->GetActorLocation();
		FVector offsetVector = FVector(-200, 200 - roadLength, 0) + currLoc;
		return offsetVector;
		break;
	}
	}

	return this->GetActorLocation();
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
			roadList.Add(GetWorld()->SpawnActor<ARoad>(bpRoad, OffsetRoadLocation(),
				FRotator(0.0f, 0.0f, 0.0f), spawnParams));
		}
		else if (OverlapCheck() && overlapCount > 2)
		{
			Destroy(this);
		}
		this->SetActorLocation(this->GetActorLocation() + offsetVector);
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

EBranchDirection AChecker::GetDirection()
{
	return branchDir;
}

TArray<class ARoad*> AChecker::GetRoadList()
{
	return roadList;
}

void AChecker::SetDirection(bool direction, int stateDir)
{
	dir = direction;
	stateDirection = stateDir;
}

void AChecker::SetBranchDirection(EBranchDirection branchDirection)
{
	branchDir = branchDirection;

}


