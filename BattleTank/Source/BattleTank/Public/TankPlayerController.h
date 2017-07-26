// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	float CrossHairXLocation = 0.5;

	UPROPERTY(EditAnywhere)
	float CrossHairYLocation = 0.333333;

	UPROPERTY(EditAnywhere)
	int LineTraceRange = 1000000;

	void AimTowardsCrosshair();
	ATank* GetControllerTank() const;
	bool GetSightRayHightLocation(FVector&) const;
	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
	bool GetVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;


	void Tick(float) override;
	
	void BeginPlay() override;
};
