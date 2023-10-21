// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PlayerActor.h"

// Sets default values
APlayerActor::APlayerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlayerCharater = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cubemap"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh/'Game/Path/To/Your/StaticMesh'"));
	if (MeshAsset.Succeeded())
	{
		PlayerCharater->SetStaticMesh(MeshAsset.Object);
	}

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSCeneComponent"));
	MySpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraCompoenet"));

	PlayerCharater->SetupAttachment(RootComponent);
	MySpringArm->SetupAttachment(PlayerCharater);
	Camera->SetupAttachment(MySpringArm, USpringArmComponent::SocketName);

	MySpringArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.0f), FRotator(-60.0f, 0.0f, 0.0f));
	
	MySpringArm->TargetArmLength = 400.f;
	MySpringArm->bEnableCameraLag = true;
	MySpringArm->CameraLagSpeed = 3.0f;

	
}

// Called when the game starts or when spawned
void APlayerActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

