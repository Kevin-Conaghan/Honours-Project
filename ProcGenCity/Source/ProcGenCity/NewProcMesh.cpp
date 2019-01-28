// Fill out your copyright notice in the Description page of Project Settings.

#include "NewProcMesh.h"

// Sets default values
ANewProcMesh::ANewProcMesh()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	procMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("Procedural Mesh"));
	procMesh->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);

	setPlotCount = 0;
	vertCounter = 1;
}

void ANewProcMesh::CallTriangles()
{
	int evenCheck = 0;

	for (int32 i = 0; i < (vertices.Num() + 1); i++)
	{
		if (i == (vertices.Num() - 2))
		{
			AddTriangles(i, 0, i + 1);
		}

		if(i == vertices.Num())
		{
			AddTriangles(i, 0, 1);
		}
		else
		{
			evenCheck = i % 2;

			if (evenCheck == 0)
			{
				AddTriangles(i, i + 2, i + 1);
			}
			else
			{
				if (i != 1)
				{
					AddTriangles(i, i - 2, i - 1);
				}
			}
		}
	}
}

void ANewProcMesh::LotSort()
{
	//sort the plot points left to right
	if (plotPoints.Num() != 0)
	{
		plotPoints.Sort();
	}
}

void ANewProcMesh::DrawMesh()
{
	//set vertices
	if (plotPoints.Num() != 0)
	{
		for (int i = 0; i < distances.Num(); ++i)
		{
			if (distances.Num() != 0)
			{	
				vertices.Add(distances[i]);
				//add some height to the building
				vertices.Add(distances[i] + FVector(0.0f, 0.0f, 500.0f));
				
			}
		}

		//create mesh triangles
		CallTriangles();

		uvs.Init(FVector2D(0.0f, 0.0f), vertices.Num());
		normals.Init(FVector(0.0f, 0.0f, 1.0f), vertices.Num());
		vertexColours.Init(FLinearColor(1.0f, 0.0f, 0.0f, 1.0f), vertices.Num());
		tangents.Init(FProcMeshTangent(0.0f, 1.0f, 0.0f), vertices.Num());

		procMesh->CreateMeshSection_LinearColor(0, vertices, triangles, normals, uvs, vertexColours, tangents, false);
	}
}

void ANewProcMesh::OnConstruction(const FTransform & Transform)
{
	if (setPlotCount < 1)
	{
		SetPlotPoints();
		DrawMesh();
	}

	if (plotPoints.Num() != 0)
	{
		this->SetActorLocation(plotPoints[0]->GetActorLocation());
	}
}

void ANewProcMesh::SetPlotPoints()
{
	//get the world variable and store it to reference
	UWorld* world = GetWorld();

	//iterate through all the plot points in the scene on construction of the proc mesh
	for (TActorIterator<ALotDesigner> actorItr(world); actorItr; ++actorItr)
	{

		//get the current plot point and store it to reference
		ALotDesigner* plotFound = *actorItr;

		if (world != NULL && plotFound != NULL)
		{
			//if the current plot point is not the same as the previous add it to the array
			if (plotFound != oldPlotFound)
			{
				plotPoints.Add(plotFound);
			}
		}
		//set the current plot point to the previous so it will not store the same plot point more than once
		oldPlotFound = plotFound;
	}

	//sort the plot points from left to right
	LotSort();
	CalcPointDist();
	//iterate so it will not call this function whenever the proc mesh is moved
	setPlotCount++;
}

void ANewProcMesh::CalcPointDist()
{
	if (plotPoints.Num() != 0)
	{
		//calculate the distance from the initial plot point the the next plot point going from left to right
		for (int i = 0; i < plotPoints.Num(); ++i)
		{
			FVector pointOne = plotPoints[0]->GetActorLocation();

			pointTwo = plotPoints[i]->GetActorLocation();
			
			distances.Add(pointTwo - pointOne);
		}
	}
}

void ANewProcMesh::SetXYVert(float xV, float yV)
{
}

void ANewProcMesh::EmptyPlots()
{
}

void ANewProcMesh::AddTriangles(int32 V1, int32 V2, int32 V3)
{
	triangles.Add(V1);
	triangles.Add(V2);
	triangles.Add(V3);
}

void ANewProcMesh::ClearMeshData()
{
	vertices.Empty();
	triangles.Empty();
	uvs.Empty();
	normals.Empty();
	vertexColours.Empty();
	tangents.Empty();
}