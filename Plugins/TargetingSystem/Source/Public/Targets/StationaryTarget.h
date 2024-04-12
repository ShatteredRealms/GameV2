// Copyright Wil Simpson All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Targetable.h"
#include "GameFramework/Actor.h"
#include "StationaryTarget.generated.h"

UCLASS(Blueprintable)
class TARGETINGSYSTEM_API AStationaryTarget : public AActor, public ITargetable
{
	GENERATED_BODY()
	
protected:
	/** The main skeletal mesh associated with this stationary target (optional sub-object). */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
	TObjectPtr<UStaticMeshComponent> Mesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Targeting)
	UTargetComponent* TargetComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Targeting)
	FString DisplayName;
	
public:	
	// Sets default values for this actor's properties
	AStationaryTarget(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable)
	virtual UTargetComponent* GetTargetComponent() override;

	UFUNCTION(BlueprintCallable)
	void SetDisplayName(FString NewDisplayName);

	UFUNCTION(BlueprintCallable)
	FORCEINLINE FString GetDisplayName() const { return DisplayName; }
};
