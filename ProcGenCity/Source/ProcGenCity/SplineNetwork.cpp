// Fill out your copyright notice in the Description page of Project Settings.

#include "SplineNetwork.h"


// Sets default values
ASplineNetwork::ASplineNetwork()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASplineNetwork::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASplineNetwork::OnConstruction(const FTransform & Transform)
{
}

// Called every frame
void ASplineNetwork::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

