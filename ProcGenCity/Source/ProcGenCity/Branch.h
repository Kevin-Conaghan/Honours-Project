// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Checker.h"
#include "Engine.h"
#include "Branch.generated.h"

UENUM(BlueprintType)
enum class EBranchState : uint8
{
	EB_Up		UMETA(DisplayeName = "Up-Direction"),
	EB_DOWN		UMETA(DisplayeName = "Down-Direction"),
	EB_LEFT		UMETA(DisplayeName = "Left-Direction"),
	EB_RIGHT	UMETA(DisplayeName = "Right-Direction"),
	EB_INIT		UMETA(DisplayName  = "Initial-Branch")
};

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
		float roadLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
		bool isGenerating;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enum")
		EBranchState branchDirection;

	UPROPERTY(VisibleAnywhere, Category = "Values")
		bool isComplete;

protected:
	bool isReady;
	ABranch* branch;
	class ABoundary* bound;

	bool isHeightBound;
	bool isWidthBound;

	int oldNum;


public:	

	virtual void OnConstruction(const FTransform& transform) override;
	

	void InitCheckers(FActorSpawnParameters spawnParams);
	void SpawnRoads();
	void SetBranchDir(EBranchState branchDir);
	void SpawnBranch(FVector checkerLoc, FRotator checkerRot);

};
