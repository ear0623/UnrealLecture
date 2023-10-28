// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Clone/PractiveCharacter001.h"




// Sets default values
APractiveCharacter001::APractiveCharacter001()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	Camera->SetupAttachment(RootComponent);
	Camera->bUsePawnControlRotation = true;

	//Sword
	SwordMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SwordMesh"));
	SwordMesh->SetupAttachment(GetMesh(), FName("SwordSocket"));
	
}

// Called when the game starts or when spawned
void APractiveCharacter001::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void APractiveCharacter001::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APractiveCharacter001::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAxis("MoveFoward", this, &APractiveCharacter001::MoveFoward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APractiveCharacter001::MoveRight);
	PlayerInputComponent->BindAxis("MouseMoveX", this, &APractiveCharacter001::MouseMoveX);
	PlayerInputComponent->BindAxis("MouseMoveY", this, &APractiveCharacter001::MouseMoveY);
	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &APractiveCharacter001::StartAttack);
}

void APractiveCharacter001::MoveFoward(float InputValue)
{
	FVector ForwardDirection = GetActorForwardVector();
	AddMovementInput(ForwardDirection, InputValue);
}

void APractiveCharacter001::MoveRight(float InputValue)
{
	FVector RightDirection = GetActorRightVector();
	AddMovementInput(RightDirection, InputValue);
}

void APractiveCharacter001::MouseMoveX(float InputValue)
{
	AddControllerYawInput(InputValue);
}

void APractiveCharacter001::MouseMoveY(float InputValue)
{
	AddControllerPitchInput(InputValue);
}

void APractiveCharacter001::StartAttack()
{
	//call Atack Animation;
	//if (AttackAnimation)
	//{
	//	GetMesh()->PlayAnimation(AttackAnimation, false);
	//}
}

void APractiveCharacter001::LineTrace()
{
	//Deal Damege to enertmy in range
}

