// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "final_exam/final_examGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefinal_examGameMode() {}
// Cross Module References
	FINAL_EXAM_API UClass* Z_Construct_UClass_Afinal_examGameMode_NoRegister();
	FINAL_EXAM_API UClass* Z_Construct_UClass_Afinal_examGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_final_exam();
// End Cross Module References
	void Afinal_examGameMode::StaticRegisterNativesAfinal_examGameMode()
	{
	}
	UClass* Z_Construct_UClass_Afinal_examGameMode_NoRegister()
	{
		return Afinal_examGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Afinal_examGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Afinal_examGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_final_exam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afinal_examGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "final_examGameMode.h" },
		{ "ModuleRelativePath", "final_examGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Afinal_examGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Afinal_examGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Afinal_examGameMode_Statics::ClassParams = {
		&Afinal_examGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_Afinal_examGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_Afinal_examGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Afinal_examGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Afinal_examGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Afinal_examGameMode, 1087265511);
	template<> FINAL_EXAM_API UClass* StaticClass<Afinal_examGameMode>()
	{
		return Afinal_examGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Afinal_examGameMode(Z_Construct_UClass_Afinal_examGameMode, &Afinal_examGameMode::StaticClass, TEXT("/Script/final_exam"), TEXT("Afinal_examGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Afinal_examGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
