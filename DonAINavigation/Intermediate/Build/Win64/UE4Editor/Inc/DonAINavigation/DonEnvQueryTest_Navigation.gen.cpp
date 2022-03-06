// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonAINavigation/Public/EnvironmentQuery/DonEnvQueryTest_Navigation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonEnvQueryTest_Navigation() {}
// Cross Module References
	DONAINAVIGATION_API UClass* Z_Construct_UClass_UDonEnvQueryTest_Navigation_NoRegister();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_UDonEnvQueryTest_Navigation();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_DonAINavigation();
// End Cross Module References
	void UDonEnvQueryTest_Navigation::StaticRegisterNativesUDonEnvQueryTest_Navigation()
	{
	}
	UClass* Z_Construct_UClass_UDonEnvQueryTest_Navigation_NoRegister()
	{
		return UDonEnvQueryTest_Navigation::StaticClass();
	}
	struct Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSearchRandomLocation_MetaData[];
#endif
		static void NewProp_bSearchRandomLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSearchRandomLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomLocationMaxAttempts_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomLocationMaxAttempts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomLocationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomLocationRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnvironmentQuery/DonEnvQueryTest_Navigation.h" },
		{ "ModuleRelativePath", "Public/EnvironmentQuery/DonEnvQueryTest_Navigation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_bSearchRandomLocation_MetaData[] = {
		{ "Category", "Test" },
		{ "Comment", "/** Search for random location nearby */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/EnvironmentQuery/DonEnvQueryTest_Navigation.h" },
		{ "ToolTip", "Search for random location nearby" },
	};
#endif
	void Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_bSearchRandomLocation_SetBit(void* Obj)
	{
		((UDonEnvQueryTest_Navigation*)Obj)->bSearchRandomLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_bSearchRandomLocation = { "bSearchRandomLocation", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDonEnvQueryTest_Navigation), &Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_bSearchRandomLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_bSearchRandomLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_bSearchRandomLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_RandomLocationMaxAttempts_MetaData[] = {
		{ "Category", "Test" },
		{ "Comment", "/** Number of Attempts to find random location nearby if Item's location is not valid */" },
		{ "EditCondition", "bSearchRandomLocation" },
		{ "ModuleRelativePath", "Public/EnvironmentQuery/DonEnvQueryTest_Navigation.h" },
		{ "ToolTip", "Number of Attempts to find random location nearby if Item's location is not valid" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_RandomLocationMaxAttempts = { "RandomLocationMaxAttempts", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDonEnvQueryTest_Navigation, RandomLocationMaxAttempts), METADATA_PARAMS(Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_RandomLocationMaxAttempts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_RandomLocationMaxAttempts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_RandomLocationRadius_MetaData[] = {
		{ "Category", "Test" },
		{ "Comment", "/** Find Random location radius */" },
		{ "EditCondition", "bSearchRandomLocation" },
		{ "ModuleRelativePath", "Public/EnvironmentQuery/DonEnvQueryTest_Navigation.h" },
		{ "ToolTip", "Find Random location radius" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_RandomLocationRadius = { "RandomLocationRadius", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDonEnvQueryTest_Navigation, RandomLocationRadius), METADATA_PARAMS(Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_RandomLocationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_RandomLocationRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_bSearchRandomLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_RandomLocationMaxAttempts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_RandomLocationRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDonEnvQueryTest_Navigation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::ClassParams = {
		&UDonEnvQueryTest_Navigation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDonEnvQueryTest_Navigation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDonEnvQueryTest_Navigation, 2442845682);
	template<> DONAINAVIGATION_API UClass* StaticClass<UDonEnvQueryTest_Navigation>()
	{
		return UDonEnvQueryTest_Navigation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDonEnvQueryTest_Navigation(Z_Construct_UClass_UDonEnvQueryTest_Navigation, &UDonEnvQueryTest_Navigation::StaticClass, TEXT("/Script/DonAINavigation"), TEXT("UDonEnvQueryTest_Navigation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDonEnvQueryTest_Navigation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
