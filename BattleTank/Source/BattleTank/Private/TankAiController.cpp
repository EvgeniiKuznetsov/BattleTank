// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAiController.h"


void ATankAiController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AiTankAim();
}

void ATankAiController::BeginPlay()
{
	Super::BeginPlay();
}

ATank* ATankAiController::GetControllerTank() const
{
	return Cast<ATank>(GetPawn());
}

ATank* ATankAiController::GetPlayerTank() const
{
	auto PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn(); // пох на подчеркивание GetWorld

	if (!PlayerTank) { return nullptr; }
	return Cast<ATank>(PlayerTank);

}

void ATankAiController::AiTankAim()
{
	if (!GetControllerTank() || !GetPlayerTank()) { return; }

	if (GetPlayerTank())
	{
		GetControllerTank()->AimAt(GetPlayerTank()->GetActorLocation());
	}
}