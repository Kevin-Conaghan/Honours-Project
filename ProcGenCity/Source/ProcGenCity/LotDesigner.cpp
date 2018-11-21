// Fill out your copyright notice in the Description page of Project Settings.

#include "LotDesigner.h"
#include "Components/StaticMeshComponent.h"
#include "ConstructorHelpers.h"
#include "Road.h"


// Sets default values
ALotDesigner::ALotDesigner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//initialise a box collider and set is as the root component
	proxBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Prox Box"));
	RootComponent = proxBox;

	//initialise the mesh 
	myMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	const ConstructorHelpers::FObjectFinder<UStaticMesh> meshObj(TEXT("/Game/StarterContent/Shapes/Shape_Cone"));
	myMeshComponent->SetStaticMesh(meshObj.Object);
	myMeshComponent->SetupAttachment(RootComponent);

	//initialise the plot point 
	pointCount = 0;
	plotpoints.Add(this);
	plotLocations.Add(this->GetActorLocation());
	isSearching = false;
}

// Called every frame
void ALotDesigner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

TArray<FVector> ALotDesigner::GetPlotLocations()
{
	return plotLocations;
}

void ALotDesigner::OnConstruction(const FTransform & Transform)
{
	if (GetWorld())
	{
		//if the user is creating a plot using 4 points use this method to get the locations of each point for the building to reference
		if (isSearching)
		{
			for (TActorIterator<ALotDesigner> ObstIterator(GetWorld()); ObstIterator; ++ObstIterator)
			{
				class ALotDesigner* foundPoint = *ObstIterator;

				if (foundPoint != nullptr)
				{
					plotLocations.Add(foundPoint->GetActorLocation());
					DrawDebugLine(GetWorld(), this->GetActorLocation(), foundPoint->GetActorLocation(), FColor::Red, true, 5.0f, (uint8)'\100', 5.0f);
				}
			}
		}

		//collision detection for calculating a plot of land
		CollisionDetection();
	}
}

void ALotDesigner::CollisionDetection()
{
	//this loop iterates through every road in the scene
	for (TActorIterator<ARoad> obstIterator(GetWorld()); obstIterator; ++obstIterator)
	{
		//add a tag variable to ensure that it is colliding with a road
		FName roadTag = FName(TEXT("Road"));
		class ARoad* roadFound = *obstIterator;

		if (roadFound != nullptr)
		{
			if (roadFound->ActorHasTag(roadTag))
			{
				if (roadFound && proxBox->IsOverlappingActor(roadFound))
				{
					//add the colliding roads to a list
					roadCollisions.Add(roadFound);
					isColliding = true;
					
					//once it has been determined that this plot point is colliding with atleast 3 road objects then do the calculation for 
					//the plot of land so the building can be place on it 
				}
			}
			else
			{
				isColliding = false;
			}
		}
	}

	//if this plot point is not colliding with atleast three roads then destroy it as it is not inside a plot of land
	if (roadCollisions.Num() < 3 && isColliding)
	{
		
		Destroy();
	}
}



