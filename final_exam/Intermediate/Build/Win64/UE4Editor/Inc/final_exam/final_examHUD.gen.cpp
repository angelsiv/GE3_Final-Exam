// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "final_exam/final_examHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefinal_examHUD() {}
// Cross Module References
	FINAL_EXAM_API UClass* Z_Construct_UClass_Afinal_examHUD_NoRegister();
	FINAL_EXAM_API UClass* Z_Construct_UClass_Afinal_examHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_final_exam();
// End Cross Module References
	void Afinal_examHUD::StaticRegisterNativesAfinal_examHUD()
	{
	}
	UClass* Z_Construct_UClass_Afinal_examHUD_NoRegister()
	{
		return Afinal_examHUD::StaticClass();
	}
	struct Z_Construct_UClass_Afinal_examHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Afinal_examHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_final_exam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afinal_examHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "final_examHUD.h" },
		{ "ModuleRelativePath", "final_examHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Afinal_examHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Afinal_examHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Afinal_examHUD_Statics::ClassParams = {
		&Afinal_examHUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Afinal_examHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_Afinal_examHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Afinal_examHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Afinal_examHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Afinal_examHUD, 2441921383);
	template<> FINAL_EXAM_API UClass* StaticClass<Afinal_examHUD>()
	{
		return Afinal_examHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Afinal_examHUD(Z_Construct_UClass_Afinal_examHUD, &Afinal_examHUD::StaticClass, TEXT("/Script/final_exam"), TEXT("Afinal_examHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Afinal_examHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
