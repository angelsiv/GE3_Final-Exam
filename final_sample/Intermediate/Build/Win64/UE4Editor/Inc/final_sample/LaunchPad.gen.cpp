// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "final_sample/LaunchPad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaunchPad() {}
// Cross Module References
	FINAL_SAMPLE_API UClass* Z_Construct_UClass_ALaunchPad_NoRegister();
	FINAL_SAMPLE_API UClass* Z_Construct_UClass_ALaunchPad();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_final_sample();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ALaunchPad::StaticRegisterNativesALaunchPad()
	{
	}
	UClass* Z_Construct_UClass_ALaunchPad_NoRegister()
	{
		return ALaunchPad::StaticClass();
	}
	struct Z_Construct_UClass_ALaunchPad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALaunchPad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_final_sample,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaunchPad_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LaunchPad.h" },
		{ "ModuleRelativePath", "LaunchPad.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaunchPad_Statics::NewProp_UpForce_MetaData[] = {
		{ "Category", "LaunchPad" },
		{ "ModuleRelativePath", "LaunchPad.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALaunchPad_Statics::NewProp_UpForce = { "UpForce", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALaunchPad, UpForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ALaunchPad_Statics::NewProp_UpForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALaunchPad_Statics::NewProp_UpForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaunchPad_Statics::NewProp_ForwardForce_MetaData[] = {
		{ "Category", "LaunchPad" },
		{ "ModuleRelativePath", "LaunchPad.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALaunchPad_Statics::NewProp_ForwardForce = { "ForwardForce", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALaunchPad, ForwardForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ALaunchPad_Statics::NewProp_ForwardForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALaunchPad_Statics::NewProp_ForwardForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaunchPad_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "LaunchPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LaunchPad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaunchPad_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALaunchPad, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALaunchPad_Statics::NewProp_MeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALaunchPad_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaunchPad_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "LaunchPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LaunchPad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaunchPad_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALaunchPad, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALaunchPad_Statics::NewProp_BoxComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALaunchPad_Statics::NewProp_BoxComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALaunchPad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaunchPad_Statics::NewProp_UpForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaunchPad_Statics::NewProp_ForwardForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaunchPad_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaunchPad_Statics::NewProp_BoxComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALaunchPad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaunchPad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALaunchPad_Statics::ClassParams = {
		&ALaunchPad::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALaunchPad_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ALaunchPad_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALaunchPad_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALaunchPad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALaunchPad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALaunchPad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALaunchPad, 2374956059);
	template<> FINAL_SAMPLE_API UClass* StaticClass<ALaunchPad>()
	{
		return ALaunchPad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALaunchPad(Z_Construct_UClass_ALaunchPad, &ALaunchPad::StaticClass, TEXT("/Script/final_sample"), TEXT("ALaunchPad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALaunchPad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
