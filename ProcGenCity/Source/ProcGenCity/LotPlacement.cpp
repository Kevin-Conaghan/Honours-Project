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
	//only place the points if they arent already in the scene
	if (pointFour == nullptr && isPlotted)
	{
		PlacePoints();
	}
	else
	{
		//update the location of each point and the mesh so that it sticks to the road
		pointOne->SetActorLocation(this->GetActorLocation() - FVector(300.0f, 0.0f, 0.0f));
		pointTwo->SetActorLocation(this->GetActorLocation() - FVector(300.0f, -300.0f, 0.0f));
		pointThree->SetActorLocation(this->GetActorLocation() - FVector(50.0f, -300.0f, 0.0f));
		pointFour->SetActorLocation(this->GetActorLocation() - FVector(50.0f, 0.0f, 0.0f));

		procMesh->SetActorLocation(pointOne->GetActorLocation());
	}
	
	//only place the building if there is more than 3 points
	if (plots.Max() > 3 && procMesh == nullptr)
	{
		PlaceBuilding();
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
			//spawn the 4 points at a position that is at an offset of the road
			pointOne = GetWorld()->SpawnActor<ALotDesigner>(bpLotDesigner,currPos - FVector(300.0f, 0.0f, 0.0f), currRot, spawnParams);
			pointTwo = GetWorld()->SpawnActor<ALotDesigner>(bpLotDesigner, currPos - FVector(300.0f, -300.0f, 0.0f),currRot, spawnParams);
			pointThree = GetWorld()->SpawnActor<ALotDesigner>(bpLotDesigner,currPos - FVector(50.0f, -300.0f, 0.0f), currRot, spawnParams);
			pointFour = GetWorld()->SpawnActor<ALotDesigner>(bpLotDesigner,currPos - FVector(50.0f, 0.0f, 0.0f), currRot, spawnParams);

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
	FVector currPos = pointFour->GetActorLocation();
	FRotator currRot = this->GetActorRotation();

	if (GetWorld() != nullptr)
	{
		if (procMesh == nullptr)
		{
			//spawn the mesh 
			procMesh = GetWorld()->SpawnActor<AMyProcMesh>(bpProcMesh, currPos, currRot, spawnParams);
		}

		if (procMesh != nullptr)
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

