// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LotDesigner.h"
#include "MyProcMesh.h"
#include "LotPlacement.generated.h"

UCLASS()
class PROCGENCITY_API ALotPlacement : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALotPlacement();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool hasGenerated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool hasDivided;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isGenerating;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* myMeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		ALotDesigner* pointOne;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		ALotDesigner* pointTwo;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		ALotDesigner* pointThree;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		ALotDesigner* pointFour;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TArray<ALotDesigner*> plots;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		AMyProcMesh* procMesh;

	UPROPERTY(VisibleAnywhere)
		TArray<FVector> distances;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Plot Designer")
		TSubclassOf<class ALotDesigner> bpLotDesigner;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Procedural Mesh")
		TSubclassOf<class AMyProcMesh> bpProcMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Lot Placement")
		TSubclassOf<class ALotPlacement> bpLotPlacement;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void OnConstruction(const FTransform& Transform) override;

	TArray<FVector> centrePoints;
	TArray<ALotPlacement*> roads;
	ALotDesigner* foundPointEnd;

	ALotDesigner* centrePointOne;
	ALotDesigner* centrePointTwo;


	bool isPlotted;
	bool isCentre;

	void PlacePoints();
	void PlaceBuilding();
	void SubDivide();
	void GenerateRoad();
	void GenerateBuilding();

	void SetHasGenerated(bool generated);
	
};
