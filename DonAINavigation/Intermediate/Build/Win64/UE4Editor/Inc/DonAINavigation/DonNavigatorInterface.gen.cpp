// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonAINavigation/Classes/DonNavigatorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonNavigatorInterface() {}
// Cross Module References
	DONAINAVIGATION_API UClass* Z_Construct_UClass_UDonNavigator_NoRegister();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_UDonNavigator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DonAINavigation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(IDonNavigator::execOnNextSegment)
	{
		P_GET_STRUCT(FVector,Z_Param_NextPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNextSegment_Implementation(Z_Param_NextPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDonNavigator::execOnLocomotionAbort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocomotionAbort_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDonNavigator::execOnLocomotionEnd)
	{
		P_GET_UBOOL(Z_Param_bLocomotionSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocomotionEnd_Implementation(Z_Param_bLocomotionSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDonNavigator::execOnLocomotionBegin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocomotionBegin_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDonNavigator::execAddMovementInputCustom)
	{
		P_GET_STRUCT(FVector,Z_Param_WorldDirection);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMovementInputCustom_Implementation(Z_Param_WorldDirection,Z_Param_ScaleValue);
		P_NATIVE_END;
	}
	void IDonNavigator::AddMovementInputCustom(FVector WorldDirection, float ScaleValue)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddMovementInputCustom instead.");
	}
	void IDonNavigator::OnLocomotionAbort()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLocomotionAbort instead.");
	}
	void IDonNavigator::OnLocomotionBegin()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLocomotionBegin instead.");
	}
	void IDonNavigator::OnLocomotionEnd(bool bLocomotionSuccess)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLocomotionEnd instead.");
	}
	void IDonNavigator::OnNextSegment(FVector NextPoint)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnNextSegment instead.");
	}
	void UDonNavigator::StaticRegisterNativesUDonNavigator()
	{
		UClass* Class = UDonNavigator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMovementInputCustom", &IDonNavigator::execAddMovementInputCustom },
			{ "OnLocomotionAbort", &IDonNavigator::execOnLocomotionAbort },
			{ "OnLocomotionBegin", &IDonNavigator::execOnLocomotionBegin },
			{ "OnLocomotionEnd", &IDonNavigator::execOnLocomotionEnd },
			{ "OnNextSegment", &IDonNavigator::execOnNextSegment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigator_eventAddMovementInputCustom_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::NewProp_ScaleValue = { "ScaleValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigator_eventAddMovementInputCustom_Parms, ScaleValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::NewProp_WorldDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::NewProp_ScaleValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Don Navigation" },
		{ "Comment", "/* Optional custom movement input. If not provided, default AddMovementInput behavior will be called on the pawn or character*/" },
		{ "ModuleRelativePath", "Classes/DonNavigatorInterface.h" },
		{ "ToolTip", "Optional custom movement input. If not provided, default AddMovementInput behavior will be called on the pawn or character" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDonNavigator, nullptr, "AddMovementInputCustom", nullptr, nullptr, sizeof(DonNavigator_eventAddMovementInputCustom_Parms), Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDonNavigator_OnLocomotionAbort_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDonNavigator_OnLocomotionAbort_Statics::Function_MetaDataParams[] = {
		{ "Category", "Don Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigatorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDonNavigator_OnLocomotionAbort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDonNavigator, nullptr, "OnLocomotionAbort", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDonNavigator_OnLocomotionAbort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigator_OnLocomotionAbort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDonNavigator_OnLocomotionAbort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDonNavigator_OnLocomotionAbort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDonNavigator_OnLocomotionBegin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDonNavigator_OnLocomotionBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Don Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigatorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDonNavigator_OnLocomotionBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDonNavigator, nullptr, "OnLocomotionBegin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDonNavigator_OnLocomotionBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigator_OnLocomotionBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDonNavigator_OnLocomotionBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDonNavigator_OnLocomotionBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocomotionSuccess_MetaData[];
#endif
		static void NewProp_bLocomotionSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocomotionSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::NewProp_bLocomotionSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::NewProp_bLocomotionSuccess_SetBit(void* Obj)
	{
		((DonNavigator_eventOnLocomotionEnd_Parms*)Obj)->bLocomotionSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::NewProp_bLocomotionSuccess = { "bLocomotionSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonNavigator_eventOnLocomotionEnd_Parms), &Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::NewProp_bLocomotionSuccess_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::NewProp_bLocomotionSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::NewProp_bLocomotionSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::NewProp_bLocomotionSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Don Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigatorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDonNavigator, nullptr, "OnLocomotionEnd", nullptr, nullptr, sizeof(DonNavigator_eventOnLocomotionEnd_Parms), Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDonNavigator_OnNextSegment_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDonNavigator_OnNextSegment_Statics::NewProp_NextPoint = { "NextPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DonNavigator_eventOnNextSegment_Parms, NextPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDonNavigator_OnNextSegment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDonNavigator_OnNextSegment_Statics::NewProp_NextPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDonNavigator_OnNextSegment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Don Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigatorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDonNavigator_OnNextSegment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDonNavigator, nullptr, "OnNextSegment", nullptr, nullptr, sizeof(DonNavigator_eventOnNextSegment_Parms), Z_Construct_UFunction_UDonNavigator_OnNextSegment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigator_OnNextSegment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDonNavigator_OnNextSegment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigator_OnNextSegment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDonNavigator_OnNextSegment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDonNavigator_OnNextSegment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDonNavigator_NoRegister()
	{
		return UDonNavigator::StaticClass();
	}
	struct Z_Construct_UClass_UDonNavigator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDonNavigator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDonNavigator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom, "AddMovementInputCustom" }, // 3638316509
		{ &Z_Construct_UFunction_UDonNavigator_OnLocomotionAbort, "OnLocomotionAbort" }, // 667788869
		{ &Z_Construct_UFunction_UDonNavigator_OnLocomotionBegin, "OnLocomotionBegin" }, // 2240651376
		{ &Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd, "OnLocomotionEnd" }, // 4010995112
		{ &Z_Construct_UFunction_UDonNavigator_OnNextSegment, "OnNextSegment" }, // 1048909405
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDonNavigator_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DonNavigatorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDonNavigator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDonNavigator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDonNavigator_Statics::ClassParams = {
		&UDonNavigator::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDonNavigator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDonNavigator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDonNavigator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDonNavigator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDonNavigator, 1232351164);
	template<> DONAINAVIGATION_API UClass* StaticClass<UDonNavigator>()
	{
		return UDonNavigator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDonNavigator(Z_Construct_UClass_UDonNavigator, &UDonNavigator::StaticClass, TEXT("/Script/DonAINavigation"), TEXT("UDonNavigator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDonNavigator);
	static FName NAME_UDonNavigator_AddMovementInputCustom = FName(TEXT("AddMovementInputCustom"));
	void IDonNavigator::Execute_AddMovementInputCustom(UObject* O, FVector WorldDirection, float ScaleValue)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDonNavigator::StaticClass()));
		DonNavigator_eventAddMovementInputCustom_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDonNavigator_AddMovementInputCustom);
		if (Func)
		{
			Parms.WorldDirection=WorldDirection;
			Parms.ScaleValue=ScaleValue;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDonNavigator*)(O->GetNativeInterfaceAddress(UDonNavigator::StaticClass())))
		{
			I->AddMovementInputCustom_Implementation(WorldDirection,ScaleValue);
		}
	}
	static FName NAME_UDonNavigator_OnLocomotionAbort = FName(TEXT("OnLocomotionAbort"));
	void IDonNavigator::Execute_OnLocomotionAbort(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDonNavigator::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UDonNavigator_OnLocomotionAbort);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IDonNavigator*)(O->GetNativeInterfaceAddress(UDonNavigator::StaticClass())))
		{
			I->OnLocomotionAbort_Implementation();
		}
	}
	static FName NAME_UDonNavigator_OnLocomotionBegin = FName(TEXT("OnLocomotionBegin"));
	void IDonNavigator::Execute_OnLocomotionBegin(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDonNavigator::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UDonNavigator_OnLocomotionBegin);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IDonNavigator*)(O->GetNativeInterfaceAddress(UDonNavigator::StaticClass())))
		{
			I->OnLocomotionBegin_Implementation();
		}
	}
	static FName NAME_UDonNavigator_OnLocomotionEnd = FName(TEXT("OnLocomotionEnd"));
	void IDonNavigator::Execute_OnLocomotionEnd(UObject* O, bool bLocomotionSuccess)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDonNavigator::StaticClass()));
		DonNavigator_eventOnLocomotionEnd_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDonNavigator_OnLocomotionEnd);
		if (Func)
		{
			Parms.bLocomotionSuccess=bLocomotionSuccess;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDonNavigator*)(O->GetNativeInterfaceAddress(UDonNavigator::StaticClass())))
		{
			I->OnLocomotionEnd_Implementation(bLocomotionSuccess);
		}
	}
	static FName NAME_UDonNavigator_OnNextSegment = FName(TEXT("OnNextSegment"));
	void IDonNavigator::Execute_OnNextSegment(UObject* O, FVector NextPoint)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDonNavigator::StaticClass()));
		DonNavigator_eventOnNextSegment_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDonNavigator_OnNextSegment);
		if (Func)
		{
			Parms.NextPoint=NextPoint;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDonNavigator*)(O->GetNativeInterfaceAddress(UDonNavigator::StaticClass())))
		{
			I->OnNextSegment_Implementation(NextPoint);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
