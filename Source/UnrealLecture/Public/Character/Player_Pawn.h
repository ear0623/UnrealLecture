// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "MoveActorRetry.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetSystemLibrary.h"
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

	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* BoxCollision;

	int ScoreCount{};
	int AddPoint{1};

public:
	// Sets default values for this pawn's properties
	APlayer_Pawn();

	//Input Funtions
	void Move_XAis(float AxisValue);
	void Move_YAxis(float AxisValue);
	void StartJump();
	void StopJump();
	static void PrintString(const UObject* WorldContextObject, const FString& InString, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration);

	//Input Variables
	FVector CurrentVelocity;
	bool Jump;

	//
	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, APlayer_Pawn* ohteractor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnBeginEndOverlap(UPrimitiveComponent* OverlappedComponent, APlayer_Pawn* OtherActor, UPrimitiveComponent* OhterComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void BoxOnBeginEndOverlap(UPrimitiveComponent* OverlappedComponent, APlayer_Pawn* OtherActor, UPrimitiveComponent* OhterComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

