// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Player_Pawn.generated.h"

UCLASS()
class UNREALLECTURE_API APlayer_Pawn : public APawn
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, category = "Default")
	UStaticMeshComponent* PlayerCharater;

	UPROPERTY(EditAnywhere)
	USpringArmComponent* MySpringArm;

	UPROPERTY(EditAnywhere)
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere)
	USceneComponent* Scencomponent;

	UPROPERTY(EditAnywhere,category="float")
	float Jumping{};

public:
	// Sets default values for this pawn's properties
	APlayer_Pawn();

	//Input Funtions
	void Move_XAis(float AxisValue);
	void Move_YAxis(float AxisValue);
	void StartJump();
	void StopJump();

	//Input Variables
	FVector CurrentVelocity;
	bool Jump;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
