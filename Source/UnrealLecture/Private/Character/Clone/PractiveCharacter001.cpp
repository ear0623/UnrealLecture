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

	
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		//Get Add Local Player SubSystem
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			//Add Input Systems
			Subsystem->AddMappingContext(InputMapping,0);
		}
	}
	
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

	//Existing Movement Code
	//PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	//PlayerInputComponent->BindAxis("MoveFoward", this, &APractiveCharacter001::MoveFoward);
	//PlayerInputComponent->BindAxis("MoveRight", this, &APractiveCharacter001::MoveRight);
	PlayerInputComponent->BindAxis("MouseMoveX", this, &APractiveCharacter001::MouseMoveX);
	PlayerInputComponent->BindAxis("MouseMoveY", this, &APractiveCharacter001::MouseMoveY);
	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &APractiveCharacter001::StartAttack);

	if (UEnhancedInputComponent* Input = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		Input->BindAction(Action, ETriggerEvent::Triggered, this, &APractiveCharacter001::Input_Enhanced);
	}
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
	if (AttackAnimation && !bIsAttacking)
	{
		GetMesh()->PlayAnimation(AttackAnimation, false);
		bIsAttacking = true;
	}
}



void APractiveCharacter001::Input_Enhanced()
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, "Pressed On EnhancedInput");
}

void APractiveCharacter001::Linetrace()
{
	//Get Socket Location
	FVector StartLocation = SwordMesh->GetSocketLocation(FName("Start"));
	FVector EndLocation = SwordMesh->GetSocketLocation(FName("End"));
	//Setup Linetrace
	FHitResult HitResult;

	FCollisionQueryParams TraceParams;
	(TraceParams).AddIgnoredComponent(SwordMesh);
	(TraceParams).AddIgnoredActor(this);


	//Linetrace
	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility, TraceParams);



	//de
	// buglinetrace

	DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, false, 2.0f);


	if (HitResult.bBlockingHit)
	{
		AActor* ActerHit = HitResult.GetActor();
		

		UHealthComponent* EnermyHit;
		EnermyHit = ActerHit->FindComponentByClass<UHealthComponent>();

		if (IsValid(EnermyHit))
		{
			EnermyHit->TankeDamege(Damage);
		}

		
	}
	else
	{

	}



}

