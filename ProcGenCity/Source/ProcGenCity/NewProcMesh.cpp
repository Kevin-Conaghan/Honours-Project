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

	streetLength = 2000;
	setPlotCount = 0;
	vertCounter = 1;
}

void ANewProcMesh::CallTriangles(TArray<FVector> currVerts)
{
	int evenCheck = 0;
	int normalCounter = 0;


	for (int32 i = 0; i < (currVerts.Num() + 1); ++i)
	{
		//if the current vertex is the 2nd last use the current point, the first point and the last point
		if (i == (currVerts.Num() - 2))
		{
			AddTriangles(i, 0, i + 1);
		}

		//if the current vertex is the last point use the last, first and second point
		if(i == currVerts.Num())
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
				//if it is odd then use the current, the last odd and the last floor vertex
				if (i != 1)
				{
					AddTriangles(i, i - 2, i - 1);
				}
			}
		}
	}
}

TArray<class ALotDesigner*> ANewProcMesh::LotSort()
{
	TArray<int32> plots;
	TArray<ALotDesigner*> sortedPlots;
	//sort the plot points left to right
	if (plotPoints.Num() != 0)
	{
		plotPoints.Sort();

		for (int i = 0; i < plotPoints.Num(); ++i)
		{
			plots.Add(FCString::Atoi(*plotPoints[i]->GetName()));
		}

		plots.Sort();

		for (int i = 0; i < plotPoints.Num(); ++i)
		{
			if (plots[i] == FCString::Atoi(*plotPoints[i]->GetName()))
			{
				sortedPlots.Add(plotPoints[i]);
			}
		}
	}

	return sortedPlots;
}

void ANewProcMesh::DrawMesh()
{
	//set vertices
	if (plotPoints.Num() != 0)
	{
		//get the new height min max using the distance between this mesh and the centre node
		CalculateHeight(FindCentreNode(), this->GetActorLocation());
		height = FMath::RandRange(minHeight, maxHeight);

		for (int i = 0; i < distances.Num(); ++i)
		{
			if (distances.Num() != 0)
			{
				//add the calculated vertex points into an array to be used as data
				vertices.Add(distances[i]);
				//add a random height to one of the vertices
				FVector heightVert = distances[i] + FVector(0.0f, 0.0f, height);

				//add some height to the building
				vertices.Add(heightVert);

				//use a seperate list to later implement ear clipping method for the roof of the building
				roofVerts.Add(heightVert);

			}
		}

		//calculate the mesh sections and uv coords of each section and render them seperately 
		SetMeshData(vertices);

		vertices.Empty();
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
		if (plotPoints.Num() > 0)
		{
			initialPos = plotPoints[0]->GetActorLocation();
		}
		DrawMesh();
	}

	//set the mesh's location to the same position as the initial plot point
	if (plotPoints.Num() != 0)
	{
		this->SetActorLocation(initialPos);
	}
}

void ANewProcMesh::CreateRoof()
{
	Algo::Reverse(roofVerts); //reverses the elements in the array

	ConvexEarMethod(roofVerts);

	//ConcaveEarMethod();	
}

