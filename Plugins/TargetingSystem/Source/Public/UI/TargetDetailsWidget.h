// Copyright Wil Simpson All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TargetDetailsWidget.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TARGETINGSYSTEM_API UTargetDetailsWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UPROPERTY()
	AActor* Target;
	
	UPROPERTY()
	bool bTargeted;

	UPROPERTY()
	FString DisplayName;
	
public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UNamedSlot* ContentSlot;

	virtual void Setup(AActor* NewTarget);

	UFUNCTION(BlueprintCallable)
	void SetDisplayName(FString NewDisplayName);

	UFUNCTION(BlueprintCallable)
	FString GetDisplayName() const { return DisplayName; }
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool SetTargeted(bool bNewTargeted);
	
	UFUNCTION(BlueprintCallable)
	FORCEINLINE bool IsTargeted() { return bTargeted; }
};
