// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G1213ANGE/CubemonLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubemonLevel() {}
// Cross Module References
	G1213ANGE_API UClass* Z_Construct_UClass_UCubemonLevel_NoRegister();
	G1213ANGE_API UClass* Z_Construct_UClass_UCubemonLevel();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_G1213ANGE();
	G1213ANGE_API UClass* Z_Construct_UClass_ACubemon_NoRegister();
// End Cross Module References
	void UCubemonLevel::StaticRegisterNativesUCubemonLevel()
	{
	}
	UClass* Z_Construct_UClass_UCubemonLevel_NoRegister()
	{
		return UCubemonLevel::StaticClass();
	}
	struct Z_Construct_UClass_UCubemonLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cubemon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cubemon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCubemonLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_G1213ANGE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubemonLevel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CubemonLevel.h" },
		{ "ModuleRelativePath", "CubemonLevel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubemonLevel_Statics::NewProp_Cubemon_MetaData[] = {
		{ "Category", "CubemonLevel" },
		{ "ModuleRelativePath", "CubemonLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCubemonLevel_Statics::NewProp_Cubemon = { "Cubemon", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCubemonLevel, Cubemon), Z_Construct_UClass_ACubemon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCubemonLevel_Statics::NewProp_Cubemon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCubemonLevel_Statics::NewProp_Cubemon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCubemonLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubemonLevel_Statics::NewProp_Cubemon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCubemonLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCubemonLevel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCubemonLevel_Statics::ClassParams = {
		&UCubemonLevel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCubemonLevel_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCubemonLevel_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCubemonLevel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCubemonLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCubemonLevel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCubemonLevel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCubemonLevel, 2178767337);
	template<> G1213ANGE_API UClass* StaticClass<UCubemonLevel>()
	{
		return UCubemonLevel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCubemonLevel(Z_Construct_UClass_UCubemonLevel, &UCubemonLevel::StaticClass, TEXT("/Script/G1213ANGE"), TEXT("UCubemonLevel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCubemonLevel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
