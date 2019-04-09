// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EBranchDirection : uint8
{
	EB_UP 		UMETA(DisplayName = "Up-Dir"),
	EB_DOWN		UMETA(DisplayName = "Down-Dir"),
	EB_LEFT		UMETA(DisplayName = "Left-Dir"),
	EB_RIGHT	UMETA(DisplayName = "Right-Dir")
};

class PROCGENCITY_API Globals
{
public:
	Globals();
	~Globals();
};
