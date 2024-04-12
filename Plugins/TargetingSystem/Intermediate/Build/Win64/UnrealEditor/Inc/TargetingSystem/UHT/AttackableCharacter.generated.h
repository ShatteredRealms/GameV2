// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Targets/AttackableCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAttackableCharacter;
#ifdef TARGETINGSYSTEM_AttackableCharacter_generated_h
#error "AttackableCharacter.generated.h already included, missing '#pragma once' in AttackableCharacter.h"
#endif
#define TARGETINGSYSTEM_AttackableCharacter_generated_h

#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h_17_SPARSE_DATA
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnAttackTargetUpdated_Implementation(); \
	virtual bool HandleStopAttack_Validate(); \
	virtual void HandleStopAttack_Implementation(); \
	virtual bool HandleStartAttack_Validate(AAttackableCharacter* ); \
	virtual void HandleStartAttack_Implementation(AAttackableCharacter* Target); \
 \
	DECLARE_FUNCTION(execGetAttackTargetRotation); \
	DECLARE_FUNCTION(execOnAttackTargetUpdated); \
	DECLARE_FUNCTION(execGetAttackTarget); \
	DECLARE_FUNCTION(execHandleStopAttack); \
	DECLARE_FUNCTION(execHandleStartAttack); \
	DECLARE_FUNCTION(execStopAttack); \
	DECLARE_FUNCTION(execStartAttack); \
	DECLARE_FUNCTION(execIsAttacking); \
	DECLARE_FUNCTION(execOnRep_AttackTarget);


#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h_17_ACCESSORS
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h_17_CALLBACK_WRAPPERS
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAttackableCharacter(); \
	friend struct Z_Construct_UClass_AAttackableCharacter_Statics; \
public: \
	DECLARE_CLASS(AAttackableCharacter, ATargetableCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TargetingSystem"), NO_API) \
	DECLARE_SERIALIZER(AAttackableCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AttackTarget=NETFIELD_REP_START, \
		NETFIELD_REP_END=AttackTarget	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAttackableCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAttackableCharacter(AAttackableCharacter&&); \
	NO_API AAttackableCharacter(const AAttackableCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAttackableCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAttackableCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAttackableCharacter) \
	NO_API virtual ~AAttackableCharacter();


#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h_14_PROLOG
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h_17_SPARSE_DATA \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h_17_ACCESSORS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h_17_CALLBACK_WRAPPERS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TARGETINGSYSTEM_API UClass* StaticClass<class AAttackableCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_AttackableCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
