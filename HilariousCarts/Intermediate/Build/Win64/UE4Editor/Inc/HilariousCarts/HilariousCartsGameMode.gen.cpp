// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HilariousCarts/HilariousCartsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHilariousCartsGameMode() {}
// Cross Module References
	HILARIOUSCARTS_API UClass* Z_Construct_UClass_AHilariousCartsGameMode_NoRegister();
	HILARIOUSCARTS_API UClass* Z_Construct_UClass_AHilariousCartsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HilariousCarts();
// End Cross Module References
	void AHilariousCartsGameMode::StaticRegisterNativesAHilariousCartsGameMode()
	{
	}
	UClass* Z_Construct_UClass_AHilariousCartsGameMode_NoRegister()
	{
		return AHilariousCartsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHilariousCartsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHilariousCartsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HilariousCarts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHilariousCartsGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HilariousCartsGameMode.h" },
		{ "ModuleRelativePath", "HilariousCartsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHilariousCartsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHilariousCartsGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHilariousCartsGameMode_Statics::ClassParams = {
		&AHilariousCartsGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHilariousCartsGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHilariousCartsGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHilariousCartsGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHilariousCartsGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHilariousCartsGameMode, 907632212);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHilariousCartsGameMode(Z_Construct_UClass_AHilariousCartsGameMode, &AHilariousCartsGameMode::StaticClass, TEXT("/Script/HilariousCarts"), TEXT("AHilariousCartsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHilariousCartsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
