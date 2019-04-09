// Fill out your copyright notice in the Description page of Project Settings.

#include "Placement.h"


// Sets default values
APlacement::APlacement()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	point = FVector(0.0f, 0.0f, 0.0f);
}

void APlacement::OnConstruction(const FTransform & transform)
{
	/*  1. Find all the checkers that are in a designated direction
		2. Get the road data, e.g road length, road directiom.
		3. randomly pick a point along the street and set that as the initial point to sub-divide.
		4. assign the plot points along the sub-division lines in an anti-clockwise order. 
	*/
}

void APlacement::GetCurrentCheckers()
{
	for (TActorIterator<AChecker> actorItr(GetWorld()); actorItr; ++actorItr)
	{
		//find all the checker objects in the scene and divide them up into arrays according to their direction
		AChecker* currChecker = *actorItr;

		switch (currChecker->GetDirection())
		{
		case EBranchDirection::EB_UP:				//UP
			upCheckers.Add(currChecker);
			break;
		case EBranchDirection::EB_DOWN:				//DOWN
			downCheckers.Add(currChecker);
			break;
		case EBranchDirection::EB_LEFT:				//LEFT
			leftCheckers.Add(currChecker);
			break;
		case EBranchDirection::EB_RIGHT:			//RIGHT
			rightCheckers.Add(currChecker);
			break;
		}
	}

	AllocatePoint(upCheckers);
	AllocatePoint(downCheckers);
}

void APlacement::AllocatePoint(TArray<class AChecker*> currCheckers)
{
	//for each checker in the designated direction
	for (int i = 0; i < currCheckers.Num(); ++i)
	{
		//get the roads that have been spawned by the current checker
		TArray<ARoad*> roadList = currCheckers[i]->GetRoadList();

		//only divide the lots if the checker has generated roads.
		if (roadList.Num() > 0)
		{
			//divide up the lot and spawn a mesh
			DivideLots(currCheckers[i]->GetDirection(), roadList, currCheckers[i]->roadLength);
			DestroyPoints();
		}
	}
}

void APlacement::DivideLots(EBranchDirection checkerDir, TArray<ARoad*> roadList, float roadLength)
{
	//Set the spawn parameters of the blueprint 
	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	spawnParams.Instigator = Instigator;

	//get the total length of roads horizontally - 1 road length because unreals points are at the corners. 
	int maxRoadLength= roadList.Max() - 1;
	//get the total length of the roads vertically
	int maxRoadHeight = roadList.Max();
		FVector initialRoadLoc = roadList[0]->GetActorLocation();

	switch (checkerDir)
	{
	case EBranchDirection::EB_UP:
	{
		TArray<FVector> upPoints;

		//add each position for all lots in the up direction
		upPoints.Add(initialRoadLoc + FVector(0.0f, roadLength, 0.0f));											//BOTTOM LEFT
		upPoints.Add(initialRoadLoc + FVector(-roadLength * maxRoadLength, 400.0f, 0.0f));						//BOTTOM RIGHT
		upPoints.Add(initialRoadLoc + FVector(-roadLength * maxRoadLength, roadLength * maxRoadHeight, 0.0f));	//TOP RIGHT
		upPoints.Add(initialRoadLoc + FVector(0.0f, roadLength * maxRoadHeight, 0.0f));							//TOP LEFT
		

		//spawn the points in an anti-clockwise order
		for (int i = 0; i < upPoints.Num(); ++i)
		{
			SpawnPoints(upPoints[i], i, spawnParams);
		}

		//create the mesh with the allocated points
		ANewProcMesh* mesh1 = GetWorld()->SpawnActor<ANewProcMesh>(bpNewProcMesh, this->GetActorLocation(), 
			this->GetActorRotation(), spawnParams);

		//empty the array
		upPoints.Empty();
	}
		break;
	case EBranchDirection::EB_DOWN:
	{
		TArray<FVector> downPoints;

		//add each position for all the lots in the down direction
		downPoints.Add(initialRoadLoc + FVector(0.0f, -roadLength * maxRoadLength, 0.0f));							//BOTTOM LEFT
		downPoints.Add(initialRoadLoc + FVector(-roadLength * maxRoadHeight, -roadLength * maxRoadLength, 0.0f));	//BOTTOM RIGHT
		downPoints.Add(initialRoadLoc + FVector(-roadLength * maxRoadHeight, roadLength, 0.0f));					//TOP RIGHT
		downPoints.Add(initialRoadLoc + FVector(0.0f, roadLength, 0.0f));											//TOP LEFT
		
		//create a random point between the initial road location and the last road location
		//float randPoint = FMath::RandRange(roadList[0]->GetActorLocation().Y, roadList[roadList.Num() - 1]->GetActorLocation().Y);

		//set the temp location vector's y coord to the new random value
		//roadLength.Y = randPoint;

		//spawn the points in an anti-clockwise order
		for (int i = 0; i < downPoints.Num(); ++i)
		{
			SpawnPoints(downPoints[i], i, spawnParams);
		}

		//generate the mesh using the points allocated
		ANewProcMesh* mesh1 = GetWorld()->SpawnActor<ANewProcMesh>(bpNewProcMesh, this->GetActorLocation(), 
			this->GetActorRotation(), spawnParams);

		//empty the array
		downPoints.Empty();
	}
		break;
	}
}

void APlacement::SpawnPoints(FVector location, int pointNumber, FActorSpawnParameters spawnParams)
{
	/*
	spawn a plot point at the specified position with a number as a label, this makes it easier for the mesh to sort the points in an anti-
	clockwise order 
	*/
	ALotDesigner* plotPoint = GetWorld()->SpawnActor<ALotDesigner>(bpLotDesigner, location, this->GetActorRotation(), spawnParams);
	plotPoint->SetActorLabel(FString::FromInt(pointNumber));
	plotPoints.Add(plotPoint);
}

void APlacement::DestroyPoints()
{
	//when the mesh has been created destroy all the points in the scene and empty the array to get it ready for the next plot allocation
	for (int i = 0; i < plotPoints.Num(); ++i)
	{	
		plotPoints[i]->Destroy();
	}
	plotPoints.Empty();
}
