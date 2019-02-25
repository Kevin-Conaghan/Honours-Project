// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "DrawDebugHelpers.h"
#include "Road.h"
#include "LRoad.generated.h"

UCLASS()
class PROCGENCITY_API ALRoad : public AActor
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	ALRoad();

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FRotator angle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FRotator negAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
		int instructions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
		bool isGenerating;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TArray<ARoad*> road;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Plot Designer")
		TSubclassOf<class ARoad> bpRoad;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Lists")
		TArray<ARoad*> roads;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Lists")
		TArray<ARoad*> segmentRoads;

	int iterator;

protected:

	virtual void OnConstruction(const FTransform& Transform) override;

public:

	FString CreateLSystem(int iterators, FString start);
	FString ProcessString(FString oldStr);
	FString ApplyRules(char ch);
	void DrawLSystem(FString instructions, FRotator angle, int distance);


};
