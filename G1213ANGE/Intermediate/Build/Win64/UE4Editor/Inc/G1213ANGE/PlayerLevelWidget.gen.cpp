// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G1213ANGE/PlayerLevelWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerLevelWidget() {}
// Cross Module References
	G1213ANGE_API UClass* Z_Construct_UClass_UPlayerLevelWidget_NoRegister();
	G1213ANGE_API UClass* Z_Construct_UClass_UPlayerLevelWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_G1213ANGE();
	G1213ANGE_API UClass* Z_Construct_UClass_AG1213ANGECharacter_NoRegister();
// End Cross Module References
	void UPlayerLevelWidget::StaticRegisterNativesUPlayerLevelWidget()
	{
	}
	UClass* Z_Construct_UClass_UPlayerLevelWidget_NoRegister()
	{
		return UPlayerLevelWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerLevelWidget_Statics
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
	UObject* (*const Z_Construct_UClass_UPlayerLevelWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_G1213ANGE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerLevelWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerLevelWidget.h" },
		{ "ModuleRelativePath", "PlayerLevelWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerLevelWidget_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "PlayerLevelWidget" },
		{ "ModuleRelativePath", "PlayerLevelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerLevelWidget_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerLevelWidget, Player), Z_Construct_UClass_AG1213ANGECharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerLevelWidget_Statics::NewProp_Player_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerLevelWidget_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerLevelWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerLevelWidget_Statics::NewProp_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerLevelWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerLevelWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerLevelWidget_Statics::ClassParams = {
		&UPlayerLevelWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerLevelWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPlayerLevelWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerLevelWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlayerLevelWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerLevelWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerLevelWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerLevelWidget, 1893503939);
	template<> G1213ANGE_API UClass* StaticClass<UPlayerLevelWidget>()
	{
		return UPlayerLevelWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerLevelWidget(Z_Construct_UClass_UPlayerLevelWidget, &UPlayerLevelWidget::StaticClass, TEXT("/Script/G1213ANGE"), TEXT("UPlayerLevelWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerLevelWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
