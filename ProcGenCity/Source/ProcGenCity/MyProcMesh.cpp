// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProcMesh.h"

// Sets default values
AMyProcMesh::AMyProcMesh()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	myProcMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("ProceduralMesh"));
	myProcMesh->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
}

void AMyProcMesh::OnConstruction(const FTransform & Transform)
{
	if (vertEdit.Max() >= 8)
	{
		normals.Init(FVector(0.0f, 0.0f, 1.0f), 3);
		vertexColors.Init(FLinearColor(0.0f, 0.0f, 0.0f, 1.0f), 3);
		tangents.Init(FProcMeshTangent(1.0f, 0.0f, 0.0f), 3);

		//back face 
		AddTriangles(0, 2, 3);
		AddTriangles(3, 1, 0);

		//left face
		AddTriangles(0, 1, 4);
		AddTriangles(4, 1, 5);

		//front face
		AddTriangles(4, 5, 7);
		AddTriangles(7, 5, 6);

		//right face
		AddTriangles(7, 6, 3);
		AddTriangles(3, 2, 7);

		//top face
		AddTriangles(1, 3, 5);
		AddTriangles(6, 5, 3);

		//bottom face
		AddTriangles(2, 0, 4);
		AddTriangles(4, 7, 2);


		//Function that creates mesh section
		myProcMesh->CreateMeshSection_LinearColor(0, vertEdit, triangles, normals, uvs, vertexColors, tangents, false);
	}
	else 
	{
		//set vertices
		vertices.Add(FVector(0.0f, 0.0f, 0.0f)); // lower left - 0
		vertices.Add(FVector(0.0f, 0.0f, 500.0F)); // upper left - 1
		vertices.Add(FVector(0.0f, 100.0f, 0.0f)); // lower right - 2
		vertices.Add(FVector(0.0f, 100.0f, 500.0f)); // upper right - 3

		vertices.Add(FVector(100.0f, 0.0f, 0.0f)); // lower front left - 4
		vertices.Add(FVector(100.0f, 0.0f, 500.0f)); // upper front left - 5

		vertices.Add(FVector(100.0f, 100.0f, 500.0f)); // upper front right - 6
		vertices.Add(FVector(100.0f, 100.0f, 0.0f)); // lower front right -7 

		//back face 
		AddTriangles(0, 2, 3);
		AddTriangles(3, 1, 0);

		//left face
		AddTriangles(0, 1, 4);
		AddTriangles(4, 1, 5);

		//front face
		AddTriangles(4, 5, 7);
		AddTriangles(7, 5, 6);

		//right face
		AddTriangles(7, 6, 3);
		AddTriangles(3, 2, 7);

		//top face
		AddTriangles(1, 3, 5);
		AddTriangles(6, 5, 3);

		//bottom face
		AddTriangles(2, 0, 4);
		AddTriangles(4, 7, 2);

		normals.Init(FVector(0.0f, 0.0f, 1.0f), 3);
		vertexColors.Init(FLinearColor(0.0f, 0.0f, 0.0f, 1.0f), 3);
		tangents.Init(FProcMeshTangent(1.0f, 0.0f, 0.0f), 3);

		//Function that creates mesh section
		myProcMesh->CreateMeshSection_LinearColor(0, vertices, triangles, normals, uvs, vertexColors, tangents, false);

		ClearMeshData();
	}
	

}

void AMyProcMesh::Tick(float DeltaTime)
{


}

void AMyProcMesh::AddTriangles(int32 V1, int32 V2, int32 V3)
{
	triangles.Add(V1);
	triangles.Add(V2);
	triangles.Add(V3);
}

void AMyProcMesh::ClearMeshData()
{
	vertices.Empty();
	triangles.Empty();
	uvs.Empty();
	normals.Empty();
	vertexColors.Empty();
	tangents.Empty();
}

