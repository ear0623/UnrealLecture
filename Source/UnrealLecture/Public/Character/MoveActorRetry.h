// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "MoveActorRetry.generated.h"

UCLASS()
class UNREALLECTURE_API AMoveActorRetry : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, category = "default")
	UStaticMeshComponent* SM_Cube_Move;

	UPROPERTY(EditDefaultsOnly, category = "Bool")
	bool Isturn = false;

	UPROPERTY(EditDefaultsOnly, category = "float")
	float BaseNumber{ 1 };

	UPROPERTY(EditDefaultsOnly, category = "float")
	float Multi_Result{};

	UPROPERTY(EditDefaultsOnly, category = "float")
	float SavePoint{};
	
public:	
	// Sets default values for this actor's properties
	AMoveActorRetry();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
