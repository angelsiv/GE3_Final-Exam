// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G1213ANGE/G1213ANGEHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeG1213ANGEHUD() {}
// Cross Module References
	G1213ANGE_API UClass* Z_Construct_UClass_AG1213ANGEHUD_NoRegister();
	G1213ANGE_API UClass* Z_Construct_UClass_AG1213ANGEHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_G1213ANGE();
// End Cross Module References
	void AG1213ANGEHUD::StaticRegisterNativesAG1213ANGEHUD()
	{
	}
	UClass* Z_Construct_UClass_AG1213ANGEHUD_NoRegister()
	{
		return AG1213ANGEHUD::StaticClass();
	}
	struct Z_Construct_UClass_AG1213ANGEHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AG1213ANGEHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_G1213ANGE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AG1213ANGEHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "G1213ANGEHUD.h" },
		{ "ModuleRelativePath", "G1213ANGEHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AG1213ANGEHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AG1213ANGEHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AG1213ANGEHUD_Statics::ClassParams = {
		&AG1213ANGEHUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AG1213ANGEHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AG1213ANGEHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AG1213ANGEHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AG1213ANGEHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AG1213ANGEHUD, 3650750193);
	template<> G1213ANGE_API UClass* StaticClass<AG1213ANGEHUD>()
	{
		return AG1213ANGEHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AG1213ANGEHUD(Z_Construct_UClass_AG1213ANGEHUD, &AG1213ANGEHUD::StaticClass, TEXT("/Script/G1213ANGE"), TEXT("AG1213ANGEHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AG1213ANGEHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
