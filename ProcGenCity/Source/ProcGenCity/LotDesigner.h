// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "EngineUtils.h"
#include "EngineGlobals.h"
#include "Engine/Engine.h"
#include "LotDesigner.generated.h"

UCLASS()
class PROCGENCITY_API ALotDesigner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALotDesigner();


protected:
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Find Landmarks")
		bool isSearching;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* myMeshComponent;
	
	TArray<ALotDesigner*> plotpoints;
	TArray<FVector>plotLocations;
	
	TArray<FVector> GetPlotLocations();

	bool pointCount;
	virtual void OnConstruction(const FTransform& Transform) override;

};
