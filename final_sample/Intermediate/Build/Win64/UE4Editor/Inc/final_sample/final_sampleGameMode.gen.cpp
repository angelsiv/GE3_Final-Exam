// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "final_sample/final_sampleGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefinal_sampleGameMode() {}
// Cross Module References
	FINAL_SAMPLE_API UClass* Z_Construct_UClass_Afinal_sampleGameMode_NoRegister();
	FINAL_SAMPLE_API UClass* Z_Construct_UClass_Afinal_sampleGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_final_sample();
// End Cross Module References
	void Afinal_sampleGameMode::StaticRegisterNativesAfinal_sampleGameMode()
	{
	}
	UClass* Z_Construct_UClass_Afinal_sampleGameMode_NoRegister()
	{
		return Afinal_sampleGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Afinal_sampleGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Afinal_sampleGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_final_sample,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afinal_sampleGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "final_sampleGameMode.h" },
		{ "ModuleRelativePath", "final_sampleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Afinal_sampleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Afinal_sampleGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Afinal_sampleGameMode_Statics::ClassParams = {
		&Afinal_sampleGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Afinal_sampleGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_Afinal_sampleGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Afinal_sampleGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Afinal_sampleGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Afinal_sampleGameMode, 779329026);
	template<> FINAL_SAMPLE_API UClass* StaticClass<Afinal_sampleGameMode>()
	{
		return Afinal_sampleGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Afinal_sampleGameMode(Z_Construct_UClass_Afinal_sampleGameMode, &Afinal_sampleGameMode::StaticClass, TEXT("/Script/final_sample"), TEXT("Afinal_sampleGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Afinal_sampleGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
