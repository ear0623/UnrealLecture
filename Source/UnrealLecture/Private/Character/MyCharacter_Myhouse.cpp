// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/MyCharacter_Myhouse.h"

// Sets default values
AMyCharacter_Myhouse::AMyCharacter_Myhouse()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacter_Myhouse::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter_Myhouse::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter_Myhouse::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

