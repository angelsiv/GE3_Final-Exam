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
#ifdef G1213ANGE_G1213ANGEProjectile_generated_h
#error "G1213ANGEProjectile.generated.h already included, missing '#pragma once' in G1213ANGEProjectile.h"
#endif
#define G1213ANGE_G1213ANGEProjectile_generated_h

#define G1213ANGE_Source_G1213ANGE_G1213ANGEProjectile_h_12_RPC_WRAPPERS \
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


#define G1213ANGE_Source_G1213ANGE_G1213ANGEProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define G1213ANGE_Source_G1213ANGE_G1213ANGEProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAG1213ANGEProjectile(); \
	friend struct Z_Construct_UClass_AG1213ANGEProjectile_Statics; \
public: \
	DECLARE_CLASS(AG1213ANGEProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/G1213ANGE"), NO_API) \
	DECLARE_SERIALIZER(AG1213ANGEProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define G1213ANGE_Source_G1213ANGE_G1213ANGEProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAG1213ANGEProjectile(); \
	friend struct Z_Construct_UClass_AG1213ANGEProjectile_Statics; \
public: \
	DECLARE_CLASS(AG1213ANGEProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/G1213ANGE"), NO_API) \
	DECLARE_SERIALIZER(AG1213ANGEProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define G1213ANGE_Source_G1213ANGE_G1213ANGEProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AG1213ANGEProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AG1213ANGEProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AG1213ANGEProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AG1213ANGEProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AG1213ANGEProjectile(AG1213ANGEProjectile&&); \
	NO_API AG1213ANGEProjectile(const AG1213ANGEProjectile&); \
public:


#define G1213ANGE_Source_G1213ANGE_G1213ANGEProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AG1213ANGEProjectile(AG1213ANGEProjectile&&); \
	NO_API AG1213ANGEProjectile(const AG1213ANGEProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AG1213ANGEProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AG1213ANGEProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AG1213ANGEProjectile)


#define G1213ANGE_Source_G1213ANGE_G1213ANGEProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AG1213ANGEProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AG1213ANGEProjectile, ProjectileMovement); }


#define G1213ANGE_Source_G1213ANGE_G1213ANGEProjectile_h_9_PROLOG
#define G1213ANGE_Source_G1213ANGE_G1213ANGEProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	G1213ANGE_Source_G1213ANGE_G1213ANGEProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	G1213ANGE_Source_G1213ANGE_G1213ANGEProjectile_h_12_RPC_WRAPPERS \
	G1213ANGE_Source_G1213ANGE_G1213ANGEProjectile_h_12_INCLASS \
	G1213ANGE_Source_G1213ANGE_G1213ANGEProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define G1213ANGE_Source_G1213ANGE_G1213ANGEProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	G1213ANGE_Source_G1213ANGE_G1213ANGEProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	G1213ANGE_Source_G1213ANGE_G1213ANGEProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	G1213ANGE_Source_G1213ANGE_G1213ANGEProjectile_h_12_INCLASS_NO_PURE_DECLS \
	G1213ANGE_Source_G1213ANGE_G1213ANGEProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> G1213ANGE_API UClass* StaticClass<class AG1213ANGEProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID G1213ANGE_Source_G1213ANGE_G1213ANGEProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