void ANewProcMesh::ConvexEarMethod(TArray<FVector> currVertices)
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
	FVector p0 = currVertices.Pop();	//get the 1st vertice going in a clockwise direction
	FVector pHelper = currVertices.Pop();	//get the next vertice in a clockwise direction

	int triangStart = vertices.Add(p0);	//add the first vertice to the vertex array so the mesh can be created and store a reference to be used in creating the triangles
	int triangMid = vertices.Add(pHelper); // do the same for the next one

	for (int i = 0; i < currVertices.Max(); i++)
	{
		FVector pTemp = currVertices.Pop();	//while iterating through the array of vertices in the roof part of the building pop the next vertice so it can be used to create a triangle with the previous vertices
		int temp = vertices.Add(pTemp);
		int triangEnd = temp;

		AddTriangles(triangStart, triangMid, triangEnd);
		triangMid = temp;	//the last vertice will become the middle one and it will be added the the vertex array so the mesh can be created
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

void ANewProcMesh::SetMeshData(TArray<FVector> vertices)
{
	TArray<FVector> currVerts;		//use a temp holder to process 4 vertices at a time
	FVector firstPoint;				//get the first vertex for referencing
	FVector secondPoint;			//get the second point for referencing
	int sectionID = 1;				//this variable will define the id of each section

	currVertNum = vertices.Num() / 2;	//get the current amount of base vertices

	for (int i = 0; i < vertices.Num(); ++i)
	{
		currVerts.Add(vertices[i]);		//add vertices into the temp array

		if (i == 1)
		{
			//set the first and second vertex 
			firstPoint = currVerts[0];	
			secondPoint = currVerts[1];
		}

		//if the temp array holds 4 vertices then calculate and render that mesh section
		if (currVerts.Num() == 4)
		{
			//create mesh triangles
			CallTriangles(currVerts);

			//add uv's
			uvs.Add(FVector2D(0.0f, 0.0f));
			uvs.Add(FVector2D(0.0f, 1.0f));
			uvs.Add(FVector2D(1.0f, 0.0f));
			uvs.Add(FVector2D(1.0f, 1.0f));

			//define all other data needed to render the mesh section
			normals.Init(FVector(0.0f, 0.0f, 1.0f), currVerts.Num());
			vertexColours.Init(FLinearColor(1.0f, 1.0f, 1.0f, 1.0f), currVerts.Num());
			tangents.Init(FProcMeshTangent(0.0f, 1.0f, 0.0f), currVerts.Num());

			//render the mesh section
			procMesh->CreateMeshSection_LinearColor(sectionID, currVerts, triangles, normals, uvs, vertexColours, tangents, false);

			//reset all data 
			ClearMeshData();
			sectionID++;
			FVector tempVec = currVerts[2];		//store the last base vertex for referencing
			FVector tempVec2 = currVerts[3];	//store the last top vertex for referencing
			//clear the temp array for use in next section
			currVerts.Empty();
			//add the last two vertices in the array
			currVerts.Add(tempVec);
			currVerts.Add(tempVec2);
		}

		//if it is on the last mesh section we want to use the first to points again that we stored at the start of this function
		if (sectionID == currVertNum && currVerts.Num() == 2)
		{
			//add the first two points into the temp array
			currVerts.Add(firstPoint);
			currVerts.Add(secondPoint);

			//create mesh triangles
			CallTriangles(currVerts);

			//define all other data needed to render the mesh section
			normals.Init(FVector(0.0f, 0.0f, 1.0f), currVerts.Num());
			vertexColours.Init(FLinearColor(1.0f, 1.0f, 1.0f, 1.0f), currVerts.Num());
			tangents.Init(FProcMeshTangent(0.0f, 1.0f, 0.0f), currVerts.Num());

			//add uv's
			uvs.Add(FVector2D(0.0f, 0.0f));
			uvs.Add(FVector2D(0.0f, 1.0f));
			uvs.Add(FVector2D(1.0f, 0.0f));
			uvs.Add(FVector2D(1.0f, 1.0f));

			//render the final mesh section
			procMesh->CreateMeshSection_LinearColor(sectionID, currVerts, triangles, normals, uvs, vertexColours, tangents, false);
			sectionID++;

			//reset data
			ClearMeshData();
			currVerts.Empty();
		}
		if (mat != NULL)
		{
			for (int i = 0; i < sectionID; ++i)
			{
				procMesh->SetMaterial(i, mat);
			}
		}

	}

}

void ANewProcMesh::DrawRoof()
{
	//add uv's
	uvs.Add(FVector2D(1.0f, 0.0f));
	uvs.Add(FVector2D(0.0f, 0.0f));
	uvs.Add(FVector2D(0.0f, 1.0f));
	uvs.Add(FVector2D(1.0f, 1.0f));

	procRoof->SetMaterial(0, roofMat);


	vertexColours.Init(FLinearColor(1.0f, 1.0f, 1.0f, 1.0f), vertices.Num());
	tangents.Init(FProcMeshTangent(0.0f, 1.0f, 0.0f), vertices.Num());
	normals.Init(FVector(0.0f, 0.0f, 1.0f), vertices.Num());

	procRoof->CreateMeshSection_LinearColor(0, vertices, triangles, normals, uvs, vertexColours, tangents, false);

}

FVector ANewProcMesh::FindCentreNode()
{
	FVector location;


	for (TActorIterator<class AManager> actorItr(GetWorld()); actorItr; ++actorItr)
	{
		class AManager* currManager = *actorItr;

		if (currManager != NULL)
		{
			location = currManager->GetActorLocation();
			GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, "Hit");
		}
	}

	return location;
}

void ANewProcMesh::CalculateHeight(FVector centrePos, FVector currLocation)
{
	//get the distance from the current mesh to the centre node
	distanceFromNode = currLocation - centrePos;

	//if the distance is negative make it positive
	if (distanceFromNode.X < 0)
	{
		distanceFromNode.X *= -1;
	}
	if (distanceFromNode.Y < 0)
	{
		distanceFromNode.Y *= -1;
	}

	//get the amount of times the distance can be divided by the street length, this will be used to determine how many times we take a percentage off
	//of the max and min height
	FVector division = distanceFromNode / streetLength;

	//if there is a division in the x-axis then take the percentage off
	if (division.X > 0)
	{
		//get the percentage of the current max and min
		float newMax = maxHeight * percentageFallOff;
		newMax = newMax / 100;
		float newMin = minHeight * percentageFallOff;
		newMin = newMin / 100;

		int num = (int)division.X;

		//apply the percentage take off x amount of times
		for (int i = 0; i < num; ++i)
		{
			maxHeight -= newMax;
			minHeight -= newMin;
		}
	}
	if (division.Y > 0)
	{
		//get the percentage of the current max and min
		float newMax = maxHeight * percentageFallOff;
		newMax = newMax / 100;
		float newMin = minHeight * percentageFallOff;
		newMin = newMin / 100;

		int num = (int)division.Y;

		//apply the percentage take off x amount of times
		for (int i = 0; i < num; ++i)
		{
			maxHeight -= newMax;
			minHeight -= newMin;
		}
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
	plotPoints = LotSort();
	CalcPointDist();
	//iterate so it will not call this function whenever the proc mesh is moved
	setPlotCount++;
}

void ANewProcMesh::SetArea(float newArea)
{
	area = newArea;
}

void ANewProcMesh::SetLengthBreadth(float newLength, float newBreadth)
{
	length = newLength;
	breadth = newBreadth;

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

float ANewProcMesh::GetLength()
{
	return length;
}

float ANewProcMesh::GetBreadth()
{
	return breadth;
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
	//vertices.Empty();
	triangles.Empty();
	uvs.Empty();
	normals.Empty();
	vertexColours.Empty();
	tangents.Empty();
}