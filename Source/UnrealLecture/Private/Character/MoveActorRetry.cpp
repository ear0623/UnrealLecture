// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/MoveActorRetry.h"

// Sets default values
AMoveActorRetry::AMoveActorRetry()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SM_Cube_Move = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
	RootComponent = SM_Cube_Move;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh/'Game/Path/To/Your/StaticMesh'"));
	if (MeshAsset.Succeeded())
	{
		SM_Cube_Move->SetStaticMesh(MeshAsset.Object);
	}

}

// Called when the game starts or when spawned
void AMoveActorRetry::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMoveActorRetry::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Isturn == false)
	{
		Multi_Result = BaseNumber * 1;


		FString Mesage = FString::Printf(TEXT("¼ýÀÚ°ª %d"), SavePoint);
		//get&set relative used solution
		//FVector CurrentPoint = SM_Cube_Move->GetRelativeLocation();
		//CurrentPoint.X += Multi_Result;
		//SM_Cube_Move->SetRelativeLocation(CurrentPoint);

		FVector MyCurrentPoint;
		MyCurrentPoint.X += Multi_Result;
		SM_Cube_Move->AddLocalOffset(MyCurrentPoint);


		SavePoint += Multi_Result;

		if (SavePoint > 1000)
		{
			this->Isturn = true;


		}
		else
		{

		}



	}
	else
	{


		Multi_Result = BaseNumber * -1;

		//get&set relative used solution
		//FVector CurrentPoint = SM_Cube_Move->GetRelativeLocation();
		//CurrentPoint.X -= Multi_Result;
		//SM_Cube_Move->SetRelativeLocation(CurrentPoint);

		FVector MyCurrentPoint;
		MyCurrentPoint.X += Multi_Result;
		SM_Cube_Move->AddLocalOffset(MyCurrentPoint);

		SavePoint += Multi_Result;
		if (SavePoint < -1000)
		{
			this->Isturn = false;
		}
	}

}

