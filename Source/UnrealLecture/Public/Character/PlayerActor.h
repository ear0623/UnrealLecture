// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "PlayerActor.generated.h"

UCLASS()
class UNREALLECTURE_API APlayerActor : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, category = "Default")
	UStaticMeshComponent* PlayerCharater;

	UPROPERTY(EditAnywhere)
	USpringArmComponent* MySpringArm;

	UPROPERTY(EditAnywhere)
	UCameraComponent* Camera;
	
	

public:	
	// Sets default values for this actor's properties
	APlayerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
