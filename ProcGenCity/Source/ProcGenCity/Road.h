// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "Manager.h"
#include "Components/BoxComponent.h"
#include "Road.generated.h"

UCLASS()
class PROCGENCITY_API ARoad : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ARoad();

	virtual void OnConstruction(const FTransform& transform) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UMaterial* onMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
		float roadLength;

	UPROPERTY(VisibleAnywhere, Category = "Point")
		class USceneComponent* maxPoint;

protected:


public:

	void SetMaterial(UMaterial* mat);
	float GetRoadLength();
};

