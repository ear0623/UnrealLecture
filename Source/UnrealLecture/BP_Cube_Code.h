// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BP_Cube_Code.generated.h"

UCLASS()
class UNREALLECTURE_API ABP_Cube_Code : public AActor
{
	GENERATED_BODY()

	UPROPERY(BluePrintReadIOnly, VisibleAnywhere, category = "µðÆúÆ®")
		TObjectPtr<UStaticMeshComponent> SM_Cube;
	

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
