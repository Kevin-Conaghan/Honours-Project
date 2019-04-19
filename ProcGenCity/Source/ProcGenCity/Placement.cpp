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
	//AllocatePoint(leftCheckers);
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
	//get the total length of roads horizontally - 1 road length because unreals points are at the corners. 
	int maxRoadLength= roadList.Max() - 1;
	//get the total length of the roads vertically
	int maxRoadHeight = roadList.Max();
	FVector initialRoadLoc = roadList[0]->GetActorLocation();

	switch (checkerDir)
	{
	case EBranchDirection::EB_UP:
	{
		TArray<FVector> boundPoints;

		//add each position for all lots in the up direction
		boundPoints.Add(initialRoadLoc + FVector(0.0f, roadLength, 0.0f));											//BOTTOM LEFT
		boundPoints.Add(initialRoadLoc + FVector(-roadLength * maxRoadLength, roadLength, 0.0f));						//BOTTOM RIGHT
		boundPoints.Add(initialRoadLoc + FVector(-roadLength * maxRoadLength, roadLength * maxRoadHeight, 0.0f));	//TOP RIGHT
		boundPoints.Add(initialRoadLoc + FVector(0.0f, roadLength * maxRoadHeight, 0.0f));							//TOP LEFT

		float length = (boundPoints[0].X - boundPoints[1].X);	//get the length of the building mesh
		float breadth = (boundPoints[3].Y - boundPoints[0].Y);	//get the breadth of the building mesh

		float totalBuildingArea = 0;
		float lotArea = CalculateArea(length, breadth);			//calculate the area of the plot point

		bool isInside = false;
		InitialisePointData(boundPoints, length, breadth);

		//empty the array
		lotPoints.Empty();
		DestroyPoints();

		//empty the array
		boundPoints.Empty();
	}
	break;
	case EBranchDirection::EB_DOWN:
	{
		TArray<FVector> boundPoints;

		//these four points are the boundary points within the plot of land
		boundPoints.Add(initialRoadLoc + FVector(0.0f, -roadLength * maxRoadLength, 0.0f));							//BOTTOM LEFT
		boundPoints.Add(initialRoadLoc + FVector(-roadLength * maxRoadHeight, -roadLength * maxRoadLength, 0.0f));	//BOTTOM RIGHT
		boundPoints.Add(initialRoadLoc + FVector(-roadLength * maxRoadHeight, roadLength, 0.0f));					//TOP RIGHT
		boundPoints.Add(initialRoadLoc + FVector(0.0f, roadLength, 0.0f));											//TOP LEFT

		float length = (boundPoints[0].X - boundPoints[1].X);	//get the length of the building mesh
		float breadth = (boundPoints[3].Y - boundPoints[0].Y);	//get the breadth of the building mesh

		float totalBuildingArea = 0;
		float lotArea = CalculateArea(length, breadth);			//calculate the area of the plot point

		bool isInside = false;

		InitialisePointData(boundPoints, length, breadth);

		//empty the array
		lotPoints.Empty();
		DestroyPoints();


		boundPoints.Empty();
	}
	break;
	//case EBranchDirection::EB_LEFT:
	//{
	//	TArray<FVector> boundPoints;
	//
	//
	//	//these four points are the boundary points within the plot of land
	//	boundPoints.Add(initialRoadLoc + FVector(roadLength * maxRoadHeight, roadLength, 0.0f));						//BOTTOM LEFT
	//	boundPoints.Add(initialRoadLoc + FVector(0.0f, roadLength,  0.0f));												//BOTTOM RIGHT
	//	boundPoints.Add(initialRoadLoc + FVector(0.0f, (roadLength * maxRoadHeight + 1), 0.0f));						//TOP RIGHT
	//	boundPoints.Add(initialRoadLoc + FVector(roadLength * maxRoadHeight, roadLength * (maxRoadHeight + 1), 0.0f));	//TOP LEFT
	//
	//	float length = (boundPoints[0].X - boundPoints[1].X);	//get the length of the building mesh
	//	float breadth = (boundPoints[3].Y - boundPoints[0].Y);	//get the breadth of the building mesh
	//
	//	float totalBuildingArea = 0;
	//	float lotArea = CalculateArea(length, breadth);			//calculate the area of the plot point
	//
	//	bool isInside = false;
	//
	//	InitialisePointData(boundPoints, length, breadth);
	//
	//	//empty the array
	//	lotPoints.Empty();
	//	DestroyPoints();
	//
	//	boundPoints.Empty();
	//}
	//break;
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

float APlacement::CalcPoints(TArray<FVector> boundPoints)
{
	//generate a random point along the x-axis between the bound points
	float randPointX = FMath::RandRange(boundPoints[0].X, boundPoints[1].X);

	FVector point1 = GenerateRandPointX(boundPoints[0].X, boundPoints[1].X, boundPoints[0]);
	FVector point2 = GenerateRandPointX(point1.X, boundPoints[1].X, point1);
	FVector point3 = GenerateRandPointY(boundPoints[0].Y, boundPoints[3].Y, point2);
	FVector point4 = point3;
	point4.X = point1.X;

	lotPoints.Add(point1);		//BOTTOM LEFT
	lotPoints.Add(point2);		//BOTTOM RIGHT
	lotPoints.Add(point3);		//TOP RIGHT
	lotPoints.Add(point4);		//TOP LEFT

	currLength = (boundPoints[0].X - point1.X);
	currBreadth = (point3.Y - boundPoints[0].Y);

	if (currLength < 0)
	{
		currLength = currLength * -1;
	}

	if (currBreadth < 0)
	{
		currBreadth = currBreadth * -1;
	}

	return CalculateArea(currLength, currBreadth);
}

FVector APlacement::GenerateRandPointX(float min, float max, FVector basePoint)
{
	float randVal = FMath::RandRange(min, max);	//generate random number
	FVector randPoint = basePoint;				
	randPoint.X = randVal;						//offset the base point
	
	return randPoint;
}

FVector APlacement::GenerateRandPointY(float min, float max, FVector basePoint)
{
	float randVal = FMath::RandRange(min, max);
	FVector randPoint = basePoint;
	randPoint.Y = randVal;

	return randPoint;
}

float APlacement::CalculateArea(float length, float breadth)
{
	float area = length * breadth;
	return area;
}

void APlacement::InitialisePointData(TArray<FVector> boundPoints, float length, float breadth)
{
	//Set the spawn parameters of the blueprint 
	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	spawnParams.Instigator = Instigator;

	FVector centrePoint = boundPoints[0] + FVector(-length / 2, breadth / 2, 0.0f);
	FVector botCentre = boundPoints[0] + FVector(-length / 2, 0.0f, 0.0f);
	FVector topCentre = boundPoints[3] + FVector(-length / 2, 0.0f, 0.0f);
	FVector leftCentre = centrePoint + FVector(length / 2, 0.0f, 0.0f);
	FVector rightCentre = centrePoint + FVector(-length / 2, 0.0f, 0.0f);

	currLength = length / 2;
	currBreadth = breadth / 2;

	//initialise points for referencing 
	TArray<FVector> botLeftPoints;
	TArray<FVector> botRightPoints;
	TArray<FVector> topLeftPoints;
	TArray<FVector> topRightPoints;

	//bottom left section 
	botLeftPoints.Add(boundPoints[0]);
	botLeftPoints.Add(botCentre);
	botLeftPoints.Add(centrePoint);
	botLeftPoints.Add(leftCentre);
	GenerateBuilding(botLeftPoints, spawnParams);

	//bottom right section
	botRightPoints.Add(botCentre);
	botRightPoints.Add(boundPoints[1]);
	botRightPoints.Add(rightCentre);
	botRightPoints.Add(centrePoint);
	GenerateBuilding(botRightPoints, spawnParams);

	//top right section
	topRightPoints.Add(centrePoint);
	topRightPoints.Add(rightCentre);
	topRightPoints.Add(boundPoints[2]);
	topRightPoints.Add(topCentre);
	GenerateBuilding(topRightPoints, spawnParams);

	//top left section
	topLeftPoints.Add(leftCentre);
	topLeftPoints.Add(centrePoint);
	topLeftPoints.Add(topCentre);
	topLeftPoints.Add(boundPoints[3]);
	GenerateBuilding(topLeftPoints, spawnParams);

}

void APlacement::GenerateBuilding(TArray<FVector> subLot, FActorSpawnParameters spawnParams)
{
	bool isInside;

	for (int i = 0; i < subLot.Num(); ++i)
	{
		isInside = BuildingOverlapCheck(subLot[i]);

		if (!isInside)
		{
			SpawnPoints(subLot[i], i, spawnParams);
		
		}
		else
		{
			break;
		}

	}

	if (!isInside)
	{
		//create the mesh with the allocated points
		ANewProcMesh* mesh1 = GetWorld()->SpawnActor<ANewProcMesh>(bpNewProcMesh, subLot[0],
			this->GetActorRotation(), spawnParams);
		DestroyPoints();
	}
}

bool APlacement::BuildingOverlapCheck(FVector lotPoint)
{
	bool isInside = false;

	for (TActorIterator<ANewProcMesh> actorItr(GetWorld()); actorItr; ++actorItr)
	{
		ANewProcMesh* currBuilding = *actorItr;
		FVector minBuildingPos = currBuilding->GetActorLocation();
		FVector maxBuildingPos = minBuildingPos + FVector(-currLength, currBreadth, 0.0f);


		//normal AABB collision
		if ((lotPoint.X <= maxBuildingPos.X && lotPoint.X >= minBuildingPos.X) &&
			(lotPoint.Y <= maxBuildingPos.Y && lotPoint.Y >= minBuildingPos.Y))
		{
			isInside = true;
			//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, "TRUE");
		}
		else
		{
			isInside = false;
			//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Green, "FALSE");
		}
	}
	return isInside;
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
