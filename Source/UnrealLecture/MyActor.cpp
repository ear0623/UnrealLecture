// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SM_Cube_Move = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
	RootComponent = SM_Cube_Move;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsst(TEXT("StaticMesh/'Game/Path/To/Yur/StaticMesh'"));
	if (MeshAsst.Succeeded())
	{
		SM_Cube_Move->SetStaticMesh(MeshAsst.Object);
	}


}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

