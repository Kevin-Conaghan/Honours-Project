// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Checker.h"
#include "Engine.h"
#include "Globals.h"
#include "Branch.generated.h"

UCLASS()
class PROCGENCITY_API ABranch : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ABranch();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh")
		class UStaticMeshComponent* mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Object BP")
		TSubclassOf<class AChecker> bpChecker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Object BP")
		TSubclassOf<class ABranch> bpBranch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Objects")
		TArray<AChecker*> checkerObjs;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		EBranchDirection branchDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
		float roadLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
		bool isGenerating;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		bool isComplete;

protected:
	bool isReady;
	ABranch* branch;
	class ABoundary* bound;

	TArray<FVector> dirList;		//an array for each direction
	TArray<FRotator> dirAngList;	//an array for each angle for the checker objects
	TArray<EBranchDirection> branchDirs;

	bool isHeightBound;
	bool isWidthBound;

	int oldNum;
public:	

	virtual void OnConstruction(const FTransform& transform) override;
	
	EBranchDirection GetDirection();


	void SetDirection(EBranchDirection branchDir);

	void InitCheckers(FActorSpawnParameters spawnParams);
	void SpawnRoads(class ABoundary* bound);
	void SpawnBranch(FVector checkerLoc, FRotator checkerRot);

};
