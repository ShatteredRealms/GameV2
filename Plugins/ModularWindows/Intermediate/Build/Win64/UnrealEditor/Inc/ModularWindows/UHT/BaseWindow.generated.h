// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseWindow.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTabWidget;
class UUserWidget;
#ifdef MODULARWINDOWS_BaseWindow_generated_h
#error "BaseWindow.generated.h already included, missing '#pragma once' in BaseWindow.h"
#endif
#define MODULARWINDOWS_BaseWindow_generated_h

#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_BaseWindow_h_22_SPARSE_DATA
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_BaseWindow_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_BaseWindow_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_BaseWindow_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCloseable); \
	DECLARE_FUNCTION(execFocusTab); \
	DECLARE_FUNCTION(execAppendTab); \
	DECLARE_FUNCTION(execCreateTab);


#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_BaseWindow_h_22_ACCESSORS
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_BaseWindow_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseWindow(); \
	friend struct Z_Construct_UClass_UBaseWindow_Statics; \
public: \
	DECLARE_CLASS(UBaseWindow, UMoveableResizeableWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularWindows"), NO_API) \
	DECLARE_SERIALIZER(UBaseWindow)


#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_BaseWindow_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseWindow(UBaseWindow&&); \
	NO_API UBaseWindow(const UBaseWindow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseWindow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseWindow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseWindow) \
	NO_API virtual ~UBaseWindow();


#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_BaseWindow_h_19_PROLOG
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_BaseWindow_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_BaseWindow_h_22_SPARSE_DATA \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_BaseWindow_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_BaseWindow_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_BaseWindow_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_BaseWindow_h_22_ACCESSORS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_BaseWindow_h_22_INCLASS_NO_PURE_DECLS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_BaseWindow_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARWINDOWS_API UClass* StaticClass<class UBaseWindow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_BaseWindow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
