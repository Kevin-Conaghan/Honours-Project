// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Boundary.h"
#include "Branch.h"
#include "Road.h"
#include "Globals.h"
#include "Engine.h"
#include "EngineUtils.h"
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
		int roadLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
		int numOfRoads;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		EBranchDirection branchDir;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		bool condition;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		FVector currRoadEdgePos;

	UPROPERTY(VisibleAnywhere, Category = "Actors")
		TArray<ARoad*> roadList;

	UPROPERTY(VisibleAnywhere, Category = "Actors")
		TArray<AActor*> overlappingActors;

	UPROPERTY(VisibleAnywhere, Category = "Actors")
		ABranch* branch;

	UPROPERTY(VisibleAnywhere, Category = "Actors")
		TArray<USceneComponent*> maxPoint;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		int stateDirection;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		bool dir;

protected:
	float timer;
	float maxTime;

	bool heightBound;
	bool widthBound;

	bool isComplete;

	int overlapCount;
public:	

	virtual void OnConstruction(const FTransform& transform) override;

	bool LocalRestraints();

	void GlobalGoals();

	bool GetIsCompleted();
	bool GetHeightBound();
	bool GetWidthBound();
	EBranchDirection GetDirection();
	TArray<class ARoad*> GetRoadList();


	void SetDirection(bool direction, int stateDir);
	void SetBranchDirection(EBranchDirection branchDirection);

	FVector OffsetRoadLocation();
	bool OverlapCheck();
	class ABoundary* FindBoundary();
	bool HeightBoundaryCheck(ABoundary* bound);
	bool WidthBoundaryCheck(ABoundary* bound);
};
