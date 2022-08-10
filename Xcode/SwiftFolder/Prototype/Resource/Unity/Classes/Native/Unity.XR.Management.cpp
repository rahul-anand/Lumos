#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F;
// UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__21
struct U3CInitializeLoaderU3Ed__21_t33F713BAD7F9E813CC17C37E95C97FADB25AC5A8;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_t6331523A19E51FB87CA899920C03B10A48A562B0;
// System.Collections.Generic.List`1<UnityEngine.Rendering.GraphicsDeviceType>
struct List_1_t00813CFE30B665F36E8422B4070F39D77D700541;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.Rendering.GraphicsDeviceType[]
struct GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// UnityEngine.XR.Management.XRLoader[]
struct XRLoaderU5BU5D_t203FCF6D4845B3782765C3430A1C404D7C80BBC8;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsDeviceType_t531071CD9311C868D1279D2550F83670D18FB779_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t00813CFE30B665F36E8422B4070F39D77D700541_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6331523A19E51FB87CA899920C03B10A48A562B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeLoaderU3Ed__21_t33F713BAD7F9E813CC17C37E95C97FADB25AC5A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral315B698B2842E2D68111639F66C762E9B89D07CD;
IL2CPP_EXTERN_C String_t* _stringLiteral382C2D644BFA222F1F3E9ECB531AE6F3D95044FF;
IL2CPP_EXTERN_C String_t* _stringLiteral46E098C88DA5E70C12C778EED75B14DE754DBDB6;
IL2CPP_EXTERN_C String_t* _stringLiteral5C10A8C7ED5A1BA07E65C73073DD018933F7FDB6;
IL2CPP_EXTERN_C String_t* _stringLiteral6B8B436F01039B99374349DB664935E4E9FA600B;
IL2CPP_EXTERN_C String_t* _stringLiteral8A67FBC5ABA519008B443A3446FFD6458D968D4E;
IL2CPP_EXTERN_C String_t* _stringLiteralADC37DF0257D7B87C604A97F0803D0370B8FD8C6;
IL2CPP_EXTERN_C String_t* _stringLiteralAE0ABAD544C4FF6309990ACB67971500C1591984;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m90A4F0B5CA0D3890D8D3E4676EE09E17B22AA9C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m19D8DC887F99E56196FA26536373CE0E192D6741_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7EF1367FE7BF714A357AD14CE9116844D666EAF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mDEC6135EE93032A5029A986B35022BFD7B4379F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m9F891CF9308557447A884247550828A4932787EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m668F9DF24A8F3F30F15BD07F3FB7418CAF4E098A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC89CC0C2318DA4814B4A860E7EDF82390819C439_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mDC5A0FFB7BA8225B30C2C7BE2AFC9895D9F4D597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeLoaderU3Ed__21_System_Collections_IEnumerator_Reset_mEB790BAC541F1CFF987BC962D2704FA60FA92407_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRGeneralSettings_Quit_m5C5E8099B3E4105FD09B06D1A15B0D7FB358BA70_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t U3CInitializeLoaderU3Ed__21_MoveNext_m7EF7402BC167D2C982E0C87C8CD6E2464A108035_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CInitializeLoaderU3Ed__21_System_Collections_IEnumerator_Reset_mEB790BAC541F1CFF987BC962D2704FA60FA92407_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CInitializeLoaderU3Ed__21_U3CU3Em__Finally1_mC3CA8F2390164033FC5E0A8046BD3A780D07C4C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRGeneralSettings_AttemptInitializeXRSDKOnLoad_m25C4FF6460E96AB85AD43A0FFFE4569E3618E196_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRGeneralSettings_AttemptStartXRSDKOnBeforeSplashScreen_m69A4793D7DC90E31D4C00ABB34AB2F18DAFD107C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRGeneralSettings_Awake_mA50DA38B1FA224BADC66F689593400F9F77C551E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRGeneralSettings_DeInitXRSDK_m393413ABA4D5D4CA976ECB6AF2C04E81685E2183_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRGeneralSettings_InitXRSDK_m8D064A0726709F70957413174C7625C33140DA2C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRGeneralSettings_Quit_m5C5E8099B3E4105FD09B06D1A15B0D7FB358BA70_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRGeneralSettings_StartXRSDK_mA126F57DFAB5A6EE2651ADB6DD28AB41C72DBED8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRGeneralSettings_StopXRSDK_m5972F9B13CAF086DE0CCFD19E1D84C0D98EEDE9A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRGeneralSettings__cctor_m1A0A5F4C74AB2262794AADF08D2CF0E27BAAD506_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68DUnity_XR_Management_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRLoader_GetSupportedGraphicsDeviceTypes_m712F693E83D84188B540518910B0D797C52BC76C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRManagerSettings_CheckGraphicsAPICompatibility_m0A5AABEC0CF864942733D746120B368C5605FA63_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRManagerSettings_DeinitializeLoader_m6AD4F079818DF78946C99AD8D49E3D343DAAF290_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRManagerSettings_InitializeLoaderSync_m97C5BA258C318867D1B8B8183AAC454D5EAA23F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRManagerSettings_InitializeLoader_m92B987C89AF6F7E7D05718296243E0ED021FD6B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRManagerSettings_StartSubsystems_mB9F502956C1FC6AD6D421CD36C3980B095B4282E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRManagerSettings_StopSubsystems_m7FF3553EEF8C7AB1D58A3D9034A25D8C31D30FFC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRManagerSettings__ctor_m00CA8F7EAA0858EC7F726043164C595B313A3881_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8Unity_XR_Management_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRManagerSettings_set_activeLoader_m77ACE8749C38314C5DA2A6A4F6551DDBC552EC72_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tC451880E1B66784143BA4EFDDE1B655D2AAB3053 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.Int32Enum>
struct  List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____items_1)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get__items_1() const { return ____items_1; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A_StaticFields, ____emptyArray_5)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Rendering.GraphicsDeviceType>
struct  List_1_t00813CFE30B665F36E8422B4070F39D77D700541  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t00813CFE30B665F36E8422B4070F39D77D700541, ____items_1)); }
	inline GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A* get__items_1() const { return ____items_1; }
	inline GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t00813CFE30B665F36E8422B4070F39D77D700541, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t00813CFE30B665F36E8422B4070F39D77D700541, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t00813CFE30B665F36E8422B4070F39D77D700541, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t00813CFE30B665F36E8422B4070F39D77D700541_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t00813CFE30B665F36E8422B4070F39D77D700541_StaticFields, ____emptyArray_5)); }
	inline GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct  List_1_t6331523A19E51FB87CA899920C03B10A48A562B0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRLoaderU5BU5D_t203FCF6D4845B3782765C3430A1C404D7C80BBC8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6331523A19E51FB87CA899920C03B10A48A562B0, ____items_1)); }
	inline XRLoaderU5BU5D_t203FCF6D4845B3782765C3430A1C404D7C80BBC8* get__items_1() const { return ____items_1; }
	inline XRLoaderU5BU5D_t203FCF6D4845B3782765C3430A1C404D7C80BBC8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRLoaderU5BU5D_t203FCF6D4845B3782765C3430A1C404D7C80BBC8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6331523A19E51FB87CA899920C03B10A48A562B0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6331523A19E51FB87CA899920C03B10A48A562B0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6331523A19E51FB87CA899920C03B10A48A562B0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6331523A19E51FB87CA899920C03B10A48A562B0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRLoaderU5BU5D_t203FCF6D4845B3782765C3430A1C404D7C80BBC8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6331523A19E51FB87CA899920C03B10A48A562B0_StaticFields, ____emptyArray_5)); }
	inline XRLoaderU5BU5D_t203FCF6D4845B3782765C3430A1C404D7C80BBC8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRLoaderU5BU5D_t203FCF6D4845B3782765C3430A1C404D7C80BBC8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRLoaderU5BU5D_t203FCF6D4845B3782765C3430A1C404D7C80BBC8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


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

// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.XR.Management.XRLoader>
struct  Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF, ___list_0)); }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * get_list_0() const { return ___list_0; }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF, ___current_3)); }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * get_current_3() const { return ___current_3; }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
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

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Rendering.GraphicsDeviceType
struct  GraphicsDeviceType_t531071CD9311C868D1279D2550F83670D18FB779 
{
public:
	// System.Int32 UnityEngine.Rendering.GraphicsDeviceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GraphicsDeviceType_t531071CD9311C868D1279D2550F83670D18FB779, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.Management.XRManagerSettings_<InitializeLoader>d__21
struct  U3CInitializeLoaderU3Ed__21_t33F713BAD7F9E813CC17C37E95C97FADB25AC5A8  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.Management.XRManagerSettings_<InitializeLoader>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.Management.XRManagerSettings_<InitializeLoader>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRManagerSettings_<InitializeLoader>d__21::<>4__this
	XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1_Enumerator<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings_<InitializeLoader>d__21::<>7__wrap1
	Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF  ___U3CU3E7__wrap1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInitializeLoaderU3Ed__21_t33F713BAD7F9E813CC17C37E95C97FADB25AC5A8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CInitializeLoaderU3Ed__21_t33F713BAD7F9E813CC17C37E95C97FADB25AC5A8, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInitializeLoaderU3Ed__21_t33F713BAD7F9E813CC17C37E95C97FADB25AC5A8, ___U3CU3E4__this_2)); }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CInitializeLoaderU3Ed__21_t33F713BAD7F9E813CC17C37E95C97FADB25AC5A8, ___U3CU3E7__wrap1_3)); }
	inline Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF  get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF * get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF  value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___current_3), (void*)NULL);
		#endif
	}
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

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.XR.Management.XRGeneralSettings
struct  XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;

public:
	inline static int32_t get_offset_of_m_LoaderManagerInstance_6() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_LoaderManagerInstance_6)); }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * get_m_LoaderManagerInstance_6() const { return ___m_LoaderManagerInstance_6; }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F ** get_address_of_m_LoaderManagerInstance_6() { return &___m_LoaderManagerInstance_6; }
	inline void set_m_LoaderManagerInstance_6(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * value)
	{
		___m_LoaderManagerInstance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LoaderManagerInstance_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_InitManagerOnStart_7() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_InitManagerOnStart_7)); }
	inline bool get_m_InitManagerOnStart_7() const { return ___m_InitManagerOnStart_7; }
	inline bool* get_address_of_m_InitManagerOnStart_7() { return &___m_InitManagerOnStart_7; }
	inline void set_m_InitManagerOnStart_7(bool value)
	{
		___m_InitManagerOnStart_7 = value;
	}

	inline static int32_t get_offset_of_m_XRManager_8() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_XRManager_8)); }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * get_m_XRManager_8() const { return ___m_XRManager_8; }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F ** get_address_of_m_XRManager_8() { return &___m_XRManager_8; }
	inline void set_m_XRManager_8(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * value)
	{
		___m_XRManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_XRManager_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ProviderIntialized_9() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_ProviderIntialized_9)); }
	inline bool get_m_ProviderIntialized_9() const { return ___m_ProviderIntialized_9; }
	inline bool* get_address_of_m_ProviderIntialized_9() { return &___m_ProviderIntialized_9; }
	inline void set_m_ProviderIntialized_9(bool value)
	{
		___m_ProviderIntialized_9 = value;
	}

	inline static int32_t get_offset_of_m_ProviderStarted_10() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_ProviderStarted_10)); }
	inline bool get_m_ProviderStarted_10() const { return ___m_ProviderStarted_10; }
	inline bool* get_address_of_m_ProviderStarted_10() { return &___m_ProviderStarted_10; }
	inline void set_m_ProviderStarted_10(bool value)
	{
		___m_ProviderStarted_10 = value;
	}
};

struct XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields
{
public:
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * ___s_RuntimeSettingsInstance_5;

public:
	inline static int32_t get_offset_of_k_SettingsKey_4() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields, ___k_SettingsKey_4)); }
	inline String_t* get_k_SettingsKey_4() const { return ___k_SettingsKey_4; }
	inline String_t** get_address_of_k_SettingsKey_4() { return &___k_SettingsKey_4; }
	inline void set_k_SettingsKey_4(String_t* value)
	{
		___k_SettingsKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_SettingsKey_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_RuntimeSettingsInstance_5() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields, ___s_RuntimeSettingsInstance_5)); }
	inline XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * get_s_RuntimeSettingsInstance_5() const { return ___s_RuntimeSettingsInstance_5; }
	inline XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 ** get_address_of_s_RuntimeSettingsInstance_5() { return &___s_RuntimeSettingsInstance_5; }
	inline void set_s_RuntimeSettingsInstance_5(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * value)
	{
		___s_RuntimeSettingsInstance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RuntimeSettingsInstance_5), (void*)value);
	}
};


// UnityEngine.XR.Management.XRLoader
struct  XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.XR.Management.XRManagerSettings
struct  XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * ___m_Loaders_8;

public:
	inline static int32_t get_offset_of_m_InitializationComplete_4() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_InitializationComplete_4)); }
	inline bool get_m_InitializationComplete_4() const { return ___m_InitializationComplete_4; }
	inline bool* get_address_of_m_InitializationComplete_4() { return &___m_InitializationComplete_4; }
	inline void set_m_InitializationComplete_4(bool value)
	{
		___m_InitializationComplete_4 = value;
	}

	inline static int32_t get_offset_of_m_RequiresSettingsUpdate_5() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_RequiresSettingsUpdate_5)); }
	inline bool get_m_RequiresSettingsUpdate_5() const { return ___m_RequiresSettingsUpdate_5; }
	inline bool* get_address_of_m_RequiresSettingsUpdate_5() { return &___m_RequiresSettingsUpdate_5; }
	inline void set_m_RequiresSettingsUpdate_5(bool value)
	{
		___m_RequiresSettingsUpdate_5 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticLoading_6() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticLoading_6)); }
	inline bool get_m_AutomaticLoading_6() const { return ___m_AutomaticLoading_6; }
	inline bool* get_address_of_m_AutomaticLoading_6() { return &___m_AutomaticLoading_6; }
	inline void set_m_AutomaticLoading_6(bool value)
	{
		___m_AutomaticLoading_6 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticRunning_7() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticRunning_7)); }
	inline bool get_m_AutomaticRunning_7() const { return ___m_AutomaticRunning_7; }
	inline bool* get_address_of_m_AutomaticRunning_7() { return &___m_AutomaticRunning_7; }
	inline void set_m_AutomaticRunning_7(bool value)
	{
		___m_AutomaticRunning_7 = value;
	}

	inline static int32_t get_offset_of_m_Loaders_8() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_Loaders_8)); }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * get_m_Loaders_8() const { return ___m_Loaders_8; }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 ** get_address_of_m_Loaders_8() { return &___m_Loaders_8; }
	inline void set_m_Loaders_8(List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * value)
	{
		___m_Loaders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Loaders_8), (void*)value);
	}
};

struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F_StaticFields
{
public:
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::s_ActiveLoader
	XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * ___s_ActiveLoader_9;

public:
	inline static int32_t get_offset_of_s_ActiveLoader_9() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F_StaticFields, ___s_ActiveLoader_9)); }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * get_s_ActiveLoader_9() const { return ___s_ActiveLoader_9; }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B ** get_address_of_s_ActiveLoader_9() { return &___s_ActiveLoader_9; }
	inline void set_s_ActiveLoader_9(XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * value)
	{
		___s_ActiveLoader_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActiveLoader_9), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Collections.Generic.List`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF1D0377D81949B2ADB6104D9994F7CEE1A1E5040_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32Enum>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3632094BEC4410A1022FD0293E7BA88FC3B811A8_gshared_inline (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32Enum>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m793EB605F2702C16DE665C690BFA9B9675529D94_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::add_quitting(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_quitting_mB3FABD4514AA9FED23136D80BF59FDCE00D0F9B7 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRGeneralSettings::DeInitXRSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_DeInitXRSDK_m393413ABA4D5D4CA976ECB6AF2C04E81685E2183 (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRGeneralSettings::StartXRSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_StartXRSDK_mA126F57DFAB5A6EE2651ADB6DD28AB41C72DBED8 (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::get_InitManagerOnStart()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRGeneralSettings_get_InitManagerOnStart_m21A3FAE9CDFED7D125E0794EFC2C2B18E3878E53_inline (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRGeneralSettings::InitXRSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_InitXRSDK_m8D064A0726709F70957413174C7625C33140DA2C (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRManagerSettings::set_automaticLoading(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRManagerSettings_set_automaticLoading_m955E88785E48CD480FC0D2198F68AFAC419C7E53_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRManagerSettings::set_automaticRunning(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRManagerSettings_set_automaticRunning_mDD9D47FD94BD122FA725ED624D056108DAE22E0C_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRManagerSettings::InitializeLoaderSync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_InitializeLoaderSync_m97C5BA258C318867D1B8B8183AAC454D5EAA23F5 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRManagerSettings::StartSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StartSubsystems_mB9F502956C1FC6AD6D421CD36C3980B095B4282E (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRManagerSettings::StopSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StopSubsystems_m7FF3553EEF8C7AB1D58A3D9034A25D8C31D30FFC (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRManagerSettings::DeinitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_DeinitializeLoader_m6AD4F079818DF78946C99AD8D49E3D343DAAF290 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Rendering.GraphicsDeviceType>::.ctor()
inline void List_1__ctor_m668F9DF24A8F3F30F15BD07F3FB7418CAF4E098A (List_1_t00813CFE30B665F36E8422B4070F39D77D700541 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t00813CFE30B665F36E8422B4070F39D77D700541 *, const RuntimeMethod*))List_1__ctor_mF1D0377D81949B2ADB6104D9994F7CEE1A1E5040_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::get_loaders()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * XRManagerSettings_get_loaders_mEBFC514878CB5F85A0602F4075E5CBC2E36E89EA_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>::GetEnumerator()
inline Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF  List_1_GetEnumerator_m9F891CF9308557447A884247550828A4932787EC (List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF  (*) (List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Management.XRLoader>::get_Current()
inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * Enumerator_get_Current_m7EF1367FE7BF714A357AD14CE9116844D666EAF8_inline (Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF * __this, const RuntimeMethod* method)
{
	return ((  XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * (*) (Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::CheckGraphicsAPICompatibility(UnityEngine.XR.Management.XRLoader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRManagerSettings_CheckGraphicsAPICompatibility_m0A5AABEC0CF864942733D746120B368C5605FA63 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * ___loader0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRManagerSettings::set_activeLoader(UnityEngine.XR.Management.XRLoader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_set_activeLoader_m77ACE8749C38314C5DA2A6A4F6551DDBC552EC72 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Management.XRLoader>::MoveNext()
inline bool Enumerator_MoveNext_m19D8DC887F99E56196FA26536373CE0E192D6741 (Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Management.XRLoader>::Dispose()
inline void Enumerator_Dispose_m90A4F0B5CA0D3890D8D3E4676EE09E17B22AA9C7 (Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLoaderU3Ed__21__ctor_m377FCA2657FA6F45F32B6D2F7573FA52D474B2C6 (U3CInitializeLoaderU3Ed__21_t33F713BAD7F9E813CC17C37E95C97FADB25AC5A8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::get_graphicsDeviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceType_mC207E6B2221AD5AB39831C2412FF7FBD2F43CC02 (const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rendering.GraphicsDeviceType>::get_Count()
inline int32_t List_1_get_Count_mDC5A0FFB7BA8225B30C2C7BE2AFC9895D9F4D597_inline (List_1_t00813CFE30B665F36E8422B4070F39D77D700541 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t00813CFE30B665F36E8422B4070F39D77D700541 *, const RuntimeMethod*))List_1_get_Count_m3632094BEC4410A1022FD0293E7BA88FC3B811A8_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rendering.GraphicsDeviceType>::Contains(!0)
inline bool List_1_Contains_mDEC6135EE93032A5029A986B35022BFD7B4379F4 (List_1_t00813CFE30B665F36E8422B4070F39D77D700541 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t00813CFE30B665F36E8422B4070F39D77D700541 *, int32_t, const RuntimeMethod*))List_1_Contains_m793EB605F2702C16DE665C690BFA9B9675529D94_gshared)(__this, ___item0, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::get_automaticLoading()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRManagerSettings_get_automaticLoading_m2F854EC3F5A23B77C3819988414EEA070B3A067B_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::get_automaticRunning()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRManagerSettings_get_automaticRunning_m35A499E67629829BB4E89952FC3778D55D685890_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>::.ctor()
inline void List_1__ctor_mC89CC0C2318DA4814B4A860E7EDF82390819C439 (List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__21::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLoaderU3Ed__21_U3CU3Em__Finally1_mC3CA8F2390164033FC5E0A8046BD3A780D07C4C1 (U3CInitializeLoaderU3Ed__21_t33F713BAD7F9E813CC17C37E95C97FADB25AC5A8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLoaderU3Ed__21_System_IDisposable_Dispose_mB226DD42568855401ABA76E441995FB242FCF35B (U3CInitializeLoaderU3Ed__21_t33F713BAD7F9E813CC17C37E95C97FADB25AC5A8 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
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
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544 (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_0 = __this->get_m_LoaderManagerInstance_6();
		return L_0;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::set_Manager(UnityEngine.XR.Management.XRManagerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_set_Manager_mD03B32F78152AC3EE2DA737A037DA5895D325D29 (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_LoaderManagerInstance = value; }
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_0 = ___value0;
		__this->set_m_LoaderManagerInstance_6(L_0);
		// set { m_LoaderManagerInstance = value; }
		return;
	}
}
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_0 = ((XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var))->get_s_RuntimeSettingsInstance_5();
		return L_0;
	}
}
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_AssignedSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * XRGeneralSettings_get_AssignedSettings_mA98F4DB18321E6DBFA016F5C3699614C66796541 (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method)
{
	{
		// return m_LoaderManagerInstance;
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_0 = __this->get_m_LoaderManagerInstance_6();
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::get_InitManagerOnStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRGeneralSettings_get_InitManagerOnStart_m21A3FAE9CDFED7D125E0794EFC2C2B18E3878E53 (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method)
{
	{
		// return m_InitManagerOnStart;
		bool L_0 = __this->get_m_InitManagerOnStart_7();
		return L_0;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_Awake_mA50DA38B1FA224BADC66F689593400F9F77C551E (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRGeneralSettings_Awake_mA50DA38B1FA224BADC66F689593400F9F77C551E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("XRGeneral Settings awakening...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralADC37DF0257D7B87C604A97F0803D0370B8FD8C6, /*hidden argument*/NULL);
		// s_RuntimeSettingsInstance = this;
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		((XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var))->set_s_RuntimeSettingsInstance_5(__this);
		// Application.quitting += Quit;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, NULL, (intptr_t)((intptr_t)XRGeneralSettings_Quit_m5C5E8099B3E4105FD09B06D1A15B0D7FB358BA70_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_add_quitting_mB3FABD4514AA9FED23136D80BF59FDCE00D0F9B7(L_0, /*hidden argument*/NULL);
		// DontDestroyOnLoad(s_RuntimeSettingsInstance);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_1 = ((XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var))->get_s_RuntimeSettingsInstance_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_Quit_m5C5E8099B3E4105FD09B06D1A15B0D7FB358BA70 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRGeneralSettings_Quit_m5C5E8099B3E4105FD09B06D1A15B0D7FB358BA70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * V_0 = NULL;
	{
		// XRGeneralSettings instance = XRGeneralSettings.Instance;
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_0 = XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_inline(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (instance == null)
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// instance.DeInitXRSDK();
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_3 = V_0;
		NullCheck(L_3);
		XRGeneralSettings_DeInitXRSDK_m393413ABA4D5D4CA976ECB6AF2C04E81685E2183(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_Start_m192139B0BB00B8D23C6EEBB90290ABB6C4352F29 (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method)
{
	{
		// StartXRSDK();
		XRGeneralSettings_StartXRSDK_mA126F57DFAB5A6EE2651ADB6DD28AB41C72DBED8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_OnDestroy_mADCE8F90BABF1629E10E8BCF6FA19388C169A430 (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method)
{
	{
		// DeInitXRSDK();
		XRGeneralSettings_DeInitXRSDK_m393413ABA4D5D4CA976ECB6AF2C04E81685E2183(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::AttemptInitializeXRSDKOnLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_AttemptInitializeXRSDKOnLoad_m25C4FF6460E96AB85AD43A0FFFE4569E3618E196 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRGeneralSettings_AttemptInitializeXRSDKOnLoad_m25C4FF6460E96AB85AD43A0FFFE4569E3618E196_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * V_0 = NULL;
	{
		// XRGeneralSettings instance = XRGeneralSettings.Instance;
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_0 = XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_inline(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (instance == null || !instance.InitManagerOnStart)
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = XRGeneralSettings_get_InitManagerOnStart_m21A3FAE9CDFED7D125E0794EFC2C2B18E3878E53_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0018;
		}
	}

IL_0017:
	{
		// return;
		return;
	}

IL_0018:
	{
		// instance.InitXRSDK();
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_5 = V_0;
		NullCheck(L_5);
		XRGeneralSettings_InitXRSDK_m8D064A0726709F70957413174C7625C33140DA2C(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::AttemptStartXRSDKOnBeforeSplashScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_AttemptStartXRSDKOnBeforeSplashScreen_m69A4793D7DC90E31D4C00ABB34AB2F18DAFD107C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRGeneralSettings_AttemptStartXRSDKOnBeforeSplashScreen_m69A4793D7DC90E31D4C00ABB34AB2F18DAFD107C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * V_0 = NULL;
	{
		// XRGeneralSettings instance = XRGeneralSettings.Instance;
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_0 = XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_inline(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (instance == null || !instance.InitManagerOnStart)
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = XRGeneralSettings_get_InitManagerOnStart_m21A3FAE9CDFED7D125E0794EFC2C2B18E3878E53_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0018;
		}
	}

IL_0017:
	{
		// return;
		return;
	}

IL_0018:
	{
		// instance.StartXRSDK();
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_5 = V_0;
		NullCheck(L_5);
		XRGeneralSettings_StartXRSDK_mA126F57DFAB5A6EE2651ADB6DD28AB41C72DBED8(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::InitXRSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_InitXRSDK_m8D064A0726709F70957413174C7625C33140DA2C (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRGeneralSettings_InitXRSDK_m8D064A0726709F70957413174C7625C33140DA2C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (XRGeneralSettings.Instance == null || XRGeneralSettings.Instance.m_LoaderManagerInstance == null || XRGeneralSettings.Instance.m_InitManagerOnStart == false)
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_0 = XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_2 = XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_inline(/*hidden argument*/NULL);
		NullCheck(L_2);
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_3 = L_2->get_m_LoaderManagerInstance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_5 = XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_inline(/*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6 = L_5->get_m_InitManagerOnStart_7();
		if (L_6)
		{
			goto IL_002c;
		}
	}

IL_002b:
	{
		// return;
		return;
	}

IL_002c:
	{
		// m_XRManager = XRGeneralSettings.Instance.m_LoaderManagerInstance;
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_7 = XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_inline(/*hidden argument*/NULL);
		NullCheck(L_7);
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_8 = L_7->get_m_LoaderManagerInstance_6();
		__this->set_m_XRManager_8(L_8);
		// if (m_XRManager == null)
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_9 = __this->get_m_XRManager_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		// Debug.LogError("Assigned GameObject for XR Management loading is invalid. No XR Providers will be automatically loaded.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral315B698B2842E2D68111639F66C762E9B89D07CD, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0055:
	{
		// m_XRManager.automaticLoading = false;
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_11 = __this->get_m_XRManager_8();
		NullCheck(L_11);
		XRManagerSettings_set_automaticLoading_m955E88785E48CD480FC0D2198F68AFAC419C7E53_inline(L_11, (bool)0, /*hidden argument*/NULL);
		// m_XRManager.automaticRunning = false;
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_12 = __this->get_m_XRManager_8();
		NullCheck(L_12);
		XRManagerSettings_set_automaticRunning_mDD9D47FD94BD122FA725ED624D056108DAE22E0C_inline(L_12, (bool)0, /*hidden argument*/NULL);
		// m_XRManager.InitializeLoaderSync();
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_13 = __this->get_m_XRManager_8();
		NullCheck(L_13);
		XRManagerSettings_InitializeLoaderSync_m97C5BA258C318867D1B8B8183AAC454D5EAA23F5(L_13, /*hidden argument*/NULL);
		// m_ProviderIntialized = true;
		__this->set_m_ProviderIntialized_9((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::StartXRSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_StartXRSDK_mA126F57DFAB5A6EE2651ADB6DD28AB41C72DBED8 (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRGeneralSettings_StartXRSDK_mA126F57DFAB5A6EE2651ADB6DD28AB41C72DBED8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_XRManager != null && m_XRManager.activeLoader != null)
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_0 = __this->get_m_XRManager_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_2 = __this->get_m_XRManager_8();
		NullCheck(L_2);
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_3 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// m_XRManager.StartSubsystems();
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_5 = __this->get_m_XRManager_8();
		NullCheck(L_5);
		XRManagerSettings_StartSubsystems_mB9F502956C1FC6AD6D421CD36C3980B095B4282E(L_5, /*hidden argument*/NULL);
		// m_ProviderStarted = true;
		__this->set_m_ProviderStarted_10((bool)1);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::StopXRSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_StopXRSDK_m5972F9B13CAF086DE0CCFD19E1D84C0D98EEDE9A (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRGeneralSettings_StopXRSDK_m5972F9B13CAF086DE0CCFD19E1D84C0D98EEDE9A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_XRManager != null && m_XRManager.activeLoader != null)
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_0 = __this->get_m_XRManager_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_2 = __this->get_m_XRManager_8();
		NullCheck(L_2);
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_3 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// m_XRManager.StopSubsystems();
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_5 = __this->get_m_XRManager_8();
		NullCheck(L_5);
		XRManagerSettings_StopSubsystems_m7FF3553EEF8C7AB1D58A3D9034A25D8C31D30FFC(L_5, /*hidden argument*/NULL);
		// m_ProviderStarted = false;
		__this->set_m_ProviderStarted_10((bool)0);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::DeInitXRSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings_DeInitXRSDK_m393413ABA4D5D4CA976ECB6AF2C04E81685E2183 (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRGeneralSettings_DeInitXRSDK_m393413ABA4D5D4CA976ECB6AF2C04E81685E2183_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_XRManager != null && m_XRManager.activeLoader != null)
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_0 = __this->get_m_XRManager_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_2 = __this->get_m_XRManager_8();
		NullCheck(L_2);
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_3 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// m_XRManager.DeinitializeLoader();
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_5 = __this->get_m_XRManager_8();
		NullCheck(L_5);
		XRManagerSettings_DeinitializeLoader_m6AD4F079818DF78946C99AD8D49E3D343DAAF290(L_5, /*hidden argument*/NULL);
		// m_XRManager = null;
		__this->set_m_XRManager_8((XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F *)NULL);
		// m_ProviderIntialized = false;
		__this->set_m_ProviderIntialized_9((bool)0);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings__ctor_mD3A03E89F7FA70B2DB8E6E4EDF18EFBD24B312F2 (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method)
{
	{
		// internal bool m_InitManagerOnStart = true;
		__this->set_m_InitManagerOnStart_7((bool)1);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRGeneralSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettings__cctor_m1A0A5F4C74AB2262794AADF08D2CF0E27BAAD506 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRGeneralSettings__cctor_m1A0A5F4C74AB2262794AADF08D2CF0E27BAAD506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string k_SettingsKey = "com.unity.xr.management.loader_settings";
		((XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var))->set_k_SettingsKey_4(_stringLiteral8A67FBC5ABA519008B443A3446FFD6458D968D4E);
		// internal static XRGeneralSettings s_RuntimeSettingsInstance = null;
		((XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var))->set_s_RuntimeSettingsInstance_5((XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 *)NULL);
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
// System.Boolean UnityEngine.XR.Management.XRLoader::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLoader_Initialize_mDACAE27E5D38879E691DADB1462769CBE0484C04 (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool Initialize() { return false; }
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.Management.XRLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLoader_Start_mE0B66E131569B4D440A52A84771BB9ADCF03FE84 (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool Start() { return false; }
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.Management.XRLoader::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLoader_Stop_mBEE0CD2B4ADC3D207F286BC1DCDA05FA4CDECC7C (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool Stop() { return false; }
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.Management.XRLoader::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLoader_Deinitialize_m2F552753A612D81962AA678C2A4672FBB01A9292 (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool Deinitialize() { return false; }
		return (bool)0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Rendering.GraphicsDeviceType> UnityEngine.XR.Management.XRLoader::GetSupportedGraphicsDeviceTypes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t00813CFE30B665F36E8422B4070F39D77D700541 * XRLoader_GetSupportedGraphicsDeviceTypes_m712F693E83D84188B540518910B0D797C52BC76C (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * __this, bool ___buildingPlayer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRLoader_GetSupportedGraphicsDeviceTypes_m712F693E83D84188B540518910B0D797C52BC76C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new List<GraphicsDeviceType>();
		List_1_t00813CFE30B665F36E8422B4070F39D77D700541 * L_0 = (List_1_t00813CFE30B665F36E8422B4070F39D77D700541 *)il2cpp_codegen_object_new(List_1_t00813CFE30B665F36E8422B4070F39D77D700541_il2cpp_TypeInfo_var);
		List_1__ctor_m668F9DF24A8F3F30F15BD07F3FB7418CAF4E098A(L_0, /*hidden argument*/List_1__ctor_m668F9DF24A8F3F30F15BD07F3FB7418CAF4E098A_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void UnityEngine.XR.Management.XRLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoader__ctor_mA07711BD60D005274815F8306CBCCABC8D6D6509 (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::get_automaticLoading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRManagerSettings_get_automaticLoading_m2F854EC3F5A23B77C3819988414EEA070B3A067B (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_AutomaticLoading; }
		bool L_0 = __this->get_m_AutomaticLoading_6();
		return L_0;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::set_automaticLoading(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_set_automaticLoading_m955E88785E48CD480FC0D2198F68AFAC419C7E53 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_AutomaticLoading = value; }
		bool L_0 = ___value0;
		__this->set_m_AutomaticLoading_6(L_0);
		// set { m_AutomaticLoading = value; }
		return;
	}
}
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::get_automaticRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRManagerSettings_get_automaticRunning_m35A499E67629829BB4E89952FC3778D55D685890 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_AutomaticRunning; }
		bool L_0 = __this->get_m_AutomaticRunning_7();
		return L_0;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::set_automaticRunning(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_set_automaticRunning_mDD9D47FD94BD122FA725ED624D056108DAE22E0C (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_AutomaticRunning = value; }
		bool L_0 = ___value0;
		__this->set_m_AutomaticRunning_7(L_0);
		// set { m_AutomaticRunning = value; }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::get_loaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * XRManagerSettings_get_loaders_mEBFC514878CB5F85A0602F4075E5CBC2E36E89EA (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Loaders; }
		List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * L_0 = __this->get_m_Loaders_8();
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::get_isInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRManagerSettings_get_isInitializationComplete_m1559C8B12004C52CBAC825FFE823C2C4DF7C719D (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_InitializationComplete; }
		bool L_0 = __this->get_m_InitializationComplete_4();
		return L_0;
	}
}
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRLoader activeLoader { get { return s_ActiveLoader; } private set { s_ActiveLoader = value; } }
		IL2CPP_RUNTIME_CLASS_INIT(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F_il2cpp_TypeInfo_var);
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_0 = ((XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F_StaticFields*)il2cpp_codegen_static_fields_for(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F_il2cpp_TypeInfo_var))->get_s_ActiveLoader_9();
		return L_0;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::set_activeLoader(UnityEngine.XR.Management.XRLoader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_set_activeLoader_m77ACE8749C38314C5DA2A6A4F6551DDBC552EC72 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRManagerSettings_set_activeLoader_m77ACE8749C38314C5DA2A6A4F6551DDBC552EC72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRLoader activeLoader { get { return s_ActiveLoader; } private set { s_ActiveLoader = value; } }
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F_il2cpp_TypeInfo_var);
		((XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F_StaticFields*)il2cpp_codegen_static_fields_for(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F_il2cpp_TypeInfo_var))->set_s_ActiveLoader_9(L_0);
		// public XRLoader activeLoader { get { return s_ActiveLoader; } private set { s_ActiveLoader = value; } }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::InitializeLoaderSync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_InitializeLoaderSync_m97C5BA258C318867D1B8B8183AAC454D5EAA23F5 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRManagerSettings_InitializeLoaderSync_m97C5BA258C318867D1B8B8183AAC454D5EAA23F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (activeLoader != null)
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_0 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogWarning(
		//     "XR Management has already initialized an active loader in this scene." +
		//     "Please make sure to stop all subsystems and deinitialize the active loader before initializing a new one.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral5C10A8C7ED5A1BA07E65C73073DD018933F7FDB6, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0019:
	{
		// foreach (var loader in loaders)
		List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * L_2 = XRManagerSettings_get_loaders_mEBFC514878CB5F85A0602F4075E5CBC2E36E89EA_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF  L_3 = List_1_GetEnumerator_m9F891CF9308557447A884247550828A4932787EC(L_2, /*hidden argument*/List_1_GetEnumerator_m9F891CF9308557447A884247550828A4932787EC_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0059;
		}

IL_0027:
		{
			// foreach (var loader in loaders)
			XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_4 = Enumerator_get_Current_m7EF1367FE7BF714A357AD14CE9116844D666EAF8_inline((Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF *)(&V_0), /*hidden argument*/Enumerator_get_Current_m7EF1367FE7BF714A357AD14CE9116844D666EAF8_RuntimeMethod_var);
			V_1 = L_4;
			// if (loader != null)
			XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_5 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0059;
			}
		}

IL_0038:
		{
			// if (CheckGraphicsAPICompatibility(loader) && loader.Initialize())
			XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_7 = V_1;
			bool L_8 = XRManagerSettings_CheckGraphicsAPICompatibility_m0A5AABEC0CF864942733D746120B368C5605FA63(__this, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0059;
			}
		}

IL_0041:
		{
			XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_9 = V_1;
			NullCheck(L_9);
			bool L_10 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.XR.Management.XRLoader::Initialize() */, L_9);
			if (!L_10)
			{
				goto IL_0059;
			}
		}

IL_0049:
		{
			// activeLoader = loader;
			XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_11 = V_1;
			XRManagerSettings_set_activeLoader_m77ACE8749C38314C5DA2A6A4F6551DDBC552EC72(__this, L_11, /*hidden argument*/NULL);
			// m_InitializationComplete = true;
			__this->set_m_InitializationComplete_4((bool)1);
			// return;
			IL2CPP_LEAVE(0x79, FINALLY_0064);
		}

IL_0059:
		{
			// foreach (var loader in loaders)
			bool L_12 = Enumerator_MoveNext_m19D8DC887F99E56196FA26536373CE0E192D6741((Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m19D8DC887F99E56196FA26536373CE0E192D6741_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0027;
			}
		}

IL_0062:
		{
			IL2CPP_LEAVE(0x72, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m90A4F0B5CA0D3890D8D3E4676EE09E17B22AA9C7((Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF *)(&V_0), /*hidden argument*/Enumerator_Dispose_m90A4F0B5CA0D3890D8D3E4676EE09E17B22AA9C7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(100)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_JUMP_TBL(0x79, IL_0079)
		IL2CPP_JUMP_TBL(0x72, IL_0072)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0072:
	{
		// activeLoader = null;
		XRManagerSettings_set_activeLoader_m77ACE8749C38314C5DA2A6A4F6551DDBC552EC72(__this, (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)NULL, /*hidden argument*/NULL);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.XR.Management.XRManagerSettings::InitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_InitializeLoader_m92B987C89AF6F7E7D05718296243E0ED021FD6B3 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRManagerSettings_InitializeLoader_m92B987C89AF6F7E7D05718296243E0ED021FD6B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CInitializeLoaderU3Ed__21_t33F713BAD7F9E813CC17C37E95C97FADB25AC5A8 * L_0 = (U3CInitializeLoaderU3Ed__21_t33F713BAD7F9E813CC17C37E95C97FADB25AC5A8 *)il2cpp_codegen_object_new(U3CInitializeLoaderU3Ed__21_t33F713BAD7F9E813CC17C37E95C97FADB25AC5A8_il2cpp_TypeInfo_var);
		U3CInitializeLoaderU3Ed__21__ctor_m377FCA2657FA6F45F32B6D2F7573FA52D474B2C6(L_0, 0, /*hidden argument*/NULL);
		U3CInitializeLoaderU3Ed__21_t33F713BAD7F9E813CC17C37E95C97FADB25AC5A8 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::CheckGraphicsAPICompatibility(UnityEngine.XR.Management.XRLoader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRManagerSettings_CheckGraphicsAPICompatibility_m0A5AABEC0CF864942733D746120B368C5605FA63 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * ___loader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRManagerSettings_CheckGraphicsAPICompatibility_m0A5AABEC0CF864942733D746120B368C5605FA63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t00813CFE30B665F36E8422B4070F39D77D700541 * V_1 = NULL;
	{
		// GraphicsDeviceType deviceType = SystemInfo.graphicsDeviceType;
		int32_t L_0 = SystemInfo_get_graphicsDeviceType_mC207E6B2221AD5AB39831C2412FF7FBD2F43CC02(/*hidden argument*/NULL);
		V_0 = L_0;
		// List<GraphicsDeviceType> supportedDeviceTypes = loader.GetSupportedGraphicsDeviceTypes(false);
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_1 = ___loader0;
		NullCheck(L_1);
		List_1_t00813CFE30B665F36E8422B4070F39D77D700541 * L_2 = VirtFuncInvoker1< List_1_t00813CFE30B665F36E8422B4070F39D77D700541 *, bool >::Invoke(9 /* System.Collections.Generic.List`1<UnityEngine.Rendering.GraphicsDeviceType> UnityEngine.XR.Management.XRLoader::GetSupportedGraphicsDeviceTypes(System.Boolean) */, L_1, (bool)0);
		V_1 = L_2;
		// if (supportedDeviceTypes.Count > 0 && !supportedDeviceTypes.Contains(deviceType))
		List_1_t00813CFE30B665F36E8422B4070F39D77D700541 * L_3 = V_1;
		NullCheck(L_3);
		int32_t L_4 = List_1_get_Count_mDC5A0FFB7BA8225B30C2C7BE2AFC9895D9F4D597_inline(L_3, /*hidden argument*/List_1_get_Count_mDC5A0FFB7BA8225B30C2C7BE2AFC9895D9F4D597_RuntimeMethod_var);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		List_1_t00813CFE30B665F36E8422B4070F39D77D700541 * L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		bool L_7 = List_1_Contains_mDEC6135EE93032A5029A986B35022BFD7B4379F4(L_5, L_6, /*hidden argument*/List_1_Contains_mDEC6135EE93032A5029A986B35022BFD7B4379F4_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0044;
		}
	}
	{
		// Debug.LogWarning(String.Format("The {0} does not support the initialized graphics device, {1}. Please change the preffered Graphics API in PlayerSettings. Attempting to start the next XR loader.", loader.name, deviceType.ToString()));
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_8 = ___loader0;
		NullCheck(L_8);
		String_t* L_9 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_8, /*hidden argument*/NULL);
		RuntimeObject * L_10 = Box(GraphicsDeviceType_t531071CD9311C868D1279D2550F83670D18FB779_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		V_0 = *(int32_t*)UnBox(L_10);
		String_t* L_12 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral6B8B436F01039B99374349DB664935E4E9FA600B, L_9, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_12, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0044:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::StartSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StartSubsystems_mB9F502956C1FC6AD6D421CD36C3980B095B4282E (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRManagerSettings_StartSubsystems_mB9F502956C1FC6AD6D421CD36C3980B095B4282E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_InitializationComplete)
		bool L_0 = __this->get_m_InitializationComplete_4();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogWarning(
		//     "Call to StartSubsystems without an initialized manager." +
		//     "Please make sure wait for initialization to complete before calling this API.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralAE0ABAD544C4FF6309990ACB67971500C1591984, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// if (activeLoader != null)
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_1 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// activeLoader.Start();
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_3 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean UnityEngine.XR.Management.XRLoader::Start() */, L_3);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::StopSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StopSubsystems_m7FF3553EEF8C7AB1D58A3D9034A25D8C31D30FFC (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRManagerSettings_StopSubsystems_m7FF3553EEF8C7AB1D58A3D9034A25D8C31D30FFC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_InitializationComplete)
		bool L_0 = __this->get_m_InitializationComplete_4();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogWarning(
		//     "Call to StopSubsystems without an initialized manager." +
		//     "Please make sure wait for initialization to complete before calling this API.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral46E098C88DA5E70C12C778EED75B14DE754DBDB6, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// if (activeLoader != null)
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_1 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// activeLoader.Stop();
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_3 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.XR.Management.XRLoader::Stop() */, L_3);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::DeinitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_DeinitializeLoader_m6AD4F079818DF78946C99AD8D49E3D343DAAF290 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRManagerSettings_DeinitializeLoader_m6AD4F079818DF78946C99AD8D49E3D343DAAF290_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_InitializationComplete)
		bool L_0 = __this->get_m_InitializationComplete_4();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogWarning(
		//     "Call to DeinitializeLoader without an initialized manager." +
		//     "Please make sure wait for initialization to complete before calling this API.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral382C2D644BFA222F1F3E9ECB531AE6F3D95044FF, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// StopSubsystems();
		XRManagerSettings_StopSubsystems_m7FF3553EEF8C7AB1D58A3D9034A25D8C31D30FFC(__this, /*hidden argument*/NULL);
		// if (activeLoader != null)
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_1 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		// activeLoader.Deinitialize();
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_3 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.XR.Management.XRLoader::Deinitialize() */, L_3);
		// activeLoader = null;
		XRManagerSettings_set_activeLoader_m77ACE8749C38314C5DA2A6A4F6551DDBC552EC72(__this, (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)NULL, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// m_InitializationComplete = false;
		__this->set_m_InitializationComplete_4((bool)0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_Start_mC3C0B0D138802215C7F3E441D5D517F875A4E582 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// if (automaticLoading && automaticRunning)
		bool L_0 = XRManagerSettings_get_automaticLoading_m2F854EC3F5A23B77C3819988414EEA070B3A067B_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = XRManagerSettings_get_automaticRunning_m35A499E67629829BB4E89952FC3778D55D685890_inline(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// StartSubsystems();
		XRManagerSettings_StartSubsystems_mB9F502956C1FC6AD6D421CD36C3980B095B4282E(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_OnDisable_mA755DECB077780BDAB72067FBB69DB25452BC782 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// if (automaticLoading && automaticRunning)
		bool L_0 = XRManagerSettings_get_automaticLoading_m2F854EC3F5A23B77C3819988414EEA070B3A067B_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = XRManagerSettings_get_automaticRunning_m35A499E67629829BB4E89952FC3778D55D685890_inline(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// StopSubsystems();
		XRManagerSettings_StopSubsystems_m7FF3553EEF8C7AB1D58A3D9034A25D8C31D30FFC(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_OnDestroy_m1254BD5929E70938B2906C3E04A54BB6F2EAC793 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// if (automaticLoading)
		bool L_0 = XRManagerSettings_get_automaticLoading_m2F854EC3F5A23B77C3819988414EEA070B3A067B_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// DeinitializeLoader();
		XRManagerSettings_DeinitializeLoader_m6AD4F079818DF78946C99AD8D49E3D343DAAF290(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings__ctor_m00CA8F7EAA0858EC7F726043164C595B313A3881 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRManagerSettings__ctor_m00CA8F7EAA0858EC7F726043164C595B313A3881_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<XRLoader> m_Loaders = new List<XRLoader>();
		List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * L_0 = (List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 *)il2cpp_codegen_object_new(List_1_t6331523A19E51FB87CA899920C03B10A48A562B0_il2cpp_TypeInfo_var);
		List_1__ctor_mC89CC0C2318DA4814B4A860E7EDF82390819C439(L_0, /*hidden argument*/List_1__ctor_mC89CC0C2318DA4814B4A860E7EDF82390819C439_RuntimeMethod_var);
		__this->set_m_Loaders_8(L_0);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings__cctor_m84F97AFC90FD3FE746CCDA1764C3ED2544A5B86A (const RuntimeMethod* method)
{
	{
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
// System.Void UnityEngine.XR.Management.XRManagerSettings_<InitializeLoader>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLoaderU3Ed__21__ctor_m377FCA2657FA6F45F32B6D2F7573FA52D474B2C6 (U3CInitializeLoaderU3Ed__21_t33F713BAD7F9E813CC17C37E95C97FADB25AC5A8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings_<InitializeLoader>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLoaderU3Ed__21_System_IDisposable_Dispose_mB226DD42568855401ABA76E441995FB242FCF35B (U3CInitializeLoaderU3Ed__21_t33F713BAD7F9E813CC17C37E95C97FADB25AC5A8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CInitializeLoaderU3Ed__21_U3CU3Em__Finally1_mC3CA8F2390164033FC5E0A8046BD3A780D07C4C1(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.Management.XRManagerSettings_<InitializeLoader>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CInitializeLoaderU3Ed__21_MoveNext_m7EF7402BC167D2C982E0C87C8CD6E2464A108035 (U3CInitializeLoaderU3Ed__21_t33F713BAD7F9E813CC17C37E95C97FADB25AC5A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CInitializeLoaderU3Ed__21_MoveNext_m7EF7402BC167D2C982E0C87C8CD6E2464A108035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * V_2 = NULL;
	XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001f;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00aa;
			}
		}

IL_0018:
		{
			V_0 = (bool)0;
			goto IL_00ed;
		}

IL_001f:
		{
			__this->set_U3CU3E1__state_0((-1));
			// if (activeLoader != null)
			XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_4 = V_2;
			NullCheck(L_4);
			XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_5 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline(L_4, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0045;
			}
		}

IL_0034:
		{
			// Debug.LogWarning(
			//     "XR Management has already initialized an active loader in this scene." +
			//     "Please make sure to stop all subsystems and deinitialize the active loader before initializing a new one.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral5C10A8C7ED5A1BA07E65C73073DD018933F7FDB6, /*hidden argument*/NULL);
			// yield break;
			V_0 = (bool)0;
			goto IL_00ed;
		}

IL_0045:
		{
			// foreach (var loader in loaders)
			XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_7 = V_2;
			NullCheck(L_7);
			List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * L_8 = XRManagerSettings_get_loaders_mEBFC514878CB5F85A0602F4075E5CBC2E36E89EA_inline(L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF  L_9 = List_1_GetEnumerator_m9F891CF9308557447A884247550828A4932787EC(L_8, /*hidden argument*/List_1_GetEnumerator_m9F891CF9308557447A884247550828A4932787EC_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_3(L_9);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_00b2;
		}

IL_0060:
		{
			// foreach (var loader in loaders)
			Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF * L_10 = __this->get_address_of_U3CU3E7__wrap1_3();
			XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_11 = Enumerator_get_Current_m7EF1367FE7BF714A357AD14CE9116844D666EAF8_inline((Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF *)L_10, /*hidden argument*/Enumerator_get_Current_m7EF1367FE7BF714A357AD14CE9116844D666EAF8_RuntimeMethod_var);
			V_3 = L_11;
			// if (loader != null)
			XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_12 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_13 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_0098;
			}
		}

IL_0075:
		{
			// if (CheckGraphicsAPICompatibility(loader) && loader.Initialize())
			XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_14 = V_2;
			XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_15 = V_3;
			NullCheck(L_14);
			bool L_16 = XRManagerSettings_CheckGraphicsAPICompatibility_m0A5AABEC0CF864942733D746120B368C5605FA63(L_14, L_15, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_0098;
			}
		}

IL_007e:
		{
			XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_17 = V_3;
			NullCheck(L_17);
			bool L_18 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.XR.Management.XRLoader::Initialize() */, L_17);
			if (!L_18)
			{
				goto IL_0098;
			}
		}

IL_0086:
		{
			// activeLoader = loader;
			XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_19 = V_2;
			XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_20 = V_3;
			NullCheck(L_19);
			XRManagerSettings_set_activeLoader_m77ACE8749C38314C5DA2A6A4F6551DDBC552EC72(L_19, L_20, /*hidden argument*/NULL);
			// m_InitializationComplete = true;
			XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_21 = V_2;
			NullCheck(L_21);
			L_21->set_m_InitializationComplete_4((bool)1);
			// yield break;
			V_0 = (bool)0;
			goto IL_00c7;
		}

IL_0098:
		{
			// yield return null;
			__this->set_U3CU3E2__current_1(NULL);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00ed;
		}

IL_00aa:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_00b2:
		{
			// foreach (var loader in loaders)
			Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF * L_22 = __this->get_address_of_U3CU3E7__wrap1_3();
			bool L_23 = Enumerator_MoveNext_m19D8DC887F99E56196FA26536373CE0E192D6741((Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF *)L_22, /*hidden argument*/Enumerator_MoveNext_m19D8DC887F99E56196FA26536373CE0E192D6741_RuntimeMethod_var);
			if (L_23)
			{
				goto IL_0060;
			}
		}

IL_00bf:
		{
			U3CInitializeLoaderU3Ed__21_U3CU3Em__Finally1_mC3CA8F2390164033FC5E0A8046BD3A780D07C4C1(__this, /*hidden argument*/NULL);
			goto IL_00cf;
		}

IL_00c7:
		{
			U3CInitializeLoaderU3Ed__21_U3CU3Em__Finally1_mC3CA8F2390164033FC5E0A8046BD3A780D07C4C1(__this, /*hidden argument*/NULL);
			goto IL_00ed;
		}

IL_00cf:
		{
			Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF * L_24 = __this->get_address_of_U3CU3E7__wrap1_3();
			il2cpp_codegen_initobj(L_24, sizeof(Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF ));
			// activeLoader = null;
			XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_25 = V_2;
			NullCheck(L_25);
			XRManagerSettings_set_activeLoader_m77ACE8749C38314C5DA2A6A4F6551DDBC552EC72(L_25, (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)NULL, /*hidden argument*/NULL);
			// }
			V_0 = (bool)0;
			goto IL_00ed;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00e6;
	}

FAULT_00e6:
	{ // begin fault (depth: 1)
		U3CInitializeLoaderU3Ed__21_System_IDisposable_Dispose_mB226DD42568855401ABA76E441995FB242FCF35B(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(230)
	} // end fault
	IL2CPP_CLEANUP(230)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ed:
	{
		bool L_26 = V_0;
		return L_26;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings_<InitializeLoader>d__21::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLoaderU3Ed__21_U3CU3Em__Finally1_mC3CA8F2390164033FC5E0A8046BD3A780D07C4C1 (U3CInitializeLoaderU3Ed__21_t33F713BAD7F9E813CC17C37E95C97FADB25AC5A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CInitializeLoaderU3Ed__21_U3CU3Em__Finally1_mC3CA8F2390164033FC5E0A8046BD3A780D07C4C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF * L_0 = __this->get_address_of_U3CU3E7__wrap1_3();
		Enumerator_Dispose_m90A4F0B5CA0D3890D8D3E4676EE09E17B22AA9C7((Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF *)L_0, /*hidden argument*/Enumerator_Dispose_m90A4F0B5CA0D3890D8D3E4676EE09E17B22AA9C7_RuntimeMethod_var);
		return;
	}
}
// System.Object UnityEngine.XR.Management.XRManagerSettings_<InitializeLoader>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CInitializeLoaderU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7B1D5D99FABAB4B7E06D77BA3C9FB8FAE3B72688 (U3CInitializeLoaderU3Ed__21_t33F713BAD7F9E813CC17C37E95C97FADB25AC5A8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.XR.Management.XRManagerSettings_<InitializeLoader>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLoaderU3Ed__21_System_Collections_IEnumerator_Reset_mEB790BAC541F1CFF987BC962D2704FA60FA92407 (U3CInitializeLoaderU3Ed__21_t33F713BAD7F9E813CC17C37E95C97FADB25AC5A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CInitializeLoaderU3Ed__21_System_Collections_IEnumerator_Reset_mEB790BAC541F1CFF987BC962D2704FA60FA92407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CInitializeLoaderU3Ed__21_System_Collections_IEnumerator_Reset_mEB790BAC541F1CFF987BC962D2704FA60FA92407_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.XR.Management.XRManagerSettings_<InitializeLoader>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CInitializeLoaderU3Ed__21_System_Collections_IEnumerator_get_Current_m3C9EDD08D016676ED1F7B06C1078CB0BE5B16239 (U3CInitializeLoaderU3Ed__21_t33F713BAD7F9E813CC17C37E95C97FADB25AC5A8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68DUnity_XR_Management_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_0 = ((XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var))->get_s_RuntimeSettingsInstance_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRGeneralSettings_get_InitManagerOnStart_m21A3FAE9CDFED7D125E0794EFC2C2B18E3878E53_inline (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method)
{
	{
		// return m_InitManagerOnStart;
		bool L_0 = __this->get_m_InitManagerOnStart_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRManagerSettings_set_automaticLoading_m955E88785E48CD480FC0D2198F68AFAC419C7E53_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_AutomaticLoading = value; }
		bool L_0 = ___value0;
		__this->set_m_AutomaticLoading_6(L_0);
		// set { m_AutomaticLoading = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRManagerSettings_set_automaticRunning_mDD9D47FD94BD122FA725ED624D056108DAE22E0C_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_AutomaticRunning = value; }
		bool L_0 = ___value0;
		__this->set_m_AutomaticRunning_7(L_0);
		// set { m_AutomaticRunning = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8Unity_XR_Management_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRLoader activeLoader { get { return s_ActiveLoader; } private set { s_ActiveLoader = value; } }
		IL2CPP_RUNTIME_CLASS_INIT(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F_il2cpp_TypeInfo_var);
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_0 = ((XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F_StaticFields*)il2cpp_codegen_static_fields_for(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F_il2cpp_TypeInfo_var))->get_s_ActiveLoader_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * XRManagerSettings_get_loaders_mEBFC514878CB5F85A0602F4075E5CBC2E36E89EA_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Loaders; }
		List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * L_0 = __this->get_m_Loaders_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRManagerSettings_get_automaticLoading_m2F854EC3F5A23B77C3819988414EEA070B3A067B_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_AutomaticLoading; }
		bool L_0 = __this->get_m_AutomaticLoading_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRManagerSettings_get_automaticRunning_m35A499E67629829BB4E89952FC3778D55D685890_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_AutomaticRunning; }
		bool L_0 = __this->get_m_AutomaticRunning_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3632094BEC4410A1022FD0293E7BA88FC3B811A8_gshared_inline (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
