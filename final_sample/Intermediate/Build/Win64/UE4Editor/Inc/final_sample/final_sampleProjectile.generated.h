// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FINAL_SAMPLE_final_sampleProjectile_generated_h
#error "final_sampleProjectile.generated.h already included, missing '#pragma once' in final_sampleProjectile.h"
#endif
#define FINAL_SAMPLE_final_sampleProjectile_generated_h

#define final_sample_Source_final_sample_final_sampleProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define final_sample_Source_final_sample_final_sampleProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define final_sample_Source_final_sample_final_sampleProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAfinal_sampleProjectile(); \
	friend struct Z_Construct_UClass_Afinal_sampleProjectile_Statics; \
public: \
	DECLARE_CLASS(Afinal_sampleProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/final_sample"), NO_API) \
	DECLARE_SERIALIZER(Afinal_sampleProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define final_sample_Source_final_sample_final_sampleProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAfinal_sampleProjectile(); \
	friend struct Z_Construct_UClass_Afinal_sampleProjectile_Statics; \
public: \
	DECLARE_CLASS(Afinal_sampleProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/final_sample"), NO_API) \
	DECLARE_SERIALIZER(Afinal_sampleProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define final_sample_Source_final_sample_final_sampleProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Afinal_sampleProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Afinal_sampleProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Afinal_sampleProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Afinal_sampleProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Afinal_sampleProjectile(Afinal_sampleProjectile&&); \
	NO_API Afinal_sampleProjectile(const Afinal_sampleProjectile&); \
public:


#define final_sample_Source_final_sample_final_sampleProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Afinal_sampleProjectile(Afinal_sampleProjectile&&); \
	NO_API Afinal_sampleProjectile(const Afinal_sampleProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Afinal_sampleProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Afinal_sampleProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Afinal_sampleProjectile)


#define final_sample_Source_final_sample_final_sampleProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(Afinal_sampleProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(Afinal_sampleProjectile, ProjectileMovement); }


#define final_sample_Source_final_sample_final_sampleProjectile_h_9_PROLOG
#define final_sample_Source_final_sample_final_sampleProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	final_sample_Source_final_sample_final_sampleProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	final_sample_Source_final_sample_final_sampleProjectile_h_12_RPC_WRAPPERS \
	final_sample_Source_final_sample_final_sampleProjectile_h_12_INCLASS \
	final_sample_Source_final_sample_final_sampleProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define final_sample_Source_final_sample_final_sampleProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	final_sample_Source_final_sample_final_sampleProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	final_sample_Source_final_sample_final_sampleProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	final_sample_Source_final_sample_final_sampleProjectile_h_12_INCLASS_NO_PURE_DECLS \
	final_sample_Source_final_sample_final_sampleProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINAL_SAMPLE_API UClass* StaticClass<class Afinal_sampleProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID final_sample_Source_final_sample_final_sampleProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
