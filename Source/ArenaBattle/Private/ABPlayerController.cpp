// Fill out your copyright notice in the Description page of Project Settings.


#include "ABPlayerController.h"

void AABPlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameOnly InputMode;
	SetInputMode(InputMode);
}

void AABPlayerController::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	ABLOG_S(Warning);
}

void AABPlayerController::OnPossess(APawn* InPawn) 
{
	ABLOG_S(Warning);
	Super::OnPossess(InPawn);
}