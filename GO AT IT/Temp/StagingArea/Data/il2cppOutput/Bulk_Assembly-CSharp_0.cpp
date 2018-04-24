#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Dialogue
struct Dialogue_t118236717;
// DialogueManager
struct DialogueManager_t3506686710;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// System.Collections.Generic.Queue`1<System.String>
struct Queue_1_t1693710183;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2926365658;
// UnityEngine.Animator
struct Animator_t434523843;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// DialogueManager/<typeSentence>c__Iterator0
struct U3CtypeSentenceU3Ec__Iterator0_t3358278585;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// DialogueTrigger
struct DialogueTrigger_t3849820820;
// foodInteraction
struct foodInteraction_t1842920251;
// UnityEngine.Collision
struct Collision_t4262080450;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Component
struct Component_t1923634451;
// GameUI
struct GameUI_t4172234623;
// System.Action
struct Action_t1264377477;
// goatController
struct goatController_t2995955395;
// System.Delegate
struct Delegate_t1188392813;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Light
struct Light_t3756812086;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// goatController/<FollowPath>c__Iterator0
struct U3CFollowPathU3Ec__Iterator0_t2268932854;
// goatController/<TurnToFace>c__Iterator1
struct U3CTurnToFaceU3Ec__Iterator1_t2972656240;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// PlayerController
struct PlayerController_t2064355688;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// trough
struct trough_t4133365632;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Void
struct Void_t1185182177;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t872956888;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* Queue_1_t1693710183_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Queue_1__ctor_m4171879767_RuntimeMethod_var;
extern const uint32_t DialogueManager_Start_m2103593510_MetadataUsageId;
extern const RuntimeMethod* Queue_1_Clear_m1155020618_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Enqueue_m3056590024_RuntimeMethod_var;
extern String_t* _stringLiteral497364073;
extern const uint32_t DialogueManager_StartDialogue_m2068076816_MetadataUsageId;
extern const RuntimeMethod* Queue_1_get_Count_m2387284005_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Dequeue_m1924377868_RuntimeMethod_var;
extern const uint32_t DialogueManager_DisplayNextSentence_m3422385323_MetadataUsageId;
extern RuntimeClass* U3CtypeSentenceU3Ec__Iterator0_t3358278585_il2cpp_TypeInfo_var;
extern const uint32_t DialogueManager_typeSentence_m2003067498_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1011377019;
extern const uint32_t DialogueManager_EndDialogue_m1452418081_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern const uint32_t U3CtypeSentenceU3Ec__Iterator0_MoveNext_m2428926410_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const uint32_t U3CtypeSentenceU3Ec__Iterator0_Reset_m4148540630_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisDialogueManager_t3506686710_m3422857472_RuntimeMethod_var;
extern const uint32_t DialogueTrigger_TriggerDialogue_m3415284430_MetadataUsageId;
extern RuntimeClass* foodInteraction_t1842920251_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2261822918;
extern const uint32_t foodInteraction_OnCollisionEnter_m204680871_MetadataUsageId;
extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameUI_ShowGameLoseUI_m4289329336_RuntimeMethod_var;
extern const uint32_t GameUI_Start_m4268625395_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* trough_t4133365632_il2cpp_TypeInfo_var;
extern const uint32_t GameUI_Update_m3686469957_MetadataUsageId;
extern const uint32_t GameUI_OnGameOver_m3909617351_MetadataUsageId;
extern RuntimeClass* goatController_t2995955395_il2cpp_TypeInfo_var;
extern const uint32_t goatController_add_OnGoatSawYou_m4178380362_MetadataUsageId;
extern const uint32_t goatController_remove_OnGoatSawYou_m3181869858_MetadataUsageId;
extern RuntimeClass* Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var;
extern const uint32_t goatController_Start_m3369151784_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t goatController_Update_m2563205544_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t goatController_CanSeePlayer_m1617575133_MetadataUsageId;
extern RuntimeClass* U3CFollowPathU3Ec__Iterator0_t2268932854_il2cpp_TypeInfo_var;
extern const uint32_t goatController_FollowPath_m1253381204_MetadataUsageId;
extern RuntimeClass* U3CTurnToFaceU3Ec__Iterator1_t2972656240_il2cpp_TypeInfo_var;
extern const uint32_t goatController_TurnToFace_m2868397517_MetadataUsageId;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* Transform_t3600365921_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t goatController_OnDrawGizmos_m1449413860_MetadataUsageId;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern const uint32_t U3CFollowPathU3Ec__Iterator0_MoveNext_m105021038_MetadataUsageId;
extern const uint32_t U3CFollowPathU3Ec__Iterator0_Reset_m3207792359_MetadataUsageId;
extern const uint32_t U3CTurnToFaceU3Ec__Iterator1_MoveNext_m388373595_MetadataUsageId;
extern const uint32_t U3CTurnToFaceU3Ec__Iterator1_Reset_m584063316_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t3916780224_m564316479_RuntimeMethod_var;
extern const RuntimeMethod* PlayerController_Disable_m4169920469_RuntimeMethod_var;
extern const uint32_t PlayerController_Start_m1746698410_MetadataUsageId;
extern String_t* _stringLiteral1828639942;
extern String_t* _stringLiteral2984908384;
extern const uint32_t PlayerController_Update_m848427540_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const uint32_t PlayerController_FixedUpdate_m1610259746_MetadataUsageId;
extern const uint32_t PlayerController_OnDestroy_m1684642035_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral249707277;
extern String_t* _stringLiteral3913719606;
extern const uint32_t trough_Start_m544111307_MetadataUsageId;
extern String_t* _stringLiteral1745898041;
extern String_t* _stringLiteral2429526158;
extern const uint32_t trough_OnCollisionEnter_m2878961126_MetadataUsageId;
struct ContactPoint_t3758755253 ;

struct StringU5BU5D_t1281789340;
struct CharU5BU5D_t3528271667;
struct Vector3U5BU5D_t1718750761;


#ifndef U3CMODULEU3E_T692745545_H
#define U3CMODULEU3E_T692745545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745545 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745545_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DIALOGUE_T118236717_H
#define DIALOGUE_T118236717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Dialogue
struct  Dialogue_t118236717  : public RuntimeObject
{
public:
	// System.String Dialogue::name
	String_t* ___name_0;
	// System.String[] Dialogue::sentences
	StringU5BU5D_t1281789340* ___sentences_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Dialogue_t118236717, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_sentences_1() { return static_cast<int32_t>(offsetof(Dialogue_t118236717, ___sentences_1)); }
	inline StringU5BU5D_t1281789340* get_sentences_1() const { return ___sentences_1; }
	inline StringU5BU5D_t1281789340** get_address_of_sentences_1() { return &___sentences_1; }
	inline void set_sentences_1(StringU5BU5D_t1281789340* value)
	{
		___sentences_1 = value;
		Il2CppCodeGenWriteBarrier((&___sentences_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIALOGUE_T118236717_H
#ifndef QUEUE_1_T1693710183_H
#define QUEUE_1_T1693710183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<System.String>
struct  Queue_1_t1693710183  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	StringU5BU5D_t1281789340* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t1693710183, ____array_0)); }
	inline StringU5BU5D_t1281789340* get__array_0() const { return ____array_0; }
	inline StringU5BU5D_t1281789340** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(StringU5BU5D_t1281789340* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t1693710183, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t1693710183, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t1693710183, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t1693710183, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T1693710183_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef U3CTYPESENTENCEU3EC__ITERATOR0_T3358278585_H
#define U3CTYPESENTENCEU3EC__ITERATOR0_T3358278585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DialogueManager/<typeSentence>c__Iterator0
struct  U3CtypeSentenceU3Ec__Iterator0_t3358278585  : public RuntimeObject
{
public:
	// System.String DialogueManager/<typeSentence>c__Iterator0::sentence
	String_t* ___sentence_0;
	// System.Char[] DialogueManager/<typeSentence>c__Iterator0::$locvar0
	CharU5BU5D_t3528271667* ___U24locvar0_1;
	// System.Int32 DialogueManager/<typeSentence>c__Iterator0::$locvar1
	int32_t ___U24locvar1_2;
	// System.Char DialogueManager/<typeSentence>c__Iterator0::<letter>__1
	Il2CppChar ___U3CletterU3E__1_3;
	// DialogueManager DialogueManager/<typeSentence>c__Iterator0::$this
	DialogueManager_t3506686710 * ___U24this_4;
	// System.Object DialogueManager/<typeSentence>c__Iterator0::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean DialogueManager/<typeSentence>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 DialogueManager/<typeSentence>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_sentence_0() { return static_cast<int32_t>(offsetof(U3CtypeSentenceU3Ec__Iterator0_t3358278585, ___sentence_0)); }
	inline String_t* get_sentence_0() const { return ___sentence_0; }
	inline String_t** get_address_of_sentence_0() { return &___sentence_0; }
	inline void set_sentence_0(String_t* value)
	{
		___sentence_0 = value;
		Il2CppCodeGenWriteBarrier((&___sentence_0), value);
	}

	inline static int32_t get_offset_of_U24locvar0_1() { return static_cast<int32_t>(offsetof(U3CtypeSentenceU3Ec__Iterator0_t3358278585, ___U24locvar0_1)); }
	inline CharU5BU5D_t3528271667* get_U24locvar0_1() const { return ___U24locvar0_1; }
	inline CharU5BU5D_t3528271667** get_address_of_U24locvar0_1() { return &___U24locvar0_1; }
	inline void set_U24locvar0_1(CharU5BU5D_t3528271667* value)
	{
		___U24locvar0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_1), value);
	}

	inline static int32_t get_offset_of_U24locvar1_2() { return static_cast<int32_t>(offsetof(U3CtypeSentenceU3Ec__Iterator0_t3358278585, ___U24locvar1_2)); }
	inline int32_t get_U24locvar1_2() const { return ___U24locvar1_2; }
	inline int32_t* get_address_of_U24locvar1_2() { return &___U24locvar1_2; }
	inline void set_U24locvar1_2(int32_t value)
	{
		___U24locvar1_2 = value;
	}

