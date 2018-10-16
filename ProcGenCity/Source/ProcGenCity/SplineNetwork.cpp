// Fill out your copyright notice in the Description page of Project Settings.

#include "SplineNetwork.h"
#include "Components/SplineComponent.h"
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"
#include "Components/SceneComponent.h"

// Sets default values
ASplineNetwork::ASplineNetwork()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mySplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("mySplineComponent"));
	mySceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("mySceneComponenet"));
	mySplineMeshComponent = CreateDefaultSubobject<USplineMeshComponent>(TEXT("mySplineMeshComponent"));

	RootComponent = mySceneComponent;
	
	numSplinePoints = mySplineComponent->GetNumberOfSplinePoints();

}

// Called when the game starts or when spawned
void ASplineNetwork::BeginPlay()
{
	Super::BeginPlay();
	
}



// Called every frame
void ASplineNetwork::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

void ASplineNetwork::OnConstruction(const FTransform & Transform)
{
	FVector locationStart;
	FVector tangentStart;
	FVector locationEnd;
	FVector tangentEnd;


}
