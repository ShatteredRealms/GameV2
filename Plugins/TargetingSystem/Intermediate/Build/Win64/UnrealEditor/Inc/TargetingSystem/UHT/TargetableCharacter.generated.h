// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Targets/TargetableCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTargetComponent;
#ifdef TARGETINGSYSTEM_TargetableCharacter_generated_h
#error "TargetableCharacter.generated.h already included, missing '#pragma once' in TargetableCharacter.h"
#endif
#define TARGETINGSYSTEM_TargetableCharacter_generated_h

#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_TargetableCharacter_h_16_SPARSE_DATA
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_TargetableCharacter_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_TargetableCharacter_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_TargetableCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTargetComponent);


#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_TargetableCharacter_h_16_ACCESSORS
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_TargetableCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATargetableCharacter(); \
	friend struct Z_Construct_UClass_ATargetableCharacter_Statics; \
public: \
	DECLARE_CLASS(ATargetableCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TargetingSystem"), NO_API) \
	DECLARE_SERIALIZER(ATargetableCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ATargetableCharacter*>(this); }


#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_TargetableCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATargetableCharacter(ATargetableCharacter&&); \
	NO_API ATargetableCharacter(const ATargetableCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATargetableCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATargetableCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATargetableCharacter) \
	NO_API virtual ~ATargetableCharacter();


#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_TargetableCharacter_h_13_PROLOG
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_TargetableCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_TargetableCharacter_h_16_SPARSE_DATA \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_TargetableCharacter_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_TargetableCharacter_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_TargetableCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_TargetableCharacter_h_16_ACCESSORS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_TargetableCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_TargetableCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TARGETINGSYSTEM_API UClass* StaticClass<class ATargetableCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_TargetableCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
