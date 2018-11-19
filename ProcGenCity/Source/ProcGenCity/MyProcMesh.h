// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "LotDesigner.h"
#include "MyProcMesh.generated.h"

UCLASS()
class PROCGENCITY_API AMyProcMesh : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "MyProcMesh")
		UProceduralMeshComponent* myProcMesh;

	void CallTriangles();
	void DefaultMesh();

public:	
	// Sets default values for this actor's properties
	AMyProcMesh();
	void CalculateDistances();
	void DrawMesh();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vertices")
		TArray<FVector> vertEdit;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		TArray<FVector> distances;

	UPROPERTY()
		TArray<FVector> plotVerts;

	UPROPERTY()
		TArray<FVector> vertices;
	UPROPERTY()
		TArray<FVector> normals;
	UPROPERTY()
		TArray<int32> triangles;
	UPROPERTY()
		TArray<FVector2D> uvs;
	UPROPERTY()
		TArray<FLinearColor> vertexColors;
	UPROPERTY()
		TArray<FProcMeshTangent> tangents;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		float xVert;
	UPROPERTY(VisibleAnywhere, Category = "Values")
		float yVert;
	UPROPERTY(EditAnywhere, Category = "Values")
		float height;

	TArray<ALotDesigner*> plots;

	ALotDesigner* foundPointStart;
	ALotDesigner* foundPointEnd;

	virtual void OnConstruction(const FTransform& Transform) override;

	void SetPlots(ALotDesigner* plots);

	void AddTriangles(int32 V1, int32 V2, int32 V3);
	void ClearMeshData();
};
