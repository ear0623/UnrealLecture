// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Clone/PractiveCharacter001.h"

// Sets default values
APractiveCharacter001::APractiveCharacter001()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

}

