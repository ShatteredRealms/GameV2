// Copyright Wil Simpson All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Targetable.h"
#include "TargetableCharacter.generated.h"

/**
 * Base SRO character that can be targeted.
 */
UCLASS(Blueprintable, BlueprintType)
class TARGETINGSYSTEM_API ATargetableCharacter : public ACharacter, public ITargetable
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Targeting)
	UTargetComponent* TargetComponent;
	
public:
	ATargetableCharacter(const FObjectInitializer& ObjectInitializer);
	
	UFUNCTION(BlueprintCallable)
	virtual UTargetComponent* GetTargetComponent() override;
};
