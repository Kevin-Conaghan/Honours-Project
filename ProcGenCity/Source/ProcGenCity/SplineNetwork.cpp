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
	myMeshComponent = CreateDefaultSubobject<UStaticMesh>(TEXT("mySplineMeshComponent"));
	RootComponent = mySceneComponent;
	mySplineComponent->SetupAttachment(RootComponent);
	RootComponent->SetMobility(EComponentMobility::Type::Static);
	mySplineComponent->SetMobility(EComponentMobility::Type::Static);
	this->SetActorEnableCollision(true);

	PrimaryActorTick.bCanEverTick = true;

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

void ASplineNetwork::CreateSplineMesh()
{

	//Create start and end points
	FVector locationStart;
	FVector tangentStart;
	FVector locationEnd;
	FVector tangentEnd;

	//get the current number of spline points
	numSplinePoints = mySplineComponent->GetNumberOfSplinePoints();

	//makes sure there is a minimum of 2 spline points in the scene 
	if (numSplinePoints < 2)
	{
		UE_LOG(LogTemp, Display, TEXT("Spline has too few points"));
		return;
	}

	AddSpline(locationStart, locationEnd, tangentStart, tangentEnd, numSplinePoints);
}

void ASplineNetwork::AddSpline(FVector locStart, FVector locEnd, FVector tanStart, FVector tanEnd, float numSplinePoints)
{
	// minus 1 point so that there is not too many mesh components
	for (int32 i = 0; i < (numSplinePoints - 1); i++)
	{
		//create a new spline mesh component
		USplineMeshComponent *splineMesh = NewObject<USplineMeshComponent>(this);
		//register the component to the scene
		splineMesh->RegisterComponent();
		splineMesh->CreationMethod = EComponentCreationMethod::UserConstructionScript;

		//get the location of the first and next spline point
		mySplineComponent->GetLocationAndTangentAtSplinePoint(i, locStart, tanStart, ESplineCoordinateSpace::Local);
		mySplineComponent->GetLocationAndTangentAtSplinePoint(i + 1, locEnd, tanEnd, ESplineCoordinateSpace::Local);
		splineMesh->SetMobility(EComponentMobility::Type::Static);
		//set the forward axis, this will determine which way the mesh faces
		splineMesh->SetForwardAxis(ESplineMeshAxis::Z);
		//if there is only 2 spline points then only 1 mesh is needed
		if (numSplinePoints == 2) // Two point spline
		{
			splineMesh->SetStaticMesh(myMeshComponent);
		}
		//of there are more than 2 then a start, middle and end is needed
		// Start of spline
		else if (numSplinePoints > 2 && i == 0)
		{
			splineMesh->SetStaticMesh(myMeshComponent);

		}
		// End of spline
		else if (numSplinePoints > 2 && i == (numSplinePoints - 2))
		{
			splineMesh->SetStaticMesh(myMeshComponent);
		}
		// Middle points
		else
		{
			splineMesh->SetStaticMesh(myMeshComponent);
		}

		//if the spline is in the scene then add collision settings, the start and end points and then attach it to the root component
		if (splineMesh)
		{
			splineMesh->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);
			splineMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			splineMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
			splineMesh->SetStartAndEnd(locStart, tanStart, locEnd, tanEnd);
			splineMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
		}
	}
}

//Use OnConstruction so the changes will be made in the scene and not when the editor is playing 
void ASplineNetwork::OnConstruction(const FTransform & Transform)
{
	//create the spline mesh 
	this->CreateSplineMesh();
}
