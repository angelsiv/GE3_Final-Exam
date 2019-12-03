// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "final_sample/final_sampleHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefinal_sampleHUD() {}
// Cross Module References
	FINAL_SAMPLE_API UClass* Z_Construct_UClass_Afinal_sampleHUD_NoRegister();
	FINAL_SAMPLE_API UClass* Z_Construct_UClass_Afinal_sampleHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_final_sample();
// End Cross Module References
	void Afinal_sampleHUD::StaticRegisterNativesAfinal_sampleHUD()
	{
	}
	UClass* Z_Construct_UClass_Afinal_sampleHUD_NoRegister()
	{
		return Afinal_sampleHUD::StaticClass();
	}
	struct Z_Construct_UClass_Afinal_sampleHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Afinal_sampleHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_final_sample,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afinal_sampleHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "final_sampleHUD.h" },
		{ "ModuleRelativePath", "final_sampleHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Afinal_sampleHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Afinal_sampleHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Afinal_sampleHUD_Statics::ClassParams = {
		&Afinal_sampleHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_Afinal_sampleHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_Afinal_sampleHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Afinal_sampleHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Afinal_sampleHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Afinal_sampleHUD, 845313302);
	template<> FINAL_SAMPLE_API UClass* StaticClass<Afinal_sampleHUD>()
	{
		return Afinal_sampleHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Afinal_sampleHUD(Z_Construct_UClass_Afinal_sampleHUD, &Afinal_sampleHUD::StaticClass, TEXT("/Script/final_sample"), TEXT("Afinal_sampleHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Afinal_sampleHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
