// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
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

	UPROPERTY(EditAnywhere, Category = "Find Landmarks")
		bool isSearching;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* myMeshComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Prox box")
		UBoxComponent* proxBox;


protected:
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	TArray<class ARoad*> roadCollisions;
	
	TArray<ALotDesigner*> plotpoints;
	TArray<FVector>plotLocations;
	bool pointCount;
	bool isColliding;




	TArray<FVector> GetPlotLocations();

	virtual void OnConstruction(const FTransform& Transform) override;
	void CollisionDetection();
};
