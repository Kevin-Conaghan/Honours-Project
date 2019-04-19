// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Branch.h"
#include "Road.h"
#include "Checker.h"
#include "Components/BoxComponent.h"
#include "EngineUtils.h"
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


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
		int maxBranches;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
		bool isDestroy;

	int currBranches;
	int maxWidth;
	int maxHeight;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		bool isBoundingWidth;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		bool isBoundingHeight;

	UPROPERTY(VisibleAnywhere, Category = "Actors")
		TArray<class ABranch*> branches;

	UPROPERTY(VisibleAnywhere, Category = "Road Data")
		TArray<FVector> roadPositions;

protected:
	class ABranch* oldBranch;
	class ARoad* oldRoad;

public:	
	virtual void OnConstruction(const FTransform& Transform) override;
	
	void DestroyAllActors();

	int GetMaxHeight();
	int GetMaxWidth();

	bool GetBoundingWidth();
	bool GetBoundingHeight();

	void CalcBoundary();
	void FindNumBranches();
	
};
