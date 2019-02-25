// Fill out your copyright notice in the Description page of Project Settings.

#include "LRoad.h"


// Sets default values
ALRoad::ALRoad()
{
	//initialise the mesh and set it to a road mesh
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	const ConstructorHelpers::FObjectFinder<UStaticMesh> meshObj(TEXT("/Game/StarterContent/Architecture/Floor_400x400"));
	mesh->SetStaticMesh(meshObj.Object);

	//initialise editable variables
	angle.Yaw = FMath::RadiansToDegrees(90);
	negAngle.Yaw = FMath::RadiansToDegrees(-90);
	iterator = 0;
	instructions = 0;
	isGenerating = false;
}

void ALRoad::OnConstruction(const FTransform & Transform)
{
	//if the user wants to generate the road network
	if (isGenerating)
	{
		//only generate the network once
		if (iterator < 1)
		{
			//initialise the start instructions for the string converter
			FString inst = CreateLSystem(instructions, "FX");
			GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::Red, inst);
			//do the string conversion and build a road network based on those instructions
			DrawLSystem(inst, angle, 10);
			iterator++;
		}
	}
}

FString ALRoad::CreateLSystem(int iterators, FString start)
{
	FString startString = start;
	FString endString;

	//for the number of times the user wants to processes the string (this will determine how big the road network will be)
	for (int i = 0; i < iterators; ++i)
	{
		//do the string conversion and return the instructions
		endString = ProcessString(startString);
		startString = endString;
	}

	return endString;
}

FString ALRoad::ProcessString(FString oldStr)
{
	FString newStr;
	//get all the chars in the string and put them into an array 
	const TArray<TCHAR> charArray = oldStr.GetCharArray();

	//for the length of the string 
	for (int i = 0; i < oldStr.Len(); ++i)
	{
		//apply the conversions on the current char
		char ch = charArray[i];
		newStr = newStr + ApplyRules(ch);
	}

	//return the new string (this will be the string with the instructions)
	return newStr;
}

FString ALRoad::ApplyRules(char ch)
{
	FString newStr;

	//if it is an X set the char to be the new rule
	if (ch == 'X')
	{
		newStr = "X+YF+";		//new rule
	}
	else if (ch == 'Y')
	{
		newStr = "-FX-Y";		//new rule for Y char
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
		//if there is an F in the instructions that means go forward so spawn an object forward
		if (charArray[i] == 'F')
		{
			FVector forward = FVector(0.0f, 400.0f, 0.0f);

			if (bpRoad != NULL)
			{
				GetWorld()->SpawnActor<ARoad>(bpRoad, this->GetActorLocation() + forward, this->GetActorRotation(), spawnParams);
			}

			//move the checker forward aswell so it can spawn more
			DrawDebugLine(GetWorld(), this->GetActorLocation(), forward, FColor::Green, true, 100.0f);
			this->SetActorLocation(this->GetActorLocation() + forward);
		}
		//if it is a + sign that means turn right at an angle the user defines
		else if (charArray[i] == '+')
		{
			//rotate the checker
			this->SetActorRelativeRotation(FQuat(angle));
				
			if (bpRoad != NULL)
			{
				ARoad* tempRoad;
				//spawn an object in the forward direction of the rotated checker
				FVector forward = FVector(0.0f, 400.0f, 0.0f);
				tempRoad = GetWorld()->SpawnActor<ARoad>(bpRoad, this->GetActorLocation(), this->GetActorRotation(), spawnParams);
				tempRoad->SetActorRelativeLocation(FVector().RightVector + forward);
				//move the checker forward aswell so it can spawn more 
				this->SetActorLocation(this->GetActorLocation() + forward);
			}

		}
		//if it is a - sign then that means turn left at an angle the user defines
		else if (charArray[i] == '-')
		{
			this->SetActorRotation(FQuat(negAngle));

			if (bpRoad != NULL)
			{
				ARoad* tempRoad;
				//spawn an object in the forward direction of the rotated checker
				FVector forward = FVector(0.0f, -400.0f, 0.0f);
				tempRoad = GetWorld()->SpawnActor<ARoad>(bpRoad, this->GetActorLocation(), this->GetActorRotation(), spawnParams);
				tempRoad->SetActorRelativeLocation(FVector().RightVector + forward);
				//move the checker forward aswell so it can spawn more objects 
				this->SetActorLocation(this->GetActorLocation() + forward);
			}
		}
	}
}




