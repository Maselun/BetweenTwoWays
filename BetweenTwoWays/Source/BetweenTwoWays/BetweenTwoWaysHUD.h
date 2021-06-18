// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BetweenTwoWaysHUD.generated.h"

UCLASS()
class ABetweenTwoWaysHUD : public AHUD
{
	GENERATED_BODY()

public:
	ABetweenTwoWaysHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

