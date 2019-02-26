// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Checker.h"
#include "EngineUtils.h"
#include "Engine.h"
#include "Branch.generated.h"

UENUM(BlueprintType)
enum class EBranchState : uint8
{
	EB_NULL		UMETA(DisplayName = "Null-Branch"),
	EB_INIT		UMETA(DisplayName = "Initial-Branch"),
	EB_Up		UMETA(DisplayName = "Up-Direction"),
	EB_DOWN		UMETA(DisplayName = "Down-Direction"),
	EB_LEFT		UMETA(DisplayName = "Left-Direction"),
	EB_RIGHT	UMETA(DisplayName = "Right-Direction")
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Objects")
		TArray<AChecker*> checkerObjs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
		float roadLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
		bool isGenerating;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enum")
		EBranchState branchDirection;


protected:

public:	
	virtual void OnConstruction(const FTransform& transform) override;
	

	void InitCheckers(FActorSpawnParameters spawnParams);
	void SpawnLeft();
	void SpawnRight();
	void SpawnUp();
	void SpawnDown();

	void SetBranchDir(EBranchState branchDir);
	EBranchState GetBranchDir();	
};
