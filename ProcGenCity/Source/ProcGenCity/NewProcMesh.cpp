// Fill out your copyright notice in the Description page of Project Settings.

#include "NewProcMesh.h"

// Sets default values
ANewProcMesh::ANewProcMesh()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	procMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("Procedural Mesh"));
	procMesh->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);

	procRoof = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("Procedural Roof"));
	procRoof->AttachToComponent(procMesh, FAttachmentTransformRules::KeepRelativeTransform);


	setPlotCount = 0;
	vertCounter = 1;
}

void ANewProcMesh::CallTriangles()
{
	int evenCheck = 0;

	for (int32 i = 0; i < (vertices.Num() + 1); ++i)
	{
		//if the current vertex is the 2nd last use the current point, the first point and the last point
		if (i == (vertices.Num() - 2))
		{
			AddTriangles(i, 0, i + 1);
		}

		//if the current vertex is the last point use the last, first and second point
		if(i == vertices.Num())
		{
			AddTriangles(i, 0, 1);
		}
		else
		{
			evenCheck = i % 2;

			//if it is even then use the current, the next even and the roof vertex
			if (evenCheck == 0)
			{
				AddTriangles(i, i + 2, i + 1);
			}
			else
			{
				//if it is off then use the current, the last odd and the last floor vertex
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
		float height = FMath::RandRange(minHeight, maxHeight);

		for (int i = 0; i < distances.Num(); ++i)
		{

			if (distances.Num() != 0)
			{	
				vertices.Add(distances[i]);
				//add some height to the building

				vertices.Add(distances[i] + FVector(0.0f, 0.0f, height));

				//use a seperate list to later implement ear clipping method for the roof of the building
				roofVerts.Add(distances[i] + FVector(0.0f, 0.0f, height));
			}
		}

		//create mesh triangles
		CallTriangles();

		uvs.Init(FVector2D(0.0f, 0.0f), vertices.Num());
		normals.Init(FVector(0.0f, 0.0f, 1.0f), vertices.Num());
		vertexColours.Init(FLinearColor(1.0f, 0.0f, 0.0f, 1.0f), vertices.Num());
		tangents.Init(FProcMeshTangent(0.0f, 1.0f, 0.0f), vertices.Num());

		procMesh->CreateMeshSection_LinearColor(0, vertices, triangles, normals, uvs, vertexColours, tangents, false);

		ClearMeshData();

		//generate the roof
		CreateRoof();
		DrawRoof();
	}
}

void ANewProcMesh::OnConstruction(const FTransform & Transform)
{
	//set the plot points then create the mesh
	if (setPlotCount < 1)
	{
		SetPlotPoints();
		DrawMesh();
	}

	//set the mesh's location to the same position as the initial plot point
	if (plotPoints.Num() != 0)
	{
		this->SetActorLocation(plotPoints[0]->GetActorLocation());
	}
}

void ANewProcMesh::CreateRoof()
{
	Algo::Reverse(roofVerts); //reverses the elements in the array

	ConvexEarMethod();

	//ConcaveEarMethod();	
}

void ANewProcMesh::ConvexEarMethod()
{
	//Psuedocode was not created by myself, can be found here: https://www.gamedev.net/articles/programming/graphics/polygon-triangulation-r3334/
	/* create a stack with all of the vertecies in CW/CCW order;
	pop the top vertex off the stack and store in p0;
	pop the top vertex off the stack and store in pHelper;
	while the stack is not empty
	pop the top vertex off the stack and store in pTemp;
	create a triangle with vertices p0, pHelper, pTemp;
	let pHelper = pTemp
	*/
	FVector p0 = roofVerts.Pop();	//get the 1st vertice going in a clockwise direction
	FVector pHelper = roofVerts.Pop();	//get the next vertice in a clockwise direction

	int triangStart = vertices.Add(p0);	//add the first vertice to the vertex array so the mesh can be created and store a reference to be used in creating the triangles
	int triangMid = vertices.Add(pHelper); // do the same for the next one

	for (int i = 0; i < roofVerts.Max(); i++)
	{
		FVector pTemp = roofVerts.Pop();	//while iterating through the array of vertices in the roof part of the building pop the next vertice so it can be used to create a triangle with the previous vertices
		int triangEnd = vertices.Add(pTemp);

		AddTriangles(triangStart, triangMid, triangEnd);
		triangMid = vertices.Add(pTemp);	//the last vertice will become the middle one and it will be added the the vertex array so the mesh can be created
	}
}

void ANewProcMesh::ConcaveEarMethod()
{
	//Psuedocode was not created by myself, can be found here: https://www.gamedev.net/articles/programming/graphics/polygon-triangulation-r3334/
	/*create a list of the vertices (perferably in CCW order, starting anywhere)
	while true
		for every vertex
		let pPrev = the previous vertex in the list
		let pCur = the current vertex;
		let pNext = the next vertex in the list
		if the vertex is not an interior vertex (the wedge product of (pPrev - pCur) and (pNext - pCur) <= 0, for CCW winding);		//TODO
		  continue;
		if there are any vertices in the polygon inside the triangle made by the current vertex and the two adjacent ones
		  continue;
		create the triangle with the points pPrev, pCur, pNext, for a CCW triangle;
		remove pCur from the list;
		 if no triangles were made in the above for loop
			break;
	*/
}

void ANewProcMesh::DrawRoof()
{
	uvs.Init(FVector2D(0.0f, 0.0f), vertices.Num());
	normals.Init(FVector(0.0f, 0.0f, 1.0f), vertices.Num());
	vertexColours.Init(FLinearColor(1.0f, 0.0f, 0.0f, 1.0f), vertices.Num());
	tangents.Init(FProcMeshTangent(0.0f, 1.0f, 0.0f), vertices.Num());

	procRoof->CreateMeshSection_LinearColor(1, vertices, triangles, normals, uvs, vertexColours, tangents, false);

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