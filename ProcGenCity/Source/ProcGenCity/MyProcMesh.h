// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "MyProcMesh.generated.h"

UCLASS()
class PROCGENCITY_API AMyProcMesh : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "MyProcMesh")
		UProceduralMeshComponent* myProcMesh;

public:	
	// Sets default values for this actor's properties
	AMyProcMesh();

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

	virtual void OnConstruction(const FTransform& Transform) override;

	void AddTriangles(int32 V1, int32 V2, int32 V3);



	void ClearMeshData();

};
