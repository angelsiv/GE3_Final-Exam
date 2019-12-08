// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "final_sample/PlayerHPWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHPWidget() {}
// Cross Module References
	FINAL_SAMPLE_API UClass* Z_Construct_UClass_UPlayerHPWidget_NoRegister();
	FINAL_SAMPLE_API UClass* Z_Construct_UClass_UPlayerHPWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_final_sample();
	FINAL_SAMPLE_API UClass* Z_Construct_UClass_Afinal_sampleCharacter_NoRegister();
// End Cross Module References
	void UPlayerHPWidget::StaticRegisterNativesUPlayerHPWidget()
	{
	}
	UClass* Z_Construct_UClass_UPlayerHPWidget_NoRegister()
	{
		return UPlayerHPWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerHPWidget_Statics
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
	UObject* (*const Z_Construct_UClass_UPlayerHPWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_final_sample,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHPWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerHPWidget.h" },
		{ "ModuleRelativePath", "PlayerHPWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHPWidget_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "PlayerHPWidget" },
		{ "ModuleRelativePath", "PlayerHPWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHPWidget_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerHPWidget, Player), Z_Construct_UClass_Afinal_sampleCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerHPWidget_Statics::NewProp_Player_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerHPWidget_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerHPWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHPWidget_Statics::NewProp_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerHPWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerHPWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerHPWidget_Statics::ClassParams = {
		&UPlayerHPWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerHPWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPlayerHPWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerHPWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlayerHPWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerHPWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerHPWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerHPWidget, 2408324794);
	template<> FINAL_SAMPLE_API UClass* StaticClass<UPlayerHPWidget>()
	{
		return UPlayerHPWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerHPWidget(Z_Construct_UClass_UPlayerHPWidget, &UPlayerHPWidget::StaticClass, TEXT("/Script/final_sample"), TEXT("UPlayerHPWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerHPWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
