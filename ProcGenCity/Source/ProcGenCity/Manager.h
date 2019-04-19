// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Branch.h"
#include "Checker.h"
#include "Boundary.h"
#include "Placement.h"
#include "Manager.generated.h"

UCLASS()
class PROCGENCITY_API AManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AManager();


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Object BP")
		TSubclassOf<class AChecker> bpChecker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Object BP")
		TSubclassOf<class ABranch> bpBranch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Object BP")
		TSubclassOf<class APlacement> bpPlacement;

	UPROPERTY(VisibleAnywhere, Category = "Objects")
		TArray<AChecker*> checkerObjs;

	UPROPERTY(VisibleAnywhere, Category = "Objects")
		TArray<ABranch*> branches;

	UPROPERTY(EditAnywhere, Category = "Values")
		bool isGenerating;

protected:
	ABranch* initialBranch;
	ABranch* oldBranch;


	TArray<ABranch*> oldBranches;
	class ABoundary* bound;
	bool hasSpawned;
public:	
	virtual void OnConstruction(const FTransform& transform) override;

	
	void FindBranches();
	bool CheckBranches(ABranch* currBranch);
	void SpawnInitialBranch();
	void SpawnIntersections();

	class ABoundary* FindBoundary();
	void DestroyAddOnObjects();
};
