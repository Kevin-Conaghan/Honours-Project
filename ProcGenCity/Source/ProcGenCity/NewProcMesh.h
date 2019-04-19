// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "LotDesigner.h"
#include "EngineUtils.h"
#include "Manager.h"
#include "Algo/Reverse.h"
#include "NewProcMesh.generated.h"

UCLASS()
class PROCGENCITY_API ANewProcMesh : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "ProcMesh")
		UProceduralMeshComponent* procMesh;

	UPROPERTY(VisibleAnywhere, Category = "ProcMesh")
		UProceduralMeshComponent* procRoof;

	void CallTriangles(TArray<FVector> currVertices);
	TArray<class ALotDesigner*> LotSort();

public:	
	// Sets default values for this actor's properties
	ANewProcMesh();
	void DrawMesh();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vertices")
		TArray<FVector> roofVerts;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		TArray<FVector> vertices;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material")
		UMaterial* mat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material")
		class UMaterial* roofMat;

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

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Values")
		float minHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
		float maxHeight;

		float streetLength;

		UPROPERTY(VisibleAnywhere, Category = "Values")
			int currVertNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
		float percentageFallOff;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		float area;
	UPROPERTY(VisibleAnywhere, Category = "Values")
		float length;
	UPROPERTY(VisibleAnywhere, Category = "Values")
		float breadth;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		float height;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		FVector distanceFromNode;

	UPROPERTY(VisibleAnywhere, Category = "Plots")
		TArray<ALotDesigner*> plotPoints;

	UPROPERTY(VisibleAnywhere, Category = "Plots")
		TArray<int32> plots;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		TArray<int> vertCount;

	ALotDesigner* oldPlotFound;
	FVector pointTwo;
	
	int vertCounter;
	int setPlotCount;

	bool hasCalculated;

	FVector initialPos;
	bool isConvex;

	virtual void OnConstruction(const FTransform& Transform) override;

	void CreateRoof();
	void ConvexEarMethod(TArray<FVector> currVerts);
	void ConcaveEarMethod();
	void SetMeshData(TArray<FVector> vertices);
	void DrawRoof();
	FVector FindCentreNode();
	void CalculateHeight(FVector centrePos, FVector currLocation);

	void SetPlotPoints();
	void SetArea(float newArea);
	void SetLengthBreadth(float newLength, float newBreadth);
	void SetXYVert(float xV, float yV);

	float GetLength();
	float GetBreadth();


	void CalcPointDist();
	
	void EmptyPlots();

	void AddTriangles(int32 V1, int32 V2, int32 V3);
	void ClearMeshData();

};
