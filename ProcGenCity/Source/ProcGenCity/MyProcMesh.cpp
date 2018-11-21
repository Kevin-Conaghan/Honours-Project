// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProcMesh.h"

void AMyProcMesh::CallTriangles()
{
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
}

void AMyProcMesh::DefaultMesh()
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

	CallTriangles();

	normals.Init(FVector(0.0f, 0.0f, 1.0f), 3);
	vertexColors.Init(FLinearColor(0.0f, 0.0f, 0.0f, 1.0f), 3);
	tangents.Init(FProcMeshTangent(1.0f, 0.0f, 0.0f), 3);

	//Function that creates mesh section
	myProcMesh->CreateMeshSection_LinearColor(0, vertices, triangles, normals, uvs, vertexColors, tangents, false);

	ClearMeshData();
}

void AMyProcMesh::CalculateDistances()
{
	//calculate the distance for the 4 points
	for (int i = 0; i < 4; i++)
	{
		ALotDesigner* foundPointStart = plots[i];

		if (foundPointStart != nullptr)
		{
			if (foundPointEnd != nullptr)
			{
				FVector end = foundPointEnd->GetActorLocation();
				FVector start = foundPointStart->GetActorLocation();
			
				distances.Add(end - start);				
			}
		}
		foundPointEnd = foundPointStart;
	}
}

void AMyProcMesh::DrawMesh()
{
	if (hasCalculated)
	{
		//set vertices
		plotVerts.Add(FVector(0.0f, 0.0f, 0.0f)); // lower left - 0
		normals.Add(FVector(1.0f, -1.0f, 0.0f));
		plotVerts.Add(FVector(0.0f, 0.0f, height)); // upper left - 1
		normals.Add(FVector(1.0f, -1.0f, 0.0f));
		plotVerts.Add(FVector(0.0f, yVert, 0.0f)); // lower right - 2
		normals.Add(FVector(-1.0f, -1.0f, 0.0f));
		plotVerts.Add(FVector(0.0f, yVert, height)); // upper right - 3
		normals.Add(FVector(-1.0f, -1.0f, 0.0f));

		plotVerts.Add(FVector(xVert, 0.0f, 0.0f)); // lower front left - 4
		normals.Add(FVector(1.0f, 1.0f, 0.0f));
		plotVerts.Add(FVector(xVert, 0.0f, height)); // upper front left - 5
		normals.Add(FVector(1.0f, 1.0f, 0.0f));

		plotVerts.Add(FVector(xVert, yVert, height)); // upper front right - 6
		normals.Add(FVector(-1.0f, 1.0f, 0.0f));
		plotVerts.Add(FVector(xVert, yVert, 0.0f)); // lower front right -7 
		normals.Add(FVector(-1.0f, 1.0f, 0.0f));

		//create triangles 
		CallTriangles();

		uvs.Add(FVector2D(0.0f, 0.0f));
		uvs.Add(FVector2D(1, 0));
		uvs.Add(FVector2D(1, 1));

		vertexColors.Init(FLinearColor(0.0f, 0.0f, 0.0f, 1.0f), 8);
		tangents.Init(FProcMeshTangent(0.0f, 1.0f, 0.0f), 8);

		myProcMesh->CreateMeshSection_LinearColor(0, plotVerts, triangles, normals, uvs, vertexColors, tangents, false);

		ClearMeshData();
		//hasCalculated = false;
	}

	//if there is more than one distance in the array add the rest of the vertices to create mesh
	if (distances.Max() >= 2 && !hasCalculated)
	{
		//get the length and breadth from the distances 
		xVert = -distances[1].X;
		yVert = -distances[0].Y;

		height += FMath::RandRange(0.0f, randHeightMax);
		 

		//set vertices
		plotVerts.Add(FVector(0.0f, 0.0f, 0.0f)); // lower left - 0
		normals.Add(FVector(1.0f, -1.0f, 0.0f));
		plotVerts.Add(FVector(0.0f, 0.0f, height)); // upper left - 1
		normals.Add(FVector(1.0f, -1.0f, 0.0f));
		plotVerts.Add(FVector(0.0f, yVert, 0.0f)); // lower right - 2
		normals.Add(FVector(-1.0f, -1.0f, 0.0f));
		plotVerts.Add(FVector(0.0f, yVert, height)); // upper right - 3
		normals.Add(FVector(-1.0f, -1.0f, 0.0f));

		plotVerts.Add(FVector(xVert, 0.0f, 0.0f)); // lower front left - 4
		normals.Add(FVector(1.0f, 1.0f, 0.0f));
		plotVerts.Add(FVector(xVert, 0.0f, height)); // upper front left - 5
		normals.Add(FVector(1.0f, 1.0f, 0.0f));

		plotVerts.Add(FVector(xVert, yVert, height)); // upper front right - 6
		normals.Add(FVector(-1.0f, 1.0f, 0.0f));
		plotVerts.Add(FVector(xVert, yVert, 0.0f)); // lower front right -7 
		normals.Add(FVector(-1.0f, 1.0f, 0.0f));

		//create triangles 
		CallTriangles();


		uvs.Add(FVector2D(0.0f, 0.0f));
		uvs.Add(FVector2D(1, 0));
		uvs.Add(FVector2D(1, 1));

		vertexColors.Init(FLinearColor(0.0f, 0.0f, 0.0f, 1.0f), 8);
		tangents.Init(FProcMeshTangent(0.0f, 1.0f, 0.0f), 8);

		myProcMesh->CreateMeshSection_LinearColor(0, plotVerts, triangles, normals, uvs, vertexColors, tangents, false);

		ClearMeshData();
	}
	else if (vertEdit.Max() >= 8 && !hasCalculated)
	{
		normals.Init(FVector(0.0f, 0.0f, 1.0f), 7);
		vertexColors.Init(FLinearColor(0.0f, 0.0f, 0.0f, 1.0f), 7);
		tangents.Init(FProcMeshTangent(1.0f, 0.0f, 0.0f), 7);

		CallTriangles();
		//Function that creates mesh section
		myProcMesh->CreateMeshSection_LinearColor(0, vertEdit, triangles, normals, uvs, vertexColors, tangents, false);

		ClearMeshData();
	}
	else
	{
		DefaultMesh();
	}
}

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
	
}

void AMyProcMesh::SetPlots(ALotDesigner* plotPoints)
{
	plots.Add(plotPoints);
}

void AMyProcMesh::SetXYVert(float xVertice, float yVertice)
{
	xVert = xVertice;
	yVert = yVertice;
}

void AMyProcMesh::SetCalc(bool isCalc)
{
	hasCalculated = isCalc;
}

void AMyProcMesh::EmptyPlots()
{
	plots.Empty();
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

