// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Boundary.h"
#include "Branch.h"
#include "Road.h"
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
		bool condition;

	UPROPERTY(VisibleAnywhere, Category = "Actors")
		TArray<ARoad*> roadList;

	UPROPERTY(VisibleAnywhere, Category = "Actors")
		ABranch* branch;



protected:
	float timer;
	float maxTime;

	bool heightBound;
	bool widthBound;

	bool isComplete;
public:	

	virtual void OnConstruction(const FTransform& transform) override;

	bool LocalRestraints();

	void GlobalGoals();

	void SetNewBranchDirection();
	bool GetIsCompleted();
	bool GetHeightBound();
	bool GetWidthBound();

	class ABoundary* FindBoundary();
	bool HeightBoundaryCheck(ABoundary* bound);
	bool WidthBoundaryCheck(ABoundary* bound);
};
