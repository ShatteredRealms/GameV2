// Copyright Wil Simpson All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "AttackTargetComponent.h"
#include "TargetableCharacter.h"
#include "AttackableCharacter.generated.h"


/**
 * Base SRO character that cant attack and be attacked. It has combat and skill attribute sets.
 */
UCLASS(Blueprintable, BlueprintType)
class TARGETINGSYSTEM_API AAttackableCharacter : public ATargetableCharacter
{
	GENERATED_BODY()
	
protected:
	/** Attack target of this. Null if not fighting. */
	UPROPERTY(ReplicatedUsing=OnRep_AttackTarget, VisibleAnywhere, BlueprintReadOnly, Category=Targeting)
	TObjectPtr<AAttackableCharacter> AttackTarget;

	UFUNCTION()
	void OnRep_AttackTarget(AAttackableCharacter* OldAttackTarget);
	
public:
	/** Setup replicated properties */
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/** Whether the character is attacking or not */
	UFUNCTION(BlueprintCallable, Category = Combat)
	FORCEINLINE bool IsAttacking() const { return AttackTarget != nullptr; }

	/** Attempts to start attacking the target */
	UFUNCTION(BlueprintCallable, Category = Combat)
	virtual void StartAttack(AAttackableCharacter* Target);

	/** Attempts to stop fighting */
	UFUNCTION(BlueprintCallable, Category = Combat)
	virtual void StopAttack();

	/** Server: Start fighting the given target */
	UFUNCTION(Server, Reliable, WithValidation)
	virtual void HandleStartAttack(AAttackableCharacter* Target);

	/** Server: Stop fighting the current target */
	UFUNCTION(Server, Reliable, WithValidation)
	virtual void HandleStopAttack();

	/** Gets the current fighting target */
	UFUNCTION(BlueprintCallable, Category = Combat)
	FORCEINLINE AAttackableCharacter* GetAttackTarget() const { return AttackTarget; }

	/** Called when the server fighting target is updated */
	UFUNCTION(BlueprintNativeEvent, Category=Targeting)
	void OnAttackTargetUpdated();

	/** Gets the rotation necessary to look at the fighting target */
	UFUNCTION(BlueprintCallable, Category=Targeting)
	FRotator GetAttackTargetRotation() const;
	
	virtual UAttackTargetComponent* GetTargetComponent() override;
};