	inline static int32_t get_offset_of_U3CletterU3E__1_3() { return static_cast<int32_t>(offsetof(U3CtypeSentenceU3Ec__Iterator0_t3358278585, ___U3CletterU3E__1_3)); }
	inline Il2CppChar get_U3CletterU3E__1_3() const { return ___U3CletterU3E__1_3; }
	inline Il2CppChar* get_address_of_U3CletterU3E__1_3() { return &___U3CletterU3E__1_3; }
	inline void set_U3CletterU3E__1_3(Il2CppChar value)
	{
		___U3CletterU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CtypeSentenceU3Ec__Iterator0_t3358278585, ___U24this_4)); }
	inline DialogueManager_t3506686710 * get_U24this_4() const { return ___U24this_4; }
	inline DialogueManager_t3506686710 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(DialogueManager_t3506686710 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CtypeSentenceU3Ec__Iterator0_t3358278585, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CtypeSentenceU3Ec__Iterator0_t3358278585, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CtypeSentenceU3Ec__Iterator0_t3358278585, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTYPESENTENCEU3EC__ITERATOR0_T3358278585_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef LAYERMASK_T3493934918_H
#define LAYERMASK_T3493934918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3493934918 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3493934918, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T3493934918_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef U3CTURNTOFACEU3EC__ITERATOR1_T2972656240_H
#define U3CTURNTOFACEU3EC__ITERATOR1_T2972656240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// goatController/<TurnToFace>c__Iterator1
struct  U3CTurnToFaceU3Ec__Iterator1_t2972656240  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 goatController/<TurnToFace>c__Iterator1::lookTarget
	Vector3_t3722313464  ___lookTarget_0;
	// UnityEngine.Vector3 goatController/<TurnToFace>c__Iterator1::<dirToLookTarget>__0
	Vector3_t3722313464  ___U3CdirToLookTargetU3E__0_1;
	// System.Single goatController/<TurnToFace>c__Iterator1::<targetAngle>__0
	float ___U3CtargetAngleU3E__0_2;
	// System.Single goatController/<TurnToFace>c__Iterator1::<angle>__1
	float ___U3CangleU3E__1_3;
	// goatController goatController/<TurnToFace>c__Iterator1::$this
	goatController_t2995955395 * ___U24this_4;
	// System.Object goatController/<TurnToFace>c__Iterator1::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean goatController/<TurnToFace>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 goatController/<TurnToFace>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_lookTarget_0() { return static_cast<int32_t>(offsetof(U3CTurnToFaceU3Ec__Iterator1_t2972656240, ___lookTarget_0)); }
	inline Vector3_t3722313464  get_lookTarget_0() const { return ___lookTarget_0; }
	inline Vector3_t3722313464 * get_address_of_lookTarget_0() { return &___lookTarget_0; }
	inline void set_lookTarget_0(Vector3_t3722313464  value)
	{
		___lookTarget_0 = value;
	}

	inline static int32_t get_offset_of_U3CdirToLookTargetU3E__0_1() { return static_cast<int32_t>(offsetof(U3CTurnToFaceU3Ec__Iterator1_t2972656240, ___U3CdirToLookTargetU3E__0_1)); }
	inline Vector3_t3722313464  get_U3CdirToLookTargetU3E__0_1() const { return ___U3CdirToLookTargetU3E__0_1; }
	inline Vector3_t3722313464 * get_address_of_U3CdirToLookTargetU3E__0_1() { return &___U3CdirToLookTargetU3E__0_1; }
	inline void set_U3CdirToLookTargetU3E__0_1(Vector3_t3722313464  value)
	{
		___U3CdirToLookTargetU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CtargetAngleU3E__0_2() { return static_cast<int32_t>(offsetof(U3CTurnToFaceU3Ec__Iterator1_t2972656240, ___U3CtargetAngleU3E__0_2)); }
	inline float get_U3CtargetAngleU3E__0_2() const { return ___U3CtargetAngleU3E__0_2; }
	inline float* get_address_of_U3CtargetAngleU3E__0_2() { return &___U3CtargetAngleU3E__0_2; }
	inline void set_U3CtargetAngleU3E__0_2(float value)
	{
		___U3CtargetAngleU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U3CangleU3E__1_3() { return static_cast<int32_t>(offsetof(U3CTurnToFaceU3Ec__Iterator1_t2972656240, ___U3CangleU3E__1_3)); }
	inline float get_U3CangleU3E__1_3() const { return ___U3CangleU3E__1_3; }
	inline float* get_address_of_U3CangleU3E__1_3() { return &___U3CangleU3E__1_3; }
	inline void set_U3CangleU3E__1_3(float value)
	{
		___U3CangleU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CTurnToFaceU3Ec__Iterator1_t2972656240, ___U24this_4)); }
	inline goatController_t2995955395 * get_U24this_4() const { return ___U24this_4; }
	inline goatController_t2995955395 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(goatController_t2995955395 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CTurnToFaceU3Ec__Iterator1_t2972656240, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CTurnToFaceU3Ec__Iterator1_t2972656240, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CTurnToFaceU3Ec__Iterator1_t2972656240, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTURNTOFACEU3EC__ITERATOR1_T2972656240_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T2599294277_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef COLLISION_T4262080450_H
#define COLLISION_T4262080450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision
struct  Collision_t4262080450  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t3722313464  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1773347010 * ___m_Collider_3;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_Contacts
	ContactPointU5BU5D_t872956888* ___m_Contacts_4;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Impulse_0)); }
	inline Vector3_t3722313464  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t3722313464 * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t3722313464  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_RelativeVelocity_1)); }
	inline Vector3_t3722313464  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t3722313464 * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t3722313464  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Rigidbody_2)); }
	inline Rigidbody_t3916780224 * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t3916780224 ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t3916780224 * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody_2), value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Collider_3)); }
	inline Collider_t1773347010 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t1773347010 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t1773347010 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_3), value);
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Contacts_4)); }
	inline ContactPointU5BU5D_t872956888* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPointU5BU5D_t872956888** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPointU5BU5D_t872956888* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_t4262080450_marshaled_pinvoke
{
	Vector3_t3722313464  ___m_Impulse_0;
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	Collider_t1773347010 * ___m_Collider_3;
	ContactPoint_t3758755253 * ___m_Contacts_4;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_t4262080450_marshaled_com
{
	Vector3_t3722313464  ___m_Impulse_0;
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	Collider_t1773347010 * ___m_Collider_3;
	ContactPoint_t3758755253 * ___m_Contacts_4;
};
#endif // COLLISION_T4262080450_H
#ifndef U3CFOLLOWPATHU3EC__ITERATOR0_T2268932854_H
#define U3CFOLLOWPATHU3EC__ITERATOR0_T2268932854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// goatController/<FollowPath>c__Iterator0
struct  U3CFollowPathU3Ec__Iterator0_t2268932854  : public RuntimeObject
{
public:
	// UnityEngine.Vector3[] goatController/<FollowPath>c__Iterator0::waypoints
	Vector3U5BU5D_t1718750761* ___waypoints_0;
	// System.Int32 goatController/<FollowPath>c__Iterator0::<targetWaypointIndex>__0
	int32_t ___U3CtargetWaypointIndexU3E__0_1;
	// UnityEngine.Vector3 goatController/<FollowPath>c__Iterator0::<targetWaypoint>__0
	Vector3_t3722313464  ___U3CtargetWaypointU3E__0_2;
	// goatController goatController/<FollowPath>c__Iterator0::$this
	goatController_t2995955395 * ___U24this_3;
	// System.Object goatController/<FollowPath>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean goatController/<FollowPath>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 goatController/<FollowPath>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_waypoints_0() { return static_cast<int32_t>(offsetof(U3CFollowPathU3Ec__Iterator0_t2268932854, ___waypoints_0)); }
	inline Vector3U5BU5D_t1718750761* get_waypoints_0() const { return ___waypoints_0; }
	inline Vector3U5BU5D_t1718750761** get_address_of_waypoints_0() { return &___waypoints_0; }
	inline void set_waypoints_0(Vector3U5BU5D_t1718750761* value)
	{
		___waypoints_0 = value;
		Il2CppCodeGenWriteBarrier((&___waypoints_0), value);
	}

	inline static int32_t get_offset_of_U3CtargetWaypointIndexU3E__0_1() { return static_cast<int32_t>(offsetof(U3CFollowPathU3Ec__Iterator0_t2268932854, ___U3CtargetWaypointIndexU3E__0_1)); }
	inline int32_t get_U3CtargetWaypointIndexU3E__0_1() const { return ___U3CtargetWaypointIndexU3E__0_1; }
	inline int32_t* get_address_of_U3CtargetWaypointIndexU3E__0_1() { return &___U3CtargetWaypointIndexU3E__0_1; }
	inline void set_U3CtargetWaypointIndexU3E__0_1(int32_t value)
	{
		___U3CtargetWaypointIndexU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CtargetWaypointU3E__0_2() { return static_cast<int32_t>(offsetof(U3CFollowPathU3Ec__Iterator0_t2268932854, ___U3CtargetWaypointU3E__0_2)); }
	inline Vector3_t3722313464  get_U3CtargetWaypointU3E__0_2() const { return ___U3CtargetWaypointU3E__0_2; }
	inline Vector3_t3722313464 * get_address_of_U3CtargetWaypointU3E__0_2() { return &___U3CtargetWaypointU3E__0_2; }
	inline void set_U3CtargetWaypointU3E__0_2(Vector3_t3722313464  value)
	{
		___U3CtargetWaypointU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CFollowPathU3Ec__Iterator0_t2268932854, ___U24this_3)); }
	inline goatController_t2995955395 * get_U24this_3() const { return ___U24this_3; }
	inline goatController_t2995955395 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(goatController_t2995955395 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CFollowPathU3Ec__Iterator0_t2268932854, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CFollowPathU3Ec__Iterator0_t2268932854, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CFollowPathU3Ec__Iterator0_t2268932854, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFOLLOWPATHU3EC__ITERATOR0_T2268932854_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef RIGIDBODY_T3916780224_H
#define RIGIDBODY_T3916780224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t3916780224  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T3916780224_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef ANIMATOR_T434523843_H
#define ANIMATOR_T434523843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t434523843  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T434523843_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef LIGHT_T3756812086_H
#define LIGHT_T3756812086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Light
struct  Light_t3756812086  : public Behaviour_t1437897464
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_2;

public:
	inline static int32_t get_offset_of_m_BakedIndex_2() { return static_cast<int32_t>(offsetof(Light_t3756812086, ___m_BakedIndex_2)); }
	inline int32_t get_m_BakedIndex_2() const { return ___m_BakedIndex_2; }
	inline int32_t* get_address_of_m_BakedIndex_2() { return &___m_BakedIndex_2; }
	inline void set_m_BakedIndex_2(int32_t value)
	{
		___m_BakedIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHT_T3756812086_H
#ifndef GOATCONTROLLER_T2995955395_H
#define GOATCONTROLLER_T2995955395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// goatController
struct  goatController_t2995955395  : public MonoBehaviour_t3962482529
{
public:
	// System.Single goatController::speed
	float ___speed_3;
	// System.Single goatController::waitTime
	float ___waitTime_4;
	// System.Single goatController::turnSpeed
	float ___turnSpeed_5;
	// System.Single goatController::biteTime
	float ___biteTime_6;
	// UnityEngine.Light goatController::spotlight
	Light_t3756812086 * ___spotlight_7;
	// System.Single goatController::viewDistance
	float ___viewDistance_8;
	// UnityEngine.LayerMask goatController::viewMask
	LayerMask_t3493934918  ___viewMask_9;
	// System.Single goatController::viewAngle
	float ___viewAngle_10;
	// System.Single goatController::playerVisibleTimer
	float ___playerVisibleTimer_11;
	// UnityEngine.Transform goatController::pathHolder
	Transform_t3600365921 * ___pathHolder_12;
	// UnityEngine.Transform goatController::player
	Transform_t3600365921 * ___player_13;
	// UnityEngine.Color goatController::originalSpotlightColor
	Color_t2555686324  ___originalSpotlightColor_14;

public:
	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(goatController_t2995955395, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_waitTime_4() { return static_cast<int32_t>(offsetof(goatController_t2995955395, ___waitTime_4)); }
	inline float get_waitTime_4() const { return ___waitTime_4; }
	inline float* get_address_of_waitTime_4() { return &___waitTime_4; }
	inline void set_waitTime_4(float value)
	{
		___waitTime_4 = value;
	}

	inline static int32_t get_offset_of_turnSpeed_5() { return static_cast<int32_t>(offsetof(goatController_t2995955395, ___turnSpeed_5)); }
	inline float get_turnSpeed_5() const { return ___turnSpeed_5; }
	inline float* get_address_of_turnSpeed_5() { return &___turnSpeed_5; }
	inline void set_turnSpeed_5(float value)
	{
		___turnSpeed_5 = value;
	}

	inline static int32_t get_offset_of_biteTime_6() { return static_cast<int32_t>(offsetof(goatController_t2995955395, ___biteTime_6)); }
	inline float get_biteTime_6() const { return ___biteTime_6; }
	inline float* get_address_of_biteTime_6() { return &___biteTime_6; }
	inline void set_biteTime_6(float value)
	{
		___biteTime_6 = value;
	}

	inline static int32_t get_offset_of_spotlight_7() { return static_cast<int32_t>(offsetof(goatController_t2995955395, ___spotlight_7)); }
	inline Light_t3756812086 * get_spotlight_7() const { return ___spotlight_7; }
	inline Light_t3756812086 ** get_address_of_spotlight_7() { return &___spotlight_7; }
	inline void set_spotlight_7(Light_t3756812086 * value)
	{
		___spotlight_7 = value;
		Il2CppCodeGenWriteBarrier((&___spotlight_7), value);
	}

	inline static int32_t get_offset_of_viewDistance_8() { return static_cast<int32_t>(offsetof(goatController_t2995955395, ___viewDistance_8)); }
	inline float get_viewDistance_8() const { return ___viewDistance_8; }
	inline float* get_address_of_viewDistance_8() { return &___viewDistance_8; }
	inline void set_viewDistance_8(float value)
	{
		___viewDistance_8 = value;
	}

	inline static int32_t get_offset_of_viewMask_9() { return static_cast<int32_t>(offsetof(goatController_t2995955395, ___viewMask_9)); }
	inline LayerMask_t3493934918  get_viewMask_9() const { return ___viewMask_9; }
	inline LayerMask_t3493934918 * get_address_of_viewMask_9() { return &___viewMask_9; }
	inline void set_viewMask_9(LayerMask_t3493934918  value)
	{
		___viewMask_9 = value;
	}

	inline static int32_t get_offset_of_viewAngle_10() { return static_cast<int32_t>(offsetof(goatController_t2995955395, ___viewAngle_10)); }
	inline float get_viewAngle_10() const { return ___viewAngle_10; }
	inline float* get_address_of_viewAngle_10() { return &___viewAngle_10; }
	inline void set_viewAngle_10(float value)
	{
		___viewAngle_10 = value;
	}

	inline static int32_t get_offset_of_playerVisibleTimer_11() { return static_cast<int32_t>(offsetof(goatController_t2995955395, ___playerVisibleTimer_11)); }
	inline float get_playerVisibleTimer_11() const { return ___playerVisibleTimer_11; }
	inline float* get_address_of_playerVisibleTimer_11() { return &___playerVisibleTimer_11; }
	inline void set_playerVisibleTimer_11(float value)
	{
		___playerVisibleTimer_11 = value;
	}

	inline static int32_t get_offset_of_pathHolder_12() { return static_cast<int32_t>(offsetof(goatController_t2995955395, ___pathHolder_12)); }
	inline Transform_t3600365921 * get_pathHolder_12() const { return ___pathHolder_12; }
	inline Transform_t3600365921 ** get_address_of_pathHolder_12() { return &___pathHolder_12; }
	inline void set_pathHolder_12(Transform_t3600365921 * value)
	{
		___pathHolder_12 = value;
		Il2CppCodeGenWriteBarrier((&___pathHolder_12), value);
	}

	inline static int32_t get_offset_of_player_13() { return static_cast<int32_t>(offsetof(goatController_t2995955395, ___player_13)); }
	inline Transform_t3600365921 * get_player_13() const { return ___player_13; }
	inline Transform_t3600365921 ** get_address_of_player_13() { return &___player_13; }
	inline void set_player_13(Transform_t3600365921 * value)
	{
		___player_13 = value;
		Il2CppCodeGenWriteBarrier((&___player_13), value);
	}

	inline static int32_t get_offset_of_originalSpotlightColor_14() { return static_cast<int32_t>(offsetof(goatController_t2995955395, ___originalSpotlightColor_14)); }
	inline Color_t2555686324  get_originalSpotlightColor_14() const { return ___originalSpotlightColor_14; }
	inline Color_t2555686324 * get_address_of_originalSpotlightColor_14() { return &___originalSpotlightColor_14; }
	inline void set_originalSpotlightColor_14(Color_t2555686324  value)
	{
		___originalSpotlightColor_14 = value;
	}
};

struct goatController_t2995955395_StaticFields
{
public:
	// System.Action goatController::OnGoatSawYou
	Action_t1264377477 * ___OnGoatSawYou_2;

public:
	inline static int32_t get_offset_of_OnGoatSawYou_2() { return static_cast<int32_t>(offsetof(goatController_t2995955395_StaticFields, ___OnGoatSawYou_2)); }
	inline Action_t1264377477 * get_OnGoatSawYou_2() const { return ___OnGoatSawYou_2; }
	inline Action_t1264377477 ** get_address_of_OnGoatSawYou_2() { return &___OnGoatSawYou_2; }
	inline void set_OnGoatSawYou_2(Action_t1264377477 * value)
	{
		___OnGoatSawYou_2 = value;
		Il2CppCodeGenWriteBarrier((&___OnGoatSawYou_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOATCONTROLLER_T2995955395_H
#ifndef PLAYERCONTROLLER_T2064355688_H
#define PLAYERCONTROLLER_T2064355688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2064355688  : public MonoBehaviour_t3962482529
{
public:
	// System.Single PlayerController::moveSpeed
	float ___moveSpeed_2;
	// System.Single PlayerController::smoothMoveTime
	float ___smoothMoveTime_3;
	// System.Single PlayerController::turnSpeed
	float ___turnSpeed_4;
	// System.Single PlayerController::angle
	float ___angle_5;
	// System.Single PlayerController::smoothInputMagnitude
	float ___smoothInputMagnitude_6;
	// System.Single PlayerController::smoothMoveVelocity
	float ___smoothMoveVelocity_7;
	// UnityEngine.Vector3 PlayerController::velocity
	Vector3_t3722313464  ___velocity_8;
	// UnityEngine.Rigidbody PlayerController::rgbody
	Rigidbody_t3916780224 * ___rgbody_9;
	// System.Boolean PlayerController::disabled
	bool ___disabled_10;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_smoothMoveTime_3() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___smoothMoveTime_3)); }
	inline float get_smoothMoveTime_3() const { return ___smoothMoveTime_3; }
	inline float* get_address_of_smoothMoveTime_3() { return &___smoothMoveTime_3; }
	inline void set_smoothMoveTime_3(float value)
	{
		___smoothMoveTime_3 = value;
	}

	inline static int32_t get_offset_of_turnSpeed_4() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___turnSpeed_4)); }
	inline float get_turnSpeed_4() const { return ___turnSpeed_4; }
	inline float* get_address_of_turnSpeed_4() { return &___turnSpeed_4; }
	inline void set_turnSpeed_4(float value)
	{
		___turnSpeed_4 = value;
	}

	inline static int32_t get_offset_of_angle_5() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___angle_5)); }
	inline float get_angle_5() const { return ___angle_5; }
	inline float* get_address_of_angle_5() { return &___angle_5; }
	inline void set_angle_5(float value)
	{
		___angle_5 = value;
	}

	inline static int32_t get_offset_of_smoothInputMagnitude_6() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___smoothInputMagnitude_6)); }
	inline float get_smoothInputMagnitude_6() const { return ___smoothInputMagnitude_6; }
	inline float* get_address_of_smoothInputMagnitude_6() { return &___smoothInputMagnitude_6; }
	inline void set_smoothInputMagnitude_6(float value)
	{
		___smoothInputMagnitude_6 = value;
	}

	inline static int32_t get_offset_of_smoothMoveVelocity_7() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___smoothMoveVelocity_7)); }
	inline float get_smoothMoveVelocity_7() const { return ___smoothMoveVelocity_7; }
	inline float* get_address_of_smoothMoveVelocity_7() { return &___smoothMoveVelocity_7; }
	inline void set_smoothMoveVelocity_7(float value)
	{
		___smoothMoveVelocity_7 = value;
	}

	inline static int32_t get_offset_of_velocity_8() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___velocity_8)); }
	inline Vector3_t3722313464  get_velocity_8() const { return ___velocity_8; }
	inline Vector3_t3722313464 * get_address_of_velocity_8() { return &___velocity_8; }
	inline void set_velocity_8(Vector3_t3722313464  value)
	{
		___velocity_8 = value;
	}

	inline static int32_t get_offset_of_rgbody_9() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___rgbody_9)); }
	inline Rigidbody_t3916780224 * get_rgbody_9() const { return ___rgbody_9; }
	inline Rigidbody_t3916780224 ** get_address_of_rgbody_9() { return &___rgbody_9; }
	inline void set_rgbody_9(Rigidbody_t3916780224 * value)
	{
		___rgbody_9 = value;
		Il2CppCodeGenWriteBarrier((&___rgbody_9), value);
	}

	inline static int32_t get_offset_of_disabled_10() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___disabled_10)); }
	inline bool get_disabled_10() const { return ___disabled_10; }
	inline bool* get_address_of_disabled_10() { return &___disabled_10; }
	inline void set_disabled_10(bool value)
	{
		___disabled_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_T2064355688_H
#ifndef TROUGH_T4133365632_H
#define TROUGH_T4133365632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// trough
struct  trough_t4133365632  : public MonoBehaviour_t3962482529
{
public:
	// System.Single trough::radius
	float ___radius_3;
	// UnityEngine.GameObject trough::carryFood
	GameObject_t1113636619 * ___carryFood_4;
	// UnityEngine.Transform trough::foodParent
	Transform_t3600365921 * ___foodParent_5;
	// System.Int32 trough::startFood
	int32_t ___startFood_6;

public:
	inline static int32_t get_offset_of_radius_3() { return static_cast<int32_t>(offsetof(trough_t4133365632, ___radius_3)); }
	inline float get_radius_3() const { return ___radius_3; }
	inline float* get_address_of_radius_3() { return &___radius_3; }
	inline void set_radius_3(float value)
	{
		___radius_3 = value;
	}

	inline static int32_t get_offset_of_carryFood_4() { return static_cast<int32_t>(offsetof(trough_t4133365632, ___carryFood_4)); }
	inline GameObject_t1113636619 * get_carryFood_4() const { return ___carryFood_4; }
	inline GameObject_t1113636619 ** get_address_of_carryFood_4() { return &___carryFood_4; }
	inline void set_carryFood_4(GameObject_t1113636619 * value)
	{
		___carryFood_4 = value;
		Il2CppCodeGenWriteBarrier((&___carryFood_4), value);
	}

	inline static int32_t get_offset_of_foodParent_5() { return static_cast<int32_t>(offsetof(trough_t4133365632, ___foodParent_5)); }
	inline Transform_t3600365921 * get_foodParent_5() const { return ___foodParent_5; }
	inline Transform_t3600365921 ** get_address_of_foodParent_5() { return &___foodParent_5; }
	inline void set_foodParent_5(Transform_t3600365921 * value)
	{
		___foodParent_5 = value;
		Il2CppCodeGenWriteBarrier((&___foodParent_5), value);
	}

	inline static int32_t get_offset_of_startFood_6() { return static_cast<int32_t>(offsetof(trough_t4133365632, ___startFood_6)); }
	inline int32_t get_startFood_6() const { return ___startFood_6; }
	inline int32_t* get_address_of_startFood_6() { return &___startFood_6; }
	inline void set_startFood_6(int32_t value)
	{
		___startFood_6 = value;
	}
};

struct trough_t4133365632_StaticFields
{
public:
	// System.Boolean trough::troughFull
	bool ___troughFull_2;

public:
	inline static int32_t get_offset_of_troughFull_2() { return static_cast<int32_t>(offsetof(trough_t4133365632_StaticFields, ___troughFull_2)); }
	inline bool get_troughFull_2() const { return ___troughFull_2; }
	inline bool* get_address_of_troughFull_2() { return &___troughFull_2; }
	inline void set_troughFull_2(bool value)
	{
		___troughFull_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TROUGH_T4133365632_H
#ifndef GAMEUI_T4172234623_H
#define GAMEUI_T4172234623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameUI
struct  GameUI_t4172234623  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject GameUI::gameLoseUI
	GameObject_t1113636619 * ___gameLoseUI_2;
	// UnityEngine.GameObject GameUI::gameWinUI
	GameObject_t1113636619 * ___gameWinUI_3;
	// System.Boolean GameUI::gameIsOver
	bool ___gameIsOver_4;

public:
	inline static int32_t get_offset_of_gameLoseUI_2() { return static_cast<int32_t>(offsetof(GameUI_t4172234623, ___gameLoseUI_2)); }
	inline GameObject_t1113636619 * get_gameLoseUI_2() const { return ___gameLoseUI_2; }
	inline GameObject_t1113636619 ** get_address_of_gameLoseUI_2() { return &___gameLoseUI_2; }
	inline void set_gameLoseUI_2(GameObject_t1113636619 * value)
	{
		___gameLoseUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___gameLoseUI_2), value);
	}

	inline static int32_t get_offset_of_gameWinUI_3() { return static_cast<int32_t>(offsetof(GameUI_t4172234623, ___gameWinUI_3)); }
	inline GameObject_t1113636619 * get_gameWinUI_3() const { return ___gameWinUI_3; }
	inline GameObject_t1113636619 ** get_address_of_gameWinUI_3() { return &___gameWinUI_3; }
	inline void set_gameWinUI_3(GameObject_t1113636619 * value)
	{
		___gameWinUI_3 = value;
		Il2CppCodeGenWriteBarrier((&___gameWinUI_3), value);
	}

	inline static int32_t get_offset_of_gameIsOver_4() { return static_cast<int32_t>(offsetof(GameUI_t4172234623, ___gameIsOver_4)); }
	inline bool get_gameIsOver_4() const { return ___gameIsOver_4; }
	inline bool* get_address_of_gameIsOver_4() { return &___gameIsOver_4; }
	inline void set_gameIsOver_4(bool value)
	{
		___gameIsOver_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEUI_T4172234623_H
#ifndef FOODINTERACTION_T1842920251_H
#define FOODINTERACTION_T1842920251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// foodInteraction
struct  foodInteraction_t1842920251  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject foodInteraction::carryFood
	GameObject_t1113636619 * ___carryFood_2;

public:
	inline static int32_t get_offset_of_carryFood_2() { return static_cast<int32_t>(offsetof(foodInteraction_t1842920251, ___carryFood_2)); }
	inline GameObject_t1113636619 * get_carryFood_2() const { return ___carryFood_2; }
	inline GameObject_t1113636619 ** get_address_of_carryFood_2() { return &___carryFood_2; }
	inline void set_carryFood_2(GameObject_t1113636619 * value)
	{
		___carryFood_2 = value;
		Il2CppCodeGenWriteBarrier((&___carryFood_2), value);
	}
};

struct foodInteraction_t1842920251_StaticFields
{
public:
	// System.Boolean foodInteraction::handsFull
	bool ___handsFull_3;

public:
	inline static int32_t get_offset_of_handsFull_3() { return static_cast<int32_t>(offsetof(foodInteraction_t1842920251_StaticFields, ___handsFull_3)); }
	inline bool get_handsFull_3() const { return ___handsFull_3; }
	inline bool* get_address_of_handsFull_3() { return &___handsFull_3; }
	inline void set_handsFull_3(bool value)
	{
		___handsFull_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOODINTERACTION_T1842920251_H
#ifndef DIALOGUETRIGGER_T3849820820_H
#define DIALOGUETRIGGER_T3849820820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DialogueTrigger
struct  DialogueTrigger_t3849820820  : public MonoBehaviour_t3962482529
{
public:
	// Dialogue DialogueTrigger::dialogue
	Dialogue_t118236717 * ___dialogue_2;

public:
	inline static int32_t get_offset_of_dialogue_2() { return static_cast<int32_t>(offsetof(DialogueTrigger_t3849820820, ___dialogue_2)); }
	inline Dialogue_t118236717 * get_dialogue_2() const { return ___dialogue_2; }
	inline Dialogue_t118236717 ** get_address_of_dialogue_2() { return &___dialogue_2; }
	inline void set_dialogue_2(Dialogue_t118236717 * value)
	{
		___dialogue_2 = value;
		Il2CppCodeGenWriteBarrier((&___dialogue_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIALOGUETRIGGER_T3849820820_H
#ifndef DIALOGUEMANAGER_T3506686710_H
#define DIALOGUEMANAGER_T3506686710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DialogueManager
struct  DialogueManager_t3506686710  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text DialogueManager::nameText
	Text_t1901882714 * ___nameText_2;
	// UnityEngine.UI.Text DialogueManager::dialogueText
	Text_t1901882714 * ___dialogueText_3;
	// UnityEngine.Animator DialogueManager::animator
	Animator_t434523843 * ___animator_4;
	// System.Collections.Generic.Queue`1<System.String> DialogueManager::sentences
	Queue_1_t1693710183 * ___sentences_5;

public:
	inline static int32_t get_offset_of_nameText_2() { return static_cast<int32_t>(offsetof(DialogueManager_t3506686710, ___nameText_2)); }
	inline Text_t1901882714 * get_nameText_2() const { return ___nameText_2; }
	inline Text_t1901882714 ** get_address_of_nameText_2() { return &___nameText_2; }
	inline void set_nameText_2(Text_t1901882714 * value)
	{
		___nameText_2 = value;
		Il2CppCodeGenWriteBarrier((&___nameText_2), value);
	}

	inline static int32_t get_offset_of_dialogueText_3() { return static_cast<int32_t>(offsetof(DialogueManager_t3506686710, ___dialogueText_3)); }
	inline Text_t1901882714 * get_dialogueText_3() const { return ___dialogueText_3; }
	inline Text_t1901882714 ** get_address_of_dialogueText_3() { return &___dialogueText_3; }
	inline void set_dialogueText_3(Text_t1901882714 * value)
	{
		___dialogueText_3 = value;
		Il2CppCodeGenWriteBarrier((&___dialogueText_3), value);
	}

	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(DialogueManager_t3506686710, ___animator_4)); }
	inline Animator_t434523843 * get_animator_4() const { return ___animator_4; }
	inline Animator_t434523843 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t434523843 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier((&___animator_4), value);
	}

	inline static int32_t get_offset_of_sentences_5() { return static_cast<int32_t>(offsetof(DialogueManager_t3506686710, ___sentences_5)); }
	inline Queue_1_t1693710183 * get_sentences_5() const { return ___sentences_5; }
	inline Queue_1_t1693710183 ** get_address_of_sentences_5() { return &___sentences_5; }
	inline void set_sentences_5(Queue_1_t1693710183 * value)
	{
		___sentences_5 = value;
		Il2CppCodeGenWriteBarrier((&___sentences_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIALOGUEMANAGER_T3506686710_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C"  void Queue_1__ctor_m3749217910_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
extern "C"  void Queue_1_Clear_m4070494218_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
extern "C"  void Queue_1_Enqueue_m1868480850_gshared (Queue_1_t2926365658 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C"  int32_t Queue_1_get_Count_m2496300460_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C"  RuntimeObject * Queue_1_Dequeue_m3550993416_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C"  RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m2612646359_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Queue`1<System.String>::.ctor()
#define Queue_1__ctor_m4171879767(__this, method) ((  void (*) (Queue_1_t1693710183 *, const RuntimeMethod*))Queue_1__ctor_m3749217910_gshared)(__this, method)
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C"  void Animator_SetBool_m234840832 (Animator_t434523843 * __this, String_t* p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Queue`1<System.String>::Clear()
#define Queue_1_Clear_m1155020618(__this, method) ((  void (*) (Queue_1_t1693710183 *, const RuntimeMethod*))Queue_1_Clear_m4070494218_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.String>::Enqueue(!0)
#define Queue_1_Enqueue_m3056590024(__this, p0, method) ((  void (*) (Queue_1_t1693710183 *, String_t*, const RuntimeMethod*))Queue_1_Enqueue_m1868480850_gshared)(__this, p0, method)
// System.Void DialogueManager::DisplayNextSentence()
extern "C"  void DialogueManager_DisplayNextSentence_m3422385323 (DialogueManager_t3506686710 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Queue`1<System.String>::get_Count()
#define Queue_1_get_Count_m2387284005(__this, method) ((  int32_t (*) (Queue_1_t1693710183 *, const RuntimeMethod*))Queue_1_get_Count_m2496300460_gshared)(__this, method)
// System.Void DialogueManager::EndDialogue()
extern "C"  void DialogueManager_EndDialogue_m1452418081 (DialogueManager_t3506686710 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.Queue`1<System.String>::Dequeue()
#define Queue_1_Dequeue_m1924377868(__this, method) ((  String_t* (*) (Queue_1_t1693710183 *, const RuntimeMethod*))Queue_1_Dequeue_m3550993416_gshared)(__this, method)
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
extern "C"  void MonoBehaviour_StopAllCoroutines_m3328507247 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator DialogueManager::typeSentence(System.String)
extern "C"  RuntimeObject* DialogueManager_typeSentence_m2003067498 (DialogueManager_t3506686710 * __this, String_t* ___sentence0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DialogueManager/<typeSentence>c__Iterator0::.ctor()
extern "C"  void U3CtypeSentenceU3Ec__Iterator0__ctor_m481481777 (U3CtypeSentenceU3Ec__Iterator0_t3358278585 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
extern "C"  CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::FindObjectOfType<DialogueManager>()
#define Object_FindObjectOfType_TisDialogueManager_t3506686710_m3422857472(__this /* static, unused */, method) ((  DialogueManager_t3506686710 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m2612646359_gshared)(__this /* static, unused */, method)
// System.Void DialogueManager::StartDialogue(Dialogue)
extern "C"  void DialogueManager_StartDialogue_m2068076816 (DialogueManager_t3506686710 * __this, Dialogue_t118236717 * ___dialogue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
extern "C"  GameObject_t1113636619 * Collision_get_gameObject_m3662658840 (Collision_t4262080450 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C"  void Action__ctor_m2994342681 (Action_t1264377477 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void goatController::add_OnGoatSawYou(System.Action)
extern "C"  void goatController_add_OnGoatSawYou_m4178380362 (RuntimeObject * __this /* static, unused */, Action_t1264377477 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m17791917 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
extern "C"  void SceneManager_LoadScene_m3463216446 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameUI::ShowGameWinUI()
extern "C"  void GameUI_ShowGameWinUI_m762154251 (GameUI_t4172234623 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameUI::OnGameOver(UnityEngine.GameObject)
extern "C"  void GameUI_OnGameOver_m3909617351 (GameUI_t4172234623 * __this, GameObject_t1113636619 * ___gameOverUI0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void goatController::remove_OnGoatSawYou(System.Action)
extern "C"  void goatController_remove_OnGoatSawYou_m3181869858 (RuntimeObject * __this /* static, unused */, Action_t1264377477 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
extern "C"  GameObject_t1113636619 * GameObject_FindGameObjectWithTag_m2129039296 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Light::get_spotAngle()
extern "C"  float Light_get_spotAngle_m3262157804 (Light_t3756812086 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Light::get_color()
extern "C"  Color_t2555686324  Light_get_color_m552487206 (Light_t3756812086 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C"  int32_t Transform_get_childCount_m3145433196 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C"  Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator goatController::FollowPath(UnityEngine.Vector3[])
extern "C"  RuntimeObject* goatController_FollowPath_m1253381204 (goatController_t2995955395 * __this, Vector3U5BU5D_t1718750761* ___waypoints0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean goatController::CanSeePlayer()
extern "C"  bool goatController_CanSeePlayer_m1617575133 (goatController_t2995955395 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Clamp_m3350697880 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C"  Color_t2555686324  Color_get_red_m3227813939 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  Color_t2555686324  Color_Lerp_m973389909 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, Color_t2555686324  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
extern "C"  void Light_set_color_m608660336 (Light_t3756812086 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::Invoke()
extern "C"  void Action_Invoke_m937035532 (Action_t1264377477 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Distance_m886789632 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C"  Vector3_t3722313464  Vector3_get_normalized_m2454957984 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C"  Vector3_t3722313464  Transform_get_forward_m747522392 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Angle_m3731191531 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
extern "C"  int32_t LayerMask_op_Implicit_m3296792737 (RuntimeObject * __this /* static, unused */, LayerMask_t3493934918  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32)
extern "C"  bool Physics_Linecast_m1081031506 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void goatController/<FollowPath>c__Iterator0::.ctor()
extern "C"  void U3CFollowPathU3Ec__Iterator0__ctor_m542711983 (U3CFollowPathU3Ec__Iterator0_t2268932854 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void goatController/<TurnToFace>c__Iterator1::.ctor()
extern "C"  void U3CTurnToFaceU3Ec__Iterator1__ctor_m4023724356 (U3CTurnToFaceU3Ec__Iterator1_t2972656240 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C"  RuntimeObject* Transform_GetEnumerator_m2717073726 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::DrawSphere(UnityEngine.Vector3,System.Single)
extern "C"  void Gizmos_DrawSphere_m492648055 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Gizmos_DrawLine_m3273476787 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
extern "C"  void Gizmos_set_color_m3399737545 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Gizmos_DrawRay_m2985419931 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
extern "C"  void Transform_LookAt_m3649447396 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_MoveTowards_m2786395547 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Vector3_op_Equality_m4231250055 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator goatController::TurnToFace(UnityEngine.Vector3)
extern "C"  RuntimeObject* goatController_TurnToFace_m2868397517 (goatController_t2995955395 * __this, Vector3_t3722313464  ___lookTarget0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern "C"  Vector3_t3722313464  Transform_get_eulerAngles_m2743581774 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::MoveTowardsAngle(System.Single,System.Single,System.Single)
extern "C"  float Mathf_MoveTowardsAngle_m866077996 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C"  Vector3_t3722313464  Vector3_get_up_m3584168373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
extern "C"  void Transform_set_eulerAngles_m135219616 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
extern "C"  float Mathf_DeltaAngle_m1993880167 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
#define GameObject_GetComponent_TisRigidbody_t3916780224_m564316479(__this, method) ((  Rigidbody_t3916780224 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern "C"  float Input_GetAxisRaw_m2316819917 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C"  float Vector3_get_magnitude_m27958459 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single)
extern "C"  float Mathf_SmoothDamp_m3171073017 (RuntimeObject * __this /* static, unused */, float p0, float p1, float* p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::LerpAngle(System.Single,System.Single,System.Single)
extern "C"  float Mathf_LerpAngle_m295352085 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_Euler_m1803555822 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
extern "C"  void Rigidbody_MoveRotation_m72717779 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
extern "C"  Vector3_t3722313464  Rigidbody_get_position_m1712729619 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
extern "C"  void Rigidbody_MovePosition_m2109341474 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C"  String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_yellow()
extern "C"  Color_t2555686324  Color_get_yellow_m1287957903 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
extern "C"  void Gizmos_DrawWireSphere_m132265467 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void Dialogue::.ctor()
extern "C"  void Dialogue__ctor_m4065474262 (Dialogue_t118236717 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void DialogueManager::.ctor()
extern "C"  void DialogueManager__ctor_m2303123940 (DialogueManager_t3506686710 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DialogueManager::Start()
extern "C"  void DialogueManager_Start_m2103593510 (DialogueManager_t3506686710 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DialogueManager_Start_m2103593510_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t1693710183 * L_0 = (Queue_1_t1693710183 *)il2cpp_codegen_object_new(Queue_1_t1693710183_il2cpp_TypeInfo_var);
		Queue_1__ctor_m4171879767(L_0, /*hidden argument*/Queue_1__ctor_m4171879767_RuntimeMethod_var);
		__this->set_sentences_5(L_0);
		return;
	}
}
// System.Void DialogueManager::StartDialogue(Dialogue)
extern "C"  void DialogueManager_StartDialogue_m2068076816 (DialogueManager_t3506686710 * __this, Dialogue_t118236717 * ___dialogue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DialogueManager_StartDialogue_m2068076816_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Animator_t434523843 * L_0 = __this->get_animator_4();
		Animator_SetBool_m234840832(L_0, _stringLiteral497364073, (bool)1, /*hidden argument*/NULL);
		Text_t1901882714 * L_1 = __this->get_nameText_2();
		Dialogue_t118236717 * L_2 = ___dialogue0;
		String_t* L_3 = L_2->get_name_0();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		Queue_1_t1693710183 * L_4 = __this->get_sentences_5();
		Queue_1_Clear_m1155020618(L_4, /*hidden argument*/Queue_1_Clear_m1155020618_RuntimeMethod_var);
		Dialogue_t118236717 * L_5 = ___dialogue0;
		StringU5BU5D_t1281789340* L_6 = L_5->get_sentences_1();
		V_1 = L_6;
		V_2 = 0;
		goto IL_004f;
	}

IL_003b:
	{
		StringU5BU5D_t1281789340* L_7 = V_1;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = L_10;
		Queue_1_t1693710183 * L_11 = __this->get_sentences_5();
		String_t* L_12 = V_0;
		Queue_1_Enqueue_m3056590024(L_11, L_12, /*hidden argument*/Queue_1_Enqueue_m3056590024_RuntimeMethod_var);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004f:
	{
		int32_t L_14 = V_2;
		StringU5BU5D_t1281789340* L_15 = V_1;
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_003b;
		}
	}
	{
		DialogueManager_DisplayNextSentence_m3422385323(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DialogueManager::DisplayNextSentence()
extern "C"  void DialogueManager_DisplayNextSentence_m3422385323 (DialogueManager_t3506686710 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DialogueManager_DisplayNextSentence_m3422385323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Queue_1_t1693710183 * L_0 = __this->get_sentences_5();
		int32_t L_1 = Queue_1_get_Count_m2387284005(L_0, /*hidden argument*/Queue_1_get_Count_m2387284005_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		DialogueManager_EndDialogue_m1452418081(__this, /*hidden argument*/NULL);
		return;
	}

IL_0017:
	{
		Queue_1_t1693710183 * L_2 = __this->get_sentences_5();
		String_t* L_3 = Queue_1_Dequeue_m1924377868(L_2, /*hidden argument*/Queue_1_Dequeue_m1924377868_RuntimeMethod_var);
		V_0 = L_3;
		Text_t1901882714 * L_4 = __this->get_dialogueText_3();
		String_t* L_5 = V_0;
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		MonoBehaviour_StopAllCoroutines_m3328507247(__this, /*hidden argument*/NULL);
		String_t* L_6 = V_0;
		RuntimeObject* L_7 = DialogueManager_typeSentence_m2003067498(__this, L_6, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator DialogueManager::typeSentence(System.String)
extern "C"  RuntimeObject* DialogueManager_typeSentence_m2003067498 (DialogueManager_t3506686710 * __this, String_t* ___sentence0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DialogueManager_typeSentence_m2003067498_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CtypeSentenceU3Ec__Iterator0_t3358278585 * V_0 = NULL;
	{
		U3CtypeSentenceU3Ec__Iterator0_t3358278585 * L_0 = (U3CtypeSentenceU3Ec__Iterator0_t3358278585 *)il2cpp_codegen_object_new(U3CtypeSentenceU3Ec__Iterator0_t3358278585_il2cpp_TypeInfo_var);
		U3CtypeSentenceU3Ec__Iterator0__ctor_m481481777(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CtypeSentenceU3Ec__Iterator0_t3358278585 * L_1 = V_0;
		String_t* L_2 = ___sentence0;
		L_1->set_sentence_0(L_2);
		U3CtypeSentenceU3Ec__Iterator0_t3358278585 * L_3 = V_0;
		L_3->set_U24this_4(__this);
		U3CtypeSentenceU3Ec__Iterator0_t3358278585 * L_4 = V_0;
		return L_4;
	}
}
// System.Void DialogueManager::EndDialogue()
extern "C"  void DialogueManager_EndDialogue_m1452418081 (DialogueManager_t3506686710 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DialogueManager_EndDialogue_m1452418081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = __this->get_animator_4();
		Animator_SetBool_m234840832(L_0, _stringLiteral497364073, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1011377019, /*hidden argument*/NULL);
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
// System.Void DialogueManager/<typeSentence>c__Iterator0::.ctor()
extern "C"  void U3CtypeSentenceU3Ec__Iterator0__ctor_m481481777 (U3CtypeSentenceU3Ec__Iterator0_t3358278585 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean DialogueManager/<typeSentence>c__Iterator0::MoveNext()
extern "C"  bool U3CtypeSentenceU3Ec__Iterator0_MoveNext_m2428926410 (U3CtypeSentenceU3Ec__Iterator0_t3358278585 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CtypeSentenceU3Ec__Iterator0_MoveNext_m2428926410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_7();
		V_0 = L_0;
		__this->set_U24PC_7((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00a7;
			}
		}
	}
	{
		goto IL_00cf;
	}

IL_0021:
	{
		DialogueManager_t3506686710 * L_2 = __this->get_U24this_4();
		Text_t1901882714 * L_3 = L_2->get_dialogueText_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		String_t* L_5 = __this->get_sentence_0();
		CharU5BU5D_t3528271667* L_6 = String_ToCharArray_m1492846834(L_5, /*hidden argument*/NULL);
		__this->set_U24locvar0_1(L_6);
		__this->set_U24locvar1_2(0);
		goto IL_00b5;
	}

IL_0053:
	{
		CharU5BU5D_t3528271667* L_7 = __this->get_U24locvar0_1();
		int32_t L_8 = __this->get_U24locvar1_2();
		int32_t L_9 = L_8;
		uint16_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		__this->set_U3CletterU3E__1_3(L_10);
		DialogueManager_t3506686710 * L_11 = __this->get_U24this_4();
		Text_t1901882714 * L_12 = L_11->get_dialogueText_3();
		Text_t1901882714 * L_13 = L_12;
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_13);
		Il2CppChar L_15 = __this->get_U3CletterU3E__1_3();
		Il2CppChar L_16 = L_15;
		RuntimeObject * L_17 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_16);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m904156431(NULL /*static, unused*/, L_14, L_17, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_18);
		__this->set_U24current_5(NULL);
		bool L_19 = __this->get_U24disposing_6();
		if (L_19)
		{
			goto IL_00a2;
		}
	}
	{
		__this->set_U24PC_7(1);
	}

IL_00a2:
	{
		goto IL_00d1;
	}

IL_00a7:
	{
		int32_t L_20 = __this->get_U24locvar1_2();
		__this->set_U24locvar1_2(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)));
	}

IL_00b5:
	{
		int32_t L_21 = __this->get_U24locvar1_2();
		CharU5BU5D_t3528271667* L_22 = __this->get_U24locvar0_1();
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_0053;
		}
	}
	{
		__this->set_U24PC_7((-1));
	}

IL_00cf:
	{
		return (bool)0;
	}

IL_00d1:
	{
		return (bool)1;
	}
}
// System.Object DialogueManager/<typeSentence>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CtypeSentenceU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1938964705 (U3CtypeSentenceU3Ec__Iterator0_t3358278585 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Object DialogueManager/<typeSentence>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CtypeSentenceU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3747200629 (U3CtypeSentenceU3Ec__Iterator0_t3358278585 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Void DialogueManager/<typeSentence>c__Iterator0::Dispose()
extern "C"  void U3CtypeSentenceU3Ec__Iterator0_Dispose_m3520594538 (U3CtypeSentenceU3Ec__Iterator0_t3358278585 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_6((bool)1);
		__this->set_U24PC_7((-1));
		return;
	}
}
// System.Void DialogueManager/<typeSentence>c__Iterator0::Reset()
extern "C"  void U3CtypeSentenceU3Ec__Iterator0_Reset_m4148540630 (U3CtypeSentenceU3Ec__Iterator0_t3358278585 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CtypeSentenceU3Ec__Iterator0_Reset_m4148540630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void DialogueTrigger::.ctor()
extern "C"  void DialogueTrigger__ctor_m3128970944 (DialogueTrigger_t3849820820 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DialogueTrigger::TriggerDialogue()
extern "C"  void DialogueTrigger_TriggerDialogue_m3415284430 (DialogueTrigger_t3849820820 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DialogueTrigger_TriggerDialogue_m3415284430_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		DialogueManager_t3506686710 * L_0 = Object_FindObjectOfType_TisDialogueManager_t3506686710_m3422857472(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisDialogueManager_t3506686710_m3422857472_RuntimeMethod_var);
		Dialogue_t118236717 * L_1 = __this->get_dialogue_2();
		DialogueManager_StartDialogue_m2068076816(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void foodInteraction::.ctor()
extern "C"  void foodInteraction__ctor_m4070066072 (foodInteraction_t1842920251 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void foodInteraction::Start()
extern "C"  void foodInteraction_Start_m1972779228 (foodInteraction_t1842920251 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void foodInteraction::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void foodInteraction_OnCollisionEnter_m204680871 (foodInteraction_t1842920251 * __this, Collision_t4262080450 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (foodInteraction_OnCollisionEnter_m204680871_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collision_t4262080450 * L_0 = ___col0;
		GameObject_t1113636619 * L_1 = Collision_get_gameObject_m3662658840(L_0, /*hidden argument*/NULL);
		String_t* L_2 = Object_get_name_m4211327027(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral2261822918, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		bool L_4 = ((foodInteraction_t1842920251_StaticFields*)il2cpp_codegen_static_fields_for(foodInteraction_t1842920251_il2cpp_TypeInfo_var))->get_handsFull_3();
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = __this->get_carryFood_2();
		GameObject_SetActive_m796801857(L_6, (bool)1, /*hidden argument*/NULL);
		((foodInteraction_t1842920251_StaticFields*)il2cpp_codegen_static_fields_for(foodInteraction_t1842920251_il2cpp_TypeInfo_var))->set_handsFull_3((bool)1);
	}

IL_0041:
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
// System.Void GameUI::.ctor()
extern "C"  void GameUI__ctor_m2344039791 (GameUI_t4172234623 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUI::Start()
extern "C"  void GameUI_Start_m4268625395 (GameUI_t4172234623 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameUI_Start_m4268625395_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)GameUI_ShowGameLoseUI_m4289329336_RuntimeMethod_var;
		Action_t1264377477 * L_1 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_1, __this, L_0, /*hidden argument*/NULL);
		goatController_add_OnGoatSawYou_m4178380362(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUI::Update()
extern "C"  void GameUI_Update_m3686469957 (GameUI_t4172234623 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameUI_Update_m3686469957_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_gameIsOver_4();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		SceneManager_LoadScene_m3463216446(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
	}

IL_001d:
	{
		bool L_2 = ((trough_t4133365632_StaticFields*)il2cpp_codegen_static_fields_for(trough_t4133365632_il2cpp_TypeInfo_var))->get_troughFull_2();
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		GameUI_ShowGameWinUI_m762154251(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void GameUI::ShowGameWinUI()
extern "C"  void GameUI_ShowGameWinUI_m762154251 (GameUI_t4172234623 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_gameWinUI_3();
		GameUI_OnGameOver_m3909617351(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUI::ShowGameLoseUI()
extern "C"  void GameUI_ShowGameLoseUI_m4289329336 (GameUI_t4172234623 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_gameLoseUI_2();
		GameUI_OnGameOver_m3909617351(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUI::OnGameOver(UnityEngine.GameObject)
extern "C"  void GameUI_OnGameOver_m3909617351 (GameUI_t4172234623 * __this, GameObject_t1113636619 * ___gameOverUI0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameUI_OnGameOver_m3909617351_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = ___gameOverUI0;
		GameObject_SetActive_m796801857(L_0, (bool)1, /*hidden argument*/NULL);
		__this->set_gameIsOver_4((bool)1);
		intptr_t L_1 = (intptr_t)GameUI_ShowGameLoseUI_m4289329336_RuntimeMethod_var;
		Action_t1264377477 * L_2 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_2, __this, L_1, /*hidden argument*/NULL);
		goatController_remove_OnGoatSawYou_m3181869858(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		((foodInteraction_t1842920251_StaticFields*)il2cpp_codegen_static_fields_for(foodInteraction_t1842920251_il2cpp_TypeInfo_var))->set_handsFull_3((bool)0);
		((trough_t4133365632_StaticFields*)il2cpp_codegen_static_fields_for(trough_t4133365632_il2cpp_TypeInfo_var))->set_troughFull_2((bool)0);
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
// System.Void goatController::.ctor()
extern "C"  void goatController__ctor_m2966452504 (goatController_t2995955395 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_3((5.0f));
		__this->set_waitTime_4((0.3f));
		__this->set_turnSpeed_5((90.0f));
		__this->set_biteTime_6((0.6f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void goatController::add_OnGoatSawYou(System.Action)
extern "C"  void goatController_add_OnGoatSawYou_m4178380362 (RuntimeObject * __this /* static, unused */, Action_t1264377477 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (goatController_add_OnGoatSawYou_m4178380362_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t1264377477 * V_0 = NULL;
	Action_t1264377477 * V_1 = NULL;
	{
		Action_t1264377477 * L_0 = ((goatController_t2995955395_StaticFields*)il2cpp_codegen_static_fields_for(goatController_t2995955395_il2cpp_TypeInfo_var))->get_OnGoatSawYou_2();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_t1264377477 * L_1 = V_0;
		V_1 = L_1;
		Action_t1264377477 * L_2 = V_1;
		Action_t1264377477 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_t1264377477 * L_5 = V_0;
		Action_t1264377477 * L_6 = InterlockedCompareExchangeImpl<Action_t1264377477 *>((((goatController_t2995955395_StaticFields*)il2cpp_codegen_static_fields_for(goatController_t2995955395_il2cpp_TypeInfo_var))->get_address_of_OnGoatSawYou_2()), ((Action_t1264377477 *)CastclassSealed((RuntimeObject*)L_4, Action_t1264377477_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_t1264377477 * L_7 = V_0;
		Action_t1264377477 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_t1264377477 *)L_7) == ((RuntimeObject*)(Action_t1264377477 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void goatController::remove_OnGoatSawYou(System.Action)
extern "C"  void goatController_remove_OnGoatSawYou_m3181869858 (RuntimeObject * __this /* static, unused */, Action_t1264377477 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (goatController_remove_OnGoatSawYou_m3181869858_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t1264377477 * V_0 = NULL;
	Action_t1264377477 * V_1 = NULL;
	{
		Action_t1264377477 * L_0 = ((goatController_t2995955395_StaticFields*)il2cpp_codegen_static_fields_for(goatController_t2995955395_il2cpp_TypeInfo_var))->get_OnGoatSawYou_2();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_t1264377477 * L_1 = V_0;
		V_1 = L_1;
		Action_t1264377477 * L_2 = V_1;
		Action_t1264377477 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_t1264377477 * L_5 = V_0;
		Action_t1264377477 * L_6 = InterlockedCompareExchangeImpl<Action_t1264377477 *>((((goatController_t2995955395_StaticFields*)il2cpp_codegen_static_fields_for(goatController_t2995955395_il2cpp_TypeInfo_var))->get_address_of_OnGoatSawYou_2()), ((Action_t1264377477 *)CastclassSealed((RuntimeObject*)L_4, Action_t1264377477_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_t1264377477 * L_7 = V_0;
		Action_t1264377477 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_t1264377477 *)L_7) == ((RuntimeObject*)(Action_t1264377477 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void goatController::Start()
extern "C"  void goatController_Start_m3369151784 (goatController_t2995955395 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (goatController_Start_m3369151784_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_t1718750761* V_0 = NULL;
	int32_t V_1 = 0;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		GameObject_t1113636619 * L_0 = GameObject_FindGameObjectWithTag_m2129039296(NULL /*static, unused*/, _stringLiteral2261822918, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		__this->set_player_13(L_1);
		Light_t3756812086 * L_2 = __this->get_spotlight_7();
		float L_3 = Light_get_spotAngle_m3262157804(L_2, /*hidden argument*/NULL);
		__this->set_viewAngle_10(((float)il2cpp_codegen_subtract((float)L_3, (float)(10.0f))));
		Light_t3756812086 * L_4 = __this->get_spotlight_7();
		Color_t2555686324  L_5 = Light_get_color_m552487206(L_4, /*hidden argument*/NULL);
		__this->set_originalSpotlightColor_14(L_5);
		Transform_t3600365921 * L_6 = __this->get_pathHolder_12();
		int32_t L_7 = Transform_get_childCount_m3145433196(L_6, /*hidden argument*/NULL);
		V_0 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)L_7));
		V_1 = 0;
		goto IL_00b2;
	}

IL_0055:
	{
		Vector3U5BU5D_t1718750761* L_8 = V_0;
		int32_t L_9 = V_1;
		Transform_t3600365921 * L_10 = __this->get_pathHolder_12();
		int32_t L_11 = V_1;
		Transform_t3600365921 * L_12 = Transform_GetChild_m1092972975(L_10, L_11, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))) = L_13;
		Vector3U5BU5D_t1718750761* L_14 = V_0;
		int32_t L_15 = V_1;
		Vector3U5BU5D_t1718750761* L_16 = V_0;
		int32_t L_17 = V_1;
		float L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->get_x_1();
		Transform_t3600365921 * L_19 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_20 = Transform_get_position_m36019626(L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		float L_21 = (&V_2)->get_y_2();
		Vector3U5BU5D_t1718750761* L_22 = V_0;
		int32_t L_23 = V_1;
		float L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->get_z_3();
		Vector3_t3722313464  L_25;
		memset(&L_25, 0, sizeof(L_25));
		Vector3__ctor_m3353183577((&L_25), L_18, L_21, L_24, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15))) = L_25;
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00b2:
	{
		int32_t L_27 = V_1;
		Vector3U5BU5D_t1718750761* L_28 = V_0;
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))))))
		{
			goto IL_0055;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_29 = V_0;
		RuntimeObject* L_30 = goatController_FollowPath_m1253381204(__this, L_29, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_30, /*hidden argument*/NULL);
		return;
	}
}
// System.Void goatController::Update()
extern "C"  void goatController_Update_m2563205544 (goatController_t2995955395 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (goatController_Update_m2563205544_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = goatController_CanSeePlayer_m1617575133(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		float L_1 = __this->get_playerVisibleTimer_11();
		float L_2 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_playerVisibleTimer_11(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
		goto IL_0034;
	}

IL_0022:
	{
		float L_3 = __this->get_playerVisibleTimer_11();
		float L_4 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_playerVisibleTimer_11(((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)));
	}

IL_0034:
	{
		float L_5 = __this->get_playerVisibleTimer_11();
		float L_6 = __this->get_biteTime_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_7 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_5, (0.0f), L_6, /*hidden argument*/NULL);
		__this->set_playerVisibleTimer_11(L_7);
		Light_t3756812086 * L_8 = __this->get_spotlight_7();
		Color_t2555686324  L_9 = __this->get_originalSpotlightColor_14();
		Color_t2555686324  L_10 = Color_get_red_m3227813939(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_11 = __this->get_playerVisibleTimer_11();
		float L_12 = __this->get_biteTime_6();
		Color_t2555686324  L_13 = Color_Lerp_m973389909(NULL /*static, unused*/, L_9, L_10, ((float)((float)L_11/(float)L_12)), /*hidden argument*/NULL);
		Light_set_color_m608660336(L_8, L_13, /*hidden argument*/NULL);
		float L_14 = __this->get_playerVisibleTimer_11();
		float L_15 = __this->get_biteTime_6();
		if ((!(((float)L_14) >= ((float)L_15))))
		{
			goto IL_009d;
		}
	}
	{
		Action_t1264377477 * L_16 = ((goatController_t2995955395_StaticFields*)il2cpp_codegen_static_fields_for(goatController_t2995955395_il2cpp_TypeInfo_var))->get_OnGoatSawYou_2();
		if (!L_16)
		{
			goto IL_009d;
		}
	}
	{
		Action_t1264377477 * L_17 = ((goatController_t2995955395_StaticFields*)il2cpp_codegen_static_fields_for(goatController_t2995955395_il2cpp_TypeInfo_var))->get_OnGoatSawYou_2();
		Action_Invoke_m937035532(L_17, /*hidden argument*/NULL);
	}

IL_009d:
	{
		return;
	}
}
// System.Boolean goatController::CanSeePlayer()
extern "C"  bool goatController_CanSeePlayer_m1617575133 (goatController_t2995955395 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (goatController_CanSeePlayer_m1617575133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = __this->get_player_13();
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_4 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_viewDistance_8();
		if ((!(((float)L_4) < ((float)L_5))))
		{
			goto IL_009b;
		}
	}
	{
		Transform_t3600365921 * L_6 = __this->get_player_13();
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Vector3_t3722313464  L_11 = Vector3_get_normalized_m2454957984((&V_1), /*hidden argument*/NULL);
		V_0 = L_11;
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = Transform_get_forward_m747522392(L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = V_0;
		float L_15 = Vector3_Angle_m3731191531(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		float L_16 = V_2;
		float L_17 = __this->get_viewAngle_10();
		if ((!(((float)L_16) < ((float)((float)((float)L_17/(float)(2.0f)))))))
		{
			goto IL_009b;
		}
	}
	{
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_19 = Transform_get_position_m36019626(L_18, /*hidden argument*/NULL);
		Transform_t3600365921 * L_20 = __this->get_player_13();
		Vector3_t3722313464  L_21 = Transform_get_position_m36019626(L_20, /*hidden argument*/NULL);
		LayerMask_t3493934918  L_22 = __this->get_viewMask_9();
		int32_t L_23 = LayerMask_op_Implicit_m3296792737(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		bool L_24 = Physics_Linecast_m1081031506(NULL /*static, unused*/, L_19, L_21, L_23, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_009b;
		}
	}
	{
		return (bool)1;
	}

IL_009b:
	{
		return (bool)0;
	}
}
// System.Collections.IEnumerator goatController::FollowPath(UnityEngine.Vector3[])
extern "C"  RuntimeObject* goatController_FollowPath_m1253381204 (goatController_t2995955395 * __this, Vector3U5BU5D_t1718750761* ___waypoints0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (goatController_FollowPath_m1253381204_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CFollowPathU3Ec__Iterator0_t2268932854 * V_0 = NULL;
	{
		U3CFollowPathU3Ec__Iterator0_t2268932854 * L_0 = (U3CFollowPathU3Ec__Iterator0_t2268932854 *)il2cpp_codegen_object_new(U3CFollowPathU3Ec__Iterator0_t2268932854_il2cpp_TypeInfo_var);
		U3CFollowPathU3Ec__Iterator0__ctor_m542711983(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFollowPathU3Ec__Iterator0_t2268932854 * L_1 = V_0;
		Vector3U5BU5D_t1718750761* L_2 = ___waypoints0;
		L_1->set_waypoints_0(L_2);
		U3CFollowPathU3Ec__Iterator0_t2268932854 * L_3 = V_0;
		L_3->set_U24this_3(__this);
		U3CFollowPathU3Ec__Iterator0_t2268932854 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator goatController::TurnToFace(UnityEngine.Vector3)
extern "C"  RuntimeObject* goatController_TurnToFace_m2868397517 (goatController_t2995955395 * __this, Vector3_t3722313464  ___lookTarget0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (goatController_TurnToFace_m2868397517_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CTurnToFaceU3Ec__Iterator1_t2972656240 * V_0 = NULL;
	{
		U3CTurnToFaceU3Ec__Iterator1_t2972656240 * L_0 = (U3CTurnToFaceU3Ec__Iterator1_t2972656240 *)il2cpp_codegen_object_new(U3CTurnToFaceU3Ec__Iterator1_t2972656240_il2cpp_TypeInfo_var);
		U3CTurnToFaceU3Ec__Iterator1__ctor_m4023724356(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CTurnToFaceU3Ec__Iterator1_t2972656240 * L_1 = V_0;
		Vector3_t3722313464  L_2 = ___lookTarget0;
		L_1->set_lookTarget_0(L_2);
		U3CTurnToFaceU3Ec__Iterator1_t2972656240 * L_3 = V_0;
		L_3->set_U24this_4(__this);
		U3CTurnToFaceU3Ec__Iterator1_t2972656240 * L_4 = V_0;
		return L_4;
	}
}
// System.Void goatController::OnDrawGizmos()
extern "C"  void goatController_OnDrawGizmos_m1449413860 (goatController_t2995955395 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (goatController_OnDrawGizmos_m1449413860_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Transform_t3600365921 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t3600365921 * L_0 = __this->get_pathHolder_12();
		Transform_t3600365921 * L_1 = Transform_GetChild_m1092972975(L_0, 0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t3722313464  L_3 = V_0;
		V_1 = L_3;
		Transform_t3600365921 * L_4 = __this->get_pathHolder_12();
		RuntimeObject* L_5 = Transform_GetEnumerator_m2717073726(L_4, /*hidden argument*/NULL);
		V_3 = L_5;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0054;
		}

IL_0025:
		{
			RuntimeObject* L_6 = V_3;
			RuntimeObject * L_7 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_6);
			V_2 = ((Transform_t3600365921 *)CastclassClass((RuntimeObject*)L_7, Transform_t3600365921_il2cpp_TypeInfo_var));
			Transform_t3600365921 * L_8 = V_2;
			Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
			Gizmos_DrawSphere_m492648055(NULL /*static, unused*/, L_9, (0.3f), /*hidden argument*/NULL);
			Vector3_t3722313464  L_10 = V_1;
			Transform_t3600365921 * L_11 = V_2;
			Vector3_t3722313464  L_12 = Transform_get_position_m36019626(L_11, /*hidden argument*/NULL);
			Gizmos_DrawLine_m3273476787(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
			Transform_t3600365921 * L_13 = V_2;
			Vector3_t3722313464  L_14 = Transform_get_position_m36019626(L_13, /*hidden argument*/NULL);
			V_1 = L_14;
		}

IL_0054:
		{
			RuntimeObject* L_15 = V_3;
			bool L_16 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_0025;
			}
		}

IL_005f:
		{
			IL2CPP_LEAVE(0x7A, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_17 = V_3;
			RuntimeObject* L_18 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_4 = L_18;
			if (!L_18)
			{
				goto IL_0079;
			}
		}

IL_0072:
		{
			RuntimeObject* L_19 = V_4;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_19);
		}

IL_0079:
		{
			IL2CPP_END_FINALLY(100)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007a:
	{
		Vector3_t3722313464  L_20 = V_1;
		Vector3_t3722313464  L_21 = V_0;
		Gizmos_DrawLine_m3273476787(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		Color_t2555686324  L_22 = Color_get_red_m3227813939(NULL /*static, unused*/, /*hidden argument*/NULL);
		Gizmos_set_color_m3399737545(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		Transform_t3600365921 * L_23 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_24 = Transform_get_position_m36019626(L_23, /*hidden argument*/NULL);
		Transform_t3600365921 * L_25 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_26 = Transform_get_forward_m747522392(L_25, /*hidden argument*/NULL);
		float L_27 = __this->get_viewDistance_8();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_28 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		Gizmos_DrawRay_m2985419931(NULL /*static, unused*/, L_24, L_28, /*hidden argument*/NULL);
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
// System.Void goatController/<FollowPath>c__Iterator0::.ctor()
extern "C"  void U3CFollowPathU3Ec__Iterator0__ctor_m542711983 (U3CFollowPathU3Ec__Iterator0_t2268932854 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean goatController/<FollowPath>c__Iterator0::MoveNext()
extern "C"  bool U3CFollowPathU3Ec__Iterator0_MoveNext_m105021038 (U3CFollowPathU3Ec__Iterator0_t2268932854 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFollowPathU3Ec__Iterator0_MoveNext_m105021038_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_013c;
			}
			case 2:
			{
				goto IL_0172;
			}
			case 3:
			{
				goto IL_018d;
			}
		}
	}
	{
		goto IL_0199;
	}

IL_0029:
	{
		goatController_t2995955395 * L_2 = __this->get_U24this_3();
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(L_2, /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_4 = __this->get_waypoints_0();
		Transform_set_position_m3387557959(L_3, (*(Vector3_t3722313464 *)((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)))), /*hidden argument*/NULL);
		__this->set_U3CtargetWaypointIndexU3E__0_1(1);
		Vector3U5BU5D_t1718750761* L_5 = __this->get_waypoints_0();
		int32_t L_6 = __this->get_U3CtargetWaypointIndexU3E__0_1();
		__this->set_U3CtargetWaypointU3E__0_2((*(Vector3_t3722313464 *)((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))));
		goatController_t2995955395 * L_7 = __this->get_U24this_3();
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(L_7, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = __this->get_U3CtargetWaypointU3E__0_2();
		Transform_LookAt_m3649447396(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0083:
	{
		goatController_t2995955395 * L_10 = __this->get_U24this_3();
		Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(L_10, /*hidden argument*/NULL);
		goatController_t2995955395 * L_12 = __this->get_U24this_3();
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = Transform_get_position_m36019626(L_13, /*hidden argument*/NULL);
		Vector3_t3722313464  L_15 = __this->get_U3CtargetWaypointU3E__0_2();
		goatController_t2995955395 * L_16 = __this->get_U24this_3();
		float L_17 = L_16->get_speed_3();
		float L_18 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_19 = Vector3_MoveTowards_m2786395547(NULL /*static, unused*/, L_14, L_15, ((float)il2cpp_codegen_multiply((float)L_17, (float)L_18)), /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_11, L_19, /*hidden argument*/NULL);
		goatController_t2995955395 * L_20 = __this->get_U24this_3();
		Transform_t3600365921 * L_21 = Component_get_transform_m3162698980(L_20, /*hidden argument*/NULL);
		Vector3_t3722313464  L_22 = Transform_get_position_m36019626(L_21, /*hidden argument*/NULL);
		Vector3_t3722313464  L_23 = __this->get_U3CtargetWaypointU3E__0_2();
		bool L_24 = Vector3_op_Equality_m4231250055(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0172;
		}
	}
	{
		int32_t L_25 = __this->get_U3CtargetWaypointIndexU3E__0_1();
		Vector3U5BU5D_t1718750761* L_26 = __this->get_waypoints_0();
		__this->set_U3CtargetWaypointIndexU3E__0_1(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1))%(int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))))));
		Vector3U5BU5D_t1718750761* L_27 = __this->get_waypoints_0();
		int32_t L_28 = __this->get_U3CtargetWaypointIndexU3E__0_1();
		__this->set_U3CtargetWaypointU3E__0_2((*(Vector3_t3722313464 *)((L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28)))));
		goatController_t2995955395 * L_29 = __this->get_U24this_3();
		float L_30 = L_29->get_waitTime_4();
		WaitForSeconds_t1699091251 * L_31 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_31, L_30, /*hidden argument*/NULL);
		__this->set_U24current_4(L_31);
		bool L_32 = __this->get_U24disposing_5();
		if (L_32)
		{
			goto IL_0137;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_0137:
	{
		goto IL_019b;
	}

IL_013c:
	{
		goatController_t2995955395 * L_33 = __this->get_U24this_3();
		goatController_t2995955395 * L_34 = __this->get_U24this_3();
		Vector3_t3722313464  L_35 = __this->get_U3CtargetWaypointU3E__0_2();
		RuntimeObject* L_36 = goatController_TurnToFace_m2868397517(L_34, L_35, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_37 = MonoBehaviour_StartCoroutine_m3411253000(L_33, L_36, /*hidden argument*/NULL);
		__this->set_U24current_4(L_37);
		bool L_38 = __this->get_U24disposing_5();
		if (L_38)
		{
			goto IL_016d;
		}
	}
	{
		__this->set_U24PC_6(2);
	}

IL_016d:
	{
		goto IL_019b;
	}

IL_0172:
	{
		__this->set_U24current_4(NULL);
		bool L_39 = __this->get_U24disposing_5();
		if (L_39)
		{
			goto IL_0188;
		}
	}
	{
		__this->set_U24PC_6(3);
	}

IL_0188:
	{
		goto IL_019b;
	}

IL_018d:
	{
		goto IL_0083;
	}
	// Dead block : IL_0192: ldarg.0

IL_0199:
	{
		return (bool)0;
	}

IL_019b:
	{
		return (bool)1;
	}
}
// System.Object goatController/<FollowPath>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CFollowPathU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m620081075 (U3CFollowPathU3Ec__Iterator0_t2268932854 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object goatController/<FollowPath>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CFollowPathU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m222873517 (U3CFollowPathU3Ec__Iterator0_t2268932854 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void goatController/<FollowPath>c__Iterator0::Dispose()
extern "C"  void U3CFollowPathU3Ec__Iterator0_Dispose_m1243181869 (U3CFollowPathU3Ec__Iterator0_t2268932854 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void goatController/<FollowPath>c__Iterator0::Reset()
extern "C"  void U3CFollowPathU3Ec__Iterator0_Reset_m3207792359 (U3CFollowPathU3Ec__Iterator0_t2268932854 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFollowPathU3Ec__Iterator0_Reset_m3207792359_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void goatController/<TurnToFace>c__Iterator1::.ctor()
extern "C"  void U3CTurnToFaceU3Ec__Iterator1__ctor_m4023724356 (U3CTurnToFaceU3Ec__Iterator1_t2972656240 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean goatController/<TurnToFace>c__Iterator1::MoveNext()
extern "C"  bool U3CTurnToFaceU3Ec__Iterator1_MoveNext_m388373595 (U3CTurnToFaceU3Ec__Iterator1_t2972656240 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTurnToFaceU3Ec__Iterator1_MoveNext_m388373595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		int32_t L_0 = __this->get_U24PC_7();
		V_0 = L_0;
		__this->set_U24PC_7((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00f1;
			}
		}
	}
	{
		goto IL_012a;
	}

IL_0021:
	{
		Vector3_t3722313464  L_2 = __this->get_lookTarget_0();
		goatController_t2995955395 * L_3 = __this->get_U24this_4();
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Vector3_t3722313464  L_7 = Vector3_get_normalized_m2454957984((&V_1), /*hidden argument*/NULL);
		__this->set_U3CdirToLookTargetU3E__0_1(L_7);
		Vector3_t3722313464 * L_8 = __this->get_address_of_U3CdirToLookTargetU3E__0_1();
		float L_9 = L_8->get_z_3();
		Vector3_t3722313464 * L_10 = __this->get_address_of_U3CdirToLookTargetU3E__0_1();
		float L_11 = L_10->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_12 = atan2f(L_9, L_11);
		__this->set_U3CtargetAngleU3E__0_2(((float)il2cpp_codegen_subtract((float)(90.0f), (float)((float)il2cpp_codegen_multiply((float)L_12, (float)(57.29578f))))));
		goto IL_00f1;
	}

IL_007c:
	{
		goatController_t2995955395 * L_13 = __this->get_U24this_4();
		Transform_t3600365921 * L_14 = Component_get_transform_m3162698980(L_13, /*hidden argument*/NULL);
		Vector3_t3722313464  L_15 = Transform_get_eulerAngles_m2743581774(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		float L_16 = (&V_2)->get_y_2();
		float L_17 = __this->get_U3CtargetAngleU3E__0_2();
		goatController_t2995955395 * L_18 = __this->get_U24this_4();
		float L_19 = L_18->get_turnSpeed_5();
		float L_20 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_21 = Mathf_MoveTowardsAngle_m866077996(NULL /*static, unused*/, L_16, L_17, ((float)il2cpp_codegen_multiply((float)L_19, (float)L_20)), /*hidden argument*/NULL);
		__this->set_U3CangleU3E__1_3(L_21);
		goatController_t2995955395 * L_22 = __this->get_U24this_4();
		Transform_t3600365921 * L_23 = Component_get_transform_m3162698980(L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_24 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_25 = __this->get_U3CangleU3E__1_3();
		Vector3_t3722313464  L_26 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		Transform_set_eulerAngles_m135219616(L_23, L_26, /*hidden argument*/NULL);
		__this->set_U24current_5(NULL);
		bool L_27 = __this->get_U24disposing_6();
		if (L_27)
		{
			goto IL_00ec;
		}
	}
	{
		__this->set_U24PC_7(1);
	}

IL_00ec:
	{
		goto IL_012c;
	}

IL_00f1:
	{
		goatController_t2995955395 * L_28 = __this->get_U24this_4();
		Transform_t3600365921 * L_29 = Component_get_transform_m3162698980(L_28, /*hidden argument*/NULL);
		Vector3_t3722313464  L_30 = Transform_get_eulerAngles_m2743581774(L_29, /*hidden argument*/NULL);
		V_3 = L_30;
		float L_31 = (&V_3)->get_y_2();
		float L_32 = __this->get_U3CtargetAngleU3E__0_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_33 = Mathf_DeltaAngle_m1993880167(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		float L_34 = fabsf(L_33);
		if ((((float)L_34) > ((float)(0.03f))))
		{
			goto IL_007c;
		}
	}
	{
		__this->set_U24PC_7((-1));
	}

IL_012a:
	{
		return (bool)0;
	}

IL_012c:
	{
		return (bool)1;
	}
}
// System.Object goatController/<TurnToFace>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CTurnToFaceU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2973210015 (U3CTurnToFaceU3Ec__Iterator1_t2972656240 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Object goatController/<TurnToFace>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CTurnToFaceU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m3420259396 (U3CTurnToFaceU3Ec__Iterator1_t2972656240 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Void goatController/<TurnToFace>c__Iterator1::Dispose()
extern "C"  void U3CTurnToFaceU3Ec__Iterator1_Dispose_m642915786 (U3CTurnToFaceU3Ec__Iterator1_t2972656240 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_6((bool)1);
		__this->set_U24PC_7((-1));
		return;
	}
}
// System.Void goatController/<TurnToFace>c__Iterator1::Reset()
extern "C"  void U3CTurnToFaceU3Ec__Iterator1_Reset_m584063316 (U3CTurnToFaceU3Ec__Iterator1_t2972656240 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTurnToFaceU3Ec__Iterator1_Reset_m584063316_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m1333951952 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	{
		__this->set_moveSpeed_2((6.0f));
		__this->set_smoothMoveTime_3((0.1f));
		__this->set_turnSpeed_4((8.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m1746698410 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Start_m1746698410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		Rigidbody_t3916780224 * L_1 = GameObject_GetComponent_TisRigidbody_t3916780224_m564316479(L_0, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t3916780224_m564316479_RuntimeMethod_var);
		__this->set_rgbody_9(L_1);
		intptr_t L_2 = (intptr_t)PlayerController_Disable_m4169920469_RuntimeMethod_var;
		Action_t1264377477 * L_3 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_3, __this, L_2, /*hidden argument*/NULL);
		goatController_add_OnGoatSawYou_m4178380362(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Update()
extern "C"  void PlayerController_Update_m848427540 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Update_m848427540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = __this->get_disabled_10();
		if (L_1)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_2 = Input_GetAxisRaw_m2316819917(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		float L_3 = Input_GetAxisRaw_m2316819917(NULL /*static, unused*/, _stringLiteral2984908384, /*hidden argument*/NULL);
		Vector3__ctor_m3353183577((&V_1), L_2, (0.0f), L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Vector3_get_normalized_m2454957984((&V_1), /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0039:
	{
		float L_5 = Vector3_get_magnitude_m27958459((&V_0), /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = __this->get_smoothInputMagnitude_6();
		float L_7 = V_2;
		float* L_8 = __this->get_address_of_smoothMoveVelocity_7();
		float L_9 = __this->get_smoothMoveTime_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_10 = Mathf_SmoothDamp_m3171073017(NULL /*static, unused*/, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		__this->set_smoothInputMagnitude_6(L_10);
		float L_11 = (&V_0)->get_x_1();
		float L_12 = (&V_0)->get_z_3();
		float L_13 = atan2f(L_11, L_12);
		V_3 = ((float)il2cpp_codegen_multiply((float)L_13, (float)(57.29578f)));
		float L_14 = __this->get_angle_5();
		float L_15 = V_3;
		float L_16 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_17 = __this->get_turnSpeed_4();
		float L_18 = V_2;
		float L_19 = Mathf_LerpAngle_m295352085(NULL /*static, unused*/, L_14, L_15, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)), (float)L_18)), /*hidden argument*/NULL);
		__this->set_angle_5(L_19);
		Transform_t3600365921 * L_20 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_21 = Transform_get_forward_m747522392(L_20, /*hidden argument*/NULL);
		float L_22 = __this->get_moveSpeed_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_23 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		float L_24 = __this->get_smoothInputMagnitude_6();
		Vector3_t3722313464  L_25 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		__this->set_velocity_8(L_25);
		return;
	}
}
// System.Void PlayerController::Disable()
extern "C"  void PlayerController_Disable_m4169920469 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	{
		__this->set_disabled_10((bool)1);
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
extern "C"  void PlayerController_FixedUpdate_m1610259746 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_FixedUpdate_m1610259746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t3916780224 * L_0 = __this->get_rgbody_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = __this->get_angle_5();
		Vector3_t3722313464  L_3 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_4 = Quaternion_Euler_m1803555822(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		Rigidbody_MoveRotation_m72717779(L_0, L_4, /*hidden argument*/NULL);
		Rigidbody_t3916780224 * L_5 = __this->get_rgbody_9();
		Rigidbody_t3916780224 * L_6 = __this->get_rgbody_9();
		Vector3_t3722313464  L_7 = Rigidbody_get_position_m1712729619(L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = __this->get_velocity_8();
		float L_9 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_7, L_10, /*hidden argument*/NULL);
		Rigidbody_MovePosition_m2109341474(L_5, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnDestroy()
extern "C"  void PlayerController_OnDestroy_m1684642035 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnDestroy_m1684642035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)PlayerController_Disable_m4169920469_RuntimeMethod_var;
		Action_t1264377477 * L_1 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_1, __this, L_0, /*hidden argument*/NULL);
		goatController_remove_OnGoatSawYou_m3181869858(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
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
// System.Void trough::.ctor()
extern "C"  void trough__ctor_m4032301519 (trough_t4133365632 * __this, const RuntimeMethod* method)
{
	{
		__this->set_radius_3((3.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void trough::Start()
extern "C"  void trough_Start_m544111307 (trough_t4133365632 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (trough_Start_m544111307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = __this->get_foodParent_5();
		int32_t L_1 = Transform_get_childCount_m3145433196(L_0, /*hidden argument*/NULL);
		__this->set_startFood_6(L_1);
		int32_t L_2 = __this->get_startFood_6();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral249707277, L_4, _stringLiteral3913719606, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void trough::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void trough_OnCollisionEnter_m2878961126 (trough_t4133365632 * __this, Collision_t4262080450 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (trough_OnCollisionEnter_m2878961126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((foodInteraction_t1842920251_StaticFields*)il2cpp_codegen_static_fields_for(foodInteraction_t1842920251_il2cpp_TypeInfo_var))->get_handsFull_3();
		if (!L_0)
		{
			goto IL_0074;
		}
	}
	{
		Collision_t4262080450 * L_1 = ___col0;
		GameObject_t1113636619 * L_2 = Collision_get_gameObject_m3662658840(L_1, /*hidden argument*/NULL);
		String_t* L_3 = Object_get_name_m4211327027(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m920492651(NULL /*static, unused*/, L_3, _stringLiteral2261822918, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0074;
		}
	}
	{
		GameObject_t1113636619 * L_5 = __this->get_carryFood_4();
		GameObject_SetActive_m796801857(L_5, (bool)0, /*hidden argument*/NULL);
		((foodInteraction_t1842920251_StaticFields*)il2cpp_codegen_static_fields_for(foodInteraction_t1842920251_il2cpp_TypeInfo_var))->set_handsFull_3((bool)0);
		int32_t L_6 = __this->get_startFood_6();
		__this->set_startFood_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		int32_t L_7 = __this->get_startFood_6();
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral1745898041, L_9, _stringLiteral2429526158, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		int32_t L_11 = __this->get_startFood_6();
		if (L_11)
		{
			goto IL_0074;
		}
	}
	{
		((trough_t4133365632_StaticFields*)il2cpp_codegen_static_fields_for(trough_t4133365632_il2cpp_TypeInfo_var))->set_troughFull_2((bool)1);
	}

IL_0074:
	{
		return;
	}
}
// System.Void trough::OnDrawGizmosSelected()
extern "C"  void trough_OnDrawGizmosSelected_m644718158 (trough_t4133365632 * __this, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		Gizmos_set_color_m3399737545(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_radius_3();
		Gizmos_DrawWireSphere_m132265467(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
