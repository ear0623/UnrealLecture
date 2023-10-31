// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Animation/AnimSequence.h"
#include "Engine/EngineTypes.h"
#include "DrawDebugHelpers.h"
#include "PractiveCharacter001.generated.h"

UCLASS()
class UNREALLECTURE_API APractiveCharacter001 : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APractiveCharacter001();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite);
	class UStaticMeshComponent* SwordMesh;

	UPROPERTY(EditAnywhere)
	class UAnimSequence* AttackAnimation;
	//I made but if not working UaimSequnce
	UPROPERTY(EditAnywhere)
	class UAnimationAsset* TryAttackAnimation;


	void MoveFoward(float InputValue);
	void MoveRight(float InputValue);
	void MouseMoveX(float InputValue);
	void MouseMoveY(float InputValue);

	//Attack
	int Damege;

	void StartAttack();
	void LineTrace();
	bool bHit;



public:

	UFUNCTION(BlueprintCallable)
	void Linetrace();

	UPROPERTY(BlueprintReadWrite)
	bool bIsAttacking;

};
