// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonAINavigation/Classes/DonNavigationHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonNavigationHelper() {}
// Cross Module References
	DONAINAVIGATION_API UClass* Z_Construct_UClass_UDonNavigationHelper_NoRegister();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_UDonNavigationHelper();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DonAINavigation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_ADonNavigationManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDonNavigationHelper::execDonNavigationManagerForActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADonNavigationManager**)Z_Param__Result=UDonNavigationHelper::DonNavigationManagerForActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDonNavigationHelper::execDonNavigationManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADonNavigationManager**)Z_Param__Result=UDonNavigationHelper::DonNavigationManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UDonNavigationHelper::StaticRegisterNativesUDonNavigationHelper()
	{
		UClass* Class = UDonNavigationHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DonNavigationManager", &UDonNavigationHelper::execDonNavigationManager },
			{ "DonNavigationManagerForActor", &UDonNavigationHelper::execDonNavigationManagerForActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics
	{
		struct DonNavigationHelper_eventDonNavigationManager_Parms
		{
			UObject* WorldContextObject;
			ADonNavigationManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationHelper_eventDonNavigationManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationHelper_eventDonNavigationManager_Parms, ReturnValue), Z_Construct_UClass_ADonNavigationManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "/* Returns the Voxel navigation builder used for building navigation volumes and performing pathfinding */" },
		{ "ModuleRelativePath", "Classes/DonNavigationHelper.h" },
		{ "ToolTip", "Returns the Voxel navigation builder used for building navigation volumes and performing pathfinding" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDonNavigationHelper, nullptr, "DonNavigationManager", nullptr, nullptr, sizeof(DonNavigationHelper_eventDonNavigationManager_Parms), Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics
	{
		struct DonNavigationHelper_eventDonNavigationManagerForActor_Parms
		{
			const AActor* Actor;
			ADonNavigationManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationHelper_eventDonNavigationManagerForActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigationHelper_eventDonNavigationManagerForActor_Parms, ReturnValue), Z_Construct_UClass_ADonNavigationManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "Comment", "/* Returns the Voxel navigation builder used for building navigation volumes and performing pathfinding for specified Actor*/" },
		{ "ModuleRelativePath", "Classes/DonNavigationHelper.h" },
		{ "ToolTip", "Returns the Voxel navigation builder used for building navigation volumes and performing pathfinding for specified Actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDonNavigationHelper, nullptr, "DonNavigationManagerForActor", nullptr, nullptr, sizeof(DonNavigationHelper_eventDonNavigationManagerForActor_Parms), Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDonNavigationHelper_NoRegister()
	{
		return UDonNavigationHelper::StaticClass();
	}
	struct Z_Construct_UClass_UDonNavigationHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDonNavigationHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDonNavigationHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager, "DonNavigationManager" }, // 3059340251
		{ &Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor, "DonNavigationManagerForActor" }, // 761022183
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDonNavigationHelper_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DonNavigationHelper.h" },
		{ "ModuleRelativePath", "Classes/DonNavigationHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDonNavigationHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDonNavigationHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDonNavigationHelper_Statics::ClassParams = {
		&UDonNavigationHelper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDonNavigationHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDonNavigationHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDonNavigationHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDonNavigationHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDonNavigationHelper, 1665080588);
	template<> DONAINAVIGATION_API UClass* StaticClass<UDonNavigationHelper>()
	{
		return UDonNavigationHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDonNavigationHelper(Z_Construct_UClass_UDonNavigationHelper, &UDonNavigationHelper::StaticClass, TEXT("/Script/DonAINavigation"), TEXT("UDonNavigationHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDonNavigationHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
