#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A;
// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>
struct List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248;
// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>
struct List_1_t33EFE71131470863D507CAF630920B63D09EBA7D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData[]
struct PoseDataU5BU5D_t346C3131C8ECEE09A786918A1E181B692931CDD2;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose[]
struct TrackedPoseU5BU5D_tA6283C65F27796E296D31FE0624D9F8632B4C330;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.XR.XRNodeState[]
struct XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t33EFE71131470863D507CAF630920B63D09EBA7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoseDataSource_t729321C69DC33F646ED3624A4E79FFDB69C51D44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackedPoseDriverDataDescription_t1DDD4ABD8892762FC3F4825233D1EA413197B9A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackedPose_t1326EFD84D48C3339F652B2A072743C3189B581B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2C8BB561E77F4491856EDA21B73347023391A8B0;
IL2CPP_EXTERN_C String_t* _stringLiteral6A11DF976BD5EBFB477A52077A195879735F1FA0;
IL2CPP_EXTERN_C String_t* _stringLiteral874BE1B2177F8C02B786BA933E78AD9FE1D377DD;
IL2CPP_EXTERN_C String_t* _stringLiteral8DD8D6FCBA1E38E53530F55F7B9061E65C123321;
IL2CPP_EXTERN_C String_t* _stringLiteral8EE78D2535F543B0B3532765572FC019F362EBEC;
IL2CPP_EXTERN_C String_t* _stringLiteral960416C64D6FEDF29B47FEF63B743ADBF6A3ACF5;
IL2CPP_EXTERN_C String_t* _stringLiteral98018BE8EB53CB8EC9307D4EEAAA001D606E788C;
IL2CPP_EXTERN_C String_t* _stringLiteralE5E47A84BACC0A71E6C87A5ABF7CCC8D26BDE8D3;
IL2CPP_EXTERN_C String_t* _stringLiteralF86B5632D37D8A2636B0D34CA903B4B3375A0ACA;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5FF6C2B5FB5E2F9D861FD0CBD0BFBB834D51D151_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD2AB4E61B8B6509EFD4F2F494AEE4EFB83CA6DFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4C1614B853F22411D204D9EAD439EA975ECE2045_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8423440DDD54288DC264FFCD7F9848ED82D062E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB0854EF29CAB5A930221EB89C97546C4E8853F3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m38D582CE4576A078108B1BF912438E949C78CF61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4019848F190800D1255B127B3D2231477C25961B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6E50E67F1989DED24B9283E2062D908ECB958F61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8247059DDA6122611B3808A93A11E2F659F61E57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9A7BAE7FCF0DEB63AA69CF8E83ABFF2737C528BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC1CF8AEE45E96DBF272078B548C3772656E8E343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mAC243D79CA56D7EA114A1A1B676D2F409E9450D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF5D8C65E5A36E433D821E6A75F9E9AE37DE1E849_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t BasePoseProvider_TryGetPoseFromProvider_m11A36133DF8443E404B4013ECC15DF8AF271F444_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PoseDataSource_GetDataFromSource_m18CC14907C8F553CEA8EF45BFB120459F3101B64_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PoseDataSource_GetNodePoseData_m2D3C847ECE40571FB7B54D3BC85EC36FA6E0F429_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PoseDataSource_TryGetTangoPose_m89124F603791D2DA9261C168C61CE96609275936_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PoseDataSource__cctor_m9400FAF20887D6406031503DA0F69AB38BC4623B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackedPoseDriverDataDescription__cctor_mDC691B96466913EF3D97E79F8A767F6A52498ED0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackedPoseDriver_GetPoseData_m9B358015ECDF35A5D4AE27FB2E28EEA6636CB4FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackedPoseDriver_HasStereoCamera_m5F580465511FC0AFD7E38E12D57C9A904D1D6C5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackedPoseDriver_OnDisable_m10388305861B8ABE3141D55610C890EBE196E22A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackedPoseDriver_OnEnable_m0DEBD5BA1284BDE25C877A88A89EB2EBE6C01ACB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackedPoseDriver_PerformUpdate_m11C2E25E8074FBE8523C86D977EAD82CA0B5137A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackedPoseDriver_SetPoseSource_m181681C7AE7DB67B11C48383C6AD0363CB549B07_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct PoseDataU5BU5D_t346C3131C8ECEE09A786918A1E181B692931CDD2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tF7FEB84D8A221BE7CE101152ED17C3BE04A96C35 
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


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose>
struct  List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TrackedPoseU5BU5D_tA6283C65F27796E296D31FE0624D9F8632B4C330* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248, ____items_1)); }
	inline TrackedPoseU5BU5D_tA6283C65F27796E296D31FE0624D9F8632B4C330* get__items_1() const { return ____items_1; }
	inline TrackedPoseU5BU5D_tA6283C65F27796E296D31FE0624D9F8632B4C330** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TrackedPoseU5BU5D_tA6283C65F27796E296D31FE0624D9F8632B4C330* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TrackedPoseU5BU5D_tA6283C65F27796E296D31FE0624D9F8632B4C330* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248_StaticFields, ____emptyArray_5)); }
	inline TrackedPoseU5BU5D_tA6283C65F27796E296D31FE0624D9F8632B4C330* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TrackedPoseU5BU5D_tA6283C65F27796E296D31FE0624D9F8632B4C330** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TrackedPoseU5BU5D_tA6283C65F27796E296D31FE0624D9F8632B4C330* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription_PoseData>
struct  List_1_t33EFE71131470863D507CAF630920B63D09EBA7D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PoseDataU5BU5D_t346C3131C8ECEE09A786918A1E181B692931CDD2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t33EFE71131470863D507CAF630920B63D09EBA7D, ____items_1)); }
	inline PoseDataU5BU5D_t346C3131C8ECEE09A786918A1E181B692931CDD2* get__items_1() const { return ____items_1; }
	inline PoseDataU5BU5D_t346C3131C8ECEE09A786918A1E181B692931CDD2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PoseDataU5BU5D_t346C3131C8ECEE09A786918A1E181B692931CDD2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t33EFE71131470863D507CAF630920B63D09EBA7D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t33EFE71131470863D507CAF630920B63D09EBA7D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t33EFE71131470863D507CAF630920B63D09EBA7D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t33EFE71131470863D507CAF630920B63D09EBA7D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PoseDataU5BU5D_t346C3131C8ECEE09A786918A1E181B692931CDD2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t33EFE71131470863D507CAF630920B63D09EBA7D_StaticFields, ____emptyArray_5)); }
	inline PoseDataU5BU5D_t346C3131C8ECEE09A786918A1E181B692931CDD2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PoseDataU5BU5D_t346C3131C8ECEE09A786918A1E181B692931CDD2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PoseDataU5BU5D_t346C3131C8ECEE09A786918A1E181B692931CDD2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct  List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671, ____items_1)); }
	inline XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5* get__items_1() const { return ____items_1; }
	inline XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671_StaticFields, ____emptyArray_5)); }
	inline XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5* value)
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

// UnityEngine.SpatialTracking.PoseDataSource
struct  PoseDataSource_t729321C69DC33F646ED3624A4E79FFDB69C51D44  : public RuntimeObject
{
public:

public:
};

struct PoseDataSource_t729321C69DC33F646ED3624A4E79FFDB69C51D44_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> UnityEngine.SpatialTracking.PoseDataSource::nodeStates
	List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * ___nodeStates_0;

public:
	inline static int32_t get_offset_of_nodeStates_0() { return static_cast<int32_t>(offsetof(PoseDataSource_t729321C69DC33F646ED3624A4E79FFDB69C51D44_StaticFields, ___nodeStates_0)); }
	inline List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * get_nodeStates_0() const { return ___nodeStates_0; }
	inline List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 ** get_address_of_nodeStates_0() { return &___nodeStates_0; }
	inline void set_nodeStates_0(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * value)
	{
		___nodeStates_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nodeStates_0), (void*)value);
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription
struct  TrackedPoseDriverDataDescription_t1DDD4ABD8892762FC3F4825233D1EA413197B9A1  : public RuntimeObject
{
public:

public:
};

struct TrackedPoseDriverDataDescription_t1DDD4ABD8892762FC3F4825233D1EA413197B9A1_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription_PoseData> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription::DeviceData
	List_1_t33EFE71131470863D507CAF630920B63D09EBA7D * ___DeviceData_0;

