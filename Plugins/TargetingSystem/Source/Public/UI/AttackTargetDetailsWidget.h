// Copyright Wil Simpson All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "TargetDetailsWidget.h"
#include "AttackTargetDetailsWidget.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TARGETINGSYSTEM_API  UAttackTargetDetailsWidget : public UTargetDetailsWidget
{
	GENERATED_BODY()
	
protected:
	UPROPERTY()
	bool bAttacked;
	
public:	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool SetAttacked(bool bNewAttacked);
	
	UFUNCTION(BlueprintCallable)
	FORCEINLINE bool IsAttacked() { return bTargeted; }
};
