// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "MyActor.generated.h"

UCLASS()
class UNREALLECTURE_API AMyActor : public AActor
{
	GENERATED_BODY()
	UPROPERTY(VisibleAnywhere, category = "default")
	UStaticMeshComponent* SM_Cube_Move;

	UPROPERTY(EditDefaultsOnly, category = "Bool")
	bool Isturn{};

	

	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
