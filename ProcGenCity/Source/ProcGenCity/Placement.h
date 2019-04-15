// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Branch.h"
#include "Globals.h"
#include "Checker.h"
#include "Road.h"
#include "LotDesigner.h"
#include "NewProcMesh.h"
#include "Placement.generated.h"

UCLASS()
class PROCGENCITY_API APlacement : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlacement();



protected:
	virtual void OnConstruction(const FTransform& transform) override;

	float currLength;
	float currBreadth;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Objects")
		TSubclassOf<ALotDesigner> bpLotDesigner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Objects")
		TSubclassOf<class ANewProcMesh> bpNewProcMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
		float maxArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
		float minArea;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		TArray<class AChecker*> upCheckers;
	UPROPERTY(VisibleAnywhere, Category = "Values")
		TArray<class AChecker*> downCheckers;
	UPROPERTY(VisibleAnywhere, Category = "Values")
		TArray<class AChecker*> leftCheckers;
	UPROPERTY(VisibleAnywhere, Category = "Values")
		TArray<class AChecker*> rightCheckers;
	UPROPERTY(VisibleAnywhere, Category = " Values")
		TArray<class ALotDesigner*> plotPoints;
	UPROPERTY(VisibleAnywhere, Category = "Values")
		FVector point;
	UPROPERTY(VisibleAnywhere, Category = "Values")
		TArray<FVector> lotPoints;

	TArray<float> buildingAreas;

	void GetCurrentCheckers();

	void AllocatePoint(TArray<class AChecker*> currCheckers);
	void DivideLots(EBranchDirection checkerDir, TArray<ARoad*> roadList, float roadLength);
	void SpawnPoints(FVector location, int pointNumber, FActorSpawnParameters spawnParams);
	float CalcPoints(TArray<FVector> boundPoints);
	FVector GenerateRandPointX(float min, float max, FVector basePoint);
	FVector GenerateRandPointY(float min, float max, FVector basePoint);
	float CalculateArea(float length, float breadth);
	void InitialisePointData(TArray<FVector> boundPoints, float length, float breadth);
	void GenerateBuilding(TArray<FVector> subLot, FActorSpawnParameters spawnParams);
	bool BuildingOverlapCheck(FVector lotPoint);
	
	void DestroyPoints();
};
