// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Branch.h"
#include "Components/BoxComponent.h"
#include "EngineUtils.h"
#include "Boundary.generated.h"

UCLASS()
class PROCGENCITY_API ABoundary : public AActor
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, Category = "Collider")
		UBoxComponent* boundaryBox;


public:	
	// Sets default values for this actor's properties
	ABoundary();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
		int maxWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
		int maxHeight;

	UPROPERTY(VisibleAnywhere, Category = "Actors")
		TArray<class ABranch*> branches;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		bool isBoundingWidth;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		bool isBoundingHeight;

	class ABranch* oldBranch;
protected:

public:	
	virtual void OnConstruction(const FTransform& Transform) override;
	
	int GetMaxHeight();
	int GetMaxWidth();

	bool GetBoundingWidth();
	bool GetBoundingHeight();

	void CalcBoundary();

	void FindNumBranches();
	
};
