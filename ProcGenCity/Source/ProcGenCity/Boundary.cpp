// Fill out your copyright notice in the Description page of Project Settings.

#include "Boundary.h"


// Sets default values
ABoundary::ABoundary()
{
	boundaryBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
	RootComponent = boundaryBox;
}

void ABoundary::OnConstruction(const FTransform & Transform)
{
}
