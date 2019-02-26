// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Branch.h"
#include "Road.h"
#include "Checker.generated.h"

UCLASS()
class PROCGENCITY_API AChecker : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AChecker();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh")
		class UStaticMeshComponent* mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Objects")
		TSubclassOf<class ABranch> bpBranch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Objects")
		TSubclassOf<class ARoad> bpRoad;

	UPROPERTY(VisibleAnywhere, Category = "Objects")
		TArray<ARoad*> roadList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
		int roadLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
		int numOfRoads;

	UPROPERTY(VisibleAnywhere, Category = "New Branch")
		ABranch* branch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
		int maxWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
		int maxHeight;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		bool condition;

	UPROPERTY(VisibleAnywhere, Category = "Values")
	int leftBranchNum;
	UPROPERTY(VisibleAnywhere, Category = "Values")
	int rightBranchNum;
	UPROPERTY(VisibleAnywhere, Category = "Values")
	int upBranchNum;
	UPROPERTY(VisibleAnywhere, Category = "Values")
	int downBranchNum;

protected:
	float timer;
	float maxTime;



public:	

	virtual void OnConstruction(const FTransform& transform) override;

	bool LocalRestraints();
	void GlobalGoals();

	void SpawnBranch();
	void SetNewBranchDirection();

	void Branches();
};
