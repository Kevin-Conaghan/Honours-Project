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
	virtual void OnConstruction(const FTransform& Transform) override;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void CreateSplineMesh();
	void AddSpline(FVector locStart, FVector locEnd, FVector tanStart, FVector tanEnd, float numSplinePoints);


	UPROPERTY()
		USplineComponent* mySplineComponent;

	UPROPERTY()
		USceneComponent* mySceneComponent;

	UPROPERTY(EditAnywhere,  Category = "Mesh")
		UStaticMesh* myMeshComponent;




	float numSplinePoints;
	float splineCount;



};
