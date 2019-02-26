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

	RootComponent = mesh;

	boxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));

}


