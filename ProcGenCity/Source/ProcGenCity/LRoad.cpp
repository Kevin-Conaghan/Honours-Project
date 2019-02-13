// Fill out your copyright notice in the Description page of Project Settings.

#include "LRoad.h"


// Sets default values
ALRoad::ALRoad()
{
	//initialise the mesh and set it to a road mesh
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	const ConstructorHelpers::FObjectFinder<UStaticMesh> meshObj(TEXT("/Game/StarterContent/Architecture/Floor_400x400"));
	mesh->SetStaticMesh(meshObj.Object);


	angle.Yaw = FMath::RadiansToDegrees(90);
	negAngle.Yaw = FMath::RadiansToDegrees(-90);
	iterator = 0;
	instructions = 0;
	isGenerating = false;
}

void ALRoad::OnConstruction(const FTransform & Transform)
{
	if (isGenerating)
	{
		if (iterator < 1)
		{
			FString inst = CreateLSystem(instructions, "FX");
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, inst);


			DrawLSystem(inst, angle, 10);

			iterator++;
		}
	}
}

FString ALRoad::CreateLSystem(int iterators, FString start)
{
	FString startString = start;
	FString endString;

	for (int i = 0; i < iterators; ++i)
	{
		endString = ProcessString(startString);
		startString = endString;
	}

	return endString;
}

FString ALRoad::ProcessString(FString oldStr)
{
	FString newStr;
	const TArray<TCHAR> charArray = oldStr.GetCharArray();
	for (int i = 0; i < oldStr.Len(); ++i)
	{
		char ch = charArray[i];
		newStr = newStr + ApplyRules(ch);
	}

	return newStr;
}

FString ALRoad::ApplyRules(char ch)
{
	FString newStr;

	if (ch == 'X')
	{
		newStr = "FXFX";
	}
	else if (ch == 'Y')
	{
		newStr = "-FX-Y";
	}

	return newStr;
}

void ALRoad::DrawLSystem(FString instructions, FRotator angle, int distance)
{

	//Set the spawn parameters of the blueprint 
	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	spawnParams.Instigator = Instigator;
	const TArray<TCHAR> charArray = instructions.GetCharArray();

	for (int i = 0; i < instructions.Len(); ++i)
	{
		if (charArray[i] == 'F')
		{
			FVector forward = FVector(0.0f, 400.0f, 0.0f);

			if (bpRoad != NULL)
			{
				GetWorld()->SpawnActor<ARoad>(bpRoad, this->GetActorLocation() + forward, this->GetActorRotation(), spawnParams);
			}

			DrawDebugLine(GetWorld(), this->GetActorLocation(), forward, FColor::Green, true, 100.0f);
			this->SetActorLocation(this->GetActorLocation() + forward);
		}
		else if (charArray[i] == '+')
		{
			this->SetActorRotation(FQuat(angle));

			if (bpRoad != NULL)
			{

				FVector forward = FVector(400.0f, 0.0f, 0.0f);
				GetWorld()->SpawnActor<ARoad>(bpRoad, this->GetActorLocation() + forward, this->GetActorRotation(), spawnParams);
				this->SetActorLocation(this->GetActorLocation() + forward);
			}

		}
		else if (charArray[i] == '-')
		{
			this->SetActorRotation(FQuat(negAngle));

			if (bpRoad != NULL)
			{
				FVector forward = FVector(-400.0f, 0.0f, 0.0f);
				GetWorld()->SpawnActor<ARoad>(bpRoad, this->GetActorLocation() + forward, this->GetActorRotation(), spawnParams);
				this->SetActorLocation(this->GetActorLocation() + forward);
			}

		}
	}


}

void ALRoad::GenerateRoads()
{
	//until the number of roads is empty
	for (int i = 0; i < roads.Num(); ++i)
	{
		//get the current road
		ARoad* currRoad = roads.Pop();

		//check to see if it meets the restraint requirements
		bool accepted = LocalRestraints();

		if (accepted)
		{
			//segment roads is the roads that have been placed
			segmentRoads.Add(roads[i]);


		}
	}
}

bool ALRoad::LocalRestraints()
{	
	/* 
		1. If intersecting with another road, create an intersection object to join the roads.
		2. If reaches a boundary cut off road.
		3. If the road is close to an intersection extend road to meet intersection.
	*/
	return true;
}

void ALRoad::GlobalGoals()
{
	/*
		1. If this is the fourth road place a branch point (branch points will be intersections). 
		2. Extend road in positive y, positive x and negative x. 
		3. Extend road for another four times. 
	*/
}

