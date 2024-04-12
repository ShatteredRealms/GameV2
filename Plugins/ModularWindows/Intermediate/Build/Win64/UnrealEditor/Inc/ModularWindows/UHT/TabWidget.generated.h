// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/TabWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARWINDOWS_TabWidget_generated_h
#error "TabWidget.generated.h already included, missing '#pragma once' in TabWidget.h"
#endif
#define MODULARWINDOWS_TabWidget_generated_h

#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_TabWidget_h_21_SPARSE_DATA
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_TabWidget_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_TabWidget_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_TabWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTabClicked); \
	DECLARE_FUNCTION(execIsSelected); \
	DECLARE_FUNCTION(execSetSelected);


#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_TabWidget_h_21_ACCESSORS
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_TabWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTabWidget(); \
	friend struct Z_Construct_UClass_UTabWidget_Statics; \
public: \
	DECLARE_CLASS(UTabWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularWindows"), NO_API) \
	DECLARE_SERIALIZER(UTabWidget)


#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_TabWidget_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTabWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTabWidget(UTabWidget&&); \
	NO_API UTabWidget(const UTabWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTabWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTabWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTabWidget) \
	NO_API virtual ~UTabWidget();


#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_TabWidget_h_18_PROLOG
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_TabWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_TabWidget_h_21_SPARSE_DATA \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_TabWidget_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_TabWidget_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_TabWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_TabWidget_h_21_ACCESSORS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_TabWidget_h_21_INCLASS_NO_PURE_DECLS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_TabWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARWINDOWS_API UClass* StaticClass<class UTabWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_TabWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
