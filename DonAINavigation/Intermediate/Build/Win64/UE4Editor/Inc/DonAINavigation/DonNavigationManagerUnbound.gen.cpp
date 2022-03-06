// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonAINavigation/Classes/DonNavigationManagerUnbound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonNavigationManagerUnbound() {}
// Cross Module References
	DONAINAVIGATION_API UClass* Z_Construct_UClass_ADonNavigationManagerUnbound_NoRegister();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_ADonNavigationManagerUnbound();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_ADonNavigationManager();
	UPackage* Z_Construct_UPackage__Script_DonAINavigation();
// End Cross Module References
	void ADonNavigationManagerUnbound::StaticRegisterNativesADonNavigationManagerUnbound()
	{
	}
	UClass* Z_Construct_UClass_ADonNavigationManagerUnbound_NoRegister()
	{
		return ADonNavigationManagerUnbound::StaticClass();
	}
	struct Z_Construct_UClass_ADonNavigationManagerUnbound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADonNavigationManagerUnbound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADonNavigationManager,
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonNavigationManagerUnbound_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n* Infinite Worlds! This is the unbound version of the Navigation Manager.\n* Supports unlimited map sizes. Nothing is cached, everything is looked up on-demand and for procedural games it fully eliminates the burden of having to manage dynamic collision updates.\n* It is obviously slower than the Finite World equivalent but will benefit projects with huge maps or highly dynamic/frequently changing/procedural collision geometry.\n*/" },
		{ "IncludePath", "DonNavigationManagerUnbound.h" },
		{ "ModuleRelativePath", "Classes/DonNavigationManagerUnbound.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* Infinite Worlds! This is the unbound version of the Navigation Manager.\n* Supports unlimited map sizes. Nothing is cached, everything is looked up on-demand and for procedural games it fully eliminates the burden of having to manage dynamic collision updates.\n* It is obviously slower than the Finite World equivalent but will benefit projects with huge maps or highly dynamic/frequently changing/procedural collision geometry." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADonNavigationManagerUnbound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADonNavigationManagerUnbound>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADonNavigationManagerUnbound_Statics::ClassParams = {
		&ADonNavigationManagerUnbound::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADonNavigationManagerUnbound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManagerUnbound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADonNavigationManagerUnbound()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADonNavigationManagerUnbound_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADonNavigationManagerUnbound, 3101901619);
	template<> DONAINAVIGATION_API UClass* StaticClass<ADonNavigationManagerUnbound>()
	{
		return ADonNavigationManagerUnbound::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADonNavigationManagerUnbound(Z_Construct_UClass_ADonNavigationManagerUnbound, &ADonNavigationManagerUnbound::StaticClass, TEXT("/Script/DonAINavigation"), TEXT("ADonNavigationManagerUnbound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADonNavigationManagerUnbound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
