// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "LotDesigner.h"
#include "EngineUtils.h"
#include "NewProcMesh.generated.h"

UCLASS()
class PROCGENCITY_API ANewProcMesh : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "ProcMesh")
		UProceduralMeshComponent* procMesh;

	void CallTriangles();
	void LotSort();

public:	
	// Sets default values for this actor's properties
	ANewProcMesh();
	void DrawMesh();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vertices")
		TArray<FVector> vertEdit;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		TArray<FVector> vertices;

	UPROPERTY()
		TArray<FVector> normals;
	UPROPERTY()
		TArray<int32> triangles;
	UPROPERTY()
		TArray<FVector2D> uvs;
	UPROPERTY()
		TArray<FLinearColor> vertexColours;
	UPROPERTY()
		TArray<FProcMeshTangent> tangents;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		TArray<FVector> distances;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		float xVert;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		float yVert;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		float height;

	UPROPERTY(VisibleAnywhere, Category = "Plots")
		TArray<ALotDesigner*> plotPoints;
	UPROPERTY(VisibleAnywhere, Category = "Values")
		TArray<int> vertCount;

	ALotDesigner* oldPlotFound;
	FVector pointTwo;
	
	int vertCounter;
	int setPlotCount;

	bool hasCalculated;

	virtual void OnConstruction(const FTransform& Transform) override;

	void SetPlotPoints();

	void CalcPointDist();
	void SetXYVert(float xV, float yV);
	
	void EmptyPlots();

	void AddTriangles(int32 V1, int32 V2, int32 V3);
	void ClearMeshData();

};
