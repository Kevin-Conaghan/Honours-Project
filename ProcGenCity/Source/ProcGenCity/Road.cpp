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
	
	onMaterial = CreateDefaultSubobject<UMaterial>(TEXT("Material"));

	RootComponent = mesh;

	maxPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Point"));
	maxPoint->SetupAttachment(mesh);

	maxPoint->SetWorldLocation(this->GetActorLocation() + FVector(roadLength, roadLength, 0.0f));
}


void ARoad::OnConstruction(const FTransform & transform)
{
	if (onMaterial != NULL)
	{
		mesh->SetMaterial(0, onMaterial);
	}
}

void ARoad::SetMaterial(UMaterial* mat)
{
	onMaterial = mat;
	mesh->SetMaterial(0, onMaterial);
}


float ARoad::GetRoadLength()
{
	return roadLength;
}

