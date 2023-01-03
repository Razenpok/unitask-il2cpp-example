﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<UnityEngine.LowLevel.PlayerLoopSystem,System.Boolean>
struct Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct IEnumerable_1_tD022CDF8A7E4F1F913427E8746221007473EC6F2;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEnumerator`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct IEnumerator_1_t57E9B30295B26EA00AB537E17B3999A81D7C2686;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.ValueTuple`2<System.Boolean,System.Int32>>
struct IUniTaskSource_1_t9E3038FBAE3045558C56411DFBB9F1942CF7FD5E;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.ValueTuple`2<System.Boolean,System.Object>>
struct IUniTaskSource_1_t2614CA42DA2779EE598DC6BB11D805D23AF788B4;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.ValueTuple`2<System.Boolean,System.Single>>
struct IUniTaskSource_1_tE8821295A202D8F8E2FA06852ABE279FCDF84F17;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Int32>
struct IUniTaskSource_1_t8F97352CA996D0781DB009E630AB2143DE1614D3;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Object>
struct IUniTaskSource_1_tDC639FD163E4613AFE1D3F2749CA5B177DC702F5;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Single>
struct IUniTaskSource_1_tD745CD56EC6E5CB710B56755B2E0F56C83FD8F2F;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA;
// System.Linq.Enumerable/Iterator`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52;
// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>
struct WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16;
// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Int32,System.Single,System.Object>
struct WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024;
// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Object,System.Object,System.Object>
struct WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA;
// System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct WhereArrayIterator_1_t6231D220871B84114C148960F57DC2479C42909F;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct WhereEnumerableIterator_1_tA0D618D4EA7801FF9CD22AE1C91E2DC17F8DC7C8;
// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB;
// System.Linq.Enumerable/WhereListIterator`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct WhereListIterator_1_t758114B160DB8D0A2FAD2AB6D95ABBFFA378664A;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
// Cysharp.Threading.Tasks.ExceptionHolder
struct ExceptionHolder_t877D929A153D46C3BDA043B4058034AF85FB73B1;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionHolder_t877D929A153D46C3BDA043B4058034AF85FB73B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTaskCompletionSourceCoreShared_tBCAF5BCBEE88E6E2892483CF035D941050102D44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral29722F82D7EAE8BE94D18EAAF9BD606DF87DCA5A;
IL2CPP_EXTERN_C String_t* _stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4;
IL2CPP_EXTERN_C String_t* _stringLiteral8077B2599BD87177CC6CB3F9B32983C9C82BBD40;
IL2CPP_EXTERN_C String_t* _stringLiteralD2921BAFC94F356E0EFDAE222C392546BBFCDA14;
IL2CPP_EXTERN_C String_t* _stringLiteralFDAE6AD21359A52E0DF3748A30C82C53BDD165D7;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_GetResult_m8010D7630E8CE8A00720B5D6368248CCF1D3BE61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_GetResult_mA01865AFE9E5373DBCF52E45EB46B76680003E68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_GetResult_mA2D90F80A0171F6C25F61CE4AF196BB0C0902283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_OnCompleted_m25E1DA22686DA0AFA1DC9CC0006952FDFF9622B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_OnCompleted_m8E7502ABB3E54955A66BDDE40129CD126A3A05DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_OnCompleted_m9F6C186F4CF9F3CEC2138912F6C9E7C9227DD686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_ValidateToken_m36CD0655A19E8FF13A47089C9B22677D08273B9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_ValidateToken_m68FEFF94AE5EF0A6392B86BAC2868372ED92E5B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_ValidateToken_m7C8EDC14B5DB9091C851F0B0AF05FE0F5EB9E8D2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3/<>c<System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>
struct U3CU3Ec_t8E2013A3BE0C8AC9F19A0DB0CDDC17CA35A34682  : public RuntimeObject
{
};

struct U3CU3Ec_t8E2013A3BE0C8AC9F19A0DB0CDDC17CA35A34682_StaticFields
{
	// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3/<>c<T1,T2,T3> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3/<>c::<>9
	U3CU3Ec_t8E2013A3BE0C8AC9F19A0DB0CDDC17CA35A34682* ___U3CU3E9_0;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3/<>c::<>9__2_0
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_0_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3/<>c::<>9__2_1
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_1_2;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3/<>c::<>9__2_2
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_2_3;
};

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3/<>c<System.Int32,System.Single,System.Object>
struct U3CU3Ec_t288FC91920DA8867D99C28279E25BA6D07A64291  : public RuntimeObject
{
};

struct U3CU3Ec_t288FC91920DA8867D99C28279E25BA6D07A64291_StaticFields
{
	// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3/<>c<T1,T2,T3> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3/<>c::<>9
	U3CU3Ec_t288FC91920DA8867D99C28279E25BA6D07A64291* ___U3CU3E9_0;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3/<>c::<>9__2_0
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_0_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3/<>c::<>9__2_1
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_1_2;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3/<>c::<>9__2_2
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_2_3;
};

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3/<>c<System.Object,System.Object,System.Object>
struct U3CU3Ec_t542F3782E64D6E82CA4D5300030BE484F6C2B81A  : public RuntimeObject
{
};

struct U3CU3Ec_t542F3782E64D6E82CA4D5300030BE484F6C2B81A_StaticFields
{
	// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3/<>c<T1,T2,T3> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3/<>c::<>9
	U3CU3Ec_t542F3782E64D6E82CA4D5300030BE484F6C2B81A* ___U3CU3E9_0;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3/<>c::<>9__2_0
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_0_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3/<>c::<>9__2_1
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_1_2;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3/<>c::<>9__2_2
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__2_2_3;
};

// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject* ___current_2;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t* ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject* ___m_stackTrace_1;
};

// Cysharp.Threading.Tasks.ExceptionHolder
struct ExceptionHolder_t877D929A153D46C3BDA043B4058034AF85FB73B1  : public RuntimeObject
{
	// System.Runtime.ExceptionServices.ExceptionDispatchInfo Cysharp.Threading.Tasks.ExceptionHolder::exception
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception_0;
	// System.Boolean Cysharp.Threading.Tasks.ExceptionHolder::calledGet
	bool ___calledGet_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCoreShared
struct UniTaskCompletionSourceCoreShared_tBCAF5BCBEE88E6E2892483CF035D941050102D44  : public RuntimeObject
{
};

struct UniTaskCompletionSourceCoreShared_tBCAF5BCBEE88E6E2892483CF035D941050102D44_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCoreShared::s_sentinel
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_sentinel_0;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Int32>
struct UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	int32_t ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Object>
struct UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	RuntimeObject* ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Single>
struct UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	float ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// System.ValueTuple`2<System.Boolean,System.Int32>
struct ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133 
{
	// T1 System.ValueTuple`2::Item1
	bool ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;
};

// System.ValueTuple`2<System.Boolean,System.Object>
struct ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 
{
	// T1 System.ValueTuple`2::Item1
	bool ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject* ___Item2_1;
};

// System.ValueTuple`2<System.Boolean,System.Single>
struct ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D 
{
	// T1 System.ValueTuple`2::Item1
	bool ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	float ___Item2_1;
};

// System.ValueTuple`4<System.Int32,System.Int32,System.Single,System.Object>
struct ValueTuple_4_tAFA5F2488ADE7955A7EB2CCD2A8A216E0D7960BC 
{
	// T1 System.ValueTuple`4::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`4::Item2
	int32_t ___Item2_1;
	// T3 System.ValueTuple`4::Item3
	float ___Item3_2;
	// T4 System.ValueTuple`4::Item4
	RuntimeObject* ___Item4_3;
};

// System.ValueTuple`4<System.Int32,System.Object,System.Object,System.Object>
struct ValueTuple_4_t3C73E527194858099D3E19DE8DE04DE29E44B50C 
{
	// T1 System.ValueTuple`4::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`4::Item2
	RuntimeObject* ___Item2_1;
	// T3 System.ValueTuple`4::Item3
	RuntimeObject* ___Item3_2;
	// T4 System.ValueTuple`4::Item4
	RuntimeObject* ___Item4_3;
};

// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Int32>
struct Awaiter_t8953594D03299DE782894F4A865CED79F2504266 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 ___task_0;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>
struct Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 ___task_0;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Single>
struct Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 ___task_0;
};

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Int32,System.Single,System.Object>>
struct UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E 
{
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	ValueTuple_4_tAFA5F2488ADE7955A7EB2CCD2A8A216E0D7960BC ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject* ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject* ___continuationState_6;
};

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Object,System.Object,System.Object>>
struct UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330 
{
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	ValueTuple_4_t3C73E527194858099D3E19DE8DE04DE29E44B50C ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject* ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject* ___continuationState_6;
};

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`2<System.Boolean,System.Int32>>
struct UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133 ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`2<System.Boolean,System.Object>>
struct UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`2<System.Boolean,System.Single>>
struct UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// System.ValueTuple`4<System.Int32,System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>
struct ValueTuple_4_t3FE437EA7C6253FC3BC11C9FC835DFB1A5A67FC6 
{
	// T1 System.ValueTuple`4::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`4::Item2
	ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133 ___Item2_1;
	// T3 System.ValueTuple`4::Item3
	ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D ___Item3_2;
	// T4 System.ValueTuple`4::Item4
	ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 ___Item4_3;
};

// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_5;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F 
{
	// System.Type UnityEngine.LowLevel.PlayerLoopSystem::type
	Type_t* ___type_0;
	// UnityEngine.LowLevel.PlayerLoopSystem[] UnityEngine.LowLevel.PlayerLoopSystem::subSystemList
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* ___subSystemList_1;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction UnityEngine.LowLevel.PlayerLoopSystem::updateDelegate
	UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* ___updateDelegate_2;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::updateFunction
	intptr_t ___updateFunction_3;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::loopConditionFunction
	intptr_t ___loopConditionFunction_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke
{
	Type_t* ___type_0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
// Native definition for COM marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com
{
	Type_t* ___type_0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Int32>>
struct Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF ___task_0;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Object>>
struct Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F ___task_0;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Single>>
struct Awaiter_t57195AB5181DC841249C584802FC1207B8517391 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2 ___task_0;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.LowLevel.PlayerLoopSystem>
struct Enumerator_tB025B2FCAB9376692902C91754C98265C07AEA9A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F ____current_3;
};

// System.Linq.Enumerable/Iterator`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F ___current_2;
};

// Cysharp.Threading.Tasks.Internal.StateTuple`2<Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Int32,System.Single,System.Object>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Int32>>
struct StateTuple_2_tF7257837589BAFB811E0B0AA42A64A13DDFCFFF5  : public RuntimeObject
{
	// T1 Cysharp.Threading.Tasks.Internal.StateTuple`2::Item1
	WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024* ___Item1_0;
	// T2 Cysharp.Threading.Tasks.Internal.StateTuple`2::Item2
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 ___Item2_1;
};

// Cysharp.Threading.Tasks.Internal.StateTuple`2<Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Int32,System.Single,System.Object>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>>
struct StateTuple_2_t048746E360AEAB67385A102EC0F7B6284E046DAC  : public RuntimeObject
{
	// T1 Cysharp.Threading.Tasks.Internal.StateTuple`2::Item1
	WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024* ___Item1_0;
	// T2 Cysharp.Threading.Tasks.Internal.StateTuple`2::Item2
	Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 ___Item2_1;
};

// Cysharp.Threading.Tasks.Internal.StateTuple`2<Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Int32,System.Single,System.Object>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Single>>
struct StateTuple_2_tFFF5DBAB9417F5AE7BC69B70BACBA8A135B7CB40  : public RuntimeObject
{
	// T1 Cysharp.Threading.Tasks.Internal.StateTuple`2::Item1
	WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024* ___Item1_0;
	// T2 Cysharp.Threading.Tasks.Internal.StateTuple`2::Item2
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D ___Item2_1;
};

// Cysharp.Threading.Tasks.Internal.StateTuple`2<Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Object,System.Object,System.Object>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>>
struct StateTuple_2_t60384B8B6BB14758764DC973AA9F9FAB7C8A4039  : public RuntimeObject
{
	// T1 Cysharp.Threading.Tasks.Internal.StateTuple`2::Item1
	WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533* ___Item1_0;
	// T2 Cysharp.Threading.Tasks.Internal.StateTuple`2::Item2
	Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 ___Item2_1;
};

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>>
struct UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713 
{
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	ValueTuple_4_t3FE437EA7C6253FC3BC11C9FC835DFB1A5A67FC6 ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject* ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject* ___continuationState_6;
};

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Int32,System.Single,System.Object>
struct WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024  : public RuntimeObject
{
	// System.Int32 Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3::completedCount
	int32_t ___completedCount_0;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,T1,T2,T3>> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3::core
	UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E ___core_1;
};

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Object,System.Object,System.Object>
struct WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533  : public RuntimeObject
{
	// System.Int32 Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3::completedCount
	int32_t ___completedCount_0;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,T1,T2,T3>> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3::core
	UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330 ___core_1;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.LowLevel.PlayerLoopSystem,System.Boolean>
struct Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF  : public MulticastDelegate_t
{
};

// Cysharp.Threading.Tasks.Internal.StateTuple`2<Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Int32>>>
struct StateTuple_2_t0B5913EF4A60E0612751DE36F7C45EAA4E070704  : public RuntimeObject
{
	// T1 Cysharp.Threading.Tasks.Internal.StateTuple`2::Item1
	WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16* ___Item1_0;
	// T2 Cysharp.Threading.Tasks.Internal.StateTuple`2::Item2
	Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984 ___Item2_1;
};

// Cysharp.Threading.Tasks.Internal.StateTuple`2<Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Object>>>
struct StateTuple_2_t2E116D00291AF020BB959D9584782939F460FB30  : public RuntimeObject
{
	// T1 Cysharp.Threading.Tasks.Internal.StateTuple`2::Item1
	WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16* ___Item1_0;
	// T2 Cysharp.Threading.Tasks.Internal.StateTuple`2::Item2
	Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728 ___Item2_1;
};

// Cysharp.Threading.Tasks.Internal.StateTuple`2<Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Single>>>
struct StateTuple_2_tE2F4583B6E26530BE9831DC1FE85C7BEBD3530D6  : public RuntimeObject
{
	// T1 Cysharp.Threading.Tasks.Internal.StateTuple`2::Item1
	WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16* ___Item1_0;
	// T2 Cysharp.Threading.Tasks.Internal.StateTuple`2::Item2
	Awaiter_t57195AB5181DC841249C584802FC1207B8517391 ___Item2_1;
};

// Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>
struct WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16  : public RuntimeObject
{
	// System.Int32 Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3::completedCount
	int32_t ___completedCount_0;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,T1,T2,T3>> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3::core
	UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713 ___core_1;
};

// System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct WhereArrayIterator_1_t6231D220871B84114C148960F57DC2479C42909F  : public Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5
{
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct WhereEnumerableIterator_1_tA0D618D4EA7801FF9CD22AE1C91E2DC17F8DC7C8  : public Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereListIterator`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct WhereListIterator_1_t758114B160DB8D0A2FAD2AB6D95ABBFFA378664A  : public Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tB025B2FCAB9376692902C91754C98265C07AEA9A ___enumerator_5;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken_18;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D  : public RuntimeArray
{
	ALIGN_FIELD (8) PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F m_Items[1];

	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___updateDelegate_2), (void*)NULL);
		#endif
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___updateDelegate_2), (void*)NULL);
		#endif
	}
};


// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`2<System.Boolean,System.Int32>>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984 UniTask_1_GetAwaiter_mB38AE50A1A9C6738299E949D09E98B43E029C9BD_gshared_inline (UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Int32>>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m033ECB1735F07F30D1A08C495BBFAF9D7BD19BAE_gshared_inline (Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Int32>>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_mD87C80282CB2B843B7B3BBEAFE89AB76E74D75BC_gshared_inline (Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`2<System.Boolean,System.Single>>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t57195AB5181DC841249C584802FC1207B8517391 UniTask_1_GetAwaiter_mA50969136777FAA638B8BF5AD7DC267CC4AD0501_gshared_inline (UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Single>>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mBDD104327707ECBF683EAD1B9DBC38FD16FA55AE_gshared_inline (Awaiter_t57195AB5181DC841249C584802FC1207B8517391* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Single>>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m3725FF5E0AC8CF789C3F06B867A39B3F693CF699_gshared_inline (Awaiter_t57195AB5181DC841249C584802FC1207B8517391* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`2<System.Boolean,System.Object>>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728 UniTask_1_GetAwaiter_mC8ADF30FE1E74C06C1D9B53FAC76DD6501F7030F_gshared_inline (UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Object>>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m43221ACA0B7A6CD6D6F4DF0A71CD585F49CC424B_gshared_inline (Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Object>>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m5ED3FEFA36C9466C434E00141C3EACF71F130CB2_gshared_inline (Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, const RuntimeMethod* method) ;
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Int32>>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133 Awaiter_GetResult_m350EF3476023469EF276C3D635E1811953D8D0FC_gshared_inline (Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetException_m23F8B5290496FD502BA6FCAE864B9CA83D0D41DD_gshared (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* __this, Exception_t* ___error0, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`4<System.Int32,System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>::.ctor(T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_4__ctor_mC90962ACCD0644288EB0A2244E9F53844C0DAF4D_gshared (ValueTuple_4_t3FE437EA7C6253FC3BC11C9FC835DFB1A5A67FC6* __this, int32_t ___item10, ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133 ___item21, ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D ___item32, ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 ___item43, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetResult_m382B6BE34AA6F07524101E4F4B2BAC683665BCE3_gshared (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* __this, ValueTuple_4_t3FE437EA7C6253FC3BC11C9FC835DFB1A5A67FC6 ___result0, const RuntimeMethod* method) ;
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Single>>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D Awaiter_GetResult_mF62E85E9AD2B8CA9A42D14052E7F9219AC39F0B2_gshared_inline (Awaiter_t57195AB5181DC841249C584802FC1207B8517391* __this, const RuntimeMethod* method) ;
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Object>>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 Awaiter_GetResult_m6D0F17AFAD47EC192AFB978715FF9F3E47445DF4_gshared_inline (Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728* __this, const RuntimeMethod* method) ;
// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>>::GetResult(System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_4_t3FE437EA7C6253FC3BC11C9FC835DFB1A5A67FC6 UniTaskCompletionSourceCore_1_GetResult_mA01865AFE9E5373DBCF52E45EB46B76680003E68_gshared_inline (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* __this, int16_t ___token0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>>::GetStatus(System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTaskCompletionSourceCore_1_GetStatus_mF86D2712AC9DE6D56B31A7702AAC54827B610D8E_gshared_inline (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* __this, int16_t ___token0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>>::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTaskCompletionSourceCore_1_OnCompleted_m25E1DA22686DA0AFA1DC9CC0006952FDFF9622B4_gshared_inline (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, int16_t ___token2, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>>::UnsafeGetStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTaskCompletionSourceCore_1_UnsafeGetStatus_m9CCEFEF77DCDFF79538158D7F0148D6C12CFDA91_gshared_inline (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Int32>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t8953594D03299DE782894F4A865CED79F2504266 UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_gshared_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Int32>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Int32>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_mA366D7291F82B8BAE1F9494957301A0BA2803037_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Single>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_gshared_inline (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Single>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Single>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_mA6878346D7691E188C19F8FCDD0B650B3CB85D62_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Object>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m5CF1681957BDC088E9F9B1405109662ECBFDA143_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, const RuntimeMethod* method) ;
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Int32>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Int32,System.Single,System.Object>>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetException_m216C24BA2C4E6E9BE029263D3673BD50D4E69061_gshared (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* __this, Exception_t* ___error0, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`4<System.Int32,System.Int32,System.Single,System.Object>::.ctor(T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_4__ctor_mA0B219AF9DB75777E099441F9962E296A1290937_gshared (ValueTuple_4_tAFA5F2488ADE7955A7EB2CCD2A8A216E0D7960BC* __this, int32_t ___item10, int32_t ___item21, float ___item32, RuntimeObject* ___item43, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Int32,System.Single,System.Object>>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetResult_m60494D4998B6DFED3CDCC1D3309D3D0A55829A37_gshared (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* __this, ValueTuple_4_tAFA5F2488ADE7955A7EB2CCD2A8A216E0D7960BC ___result0, const RuntimeMethod* method) ;
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Single>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, const RuntimeMethod* method) ;
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) ;
// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Int32,System.Single,System.Object>>::GetResult(System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_4_tAFA5F2488ADE7955A7EB2CCD2A8A216E0D7960BC UniTaskCompletionSourceCore_1_GetResult_mA2D90F80A0171F6C25F61CE4AF196BB0C0902283_gshared_inline (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* __this, int16_t ___token0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Int32,System.Single,System.Object>>::GetStatus(System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTaskCompletionSourceCore_1_GetStatus_mEFEB61D829DE1B223F3D54B0555FA271F3040727_gshared_inline (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* __this, int16_t ___token0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Int32,System.Single,System.Object>>::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTaskCompletionSourceCore_1_OnCompleted_m8E7502ABB3E54955A66BDDE40129CD126A3A05DE_gshared_inline (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, int16_t ___token2, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Int32,System.Single,System.Object>>::UnsafeGetStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTaskCompletionSourceCore_1_UnsafeGetStatus_m744D38512828709C6B27CCFAC57ECD657B679EC3_gshared_inline (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Object,System.Object,System.Object>>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetException_m70DA778433D11FF4DEEE024C358522EC3350C55D_gshared (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* __this, Exception_t* ___error0, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`4<System.Int32,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_4__ctor_mFF8FF8A49A27E3FC2135D0F54A400D967DD4733A_gshared (ValueTuple_4_t3C73E527194858099D3E19DE8DE04DE29E44B50C* __this, int32_t ___item10, RuntimeObject* ___item21, RuntimeObject* ___item32, RuntimeObject* ___item43, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Object,System.Object,System.Object>>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetResult_mCF0314EB4F0D46C11D29325738F008F4BB0BFDC2_gshared (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* __this, ValueTuple_4_t3C73E527194858099D3E19DE8DE04DE29E44B50C ___result0, const RuntimeMethod* method) ;
// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Object,System.Object,System.Object>>::GetResult(System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_4_t3C73E527194858099D3E19DE8DE04DE29E44B50C UniTaskCompletionSourceCore_1_GetResult_m8010D7630E8CE8A00720B5D6368248CCF1D3BE61_gshared_inline (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* __this, int16_t ___token0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Object,System.Object,System.Object>>::GetStatus(System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTaskCompletionSourceCore_1_GetStatus_mD8828EA793CF6B08AF60473597E7C41506F4FD5E_gshared_inline (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* __this, int16_t ___token0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Object,System.Object,System.Object>>::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTaskCompletionSourceCore_1_OnCompleted_m9F6C186F4CF9F3CEC2138912F6C9E7C9227DD686_gshared_inline (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, int16_t ___token2, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Object,System.Object,System.Object>>::UnsafeGetStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTaskCompletionSourceCore_1_UnsafeGetStatus_mE69870967002C8CD4F88F4CAE0199FAC97478581_gshared_inline (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.LowLevel.PlayerLoopSystem>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F Enumerator_get_Current_m0B4ED9AF252261F8FAEF61A9A59B085B4CE88528_gshared_inline (Enumerator_tB025B2FCAB9376692902C91754C98265C07AEA9A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.LowLevel.PlayerLoopSystem>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8323C42D98FCDA16F05D5351131455C3DD40C66B_gshared (Enumerator_tB025B2FCAB9376692902C91754C98265C07AEA9A* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Int32>>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m55018DFFA4D8602D121D61E41B0F1F628B2D802D_gshared_inline (Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984* __this, UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF* ___task0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`2<System.Boolean,System.Int32>>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mC5A408BF83D014982C385E05BB60549A2CBE00DC_gshared_inline (UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Single>>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m7855A5D62011FFBD3484B4897C533C60E6DC2EAE_gshared_inline (Awaiter_t57195AB5181DC841249C584802FC1207B8517391* __this, UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2* ___task0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`2<System.Boolean,System.Single>>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m671AD37246C069F9C9E02F152848BEACB67B8356_gshared_inline (UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Object>>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m489A65BDC8DF6A9218CD5C5EB67A6F90BA1BA068_gshared_inline (Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728* __this, UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F* ___task0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`2<System.Boolean,System.Object>>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m8F3A992141E5A88594A1F69E3B41CE38A4A2A6F5_gshared_inline (UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>>::ValidateToken(System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTaskCompletionSourceCore_1_ValidateToken_m68FEFF94AE5EF0A6392B86BAC2868372ED92E5B5_gshared_inline (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* __this, int16_t ___token0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Int32>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m2D382159CB5D690EEEDB435E6183DBDBD9560CA3_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* ___task0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Int32>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m688D534E5DE535F713C9D2C84744BB51F95416F5_gshared_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Single>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m65B703CDA0E48F294713CCCF06A7B5AF705D8E1F_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* ___task0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Single>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mD1C383B359BDB954321BC6C44DA1631270CC29A6_gshared_inline (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* ___task0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Object>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Int32,System.Single,System.Object>>::ValidateToken(System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTaskCompletionSourceCore_1_ValidateToken_m36CD0655A19E8FF13A47089C9B22677D08273B9F_gshared_inline (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* __this, int16_t ___token0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Object,System.Object,System.Object>>::ValidateToken(System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTaskCompletionSourceCore_1_ValidateToken_m7C8EDC14B5DB9091C851F0B0AF05FE0F5EB9E8D2_gshared_inline (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* __this, int16_t ___token0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`2<System.Boolean,System.Int32>>::GetAwaiter()
inline Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984 UniTask_1_GetAwaiter_mB38AE50A1A9C6738299E949D09E98B43E029C9BD_inline (UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984 (*) (UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF*, const RuntimeMethod*))UniTask_1_GetAwaiter_mB38AE50A1A9C6738299E949D09E98B43E029C9BD_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Int32>>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m033ECB1735F07F30D1A08C495BBFAF9D7BD19BAE_inline (Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984*, const RuntimeMethod*))Awaiter_get_IsCompleted_m033ECB1735F07F30D1A08C495BBFAF9D7BD19BAE_gshared_inline)(__this, method);
}
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Int32>>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
inline void Awaiter_SourceOnCompleted_mD87C80282CB2B843B7B3BBEAFE89AB76E74D75BC_inline (Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Awaiter_SourceOnCompleted_mD87C80282CB2B843B7B3BBEAFE89AB76E74D75BC_gshared_inline)(__this, ___continuation0, ___state1, method);
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`2<System.Boolean,System.Single>>::GetAwaiter()
inline Awaiter_t57195AB5181DC841249C584802FC1207B8517391 UniTask_1_GetAwaiter_mA50969136777FAA638B8BF5AD7DC267CC4AD0501_inline (UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t57195AB5181DC841249C584802FC1207B8517391 (*) (UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2*, const RuntimeMethod*))UniTask_1_GetAwaiter_mA50969136777FAA638B8BF5AD7DC267CC4AD0501_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Single>>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_mBDD104327707ECBF683EAD1B9DBC38FD16FA55AE_inline (Awaiter_t57195AB5181DC841249C584802FC1207B8517391* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t57195AB5181DC841249C584802FC1207B8517391*, const RuntimeMethod*))Awaiter_get_IsCompleted_mBDD104327707ECBF683EAD1B9DBC38FD16FA55AE_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Single>>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
inline void Awaiter_SourceOnCompleted_m3725FF5E0AC8CF789C3F06B867A39B3F693CF699_inline (Awaiter_t57195AB5181DC841249C584802FC1207B8517391* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t57195AB5181DC841249C584802FC1207B8517391*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Awaiter_SourceOnCompleted_m3725FF5E0AC8CF789C3F06B867A39B3F693CF699_gshared_inline)(__this, ___continuation0, ___state1, method);
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`2<System.Boolean,System.Object>>::GetAwaiter()
inline Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728 UniTask_1_GetAwaiter_mC8ADF30FE1E74C06C1D9B53FAC76DD6501F7030F_inline (UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728 (*) (UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F*, const RuntimeMethod*))UniTask_1_GetAwaiter_mC8ADF30FE1E74C06C1D9B53FAC76DD6501F7030F_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Object>>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m43221ACA0B7A6CD6D6F4DF0A71CD585F49CC424B_inline (Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728*, const RuntimeMethod*))Awaiter_get_IsCompleted_m43221ACA0B7A6CD6D6F4DF0A71CD585F49CC424B_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Object>>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
inline void Awaiter_SourceOnCompleted_m5ED3FEFA36C9466C434E00141C3EACF71F130CB2_inline (Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Awaiter_SourceOnCompleted_m5ED3FEFA36C9466C434E00141C3EACF71F130CB2_gshared_inline)(__this, ___continuation0, ___state1, method);
}
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Int32>>::GetResult()
inline ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133 Awaiter_GetResult_m350EF3476023469EF276C3D635E1811953D8D0FC_inline (Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133 (*) (Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984*, const RuntimeMethod*))Awaiter_GetResult_m350EF3476023469EF276C3D635E1811953D8D0FC_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>>::TrySetException(System.Exception)
inline bool UniTaskCompletionSourceCore_1_TrySetException_m23F8B5290496FD502BA6FCAE864B9CA83D0D41DD (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* __this, Exception_t* ___error0, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713*, Exception_t*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetException_m23F8B5290496FD502BA6FCAE864B9CA83D0D41DD_gshared)(__this, ___error0, method);
}
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___location0, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`4<System.Int32,System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>::.ctor(T1,T2,T3,T4)
inline void ValueTuple_4__ctor_mC90962ACCD0644288EB0A2244E9F53844C0DAF4D (ValueTuple_4_t3FE437EA7C6253FC3BC11C9FC835DFB1A5A67FC6* __this, int32_t ___item10, ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133 ___item21, ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D ___item32, ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 ___item43, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_4_t3FE437EA7C6253FC3BC11C9FC835DFB1A5A67FC6*, int32_t, ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133, ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D, ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798, const RuntimeMethod*))ValueTuple_4__ctor_mC90962ACCD0644288EB0A2244E9F53844C0DAF4D_gshared)(__this, ___item10, ___item21, ___item32, ___item43, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>>::TrySetResult(TResult)
inline bool UniTaskCompletionSourceCore_1_TrySetResult_m382B6BE34AA6F07524101E4F4B2BAC683665BCE3 (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* __this, ValueTuple_4_t3FE437EA7C6253FC3BC11C9FC835DFB1A5A67FC6 ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713*, ValueTuple_4_t3FE437EA7C6253FC3BC11C9FC835DFB1A5A67FC6, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetResult_m382B6BE34AA6F07524101E4F4B2BAC683665BCE3_gshared)(__this, ___result0, method);
}
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Single>>::GetResult()
inline ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D Awaiter_GetResult_mF62E85E9AD2B8CA9A42D14052E7F9219AC39F0B2_inline (Awaiter_t57195AB5181DC841249C584802FC1207B8517391* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D (*) (Awaiter_t57195AB5181DC841249C584802FC1207B8517391*, const RuntimeMethod*))Awaiter_GetResult_mF62E85E9AD2B8CA9A42D14052E7F9219AC39F0B2_gshared_inline)(__this, method);
}
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Object>>::GetResult()
inline ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 Awaiter_GetResult_m6D0F17AFAD47EC192AFB978715FF9F3E47445DF4_inline (Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 (*) (Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728*, const RuntimeMethod*))Awaiter_GetResult_m6D0F17AFAD47EC192AFB978715FF9F3E47445DF4_gshared_inline)(__this, method);
}
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>>::GetResult(System.Int16)
inline ValueTuple_4_t3FE437EA7C6253FC3BC11C9FC835DFB1A5A67FC6 UniTaskCompletionSourceCore_1_GetResult_mA01865AFE9E5373DBCF52E45EB46B76680003E68_inline (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* __this, int16_t ___token0, const RuntimeMethod* method)
{
	return ((  ValueTuple_4_t3FE437EA7C6253FC3BC11C9FC835DFB1A5A67FC6 (*) (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713*, int16_t, const RuntimeMethod*))UniTaskCompletionSourceCore_1_GetResult_mA01865AFE9E5373DBCF52E45EB46B76680003E68_gshared_inline)(__this, ___token0, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>>::GetStatus(System.Int16)
inline int32_t UniTaskCompletionSourceCore_1_GetStatus_mF86D2712AC9DE6D56B31A7702AAC54827B610D8E_inline (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* __this, int16_t ___token0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713*, int16_t, const RuntimeMethod*))UniTaskCompletionSourceCore_1_GetStatus_mF86D2712AC9DE6D56B31A7702AAC54827B610D8E_gshared_inline)(__this, ___token0, method);
}
// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>>::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16)
inline void UniTaskCompletionSourceCore_1_OnCompleted_m25E1DA22686DA0AFA1DC9CC0006952FDFF9622B4_inline (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, int16_t ___token2, const RuntimeMethod* method)
{
	((  void (*) (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t, const RuntimeMethod*))UniTaskCompletionSourceCore_1_OnCompleted_m25E1DA22686DA0AFA1DC9CC0006952FDFF9622B4_gshared_inline)(__this, ___continuation0, ___state1, ___token2, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>>::UnsafeGetStatus()
inline int32_t UniTaskCompletionSourceCore_1_UnsafeGetStatus_m9CCEFEF77DCDFF79538158D7F0148D6C12CFDA91_inline (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_UnsafeGetStatus_m9CCEFEF77DCDFF79538158D7F0148D6C12CFDA91_gshared_inline)(__this, method);
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Int32>::GetAwaiter()
inline Awaiter_t8953594D03299DE782894F4A865CED79F2504266 UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t8953594D03299DE782894F4A865CED79F2504266 (*) (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*, const RuntimeMethod*))UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Int32>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, const RuntimeMethod*))Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Int32>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
inline void Awaiter_SourceOnCompleted_mA366D7291F82B8BAE1F9494957301A0BA2803037_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Awaiter_SourceOnCompleted_mA366D7291F82B8BAE1F9494957301A0BA2803037_gshared_inline)(__this, ___continuation0, ___state1, method);
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Single>::GetAwaiter()
inline Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_inline (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D (*) (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*, const RuntimeMethod*))UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Single>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*, const RuntimeMethod*))Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Single>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
inline void Awaiter_SourceOnCompleted_mA6878346D7691E188C19F8FCDD0B650B3CB85D62_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Awaiter_SourceOnCompleted_mA6878346D7691E188C19F8FCDD0B650B3CB85D62_gshared_inline)(__this, ___continuation0, ___state1, method);
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Object>::GetAwaiter()
inline Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 (*) (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*, const RuntimeMethod*))UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*, const RuntimeMethod*))Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
inline void Awaiter_SourceOnCompleted_m5CF1681957BDC088E9F9B1405109662ECBFDA143_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Awaiter_SourceOnCompleted_m5CF1681957BDC088E9F9B1405109662ECBFDA143_gshared_inline)(__this, ___continuation0, ___state1, method);
}
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Int32>::GetResult()
inline int32_t Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, const RuntimeMethod*))Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Int32,System.Single,System.Object>>::TrySetException(System.Exception)
inline bool UniTaskCompletionSourceCore_1_TrySetException_m216C24BA2C4E6E9BE029263D3673BD50D4E69061 (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* __this, Exception_t* ___error0, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E*, Exception_t*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetException_m216C24BA2C4E6E9BE029263D3673BD50D4E69061_gshared)(__this, ___error0, method);
}
// System.Void System.ValueTuple`4<System.Int32,System.Int32,System.Single,System.Object>::.ctor(T1,T2,T3,T4)
inline void ValueTuple_4__ctor_mA0B219AF9DB75777E099441F9962E296A1290937 (ValueTuple_4_tAFA5F2488ADE7955A7EB2CCD2A8A216E0D7960BC* __this, int32_t ___item10, int32_t ___item21, float ___item32, RuntimeObject* ___item43, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_4_tAFA5F2488ADE7955A7EB2CCD2A8A216E0D7960BC*, int32_t, int32_t, float, RuntimeObject*, const RuntimeMethod*))ValueTuple_4__ctor_mA0B219AF9DB75777E099441F9962E296A1290937_gshared)(__this, ___item10, ___item21, ___item32, ___item43, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Int32,System.Single,System.Object>>::TrySetResult(TResult)
inline bool UniTaskCompletionSourceCore_1_TrySetResult_m60494D4998B6DFED3CDCC1D3309D3D0A55829A37 (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* __this, ValueTuple_4_tAFA5F2488ADE7955A7EB2CCD2A8A216E0D7960BC ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E*, ValueTuple_4_tAFA5F2488ADE7955A7EB2CCD2A8A216E0D7960BC, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetResult_m60494D4998B6DFED3CDCC1D3309D3D0A55829A37_gshared)(__this, ___result0, method);
}
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Single>::GetResult()
inline float Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*, const RuntimeMethod*))Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_gshared_inline)(__this, method);
}
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::GetResult()
inline RuntimeObject* Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*, const RuntimeMethod*))Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_gshared_inline)(__this, method);
}
// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Int32,System.Single,System.Object>>::GetResult(System.Int16)
inline ValueTuple_4_tAFA5F2488ADE7955A7EB2CCD2A8A216E0D7960BC UniTaskCompletionSourceCore_1_GetResult_mA2D90F80A0171F6C25F61CE4AF196BB0C0902283_inline (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* __this, int16_t ___token0, const RuntimeMethod* method)
{
	return ((  ValueTuple_4_tAFA5F2488ADE7955A7EB2CCD2A8A216E0D7960BC (*) (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E*, int16_t, const RuntimeMethod*))UniTaskCompletionSourceCore_1_GetResult_mA2D90F80A0171F6C25F61CE4AF196BB0C0902283_gshared_inline)(__this, ___token0, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Int32,System.Single,System.Object>>::GetStatus(System.Int16)
inline int32_t UniTaskCompletionSourceCore_1_GetStatus_mEFEB61D829DE1B223F3D54B0555FA271F3040727_inline (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* __this, int16_t ___token0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E*, int16_t, const RuntimeMethod*))UniTaskCompletionSourceCore_1_GetStatus_mEFEB61D829DE1B223F3D54B0555FA271F3040727_gshared_inline)(__this, ___token0, method);
}
// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Int32,System.Single,System.Object>>::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16)
inline void UniTaskCompletionSourceCore_1_OnCompleted_m8E7502ABB3E54955A66BDDE40129CD126A3A05DE_inline (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, int16_t ___token2, const RuntimeMethod* method)
{
	((  void (*) (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t, const RuntimeMethod*))UniTaskCompletionSourceCore_1_OnCompleted_m8E7502ABB3E54955A66BDDE40129CD126A3A05DE_gshared_inline)(__this, ___continuation0, ___state1, ___token2, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Int32,System.Single,System.Object>>::UnsafeGetStatus()
inline int32_t UniTaskCompletionSourceCore_1_UnsafeGetStatus_m744D38512828709C6B27CCFAC57ECD657B679EC3_inline (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_UnsafeGetStatus_m744D38512828709C6B27CCFAC57ECD657B679EC3_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Object,System.Object,System.Object>>::TrySetException(System.Exception)
inline bool UniTaskCompletionSourceCore_1_TrySetException_m70DA778433D11FF4DEEE024C358522EC3350C55D (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* __this, Exception_t* ___error0, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330*, Exception_t*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetException_m70DA778433D11FF4DEEE024C358522EC3350C55D_gshared)(__this, ___error0, method);
}
// System.Void System.ValueTuple`4<System.Int32,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4)
inline void ValueTuple_4__ctor_mFF8FF8A49A27E3FC2135D0F54A400D967DD4733A (ValueTuple_4_t3C73E527194858099D3E19DE8DE04DE29E44B50C* __this, int32_t ___item10, RuntimeObject* ___item21, RuntimeObject* ___item32, RuntimeObject* ___item43, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_4_t3C73E527194858099D3E19DE8DE04DE29E44B50C*, int32_t, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_4__ctor_mFF8FF8A49A27E3FC2135D0F54A400D967DD4733A_gshared)(__this, ___item10, ___item21, ___item32, ___item43, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Object,System.Object,System.Object>>::TrySetResult(TResult)
inline bool UniTaskCompletionSourceCore_1_TrySetResult_mCF0314EB4F0D46C11D29325738F008F4BB0BFDC2 (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* __this, ValueTuple_4_t3C73E527194858099D3E19DE8DE04DE29E44B50C ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330*, ValueTuple_4_t3C73E527194858099D3E19DE8DE04DE29E44B50C, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetResult_mCF0314EB4F0D46C11D29325738F008F4BB0BFDC2_gshared)(__this, ___result0, method);
}
// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Object,System.Object,System.Object>>::GetResult(System.Int16)
inline ValueTuple_4_t3C73E527194858099D3E19DE8DE04DE29E44B50C UniTaskCompletionSourceCore_1_GetResult_m8010D7630E8CE8A00720B5D6368248CCF1D3BE61_inline (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* __this, int16_t ___token0, const RuntimeMethod* method)
{
	return ((  ValueTuple_4_t3C73E527194858099D3E19DE8DE04DE29E44B50C (*) (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330*, int16_t, const RuntimeMethod*))UniTaskCompletionSourceCore_1_GetResult_m8010D7630E8CE8A00720B5D6368248CCF1D3BE61_gshared_inline)(__this, ___token0, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Object,System.Object,System.Object>>::GetStatus(System.Int16)
inline int32_t UniTaskCompletionSourceCore_1_GetStatus_mD8828EA793CF6B08AF60473597E7C41506F4FD5E_inline (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* __this, int16_t ___token0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330*, int16_t, const RuntimeMethod*))UniTaskCompletionSourceCore_1_GetStatus_mD8828EA793CF6B08AF60473597E7C41506F4FD5E_gshared_inline)(__this, ___token0, method);
}
// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Object,System.Object,System.Object>>::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16)
inline void UniTaskCompletionSourceCore_1_OnCompleted_m9F6C186F4CF9F3CEC2138912F6C9E7C9227DD686_inline (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, int16_t ___token2, const RuntimeMethod* method)
{
	((  void (*) (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t, const RuntimeMethod*))UniTaskCompletionSourceCore_1_OnCompleted_m9F6C186F4CF9F3CEC2138912F6C9E7C9227DD686_gshared_inline)(__this, ___continuation0, ___state1, ___token2, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Object,System.Object,System.Object>>::UnsafeGetStatus()
inline int32_t UniTaskCompletionSourceCore_1_UnsafeGetStatus_mE69870967002C8CD4F88F4CAE0199FAC97478581_inline (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_UnsafeGetStatus_mE69870967002C8CD4F88F4CAE0199FAC97478581_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.LowLevel.PlayerLoopSystem>::get_Current()
inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F Enumerator_get_Current_m0B4ED9AF252261F8FAEF61A9A59B085B4CE88528_inline (Enumerator_tB025B2FCAB9376692902C91754C98265C07AEA9A* __this, const RuntimeMethod* method)
{
	return ((  PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F (*) (Enumerator_tB025B2FCAB9376692902C91754C98265C07AEA9A*, const RuntimeMethod*))Enumerator_get_Current_m0B4ED9AF252261F8FAEF61A9A59B085B4CE88528_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.LowLevel.PlayerLoopSystem>::MoveNext()
inline bool Enumerator_MoveNext_m8323C42D98FCDA16F05D5351131455C3DD40C66B (Enumerator_tB025B2FCAB9376692902C91754C98265C07AEA9A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB025B2FCAB9376692902C91754C98265C07AEA9A*, const RuntimeMethod*))Enumerator_MoveNext_m8323C42D98FCDA16F05D5351131455C3DD40C66B_gshared)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Int32>>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
inline void Awaiter__ctor_m55018DFFA4D8602D121D61E41B0F1F628B2D802D_inline (Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984* __this, UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF* ___task0, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984*, UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF*, const RuntimeMethod*))Awaiter__ctor_m55018DFFA4D8602D121D61E41B0F1F628B2D802D_gshared_inline)(__this, ___task0, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`2<System.Boolean,System.Int32>>::get_Status()
inline int32_t UniTask_1_get_Status_mC5A408BF83D014982C385E05BB60549A2CBE00DC_inline (UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF*, const RuntimeMethod*))UniTask_1_get_Status_mC5A408BF83D014982C385E05BB60549A2CBE00DC_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskStatusExtensions::IsCompleted(Cysharp.Threading.Tasks.UniTaskStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___status0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Single>>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
inline void Awaiter__ctor_m7855A5D62011FFBD3484B4897C533C60E6DC2EAE_inline (Awaiter_t57195AB5181DC841249C584802FC1207B8517391* __this, UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2* ___task0, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t57195AB5181DC841249C584802FC1207B8517391*, UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2*, const RuntimeMethod*))Awaiter__ctor_m7855A5D62011FFBD3484B4897C533C60E6DC2EAE_gshared_inline)(__this, ___task0, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`2<System.Boolean,System.Single>>::get_Status()
inline int32_t UniTask_1_get_Status_m671AD37246C069F9C9E02F152848BEACB67B8356_inline (UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2*, const RuntimeMethod*))UniTask_1_get_Status_m671AD37246C069F9C9E02F152848BEACB67B8356_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`2<System.Boolean,System.Object>>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
inline void Awaiter__ctor_m489A65BDC8DF6A9218CD5C5EB67A6F90BA1BA068_inline (Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728* __this, UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F* ___task0, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728*, UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F*, const RuntimeMethod*))Awaiter__ctor_m489A65BDC8DF6A9218CD5C5EB67A6F90BA1BA068_gshared_inline)(__this, ___task0, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`2<System.Boolean,System.Object>>::get_Status()
inline int32_t UniTask_1_get_Status_m8F3A992141E5A88594A1F69E3B41CE38A4A2A6F5_inline (UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F*, const RuntimeMethod*))UniTask_1_get_Status_m8F3A992141E5A88594A1F69E3B41CE38A4A2A6F5_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>>::ValidateToken(System.Int16)
inline void UniTaskCompletionSourceCore_1_ValidateToken_m68FEFF94AE5EF0A6392B86BAC2868372ED92E5B5_inline (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* __this, int16_t ___token0, const RuntimeMethod* method)
{
	((  void (*) (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713*, int16_t, const RuntimeMethod*))UniTaskCompletionSourceCore_1_ValidateToken_m68FEFF94AE5EF0A6392B86BAC2868372ED92E5B5_gshared_inline)(__this, ___token0, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo Cysharp.Threading.Tasks.ExceptionHolder::GetException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionHolder_GetException_m362D89AE3B04CF58E6567EEB499A88B9E6F62B38 (ExceptionHolder_t877D929A153D46C3BDA043B4058034AF85FB73B1* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Int32>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
inline void Awaiter__ctor_m2D382159CB5D690EEEDB435E6183DBDBD9560CA3_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* ___task0, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*, const RuntimeMethod*))Awaiter__ctor_m2D382159CB5D690EEEDB435E6183DBDBD9560CA3_gshared_inline)(__this, ___task0, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Int32>::get_Status()
inline int32_t UniTask_1_get_Status_m688D534E5DE535F713C9D2C84744BB51F95416F5_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*, const RuntimeMethod*))UniTask_1_get_Status_m688D534E5DE535F713C9D2C84744BB51F95416F5_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Single>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
inline void Awaiter__ctor_m65B703CDA0E48F294713CCCF06A7B5AF705D8E1F_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* ___task0, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*, UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*, const RuntimeMethod*))Awaiter__ctor_m65B703CDA0E48F294713CCCF06A7B5AF705D8E1F_gshared_inline)(__this, ___task0, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Single>::get_Status()
inline int32_t UniTask_1_get_Status_mD1C383B359BDB954321BC6C44DA1631270CC29A6_inline (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*, const RuntimeMethod*))UniTask_1_get_Status_mD1C383B359BDB954321BC6C44DA1631270CC29A6_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
inline void Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* ___task0, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*, const RuntimeMethod*))Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_gshared_inline)(__this, ___task0, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Object>::get_Status()
inline int32_t UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*, const RuntimeMethod*))UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Int32,System.Single,System.Object>>::ValidateToken(System.Int16)
inline void UniTaskCompletionSourceCore_1_ValidateToken_m36CD0655A19E8FF13A47089C9B22677D08273B9F_inline (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* __this, int16_t ___token0, const RuntimeMethod* method)
{
	((  void (*) (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E*, int16_t, const RuntimeMethod*))UniTaskCompletionSourceCore_1_ValidateToken_m36CD0655A19E8FF13A47089C9B22677D08273B9F_gshared_inline)(__this, ___token0, method);
}
// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`4<System.Int32,System.Object,System.Object,System.Object>>::ValidateToken(System.Int16)
inline void UniTaskCompletionSourceCore_1_ValidateToken_m7C8EDC14B5DB9091C851F0B0AF05FE0F5EB9E8D2_inline (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* __this, int16_t ___token0, const RuntimeMethod* method)
{
	((  void (*) (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330*, int16_t, const RuntimeMethod*))UniTaskCompletionSourceCore_1_ValidateToken_m7C8EDC14B5DB9091C851F0B0AF05FE0F5EB9E8D2_gshared_inline)(__this, ___token0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_3__ctor_mE71B25069DE2130E9D00792AEFAC0E371A3F30BF_gshared (WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16* __this, UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF ___task10, UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2 ___task21, UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F ___task32, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Awaiter_t57195AB5181DC841249C584802FC1207B8517391 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B4_0 = NULL;
	Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984* G_B4_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B3_0 = NULL;
	Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984* G_B3_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B9_0 = NULL;
	Awaiter_t57195AB5181DC841249C584802FC1207B8517391* G_B9_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B8_0 = NULL;
	Awaiter_t57195AB5181DC841249C584802FC1207B8517391* G_B8_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B14_0 = NULL;
	Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728* G_B14_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B13_0 = NULL;
	Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728* G_B13_1 = NULL;
	{
		// public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.completedCount = 0;
		__this->___completedCount_0 = 0;
		// var awaiter = task1.GetAwaiter();
		Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984 L_0;
		L_0 = UniTask_1_GetAwaiter_mB38AE50A1A9C6738299E949D09E98B43E029C9BD_inline((&___task10), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		// if (awaiter.IsCompleted)
		bool L_1;
		L_1 = Awaiter_get_IsCompleted_m033ECB1735F07F30D1A08C495BBFAF9D7BD19BAE_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// TryInvokeContinuationT1(this, awaiter);
		((  void (*) (WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16*, Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		goto IL_0055;
	}

IL_0028:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3>, UniTask<T1>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT1(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ((U3CU3Ec_t8E2013A3BE0C8AC9F19A0DB0CDDC17CA35A34682_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_0_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = L_2;
		G_B3_0 = L_3;
		G_B3_1 = (&V_0);
		if (L_3)
		{
			G_B4_0 = L_3;
			G_B4_1 = (&V_0);
			goto IL_0049;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		U3CU3Ec_t8E2013A3BE0C8AC9F19A0DB0CDDC17CA35A34682* L_4 = ((U3CU3Ec_t8E2013A3BE0C8AC9F19A0DB0CDDC17CA35A34682_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 5)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = L_5;
		((U3CU3Ec_t8E2013A3BE0C8AC9F19A0DB0CDDC17CA35A34682_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8E2013A3BE0C8AC9F19A0DB0CDDC17CA35A34682_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_0_1), (void*)L_6);
		G_B4_0 = L_6;
		G_B4_1 = G_B3_1;
	}

IL_0049:
	{
		Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984 L_7 = V_0;
		StateTuple_2_t0B5913EF4A60E0612751DE36F7C45EAA4E070704* L_8;
		L_8 = ((  StateTuple_2_t0B5913EF4A60E0612751DE36F7C45EAA4E070704* (*) (WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16*, Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		Awaiter_SourceOnCompleted_mD87C80282CB2B843B7B3BBEAFE89AB76E74D75BC_inline(G_B4_1, G_B4_0, (RuntimeObject*)L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_0055:
	{
		// var awaiter = task2.GetAwaiter();
		Awaiter_t57195AB5181DC841249C584802FC1207B8517391 L_9;
		L_9 = UniTask_1_GetAwaiter_mA50969136777FAA638B8BF5AD7DC267CC4AD0501_inline((&___task21), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_1 = L_9;
		// if (awaiter.IsCompleted)
		bool L_10;
		L_10 = Awaiter_get_IsCompleted_mBDD104327707ECBF683EAD1B9DBC38FD16FA55AE_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_10)
		{
			goto IL_0070;
		}
	}
	{
		// TryInvokeContinuationT2(this, awaiter);
		((  void (*) (WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16*, Awaiter_t57195AB5181DC841249C584802FC1207B8517391*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		goto IL_009d;
	}

IL_0070:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3>, UniTask<T2>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT2(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = ((U3CU3Ec_t8E2013A3BE0C8AC9F19A0DB0CDDC17CA35A34682_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_1_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = L_11;
		G_B8_0 = L_12;
		G_B8_1 = (&V_1);
		if (L_12)
		{
			G_B9_0 = L_12;
			G_B9_1 = (&V_1);
			goto IL_0091;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		U3CU3Ec_t8E2013A3BE0C8AC9F19A0DB0CDDC17CA35A34682* L_13 = ((U3CU3Ec_t8E2013A3BE0C8AC9F19A0DB0CDDC17CA35A34682_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_14, (RuntimeObject*)L_13, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 11)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_15 = L_14;
		((U3CU3Ec_t8E2013A3BE0C8AC9F19A0DB0CDDC17CA35A34682_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_1_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8E2013A3BE0C8AC9F19A0DB0CDDC17CA35A34682_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_1_2), (void*)L_15);
		G_B9_0 = L_15;
		G_B9_1 = G_B8_1;
	}

IL_0091:
	{
		Awaiter_t57195AB5181DC841249C584802FC1207B8517391 L_16 = V_1;
		StateTuple_2_tE2F4583B6E26530BE9831DC1FE85C7BEBD3530D6* L_17;
		L_17 = ((  StateTuple_2_tE2F4583B6E26530BE9831DC1FE85C7BEBD3530D6* (*) (WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16*, Awaiter_t57195AB5181DC841249C584802FC1207B8517391, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		Awaiter_SourceOnCompleted_m3725FF5E0AC8CF789C3F06B867A39B3F693CF699_inline(G_B9_1, G_B9_0, (RuntimeObject*)L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_009d:
	{
		// var awaiter = task3.GetAwaiter();
		Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728 L_18;
		L_18 = UniTask_1_GetAwaiter_mC8ADF30FE1E74C06C1D9B53FAC76DD6501F7030F_inline((&___task32), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_2 = L_18;
		// if (awaiter.IsCompleted)
		bool L_19;
		L_19 = Awaiter_get_IsCompleted_m43221ACA0B7A6CD6D6F4DF0A71CD585F49CC424B_inline((&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (!L_19)
		{
			goto IL_00b7;
		}
	}
	{
		// TryInvokeContinuationT3(this, awaiter);
		((  void (*) (WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16*, Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, (&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}

IL_00b7:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3>, UniTask<T3>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT3(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_20 = ((U3CU3Ec_t8E2013A3BE0C8AC9F19A0DB0CDDC17CA35A34682_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_2_3;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_21 = L_20;
		G_B13_0 = L_21;
		G_B13_1 = (&V_2);
		if (L_21)
		{
			G_B14_0 = L_21;
			G_B14_1 = (&V_2);
			goto IL_00d8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		U3CU3Ec_t8E2013A3BE0C8AC9F19A0DB0CDDC17CA35A34682* L_22 = ((U3CU3Ec_t8E2013A3BE0C8AC9F19A0DB0CDDC17CA35A34682_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_23, (RuntimeObject*)L_22, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 17)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_24 = L_23;
		((U3CU3Ec_t8E2013A3BE0C8AC9F19A0DB0CDDC17CA35A34682_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_2_3 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8E2013A3BE0C8AC9F19A0DB0CDDC17CA35A34682_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_2_3), (void*)L_24);
		G_B14_0 = L_24;
		G_B14_1 = G_B13_1;
	}

IL_00d8:
	{
		Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728 L_25 = V_2;
		StateTuple_2_t2E116D00291AF020BB959D9584782939F460FB30* L_26;
		L_26 = ((  StateTuple_2_t2E116D00291AF020BB959D9584782939F460FB30* (*) (WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16*, Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		Awaiter_SourceOnCompleted_m5ED3FEFA36C9466C434E00141C3EACF71F130CB2_inline(G_B14_1, G_B14_0, (RuntimeObject*)L_26, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>::TryInvokeContinuationT1(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<T1,T2,T3>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T1>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_3_TryInvokeContinuationT1_m80F1E6B3A01715F9D49E5EDBE381455880FCD1BF_gshared (WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16* ___self0, Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984* ___awaiter1, const RuntimeMethod* method) 
{
	ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D V_2;
	memset((&V_2), 0, sizeof(V_2));
	ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 V_3;
	memset((&V_3), 0, sizeof(V_3));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984* L_0 = ___awaiter1;
		ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133 L_1;
		L_1 = Awaiter_GetResult_m350EF3476023469EF276C3D635E1811953D8D0FC_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		V_0 = L_1;
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16* L_2 = ___self0;
		NullCheck(L_2);
		UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* L_3 = (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713*)(&L_2->___core_1);
		Exception_t* L_4 = V_1;
		bool L_5;
		L_5 = UniTaskCompletionSourceCore_1_TrySetException_m23F8B5290496FD502BA6FCAE864B9CA83D0D41DD(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004c;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16* L_6 = ___self0;
		NullCheck(L_6);
		int32_t* L_7 = (int32_t*)(&L_6->___completedCount_0);
		int32_t L_8;
		L_8 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_7, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_004c;
		}
	}
	{
		// self.core.TrySetResult((0, result, default, default));
		WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16* L_9 = ___self0;
		NullCheck(L_9);
		UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* L_10 = (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713*)(&L_9->___core_1);
		ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133 L_11 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D));
		ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D L_12 = V_2;
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798));
		ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 L_13 = V_3;
		ValueTuple_4_t3FE437EA7C6253FC3BC11C9FC835DFB1A5A67FC6 L_14;
		memset((&L_14), 0, sizeof(L_14));
		ValueTuple_4__ctor_mC90962ACCD0644288EB0A2244E9F53844C0DAF4D((&L_14), 0, L_11, L_12, L_13, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		bool L_15;
		L_15 = UniTaskCompletionSourceCore_1_TrySetResult_m382B6BE34AA6F07524101E4F4B2BAC683665BCE3(L_10, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>::TryInvokeContinuationT2(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<T1,T2,T3>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_3_TryInvokeContinuationT2_mD20B6214F06F41D72FBFD8130600F6D3CC12E40E_gshared (WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16* ___self0, Awaiter_t57195AB5181DC841249C584802FC1207B8517391* ___awaiter1, const RuntimeMethod* method) 
{
	ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 V_3;
	memset((&V_3), 0, sizeof(V_3));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t57195AB5181DC841249C584802FC1207B8517391* L_0 = ___awaiter1;
		ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D L_1;
		L_1 = Awaiter_GetResult_mF62E85E9AD2B8CA9A42D14052E7F9219AC39F0B2_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		V_0 = L_1;
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16* L_2 = ___self0;
		NullCheck(L_2);
		UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* L_3 = (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713*)(&L_2->___core_1);
		Exception_t* L_4 = V_1;
		bool L_5;
		L_5 = UniTaskCompletionSourceCore_1_TrySetException_m23F8B5290496FD502BA6FCAE864B9CA83D0D41DD(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004c;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16* L_6 = ___self0;
		NullCheck(L_6);
		int32_t* L_7 = (int32_t*)(&L_6->___completedCount_0);
		int32_t L_8;
		L_8 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_7, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_004c;
		}
	}
	{
		// self.core.TrySetResult((1, default, result, default));
		WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16* L_9 = ___self0;
		NullCheck(L_9);
		UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* L_10 = (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713*)(&L_9->___core_1);
		il2cpp_codegen_initobj((&V_2), sizeof(ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133));
		ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133 L_11 = V_2;
		ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D L_12 = V_0;
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798));
		ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 L_13 = V_3;
		ValueTuple_4_t3FE437EA7C6253FC3BC11C9FC835DFB1A5A67FC6 L_14;
		memset((&L_14), 0, sizeof(L_14));
		ValueTuple_4__ctor_mC90962ACCD0644288EB0A2244E9F53844C0DAF4D((&L_14), 1, L_11, L_12, L_13, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		bool L_15;
		L_15 = UniTaskCompletionSourceCore_1_TrySetResult_m382B6BE34AA6F07524101E4F4B2BAC683665BCE3(L_10, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>::TryInvokeContinuationT3(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<T1,T2,T3>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T3>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_3_TryInvokeContinuationT3_mCAB42E0F8E58AA57DF5841A5A5E39F5F3510DD21_gshared (WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16* ___self0, Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728* ___awaiter1, const RuntimeMethod* method) 
{
	ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D V_3;
	memset((&V_3), 0, sizeof(V_3));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728* L_0 = ___awaiter1;
		ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 L_1;
		L_1 = Awaiter_GetResult_m6D0F17AFAD47EC192AFB978715FF9F3E47445DF4_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		V_0 = L_1;
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16* L_2 = ___self0;
		NullCheck(L_2);
		UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* L_3 = (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713*)(&L_2->___core_1);
		Exception_t* L_4 = V_1;
		bool L_5;
		L_5 = UniTaskCompletionSourceCore_1_TrySetException_m23F8B5290496FD502BA6FCAE864B9CA83D0D41DD(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004c;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16* L_6 = ___self0;
		NullCheck(L_6);
		int32_t* L_7 = (int32_t*)(&L_6->___completedCount_0);
		int32_t L_8;
		L_8 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_7, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_004c;
		}
	}
	{
		// self.core.TrySetResult((2, default, default, result));
		WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16* L_9 = ___self0;
		NullCheck(L_9);
		UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* L_10 = (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713*)(&L_9->___core_1);
		il2cpp_codegen_initobj((&V_2), sizeof(ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133));
		ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133 L_11 = V_2;
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D));
		ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D L_12 = V_3;
		ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 L_13 = V_0;
		ValueTuple_4_t3FE437EA7C6253FC3BC11C9FC835DFB1A5A67FC6 L_14;
		memset((&L_14), 0, sizeof(L_14));
		ValueTuple_4__ctor_mC90962ACCD0644288EB0A2244E9F53844C0DAF4D((&L_14), 2, L_11, L_12, L_13, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		bool L_15;
		L_15 = UniTaskCompletionSourceCore_1_TrySetResult_m382B6BE34AA6F07524101E4F4B2BAC683665BCE3(L_10, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.ValueTuple`4<System.Int32,T1,T2,T3> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>::GetResult(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_4_t3FE437EA7C6253FC3BC11C9FC835DFB1A5A67FC6 WhenAnyPromise_3_GetResult_mE32A855001FD32E09C3072F4404C6B07A79F7BDB_gshared (WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16* __this, int16_t ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65((RuntimeObject*)__this, NULL);
		// return core.GetResult(token);
		UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* L_0 = (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713*)(&__this->___core_1);
		int16_t L_1 = ___token0;
		ValueTuple_4_t3FE437EA7C6253FC3BC11C9FC835DFB1A5A67FC6 L_2;
		L_2 = UniTaskCompletionSourceCore_1_GetResult_mA01865AFE9E5373DBCF52E45EB46B76680003E68_inline(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return L_2;
	}
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>::GetStatus(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WhenAnyPromise_3_GetStatus_m9800DF563CB93C79E0EE2D5A95F8E0330D4FEEC1_gshared (WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16* __this, int16_t ___token0, const RuntimeMethod* method) 
{
	{
		// return core.GetStatus(token);
		UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* L_0 = (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713*)(&__this->___core_1);
		int16_t L_1 = ___token0;
		int32_t L_2;
		L_2 = UniTaskCompletionSourceCore_1_GetStatus_mF86D2712AC9DE6D56B31A7702AAC54827B610D8E_inline(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_2;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_3_OnCompleted_m47A6E916FF1CA4D8D18DCDDA5E206F5C73E2AB74_gshared (WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, int16_t ___token2, const RuntimeMethod* method) 
{
	{
		// core.OnCompleted(continuation, state, token);
		UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* L_0 = (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713*)(&__this->___core_1);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = ___continuation0;
		RuntimeObject* L_2 = ___state1;
		int16_t L_3 = ___token2;
		UniTaskCompletionSourceCore_1_OnCompleted_m25E1DA22686DA0AFA1DC9CC0006952FDFF9622B4_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>::UnsafeGetStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WhenAnyPromise_3_UnsafeGetStatus_mAC150719EC135B5FE0B3D40745CF373D32405FE6_gshared (WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16* __this, const RuntimeMethod* method) 
{
	{
		// return core.UnsafeGetStatus();
		UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* L_0 = (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713*)(&__this->___core_1);
		int32_t L_1;
		L_1 = UniTaskCompletionSourceCore_1_UnsafeGetStatus_m9CCEFEF77DCDFF79538158D7F0148D6C12CFDA91_inline(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_1;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.ValueTuple`2<System.Boolean,System.Int32>,System.ValueTuple`2<System.Boolean,System.Single>,System.ValueTuple`2<System.Boolean,System.Object>>::Cysharp.Threading.Tasks.IUniTaskSource.GetResult(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_3_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m0B3F8E7F0B495F6C8C0B2A76795DFED1678A0EF7_gshared (WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16* __this, int16_t ___token0, const RuntimeMethod* method) 
{
	{
		// GetResult(token);
		int16_t L_0 = ___token0;
		ValueTuple_4_t3FE437EA7C6253FC3BC11C9FC835DFB1A5A67FC6 L_1;
		L_1 = ((  ValueTuple_4_t3FE437EA7C6253FC3BC11C9FC835DFB1A5A67FC6 (*) (WhenAnyPromise_3_t173EA2940AA9CC390A31F2CF5EC98C2C26E54F16*, int16_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Int32,System.Single,System.Object>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_3__ctor_m2A77984FD849600F15CAFEAD55385052E94738A3_gshared (WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024* __this, UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 ___task10, UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 ___task21, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 ___task32, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B4_0 = NULL;
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266* G_B4_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B3_0 = NULL;
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266* G_B3_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B9_0 = NULL;
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* G_B9_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B8_0 = NULL;
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* G_B8_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B14_0 = NULL;
	Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* G_B14_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B13_0 = NULL;
	Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* G_B13_1 = NULL;
	{
		// public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.completedCount = 0;
		__this->___completedCount_0 = 0;
		// var awaiter = task1.GetAwaiter();
		Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_0;
		L_0 = UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_inline((&___task10), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		// if (awaiter.IsCompleted)
		bool L_1;
		L_1 = Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// TryInvokeContinuationT1(this, awaiter);
		((  void (*) (WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024*, Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		goto IL_0055;
	}

IL_0028:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3>, UniTask<T1>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT1(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ((U3CU3Ec_t288FC91920DA8867D99C28279E25BA6D07A64291_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_0_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = L_2;
		G_B3_0 = L_3;
		G_B3_1 = (&V_0);
		if (L_3)
		{
			G_B4_0 = L_3;
			G_B4_1 = (&V_0);
			goto IL_0049;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		U3CU3Ec_t288FC91920DA8867D99C28279E25BA6D07A64291* L_4 = ((U3CU3Ec_t288FC91920DA8867D99C28279E25BA6D07A64291_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 5)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = L_5;
		((U3CU3Ec_t288FC91920DA8867D99C28279E25BA6D07A64291_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t288FC91920DA8867D99C28279E25BA6D07A64291_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_0_1), (void*)L_6);
		G_B4_0 = L_6;
		G_B4_1 = G_B3_1;
	}

IL_0049:
	{
		Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_7 = V_0;
		StateTuple_2_tF7257837589BAFB811E0B0AA42A64A13DDFCFFF5* L_8;
		L_8 = ((  StateTuple_2_tF7257837589BAFB811E0B0AA42A64A13DDFCFFF5* (*) (WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024*, Awaiter_t8953594D03299DE782894F4A865CED79F2504266, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		Awaiter_SourceOnCompleted_mA366D7291F82B8BAE1F9494957301A0BA2803037_inline(G_B4_1, G_B4_0, (RuntimeObject*)L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_0055:
	{
		// var awaiter = task2.GetAwaiter();
		Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_9;
		L_9 = UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_inline((&___task21), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_1 = L_9;
		// if (awaiter.IsCompleted)
		bool L_10;
		L_10 = Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_10)
		{
			goto IL_0070;
		}
	}
	{
		// TryInvokeContinuationT2(this, awaiter);
		((  void (*) (WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024*, Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		goto IL_009d;
	}

IL_0070:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3>, UniTask<T2>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT2(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = ((U3CU3Ec_t288FC91920DA8867D99C28279E25BA6D07A64291_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_1_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = L_11;
		G_B8_0 = L_12;
		G_B8_1 = (&V_1);
		if (L_12)
		{
			G_B9_0 = L_12;
			G_B9_1 = (&V_1);
			goto IL_0091;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		U3CU3Ec_t288FC91920DA8867D99C28279E25BA6D07A64291* L_13 = ((U3CU3Ec_t288FC91920DA8867D99C28279E25BA6D07A64291_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_14, (RuntimeObject*)L_13, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 11)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_15 = L_14;
		((U3CU3Ec_t288FC91920DA8867D99C28279E25BA6D07A64291_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_1_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t288FC91920DA8867D99C28279E25BA6D07A64291_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_1_2), (void*)L_15);
		G_B9_0 = L_15;
		G_B9_1 = G_B8_1;
	}

IL_0091:
	{
		Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_16 = V_1;
		StateTuple_2_tFFF5DBAB9417F5AE7BC69B70BACBA8A135B7CB40* L_17;
		L_17 = ((  StateTuple_2_tFFF5DBAB9417F5AE7BC69B70BACBA8A135B7CB40* (*) (WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024*, Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		Awaiter_SourceOnCompleted_mA6878346D7691E188C19F8FCDD0B650B3CB85D62_inline(G_B9_1, G_B9_0, (RuntimeObject*)L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_009d:
	{
		// var awaiter = task3.GetAwaiter();
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_18;
		L_18 = UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_inline((&___task32), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_2 = L_18;
		// if (awaiter.IsCompleted)
		bool L_19;
		L_19 = Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_inline((&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (!L_19)
		{
			goto IL_00b7;
		}
	}
	{
		// TryInvokeContinuationT3(this, awaiter);
		((  void (*) (WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024*, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, (&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}

IL_00b7:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3>, UniTask<T3>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT3(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_20 = ((U3CU3Ec_t288FC91920DA8867D99C28279E25BA6D07A64291_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_2_3;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_21 = L_20;
		G_B13_0 = L_21;
		G_B13_1 = (&V_2);
		if (L_21)
		{
			G_B14_0 = L_21;
			G_B14_1 = (&V_2);
			goto IL_00d8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		U3CU3Ec_t288FC91920DA8867D99C28279E25BA6D07A64291* L_22 = ((U3CU3Ec_t288FC91920DA8867D99C28279E25BA6D07A64291_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_23, (RuntimeObject*)L_22, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 17)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_24 = L_23;
		((U3CU3Ec_t288FC91920DA8867D99C28279E25BA6D07A64291_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_2_3 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t288FC91920DA8867D99C28279E25BA6D07A64291_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_2_3), (void*)L_24);
		G_B14_0 = L_24;
		G_B14_1 = G_B13_1;
	}

IL_00d8:
	{
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_25 = V_2;
		StateTuple_2_t048746E360AEAB67385A102EC0F7B6284E046DAC* L_26;
		L_26 = ((  StateTuple_2_t048746E360AEAB67385A102EC0F7B6284E046DAC* (*) (WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024*, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		Awaiter_SourceOnCompleted_m5CF1681957BDC088E9F9B1405109662ECBFDA143_inline(G_B14_1, G_B14_0, (RuntimeObject*)L_26, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Int32,System.Single,System.Object>::TryInvokeContinuationT1(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<T1,T2,T3>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T1>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_3_TryInvokeContinuationT1_m2C175B97711AC2DCC980307A77A6AA570888C17E_gshared (WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024* ___self0, Awaiter_t8953594D03299DE782894F4A865CED79F2504266* ___awaiter1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Exception_t* V_1 = NULL;
	float V_2 = 0.0f;
	RuntimeObject* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t8953594D03299DE782894F4A865CED79F2504266* L_0 = ___awaiter1;
		int32_t L_1;
		L_1 = Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		V_0 = L_1;
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024* L_2 = ___self0;
		NullCheck(L_2);
		UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* L_3 = (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E*)(&L_2->___core_1);
		Exception_t* L_4 = V_1;
		bool L_5;
		L_5 = UniTaskCompletionSourceCore_1_TrySetException_m216C24BA2C4E6E9BE029263D3673BD50D4E69061(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004c;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024* L_6 = ___self0;
		NullCheck(L_6);
		int32_t* L_7 = (int32_t*)(&L_6->___completedCount_0);
		int32_t L_8;
		L_8 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_7, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_004c;
		}
	}
	{
		// self.core.TrySetResult((0, result, default, default));
		WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024* L_9 = ___self0;
		NullCheck(L_9);
		UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* L_10 = (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E*)(&L_9->___core_1);
		int32_t L_11 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(float));
		float L_12 = V_2;
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_13 = V_3;
		ValueTuple_4_tAFA5F2488ADE7955A7EB2CCD2A8A216E0D7960BC L_14;
		memset((&L_14), 0, sizeof(L_14));
		ValueTuple_4__ctor_mA0B219AF9DB75777E099441F9962E296A1290937((&L_14), 0, L_11, L_12, L_13, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		bool L_15;
		L_15 = UniTaskCompletionSourceCore_1_TrySetResult_m60494D4998B6DFED3CDCC1D3309D3D0A55829A37(L_10, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Int32,System.Single,System.Object>::TryInvokeContinuationT2(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<T1,T2,T3>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_3_TryInvokeContinuationT2_m9D3C9A3F0CA759C877B0720DCE9AA5A47F06DF8A_gshared (WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024* ___self0, Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* ___awaiter1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Exception_t* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* L_0 = ___awaiter1;
		float L_1;
		L_1 = Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		V_0 = L_1;
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024* L_2 = ___self0;
		NullCheck(L_2);
		UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* L_3 = (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E*)(&L_2->___core_1);
		Exception_t* L_4 = V_1;
		bool L_5;
		L_5 = UniTaskCompletionSourceCore_1_TrySetException_m216C24BA2C4E6E9BE029263D3673BD50D4E69061(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004c;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024* L_6 = ___self0;
		NullCheck(L_6);
		int32_t* L_7 = (int32_t*)(&L_6->___completedCount_0);
		int32_t L_8;
		L_8 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_7, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_004c;
		}
	}
	{
		// self.core.TrySetResult((1, default, result, default));
		WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024* L_9 = ___self0;
		NullCheck(L_9);
		UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* L_10 = (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E*)(&L_9->___core_1);
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		int32_t L_11 = V_2;
		float L_12 = V_0;
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_13 = V_3;
		ValueTuple_4_tAFA5F2488ADE7955A7EB2CCD2A8A216E0D7960BC L_14;
		memset((&L_14), 0, sizeof(L_14));
		ValueTuple_4__ctor_mA0B219AF9DB75777E099441F9962E296A1290937((&L_14), 1, L_11, L_12, L_13, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		bool L_15;
		L_15 = UniTaskCompletionSourceCore_1_TrySetResult_m60494D4998B6DFED3CDCC1D3309D3D0A55829A37(L_10, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Int32,System.Single,System.Object>::TryInvokeContinuationT3(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<T1,T2,T3>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T3>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_3_TryInvokeContinuationT3_mE2CF34BFFD610C7B4B6B588FDF77ACBFEFF7CA88_gshared (WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024* ___self0, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* ___awaiter1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	Exception_t* V_1 = NULL;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* L_0 = ___awaiter1;
		RuntimeObject* L_1;
		L_1 = Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		V_0 = L_1;
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024* L_2 = ___self0;
		NullCheck(L_2);
		UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* L_3 = (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E*)(&L_2->___core_1);
		Exception_t* L_4 = V_1;
		bool L_5;
		L_5 = UniTaskCompletionSourceCore_1_TrySetException_m216C24BA2C4E6E9BE029263D3673BD50D4E69061(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004c;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024* L_6 = ___self0;
		NullCheck(L_6);
		int32_t* L_7 = (int32_t*)(&L_6->___completedCount_0);
		int32_t L_8;
		L_8 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_7, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_004c;
		}
	}
	{
		// self.core.TrySetResult((2, default, default, result));
		WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024* L_9 = ___self0;
		NullCheck(L_9);
		UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* L_10 = (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E*)(&L_9->___core_1);
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		int32_t L_11 = V_2;
		il2cpp_codegen_initobj((&V_3), sizeof(float));
		float L_12 = V_3;
		RuntimeObject* L_13 = V_0;
		ValueTuple_4_tAFA5F2488ADE7955A7EB2CCD2A8A216E0D7960BC L_14;
		memset((&L_14), 0, sizeof(L_14));
		ValueTuple_4__ctor_mA0B219AF9DB75777E099441F9962E296A1290937((&L_14), 2, L_11, L_12, L_13, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		bool L_15;
		L_15 = UniTaskCompletionSourceCore_1_TrySetResult_m60494D4998B6DFED3CDCC1D3309D3D0A55829A37(L_10, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.ValueTuple`4<System.Int32,T1,T2,T3> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Int32,System.Single,System.Object>::GetResult(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_4_tAFA5F2488ADE7955A7EB2CCD2A8A216E0D7960BC WhenAnyPromise_3_GetResult_m560DC01E03B52F97C724E4D60EE52CC24BEC86C2_gshared (WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024* __this, int16_t ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65((RuntimeObject*)__this, NULL);
		// return core.GetResult(token);
		UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* L_0 = (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E*)(&__this->___core_1);
		int16_t L_1 = ___token0;
		ValueTuple_4_tAFA5F2488ADE7955A7EB2CCD2A8A216E0D7960BC L_2;
		L_2 = UniTaskCompletionSourceCore_1_GetResult_mA2D90F80A0171F6C25F61CE4AF196BB0C0902283_inline(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return L_2;
	}
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Int32,System.Single,System.Object>::GetStatus(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WhenAnyPromise_3_GetStatus_m8F0195EAE6D98FC98208F32992D0A086332CAF78_gshared (WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024* __this, int16_t ___token0, const RuntimeMethod* method) 
{
	{
		// return core.GetStatus(token);
		UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* L_0 = (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E*)(&__this->___core_1);
		int16_t L_1 = ___token0;
		int32_t L_2;
		L_2 = UniTaskCompletionSourceCore_1_GetStatus_mEFEB61D829DE1B223F3D54B0555FA271F3040727_inline(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_2;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Int32,System.Single,System.Object>::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_3_OnCompleted_m0A14B1096818A269BDBEE57666B95983A904095C_gshared (WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, int16_t ___token2, const RuntimeMethod* method) 
{
	{
		// core.OnCompleted(continuation, state, token);
		UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* L_0 = (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E*)(&__this->___core_1);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = ___continuation0;
		RuntimeObject* L_2 = ___state1;
		int16_t L_3 = ___token2;
		UniTaskCompletionSourceCore_1_OnCompleted_m8E7502ABB3E54955A66BDDE40129CD126A3A05DE_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Int32,System.Single,System.Object>::UnsafeGetStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WhenAnyPromise_3_UnsafeGetStatus_m0F571E23DA135F9ABC1270D22AA778A7A3EB950E_gshared (WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024* __this, const RuntimeMethod* method) 
{
	{
		// return core.UnsafeGetStatus();
		UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* L_0 = (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E*)(&__this->___core_1);
		int32_t L_1;
		L_1 = UniTaskCompletionSourceCore_1_UnsafeGetStatus_m744D38512828709C6B27CCFAC57ECD657B679EC3_inline(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_1;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Int32,System.Single,System.Object>::Cysharp.Threading.Tasks.IUniTaskSource.GetResult(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_3_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m3E392250566672463EF8A9E13C8687F3F43BA6B8_gshared (WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024* __this, int16_t ___token0, const RuntimeMethod* method) 
{
	{
		// GetResult(token);
		int16_t L_0 = ___token0;
		ValueTuple_4_tAFA5F2488ADE7955A7EB2CCD2A8A216E0D7960BC L_1;
		L_1 = ((  ValueTuple_4_tAFA5F2488ADE7955A7EB2CCD2A8A216E0D7960BC (*) (WhenAnyPromise_3_t59BB60BE2904E9FBD5F2139C3CE3D7D5CB577024*, int16_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Object,System.Object,System.Object>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_3__ctor_m0837922563213D71D3E9A3880C872970EB992C2D_gshared (WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533* __this, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 ___task10, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 ___task21, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 ___task32, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B4_0 = NULL;
	Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* G_B4_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B3_0 = NULL;
	Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* G_B3_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B9_0 = NULL;
	Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* G_B9_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B8_0 = NULL;
	Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* G_B8_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B14_0 = NULL;
	Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* G_B14_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B13_0 = NULL;
	Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* G_B13_1 = NULL;
	{
		// public WhenAnyPromise(UniTask<T1> task1, UniTask<T2> task2, UniTask<T3> task3)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.completedCount = 0;
		__this->___completedCount_0 = 0;
		// var awaiter = task1.GetAwaiter();
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_0;
		L_0 = UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_inline((&___task10), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		// if (awaiter.IsCompleted)
		bool L_1;
		L_1 = Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// TryInvokeContinuationT1(this, awaiter);
		((  void (*) (WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533*, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		goto IL_0055;
	}

IL_0028:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3>, UniTask<T1>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT1(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ((U3CU3Ec_t542F3782E64D6E82CA4D5300030BE484F6C2B81A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_0_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = L_2;
		G_B3_0 = L_3;
		G_B3_1 = (&V_0);
		if (L_3)
		{
			G_B4_0 = L_3;
			G_B4_1 = (&V_0);
			goto IL_0049;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		U3CU3Ec_t542F3782E64D6E82CA4D5300030BE484F6C2B81A* L_4 = ((U3CU3Ec_t542F3782E64D6E82CA4D5300030BE484F6C2B81A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 5)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = L_5;
		((U3CU3Ec_t542F3782E64D6E82CA4D5300030BE484F6C2B81A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t542F3782E64D6E82CA4D5300030BE484F6C2B81A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_0_1), (void*)L_6);
		G_B4_0 = L_6;
		G_B4_1 = G_B3_1;
	}

IL_0049:
	{
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_7 = V_0;
		StateTuple_2_t60384B8B6BB14758764DC973AA9F9FAB7C8A4039* L_8;
		L_8 = ((  StateTuple_2_t60384B8B6BB14758764DC973AA9F9FAB7C8A4039* (*) (WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533*, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		Awaiter_SourceOnCompleted_m5CF1681957BDC088E9F9B1405109662ECBFDA143_inline(G_B4_1, G_B4_0, (RuntimeObject*)L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
	}

IL_0055:
	{
		// var awaiter = task2.GetAwaiter();
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_9;
		L_9 = UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_inline((&___task21), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_1 = L_9;
		// if (awaiter.IsCompleted)
		bool L_10;
		L_10 = Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_10)
		{
			goto IL_0070;
		}
	}
	{
		// TryInvokeContinuationT2(this, awaiter);
		((  void (*) (WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533*, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		goto IL_009d;
	}

IL_0070:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3>, UniTask<T2>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT2(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = ((U3CU3Ec_t542F3782E64D6E82CA4D5300030BE484F6C2B81A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_1_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = L_11;
		G_B8_0 = L_12;
		G_B8_1 = (&V_1);
		if (L_12)
		{
			G_B9_0 = L_12;
			G_B9_1 = (&V_1);
			goto IL_0091;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		U3CU3Ec_t542F3782E64D6E82CA4D5300030BE484F6C2B81A* L_13 = ((U3CU3Ec_t542F3782E64D6E82CA4D5300030BE484F6C2B81A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_14, (RuntimeObject*)L_13, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 11)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_15 = L_14;
		((U3CU3Ec_t542F3782E64D6E82CA4D5300030BE484F6C2B81A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_1_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t542F3782E64D6E82CA4D5300030BE484F6C2B81A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_1_2), (void*)L_15);
		G_B9_0 = L_15;
		G_B9_1 = G_B8_1;
	}

IL_0091:
	{
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_16 = V_1;
		StateTuple_2_t60384B8B6BB14758764DC973AA9F9FAB7C8A4039* L_17;
		L_17 = ((  StateTuple_2_t60384B8B6BB14758764DC973AA9F9FAB7C8A4039* (*) (WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533*, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		Awaiter_SourceOnCompleted_m5CF1681957BDC088E9F9B1405109662ECBFDA143_inline(G_B9_1, G_B9_0, (RuntimeObject*)L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_009d:
	{
		// var awaiter = task3.GetAwaiter();
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_18;
		L_18 = UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_inline((&___task32), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_2 = L_18;
		// if (awaiter.IsCompleted)
		bool L_19;
		L_19 = Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_inline((&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (!L_19)
		{
			goto IL_00b7;
		}
	}
	{
		// TryInvokeContinuationT3(this, awaiter);
		((  void (*) (WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533*, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, (&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}

IL_00b7:
	{
		// awaiter.SourceOnCompleted(state =>
		// {
		//     using (var t = (StateTuple<WhenAnyPromise<T1, T2, T3>, UniTask<T3>.Awaiter>)state)
		//     {
		//         TryInvokeContinuationT3(t.Item1, t.Item2);
		//     }
		// }, StateTuple.Create(this, awaiter));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_20 = ((U3CU3Ec_t542F3782E64D6E82CA4D5300030BE484F6C2B81A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_2_3;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_21 = L_20;
		G_B13_0 = L_21;
		G_B13_1 = (&V_2);
		if (L_21)
		{
			G_B14_0 = L_21;
			G_B14_1 = (&V_2);
			goto IL_00d8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		U3CU3Ec_t542F3782E64D6E82CA4D5300030BE484F6C2B81A* L_22 = ((U3CU3Ec_t542F3782E64D6E82CA4D5300030BE484F6C2B81A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_23, (RuntimeObject*)L_22, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 17)), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_24 = L_23;
		((U3CU3Ec_t542F3782E64D6E82CA4D5300030BE484F6C2B81A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_2_3 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t542F3782E64D6E82CA4D5300030BE484F6C2B81A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->___U3CU3E9__2_2_3), (void*)L_24);
		G_B14_0 = L_24;
		G_B14_1 = G_B13_1;
	}

IL_00d8:
	{
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_25 = V_2;
		StateTuple_2_t60384B8B6BB14758764DC973AA9F9FAB7C8A4039* L_26;
		L_26 = ((  StateTuple_2_t60384B8B6BB14758764DC973AA9F9FAB7C8A4039* (*) (WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533*, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		Awaiter_SourceOnCompleted_m5CF1681957BDC088E9F9B1405109662ECBFDA143_inline(G_B14_1, G_B14_0, (RuntimeObject*)L_26, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Object,System.Object,System.Object>::TryInvokeContinuationT1(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<T1,T2,T3>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T1>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_3_TryInvokeContinuationT1_m9CE197003D6B73441422580A2658603E57D3FAC9_gshared (WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533* ___self0, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* ___awaiter1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	Exception_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* L_0 = ___awaiter1;
		RuntimeObject* L_1;
		L_1 = Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		V_0 = L_1;
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533* L_2 = ___self0;
		NullCheck(L_2);
		UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* L_3 = (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330*)(&L_2->___core_1);
		Exception_t* L_4 = V_1;
		bool L_5;
		L_5 = UniTaskCompletionSourceCore_1_TrySetException_m70DA778433D11FF4DEEE024C358522EC3350C55D(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004c;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533* L_6 = ___self0;
		NullCheck(L_6);
		int32_t* L_7 = (int32_t*)(&L_6->___completedCount_0);
		int32_t L_8;
		L_8 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_7, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_004c;
		}
	}
	{
		// self.core.TrySetResult((0, result, default, default));
		WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533* L_9 = ___self0;
		NullCheck(L_9);
		UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* L_10 = (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330*)(&L_9->___core_1);
		RuntimeObject* L_11 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_2;
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_13 = V_3;
		ValueTuple_4_t3C73E527194858099D3E19DE8DE04DE29E44B50C L_14;
		memset((&L_14), 0, sizeof(L_14));
		ValueTuple_4__ctor_mFF8FF8A49A27E3FC2135D0F54A400D967DD4733A((&L_14), 0, L_11, L_12, L_13, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		bool L_15;
		L_15 = UniTaskCompletionSourceCore_1_TrySetResult_mCF0314EB4F0D46C11D29325738F008F4BB0BFDC2(L_10, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Object,System.Object,System.Object>::TryInvokeContinuationT2(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<T1,T2,T3>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_3_TryInvokeContinuationT2_m4B76F498DA0095341E9385FA5A078F70721B59A3_gshared (WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533* ___self0, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* ___awaiter1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	Exception_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* L_0 = ___awaiter1;
		RuntimeObject* L_1;
		L_1 = Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		V_0 = L_1;
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533* L_2 = ___self0;
		NullCheck(L_2);
		UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* L_3 = (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330*)(&L_2->___core_1);
		Exception_t* L_4 = V_1;
		bool L_5;
		L_5 = UniTaskCompletionSourceCore_1_TrySetException_m70DA778433D11FF4DEEE024C358522EC3350C55D(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004c;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533* L_6 = ___self0;
		NullCheck(L_6);
		int32_t* L_7 = (int32_t*)(&L_6->___completedCount_0);
		int32_t L_8;
		L_8 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_7, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_004c;
		}
	}
	{
		// self.core.TrySetResult((1, default, result, default));
		WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533* L_9 = ___self0;
		NullCheck(L_9);
		UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* L_10 = (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330*)(&L_9->___core_1);
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		RuntimeObject* L_12 = V_0;
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_13 = V_3;
		ValueTuple_4_t3C73E527194858099D3E19DE8DE04DE29E44B50C L_14;
		memset((&L_14), 0, sizeof(L_14));
		ValueTuple_4__ctor_mFF8FF8A49A27E3FC2135D0F54A400D967DD4733A((&L_14), 1, L_11, L_12, L_13, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		bool L_15;
		L_15 = UniTaskCompletionSourceCore_1_TrySetResult_mCF0314EB4F0D46C11D29325738F008F4BB0BFDC2(L_10, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Object,System.Object,System.Object>::TryInvokeContinuationT3(Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<T1,T2,T3>,Cysharp.Threading.Tasks.UniTask`1/Awaiter<T3>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_3_TryInvokeContinuationT3_mDB367F0DFB65ECBEBDF70A99F59E93A2948D7BB0_gshared (WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533* ___self0, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* ___awaiter1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	Exception_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// result = awaiter.GetResult();
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* L_0 = ___awaiter1;
		RuntimeObject* L_1;
		L_1 = Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		V_0 = L_1;
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.core.TrySetException(ex);
		WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533* L_2 = ___self0;
		NullCheck(L_2);
		UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* L_3 = (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330*)(&L_2->___core_1);
		Exception_t* L_4 = V_1;
		bool L_5;
		L_5 = UniTaskCompletionSourceCore_1_TrySetException_m70DA778433D11FF4DEEE024C358522EC3350C55D(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004c;
	}// end catch (depth: 1)

IL_0019:
	{
		// if (Interlocked.Increment(ref self.completedCount) == 1)
		WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533* L_6 = ___self0;
		NullCheck(L_6);
		int32_t* L_7 = (int32_t*)(&L_6->___completedCount_0);
		int32_t L_8;
		L_8 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_7, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_004c;
		}
	}
	{
		// self.core.TrySetResult((2, default, default, result));
		WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533* L_9 = ___self0;
		NullCheck(L_9);
		UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* L_10 = (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330*)(&L_9->___core_1);
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_12 = V_3;
		RuntimeObject* L_13 = V_0;
		ValueTuple_4_t3C73E527194858099D3E19DE8DE04DE29E44B50C L_14;
		memset((&L_14), 0, sizeof(L_14));
		ValueTuple_4__ctor_mFF8FF8A49A27E3FC2135D0F54A400D967DD4733A((&L_14), 2, L_11, L_12, L_13, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		bool L_15;
		L_15 = UniTaskCompletionSourceCore_1_TrySetResult_mCF0314EB4F0D46C11D29325738F008F4BB0BFDC2(L_10, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.ValueTuple`4<System.Int32,T1,T2,T3> Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Object,System.Object,System.Object>::GetResult(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_4_t3C73E527194858099D3E19DE8DE04DE29E44B50C WhenAnyPromise_3_GetResult_m9C0DB4F3723CE548CE0DB2B1729D3BA86934B81F_gshared (WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533* __this, int16_t ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65((RuntimeObject*)__this, NULL);
		// return core.GetResult(token);
		UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* L_0 = (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330*)(&__this->___core_1);
		int16_t L_1 = ___token0;
		ValueTuple_4_t3C73E527194858099D3E19DE8DE04DE29E44B50C L_2;
		L_2 = UniTaskCompletionSourceCore_1_GetResult_m8010D7630E8CE8A00720B5D6368248CCF1D3BE61_inline(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return L_2;
	}
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Object,System.Object,System.Object>::GetStatus(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WhenAnyPromise_3_GetStatus_m71A238B2D0AE4E334A6482F50758FFFE45DCDE26_gshared (WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533* __this, int16_t ___token0, const RuntimeMethod* method) 
{
	{
		// return core.GetStatus(token);
		UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* L_0 = (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330*)(&__this->___core_1);
		int16_t L_1 = ___token0;
		int32_t L_2;
		L_2 = UniTaskCompletionSourceCore_1_GetStatus_mD8828EA793CF6B08AF60473597E7C41506F4FD5E_inline(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_2;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Object,System.Object,System.Object>::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_3_OnCompleted_mAF2999573CC5ECA3D5A05A68E3D3C81890A777C5_gshared (WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, int16_t ___token2, const RuntimeMethod* method) 
{
	{
		// core.OnCompleted(continuation, state, token);
		UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* L_0 = (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330*)(&__this->___core_1);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = ___continuation0;
		RuntimeObject* L_2 = ___state1;
		int16_t L_3 = ___token2;
		UniTaskCompletionSourceCore_1_OnCompleted_m9F6C186F4CF9F3CEC2138912F6C9E7C9227DD686_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Object,System.Object,System.Object>::UnsafeGetStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WhenAnyPromise_3_UnsafeGetStatus_m10626CC9FE6D53A2DEAC885A5418EF7832E9E79E_gshared (WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533* __this, const RuntimeMethod* method) 
{
	{
		// return core.UnsafeGetStatus();
		UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* L_0 = (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330*)(&__this->___core_1);
		int32_t L_1;
		L_1 = UniTaskCompletionSourceCore_1_UnsafeGetStatus_mE69870967002C8CD4F88F4CAE0199FAC97478581_inline(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_1;
	}
}
// System.Void Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<System.Object,System.Object,System.Object>::Cysharp.Threading.Tasks.IUniTaskSource.GetResult(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAnyPromise_3_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m3914BE4FC91CD5C3E4DC1D0B9D73B451262D616D_gshared (WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533* __this, int16_t ___token0, const RuntimeMethod* method) 
{
	{
		// GetResult(token);
		int16_t L_0 = ___token0;
		ValueTuple_4_t3C73E527194858099D3E19DE8DE04DE29E44B50C L_1;
		L_1 = ((  ValueTuple_4_t3C73E527194858099D3E19DE8DE04DE29E44B50C (*) (WhenAnyPromise_3_t4836D2C68F592FFE956ABA7AF358CB75AF745533*, int16_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mC17BAA23BA92C7455512FDA5B1618C6D2B54ACA2_gshared (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereArrayIterator_1_Clone_m23B21F0E17F85746DFAF09C90772262DF3B707AF_gshared (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* L_2 = (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m205D669337F73902F61F7BBFD6165B9005890564_gshared (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->___source_3;
		int32_t L_2 = (int32_t)__this->___index_5;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = (int32_t)__this->___index_5;
		__this->___index_5 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_6 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_7 = V_0;
		NullCheck(L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_9 = V_0;
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->___index_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->___source_3;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(11 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_m00D679C5996A876F2AF50976C1F93D89F8F42C62_gshared (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = ___predicate0;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_3;
		L_3 = ((  Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* L_4 = (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_4);
		((  void (*) (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.LowLevel.PlayerLoopSystem>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_m1C57CC91AE53B7ED6FB71FB822B8C1480B667E73_gshared (WhereArrayIterator_1_t6231D220871B84114C148960F57DC2479C42909F* __this, PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* ___source0, Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* ___predicate1, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.LowLevel.PlayerLoopSystem>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5* WhereArrayIterator_1_Clone_m8216C67382F93688B62AAAEC68CFB5B0F9224793_gshared (WhereArrayIterator_1_t6231D220871B84114C148960F57DC2479C42909F* __this, const RuntimeMethod* method) 
{
	{
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_0 = (PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D*)__this->___source_3;
		Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* L_1 = (Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*)__this->___predicate_4;
		WhereArrayIterator_1_t6231D220871B84114C148960F57DC2479C42909F* L_2 = (WhereArrayIterator_1_t6231D220871B84114C148960F57DC2479C42909F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (WhereArrayIterator_1_t6231D220871B84114C148960F57DC2479C42909F*, PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D*, Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.LowLevel.PlayerLoopSystem>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m4E5BBC61C72AC4A76900293E5FB7F2D7B39F8B47_gshared (WhereArrayIterator_1_t6231D220871B84114C148960F57DC2479C42909F* __this, const RuntimeMethod* method) 
{
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this)->___state_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_1 = (PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D*)__this->___source_3;
		int32_t L_2 = (int32_t)__this->___index_5;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = (int32_t)__this->___index_5;
		__this->___index_5 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* L_6 = (Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*)__this->___predicate_4;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_7 = V_0;
		NullCheck(L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_9 = V_0;
		((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this)->___current_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this)->___current_2))->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this)->___current_2))->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this)->___current_2))->___updateDelegate_2), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->___index_5;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_11 = (PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D*)__this->___source_3;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this);
		VirtualActionInvoker0::Invoke(11 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.LowLevel.PlayerLoopSystem>::Dispose() */, (Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.LowLevel.PlayerLoopSystem>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_mDCA1B75D2B23CF4D8EFFBCCD52B55777B979B459_gshared (WhereArrayIterator_1_t6231D220871B84114C148960F57DC2479C42909F* __this, Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* ___predicate0, const RuntimeMethod* method) 
{
	{
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_0 = (PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D*)__this->___source_3;
		Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* L_1 = (Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*)__this->___predicate_4;
		Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* L_2 = ___predicate0;
		Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* L_3;
		L_3 = ((  Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* (*) (Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*, Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		WhereArrayIterator_1_t6231D220871B84114C148960F57DC2479C42909F* L_4 = (WhereArrayIterator_1_t6231D220871B84114C148960F57DC2479C42909F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_4);
		((  void (*) (WhereArrayIterator_1_t6231D220871B84114C148960F57DC2479C42909F*, PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D*, Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereEnumerableIterator_1_Clone_m25DBF44FABBFE76AB4314BD7F62334FE2A74F5CA_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_2 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m7EB3C00CC0ED06056CF70FE322BF44A93F0C4136_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_5;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___enumerator_5;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m7F8C3A8E4FC2835971FF35C1F4C51A061483BEDD_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___source_3;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		__this->___enumerator_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)L_4);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->___enumerator_5;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->___enumerator_5;
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(11 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m48ED4EDDA686615E779F1400A17479B243C85100_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = ___predicate0;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_3;
		L_3 = ((  Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_4 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_4);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.LowLevel.PlayerLoopSystem>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8B955BCA6F751E2E1C64E3C4C7615E7D55F83C37_gshared (WhereEnumerableIterator_1_tA0D618D4EA7801FF9CD22AE1C91E2DC17F8DC7C8* __this, RuntimeObject* ___source0, Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* ___predicate1, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.LowLevel.PlayerLoopSystem>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5* WhereEnumerableIterator_1_Clone_m1A2F1D30894C4C8AE083AA3A2EC1388556C8C286_gshared (WhereEnumerableIterator_1_tA0D618D4EA7801FF9CD22AE1C91E2DC17F8DC7C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_3;
		Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* L_1 = (Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*)__this->___predicate_4;
		WhereEnumerableIterator_1_tA0D618D4EA7801FF9CD22AE1C91E2DC17F8DC7C8* L_2 = (WhereEnumerableIterator_1_tA0D618D4EA7801FF9CD22AE1C91E2DC17F8DC7C8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (WhereEnumerableIterator_1_tA0D618D4EA7801FF9CD22AE1C91E2DC17F8DC7C8*, RuntimeObject*, Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.LowLevel.PlayerLoopSystem>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m12FEACE38B967751E2B2CCF1B3B38C953204CCDA_gshared (WhereEnumerableIterator_1_tA0D618D4EA7801FF9CD22AE1C91E2DC17F8DC7C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_5;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___enumerator_5;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this);
		((  void (*) (Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.LowLevel.PlayerLoopSystem>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m3B24DBC1C5DEA3149816D046AD8E708AA915D729_gshared (WhereEnumerableIterator_1_tA0D618D4EA7801FF9CD22AE1C91E2DC17F8DC7C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___source_3;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.LowLevel.PlayerLoopSystem>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		__this->___enumerator_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)L_4);
		((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this)->___state_1 = 2;
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->___enumerator_5;
		NullCheck(L_5);
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_6;
		L_6 = InterfaceFuncInvoker0< PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.LowLevel.PlayerLoopSystem>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* L_7 = (Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*)__this->___predicate_4;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_10 = V_1;
		((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this)->___current_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this)->___current_2))->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this)->___current_2))->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this)->___current_2))->___updateDelegate_2), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->___enumerator_5;
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this);
		VirtualActionInvoker0::Invoke(11 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.LowLevel.PlayerLoopSystem>::Dispose() */, (Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.LowLevel.PlayerLoopSystem>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m17BC9A963B8CDE24E0750302057B949B873946D0_gshared (WhereEnumerableIterator_1_tA0D618D4EA7801FF9CD22AE1C91E2DC17F8DC7C8* __this, Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* ___predicate0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_3;
		Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* L_1 = (Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*)__this->___predicate_4;
		Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* L_2 = ___predicate0;
		Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* L_3;
		L_3 = ((  Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* (*) (Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*, Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		WhereEnumerableIterator_1_tA0D618D4EA7801FF9CD22AE1C91E2DC17F8DC7C8* L_4 = (WhereEnumerableIterator_1_tA0D618D4EA7801FF9CD22AE1C91E2DC17F8DC7C8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_4);
		((  void (*) (WhereEnumerableIterator_1_tA0D618D4EA7801FF9CD22AE1C91E2DC17F8DC7C8*, RuntimeObject*, Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mEF8F62B9078E538C1DC46BCB876C2AC5B29EA73B_gshared (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereListIterator_1_Clone_mB7087945B135AFA9D70F30479082AD370DDDB66A_gshared (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* L_2 = (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mEE70CAE79424880884D3CD6947167DEDB297FB47_gshared (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_5))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_5))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_5);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_11 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_5);
		bool L_12;
		L_12 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(11 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_mD1D1F307DE1E555A5F7237BCA2C32947BCF6A14D_gshared (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = ___predicate0;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_3;
		L_3 = ((  Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* L_4 = (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_4);
		((  void (*) (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereListIterator`1<UnityEngine.LowLevel.PlayerLoopSystem>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mAE63FC161959863AE0A9DACA5FC683E2B8448600_gshared (WhereListIterator_1_t758114B160DB8D0A2FAD2AB6D95ABBFFA378664A* __this, List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* ___source0, Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* ___predicate1, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<UnityEngine.LowLevel.PlayerLoopSystem>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5* WhereListIterator_1_Clone_m676F883A3C0A8B58A58A500C79D3A8AB872F332E_gshared (WhereListIterator_1_t758114B160DB8D0A2FAD2AB6D95ABBFFA378664A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* L_0 = (List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52*)__this->___source_3;
		Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* L_1 = (Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*)__this->___predicate_4;
		WhereListIterator_1_t758114B160DB8D0A2FAD2AB6D95ABBFFA378664A* L_2 = (WhereListIterator_1_t758114B160DB8D0A2FAD2AB6D95ABBFFA378664A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (WhereListIterator_1_t758114B160DB8D0A2FAD2AB6D95ABBFFA378664A*, List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52*, Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<UnityEngine.LowLevel.PlayerLoopSystem>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_m9A082C3EF2D14A32F8CC2A286F29785043DB4299_gshared (WhereListIterator_1_t758114B160DB8D0A2FAD2AB6D95ABBFFA378664A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* L_3 = (List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tB025B2FCAB9376692902C91754C98265C07AEA9A L_4;
		L_4 = ((  Enumerator_tB025B2FCAB9376692902C91754C98265C07AEA9A (*) (List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_5))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_5))->____current_3))->___type_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_5))->____current_3))->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_5))->____current_3))->___updateDelegate_2), (void*)NULL);
		#endif
		((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this)->___state_1 = 2;
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tB025B2FCAB9376692902C91754C98265C07AEA9A* L_5 = (Enumerator_tB025B2FCAB9376692902C91754C98265C07AEA9A*)(&__this->___enumerator_5);
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_6;
		L_6 = Enumerator_get_Current_m0B4ED9AF252261F8FAEF61A9A59B085B4CE88528_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* L_7 = (Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*)__this->___predicate_4;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_10 = V_1;
		((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this)->___current_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this)->___current_2))->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this)->___current_2))->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this)->___current_2))->___updateDelegate_2), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tB025B2FCAB9376692902C91754C98265C07AEA9A* L_11 = (Enumerator_tB025B2FCAB9376692902C91754C98265C07AEA9A*)(&__this->___enumerator_5);
		bool L_12;
		L_12 = Enumerator_MoveNext_m8323C42D98FCDA16F05D5351131455C3DD40C66B(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this);
		VirtualActionInvoker0::Invoke(11 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.LowLevel.PlayerLoopSystem>::Dispose() */, (Iterator_1_t90E419394494C38051F176EB657B6E351726C1A5*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<UnityEngine.LowLevel.PlayerLoopSystem>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m196ECB86EECD6F7A891CC9B0CB45E42883BC1FEB_gshared (WhereListIterator_1_t758114B160DB8D0A2FAD2AB6D95ABBFFA378664A* __this, Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* ___predicate0, const RuntimeMethod* method) 
{
	{
		List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52* L_0 = (List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52*)__this->___source_3;
		Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* L_1 = (Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*)__this->___predicate_4;
		Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* L_2 = ___predicate0;
		Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* L_3;
		L_3 = ((  Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF* (*) (Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*, Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		WhereListIterator_1_t758114B160DB8D0A2FAD2AB6D95ABBFFA378664A* L_4 = (WhereListIterator_1_t758114B160DB8D0A2FAD2AB6D95ABBFFA378664A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_4);
		((  void (*) (WhereListIterator_1_t758114B160DB8D0A2FAD2AB6D95ABBFFA378664A*, List_1_tB751FDCEDAE7A97430AD924824F5D0193A720E52*, Func_2_t92F44173C14E7022E392A8FEA4374C3CD24578EF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984 UniTask_1_GetAwaiter_mB38AE50A1A9C6738299E949D09E98B43E029C9BD_gshared_inline (UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF* __this, const RuntimeMethod* method) 
{
	{
		// return new Awaiter(this);
		Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m55018DFFA4D8602D121D61E41B0F1F628B2D802D_inline((&L_0), __this, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m033ECB1735F07F30D1A08C495BBFAF9D7BD19BAE_gshared_inline (Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF* L_0 = (UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_mC5A408BF83D014982C385E05BB60549A2CBE00DC_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_mD87C80282CB2B843B7B3BBEAFE89AB76E74D75BC_gshared_inline (Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF* L_0 = (UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		// continuation(state);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___continuation0;
		RuntimeObject* L_4 = ___state1;
		NullCheck(L_3);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_3, L_4, NULL);
		return;
	}

IL_0017:
	{
		// s.OnCompleted(continuation, state, task.token);
		RuntimeObject* L_5 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = ___continuation0;
		RuntimeObject* L_7 = ___state1;
		UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF* L_8 = (UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF*)(&__this->___task_0);
		int16_t L_9 = (int16_t)L_8->___token_2;
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_5, L_6, L_7, L_9);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t57195AB5181DC841249C584802FC1207B8517391 UniTask_1_GetAwaiter_mA50969136777FAA638B8BF5AD7DC267CC4AD0501_gshared_inline (UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2* __this, const RuntimeMethod* method) 
{
	{
		// return new Awaiter(this);
		Awaiter_t57195AB5181DC841249C584802FC1207B8517391 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m7855A5D62011FFBD3484B4897C533C60E6DC2EAE_inline((&L_0), __this, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mBDD104327707ECBF683EAD1B9DBC38FD16FA55AE_gshared_inline (Awaiter_t57195AB5181DC841249C584802FC1207B8517391* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2* L_0 = (UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m671AD37246C069F9C9E02F152848BEACB67B8356_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m3725FF5E0AC8CF789C3F06B867A39B3F693CF699_gshared_inline (Awaiter_t57195AB5181DC841249C584802FC1207B8517391* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2* L_0 = (UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		// continuation(state);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___continuation0;
		RuntimeObject* L_4 = ___state1;
		NullCheck(L_3);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_3, L_4, NULL);
		return;
	}

IL_0017:
	{
		// s.OnCompleted(continuation, state, task.token);
		RuntimeObject* L_5 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = ___continuation0;
		RuntimeObject* L_7 = ___state1;
		UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2* L_8 = (UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2*)(&__this->___task_0);
		int16_t L_9 = (int16_t)L_8->___token_2;
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_5, L_6, L_7, L_9);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728 UniTask_1_GetAwaiter_mC8ADF30FE1E74C06C1D9B53FAC76DD6501F7030F_gshared_inline (UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F* __this, const RuntimeMethod* method) 
{
	{
		// return new Awaiter(this);
		Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m489A65BDC8DF6A9218CD5C5EB67A6F90BA1BA068_inline((&L_0), __this, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m43221ACA0B7A6CD6D6F4DF0A71CD585F49CC424B_gshared_inline (Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F* L_0 = (UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m8F3A992141E5A88594A1F69E3B41CE38A4A2A6F5_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m5ED3FEFA36C9466C434E00141C3EACF71F130CB2_gshared_inline (Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F* L_0 = (UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		// continuation(state);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___continuation0;
		RuntimeObject* L_4 = ___state1;
		NullCheck(L_3);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_3, L_4, NULL);
		return;
	}

IL_0017:
	{
		// s.OnCompleted(continuation, state, task.token);
		RuntimeObject* L_5 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = ___continuation0;
		RuntimeObject* L_7 = ___state1;
		UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F* L_8 = (UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F*)(&__this->___task_0);
		int16_t L_9 = (int16_t)L_8->___token_2;
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_5, L_6, L_7, L_9);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133 Awaiter_GetResult_m350EF3476023469EF276C3D635E1811953D8D0FC_gshared_inline (Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF* L_0 = (UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return task.result;
		UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF* L_3 = (UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF*)(&__this->___task_0);
		ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133 L_4 = (ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133)L_3->___result_1;
		return L_4;
	}

IL_001b:
	{
		// return s.GetResult(task.token);
		RuntimeObject* L_5 = V_0;
		UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF* L_6 = (UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF*)(&__this->___task_0);
		int16_t L_7 = (int16_t)L_6->___token_2;
		NullCheck(L_5);
		ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133 L_8;
		L_8 = InterfaceFuncInvoker1< ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133, int16_t >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskSource`1<System.ValueTuple`2<System.Boolean,System.Int32>>::GetResult(System.Int16) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_5, L_7);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D Awaiter_GetResult_mF62E85E9AD2B8CA9A42D14052E7F9219AC39F0B2_gshared_inline (Awaiter_t57195AB5181DC841249C584802FC1207B8517391* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2* L_0 = (UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return task.result;
		UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2* L_3 = (UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2*)(&__this->___task_0);
		ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D L_4 = (ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D)L_3->___result_1;
		return L_4;
	}

IL_001b:
	{
		// return s.GetResult(task.token);
		RuntimeObject* L_5 = V_0;
		UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2* L_6 = (UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2*)(&__this->___task_0);
		int16_t L_7 = (int16_t)L_6->___token_2;
		NullCheck(L_5);
		ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D L_8;
		L_8 = InterfaceFuncInvoker1< ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D, int16_t >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskSource`1<System.ValueTuple`2<System.Boolean,System.Single>>::GetResult(System.Int16) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_5, L_7);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 Awaiter_GetResult_m6D0F17AFAD47EC192AFB978715FF9F3E47445DF4_gshared_inline (Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F* L_0 = (UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return task.result;
		UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F* L_3 = (UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F*)(&__this->___task_0);
		ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 L_4 = (ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798)L_3->___result_1;
		return L_4;
	}

IL_001b:
	{
		// return s.GetResult(task.token);
		RuntimeObject* L_5 = V_0;
		UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F* L_6 = (UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F*)(&__this->___task_0);
		int16_t L_7 = (int16_t)L_6->___token_2;
		NullCheck(L_5);
		ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 L_8;
		L_8 = InterfaceFuncInvoker1< ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798, int16_t >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskSource`1<System.ValueTuple`2<System.Boolean,System.Object>>::GetResult(System.Int16) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_5, L_7);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_4_t3FE437EA7C6253FC3BC11C9FC835DFB1A5A67FC6 UniTaskCompletionSourceCore_1_GetResult_mA01865AFE9E5373DBCF52E45EB46B76680003E68_gshared_inline (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* __this, int16_t ___token0, const RuntimeMethod* method) 
{
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_0 = NULL;
	ExceptionHolder_t877D929A153D46C3BDA043B4058034AF85FB73B1* V_1 = NULL;
	{
		// ValidateToken(token);
		int16_t L_0 = ___token0;
		UniTaskCompletionSourceCore_1_ValidateToken_m68FEFF94AE5EF0A6392B86BAC2868372ED92E5B5_inline(__this, L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// if (completedCount == 0)
		int32_t L_1 = (int32_t)__this->___completedCount_4;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		// throw new InvalidOperationException("Not yet completed, UniTask only allow to use await.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8077B2599BD87177CC6CB3F9B32983C9C82BBD40)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_GetResult_mA01865AFE9E5373DBCF52E45EB46B76680003E68_RuntimeMethod_var)));
	}

IL_001a:
	{
		// if (error != null)
		RuntimeObject* L_3 = (RuntimeObject*)__this->___error_1;
		if (!L_3)
		{
			goto IL_005f;
		}
	}
	{
		// hasUnhandledError = false;
		__this->___hasUnhandledError_3 = (bool)0;
		// if (error is OperationCanceledException oce)
		RuntimeObject* L_4 = (RuntimeObject*)__this->___error_1;
		V_0 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_5 = V_0;
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// throw oce;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_GetResult_mA01865AFE9E5373DBCF52E45EB46B76680003E68_RuntimeMethod_var)));
	}

IL_003a:
	{
		// else if (error is ExceptionHolder eh)
		RuntimeObject* L_7 = (RuntimeObject*)__this->___error_1;
		V_1 = ((ExceptionHolder_t877D929A153D46C3BDA043B4058034AF85FB73B1*)IsInstClass((RuntimeObject*)L_7, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExceptionHolder_t877D929A153D46C3BDA043B4058034AF85FB73B1_il2cpp_TypeInfo_var))));
		ExceptionHolder_t877D929A153D46C3BDA043B4058034AF85FB73B1* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		// eh.GetException().Throw();
		ExceptionHolder_t877D929A153D46C3BDA043B4058034AF85FB73B1* L_9 = V_1;
		NullCheck(L_9);
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_10;
		L_10 = ExceptionHolder_GetException_m362D89AE3B04CF58E6567EEB499A88B9E6F62B38(L_9, NULL);
		NullCheck(L_10);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_10, NULL);
	}

IL_0054:
	{
		// throw new InvalidOperationException("Critical: invalid exception type was held.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral29722F82D7EAE8BE94D18EAAF9BD606DF87DCA5A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_GetResult_mA01865AFE9E5373DBCF52E45EB46B76680003E68_RuntimeMethod_var)));
	}

IL_005f:
	{
		// return result;
		ValueTuple_4_t3FE437EA7C6253FC3BC11C9FC835DFB1A5A67FC6 L_12 = (ValueTuple_4_t3FE437EA7C6253FC3BC11C9FC835DFB1A5A67FC6)__this->___result_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTaskCompletionSourceCore_1_GetStatus_mF86D2712AC9DE6D56B31A7702AAC54827B610D8E_gshared_inline (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* __this, int16_t ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ValidateToken(token);
		int16_t L_0 = ___token0;
		UniTaskCompletionSourceCore_1_ValidateToken_m68FEFF94AE5EF0A6392B86BAC2868372ED92E5B5_inline(__this, L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// return (continuation == null || (completedCount == 0)) ? UniTaskStatus.Pending
		//      : (error == null) ? UniTaskStatus.Succeeded
		//      : (error is OperationCanceledException) ? UniTaskStatus.Canceled
		//      : UniTaskStatus.Faulted;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)__this->___continuation_5;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___completedCount_4;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___error_1;
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->___error_1;
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002e;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002e:
	{
		return (int32_t)(3);
	}

IL_0030:
	{
		return (int32_t)(1);
	}

IL_0032:
	{
		return (int32_t)(0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTaskCompletionSourceCore_1_OnCompleted_m25E1DA22686DA0AFA1DC9CC0006952FDFF9622B4_gshared_inline (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, int16_t ___token2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCoreShared_tBCAF5BCBEE88E6E2892483CF035D941050102D44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (continuation == null)
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___continuation0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(continuation));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_OnCompleted_m25E1DA22686DA0AFA1DC9CC0006952FDFF9622B4_RuntimeMethod_var)));
	}

IL_000e:
	{
		// ValidateToken(token);
		int16_t L_2 = ___token2;
		UniTaskCompletionSourceCore_1_ValidateToken_m68FEFF94AE5EF0A6392B86BAC2868372ED92E5B5_inline(__this, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// object oldContinuation = this.continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)__this->___continuation_5;
		V_0 = (RuntimeObject*)L_3;
		// if (oldContinuation == null)
		RuntimeObject* L_4 = V_0;
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		// continuationState = state;
		RuntimeObject* L_5 = ___state1;
		__this->___continuationState_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___continuationState_6), (void*)L_5);
		// oldContinuation = Interlocked.CompareExchange(ref this.continuation, continuation, null);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_6 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->___continuation_5);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_7 = ___continuation0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*>(L_6, L_7, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = (RuntimeObject*)L_8;
	}

IL_0034:
	{
		// if (oldContinuation != null)
		RuntimeObject* L_9 = V_0;
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		// if (!ReferenceEquals(oldContinuation, UniTaskCompletionSourceCoreShared.s_sentinel))
		RuntimeObject* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UniTaskCompletionSourceCoreShared_tBCAF5BCBEE88E6E2892483CF035D941050102D44_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = ((UniTaskCompletionSourceCoreShared_tBCAF5BCBEE88E6E2892483CF035D941050102D44_StaticFields*)il2cpp_codegen_static_fields_for(UniTaskCompletionSourceCoreShared_tBCAF5BCBEE88E6E2892483CF035D941050102D44_il2cpp_TypeInfo_var))->___s_sentinel_0;
		if ((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_11)))
		{
			goto IL_004a;
		}
	}
	{
		// throw new InvalidOperationException("Already continuation registered, can not await twice or get Status after await.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_12 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFDAE6AD21359A52E0DF3748A30C82C53BDD165D7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_OnCompleted_m25E1DA22686DA0AFA1DC9CC0006952FDFF9622B4_RuntimeMethod_var)));
	}

IL_004a:
	{
		// continuation(state);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_13 = ___continuation0;
		RuntimeObject* L_14 = ___state1;
		NullCheck(L_13);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_13, L_14, NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTaskCompletionSourceCore_1_UnsafeGetStatus_m9CCEFEF77DCDFF79538158D7F0148D6C12CFDA91_gshared_inline (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (continuation == null || (completedCount == 0)) ? UniTaskStatus.Pending
		//      : (error == null) ? UniTaskStatus.Succeeded
		//      : (error is OperationCanceledException) ? UniTaskStatus.Canceled
		//      : UniTaskStatus.Faulted;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)__this->___continuation_5;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->___completedCount_4;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->___error_1;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___error_1;
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_3, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_0027;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0027:
	{
		return (int32_t)(3);
	}

IL_0029:
	{
		return (int32_t)(1);
	}

IL_002b:
	{
		return (int32_t)(0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t8953594D03299DE782894F4A865CED79F2504266 UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_gshared_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method) 
{
	{
		// return new Awaiter(this);
		Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m2D382159CB5D690EEEDB435E6183DBDBD9560CA3_inline((&L_0), __this, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* L_0 = (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m688D534E5DE535F713C9D2C84744BB51F95416F5_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_mA366D7291F82B8BAE1F9494957301A0BA2803037_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* L_0 = (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		// continuation(state);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___continuation0;
		RuntimeObject* L_4 = ___state1;
		NullCheck(L_3);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_3, L_4, NULL);
		return;
	}

IL_0017:
	{
		// s.OnCompleted(continuation, state, task.token);
		RuntimeObject* L_5 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = ___continuation0;
		RuntimeObject* L_7 = ___state1;
		UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* L_8 = (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*)(&__this->___task_0);
		int16_t L_9 = (int16_t)L_8->___token_2;
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_5, L_6, L_7, L_9);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_gshared_inline (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* __this, const RuntimeMethod* method) 
{
	{
		// return new Awaiter(this);
		Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m65B703CDA0E48F294713CCCF06A7B5AF705D8E1F_inline((&L_0), __this, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* L_0 = (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_mD1C383B359BDB954321BC6C44DA1631270CC29A6_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_mA6878346D7691E188C19F8FCDD0B650B3CB85D62_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* L_0 = (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		// continuation(state);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___continuation0;
		RuntimeObject* L_4 = ___state1;
		NullCheck(L_3);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_3, L_4, NULL);
		return;
	}

IL_0017:
	{
		// s.OnCompleted(continuation, state, task.token);
		RuntimeObject* L_5 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = ___continuation0;
		RuntimeObject* L_7 = ___state1;
		UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* L_8 = (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*)(&__this->___task_0);
		int16_t L_9 = (int16_t)L_8->___token_2;
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_5, L_6, L_7, L_9);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) 
{
	{
		// return new Awaiter(this);
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_inline((&L_0), __this, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m5CF1681957BDC088E9F9B1405109662ECBFDA143_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		// continuation(state);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___continuation0;
		RuntimeObject* L_4 = ___state1;
		NullCheck(L_3);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_3, L_4, NULL);
		return;
	}

IL_0017:
	{
		// s.OnCompleted(continuation, state, task.token);
		RuntimeObject* L_5 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = ___continuation0;
		RuntimeObject* L_7 = ___state1;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_8 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		int16_t L_9 = (int16_t)L_8->___token_2;
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_5, L_6, L_7, L_9);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* L_0 = (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return task.result;
		UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* L_3 = (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*)(&__this->___task_0);
		int32_t L_4 = (int32_t)L_3->___result_1;
		return L_4;
	}

IL_001b:
	{
		// return s.GetResult(task.token);
		RuntimeObject* L_5 = V_0;
		UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* L_6 = (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*)(&__this->___task_0);
		int16_t L_7 = (int16_t)L_6->___token_2;
		NullCheck(L_5);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskSource`1<System.Int32>::GetResult(System.Int16) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_5, L_7);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* L_0 = (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return task.result;
		UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* L_3 = (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*)(&__this->___task_0);
		float L_4 = (float)L_3->___result_1;
		return L_4;
	}

IL_001b:
	{
		// return s.GetResult(task.token);
		RuntimeObject* L_5 = V_0;
		UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* L_6 = (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*)(&__this->___task_0);
		int16_t L_7 = (int16_t)L_6->___token_2;
		NullCheck(L_5);
		float L_8;
		L_8 = InterfaceFuncInvoker1< float, int16_t >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskSource`1<System.Single>::GetResult(System.Int16) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_5, L_7);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return task.result;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_3 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		RuntimeObject* L_4 = (RuntimeObject*)L_3->___result_1;
		return L_4;
	}

IL_001b:
	{
		// return s.GetResult(task.token);
		RuntimeObject* L_5 = V_0;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_6 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		int16_t L_7 = (int16_t)L_6->___token_2;
		NullCheck(L_5);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, int16_t >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskSource`1<System.Object>::GetResult(System.Int16) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_5, L_7);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_4_tAFA5F2488ADE7955A7EB2CCD2A8A216E0D7960BC UniTaskCompletionSourceCore_1_GetResult_mA2D90F80A0171F6C25F61CE4AF196BB0C0902283_gshared_inline (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* __this, int16_t ___token0, const RuntimeMethod* method) 
{
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_0 = NULL;
	ExceptionHolder_t877D929A153D46C3BDA043B4058034AF85FB73B1* V_1 = NULL;
	{
		// ValidateToken(token);
		int16_t L_0 = ___token0;
		UniTaskCompletionSourceCore_1_ValidateToken_m36CD0655A19E8FF13A47089C9B22677D08273B9F_inline(__this, L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// if (completedCount == 0)
		int32_t L_1 = (int32_t)__this->___completedCount_4;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		// throw new InvalidOperationException("Not yet completed, UniTask only allow to use await.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8077B2599BD87177CC6CB3F9B32983C9C82BBD40)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_GetResult_mA2D90F80A0171F6C25F61CE4AF196BB0C0902283_RuntimeMethod_var)));
	}

IL_001a:
	{
		// if (error != null)
		RuntimeObject* L_3 = (RuntimeObject*)__this->___error_1;
		if (!L_3)
		{
			goto IL_005f;
		}
	}
	{
		// hasUnhandledError = false;
		__this->___hasUnhandledError_3 = (bool)0;
		// if (error is OperationCanceledException oce)
		RuntimeObject* L_4 = (RuntimeObject*)__this->___error_1;
		V_0 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_5 = V_0;
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// throw oce;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_GetResult_mA2D90F80A0171F6C25F61CE4AF196BB0C0902283_RuntimeMethod_var)));
	}

IL_003a:
	{
		// else if (error is ExceptionHolder eh)
		RuntimeObject* L_7 = (RuntimeObject*)__this->___error_1;
		V_1 = ((ExceptionHolder_t877D929A153D46C3BDA043B4058034AF85FB73B1*)IsInstClass((RuntimeObject*)L_7, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExceptionHolder_t877D929A153D46C3BDA043B4058034AF85FB73B1_il2cpp_TypeInfo_var))));
		ExceptionHolder_t877D929A153D46C3BDA043B4058034AF85FB73B1* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		// eh.GetException().Throw();
		ExceptionHolder_t877D929A153D46C3BDA043B4058034AF85FB73B1* L_9 = V_1;
		NullCheck(L_9);
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_10;
		L_10 = ExceptionHolder_GetException_m362D89AE3B04CF58E6567EEB499A88B9E6F62B38(L_9, NULL);
		NullCheck(L_10);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_10, NULL);
	}

IL_0054:
	{
		// throw new InvalidOperationException("Critical: invalid exception type was held.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral29722F82D7EAE8BE94D18EAAF9BD606DF87DCA5A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_GetResult_mA2D90F80A0171F6C25F61CE4AF196BB0C0902283_RuntimeMethod_var)));
	}

IL_005f:
	{
		// return result;
		ValueTuple_4_tAFA5F2488ADE7955A7EB2CCD2A8A216E0D7960BC L_12 = (ValueTuple_4_tAFA5F2488ADE7955A7EB2CCD2A8A216E0D7960BC)__this->___result_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTaskCompletionSourceCore_1_GetStatus_mEFEB61D829DE1B223F3D54B0555FA271F3040727_gshared_inline (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* __this, int16_t ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ValidateToken(token);
		int16_t L_0 = ___token0;
		UniTaskCompletionSourceCore_1_ValidateToken_m36CD0655A19E8FF13A47089C9B22677D08273B9F_inline(__this, L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// return (continuation == null || (completedCount == 0)) ? UniTaskStatus.Pending
		//      : (error == null) ? UniTaskStatus.Succeeded
		//      : (error is OperationCanceledException) ? UniTaskStatus.Canceled
		//      : UniTaskStatus.Faulted;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)__this->___continuation_5;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___completedCount_4;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___error_1;
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->___error_1;
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002e;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002e:
	{
		return (int32_t)(3);
	}

IL_0030:
	{
		return (int32_t)(1);
	}

IL_0032:
	{
		return (int32_t)(0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTaskCompletionSourceCore_1_OnCompleted_m8E7502ABB3E54955A66BDDE40129CD126A3A05DE_gshared_inline (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, int16_t ___token2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCoreShared_tBCAF5BCBEE88E6E2892483CF035D941050102D44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (continuation == null)
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___continuation0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(continuation));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_OnCompleted_m8E7502ABB3E54955A66BDDE40129CD126A3A05DE_RuntimeMethod_var)));
	}

IL_000e:
	{
		// ValidateToken(token);
		int16_t L_2 = ___token2;
		UniTaskCompletionSourceCore_1_ValidateToken_m36CD0655A19E8FF13A47089C9B22677D08273B9F_inline(__this, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// object oldContinuation = this.continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)__this->___continuation_5;
		V_0 = (RuntimeObject*)L_3;
		// if (oldContinuation == null)
		RuntimeObject* L_4 = V_0;
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		// continuationState = state;
		RuntimeObject* L_5 = ___state1;
		__this->___continuationState_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___continuationState_6), (void*)L_5);
		// oldContinuation = Interlocked.CompareExchange(ref this.continuation, continuation, null);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_6 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->___continuation_5);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_7 = ___continuation0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*>(L_6, L_7, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = (RuntimeObject*)L_8;
	}

IL_0034:
	{
		// if (oldContinuation != null)
		RuntimeObject* L_9 = V_0;
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		// if (!ReferenceEquals(oldContinuation, UniTaskCompletionSourceCoreShared.s_sentinel))
		RuntimeObject* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UniTaskCompletionSourceCoreShared_tBCAF5BCBEE88E6E2892483CF035D941050102D44_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = ((UniTaskCompletionSourceCoreShared_tBCAF5BCBEE88E6E2892483CF035D941050102D44_StaticFields*)il2cpp_codegen_static_fields_for(UniTaskCompletionSourceCoreShared_tBCAF5BCBEE88E6E2892483CF035D941050102D44_il2cpp_TypeInfo_var))->___s_sentinel_0;
		if ((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_11)))
		{
			goto IL_004a;
		}
	}
	{
		// throw new InvalidOperationException("Already continuation registered, can not await twice or get Status after await.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_12 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFDAE6AD21359A52E0DF3748A30C82C53BDD165D7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_OnCompleted_m8E7502ABB3E54955A66BDDE40129CD126A3A05DE_RuntimeMethod_var)));
	}

IL_004a:
	{
		// continuation(state);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_13 = ___continuation0;
		RuntimeObject* L_14 = ___state1;
		NullCheck(L_13);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_13, L_14, NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTaskCompletionSourceCore_1_UnsafeGetStatus_m744D38512828709C6B27CCFAC57ECD657B679EC3_gshared_inline (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (continuation == null || (completedCount == 0)) ? UniTaskStatus.Pending
		//      : (error == null) ? UniTaskStatus.Succeeded
		//      : (error is OperationCanceledException) ? UniTaskStatus.Canceled
		//      : UniTaskStatus.Faulted;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)__this->___continuation_5;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->___completedCount_4;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->___error_1;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___error_1;
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_3, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_0027;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0027:
	{
		return (int32_t)(3);
	}

IL_0029:
	{
		return (int32_t)(1);
	}

IL_002b:
	{
		return (int32_t)(0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_4_t3C73E527194858099D3E19DE8DE04DE29E44B50C UniTaskCompletionSourceCore_1_GetResult_m8010D7630E8CE8A00720B5D6368248CCF1D3BE61_gshared_inline (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* __this, int16_t ___token0, const RuntimeMethod* method) 
{
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_0 = NULL;
	ExceptionHolder_t877D929A153D46C3BDA043B4058034AF85FB73B1* V_1 = NULL;
	{
		// ValidateToken(token);
		int16_t L_0 = ___token0;
		UniTaskCompletionSourceCore_1_ValidateToken_m7C8EDC14B5DB9091C851F0B0AF05FE0F5EB9E8D2_inline(__this, L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// if (completedCount == 0)
		int32_t L_1 = (int32_t)__this->___completedCount_4;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		// throw new InvalidOperationException("Not yet completed, UniTask only allow to use await.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8077B2599BD87177CC6CB3F9B32983C9C82BBD40)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_GetResult_m8010D7630E8CE8A00720B5D6368248CCF1D3BE61_RuntimeMethod_var)));
	}

IL_001a:
	{
		// if (error != null)
		RuntimeObject* L_3 = (RuntimeObject*)__this->___error_1;
		if (!L_3)
		{
			goto IL_005f;
		}
	}
	{
		// hasUnhandledError = false;
		__this->___hasUnhandledError_3 = (bool)0;
		// if (error is OperationCanceledException oce)
		RuntimeObject* L_4 = (RuntimeObject*)__this->___error_1;
		V_0 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_5 = V_0;
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// throw oce;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_GetResult_m8010D7630E8CE8A00720B5D6368248CCF1D3BE61_RuntimeMethod_var)));
	}

IL_003a:
	{
		// else if (error is ExceptionHolder eh)
		RuntimeObject* L_7 = (RuntimeObject*)__this->___error_1;
		V_1 = ((ExceptionHolder_t877D929A153D46C3BDA043B4058034AF85FB73B1*)IsInstClass((RuntimeObject*)L_7, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExceptionHolder_t877D929A153D46C3BDA043B4058034AF85FB73B1_il2cpp_TypeInfo_var))));
		ExceptionHolder_t877D929A153D46C3BDA043B4058034AF85FB73B1* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		// eh.GetException().Throw();
		ExceptionHolder_t877D929A153D46C3BDA043B4058034AF85FB73B1* L_9 = V_1;
		NullCheck(L_9);
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_10;
		L_10 = ExceptionHolder_GetException_m362D89AE3B04CF58E6567EEB499A88B9E6F62B38(L_9, NULL);
		NullCheck(L_10);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_10, NULL);
	}

IL_0054:
	{
		// throw new InvalidOperationException("Critical: invalid exception type was held.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral29722F82D7EAE8BE94D18EAAF9BD606DF87DCA5A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_GetResult_m8010D7630E8CE8A00720B5D6368248CCF1D3BE61_RuntimeMethod_var)));
	}

IL_005f:
	{
		// return result;
		ValueTuple_4_t3C73E527194858099D3E19DE8DE04DE29E44B50C L_12 = (ValueTuple_4_t3C73E527194858099D3E19DE8DE04DE29E44B50C)__this->___result_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTaskCompletionSourceCore_1_GetStatus_mD8828EA793CF6B08AF60473597E7C41506F4FD5E_gshared_inline (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* __this, int16_t ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ValidateToken(token);
		int16_t L_0 = ___token0;
		UniTaskCompletionSourceCore_1_ValidateToken_m7C8EDC14B5DB9091C851F0B0AF05FE0F5EB9E8D2_inline(__this, L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// return (continuation == null || (completedCount == 0)) ? UniTaskStatus.Pending
		//      : (error == null) ? UniTaskStatus.Succeeded
		//      : (error is OperationCanceledException) ? UniTaskStatus.Canceled
		//      : UniTaskStatus.Faulted;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)__this->___continuation_5;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___completedCount_4;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___error_1;
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->___error_1;
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002e;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002e:
	{
		return (int32_t)(3);
	}

IL_0030:
	{
		return (int32_t)(1);
	}

IL_0032:
	{
		return (int32_t)(0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTaskCompletionSourceCore_1_OnCompleted_m9F6C186F4CF9F3CEC2138912F6C9E7C9227DD686_gshared_inline (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation0, RuntimeObject* ___state1, int16_t ___token2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCoreShared_tBCAF5BCBEE88E6E2892483CF035D941050102D44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (continuation == null)
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___continuation0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(continuation));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_OnCompleted_m9F6C186F4CF9F3CEC2138912F6C9E7C9227DD686_RuntimeMethod_var)));
	}

IL_000e:
	{
		// ValidateToken(token);
		int16_t L_2 = ___token2;
		UniTaskCompletionSourceCore_1_ValidateToken_m7C8EDC14B5DB9091C851F0B0AF05FE0F5EB9E8D2_inline(__this, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// object oldContinuation = this.continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)__this->___continuation_5;
		V_0 = (RuntimeObject*)L_3;
		// if (oldContinuation == null)
		RuntimeObject* L_4 = V_0;
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		// continuationState = state;
		RuntimeObject* L_5 = ___state1;
		__this->___continuationState_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___continuationState_6), (void*)L_5);
		// oldContinuation = Interlocked.CompareExchange(ref this.continuation, continuation, null);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_6 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->___continuation_5);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_7 = ___continuation0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*>(L_6, L_7, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = (RuntimeObject*)L_8;
	}

IL_0034:
	{
		// if (oldContinuation != null)
		RuntimeObject* L_9 = V_0;
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		// if (!ReferenceEquals(oldContinuation, UniTaskCompletionSourceCoreShared.s_sentinel))
		RuntimeObject* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UniTaskCompletionSourceCoreShared_tBCAF5BCBEE88E6E2892483CF035D941050102D44_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = ((UniTaskCompletionSourceCoreShared_tBCAF5BCBEE88E6E2892483CF035D941050102D44_StaticFields*)il2cpp_codegen_static_fields_for(UniTaskCompletionSourceCoreShared_tBCAF5BCBEE88E6E2892483CF035D941050102D44_il2cpp_TypeInfo_var))->___s_sentinel_0;
		if ((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_11)))
		{
			goto IL_004a;
		}
	}
	{
		// throw new InvalidOperationException("Already continuation registered, can not await twice or get Status after await.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_12 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFDAE6AD21359A52E0DF3748A30C82C53BDD165D7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_OnCompleted_m9F6C186F4CF9F3CEC2138912F6C9E7C9227DD686_RuntimeMethod_var)));
	}

IL_004a:
	{
		// continuation(state);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_13 = ___continuation0;
		RuntimeObject* L_14 = ___state1;
		NullCheck(L_13);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_13, L_14, NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTaskCompletionSourceCore_1_UnsafeGetStatus_mE69870967002C8CD4F88F4CAE0199FAC97478581_gshared_inline (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (continuation == null || (completedCount == 0)) ? UniTaskStatus.Pending
		//      : (error == null) ? UniTaskStatus.Succeeded
		//      : (error is OperationCanceledException) ? UniTaskStatus.Canceled
		//      : UniTaskStatus.Faulted;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)__this->___continuation_5;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->___completedCount_4;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->___error_1;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___error_1;
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_3, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_0027;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0027:
	{
		return (int32_t)(3);
	}

IL_0029:
	{
		return (int32_t)(1);
	}

IL_002b:
	{
		return (int32_t)(0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F Enumerator_get_Current_m0B4ED9AF252261F8FAEF61A9A59B085B4CE88528_gshared_inline (Enumerator_tB025B2FCAB9376692902C91754C98265C07AEA9A* __this, const RuntimeMethod* method) 
{
	{
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_0 = (PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___status0, const RuntimeMethod* method) 
{
	{
		// return status != UniTaskStatus.Pending;
		int32_t L_0 = ___status0;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m55018DFFA4D8602D121D61E41B0F1F628B2D802D_gshared_inline (Awaiter_tCE970F1B1883B3D38EB80C2708212BF193791984* __this, UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF* ___task0, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF* L_0 = ___task0;
		UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF L_1 = (*(UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mC5A408BF83D014982C385E05BB60549A2CBE00DC_gshared_inline (UniTask_1_t76F4C4E2ED24812AAFC3C604D574F5DD43ADE1BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (source == null) ? UniTaskStatus.Succeeded : source.GetStatus(token);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		return L_3;
	}

IL_001a:
	{
		return (int32_t)(1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m7855A5D62011FFBD3484B4897C533C60E6DC2EAE_gshared_inline (Awaiter_t57195AB5181DC841249C584802FC1207B8517391* __this, UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2* ___task0, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2* L_0 = ___task0;
		UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2 L_1 = (*(UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m671AD37246C069F9C9E02F152848BEACB67B8356_gshared_inline (UniTask_1_t79D13388FD01700969F9FAD9EA25939607C1F2F2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (source == null) ? UniTaskStatus.Succeeded : source.GetStatus(token);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		return L_3;
	}

IL_001a:
	{
		return (int32_t)(1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m489A65BDC8DF6A9218CD5C5EB67A6F90BA1BA068_gshared_inline (Awaiter_t03D16ACB09DECA77CAE8D23A01A05F547E501728* __this, UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F* ___task0, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F* L_0 = ___task0;
		UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F L_1 = (*(UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___task_0))->___result_1))->___Item2_1), (void*)NULL);
		#endif
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m8F3A992141E5A88594A1F69E3B41CE38A4A2A6F5_gshared_inline (UniTask_1_tCB791B2124E9F94275C327F99FF638672AA9763F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (source == null) ? UniTaskStatus.Succeeded : source.GetStatus(token);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		return L_3;
	}

IL_001a:
	{
		return (int32_t)(1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTaskCompletionSourceCore_1_ValidateToken_m68FEFF94AE5EF0A6392B86BAC2868372ED92E5B5_gshared_inline (UniTaskCompletionSourceCore_1_tA52F0F7957A10F035966CF21F6A4B89F59383713* __this, int16_t ___token0, const RuntimeMethod* method) 
{
	{
		// if (token != version)
		int16_t L_0 = ___token0;
		int16_t L_1 = (int16_t)__this->___version_2;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		// throw new InvalidOperationException("Token version is not matched, can not await twice or get Status after await.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD2921BAFC94F356E0EFDAE222C392546BBFCDA14)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_ValidateToken_m68FEFF94AE5EF0A6392B86BAC2868372ED92E5B5_RuntimeMethod_var)));
	}

IL_0014:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m2D382159CB5D690EEEDB435E6183DBDBD9560CA3_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* ___task0, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* L_0 = ___task0;
		UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 L_1 = (*(UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m688D534E5DE535F713C9D2C84744BB51F95416F5_gshared_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (source == null) ? UniTaskStatus.Succeeded : source.GetStatus(token);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		return L_3;
	}

IL_001a:
	{
		return (int32_t)(1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m65B703CDA0E48F294713CCCF06A7B5AF705D8E1F_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* ___task0, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* L_0 = ___task0;
		UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 L_1 = (*(UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mD1C383B359BDB954321BC6C44DA1631270CC29A6_gshared_inline (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (source == null) ? UniTaskStatus.Succeeded : source.GetStatus(token);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		return L_3;
	}

IL_001a:
	{
		return (int32_t)(1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* ___task0, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = ___task0;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 L_1 = (*(UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___result_1), (void*)NULL);
		#endif
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (source == null) ? UniTaskStatus.Succeeded : source.GetStatus(token);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		return L_3;
	}

IL_001a:
	{
		return (int32_t)(1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTaskCompletionSourceCore_1_ValidateToken_m36CD0655A19E8FF13A47089C9B22677D08273B9F_gshared_inline (UniTaskCompletionSourceCore_1_t1E5EF1FBDA4513DE5FEFA8861A0CB24C37E8900E* __this, int16_t ___token0, const RuntimeMethod* method) 
{
	{
		// if (token != version)
		int16_t L_0 = ___token0;
		int16_t L_1 = (int16_t)__this->___version_2;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		// throw new InvalidOperationException("Token version is not matched, can not await twice or get Status after await.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD2921BAFC94F356E0EFDAE222C392546BBFCDA14)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_ValidateToken_m36CD0655A19E8FF13A47089C9B22677D08273B9F_RuntimeMethod_var)));
	}

IL_0014:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTaskCompletionSourceCore_1_ValidateToken_m7C8EDC14B5DB9091C851F0B0AF05FE0F5EB9E8D2_gshared_inline (UniTaskCompletionSourceCore_1_t2421E37AB06D43515542B3008371F23D1CFB4330* __this, int16_t ___token0, const RuntimeMethod* method) 
{
	{
		// if (token != version)
		int16_t L_0 = ___token0;
		int16_t L_1 = (int16_t)__this->___version_2;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		// throw new InvalidOperationException("Token version is not matched, can not await twice or get Status after await.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD2921BAFC94F356E0EFDAE222C392546BBFCDA14)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_ValidateToken_m7C8EDC14B5DB9091C851F0B0AF05FE0F5EB9E8D2_RuntimeMethod_var)));
	}

IL_0014:
	{
		// }
		return;
	}
}
