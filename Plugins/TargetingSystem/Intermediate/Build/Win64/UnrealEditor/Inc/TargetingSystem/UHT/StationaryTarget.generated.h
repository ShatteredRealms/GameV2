// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Targets/StationaryTarget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTargetComponent;
#ifdef TARGETINGSYSTEM_StationaryTarget_generated_h
#error "StationaryTarget.generated.h already included, missing '#pragma once' in StationaryTarget.h"
#endif
#define TARGETINGSYSTEM_StationaryTarget_generated_h

#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_StationaryTarget_h_13_SPARSE_DATA
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_StationaryTarget_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_StationaryTarget_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_StationaryTarget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execSetDisplayName); \
	DECLARE_FUNCTION(execGetTargetComponent);


#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_StationaryTarget_h_13_ACCESSORS
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_StationaryTarget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStationaryTarget(); \
	friend struct Z_Construct_UClass_AStationaryTarget_Statics; \
public: \
	DECLARE_CLASS(AStationaryTarget, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TargetingSystem"), NO_API) \
	DECLARE_SERIALIZER(AStationaryTarget) \
	virtual UObject* _getUObject() const override { return const_cast<AStationaryTarget*>(this); }


#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_StationaryTarget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStationaryTarget(AStationaryTarget&&); \
	NO_API AStationaryTarget(const AStationaryTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStationaryTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStationaryTarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStationaryTarget) \
	NO_API virtual ~AStationaryTarget();


#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_StationaryTarget_h_10_PROLOG
#define FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_StationaryTarget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_StationaryTarget_h_13_SPARSE_DATA \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_StationaryTarget_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_StationaryTarget_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_StationaryTarget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_StationaryTarget_h_13_ACCESSORS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_StationaryTarget_h_13_INCLASS_NO_PURE_DECLS \
	FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_StationaryTarget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TARGETINGSYSTEM_API UClass* StaticClass<class AStationaryTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_StationaryTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