public:
	inline static int32_t get_offset_of_DeviceData_0() { return static_cast<int32_t>(offsetof(TrackedPoseDriverDataDescription_t1DDD4ABD8892762FC3F4825233D1EA413197B9A1_StaticFields, ___DeviceData_0)); }
	inline List_1_t33EFE71131470863D507CAF630920B63D09EBA7D * get_DeviceData_0() const { return ___DeviceData_0; }
	inline List_1_t33EFE71131470863D507CAF630920B63D09EBA7D ** get_address_of_DeviceData_0() { return &___DeviceData_0; }
	inline void set_DeviceData_0(List_1_t33EFE71131470863D507CAF630920B63D09EBA7D * value)
	{
		___DeviceData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeviceData_0), (void*)value);
	}
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


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription_PoseData
struct  PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3 
{
public:
	// System.Collections.Generic.List`1<System.String> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription_PoseData::PoseNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___PoseNames_0;
	// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription_PoseData::Poses
	List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * ___Poses_1;

public:
	inline static int32_t get_offset_of_PoseNames_0() { return static_cast<int32_t>(offsetof(PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3, ___PoseNames_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_PoseNames_0() const { return ___PoseNames_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_PoseNames_0() { return &___PoseNames_0; }
	inline void set_PoseNames_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___PoseNames_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PoseNames_0), (void*)value);
	}

	inline static int32_t get_offset_of_Poses_1() { return static_cast<int32_t>(offsetof(PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3, ___Poses_1)); }
	inline List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * get_Poses_1() const { return ___Poses_1; }
	inline List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 ** get_address_of_Poses_1() { return &___Poses_1; }
	inline void set_Poses_1(List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * value)
	{
		___Poses_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Poses_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3_marshaled_pinvoke
{
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___PoseNames_0;
	List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * ___Poses_1;
};
// Native definition for COM marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3_marshaled_com
{
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___PoseNames_0;
	List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * ___Poses_1;
};

// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
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

// UnityEngine.Pose
struct  Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.SpatialTracking.PoseDataFlags
struct  PoseDataFlags_tB6A466AA30BE06A3F9ABA4C63BC7E4912FB8C6D7 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.PoseDataFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PoseDataFlags_tB6A466AA30BE06A3F9ABA4C63BC7E4912FB8C6D7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver_DeviceType
struct  DeviceType_tAE2B3246436F9B924A6284C9C0603322DD6D09E8 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver_DeviceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceType_tAE2B3246436F9B924A6284C9C0603322DD6D09E8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose
struct  TrackedPose_t1326EFD84D48C3339F652B2A072743C3189B581B 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedPose_t1326EFD84D48C3339F652B2A072743C3189B581B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver_TrackingType
struct  TrackingType_t6524BC8345E54C620E3557D2BD223CEAF7CA5EA9 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver_TrackingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingType_t6524BC8345E54C620E3557D2BD223CEAF7CA5EA9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver_UpdateType
struct  UpdateType_t4CA0C1D1034EEB2D3CB9C008009B2F4967CD658E 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver_UpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateType_t4CA0C1D1034EEB2D3CB9C008009B2F4967CD658E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.AvailableTrackingData
struct  AvailableTrackingData_tECF9F41E063E32F92AF43156E0C61190C82B47FC 
{
public:
	// System.Int32 UnityEngine.XR.AvailableTrackingData::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AvailableTrackingData_tECF9F41E063E32F92AF43156E0C61190C82B47FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.Tango.PoseStatus
struct  PoseStatus_tE2709BBA5C636A8485BD0FB152CD936CACA9336C 
{
public:
	// System.Int32 UnityEngine.XR.Tango.PoseStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PoseStatus_tE2709BBA5C636A8485BD0FB152CD936CACA9336C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.XRNode
struct  XRNode_t07B789D60F5B3A4F0E4A169143881ABCA4176DBD 
{
public:
	// System.Int32 UnityEngine.XR.XRNode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XRNode_t07B789D60F5B3A4F0E4A169143881ABCA4176DBD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.XR.Tango.PoseData
struct  PoseData_t291D206DDA816BEA210B5659CEB0E5953912809E 
{
public:
	// System.Double UnityEngine.XR.Tango.PoseData::orientation_x
	double ___orientation_x_0;
	// System.Double UnityEngine.XR.Tango.PoseData::orientation_y
	double ___orientation_y_1;
	// System.Double UnityEngine.XR.Tango.PoseData::orientation_z
	double ___orientation_z_2;
	// System.Double UnityEngine.XR.Tango.PoseData::orientation_w
	double ___orientation_w_3;
	// System.Double UnityEngine.XR.Tango.PoseData::translation_x
	double ___translation_x_4;
	// System.Double UnityEngine.XR.Tango.PoseData::translation_y
	double ___translation_y_5;
	// System.Double UnityEngine.XR.Tango.PoseData::translation_z
	double ___translation_z_6;
	// UnityEngine.XR.Tango.PoseStatus UnityEngine.XR.Tango.PoseData::statusCode
	int32_t ___statusCode_7;

public:
	inline static int32_t get_offset_of_orientation_x_0() { return static_cast<int32_t>(offsetof(PoseData_t291D206DDA816BEA210B5659CEB0E5953912809E, ___orientation_x_0)); }
	inline double get_orientation_x_0() const { return ___orientation_x_0; }
	inline double* get_address_of_orientation_x_0() { return &___orientation_x_0; }
	inline void set_orientation_x_0(double value)
	{
		___orientation_x_0 = value;
	}

	inline static int32_t get_offset_of_orientation_y_1() { return static_cast<int32_t>(offsetof(PoseData_t291D206DDA816BEA210B5659CEB0E5953912809E, ___orientation_y_1)); }
	inline double get_orientation_y_1() const { return ___orientation_y_1; }
	inline double* get_address_of_orientation_y_1() { return &___orientation_y_1; }
	inline void set_orientation_y_1(double value)
	{
		___orientation_y_1 = value;
	}

	inline static int32_t get_offset_of_orientation_z_2() { return static_cast<int32_t>(offsetof(PoseData_t291D206DDA816BEA210B5659CEB0E5953912809E, ___orientation_z_2)); }
	inline double get_orientation_z_2() const { return ___orientation_z_2; }
	inline double* get_address_of_orientation_z_2() { return &___orientation_z_2; }
	inline void set_orientation_z_2(double value)
	{
		___orientation_z_2 = value;
	}

	inline static int32_t get_offset_of_orientation_w_3() { return static_cast<int32_t>(offsetof(PoseData_t291D206DDA816BEA210B5659CEB0E5953912809E, ___orientation_w_3)); }
	inline double get_orientation_w_3() const { return ___orientation_w_3; }
	inline double* get_address_of_orientation_w_3() { return &___orientation_w_3; }
	inline void set_orientation_w_3(double value)
	{
		___orientation_w_3 = value;
	}

	inline static int32_t get_offset_of_translation_x_4() { return static_cast<int32_t>(offsetof(PoseData_t291D206DDA816BEA210B5659CEB0E5953912809E, ___translation_x_4)); }
	inline double get_translation_x_4() const { return ___translation_x_4; }
	inline double* get_address_of_translation_x_4() { return &___translation_x_4; }
	inline void set_translation_x_4(double value)
	{
		___translation_x_4 = value;
	}

	inline static int32_t get_offset_of_translation_y_5() { return static_cast<int32_t>(offsetof(PoseData_t291D206DDA816BEA210B5659CEB0E5953912809E, ___translation_y_5)); }
	inline double get_translation_y_5() const { return ___translation_y_5; }
	inline double* get_address_of_translation_y_5() { return &___translation_y_5; }
	inline void set_translation_y_5(double value)
	{
		___translation_y_5 = value;
	}

	inline static int32_t get_offset_of_translation_z_6() { return static_cast<int32_t>(offsetof(PoseData_t291D206DDA816BEA210B5659CEB0E5953912809E, ___translation_z_6)); }
	inline double get_translation_z_6() const { return ___translation_z_6; }
	inline double* get_address_of_translation_z_6() { return &___translation_z_6; }
	inline void set_translation_z_6(double value)
	{
		___translation_z_6 = value;
	}

	inline static int32_t get_offset_of_statusCode_7() { return static_cast<int32_t>(offsetof(PoseData_t291D206DDA816BEA210B5659CEB0E5953912809E, ___statusCode_7)); }
	inline int32_t get_statusCode_7() const { return ___statusCode_7; }
	inline int32_t* get_address_of_statusCode_7() { return &___statusCode_7; }
	inline void set_statusCode_7(int32_t value)
	{
		___statusCode_7 = value;
	}
};


// UnityEngine.XR.XRNodeState
struct  XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 
{
public:
	// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::m_Type
	int32_t ___m_Type_0;
	// UnityEngine.XR.AvailableTrackingData UnityEngine.XR.XRNodeState::m_AvailableFields
	int32_t ___m_AvailableFields_1;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Position_2;
	// UnityEngine.Quaternion UnityEngine.XR.XRNodeState::m_Rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_Rotation_3;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_AngularVelocity_5;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Acceleration
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Acceleration_6;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularAcceleration
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_AngularAcceleration_7;
	// System.Int32 UnityEngine.XR.XRNodeState::m_Tracked
	int32_t ___m_Tracked_8;
	// System.UInt64 UnityEngine.XR.XRNodeState::m_UniqueID
	uint64_t ___m_UniqueID_9;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_AvailableFields_1() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_AvailableFields_1)); }
	inline int32_t get_m_AvailableFields_1() const { return ___m_AvailableFields_1; }
	inline int32_t* get_address_of_m_AvailableFields_1() { return &___m_AvailableFields_1; }
	inline void set_m_AvailableFields_1(int32_t value)
	{
		___m_AvailableFields_1 = value;
	}

	inline static int32_t get_offset_of_m_Position_2() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Position_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Position_2() const { return ___m_Position_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Position_2() { return &___m_Position_2; }
	inline void set_m_Position_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Position_2 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_3() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Rotation_3)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_Rotation_3() const { return ___m_Rotation_3; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_Rotation_3() { return &___m_Rotation_3; }
	inline void set_m_Rotation_3(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_Rotation_3 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_4() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Velocity_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Velocity_4() const { return ___m_Velocity_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Velocity_4() { return &___m_Velocity_4; }
	inline void set_m_Velocity_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Velocity_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_5() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_AngularVelocity_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_AngularVelocity_5() const { return ___m_AngularVelocity_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_AngularVelocity_5() { return &___m_AngularVelocity_5; }
	inline void set_m_AngularVelocity_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_AngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Acceleration_6() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Acceleration_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Acceleration_6() const { return ___m_Acceleration_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Acceleration_6() { return &___m_Acceleration_6; }
	inline void set_m_Acceleration_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Acceleration_6 = value;
	}

	inline static int32_t get_offset_of_m_AngularAcceleration_7() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_AngularAcceleration_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_AngularAcceleration_7() const { return ___m_AngularAcceleration_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_AngularAcceleration_7() { return &___m_AngularAcceleration_7; }
	inline void set_m_AngularAcceleration_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_AngularAcceleration_7 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_8() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Tracked_8)); }
	inline int32_t get_m_Tracked_8() const { return ___m_Tracked_8; }
	inline int32_t* get_address_of_m_Tracked_8() { return &___m_Tracked_8; }
	inline void set_m_Tracked_8(int32_t value)
	{
		___m_Tracked_8 = value;
	}

	inline static int32_t get_offset_of_m_UniqueID_9() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_UniqueID_9)); }
	inline uint64_t get_m_UniqueID_9() const { return ___m_UniqueID_9; }
	inline uint64_t* get_address_of_m_UniqueID_9() { return &___m_UniqueID_9; }
	inline void set_m_UniqueID_9(uint64_t value)
	{
		___m_UniqueID_9 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.XR.XRNodeState>
struct  Enumerator_t15CBB2465342223EA1F0A012D990AC8D5FD3F434 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t15CBB2465342223EA1F0A012D990AC8D5FD3F434, ___list_0)); }
	inline List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * get_list_0() const { return ___list_0; }
	inline List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t15CBB2465342223EA1F0A012D990AC8D5FD3F434, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t15CBB2465342223EA1F0A012D990AC8D5FD3F434, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t15CBB2465342223EA1F0A012D990AC8D5FD3F434, ___current_3)); }
	inline XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  get_current_3() const { return ___current_3; }
	inline XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  value)
	{
		___current_3 = value;
	}
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct  UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct  BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.SpatialTracking.TrackedPoseDriver
struct  TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SpatialTracking.TrackedPoseDriver_DeviceType UnityEngine.SpatialTracking.TrackedPoseDriver::m_Device
	int32_t ___m_Device_4;
	// UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseSource
	int32_t ___m_PoseSource_5;
	// UnityEngine.Experimental.XR.Interaction.BasePoseProvider UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseProviderComponent
	BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E * ___m_PoseProviderComponent_6;
	// UnityEngine.SpatialTracking.TrackedPoseDriver_TrackingType UnityEngine.SpatialTracking.TrackedPoseDriver::m_TrackingType
	int32_t ___m_TrackingType_7;
	// UnityEngine.SpatialTracking.TrackedPoseDriver_UpdateType UnityEngine.SpatialTracking.TrackedPoseDriver::m_UpdateType
	int32_t ___m_UpdateType_8;
	// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::m_UseRelativeTransform
	bool ___m_UseRelativeTransform_9;
	// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::m_OriginPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_OriginPose_10;

