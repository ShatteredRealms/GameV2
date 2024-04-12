// Copyright Wil Simpson All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "TargetComponent.h"
#include "UI/AttackTargetDetailsWidget.h"
#include "AttackTargetComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TARGETINGSYSTEM_API UAttackTargetComponent : public UTargetComponent
{
	GENERATED_BODY()

protected:
	DECLARE_DELEGATE_OneParam(FOnAttackedChangedDelegate, bool);
	FOnAttackedChangedDelegate AttackedChangedDelegate;
	
public:
	/** Set whether targeted or not. Nothing happens if does not change. */
	UFUNCTION(BlueprintCallable, Category="Targeting")
	void SetAttacked(bool bAttacked);

	/** Whether is targeted. */
	UFUNCTION(BlueprintCallable, Category="Targeting")
	FORCEINLINE bool IsAttacked() { return GetDetailsUserWidget()->IsAttacked(); }

	FOnAttackedChangedDelegate& OnAttackedChanged() { return AttackedChangedDelegate; }
	
	UAttackTargetDetailsWidget* GetDetailsUserWidget();
};
