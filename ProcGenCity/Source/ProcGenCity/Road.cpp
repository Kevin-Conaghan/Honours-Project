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
	
	onMaterial = CreateDefaultSubobject<UMaterial>(TEXT("Material"));
	mesh->SetMaterial(0, onMaterial);


	RootComponent = mesh;

	maxPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Point"));
	maxPoint->SetupAttachment(mesh);

	maxPoint->SetWorldLocation(this->GetActorLocation() + FVector(400.0f, 400.0f, 0.0f));
}


void ARoad::SetDirection(bool direction, int stateDirection)
{
	dir = direction;
	stateDir = stateDirection;
}

bool ARoad::GetDirection()
{
	return dir;
}

float ARoad::GetRoadLength()
{
	return roadLength;
}

