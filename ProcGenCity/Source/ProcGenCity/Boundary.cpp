// Fill out your copyright notice in the Description page of Project Settings.

#include "Boundary.h"


// Sets default values
ABoundary::ABoundary()
{
	boundaryBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
	RootComponent = boundaryBox;
}

void ABoundary::OnConstruction(const FTransform & Transform)
{

}

int ABoundary::GetMaxHeight()
{
	return maxHeight;
}

int ABoundary::GetMaxWidth()
{
	return maxWidth;
}

bool ABoundary::GetBoundingWidth()
{
	return isBoundingWidth;
}

bool ABoundary::GetBoundingHeight()
{
	return isBoundingHeight;
}

void ABoundary::CalcBoundary()
{
	FindNumBranches();

	if (branches.Num() < maxWidth)
	{
		isBoundingWidth = false;
	}
	else
	{
		isBoundingWidth = true;
	}

	if (branches.Num() < maxHeight)
	{
		isBoundingHeight = false;
	}
	else
	{
		isBoundingHeight = true;
	}	
}

void ABoundary::FindNumBranches()
{
	if (branches.Num() > 0)
	{	
		branches.Empty();
	}

	for (TActorIterator<ABranch> actorItr(GetWorld()); actorItr; ++actorItr)
	{
		ABranch* currBranch = *actorItr;

		if (currBranch != NULL && oldBranch != currBranch)
		{
			branches.Add(currBranch);
		}
		oldBranch = currBranch;
	}
}


