// Copyright Wil Simpson All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/WidgetComponent.h"
#include "UI/TargetDetailsWidget.h"
#include "TargetComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TARGETINGSYSTEM_API UTargetComponent : public UWidgetComponent 
{
	GENERATED_BODY()

protected:
	DECLARE_DELEGATE_OneParam(FOnTargetingChangedDelegate, bool);
	FOnTargetingChangedDelegate TargetingChangedDelegate;
	
public:
	// Sets default values for this component's properties
	UTargetComponent(const FObjectInitializer& ObjectInitializer);

	virtual void BeginPlay() override;
	
	/** Set whether targeted or not. Nothing happens if does not change. */
	UFUNCTION(BlueprintCallable, Category="Targeting")
	void SetTargeted(bool bIsTargeted);

	/** Whether is targeted. */
	UFUNCTION(BlueprintCallable, Category="Targeting")
	bool IsTargeted();

	/** Setter for DisplayName. */
	UFUNCTION(BlueprintCallable, Category="Targeting")
	void SetDisplayName(FString NewName);

	FOnTargetingChangedDelegate& OnTargetingChanged() { return TargetingChangedDelegate; }

	UFUNCTION(BlueprintCallable, Category=Targeting)
	virtual UTargetDetailsWidget* GetDetailsUserWidget();
};
