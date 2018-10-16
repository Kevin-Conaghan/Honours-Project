// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"
#include "Components/SceneComponent.h"
#include "SplineNetwork.generated.h"

UCLASS()
class PROCGENCITY_API ASplineNetwork : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASplineNetwork();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void OnConstruction(const FTransform& Transform) override;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spline")
		USplineComponent* mySplineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Scene")
		USceneComponent* mySceneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Scene")
		USplineMeshComponent* mySplineMeshComponent;

	float numSplinePoints;
	float splineCount;



};
