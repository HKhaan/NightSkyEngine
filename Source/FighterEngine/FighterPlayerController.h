// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FighterPlayerController.generated.h"

class ANetworkPawn;
/**
 * 
 */
UCLASS()
class FIGHTERENGINE_API AFighterPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;

	virtual void SetupInputComponent() override;
	
	int Inputs;
	int Frame;

	void PressUp();
	void ReleaseUp();
	void PressDown();
	void ReleaseDown();
	void PressLeft();
	void ReleaseLeft();
	void PressRight();
	void ReleaseRight();
	void PressL();
	void ReleaseL();
	void PressM();
	void ReleaseM();
	void PressH();
	void ReleaseH();
	void PressS();
	void ReleaseS();

	void UpdateInput(int Input[], int32 InFrame, int32 InFrameAdvantage);
	void CheckForDesyncs(uint32 Checksum, int32 InFrame);

	UFUNCTION(BlueprintCallable)
	void SendCharaData();

	UPROPERTY(BlueprintReadOnly)
	ANetworkPawn* NetworkPawn;
};	
