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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UMaterial* onMaterial;

	UPROPERTY(VisibleAnywhere, Category = "Point")
		class USceneComponent* maxPoint;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		bool dir;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		int stateDir;

	UPROPERTY(EditAnywhere, Category = "Values")
		float roadLength;



protected:


public:

	void SetDirection(bool direction, int stateDirection);
	bool GetDirection();
	float GetRoadLength();
};

