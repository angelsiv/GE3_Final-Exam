// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G1213ANGE/G1213ANGEGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeG1213ANGEGameMode() {}
// Cross Module References
	G1213ANGE_API UClass* Z_Construct_UClass_AG1213ANGEGameMode_NoRegister();
	G1213ANGE_API UClass* Z_Construct_UClass_AG1213ANGEGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_G1213ANGE();
// End Cross Module References
	void AG1213ANGEGameMode::StaticRegisterNativesAG1213ANGEGameMode()
	{
	}
	UClass* Z_Construct_UClass_AG1213ANGEGameMode_NoRegister()
	{
		return AG1213ANGEGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AG1213ANGEGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AG1213ANGEGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_G1213ANGE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AG1213ANGEGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "G1213ANGEGameMode.h" },
		{ "ModuleRelativePath", "G1213ANGEGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AG1213ANGEGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AG1213ANGEGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AG1213ANGEGameMode_Statics::ClassParams = {
		&AG1213ANGEGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AG1213ANGEGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AG1213ANGEGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AG1213ANGEGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AG1213ANGEGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AG1213ANGEGameMode, 2018200011);
	template<> G1213ANGE_API UClass* StaticClass<AG1213ANGEGameMode>()
	{
		return AG1213ANGEGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AG1213ANGEGameMode(Z_Construct_UClass_AG1213ANGEGameMode, &AG1213ANGEGameMode::StaticClass, TEXT("/Script/G1213ANGE"), TEXT("AG1213ANGEGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AG1213ANGEGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
