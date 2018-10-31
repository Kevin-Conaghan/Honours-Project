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
}

// Called every frame
void ALotDesigner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}

void ALotDesigner::OnConstruction(const FTransform & Transform)
{

	for (TActorIterator<ALotDesigner> ObstIterator(GetWorld()); ObstIterator; ++ObstIterator)
	{
		class ALotDesigner* foundPoint = *ObstIterator;

		if (foundPoint != nullptr)
		{
			plotpoints.Add(foundPoint);
			FColor red = FColor::Red;

			if (plotpoints.Num() == 2)
			{
				FVector start = this->GetActorLocation();
				FVector end = foundPoint->GetActorLocation();
				distances[pointCount] = start - end;
			}
			else if (plotpoints.Num() > 2)
			{
				class ALotDesigner* pointOne = plotpoints[pointCount];

				FVector start = pointOne->GetActorLocation();
				FVector end = foundPoint->GetActorLocation();
				plotpoints.Add(foundPoint);

				distances[pointCount] = start - end;
			}
		}
		pointCount++;
	}

	if (distances.Num() == 2)
	{
		FVector length = distances[0] / 2;
		FVector breadth = distances[1] / 2;
		FVector centrePoint = length + breadth;

		DrawDebugBox(GetWorld(), centrePoint, FVector(200, 200, 200), FColor::Red, true, 10.0f);
		pointCount = 0;
	}
}