public:
	inline static int32_t get_offset_of_m_Device_4() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8, ___m_Device_4)); }
	inline int32_t get_m_Device_4() const { return ___m_Device_4; }
	inline int32_t* get_address_of_m_Device_4() { return &___m_Device_4; }
	inline void set_m_Device_4(int32_t value)
	{
		___m_Device_4 = value;
	}

	inline static int32_t get_offset_of_m_PoseSource_5() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8, ___m_PoseSource_5)); }
	inline int32_t get_m_PoseSource_5() const { return ___m_PoseSource_5; }
	inline int32_t* get_address_of_m_PoseSource_5() { return &___m_PoseSource_5; }
	inline void set_m_PoseSource_5(int32_t value)
	{
		___m_PoseSource_5 = value;
	}

	inline static int32_t get_offset_of_m_PoseProviderComponent_6() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8, ___m_PoseProviderComponent_6)); }
	inline BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E * get_m_PoseProviderComponent_6() const { return ___m_PoseProviderComponent_6; }
	inline BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E ** get_address_of_m_PoseProviderComponent_6() { return &___m_PoseProviderComponent_6; }
	inline void set_m_PoseProviderComponent_6(BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E * value)
	{
		___m_PoseProviderComponent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PoseProviderComponent_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackingType_7() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8, ___m_TrackingType_7)); }
	inline int32_t get_m_TrackingType_7() const { return ___m_TrackingType_7; }
	inline int32_t* get_address_of_m_TrackingType_7() { return &___m_TrackingType_7; }
	inline void set_m_TrackingType_7(int32_t value)
	{
		___m_TrackingType_7 = value;
	}

	inline static int32_t get_offset_of_m_UpdateType_8() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8, ___m_UpdateType_8)); }
	inline int32_t get_m_UpdateType_8() const { return ___m_UpdateType_8; }
	inline int32_t* get_address_of_m_UpdateType_8() { return &___m_UpdateType_8; }
	inline void set_m_UpdateType_8(int32_t value)
	{
		___m_UpdateType_8 = value;
	}

	inline static int32_t get_offset_of_m_UseRelativeTransform_9() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8, ___m_UseRelativeTransform_9)); }
	inline bool get_m_UseRelativeTransform_9() const { return ___m_UseRelativeTransform_9; }
	inline bool* get_address_of_m_UseRelativeTransform_9() { return &___m_UseRelativeTransform_9; }
	inline void set_m_UseRelativeTransform_9(bool value)
	{
		___m_UseRelativeTransform_9 = value;
	}

	inline static int32_t get_offset_of_m_OriginPose_10() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8, ___m_OriginPose_10)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_OriginPose_10() const { return ___m_OriginPose_10; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_OriginPose_10() { return &___m_OriginPose_10; }
	inline void set_m_OriginPose_10(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_OriginPose_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription_PoseData[]
struct PoseDataU5BU5D_t346C3131C8ECEE09A786918A1E181B692931CDD2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3  m_Items[1];

public:
	inline PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___PoseNames_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Poses_1), (void*)NULL);
		#endif
	}
	inline PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___PoseNames_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Poses_1), (void*)NULL);
		#endif
	}
};
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t15CBB2465342223EA1F0A012D990AC8D5FD3F434  List_1_GetEnumerator_m38D582CE4576A078108B1BF912438E949C78CF61_gshared (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  Enumerator_get_Current_m4C1614B853F22411D204D9EAD439EA975ECE2045_gshared_inline (Enumerator_t15CBB2465342223EA1F0A012D990AC8D5FD3F434 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD2AB4E61B8B6509EFD4F2F494AEE4EFB83CA6DFD_gshared (Enumerator_t15CBB2465342223EA1F0A012D990AC8D5FD3F434 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m5FF6C2B5FB5E2F9D861FD0CBD0BFBB834D51D151_gshared (Enumerator_t15CBB2465342223EA1F0A012D990AC8D5FD3F434 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m4019848F190800D1255B127B3D2231477C25961B_gshared (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC1CF8AEE45E96DBF272078B548C3772656E8E343_gshared_inline (List_1_t33EFE71131470863D507CAF630920B63D09EBA7D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3  List_1_get_Item_mAC243D79CA56D7EA114A1A1B676D2F409E9450D9_gshared_inline (List_1_t33EFE71131470863D507CAF630920B63D09EBA7D * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32Enum>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m7C5FD44913A3832DC5D7875F3ADA6FA0D28DDB3E_gshared_inline (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32Enum>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3632094BEC4410A1022FD0293E7BA88FC3B811A8_gshared_inline (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m8247059DDA6122611B3808A93A11E2F659F61E57_gshared (List_1_t33EFE71131470863D507CAF630920B63D09EBA7D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF1D0377D81949B2ADB6104D9994F7CEE1A1E5040_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mBA0FDF41792A78B3EB9E395D711706E268313F0F_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m8423440DDD54288DC264FFCD7F9848ED82D062E5_gshared (List_1_t33EFE71131470863D507CAF630920B63D09EBA7D * __this, PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3  ___item0, const RuntimeMethod* method);

// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputTracking::GetNodeStates(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTracking_GetNodeStates_m0C47A6D099EE6EAC2D64B2D1D23DA72E4D42B880 (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * ___nodeStates0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::GetEnumerator()
inline Enumerator_t15CBB2465342223EA1F0A012D990AC8D5FD3F434  List_1_GetEnumerator_m38D582CE4576A078108B1BF912438E949C78CF61 (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t15CBB2465342223EA1F0A012D990AC8D5FD3F434  (*) (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 *, const RuntimeMethod*))List_1_GetEnumerator_m38D582CE4576A078108B1BF912438E949C78CF61_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::get_Current()
inline XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  Enumerator_get_Current_m4C1614B853F22411D204D9EAD439EA975ECE2045_inline (Enumerator_t15CBB2465342223EA1F0A012D990AC8D5FD3F434 * __this, const RuntimeMethod* method)
{
	return ((  XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  (*) (Enumerator_t15CBB2465342223EA1F0A012D990AC8D5FD3F434 *, const RuntimeMethod*))Enumerator_get_Current_m4C1614B853F22411D204D9EAD439EA975ECE2045_gshared_inline)(__this, method);
}
// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::get_nodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRNodeState_get_nodeType_m55136A0A46D3C38E1EF41A62F0FCC9FC03AAAE3E (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGetPosition(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetPosition_m7526637E83DA923CCEB8590D0E342DFC8A546415 (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGetRotation(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetRotation_m8BAEDDA0A2400A884686860FEB40F5B0CAC34A3B (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::MoveNext()
inline bool Enumerator_MoveNext_mD2AB4E61B8B6509EFD4F2F494AEE4EFB83CA6DFD (Enumerator_t15CBB2465342223EA1F0A012D990AC8D5FD3F434 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t15CBB2465342223EA1F0A012D990AC8D5FD3F434 *, const RuntimeMethod*))Enumerator_MoveNext_mD2AB4E61B8B6509EFD4F2F494AEE4EFB83CA6DFD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::Dispose()
inline void Enumerator_Dispose_m5FF6C2B5FB5E2F9D861FD0CBD0BFBB834D51D151 (Enumerator_t15CBB2465342223EA1F0A012D990AC8D5FD3F434 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t15CBB2465342223EA1F0A012D990AC8D5FD3F434 *, const RuntimeMethod*))Enumerator_Dispose_m5FF6C2B5FB5E2F9D861FD0CBD0BFBB834D51D151_gshared)(__this, method);
}
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.SpatialTracking.PoseDataSource::GetNodePoseData(UnityEngine.XR.XRNode,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PoseDataSource_GetNodePoseData_m2D3C847ECE40571FB7B54D3BC85EC36FA6E0F429 (int32_t ___node0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * ___resultPose1, const RuntimeMethod* method);
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.SpatialTracking.PoseDataSource::TryGetTangoPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PoseDataSource_TryGetTangoPose_m89124F603791D2DA9261C168C61CE96609275936 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * ___pose0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m405E9C0A631F815816F349D7591DD545932FF774 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Tango.TangoInputTracking::TryGetPoseAtTime(UnityEngine.XR.Tango.PoseData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TangoInputTracking_TryGetPoseAtTime_m5283E008A82EC10BF045A678E15B05A405B5C222 (PoseData_t291D206DDA816BEA210B5659CEB0E5953912809E * ___pose0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.Tango.PoseData::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PoseData_get_position_m9E2784EAB0B0CAA7973468A26005A7588C0EF7A0 (PoseData_t291D206DDA816BEA210B5659CEB0E5953912809E * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.XR.Tango.PoseData::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  PoseData_get_rotation_m5A437E71A2A609F49A484158C6D9B6101B53F449 (PoseData_t291D206DDA816BEA210B5659CEB0E5953912809E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::.ctor()
inline void List_1__ctor_m4019848F190800D1255B127B3D2231477C25961B (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 *, const RuntimeMethod*))List_1__ctor_m4019848F190800D1255B127B3D2231477C25961B_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::get_Count()
inline int32_t List_1_get_Count_mC1CF8AEE45E96DBF272078B548C3772656E8E343_inline (List_1_t33EFE71131470863D507CAF630920B63D09EBA7D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t33EFE71131470863D507CAF630920B63D09EBA7D *, const RuntimeMethod*))List_1_get_Count_mC1CF8AEE45E96DBF272078B548C3772656E8E343_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::get_Item(System.Int32)
inline PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3  List_1_get_Item_mAC243D79CA56D7EA114A1A1B676D2F409E9450D9_inline (List_1_t33EFE71131470863D507CAF630920B63D09EBA7D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3  (*) (List_1_t33EFE71131470863D507CAF630920B63D09EBA7D *, int32_t, const RuntimeMethod*))List_1_get_Item_mAC243D79CA56D7EA114A1A1B676D2F409E9450D9_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mF5D8C65E5A36E433D821E6A75F9E9AE37DE1E849_inline (List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 *, int32_t, const RuntimeMethod*))List_1_get_Item_m7C5FD44913A3832DC5D7875F3ADA6FA0D28DDB3E_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_deviceType(UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_deviceType_m923CD338331A386A4FB83BE33FD431F44D0047EA_inline (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_poseSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_poseSource_m8CC9231FA91AAD13E62B84A18AA72D8FE99CC881_inline (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::get_Count()
inline int32_t List_1_get_Count_m9A7BAE7FCF0DEB63AA69CF8E83ABFF2737C528BE_inline (List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 *, const RuntimeMethod*))List_1_get_Count_m3632094BEC4410A1022FD0293E7BA88FC3B811A8_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.SpatialTracking.PoseDataSource::GetDataFromSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PoseDataSource_GetDataFromSource_m18CC14907C8F553CEA8EF45BFB120459F3101B64 (int32_t ___poseSource0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * ___resultPose1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::CacheLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_CacheLocalPosition_m4AA35EBEB8DF34BAE6712E6005C36B8D466D1DFB (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::add_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_onBeforeRender_mFA00908B51F922621B710B65E8576C29D437FE19 (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::ResetToCachedLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_ResetToCachedLocalPosition_m11F2E9992A4EAC25CB03869588A93C97B389A548 (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::remove_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_onBeforeRender_m3F833FAB6D8A4A178173DFE9D644341657F2E9AE (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::GetTransformedBy(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  Pose_GetTransformedBy_m36335BACDABCCD298E90AB97995E3D10F2565E64 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___lhs0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Camera::get_stereoEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_stereoEnabled_m4F3701D763F5A7686B1BAE2CD6AC84B192539857 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.SpatialTracking.TrackedPoseDriver::GetPoseData(UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType,UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_GetPoseData_m9B358015ECDF35A5D4AE27FB2E28EEA6636CB4FB (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, int32_t ___device0, int32_t ___poseSource1, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * ___resultPose2, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::TransformPoseByOriginIfNeeded(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  TrackedPoseDriver_TransformPoseByOriginIfNeeded_mF7C863385D65B0EBD0970BFADF2187F47DD5D205 (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::.ctor()
inline void List_1__ctor_m8247059DDA6122611B3808A93A11E2F659F61E57 (List_1_t33EFE71131470863D507CAF630920B63D09EBA7D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t33EFE71131470863D507CAF630920B63D09EBA7D *, const RuntimeMethod*))List_1__ctor_m8247059DDA6122611B3808A93A11E2F659F61E57_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::.ctor()
inline void List_1__ctor_m6E50E67F1989DED24B9283E2062D908ECB958F61 (List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 *, const RuntimeMethod*))List_1__ctor_mF1D0377D81949B2ADB6104D9994F7CEE1A1E5040_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::Add(!0)
inline void List_1_Add_mB0854EF29CAB5A930221EB89C97546C4E8853F3F (List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 *, int32_t, const RuntimeMethod*))List_1_Add_mBA0FDF41792A78B3EB9E395D711706E268313F0F_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::Add(!0)
inline void List_1_Add_m8423440DDD54288DC264FFCD7F9848ED82D062E5 (List_1_t33EFE71131470863D507CAF630920B63D09EBA7D * __this, PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t33EFE71131470863D507CAF630920B63D09EBA7D *, PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3 , const RuntimeMethod*))List_1_Add_m8423440DDD54288DC264FFCD7F9848ED82D062E5_gshared)(__this, ___item0, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.Experimental.XR.Interaction.BasePoseProvider::GetPoseFromProvider(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BasePoseProvider_GetPoseFromProvider_m00983D80AE82EC6D52D8C8EABDDFFC3A0FE2A0F8 (BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * ___output0, const RuntimeMethod* method)
{
	{
		// if(TryGetPoseFromProvider(out output))
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_0 = ___output0;
		bool L_1 = VirtFuncInvoker1< bool, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * >::Invoke(5 /* System.Boolean UnityEngine.Experimental.XR.Interaction.BasePoseProvider::TryGetPoseFromProvider(UnityEngine.Pose&) */, __this, (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_0);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return PoseDataFlags.Position | PoseDataFlags.Rotation;
		return (int32_t)(3);
	}

IL_000b:
	{
		// return PoseDataFlags.NoData;
		return (int32_t)(0);
	}
}
// System.Boolean UnityEngine.Experimental.XR.Interaction.BasePoseProvider::TryGetPoseFromProvider(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BasePoseProvider_TryGetPoseFromProvider_m11A36133DF8443E404B4013ECC15DF8AF271F444 (BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasePoseProvider_TryGetPoseFromProvider_m11A36133DF8443E404B4013ECC15DF8AF271F444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// output = Pose.identity;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_0 = ___output0;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1 = Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF(/*hidden argument*/NULL);
		*(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_0 = L_1;
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.Experimental.XR.Interaction.BasePoseProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePoseProvider__ctor_mA49C4326450EE089736886D0337B7EC91B1C39C8 (BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.SpatialTracking.PoseDataSource::GetNodePoseData(UnityEngine.XR.XRNode,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PoseDataSource_GetNodePoseData_m2D3C847ECE40571FB7B54D3BC85EC36FA6E0F429 (int32_t ___node0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * ___resultPose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoseDataSource_GetNodePoseData_m2D3C847ECE40571FB7B54D3BC85EC36FA6E0F429_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t15CBB2465342223EA1F0A012D990AC8D5FD3F434  V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// PoseDataFlags retData = PoseDataFlags.NoData;
		V_0 = 0;
		// XR.InputTracking.GetNodeStates(nodeStates);
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t729321C69DC33F646ED3624A4E79FFDB69C51D44_il2cpp_TypeInfo_var);
		List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * L_0 = ((PoseDataSource_t729321C69DC33F646ED3624A4E79FFDB69C51D44_StaticFields*)il2cpp_codegen_static_fields_for(PoseDataSource_t729321C69DC33F646ED3624A4E79FFDB69C51D44_il2cpp_TypeInfo_var))->get_nodeStates_0();
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var);
		InputTracking_GetNodeStates_m0C47A6D099EE6EAC2D64B2D1D23DA72E4D42B880(L_0, /*hidden argument*/NULL);
		// foreach (XR.XRNodeState nodeState in nodeStates)
		List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * L_1 = ((PoseDataSource_t729321C69DC33F646ED3624A4E79FFDB69C51D44_StaticFields*)il2cpp_codegen_static_fields_for(PoseDataSource_t729321C69DC33F646ED3624A4E79FFDB69C51D44_il2cpp_TypeInfo_var))->get_nodeStates_0();
		NullCheck(L_1);
		Enumerator_t15CBB2465342223EA1F0A012D990AC8D5FD3F434  L_2 = List_1_GetEnumerator_m38D582CE4576A078108B1BF912438E949C78CF61(L_1, /*hidden argument*/List_1_GetEnumerator_m38D582CE4576A078108B1BF912438E949C78CF61_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0055;
		}

IL_0019:
		{
			// foreach (XR.XRNodeState nodeState in nodeStates)
			XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  L_3 = Enumerator_get_Current_m4C1614B853F22411D204D9EAD439EA975ECE2045_inline((Enumerator_t15CBB2465342223EA1F0A012D990AC8D5FD3F434 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m4C1614B853F22411D204D9EAD439EA975ECE2045_RuntimeMethod_var);
			V_2 = L_3;
			// if (nodeState.nodeType == node)
			int32_t L_4 = XRNodeState_get_nodeType_m55136A0A46D3C38E1EF41A62F0FCC9FC03AAAE3E((XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *)(&V_2), /*hidden argument*/NULL);
			int32_t L_5 = ___node0;
			if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
			{
				goto IL_0055;
			}
		}

IL_002b:
		{
			// if(nodeState.TryGetPosition(out resultPose.position))
			Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_6 = ___resultPose1;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = L_6->get_address_of_position_0();
			bool L_8 = XRNodeState_TryGetPosition_m7526637E83DA923CCEB8590D0E342DFC8A546415((XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *)(&V_2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_003a:
		{
			// retData |= PoseDataFlags.Position;
			int32_t L_9 = V_0;
			V_0 = ((int32_t)((int32_t)L_9|(int32_t)1));
		}

IL_003e:
		{
			// if (nodeState.TryGetRotation(out resultPose.rotation))
			Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_10 = ___resultPose1;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_11 = L_10->get_address_of_rotation_1();
			bool L_12 = XRNodeState_TryGetRotation_m8BAEDDA0A2400A884686860FEB40F5B0CAC34A3B((XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *)(&V_2), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0051;
			}
		}

IL_004d:
		{
			// retData |= PoseDataFlags.Rotation;
			int32_t L_13 = V_0;
			V_0 = ((int32_t)((int32_t)L_13|(int32_t)2));
		}

IL_0051:
		{
			// return retData;
			int32_t L_14 = V_0;
			V_3 = L_14;
			IL2CPP_LEAVE(0x7B, FINALLY_0060);
		}

IL_0055:
		{
			// foreach (XR.XRNodeState nodeState in nodeStates)
			bool L_15 = Enumerator_MoveNext_mD2AB4E61B8B6509EFD4F2F494AEE4EFB83CA6DFD((Enumerator_t15CBB2465342223EA1F0A012D990AC8D5FD3F434 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mD2AB4E61B8B6509EFD4F2F494AEE4EFB83CA6DFD_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_0019;
			}
		}

IL_005e:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0060);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m5FF6C2B5FB5E2F9D861FD0CBD0BFBB834D51D151((Enumerator_t15CBB2465342223EA1F0A012D990AC8D5FD3F434 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m5FF6C2B5FB5E2F9D861FD0CBD0BFBB834D51D151_RuntimeMethod_var);
		IL2CPP_END_FINALLY(96)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_JUMP_TBL(0x7B, IL_007b)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006e:
	{
		// resultPose = Pose.identity;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_16 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_17 = Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF(/*hidden argument*/NULL);
		*(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_16 = L_17;
		// return retData;
		int32_t L_18 = V_0;
		return L_18;
	}

IL_007b:
	{
		// }
		int32_t L_19 = V_3;
		return L_19;
	}
}
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.SpatialTracking.PoseDataSource::GetDataFromSource(UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PoseDataSource_GetDataFromSource_m18CC14907C8F553CEA8EF45BFB120459F3101B64 (int32_t ___poseSource0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * ___resultPose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoseDataSource_GetDataFromSource_m18CC14907C8F553CEA8EF45BFB120459F3101B64_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (poseSource)
		int32_t L_0 = ___poseSource0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0049;
			}
			case 1:
			{
				goto IL_0051;
			}
			case 2:
			{
				goto IL_0061;
			}
			case 3:
			{
				goto IL_0059;
			}
			case 4:
			{
				goto IL_0069;
			}
			case 5:
			{
				goto IL_0071;
			}
			case 6:
			{
				goto IL_0079;
			}
			case 7:
			{
				goto IL_008d;
			}
			case 8:
			{
				goto IL_008d;
			}
			case 9:
			{
				goto IL_008d;
			}
			case 10:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_008d;
	}

IL_0034:
	{
		// PoseDataFlags retFlags = GetNodePoseData(XR.XRNode.RightHand, out resultPose);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_1 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t729321C69DC33F646ED3624A4E79FFDB69C51D44_il2cpp_TypeInfo_var);
		int32_t L_2 = PoseDataSource_GetNodePoseData_m2D3C847ECE40571FB7B54D3BC85EC36FA6E0F429(5, (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (retFlags == PoseDataFlags.NoData)
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_0047;
		}
	}
	{
		// return GetNodePoseData(XR.XRNode.LeftHand, out resultPose);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_4 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t729321C69DC33F646ED3624A4E79FFDB69C51D44_il2cpp_TypeInfo_var);
		int32_t L_5 = PoseDataSource_GetNodePoseData_m2D3C847ECE40571FB7B54D3BC85EC36FA6E0F429(4, (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0047:
	{
		// return retFlags;
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0049:
	{
		// return GetNodePoseData(XR.XRNode.LeftEye, out resultPose);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_7 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t729321C69DC33F646ED3624A4E79FFDB69C51D44_il2cpp_TypeInfo_var);
		int32_t L_8 = PoseDataSource_GetNodePoseData_m2D3C847ECE40571FB7B54D3BC85EC36FA6E0F429(0, (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0051:
	{
		// return GetNodePoseData(XR.XRNode.RightEye, out resultPose);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_9 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t729321C69DC33F646ED3624A4E79FFDB69C51D44_il2cpp_TypeInfo_var);
		int32_t L_10 = PoseDataSource_GetNodePoseData_m2D3C847ECE40571FB7B54D3BC85EC36FA6E0F429(1, (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0059:
	{
		// return GetNodePoseData(XR.XRNode.Head, out resultPose);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_11 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t729321C69DC33F646ED3624A4E79FFDB69C51D44_il2cpp_TypeInfo_var);
		int32_t L_12 = PoseDataSource_GetNodePoseData_m2D3C847ECE40571FB7B54D3BC85EC36FA6E0F429(3, (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0061:
	{
		// return GetNodePoseData(XR.XRNode.CenterEye, out resultPose);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_13 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t729321C69DC33F646ED3624A4E79FFDB69C51D44_il2cpp_TypeInfo_var);
		int32_t L_14 = PoseDataSource_GetNodePoseData_m2D3C847ECE40571FB7B54D3BC85EC36FA6E0F429(2, (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0069:
	{
		// return GetNodePoseData(XR.XRNode.LeftHand, out resultPose);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_15 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t729321C69DC33F646ED3624A4E79FFDB69C51D44_il2cpp_TypeInfo_var);
		int32_t L_16 = PoseDataSource_GetNodePoseData_m2D3C847ECE40571FB7B54D3BC85EC36FA6E0F429(4, (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0071:
	{
		// return GetNodePoseData(XR.XRNode.RightHand, out resultPose);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_17 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t729321C69DC33F646ED3624A4E79FFDB69C51D44_il2cpp_TypeInfo_var);
		int32_t L_18 = PoseDataSource_GetNodePoseData_m2D3C847ECE40571FB7B54D3BC85EC36FA6E0F429(5, (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_0079:
	{
		// PoseDataFlags retFlags = TryGetTangoPose(out resultPose);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_19 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t729321C69DC33F646ED3624A4E79FFDB69C51D44_il2cpp_TypeInfo_var);
		int32_t L_20 = PoseDataSource_TryGetTangoPose_m89124F603791D2DA9261C168C61CE96609275936((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		// if(retFlags == PoseDataFlags.NoData)
		int32_t L_21 = V_1;
		if (L_21)
		{
			goto IL_008b;
		}
	}
	{
		// return GetNodePoseData(XR.XRNode.CenterEye, out resultPose);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_22 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t729321C69DC33F646ED3624A4E79FFDB69C51D44_il2cpp_TypeInfo_var);
		int32_t L_23 = PoseDataSource_GetNodePoseData_m2D3C847ECE40571FB7B54D3BC85EC36FA6E0F429(2, (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_22, /*hidden argument*/NULL);
		return L_23;
	}

IL_008b:
	{
		// return retFlags;
		int32_t L_24 = V_1;
		return L_24;
	}

IL_008d:
	{
		// Debug.LogWarningFormat("Unable to retrieve pose data for poseSource: {0}", poseSource.ToString());
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = L_25;
		RuntimeObject * L_27 = Box(TrackedPose_t1326EFD84D48C3339F652B2A072743C3189B581B_il2cpp_TypeInfo_var, (&___poseSource0));
		NullCheck(L_27);
		String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
		___poseSource0 = *(int32_t*)UnBox(L_27);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_28);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m405E9C0A631F815816F349D7591DD545932FF774(_stringLiteral6A11DF976BD5EBFB477A52077A195879735F1FA0, L_26, /*hidden argument*/NULL);
		// resultPose = Pose.identity;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_29 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_30 = Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF(/*hidden argument*/NULL);
		*(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_29 = L_30;
		// return PoseDataFlags.NoData;
		return (int32_t)(0);
	}
}
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.SpatialTracking.PoseDataSource::TryGetTangoPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PoseDataSource_TryGetTangoPose_m89124F603791D2DA9261C168C61CE96609275936 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * ___pose0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoseDataSource_TryGetTangoPose_m89124F603791D2DA9261C168C61CE96609275936_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PoseData_t291D206DDA816BEA210B5659CEB0E5953912809E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (TangoInputTracking.TryGetPoseAtTime(out poseOut) && poseOut.statusCode == PoseStatus.Valid)
		bool L_0 = TangoInputTracking_TryGetPoseAtTime_m5283E008A82EC10BF045A678E15B05A405B5C222((PoseData_t291D206DDA816BEA210B5659CEB0E5953912809E *)(&V_0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		PoseData_t291D206DDA816BEA210B5659CEB0E5953912809E  L_1 = V_0;
		int32_t L_2 = L_1.get_statusCode_7();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002e;
		}
	}
	{
		// pose.position = poseOut.position;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_3 = ___pose0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = PoseData_get_position_m9E2784EAB0B0CAA7973468A26005A7588C0EF7A0((PoseData_t291D206DDA816BEA210B5659CEB0E5953912809E *)(&V_0), /*hidden argument*/NULL);
		L_3->set_position_0(L_4);
		// pose.rotation = poseOut.rotation;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_5 = ___pose0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = PoseData_get_rotation_m5A437E71A2A609F49A484158C6D9B6101B53F449((PoseData_t291D206DDA816BEA210B5659CEB0E5953912809E *)(&V_0), /*hidden argument*/NULL);
		L_5->set_rotation_1(L_6);
		// return PoseDataFlags.Position | PoseDataFlags.Rotation; ;
		return (int32_t)(3);
	}

IL_002e:
	{
		// pose = Pose.identity;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_7 = ___pose0;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_8 = Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF(/*hidden argument*/NULL);
		*(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_7 = L_8;
		// return PoseDataFlags.NoData;
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.SpatialTracking.PoseDataSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseDataSource__cctor_m9400FAF20887D6406031503DA0F69AB38BC4623B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoseDataSource__cctor_m9400FAF20887D6406031503DA0F69AB38BC4623B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static internal List<XR.XRNodeState> nodeStates = new List<XR.XRNodeState>();
		List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * L_0 = (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 *)il2cpp_codegen_object_new(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671_il2cpp_TypeInfo_var);
		List_1__ctor_m4019848F190800D1255B127B3D2231477C25961B(L_0, /*hidden argument*/List_1__ctor_m4019848F190800D1255B127B3D2231477C25961B_RuntimeMethod_var);
		((PoseDataSource_t729321C69DC33F646ED3624A4E79FFDB69C51D44_StaticFields*)il2cpp_codegen_static_fields_for(PoseDataSource_t729321C69DC33F646ED3624A4E79FFDB69C51D44_il2cpp_TypeInfo_var))->set_nodeStates_0(L_0);
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
// UnityEngine.SpatialTracking.TrackedPoseDriver_DeviceType UnityEngine.SpatialTracking.TrackedPoseDriver::get_deviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_deviceType_mFBEDF87453E1417467F8C648B49C099C6B928990 (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Device; }
		int32_t L_0 = __this->get_m_Device_4();
		return L_0;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_deviceType(UnityEngine.SpatialTracking.TrackedPoseDriver_DeviceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_deviceType_m923CD338331A386A4FB83BE33FD431F44D0047EA (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal set { m_Device = value; }
		int32_t L_0 = ___value0;
		__this->set_m_Device_4(L_0);
		// internal set { m_Device = value; }
		return;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose UnityEngine.SpatialTracking.TrackedPoseDriver::get_poseSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_poseSource_mC247972BA8F8F09FCF792FBF1FF9A41FB530AB98 (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_PoseSource; }
		int32_t L_0 = __this->get_m_PoseSource_5();
		return L_0;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_poseSource(UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_poseSource_m8CC9231FA91AAD13E62B84A18AA72D8FE99CC881 (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal set { m_PoseSource = value; }
		int32_t L_0 = ___value0;
		__this->set_m_PoseSource_5(L_0);
		// internal set { m_PoseSource = value; }
		return;
	}
}
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::SetPoseSource(UnityEngine.SpatialTracking.TrackedPoseDriver_DeviceType,UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackedPoseDriver_SetPoseSource_m181681C7AE7DB67B11C48383C6AD0363CB549B07 (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, int32_t ___deviceType0, int32_t ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_SetPoseSource_m181681C7AE7DB67B11C48383C6AD0363CB549B07_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if ((int)deviceType < TrackedPoseDriverDataDescription.DeviceData.Count)
		int32_t L_0 = ___deviceType0;
		IL2CPP_RUNTIME_CLASS_INIT(TrackedPoseDriverDataDescription_t1DDD4ABD8892762FC3F4825233D1EA413197B9A1_il2cpp_TypeInfo_var);
		List_1_t33EFE71131470863D507CAF630920B63D09EBA7D * L_1 = ((TrackedPoseDriverDataDescription_t1DDD4ABD8892762FC3F4825233D1EA413197B9A1_StaticFields*)il2cpp_codegen_static_fields_for(TrackedPoseDriverDataDescription_t1DDD4ABD8892762FC3F4825233D1EA413197B9A1_il2cpp_TypeInfo_var))->get_DeviceData_0();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_mC1CF8AEE45E96DBF272078B548C3772656E8E343_inline(L_1, /*hidden argument*/List_1_get_Count_mC1CF8AEE45E96DBF272078B548C3772656E8E343_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_004e;
		}
	}
	{
		// TrackedPoseDriverDataDescription.PoseData val = TrackedPoseDriverDataDescription.DeviceData[(int)deviceType];
		IL2CPP_RUNTIME_CLASS_INIT(TrackedPoseDriverDataDescription_t1DDD4ABD8892762FC3F4825233D1EA413197B9A1_il2cpp_TypeInfo_var);
		List_1_t33EFE71131470863D507CAF630920B63D09EBA7D * L_3 = ((TrackedPoseDriverDataDescription_t1DDD4ABD8892762FC3F4825233D1EA413197B9A1_StaticFields*)il2cpp_codegen_static_fields_for(TrackedPoseDriverDataDescription_t1DDD4ABD8892762FC3F4825233D1EA413197B9A1_il2cpp_TypeInfo_var))->get_DeviceData_0();
		int32_t L_4 = ___deviceType0;
		NullCheck(L_3);
		PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3  L_5 = List_1_get_Item_mAC243D79CA56D7EA114A1A1B676D2F409E9450D9_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_mAC243D79CA56D7EA114A1A1B676D2F409E9450D9_RuntimeMethod_var);
		V_0 = L_5;
		// for (int i = 0; i < val.Poses.Count; ++i)
		V_1 = 0;
		goto IL_0040;
	}

IL_001d:
	{
		// if (val.Poses[i] == pose)
		PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3  L_6 = V_0;
		List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * L_7 = L_6.get_Poses_1();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = List_1_get_Item_mF5D8C65E5A36E433D821E6A75F9E9AE37DE1E849_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_mF5D8C65E5A36E433D821E6A75F9E9AE37DE1E849_RuntimeMethod_var);
		int32_t L_10 = ___pose1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_003c;
		}
	}
	{
		// this.deviceType = deviceType;
		int32_t L_11 = ___deviceType0;
		TrackedPoseDriver_set_deviceType_m923CD338331A386A4FB83BE33FD431F44D0047EA_inline(__this, L_11, /*hidden argument*/NULL);
		// poseSource = pose;
		int32_t L_12 = ___pose1;
		TrackedPoseDriver_set_poseSource_m8CC9231FA91AAD13E62B84A18AA72D8FE99CC881_inline(__this, L_12, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_003c:
	{
		// for (int i = 0; i < val.Poses.Count; ++i)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0040:
	{
		// for (int i = 0; i < val.Poses.Count; ++i)
		int32_t L_14 = V_1;
		PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3  L_15 = V_0;
		List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * L_16 = L_15.get_Poses_1();
		NullCheck(L_16);
		int32_t L_17 = List_1_get_Count_m9A7BAE7FCF0DEB63AA69CF8E83ABFF2737C528BE_inline(L_16, /*hidden argument*/List_1_get_Count_m9A7BAE7FCF0DEB63AA69CF8E83ABFF2737C528BE_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_17)))
		{
			goto IL_001d;
		}
	}

IL_004e:
	{
		// return false;
		return (bool)0;
	}
}
// UnityEngine.Experimental.XR.Interaction.BasePoseProvider UnityEngine.SpatialTracking.TrackedPoseDriver::get_poseProviderComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E * TrackedPoseDriver_get_poseProviderComponent_m86CB406D4E4987C210DA54A0506193DB7717E64C (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_PoseProviderComponent; }
		BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E * L_0 = __this->get_m_PoseProviderComponent_6();
		return L_0;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_poseProviderComponent(UnityEngine.Experimental.XR.Interaction.BasePoseProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_poseProviderComponent_mD64278B369CC541E432419091097AC12543396C4 (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E * ___value0, const RuntimeMethod* method)
{
	{
		// m_PoseProviderComponent = value;
		BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E * L_0 = ___value0;
		__this->set_m_PoseProviderComponent_6(L_0);
		// }
		return;
	}
}
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.SpatialTracking.TrackedPoseDriver::GetPoseData(UnityEngine.SpatialTracking.TrackedPoseDriver_DeviceType,UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_GetPoseData_m9B358015ECDF35A5D4AE27FB2E28EEA6636CB4FB (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, int32_t ___device0, int32_t ___poseSource1, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * ___resultPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_GetPoseData_m9B358015ECDF35A5D4AE27FB2E28EEA6636CB4FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_PoseProviderComponent != null)
		BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E * L_0 = __this->get_m_PoseProviderComponent_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// return m_PoseProviderComponent.GetPoseFromProvider(out resultPose);
		BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E * L_2 = __this->get_m_PoseProviderComponent_6();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_3 = ___resultPose2;
		NullCheck(L_2);
		int32_t L_4 = VirtFuncInvoker1< int32_t, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * >::Invoke(4 /* UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.Experimental.XR.Interaction.BasePoseProvider::GetPoseFromProvider(UnityEngine.Pose&) */, L_2, (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_3);
		return L_4;
	}

IL_001b:
	{
		// return PoseDataSource.GetDataFromSource(poseSource, out resultPose);
		int32_t L_5 = ___poseSource1;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_6 = ___resultPose2;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t729321C69DC33F646ED3624A4E79FFDB69C51D44_il2cpp_TypeInfo_var);
		int32_t L_7 = PoseDataSource_GetDataFromSource_m18CC14907C8F553CEA8EF45BFB120459F3101B64(L_5, (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver_TrackingType UnityEngine.SpatialTracking.TrackedPoseDriver::get_trackingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_trackingType_m0A0675A39DABE9026DD77E9308F6AD29C4A4DEFB (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_TrackingType; }
		int32_t L_0 = __this->get_m_TrackingType_7();
		return L_0;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_trackingType(UnityEngine.SpatialTracking.TrackedPoseDriver_TrackingType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_trackingType_m294D8F60EEEDCCBE86CA66E097E6DBA2A36DEA32 (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { m_TrackingType = value; }
		int32_t L_0 = ___value0;
		__this->set_m_TrackingType_7(L_0);
		// set { m_TrackingType = value; }
		return;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver_UpdateType UnityEngine.SpatialTracking.TrackedPoseDriver::get_updateType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_updateType_mF0B19C65F4EEB118D8496F29C3F7D928E2D19BC9 (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_UpdateType; }
		int32_t L_0 = __this->get_m_UpdateType_8();
		return L_0;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_updateType(UnityEngine.SpatialTracking.TrackedPoseDriver_UpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_updateType_mF61F4FF390E02C543F98ACB5D54EEC3A6773C0DC (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { m_UpdateType = value; }
		int32_t L_0 = ___value0;
		__this->set_m_UpdateType_8(L_0);
		// set { m_UpdateType = value; }
		return;
	}
}
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::get_UseRelativeTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackedPoseDriver_get_UseRelativeTransform_mF6ED158B385E2E45ED40231CBB24F38354AAC00B (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_UseRelativeTransform; }
		bool L_0 = __this->get_m_UseRelativeTransform_9();
		return L_0;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_UseRelativeTransform(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_UseRelativeTransform_m9E311D252ED8E151A701F7ADAE9809756EF4864E (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_UseRelativeTransform = value; }
		bool L_0 = ___value0;
		__this->set_m_UseRelativeTransform_9(L_0);
		// set { m_UseRelativeTransform = value; }
		return;
	}
}
// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::get_originPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  TrackedPoseDriver_get_originPose_mC4637D2604C6A35A892D3C343D323E56BE74880E (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OriginPose; }
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_m_OriginPose_10();
		return L_0;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_originPose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_originPose_mF56782A52B30FA293CA4A50670D9F2CAC8F324E3 (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___value0, const RuntimeMethod* method)
{
	{
		// set { m_OriginPose = value; }
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = ___value0;
		__this->set_m_OriginPose_10(L_0);
		// set { m_OriginPose = value; }
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::CacheLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_CacheLocalPosition_m4AA35EBEB8DF34BAE6712E6005C36B8D466D1DFB (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, const RuntimeMethod* method)
{
	{
		// m_OriginPose.position = transform.localPosition;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_0 = __this->get_address_of_m_OriginPose_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_1, /*hidden argument*/NULL);
		L_0->set_position_0(L_2);
		// m_OriginPose.rotation = transform.localRotation;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_3 = __this->get_address_of_m_OriginPose_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_4, /*hidden argument*/NULL);
		L_3->set_rotation_1(L_5);
		// }
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::ResetToCachedLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_ResetToCachedLocalPosition_m11F2E9992A4EAC25CB03869588A93C97B389A548 (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, const RuntimeMethod* method)
{
	{
		// SetLocalTransform(m_OriginPose.position, m_OriginPose.rotation, PoseDataFlags.Position | PoseDataFlags.Rotation);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_0 = __this->get_address_of_m_OriginPose_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = L_0->get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_2 = __this->get_address_of_m_OriginPose_10();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = L_2->get_rotation_1();
		VirtActionInvoker3< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , int32_t >::Invoke(11 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::SetLocalTransform(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.SpatialTracking.PoseDataFlags) */, __this, L_1, L_3, 3);
		// }
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_Awake_mD8E64052E36F830F9A3F2E9A4B96FDEA1F6A325C (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, const RuntimeMethod* method)
{
	{
		// CacheLocalPosition();
		TrackedPoseDriver_CacheLocalPosition_m4AA35EBEB8DF34BAE6712E6005C36B8D466D1DFB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnDestroy_mDFB70794DEA2ADE82FCBD2B6542271194D43FFFB (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnEnable_m0DEBD5BA1284BDE25C877A88A89EB2EBE6C01ACB (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_OnEnable_m0DEBD5BA1284BDE25C877A88A89EB2EBE6C01ACB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.onBeforeRender += OnBeforeRender;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_0, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 10)), /*hidden argument*/NULL);
		Application_add_onBeforeRender_mFA00908B51F922621B710B65E8576C29D437FE19(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnDisable_m10388305861B8ABE3141D55610C890EBE196E22A (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_OnDisable_m10388305861B8ABE3141D55610C890EBE196E22A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ResetToCachedLocalPosition();
		TrackedPoseDriver_ResetToCachedLocalPosition_m11F2E9992A4EAC25CB03869588A93C97B389A548(__this, /*hidden argument*/NULL);
		// Application.onBeforeRender -= OnBeforeRender;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_0, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 10)), /*hidden argument*/NULL);
		Application_remove_onBeforeRender_m3F833FAB6D8A4A178173DFE9D644341657F2E9AE(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_FixedUpdate_m40DD3B9EFD786BCDB3D457026F0956895E6C6776 (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, const RuntimeMethod* method)
{
	{
		// if (m_UpdateType == UpdateType.Update ||
		//     m_UpdateType == UpdateType.UpdateAndBeforeRender)
		int32_t L_0 = __this->get_m_UpdateType_8();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->get_m_UpdateType_8();
		if (L_1)
		{
			goto IL_0017;
		}
	}

IL_0011:
	{
		// PerformUpdate();
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate() */, __this);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_Update_mC72928C8CB6774BE9A33E11A92A98E5329613385 (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, const RuntimeMethod* method)
{
	{
		// if (m_UpdateType == UpdateType.Update ||
		//     m_UpdateType == UpdateType.UpdateAndBeforeRender)
		int32_t L_0 = __this->get_m_UpdateType_8();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->get_m_UpdateType_8();
		if (L_1)
		{
			goto IL_0017;
		}
	}

IL_0011:
	{
		// PerformUpdate();
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate() */, __this);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnBeforeRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnBeforeRender_mEA118BA51C1E0F7C9A163F7FF4D1DB5CA37B82BC (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, const RuntimeMethod* method)
{
	{
		// if (m_UpdateType == UpdateType.BeforeRender ||
		//     m_UpdateType == UpdateType.UpdateAndBeforeRender)
		int32_t L_0 = __this->get_m_UpdateType_8();
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->get_m_UpdateType_8();
		if (L_1)
		{
			goto IL_0017;
		}
	}

IL_0011:
	{
		// PerformUpdate();
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate() */, __this);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::SetLocalTransform(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.SpatialTracking.PoseDataFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_SetLocalTransform_m393099953977BE555E6700B35D664BBED683F03C (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newPosition0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___newRotation1, int32_t ___poseFlags2, const RuntimeMethod* method)
{
	{
		// if ((m_TrackingType == TrackingType.RotationAndPosition ||
		//     m_TrackingType == TrackingType.RotationOnly) &&
		//     (poseFlags & PoseDataFlags.Rotation) > 0)
		int32_t L_0 = __this->get_m_TrackingType_7();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->get_m_TrackingType_7();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}

IL_0011:
	{
		int32_t L_2 = ___poseFlags2;
		if ((((int32_t)((int32_t)((int32_t)L_2&(int32_t)2))) <= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		// transform.localRotation = newRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4 = ___newRotation1;
		NullCheck(L_3);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// if ((m_TrackingType == TrackingType.RotationAndPosition ||
		//     m_TrackingType == TrackingType.PositionOnly) &&
		//     (poseFlags & PoseDataFlags.Position) > 0)
		int32_t L_5 = __this->get_m_TrackingType_7();
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = __this->get_m_TrackingType_7();
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0046;
		}
	}

IL_0034:
	{
		int32_t L_7 = ___poseFlags2;
		if ((((int32_t)((int32_t)((int32_t)L_7&(int32_t)1))) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		// transform.localPosition = newPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___newPosition0;
		NullCheck(L_8);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::TransformPoseByOriginIfNeeded(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  TrackedPoseDriver_TransformPoseByOriginIfNeeded_mF7C863385D65B0EBD0970BFADF2187F47DD5D205 (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose0, const RuntimeMethod* method)
{
	{
		// if (m_UseRelativeTransform)
		bool L_0 = __this->get_m_UseRelativeTransform_9();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// return pose.GetTransformedBy(m_OriginPose);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1 = __this->get_m_OriginPose_10();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_2 = Pose_GetTransformedBy_m36335BACDABCCD298E90AB97995E3D10F2565E64((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)(&___pose0), L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0016:
	{
		// return pose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_3 = ___pose0;
		return L_3;
	}
}
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::HasStereoCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackedPoseDriver_HasStereoCamera_m5F580465511FC0AFD7E38E12D57C9A904D1D6C5C (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_HasStereoCamera_m5F580465511FC0AFD7E38E12D57C9A904D1D6C5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_0 = NULL;
	{
		// Camera camera = GetComponent<Camera>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		V_0 = L_0;
		// return camera != null && camera.stereoEnabled;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = Camera_get_stereoEnabled_m4F3701D763F5A7686B1BAE2CD6AC84B192539857(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_PerformUpdate_m11C2E25E8074FBE8523C86D977EAD82CA0B5137A (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_PerformUpdate_m11C2E25E8074FBE8523C86D977EAD82CA0B5137A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!enabled)
		bool L_0 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Pose currentPose = new Pose();
		il2cpp_codegen_initobj((&V_0), sizeof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A ));
		// currentPose = Pose.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1 = Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF(/*hidden argument*/NULL);
		V_0 = L_1;
		// PoseDataFlags poseFlags = GetPoseData(m_Device, m_PoseSource, out currentPose);
		int32_t L_2 = __this->get_m_Device_4();
		int32_t L_3 = __this->get_m_PoseSource_5();
		int32_t L_4 = TrackedPoseDriver_GetPoseData_m9B358015ECDF35A5D4AE27FB2E28EEA6636CB4FB(__this, L_2, L_3, (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		// if(poseFlags != PoseDataFlags.NoData)
		int32_t L_5 = V_1;
		if (!L_5)
		{
			goto IL_004a;
		}
	}
	{
		// Pose localPose = TransformPoseByOriginIfNeeded(currentPose);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_6 = V_0;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_7 = TrackedPoseDriver_TransformPoseByOriginIfNeeded_mF7C863385D65B0EBD0970BFADF2187F47DD5D205(__this, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// SetLocalTransform(localPose.position, localPose.rotation, poseFlags);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_8 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = L_8.get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_10 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11 = L_10.get_rotation_1();
		int32_t L_12 = V_1;
		VirtActionInvoker3< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , int32_t >::Invoke(11 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::SetLocalTransform(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.SpatialTracking.PoseDataFlags) */, __this, L_9, L_11, L_12);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver__ctor_mAA70CEC59D11665D55A8C83131091AB0D62B6E3B (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, const RuntimeMethod* method)
{
	{
		// TrackedPose m_PoseSource = TrackedPoseDriver.TrackedPose.Center;
		__this->set_m_PoseSource_5(2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriverDataDescription__cctor_mDC691B96466913EF3D97E79F8A767F6A52498ED0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriverDataDescription__cctor_mDC691B96466913EF3D97E79F8A767F6A52498ED0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// internal static List<PoseData> DeviceData = new List<PoseData>
		// {
		//     // Generic XR Device
		//     new PoseData
		//     {
		//         PoseNames = new List<string>
		//         {
		//             "Left Eye", "Right Eye", "Center Eye - HMD Reference", "Head", "Color Camera"
		//         },
		//         Poses = new List<TrackedPoseDriver.TrackedPose>
		//         {
		//             TrackedPoseDriver.TrackedPose.LeftEye,
		//             TrackedPoseDriver.TrackedPose.RightEye,
		//             TrackedPoseDriver.TrackedPose.Center,
		//             TrackedPoseDriver.TrackedPose.Head,
		//             TrackedPoseDriver.TrackedPose.ColorCamera
		//         }
		//     },
		//     // generic controller
		//     new PoseData
		//     {
		//         PoseNames = new List<string>
		//         {
		//             "Left Controller", "Right Controller"
		//         },
		//         Poses = new List<TrackedPoseDriver.TrackedPose>
		//         {
		//             TrackedPoseDriver.TrackedPose.LeftPose,
		//             TrackedPoseDriver.TrackedPose.RightPose
		//         }
		//     },
		//     // generic remote
		//     new PoseData
		//     {
		//         PoseNames = new List<string>
		//         {
		//             "Device Pose"
		//         },
		//         Poses = new List<TrackedPoseDriver.TrackedPose>
		//         {
		//             TrackedPoseDriver.TrackedPose.RemotePose,
		//         }
		//     },
		// };
		List_1_t33EFE71131470863D507CAF630920B63D09EBA7D * L_0 = (List_1_t33EFE71131470863D507CAF630920B63D09EBA7D *)il2cpp_codegen_object_new(List_1_t33EFE71131470863D507CAF630920B63D09EBA7D_il2cpp_TypeInfo_var);
		List_1__ctor_m8247059DDA6122611B3808A93A11E2F659F61E57(L_0, /*hidden argument*/List_1__ctor_m8247059DDA6122611B3808A93A11E2F659F61E57_RuntimeMethod_var);
		List_1_t33EFE71131470863D507CAF630920B63D09EBA7D * L_1 = L_0;
		il2cpp_codegen_initobj((&V_0), sizeof(PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3 ));
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_2, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = L_2;
		NullCheck(L_3);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_3, _stringLiteralE5E47A84BACC0A71E6C87A5ABF7CCC8D26BDE8D3, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = L_3;
		NullCheck(L_4);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_4, _stringLiteral8EE78D2535F543B0B3532765572FC019F362EBEC, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = L_4;
		NullCheck(L_5);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_5, _stringLiteralF86B5632D37D8A2636B0D34CA903B4B3375A0ACA, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6 = L_5;
		NullCheck(L_6);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_6, _stringLiteral8DD8D6FCBA1E38E53530F55F7B9061E65C123321, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_7 = L_6;
		NullCheck(L_7);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_7, _stringLiteral2C8BB561E77F4491856EDA21B73347023391A8B0, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		(&V_0)->set_PoseNames_0(L_7);
		List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * L_8 = (List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 *)il2cpp_codegen_object_new(List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248_il2cpp_TypeInfo_var);
		List_1__ctor_m6E50E67F1989DED24B9283E2062D908ECB958F61(L_8, /*hidden argument*/List_1__ctor_m6E50E67F1989DED24B9283E2062D908ECB958F61_RuntimeMethod_var);
		List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * L_9 = L_8;
		NullCheck(L_9);
		List_1_Add_mB0854EF29CAB5A930221EB89C97546C4E8853F3F(L_9, 0, /*hidden argument*/List_1_Add_mB0854EF29CAB5A930221EB89C97546C4E8853F3F_RuntimeMethod_var);
		List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * L_10 = L_9;
		NullCheck(L_10);
		List_1_Add_mB0854EF29CAB5A930221EB89C97546C4E8853F3F(L_10, 1, /*hidden argument*/List_1_Add_mB0854EF29CAB5A930221EB89C97546C4E8853F3F_RuntimeMethod_var);
		List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * L_11 = L_10;
		NullCheck(L_11);
		List_1_Add_mB0854EF29CAB5A930221EB89C97546C4E8853F3F(L_11, 2, /*hidden argument*/List_1_Add_mB0854EF29CAB5A930221EB89C97546C4E8853F3F_RuntimeMethod_var);
		List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * L_12 = L_11;
		NullCheck(L_12);
		List_1_Add_mB0854EF29CAB5A930221EB89C97546C4E8853F3F(L_12, 3, /*hidden argument*/List_1_Add_mB0854EF29CAB5A930221EB89C97546C4E8853F3F_RuntimeMethod_var);
		List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * L_13 = L_12;
		NullCheck(L_13);
		List_1_Add_mB0854EF29CAB5A930221EB89C97546C4E8853F3F(L_13, 6, /*hidden argument*/List_1_Add_mB0854EF29CAB5A930221EB89C97546C4E8853F3F_RuntimeMethod_var);
		(&V_0)->set_Poses_1(L_13);
		PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3  L_14 = V_0;
		NullCheck(L_1);
		List_1_Add_m8423440DDD54288DC264FFCD7F9848ED82D062E5(L_1, L_14, /*hidden argument*/List_1_Add_m8423440DDD54288DC264FFCD7F9848ED82D062E5_RuntimeMethod_var);
		List_1_t33EFE71131470863D507CAF630920B63D09EBA7D * L_15 = L_1;
		il2cpp_codegen_initobj((&V_0), sizeof(PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3 ));
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_16 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_16, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_17 = L_16;
		NullCheck(L_17);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_17, _stringLiteral874BE1B2177F8C02B786BA933E78AD9FE1D377DD, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_18 = L_17;
		NullCheck(L_18);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_18, _stringLiteral98018BE8EB53CB8EC9307D4EEAAA001D606E788C, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		(&V_0)->set_PoseNames_0(L_18);
		List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * L_19 = (List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 *)il2cpp_codegen_object_new(List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248_il2cpp_TypeInfo_var);
		List_1__ctor_m6E50E67F1989DED24B9283E2062D908ECB958F61(L_19, /*hidden argument*/List_1__ctor_m6E50E67F1989DED24B9283E2062D908ECB958F61_RuntimeMethod_var);
		List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * L_20 = L_19;
		NullCheck(L_20);
		List_1_Add_mB0854EF29CAB5A930221EB89C97546C4E8853F3F(L_20, 4, /*hidden argument*/List_1_Add_mB0854EF29CAB5A930221EB89C97546C4E8853F3F_RuntimeMethod_var);
		List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * L_21 = L_20;
		NullCheck(L_21);
		List_1_Add_mB0854EF29CAB5A930221EB89C97546C4E8853F3F(L_21, 5, /*hidden argument*/List_1_Add_mB0854EF29CAB5A930221EB89C97546C4E8853F3F_RuntimeMethod_var);
		(&V_0)->set_Poses_1(L_21);
		PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3  L_22 = V_0;
		NullCheck(L_15);
		List_1_Add_m8423440DDD54288DC264FFCD7F9848ED82D062E5(L_15, L_22, /*hidden argument*/List_1_Add_m8423440DDD54288DC264FFCD7F9848ED82D062E5_RuntimeMethod_var);
		List_1_t33EFE71131470863D507CAF630920B63D09EBA7D * L_23 = L_15;
		il2cpp_codegen_initobj((&V_0), sizeof(PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3 ));
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_24 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_24, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_25 = L_24;
		NullCheck(L_25);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_25, _stringLiteral960416C64D6FEDF29B47FEF63B743ADBF6A3ACF5, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		(&V_0)->set_PoseNames_0(L_25);
		List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * L_26 = (List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 *)il2cpp_codegen_object_new(List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248_il2cpp_TypeInfo_var);
		List_1__ctor_m6E50E67F1989DED24B9283E2062D908ECB958F61(L_26, /*hidden argument*/List_1__ctor_m6E50E67F1989DED24B9283E2062D908ECB958F61_RuntimeMethod_var);
		List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * L_27 = L_26;
		NullCheck(L_27);
		List_1_Add_mB0854EF29CAB5A930221EB89C97546C4E8853F3F(L_27, ((int32_t)10), /*hidden argument*/List_1_Add_mB0854EF29CAB5A930221EB89C97546C4E8853F3F_RuntimeMethod_var);
		(&V_0)->set_Poses_1(L_27);
		PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3  L_28 = V_0;
		NullCheck(L_23);
		List_1_Add_m8423440DDD54288DC264FFCD7F9848ED82D062E5(L_23, L_28, /*hidden argument*/List_1_Add_m8423440DDD54288DC264FFCD7F9848ED82D062E5_RuntimeMethod_var);
		((TrackedPoseDriverDataDescription_t1DDD4ABD8892762FC3F4825233D1EA413197B9A1_StaticFields*)il2cpp_codegen_static_fields_for(TrackedPoseDriverDataDescription_t1DDD4ABD8892762FC3F4825233D1EA413197B9A1_il2cpp_TypeInfo_var))->set_DeviceData_0(L_23);
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
// Conversion methods for marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
IL2CPP_EXTERN_C void PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3_marshal_pinvoke(const PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3& unmarshaled, PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3_marshaled_pinvoke& marshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL);
}
IL2CPP_EXTERN_C void PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3_marshal_pinvoke_back(const PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3_marshaled_pinvoke& marshaled, PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3& unmarshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
IL2CPP_EXTERN_C void PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3_marshal_pinvoke_cleanup(PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
IL2CPP_EXTERN_C void PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3_marshal_com(const PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3& unmarshaled, PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3_marshaled_com& marshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL);
}
IL2CPP_EXTERN_C void PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3_marshal_com_back(const PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3_marshaled_com& marshaled, PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3& unmarshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
IL2CPP_EXTERN_C void PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3_marshal_com_cleanup(PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_deviceType_m923CD338331A386A4FB83BE33FD431F44D0047EA_inline (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal set { m_Device = value; }
		int32_t L_0 = ___value0;
		__this->set_m_Device_4(L_0);
		// internal set { m_Device = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_poseSource_m8CC9231FA91AAD13E62B84A18AA72D8FE99CC881_inline (TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal set { m_PoseSource = value; }
		int32_t L_0 = ___value0;
		__this->set_m_PoseSource_5(L_0);
		// internal set { m_PoseSource = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  Enumerator_get_Current_m4C1614B853F22411D204D9EAD439EA975ECE2045_gshared_inline (Enumerator_t15CBB2465342223EA1F0A012D990AC8D5FD3F434 * __this, const RuntimeMethod* method)
{
	{
		XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  L_0 = (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 )__this->get_current_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC1CF8AEE45E96DBF272078B548C3772656E8E343_gshared_inline (List_1_t33EFE71131470863D507CAF630920B63D09EBA7D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3  List_1_get_Item_mAC243D79CA56D7EA114A1A1B676D2F409E9450D9_gshared_inline (List_1_t33EFE71131470863D507CAF630920B63D09EBA7D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		PoseDataU5BU5D_t346C3131C8ECEE09A786918A1E181B692931CDD2* L_2 = (PoseDataU5BU5D_t346C3131C8ECEE09A786918A1E181B692931CDD2*)__this->get__items_1();
		int32_t L_3 = ___index0;
		PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((PoseDataU5BU5D_t346C3131C8ECEE09A786918A1E181B692931CDD2*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m7C5FD44913A3832DC5D7875F3ADA6FA0D28DDB3E_gshared_inline (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_2 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3632094BEC4410A1022FD0293E7BA88FC3B811A8_gshared_inline (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
