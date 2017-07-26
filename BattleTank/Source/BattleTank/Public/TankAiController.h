// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAiController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAiController : public AAIController
{
	GENERATED_BODY()

private:
	void BeginPlay() override;

	void Tick(float) override;

	ATank* GetControllerTank() const;

	ATank* GetPlayerTank() const;

	void AiTankAim();
};
