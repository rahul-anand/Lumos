#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const uint32_t AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t7988782848E87B4A172D2199D2BAC372F93351FD 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.AsyncOperation
struct  AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.AssetBundleCreateRequest
struct  AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
};

// UnityEngine.AssetBundleRecompressOperation
struct  AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleRecompressOperation
struct AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleRecompressOperation
struct AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
};

// UnityEngine.AssetBundleRequest
struct  AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
};

// System.Action`1<UnityEngine.AsyncOperation>
struct  Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.AssetBundleCreateRequest
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshal_pinvoke(const AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A& unmarshaled, AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_completeCallback_1()));
}
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshal_pinvoke_back(const AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshaled_pinvoke& marshaled, AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_m_completeCallback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31>(marshaled.___m_completeCallback_1, Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.AssetBundleCreateRequest
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshal_pinvoke_cleanup(AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.AssetBundleCreateRequest
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshal_com(const AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A& unmarshaled, AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_completeCallback_1()));
}
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshal_com_back(const AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshaled_com& marshaled, AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_m_completeCallback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31>(marshaled.___m_completeCallback_1, Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.AssetBundleCreateRequest
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshal_com_cleanup(AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.AssetBundleRecompressOperation
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_marshal_pinvoke(const AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31& unmarshaled, AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_completeCallback_1()));
}
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_marshal_pinvoke_back(const AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_marshaled_pinvoke& marshaled, AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_m_completeCallback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31>(marshaled.___m_completeCallback_1, Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.AssetBundleRecompressOperation
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_marshal_pinvoke_cleanup(AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.AssetBundleRecompressOperation
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_marshal_com(const AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31& unmarshaled, AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_completeCallback_1()));
}
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_marshal_com_back(const AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_marshaled_com& marshaled, AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_m_completeCallback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31>(marshaled.___m_completeCallback_1, Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.AssetBundleRecompressOperation
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_marshal_com_cleanup(AssetBundleRecompressOperation_t960AA4671D6EB0A10A041FA29B8C2A7D70C07D31_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.AssetBundleRequest
IL2CPP_EXTERN_C void AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshal_pinvoke(const AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A& unmarshaled, AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_completeCallback_1()));
}
IL2CPP_EXTERN_C void AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshal_pinvoke_back(const AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshaled_pinvoke& marshaled, AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_m_completeCallback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31>(marshaled.___m_completeCallback_1, Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.AssetBundleRequest
IL2CPP_EXTERN_C void AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshal_pinvoke_cleanup(AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.AssetBundleRequest
IL2CPP_EXTERN_C void AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshal_com(const AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A& unmarshaled, AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_completeCallback_1()));
}
IL2CPP_EXTERN_C void AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshal_com_back(const AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshaled_com& marshaled, AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_m_completeCallback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31>(marshaled.___m_completeCallback_1, Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.AssetBundleRequest
IL2CPP_EXTERN_C void AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshal_com_cleanup(AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
