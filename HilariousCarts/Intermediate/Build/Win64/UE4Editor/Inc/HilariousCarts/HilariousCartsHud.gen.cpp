// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HilariousCarts/HilariousCartsHud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHilariousCartsHud() {}
// Cross Module References
	HILARIOUSCARTS_API UClass* Z_Construct_UClass_AHilariousCartsHud_NoRegister();
	HILARIOUSCARTS_API UClass* Z_Construct_UClass_AHilariousCartsHud();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_HilariousCarts();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	void AHilariousCartsHud::StaticRegisterNativesAHilariousCartsHud()
	{
	}
	UClass* Z_Construct_UClass_AHilariousCartsHud_NoRegister()
	{
		return AHilariousCartsHud::StaticClass();
	}
	struct Z_Construct_UClass_AHilariousCartsHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDFont;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHilariousCartsHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_HilariousCarts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHilariousCartsHud_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HilariousCartsHud.h" },
		{ "ModuleRelativePath", "HilariousCartsHud.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHilariousCartsHud_Statics::NewProp_HUDFont_MetaData[] = {
		{ "ModuleRelativePath", "HilariousCartsHud.h" },
		{ "ToolTip", "Font used to render the vehicle info" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHilariousCartsHud_Statics::NewProp_HUDFont = { UE4CodeGen_Private::EPropertyClass::Object, "HUDFont", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AHilariousCartsHud, HUDFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHilariousCartsHud_Statics::NewProp_HUDFont_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHilariousCartsHud_Statics::NewProp_HUDFont_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHilariousCartsHud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHilariousCartsHud_Statics::NewProp_HUDFont,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHilariousCartsHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHilariousCartsHud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHilariousCartsHud_Statics::ClassParams = {
		&AHilariousCartsHud::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		Z_Construct_UClass_AHilariousCartsHud_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AHilariousCartsHud_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHilariousCartsHud_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHilariousCartsHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHilariousCartsHud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHilariousCartsHud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHilariousCartsHud, 3662051742);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHilariousCartsHud(Z_Construct_UClass_AHilariousCartsHud, &AHilariousCartsHud::StaticClass, TEXT("/Script/HilariousCarts"), TEXT("AHilariousCartsHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHilariousCartsHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
