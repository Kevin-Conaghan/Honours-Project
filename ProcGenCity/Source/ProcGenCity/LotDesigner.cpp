// Fill out your copyright notice in the Description page of Project Settings.

#include "LotDesigner.h"


// Sets default values
ALotDesigner::ALotDesigner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	myMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));

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
	if (isSearching)
	{
		for (TActorIterator<ALotDesigner> ObstIterator(GetWorld()); ObstIterator; ++ObstIterator)
		{
			class ALotDesigner* foundPoint = *ObstIterator;

			if (foundPoint != nullptr)
			{
				plotLocations.Add(foundPoint->GetActorLocation());
				DrawDebugLine(GetWorld(), this->GetActorLocation(), foundPoint->GetActorLocation(), FColor::Red, true, 100.0f, (uint8)'\100', 5.0f);
			}
		}
	}
}

