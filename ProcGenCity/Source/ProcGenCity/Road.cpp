// Fill out your copyright notice in the Description page of Project Settings.

#include "Road.h"
#include "ConstructorHelpers.h"
#include "Engine.h"
#include "EngineUtils.h"


// Sets default values
ARoad::ARoad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//initialise the mesh and set it to a road mesh
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	const ConstructorHelpers::FObjectFinder<UStaticMesh> meshObj(TEXT("/Game/StarterContent/Architecture/Floor_400x400"));
	mesh->SetStaticMesh(meshObj.Object);

	calculateLots = false;
}

// Called when the game starts or when spawned
void ARoad::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARoad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARoad::OnConstruction(const FTransform & Transform)
{
	if (GetWorld() != nullptr)
	{
		if (calculateLots)
		{
			//if the user wants to calculate a plot of land it will spawn an object that ill do so 
			if (this != nullptr && lotCalculator == nullptr)
			{
				//Set the spawn parameters of the blueprint 
				FActorSpawnParameters spawnParams;
				spawnParams.Owner = this;
				spawnParams.Instigator = Instigator;

				lotCalculator = GetWorld()->SpawnActor<ALotCalculator>(bpLotCalculator, this->GetActorLocation(), this->GetActorRotation(), spawnParams);
			}
		}
	}

}

