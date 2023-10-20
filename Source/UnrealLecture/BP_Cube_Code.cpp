// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_Cube_Code.h"

// Sets default values
ABP_Cube_Code::ABP_Cube_Code()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SM_Cube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
	RootComponent = SM_Cube;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Path/To/Your/StaticMesh'"));
	if (MeshAsset.Succeeded())
	{
		SM_Cube->SetStaticMesh(MeshAsset.Object);
	}

	if (Ischange == false)
	{
		UMaterial* SetToMaterial = LoadObject<UMaterial>(nullptr, TEXT("'Material'/Game/Path/To/Your/Material1.Material1' "));
		if (SetToMaterial)
		{ 
			SM_Cube->SetMaterial(0, SetToMaterial);
		}
		
	}
	else
	{
		UMaterial* SetToMaterial = LoadObject<UMaterial>(nullptr, TEXT("'Material'/Game/Path/To/Your/Material2.Material2'"));
		if (SetToMaterial)
		{
			SM_Cube->SetMaterial(0, SetToMaterial);
		}

	}
	
}




// Called when the game starts or when spawned
void ABP_Cube_Code::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABP_Cube_Code::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}


