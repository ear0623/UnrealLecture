// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Player_Pawn.h"

// Sets default values
APlayer_Pawn::APlayer_Pawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//staticmesh
	PlayerCharater = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cubemap"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh/'Game/Path/To/Your/StaticMesh'"));
	if (MeshAsset.Succeeded())
	{
		PlayerCharater->SetStaticMesh(MeshAsset.Object);
	}

	//camera
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
	//possed
	AutoPossessPlayer = EAutoReceiveInput::Disabled;

	//boxcollision
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("boxcollision"));
	RootComponent= CreateDefaultSubobject<USceneComponent>(TEXT("RootCeneComponent"));
	
	PlayerCharater->SetupAttachment(RootComponent);
	BoxCollision->SetupAttachment(PlayerCharater);

	BoxCollision->InitBoxExtent(FVector(100.0f, 100.0f, 100.0f));

	
	
	

}

void APlayer_Pawn::Move_XAis(float AxisValue)
{
	CurrentVelocity.X = FMath::Clamp(AxisValue, -1.0f, 1.0f) * 100.0f;

}

void APlayer_Pawn::Move_YAxis(float AxisValue)
{
	CurrentVelocity.Y = FMath::Clamp(AxisValue, -1.0f, 1.0f) * 100.0f;

}

void APlayer_Pawn::StartJump()
{
	FVector JumpVector(0, 0, Jumping);


	APlayer_Pawn::AddActorWorldOffset(JumpVector);


}

void APlayer_Pawn::StopJump()
{
	

	FVector JumpDownVector(0, 0, -Jumping);

	APlayer_Pawn::AddActorWorldOffset(JumpDownVector);
}

void APlayer_Pawn::PrintString(const UObject* WorldContextObject, const FString& InString, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration)
{
	//InString = "Hello";
}

void APlayer_Pawn::Interact()
{
	if (Interactedtest)
	{
		Interactedtest;
	}
}

void APlayer_Pawn::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, APlayer_Pawn* ohteractor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//overlap event solution0 01
	/*if (ohteractor && ohteractor->IsA(AMoveActorRetry::StaticClass()))
	{
		ScoreCount += AddPoint;
	}*/
	
}

void APlayer_Pawn::OnBeginEndOverlap(UPrimitiveComponent* OverlappedComponent, APlayer_Pawn* OtherActor, UPrimitiveComponent* OhterComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}

void APlayer_Pawn::BoxOnBeginEndOverlap(UPrimitiveComponent* OverlappedComponent, APlayer_Pawn* OtherActor, UPrimitiveComponent* OhterComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//overlap event solution 002
	if (OtherActor && OtherActor->IsA(AMoveActorRetry::StaticClass()))
	{
		ScoreCount += AddPoint;
	}
}
		

// Called when the game starts or when spawned
void APlayer_Pawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayer_Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//

	/*float currentscale = PlayerCharater->GetComponentScale().X;
	if (Jump)
	{
		currentscale += DeltaTime;
	}
	else
	{
		currentscale -= (DeltaTime * 0.5f);
	}

	currentscale = FMath::Clamp(currentscale, 1.0f, 2.0f);
	PlayerCharater->SetWorldScale3D(FVector(currentscale));
	*/

	if (!CurrentVelocity.IsZero())
	{
		FVector NewLocation = GetActorLocation() + (CurrentVelocity * DeltaTime);
		SetActorLocation(NewLocation);
	}

	
}

// Called to bind functionality to input
void APlayer_Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAction("Jump", IE_Pressed, this, &APlayer_Pawn::StartJump);
	InputComponent->BindAction("Jump", IE_Released, this, &APlayer_Pawn::StopJump);

	InputComponent->BindAxis("MoveFoward", this, &APlayer_Pawn::Move_XAis);
	InputComponent->BindAxis("MoveRight", this, &APlayer_Pawn::Move_YAxis);

}

