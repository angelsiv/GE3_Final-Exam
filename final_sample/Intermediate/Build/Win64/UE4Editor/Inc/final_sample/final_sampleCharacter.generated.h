// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINAL_SAMPLE_final_sampleCharacter_generated_h
#error "final_sampleCharacter.generated.h already included, missing '#pragma once' in final_sampleCharacter.h"
#endif
#define FINAL_SAMPLE_final_sampleCharacter_generated_h

#define final_sample_Source_final_sample_final_sampleCharacter_h_14_RPC_WRAPPERS
#define final_sample_Source_final_sample_final_sampleCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define final_sample_Source_final_sample_final_sampleCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAfinal_sampleCharacter(); \
	friend struct Z_Construct_UClass_Afinal_sampleCharacter_Statics; \
public: \
	DECLARE_CLASS(Afinal_sampleCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/final_sample"), NO_API) \
	DECLARE_SERIALIZER(Afinal_sampleCharacter)


#define final_sample_Source_final_sample_final_sampleCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAfinal_sampleCharacter(); \
	friend struct Z_Construct_UClass_Afinal_sampleCharacter_Statics; \
public: \
	DECLARE_CLASS(Afinal_sampleCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/final_sample"), NO_API) \
	DECLARE_SERIALIZER(Afinal_sampleCharacter)


#define final_sample_Source_final_sample_final_sampleCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Afinal_sampleCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Afinal_sampleCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Afinal_sampleCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Afinal_sampleCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Afinal_sampleCharacter(Afinal_sampleCharacter&&); \
	NO_API Afinal_sampleCharacter(const Afinal_sampleCharacter&); \
public:


#define final_sample_Source_final_sample_final_sampleCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Afinal_sampleCharacter(Afinal_sampleCharacter&&); \
	NO_API Afinal_sampleCharacter(const Afinal_sampleCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Afinal_sampleCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Afinal_sampleCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Afinal_sampleCharacter)


#define final_sample_Source_final_sample_final_sampleCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(Afinal_sampleCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(Afinal_sampleCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(Afinal_sampleCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(Afinal_sampleCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(Afinal_sampleCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(Afinal_sampleCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(Afinal_sampleCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(Afinal_sampleCharacter, L_MotionController); }


#define final_sample_Source_final_sample_final_sampleCharacter_h_11_PROLOG
#define final_sample_Source_final_sample_final_sampleCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	final_sample_Source_final_sample_final_sampleCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	final_sample_Source_final_sample_final_sampleCharacter_h_14_RPC_WRAPPERS \
	final_sample_Source_final_sample_final_sampleCharacter_h_14_INCLASS \
	final_sample_Source_final_sample_final_sampleCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define final_sample_Source_final_sample_final_sampleCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	final_sample_Source_final_sample_final_sampleCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	final_sample_Source_final_sample_final_sampleCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	final_sample_Source_final_sample_final_sampleCharacter_h_14_INCLASS_NO_PURE_DECLS \
	final_sample_Source_final_sample_final_sampleCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINAL_SAMPLE_API UClass* StaticClass<class Afinal_sampleCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID final_sample_Source_final_sample_final_sampleCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
