// Fill out your copyright notice in the Description page of Project Settings.

#include "LotCalculator.h"
#include "EngineUtils.h"
#include "Engine.h"
#include "MyProcMesh.h"


// Sets default values
ALotCalculator::ALotCalculator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//oinitialise a box collider
	proxBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider"));
	RootComponent = proxBox;
}

// Called when the game starts or when spawned
void ALotCalculator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALotCalculator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALotCalculator::OnConstruction(const FTransform & Transform)
{
	if (GetWorld() != nullptr)
	{
		//this method will be deprecated 
		//find all the roads in the scene
		FindRoads();

		if (roads.Max() != 0)
		{
			//if there are roads in the scene calculate the length and breadth 
			CalculateXY();

			if (xDistances.Max() > 2 && yDistances.Max() > 2)
			{
				//add each distance together to be ready to send to the building mesh to be generated
				CalculatePlot();
			}
		}

		if (procMesh == nullptr)
		{
			//Set the spawn parameters of the blueprint 
			FActorSpawnParameters spawnParams;
			spawnParams.Owner = this;
			spawnParams.Instigator = Instigator;

			procMesh = GetWorld()->SpawnActor<AMyProcMesh>(bpProcMesh, this->GetActorLocation(), this->GetActorRotation(), spawnParams);

			if (procMesh != nullptr)
			{
				//set the x and y vertices of the building
				procMesh->SetXYVert(xVert, yVert);
				//ensure that it generates using the calculation method instead of generating the default mesh
				procMesh->SetCalc(true);
				//generate the mesh
				procMesh->DrawMesh();
			}
		}
	}
}

void ALotCalculator::FindRoads()
{
	//find all the road objects in the scene 
	for (TActorIterator<ARoad> obstIterator(GetWorld()); obstIterator; ++obstIterator)
	{
		ARoad* roadFound = *obstIterator;

		if (roadFound != nullptr)
		{
			//add each road object to an array
			roads.Add(roadFound);
		}
	}
}

void ALotCalculator::CalculateXY()
{
	roadIterator = 0;

	//calculate the breadth of the plots
	for (int i = 0; i < 4; i++)
	{
		if (roads.Max() > 0)
		{
			ARoad* startPoint = roads[i];

			if (startPoint != nullptr && endPoint != nullptr)
			{
				FVector start = startPoint->GetActorLocation();
				FVector end = endPoint->GetActorLocation();
				xDistances.Add(start.X - end.X);
			}
			endPoint = startPoint;
		}

		roadIterator = i;
	}
	//calculate the breadth of the plots
	for (int i = roadIterator; i < 4; i++)
	{
		if (roads.Max() > 0)
		{
			ARoad* startPoint = roads[i];

			if (startPoint != nullptr && endPoint != nullptr)
			{
				FVector start = startPoint->GetActorLocation();
				FVector end = endPoint->GetActorLocation();
				yDistances.Add(start.Y - end.Y);
			}
			endPoint = startPoint;
		}
	}
}

void ALotCalculator::CalculatePlot()
{
	//get the sum of the length and breadth 
	for (int i = 0; i < xDistances.Num(); i++)
	{
		xVert += xDistances[i];	
		yVert += yDistances[i];
	}
}


