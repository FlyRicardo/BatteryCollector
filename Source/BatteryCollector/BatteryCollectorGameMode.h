// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/GameModeBase.h"
#include "BatteryCollectorGameMode.generated.h"

UCLASS(minimalapi)
class ABatteryCollectorGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABatteryCollectorGameMode();
    
    virtual void Tick(float DeltaTime) override;
    
    /** Returns power needed to win - needed for the HUD */
    UFUNCTION(BlueprintPure, Category = "Power")
    float GetPowerToWin() const;
    
    virtual void BeginPlay() override;
    
protected:
    /**The rate at which the character loses power */
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
    float DecayRate;
    
    /**The power needed to win the game */
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
    float PowerToWin;
};



