// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FPSPlayerHUD.generated.h"

UCLASS()
class AFPSPlayerHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFPSPlayerHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

