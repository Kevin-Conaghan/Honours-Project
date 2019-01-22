// Fill out your copyright notice in the Description page of Project Settings.

#include "LotPlacement.h"
#include "Components/StaticMeshComponent.h"
#include "LotDesigner.h"
#include "MyProcMesh.h"

// Sets default values
ALotPlacement::ALotPlacement()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//initialise the road placement mesh
	myMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	const ConstructorHelpers::FObjectFinder<UStaticMesh> meshObj(TEXT("/Game/StarterContent/Architecture/Floor_400x400"));
	
	myMeshComponent->SetStaticMesh(meshObj.Object);

	//initialise each point and attach them to the road
	pointOne = CreateDefaultSubobject<ALotDesigner>(TEXT("Point One"));
	pointTwo = CreateDefaultSubobject<ALotDesigner>(TEXT("Point Two"));
	pointThree = CreateDefaultSubobject<ALotDesigner>(TEXT("Point Three"));
	pointFour = CreateDefaultSubobject<ALotDesigner>(TEXT("Point Four"));

	pointOne->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	pointTwo->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	pointThree->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	pointFour->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);

	isPlotted = true;
	isCentre = true;
}

// Called when the game starts or when spawned
void ALotPlacement::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALotPlacement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALotPlacement::OnConstruction(const FTransform & Transform)
{
	if (GetWorld() != nullptr)
	{
		//if the user wants a road generated
		if (isGenerating)
		{
			GenerateRoad();
		}

		//generate a building depending on user input
		GenerateBuilding();

		if (hasDivided && procMesh != nullptr)
		{
			//divide the plot by half and fill the two plots with buildings
			SubDivide();
		}
	}
}

void ALotPlacement::PlacePoints()
{
	//Set the spawn parameters of the blueprint 
	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	spawnParams.Instigator = Instigator;

	//get the current position and rotation fo the road 
	FVector currPos = this->GetActorLocation();
	FRotator currRot = this->GetActorRotation();

	if (GetWorld() != nullptr && isPlotted)
	{
		if (this != nullptr && pointFour == nullptr)
		{
			float randomNumber = FMath::RandRange(0.0f, 100.0f);

			if (randomNumber > 60)
			{
				//spawn the 4 points at a position that is at an offset of the road
				pointOne = GetWorld()->SpawnActor<ALotDesigner>(bpLotDesigner, currPos - FVector(300.0f, 0.0f, 0.0f), currRot, spawnParams);
				pointTwo = GetWorld()->SpawnActor<ALotDesigner>(bpLotDesigner, currPos - FVector(300.0f, -300.0f, 0.0f), currRot, spawnParams);
				pointThree = GetWorld()->SpawnActor<ALotDesigner>(bpLotDesigner, currPos - FVector(50.0f, -300.0f, 0.0f), currRot, spawnParams);
				pointFour = GetWorld()->SpawnActor<ALotDesigner>(bpLotDesigner, currPos - FVector(50.0f, 0.0f, 0.0f), currRot, spawnParams);
			}
			else
			{
				//spawn the 4 points at a position that is at an offset of the road
				pointOne = GetWorld()->SpawnActor<ALotDesigner>(bpLotDesigner, currPos + FVector(700.0f, 0.0f, 0.0f), currRot, spawnParams);
				pointTwo = GetWorld()->SpawnActor<ALotDesigner>(bpLotDesigner, currPos + FVector(700.0f, 300.0f, 0.0f), currRot, spawnParams);
				pointThree = GetWorld()->SpawnActor<ALotDesigner>(bpLotDesigner, currPos + FVector(450.0f, 300.0f, 0.0f), currRot, spawnParams);
				pointFour = GetWorld()->SpawnActor<ALotDesigner>(bpLotDesigner, currPos + FVector(450.0f, 0.0f, 0.0f), currRot, spawnParams);
			}
			//add the points to an array
			plots.Add(pointOne);
			plots.Add(pointTwo);
			plots.Add(pointThree);
			plots.Add(pointFour);
		}
	}
	isPlotted = false;
}

void ALotPlacement::PlaceBuilding()
{
	//Set the spawn parameters of the blueprint 
	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	spawnParams.Instigator = Instigator;

	//get the current position of a point
	FVector currPos = pointOne->GetActorLocation();
	FRotator currRot = this->GetActorRotation();

	if (GetWorld() != nullptr)
	{
		if (procMesh == nullptr)
		{
			//spawn the mesh 
			procMesh = GetWorld()->SpawnActor<AMyProcMesh>(bpProcMesh, currPos, currRot, spawnParams);
		}

		if (procMesh != nullptr && hasGenerated)
		{
			for  (int i  = 0; i  < plots.Max();  i++)
			{
				//pass the array into the mesh so that it can calculate the distance between the points
				procMesh->SetPlots(plots[i]);
			}

			procMesh->CalculateDistances();
			procMesh->DrawMesh();
		}
	}
}

