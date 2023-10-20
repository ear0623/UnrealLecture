// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "BP_Cube_Code.generated.h"

UCLASS()
class UNREALLECTURE_API ABP_Cube_Code : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, category = "Default")
	UStaticMeshComponent* SM_Cube;
	
	UPROPERTY(EditAnywhere, category = "bool")
	bool Ischange = false;

	

public:	
	// Sets default values for this actor's properties
	ABP_Cube_Code();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
