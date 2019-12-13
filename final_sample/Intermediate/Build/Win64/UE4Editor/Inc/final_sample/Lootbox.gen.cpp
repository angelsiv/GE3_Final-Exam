// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "final_sample/Lootbox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootbox() {}
// Cross Module References
	FINAL_SAMPLE_API UClass* Z_Construct_UClass_ALootbox_NoRegister();
	FINAL_SAMPLE_API UClass* Z_Construct_UClass_ALootbox();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_final_sample();
	FINAL_SAMPLE_API UClass* Z_Construct_UClass_Afinal_sampleCharacter_NoRegister();
// End Cross Module References
	void ALootbox::StaticRegisterNativesALootbox()
	{
	}
	UClass* Z_Construct_UClass_ALootbox_NoRegister()
	{
		return ALootbox::StaticClass();
	}
	struct Z_Construct_UClass_ALootbox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALootbox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_final_sample,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootbox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Lootbox.h" },
		{ "ModuleRelativePath", "Lootbox.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootbox_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "Lootbox" },
		{ "ModuleRelativePath", "Lootbox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALootbox_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALootbox, Player), Z_Construct_UClass_Afinal_sampleCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALootbox_Statics::NewProp_Player_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALootbox_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALootbox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootbox_Statics::NewProp_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALootbox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALootbox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALootbox_Statics::ClassParams = {
		&ALootbox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALootbox_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ALootbox_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALootbox_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALootbox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALootbox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALootbox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALootbox, 3305669160);
	template<> FINAL_SAMPLE_API UClass* StaticClass<ALootbox>()
	{
		return ALootbox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALootbox(Z_Construct_UClass_ALootbox, &ALootbox::StaticClass, TEXT("/Script/final_sample"), TEXT("ALootbox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALootbox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
