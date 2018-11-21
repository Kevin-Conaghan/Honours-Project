// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyProcMesh.h"
#include "Road.h"
#include "EngineGlobals.h"
#include "Engine/Engine.h"
#include "Components/BoxComponent.h"
#include "LotCalculator.generated.h"

UCLASS()
class PROCGENCITY_API ALotCalculator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALotCalculator();

	UPROPERTY(VisibleAnywhere, Category = "Distances")
		TArray<float> xDistances;
	
	UPROPERTY(VisibleAnywhere, Category = "Distances")
		TArray<float> yDistances;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TArray<class ARoad*> roads;

	UPROPERTY(VisibleAnywhere, Category = "Vertices")
		float xVert;

	UPROPERTY(VisibleAnywhere, Category = "Vertices")
		float yVert;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<class AMyProcMesh> bpProcMesh;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Box Collider")
		UBoxComponent* proxBox;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	class ARoad* endPoint;
	AMyProcMesh* procMesh;

	float roadIterator;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void OnConstruction(const FTransform& Transform) override;

	void FindRoads();
	void CalculateXY();
	void CalculatePlot();
};