void ALotPlacement::SubDivide()
{
	//get the distance betweent the plot points
	if (plots.Max() != 0 && hasDivided)
	{
		for (int i = 0; i < plots.Max(); i++)
		{
			ALotDesigner* foundPointStart = plots[i];
			if (foundPointStart != nullptr && foundPointEnd != nullptr)
			{
				FVector end = foundPointEnd->GetActorLocation();
				FVector start = foundPointStart->GetActorLocation();
				distances.Add(start - end);
			}
			foundPointEnd = foundPointStart;
		}
	}

	if ( pointFour != nullptr && distances.Max() > 2)
	{
		//half the distance then add the point's location this will get the half way point between them 
		centrePoints.Add(distances[0] / 2 + pointFour->GetActorLocation());
		centrePoints.Add(distances[0] / 2 + pointOne->GetActorLocation());
	}

	if (centrePoints.Max() != 0)
	{
		//Set the spawn parameters of the blueprint 
		FActorSpawnParameters spawnParams;
		spawnParams.Owner = this;
		spawnParams.Instigator = Instigator;

		if (isCentre)
		{
			//spawn two plot points at the half way point on each side 
			centrePointOne = GetWorld()->SpawnActor<ALotDesigner>(bpLotDesigner, centrePoints[0], this->GetActorRotation(), spawnParams);
			centrePointTwo = GetWorld()->SpawnActor<ALotDesigner>(bpLotDesigner, centrePoints[1], this->GetActorRotation(), spawnParams);

			//empty the array
			distances.Empty();
			isCentre = false;
		}

		if (procMesh != nullptr)
		{
			//empty the array and add the new cooridnates 
			plots.Empty();
			//destroy the procedural mesh
			procMesh->EmptyPlots();
			procMesh->Destroy();
		}

		//when the proc mesh has been deleted create a new one with the halfway points  
		AMyProcMesh* procMeshGenerated = nullptr;
		FVector currPos = pointOne->GetActorLocation();
		FRotator currRot = this->GetActorRotation();
		
		if (GetWorld() != nullptr)
		{
			//spawn the procedural mesh into the scene 
			procMeshGenerated = GetWorld()->SpawnActor<AMyProcMesh>(bpProcMesh, currPos, currRot, spawnParams);
			plots.Add(pointOne);
			plots.Add(pointTwo);
			plots.Add(centrePointOne);
			plots.Add(centrePointTwo);

		}
				
		//send the plot points to the procedural mesh so it can get the distance to generate
		for (int i = 0; i < plots.Max(); i++)
		{
			//send the coordinates to the mesh for calculation 
			procMeshGenerated->SetPlots(plots[i]);
		}

		//calculate the distance between the two points 
		procMeshGenerated->CalculateDistances();
		//draw the building mesh 
		procMeshGenerated->DrawMesh();

		procMesh = procMeshGenerated;
	}
}

void ALotPlacement::GenerateRoad()
{
	if (roads.Num() <= 5)
	{
		//Set the spawn parameters of the blueprint 
		FActorSpawnParameters spawnParams;
		spawnParams.Owner = this;
		spawnParams.Instigator = Instigator;

		//start the process for generating a building on this road
		this->SetHasGenerated(true);

		for (int i = 0; i < 6; i++)
		{
			//for the 1st road spawn it and start the process for generating a building 
			if (i < 1)
			{
				ALotPlacement* roadSpawn = GetWorld()->SpawnActor<ALotPlacement>(bpLotPlacement, this->GetActorLocation() + FVector(0.0f, 400.0f, 0.0f), this->GetActorRotation(), spawnParams);
				roadSpawn->SetHasGenerated(true);

				if (roadSpawn != nullptr)
				{
					//add the spawned road to an array for referencing
					roads.Add(roadSpawn);
					//generate the building for this piece of road
					roadSpawn->GenerateBuilding();
				}
			}
			else
			{
				//spawn another road at the position next to in the y axis of the 1st spawned road
				ALotPlacement* roadSpawn = GetWorld()->SpawnActor<ALotPlacement>(bpLotPlacement, roads[i - 1]->GetActorLocation() + FVector(0.0f, 400.0f, 0.0f), this->GetActorRotation(), spawnParams);

				//start the process for generating a building next to this road
				roadSpawn->SetHasGenerated(true);

				if (roadSpawn != nullptr)
				{
					//add the spawned road to an array for referencing
					roads.Add(roadSpawn);
					//generate the building for this piece of road
					roadSpawn->GenerateBuilding();
				}
			}
		}
	}
}

void ALotPlacement::GenerateBuilding()
{
	//only place the points if they arent already in the scene
	if (pointFour == nullptr && isPlotted && hasGenerated)
	{
		PlacePoints();
	}
	else if (plots.Max() != 0)	
	{

		//update the location of each point and the mesh so that it sticks to the road
		pointOne->SetActorLocation(this->GetActorLocation() - FVector(300.0f, 0.0f, 0.0f));
		pointTwo->SetActorLocation(this->GetActorLocation() - FVector(300.0f, -300.0f, 0.0f));
		pointThree->SetActorLocation(this->GetActorLocation() - FVector(50.0f, -300.0f, 0.0f));
		pointFour->SetActorLocation(this->GetActorLocation() - FVector(50.0f, 0.0f, 0.0f));

		procMesh->SetActorLocation(pointOne->GetActorLocation());
	}

	if (plots.Max() != 0 && procMesh == nullptr && !hasDivided)
	{
		//only place the building if there is more than 3 points
		if (plots.Max() > 3)
		{
			PlaceBuilding();
		}
	}
}
	
void ALotPlacement::SetHasGenerated(bool generated)	
{
	hasGenerated = generated;
}


