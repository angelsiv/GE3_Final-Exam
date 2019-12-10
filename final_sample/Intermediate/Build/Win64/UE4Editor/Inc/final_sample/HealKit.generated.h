// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef FINAL_SAMPLE_HealKit_generated_h
#error "HealKit.generated.h already included, missing '#pragma once' in HealKit.h"
#endif
#define FINAL_SAMPLE_HealKit_generated_h

#define final_sample_Source_final_sample_HealKit_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHeal) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Heal(Z_Param_Character); \
		P_NATIVE_END; \
	}


#define final_sample_Source_final_sample_HealKit_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHeal) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Heal(Z_Param_Character); \
		P_NATIVE_END; \
	}


#define final_sample_Source_final_sample_HealKit_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHealKit(); \
	friend struct Z_Construct_UClass_AHealKit_Statics; \
public: \
	DECLARE_CLASS(AHealKit, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/final_sample"), NO_API) \
	DECLARE_SERIALIZER(AHealKit)


#define final_sample_Source_final_sample_HealKit_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHealKit(); \
	friend struct Z_Construct_UClass_AHealKit_Statics; \
public: \
	DECLARE_CLASS(AHealKit, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/final_sample"), NO_API) \
	DECLARE_SERIALIZER(AHealKit)


#define final_sample_Source_final_sample_HealKit_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHealKit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHealKit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealKit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealKit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealKit(AHealKit&&); \
	NO_API AHealKit(const AHealKit&); \
public:


#define final_sample_Source_final_sample_HealKit_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealKit(AHealKit&&); \
	NO_API AHealKit(const AHealKit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealKit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealKit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHealKit)


#define final_sample_Source_final_sample_HealKit_h_12_PRIVATE_PROPERTY_OFFSET
#define final_sample_Source_final_sample_HealKit_h_9_PROLOG
#define final_sample_Source_final_sample_HealKit_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	final_sample_Source_final_sample_HealKit_h_12_PRIVATE_PROPERTY_OFFSET \
	final_sample_Source_final_sample_HealKit_h_12_RPC_WRAPPERS \
	final_sample_Source_final_sample_HealKit_h_12_INCLASS \
	final_sample_Source_final_sample_HealKit_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define final_sample_Source_final_sample_HealKit_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	final_sample_Source_final_sample_HealKit_h_12_PRIVATE_PROPERTY_OFFSET \
	final_sample_Source_final_sample_HealKit_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	final_sample_Source_final_sample_HealKit_h_12_INCLASS_NO_PURE_DECLS \
	final_sample_Source_final_sample_HealKit_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINAL_SAMPLE_API UClass* StaticClass<class AHealKit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID final_sample_Source_final_sample_HealKit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
