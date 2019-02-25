// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Branch.h"
#include "Boundary.generated.h"

UCLASS()
class PROCGENCITY_API ABoundary : public AActor
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, Category = "Collider")
		UBoxComponent* boundaryBox;


public:	
	// Sets default values for this actor's properties
	ABoundary();

protected:
public:	
	virtual void OnConstruction(const FTransform& Transform) override;
	
	
};
