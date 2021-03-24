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

template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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

// Mapbox.Json.Linq.JContainer
struct JContainer_tA9CC992B3CD076B563FF9DCE31C85E3415C6E4DC;
// Mapbox.Json.Linq.JObject
struct JObject_tDAD1F88FC97DFAE2821454F590A9F482AEF04739;
// Mapbox.Json.Linq.JProperty
struct JProperty_t30557F21425BE7749994AB2C7E8AEC664BA98C51;
// Mapbox.Json.Linq.JProperty/JPropertyList
struct JPropertyList_t1D68CA39DD5A11AB7CE85B6CD32B924C72516CE1;
// Mapbox.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t75AE42EF2C3F98F9DD9AE694E97484402C25F13D;
// Mapbox.Json.Linq.JToken
struct JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF;
// Mapbox.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t30FC9F8353DDF66A7D936FAD58992C4305C1FD7E;
// Mapbox.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10;
// Mapbox.Unity.Map.AbstractMap
struct AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6;
// Mapbox.Unity.Map.AbstractMapVisualizer
struct AbstractMapVisualizer_t0C37D2E1C17AE1CA4F0363F09F4998672941C30C;
// Mapbox.Unity.Map.EditorPreviewOptions
struct EditorPreviewOptions_tC8AE518ADECCFB4E588305CBB13E264D6995756F;
// Mapbox.Unity.Map.ImageryLayer
struct ImageryLayer_t8760107E5300CE6ED34EA4FE39CB62A9CA189C07;
// Mapbox.Unity.Map.MapOptions
struct MapOptions_t8B59AA99565EFC8410F110A4FDCA22C66F80AE92;
// Mapbox.Unity.Map.TerrainLayer
struct TerrainLayer_t9EFC5A340A857CEE8070811A7482C79750338648;
// Mapbox.Unity.Map.TileProviders.AbstractTileProvider
struct AbstractTileProvider_tB864C6E59CCBA95692EDFCBBDB16B48A22A8F17C;
// Mapbox.Unity.Map.VectorLayer
struct VectorLayer_t70B9CA38A6B1154ADEC8BC4603BDBABF1CEF0D57;
// Mapbox.Unity.MapboxAccess
struct MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D;
// Proyecto26.ResponseHelper
struct ResponseHelper_t1D3F6F23A965CA2B1E2CDD0A4BFF16F387D1555F;
// RSG.IPromise`1<Proyecto26.ResponseHelper>
struct IPromise_1_t2BD69455F5AA937AC3122D68570094E2384BED19;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile>
struct Action_1_tABFC4624428D79874822F435EF3EA6A1D37D94E6;
// System.Action`1<Proyecto26.ResponseHelper>
struct Action_1_t65311BD7395CAEB1E9483E030F69FF580BCD5C80;
// System.Action`1<System.Boolean>
struct Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD;
// System.Action`1<System.Byte[]>
struct Action_1_tCFD7D0EFEF517D00FE88360104518B2070A270A2;
// System.Action`1<System.Collections.Generic.List`1<Mapbox.Map.UnwrappedTileId>>
struct Action_1_t9478877629ADD5C1B0A996958E9F4ADF45FD84F4;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<System.String>
struct Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0;
// System.Action`1<UnityEngine.Material>
struct Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3;
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_tC73654392B284B89334464107B696C9BD89776D9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>
struct Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.HashSet`1<Mapbox.Map.UnwrappedTileId>
struct HashSet_1_t086D06E84F3BF3DC3625011FB4A0F0C64D6C95B2;
// System.Collections.Generic.IEnumerable`1<System.Int32Enum>
struct IEnumerable_1_tADB64B0DE6EDBF8E9A8B2DFA59DAF94491BBEE93;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t31EF1520A3A805598500BB6033C14ABDA7116D5E;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Rendering.GraphicsDeviceType>
struct IEnumerable_1_tFC3842C1D7CBF564BB22847CF9F5E067E0D392F2;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<Mapbox.Map.UnwrappedTileId>
struct List_1_tC435B8ED54CB6DA699D4AE050AA5698A4C01A445;
// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct List_1_t331F6F02A885A8F44C1CBA5CF6C28E9BA967D234;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_t116A3B8CE581BED3D4552A7F22FE553557ADC4C5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.Rendering.GraphicsDeviceType>
struct List_1_t3C4F493AD36BE7F2EEDD54D8C0A784299FD3E32D;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E;
// System.EventHandler
struct EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3;
// System.EventHandler`1<Vuplex.WebView.ClickedEventArgs>
struct EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E;
// System.EventHandler`1<Vuplex.WebView.EventArgs`1<System.String>>
struct EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C;
// System.EventHandler`1<Vuplex.WebView.EventArgs`1<UnityEngine.Rect>>
struct EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA;
// System.EventHandler`1<Vuplex.WebView.EventArgs`1<UnityEngine.Vector2>>
struct EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA;
// System.EventHandler`1<Vuplex.WebView.PointerEventArgs>
struct EventHandler_1_tB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A;
// System.EventHandler`1<Vuplex.WebView.ProgressChangedEventArgs>
struct EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469;
// System.EventHandler`1<Vuplex.WebView.ScrolledEventArgs>
struct EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515;
// System.EventHandler`1<Vuplex.WebView.UrlChangedEventArgs>
struct EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A;
// System.Exception
struct Exception_t;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`2<System.Int32Enum,System.Object>
struct Func_2_tDDF77F36600A668273BF1A3C083A30113D6E51CB;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t185FBBAFD46813778C35A8D4A5FA3AFB4FC0E14C;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Byte[]>>
struct Func_2_t9CB84E28FC5B5E0E37F3BBD08DF62DF4AF38655B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_tD5DD82F807AA57BEB7EC482428FCFADD3E3EDF93;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<UnityEngine.Material>>
struct Func_2_tE955DB58474B66BDA48C9F14E8C706FFC7577035;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<UnityEngine.Texture2D>>
struct Func_2_t20866BD79DC2E522EB31BD617ECE5BBE8C21C27B;
// System.Func`2<UnityEngine.Rendering.GraphicsDeviceType,System.String>
struct Func_2_t3AB8FFCCD295F3CB6B51AB07C8ADE78F376F3FBC;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.RegularExpressions.Regex
struct Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240;
// System.Threading.Tasks.TaskCompletionSource`1<System.Byte[]>
struct TaskCompletionSource_1_tB4013FB3A5C28FCEF0646F3ABE1C6F7C35A30C72;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t6C02642279BC7BF03091A8CB685FC6B4E68BED12;
// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_t740D6B4559A97E4E740413E4EB4F1F90A84CB317;
// System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Material>
struct TaskCompletionSource_1_t8083C9684F0A5B46C36EB727C3A0F3739EA59EC4;
// System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Texture2D>
struct TaskCompletionSource_1_tBBC53B913B9FA8D229904EF7E262A97A678D57AA;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t90DBF289FBDBB845B0FA55E1773164F06FBDEA17;
// System.Threading.Tasks.TaskFactory`1<System.Byte[]>
struct TaskFactory_1_tDA9941CADCE61F1EB85F1DE41AA9CE09BF9D4571;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_tC464EE87A6CB7838666431AFB8761D134A690E8D;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.Material>
struct TaskFactory_1_t62B1A2DEDA6C0386D4E7A3281261C596F585E5EA;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.Texture2D>
struct TaskFactory_1_t2EE78629BBF18B1CF7304E0AFAB7B9A14FB89F85;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439;
// System.Threading.Tasks.Task`1<System.Byte[]>
struct Task_1_t2ED0F6929D1C02BC2CEF49AC8D20FFCA4E41D648;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286;
// System.Threading.Tasks.Task`1<UnityEngine.Material>
struct Task_1_t74879D22F3CC6429D4D6FCC94A7597CE737CB1DA;
// System.Threading.Tasks.Task`1<UnityEngine.Texture2D>
struct Task_1_tB68DBA6DA1120A65465275E18B4DD57CA6580BB1;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Rendering.GraphicsDeviceType[]
struct GraphicsDeviceTypeU5BU5D_t4560B66B4261C7B1422FAA96584DAADE6A935A86;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA;
// User
struct User_tC17190F58E7AF577BC179A3103A3D3F299F3B0C7;
// Vuplex.WebView.BaseWebView
struct BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB;
// Vuplex.WebView.BridgeMessage
struct BridgeMessage_tC26A17AE8856C3B00DDF35B7C28A95583F34096F;
// Vuplex.WebView.BridgeMessageHandler
struct BridgeMessageHandler_t0376CED47DFFF14B8C0196DD45807D7726DA47F5;
// Vuplex.WebView.ClickedEventArgs
struct ClickedEventArgs_t15D6CC25B940C4DE73028D179F1D002ABBC65B25;
// Vuplex.WebView.EventArgs`1<System.String>
struct EventArgs_1_t0F3C22354F70C01E41627C4DB209B35CAF917947;
// Vuplex.WebView.EventArgs`1<UnityEngine.Rect>
struct EventArgs_1_t264C9EC409E765DA460145D1F5251E6CEFA7D973;
// Vuplex.WebView.EventArgs`1<UnityEngine.Vector2>
struct EventArgs_1_t9FFFE64CD86469F3303B155EE4D2AA8719A34E8F;
// Vuplex.WebView.IPointerInputDetector
struct IPointerInputDetector_t26253C0036FF8B030A4D2DB07C1BFB08BAC4DF36;
// Vuplex.WebView.IWebPlugin
struct IWebPlugin_t2DF773F5D05CE4BA66AC923F808E93BB7D90C76C;
// Vuplex.WebView.IWebView
struct IWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492;
// Vuplex.WebView.MockWebPlugin
struct MockWebPlugin_t99272A529401AD5952F2575D14546B41B7129706;
// Vuplex.WebView.MockWebPlugin/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t609464E30C31F6B2BCBEDF4822C0E5B556F1E31C;
// Vuplex.WebView.MockWebPlugin/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t1631F9BFCBE1AAE6137CCDF19A1B094DE211CCA7;
// Vuplex.WebView.MockWebView
struct MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7;
// Vuplex.WebView.PointerEventArgs
struct PointerEventArgs_tEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648;
// Vuplex.WebView.PointerEventOptions
struct PointerEventOptions_tF8E2802E8E41BFCFA793774039E07CE944BD2038;
// Vuplex.WebView.PointerOptions
struct PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6;
// Vuplex.WebView.PopupRequestedEventArgs
struct PopupRequestedEventArgs_t493D57AB29C528E5680638A9B8027332DC37EFB5;
// Vuplex.WebView.ProgressChangedEventArgs
struct ProgressChangedEventArgs_t89FBDCB348ABD3DF4D5B52ED48C20CBC3338E14E;
// Vuplex.WebView.ScriptDialogEventArgs
struct ScriptDialogEventArgs_t25DAE7F9AF9FED595F29370665DFF1ADA9C8C992;
// Vuplex.WebView.ScrolledEventArgs
struct ScrolledEventArgs_t4DC4E49687FC1C4A753AD5C53DA266E1AAB24FC1;
// Vuplex.WebView.SerializableRect
struct SerializableRect_t19F9715A9F171DBD3B54FD4FF5C3580682B02B7E;
// Vuplex.WebView.SettingsException
struct SettingsException_tBE79F9DDD1C6AEF6FCF54CA6270DB5BAF5029987;
// Vuplex.WebView.StringBridgeMessage
struct StringBridgeMessage_tCE04AF76CE8FFB5504BBB6667549113FEAF288D7;
// Vuplex.WebView.StringWithIdBridgeMessage
struct StringWithIdBridgeMessage_t10C56D13CB847CBB01F6F2882BC34AD1DA50BE02;
// Vuplex.WebView.UrlAction
struct UrlAction_tCA6BE253E1E21B9F04482433075BF19498E4CC58;
// Vuplex.WebView.UrlActionType
struct UrlActionType_tC1BDC328D886CB352E1EA46985A8D220FE1D0CAA;
// Vuplex.WebView.UrlChangedEventArgs
struct UrlChangedEventArgs_tDB743B0064FEB99171B5C0674C472A33DAE627D6;
// Vuplex.WebView.UrlChangedMessage
struct UrlChangedMessage_t941E9B50F99CCBC5877E374293C451EEFB0CDF1A;
// Vuplex.WebView.Utils/<>c
struct U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED;
// Vuplex.WebView.Video
struct Video_t6B8E9A22E411B9AA2BD787CD8A8018AA4A5C641F;
// Vuplex.WebView.VideoRectChangedMessage
struct VideoRectChangedMessage_t3790F03C69380AA72CA014FF1EBA30C90B769E14;
// Vuplex.WebView.VideoRectChangedMessageValue
struct VideoRectChangedMessageValue_tED80428A115FBC63F543DBF5E5507C0D46A82EF8;
// Vuplex.WebView.ViewportMaterialView
struct ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013;
// Vuplex.WebView.WebPluginFactory
struct WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3;
// Vuplex.WebView.WebPluginType[]
struct WebPluginTypeU5BU5D_tF25070ED5E0BC7C81ADE86F416BFFFD5472E14B8;
// Vuplex.WebView.WebViewPrefab
struct WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE;
// Vuplex.WebView.WebViewPrefab/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_t57C19DEA26A6D9E8471D89B5826654B5DB26CF07;
// Vuplex.WebView.WebViewPrefab/<>c__DisplayClass74_0
struct U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338;
// Vuplex.WebView.WebViewUnavailableException
struct WebViewUnavailableException_tD560D304E48B8C3927F8ED93B647C9EDBE5D4B1B;
// Vuplex.WebView.iOSWebPlugin
struct iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC;
// Vuplex.WebView.iOSWebPlugin/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tC23435C025706E1F31BDD4A3EF77E2881D555CCC;
// Vuplex.WebView.iOSWebPlugin/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tCB62563B9978E5FDC80A03614670C70495DA69E0;
// Vuplex.WebView.iOSWebPluginRegistrant
struct iOSWebPluginRegistrant_tDF5D0FD240416F1E577AC322A1520EA86C69E00F;
// Vuplex.WebView.iOSWebView
struct iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234;
// Vuplex.WebView.iOSWebView/<_renderPluginOncePerFrame>d__20
struct U3C_renderPluginOncePerFrameU3Ed__20_tA70D3EF053EFA34A193BA376BE028A94FD4B37E7;
// WebHandler
struct WebHandler_tEF3DFECC162F8A29528A5C0396B8D3A36C490A78;

extern RuntimeClass* Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t65311BD7395CAEB1E9483E030F69FF580BCD5C80_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_tCFD7D0EFEF517D00FE88360104518B2070A270A2_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
extern RuntimeClass* BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
extern RuntimeClass* ClickedEventArgs_t15D6CC25B940C4DE73028D179F1D002ABBC65B25_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
extern RuntimeClass* EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_tB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t3AB8FFCCD295F3CB6B51AB07C8ADE78F376F3FBC_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
extern RuntimeClass* GraphicsDeviceType_tA87720B0E7A15371E70249FC9F4EAE7644015552_il2cpp_TypeInfo_var;
extern RuntimeClass* IPluginWithTouchScreenKeyboard_tB5D06E1D022DE3B25627374A1313E09190433E12_il2cpp_TypeInfo_var;
extern RuntimeClass* IPointerInputDetector_t26253C0036FF8B030A4D2DB07C1BFB08BAC4DF36_il2cpp_TypeInfo_var;
extern RuntimeClass* IPromise_1_t2BD69455F5AA937AC3122D68570094E2384BED19_il2cpp_TypeInfo_var;
extern RuntimeClass* IWebPlugin_t2DF773F5D05CE4BA66AC923F808E93BB7D90C76C_il2cpp_TypeInfo_var;
extern RuntimeClass* IWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_il2cpp_TypeInfo_var;
extern RuntimeClass* IWithMovablePointer_tA06B659533C5D9437EC190C9896A6D7ED98C62FA_il2cpp_TypeInfo_var;
extern RuntimeClass* IWithPointerDownAndUp_t4046274808EC4BB6B685EC799A141A90B4CB2823_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
extern RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
extern RuntimeClass* Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var;
extern RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
extern RuntimeClass* MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429_il2cpp_TypeInfo_var;
extern RuntimeClass* MouseButton_t7A679A7E792E06090B97A44570F99AC84FC97FE2_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6_il2cpp_TypeInfo_var;
extern RuntimeClass* ProgressChangedEventArgs_t89FBDCB348ABD3DF4D5B52ED48C20CBC3338E14E_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
extern RuntimeClass* ScrolledEventArgs_t4DC4E49687FC1C4A753AD5C53DA266E1AAB24FC1_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
extern RuntimeClass* TaskCompletionSource_1_t740D6B4559A97E4E740413E4EB4F1F90A84CB317_il2cpp_TypeInfo_var;
extern RuntimeClass* TaskCompletionSource_1_t8083C9684F0A5B46C36EB727C3A0F3739EA59EC4_il2cpp_TypeInfo_var;
extern RuntimeClass* TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240_il2cpp_TypeInfo_var;
extern RuntimeClass* TaskCompletionSource_1_tB4013FB3A5C28FCEF0646F3ABE1C6F7C35A30C72_il2cpp_TypeInfo_var;
extern RuntimeClass* TaskCompletionSource_1_tBBC53B913B9FA8D229904EF7E262A97A678D57AA_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass48_0_t57C19DEA26A6D9E8471D89B5826654B5DB26CF07_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass4_0_tC23435C025706E1F31BDD4A3EF77E2881D555CCC_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass5_0_tCB62563B9978E5FDC80A03614670C70495DA69E0_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED_il2cpp_TypeInfo_var;
extern RuntimeClass* U3C_renderPluginOncePerFrameU3Ed__20_tA70D3EF053EFA34A193BA376BE028A94FD4B37E7_il2cpp_TypeInfo_var;
extern RuntimeClass* UrlActionType_tC1BDC328D886CB352E1EA46985A8D220FE1D0CAA_il2cpp_TypeInfo_var;
extern RuntimeClass* UrlChangedEventArgs_tDB743B0064FEB99171B5C0674C472A33DAE627D6_il2cpp_TypeInfo_var;
extern RuntimeClass* User_tC17190F58E7AF577BC179A3103A3D3F299F3B0C7_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA_il2cpp_TypeInfo_var;
extern RuntimeClass* WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_il2cpp_TypeInfo_var;
extern RuntimeClass* WebPluginTypeU5BU5D_tF25070ED5E0BC7C81ADE86F416BFFFD5472E14B8_il2cpp_TypeInfo_var;
extern RuntimeClass* WebPluginType_t789F11EBAF49F25960825CD0895164A8D5488B88_il2cpp_TypeInfo_var;
extern RuntimeClass* WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE_il2cpp_TypeInfo_var;
extern RuntimeClass* WebViewUnavailableException_tD560D304E48B8C3927F8ED93B647C9EDBE5D4B1B_il2cpp_TypeInfo_var;
extern RuntimeClass* Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var;
extern RuntimeClass* iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral0181D3A3522094E55C0647C5E505AB1338271A81;
extern String_t* _stringLiteral0243885F9FA398A96F29D7CA18CB3B74323E1346;
extern String_t* _stringLiteral036FD5F1D09CBB1C7766D6A780B35B4DA07A1D45;
extern String_t* _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9;
extern String_t* _stringLiteral0673CA4D7B5E3737AD01543628B363533DE97619;
extern String_t* _stringLiteral0F08825A9A7D45D5F26E6773697EB8CAEBB224BD;
extern String_t* _stringLiteral12B7C73DAC08619D478AADDD6938791B31DA52DC;
extern String_t* _stringLiteral1300C347151176CF5DC139026EC2BCA605F1C4D7;
extern String_t* _stringLiteral134E948E4BB85D667D03CD36303CD0BB02B72311;
extern String_t* _stringLiteral144B5C28FCB7F4D331BBDF15F81F4F627FE2C93D;
extern String_t* _stringLiteral14DA5074BDC9CFC42E0C47D58D27258836739EA9;
extern String_t* _stringLiteral183B21C28726A29B7BA9C0633569DEC605CE49DE;
extern String_t* _stringLiteral1DE437673F7C1D714E8F4F1F8194606A785F2BDF;
extern String_t* _stringLiteral25688845860B85616A3FABDEB2E53D4408F6DEA8;
extern String_t* _stringLiteral25E9AE11F77F84411079626115735F738CF8D4BD;
extern String_t* _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6;
extern String_t* _stringLiteral2B0CD5532A565BE310F8F03CDFA35058A8A96454;
extern String_t* _stringLiteral2DF53D2ECEC36B188849C98FDB0200BC4775B7D4;
extern String_t* _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727;
extern String_t* _stringLiteral3FCD56255F419E0C4467B620356C7A1A229955E8;
extern String_t* _stringLiteral4139A73525AC0B60DD8BDA852AD2ADF3D833BDED;
extern String_t* _stringLiteral439AC6327D9E85C6128D568E206F852F3E18A74C;
extern String_t* _stringLiteral43A9519ED4B5E9C75EB7D683E3D1E09708F9B34A;
extern String_t* _stringLiteral459B0E189EEC2E290C75D879AF60962B204A4060;
extern String_t* _stringLiteral4FA6DBC10D5F7E7898861C0DA45D101E81BA0DDC;
extern String_t* _stringLiteral56839ED9EDBBE925C580345DB88C4F56DA790AAB;
extern String_t* _stringLiteral577D7200DC7F0BD96B9FF582F80E235B44F8B5A9;
extern String_t* _stringLiteral5F7A2D405C4CE7E6EA706A88D2CA56835A658BBB;
extern String_t* _stringLiteral5FCCCDCF1D079C4A85C92C6FE7C8D29A27E49BED;
extern String_t* _stringLiteral612B74813BA51F10212C47C97E831649335E8762;
extern String_t* _stringLiteral685B56269E9682DF1E329F25FC18034536A9228C;
extern String_t* _stringLiteral6A6A869A8714CF2E133F246A0F2392FFB666C5DC;
extern String_t* _stringLiteral73119A4682CADB81B4BDF5A1426A87B281211030;
extern String_t* _stringLiteral74094BEAD136E16886013CFB5180AB35832D30A7;
extern String_t* _stringLiteral768E0C1C69573FB588F61F1308A015C11468E05F;
extern String_t* _stringLiteral79196FB3C75CA3AA02DBFC705A57E64A3ECA4298;
extern String_t* _stringLiteral7E653D3AC679D6B3D773C20BA5FA94CA6B4D7C75;
extern String_t* _stringLiteral80708A7A82A6018E72BCFD1E7A9876516E7A7573;
extern String_t* _stringLiteral8423F30732BAB644D2DEFA1A9253775834274EA9;
extern String_t* _stringLiteral87509D7F56D6C4C4EEF2F367B525BFB1CB2853CF;
extern String_t* _stringLiteral897CA6EED95B99852DA377AEAB06AC6B4437C10D;
extern String_t* _stringLiteral89C6E428F9EBECD1ECD0C60EE7A779B6161C6F65;
extern String_t* _stringLiteral8AE16D30542A37BD196F8418F9FF380DC39334E6;
extern String_t* _stringLiteral8EDD660F557AC75E1FE0D90E50F5874CE1EB8F3F;
extern String_t* _stringLiteral8F6FF63F67342E73A3806185F2431E00BB32D0EA;
extern String_t* _stringLiteral90AC86513D7D93E868698D90B2842650FBAE5540;
extern String_t* _stringLiteral92298812107BB17EFF1B85E15547AE13B6FEE3A1;
extern String_t* _stringLiteral93AF4B68616C9C3716085B50E58EE8DC9C4F091A;
extern String_t* _stringLiteral942AFEFE5DDA838A569F975E9E19E084E64F6CC1;
extern String_t* _stringLiteral97EB8C80F7FD9D9F6120C3BFFD79E5E23E575196;
extern String_t* _stringLiteral9AB9F24C6E88339FEC50A0F3FDA8CA33B69BB50F;
extern String_t* _stringLiteral9AE8589BC6CE2CBFF32DC9DDF0B9F83BC964E232;
extern String_t* _stringLiteral9B83FDCDE8EB04D61B97C8F48792F869BB92A95B;
extern String_t* _stringLiteralA99EA5BD9E37A6159589FEB1CB8C6653A1F39DD9;
extern String_t* _stringLiteralB042D04B8E87A67980F52F2DB7592E3C38A80D9F;
extern String_t* _stringLiteralB22DBCEC5EA0609A77FF3D58D65605D10A5F041B;
extern String_t* _stringLiteralB2E6A4C406836E1CDE0A41C5120B81A9516A1A78;
extern String_t* _stringLiteralB9A9077890C54E9C71049AC7AA7FCE4723B78065;
extern String_t* _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8;
extern String_t* _stringLiteralC06C0C8DCD8836A9531D5F9B0B1E92F5A0F98BEF;
extern String_t* _stringLiteralC0CEF2B89C1E231B8907D9D8A09B95C98488CC08;
extern String_t* _stringLiteralC173FBC19131AA0A1036406BB6A90DEB15574D12;
extern String_t* _stringLiteralC34B5A244FC8E380DFB1B055AEDEF9753442A476;
extern String_t* _stringLiteralCD3FABEC75C2EC041D564D3CA3E1901B8AE3E45B;
extern String_t* _stringLiteralCD535DBE21128728BA0BABDFDFE0BAEEB909B0F4;
extern String_t* _stringLiteralCE716D0F6696F662371B6E1B84D9D892AFE64355;
extern String_t* _stringLiteralD08F88DF745FA7950B104E4A707A31CFCE7B5841;
extern String_t* _stringLiteralD2A773AE817D7D07C19D9E37BE4E792CEC37AFF0;
extern String_t* _stringLiteralD2BD0D85C702A7FF1185F68E63819CC35586620F;
extern String_t* _stringLiteralD528C1F77A3C226D1B4F29F97DDACC8223F1E1F2;
extern String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
extern String_t* _stringLiteralDDD9FD727381EAE37D0017C58931C05F51D9B376;
extern String_t* _stringLiteralE9957D6A4AD6FCD4843BB6DB9ADC0C76CBBDD069;
extern String_t* _stringLiteralEFB2E85AD6FE1B821C5F1E7E6C9A660EBDBBA5DB;
extern String_t* _stringLiteralF3342A76BD80E19429A753BA2DF5C9377E8225A3;
extern String_t* _stringLiteralF5424E84A20660EC4AE9731F60B0CD6CF2668D7D;
extern String_t* _stringLiteralFD97A1BF2CB9C9F72CD9B4AD1CE8EF4A2AC7EF29;
extern const RuntimeMethod* Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m4FDEC794781FBC6B576389503CE9A9B7ED1A06AB_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_mAEF60C0D26E6CB251A8E07EEAB9A0233801E88BD_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_mE2800B8E7A8B62C005C1EA186199E5413CB35A5F_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m5541C3BBE123DA9981022935C7C933D248C90656_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_mAC998B8AD6A8D39434263D21FA7397949F39F244_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_mC973C70328D6C85A8183929F295AABE327469148_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_mCD8302FC6FE684869E9533861A0EE32E3195AD35_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_mFE4DACEE3A547513AF5929267E7200E2739B7E14_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJNIHelper_ConvertFromJNIArray_TisByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_m9D93404DD3C510A7C80EA522A17C8564BED7A371_RuntimeMethod_var;
extern const RuntimeMethod* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var;
extern const RuntimeMethod* Array_IndexOf_TisGraphicsDeviceType_tA87720B0E7A15371E70249FC9F4EAE7644015552_m45C497A46A18BB36CBBBDB7BCFA094446E909CFE_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisIPointerInputDetector_t26253C0036FF8B030A4D2DB07C1BFB08BAC4DF36_mB33FBE95E65651DE78B2171971D88AB5D5F516AB_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013_m9600D5CBA071D6C4BA029349F9EAADCF56394E07_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m6B8E8E0E0AF6B08652B81B7950FC5AF63EAD40C6_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013_m105D71127F0D20D233112057AD746096AE0B21A8_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Select_TisGraphicsDeviceType_tA87720B0E7A15371E70249FC9F4EAE7644015552_TisString_t_m1DBBAE98C6B42C5AFF68534E0C35EB116FC7878F_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToArray_TisString_t_m1BAD76FB02571EB3CCC5BB00D4D581399F8523FC_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToList_TisGraphicsDeviceType_tA87720B0E7A15371E70249FC9F4EAE7644015552_m125119326AC72B6E5C2EA3BB2AFB9FD49B2E3D8E_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToList_TisString_t_m5819BB1395C8CAB17E7B1E8EED76702D3AE855B5_RuntimeMethod_var;
extern const RuntimeMethod* EventArgs_1_get_Value_m55F02A187457EDA7101C659E455C00F59E19B229_RuntimeMethod_var;
extern const RuntimeMethod* EventArgs_1_get_Value_mC97C715553CF288B9A69829B2D0DF13BE9A4C987_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m0A8B07D7304D59AB60E1E09F390A83AFCD7E4C1B_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m1FDA85A53D246720364C1DCEA0DB747F6B92A5EF_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m5C072AF2E55C5B2CAC182D8B11222A2A45C5101B_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m8F52667860D12B30330374B902DEB3822EBEC3FE_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1__ctor_m21FC9012EDACF1FCF6883101AAA41B6983FB84B4_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1__ctor_mA3D53174D92F5F1E64F81109717B31DB37CEF0CB_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1__ctor_mBA7576030ECA6CBA11E2AA1378319EBA1E62D242_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1__ctor_mE38EEA9633C8509E9B507EEA707BF2C3962D3649_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m996B551BC4F8A8D65A1A2BD0723B71F85C96828D_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisMockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7_mC0EED77203046BFDF11B7F8935EBE728B4D380CB_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisiOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234_mAB65CCC3DE3C1E25EAE09995F5F5CB91BCE9AFA1_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponentInChildren_TisIWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_m1FEC8153AFCF69F230EB0EF49A10B6B29176C15A_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisWebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE_m966B1BA11F9B73255B21EB2EAFA0D24F75348E70_RuntimeMethod_var;
extern const RuntimeMethod* JsonUtility_FromJson_TisStringBridgeMessage_tCE04AF76CE8FFB5504BBB6667549113FEAF288D7_mBBD8ADE6FB0B0C4323BA79CEAEA798CB22388891_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetRange_m4D719DF591ACF770E8025E84CC1DE0426A543EA1_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisAbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6_mAD69E97D9DD8BC735BDF7AE33522EC43FE33D69D_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var;
extern const RuntimeMethod* Resources_Load_TisMaterial_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_m03D88584A63B0ABDC1B4BE7B8EB210D9ECBEDE03_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1_SetResult_m034EA77A1AA02DF06AC5B882AA38AA79BAF51754_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1_SetResult_m4F663858083BE6E11B2CAC7D03C60983405FDC78_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1_SetResult_m875DC4E8359A72CD3BBFA80285184F63EEF82BA3_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1_SetResult_m963D78FD47D7FB79E2F6E342A60675D85EBF2936_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1_SetResult_mD39FBE682EB405E5AC468C741ECB89340B9E0DA0_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1__ctor_m1956B55AE4E1C8B54B70936B575997159656ED69_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1__ctor_m1C2FD4998ADA138B6C41A33EC0FB0FB8548CF92A_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1__ctor_m446C67D6303F5CA8E10157F29BFB0B6DCD2429A2_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1__ctor_m7FF4CB19A6FFF62BC7704E01DE773276895D0061_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1__ctor_m8DE03339B68AF1101DC4477F47D7729AC5C9F608_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1_get_Task_m0318082F7A10338098BC30D69462BD4DF8CD11EF_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1_get_Task_m4242037F4A9E8C7E15364B30CC754D27826FBD7C_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1_get_Task_m9329D3F5934204E0569D9E62652D410AE3AD8F44_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1_get_Task_mA42AB9FA0F829428BE4C498890B2F344E28E8566_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1_get_Task_mDF1880FB9E18FC04E5FE0D02DE7208DF581CAC54_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CGetGraphicsApiErrorMessageU3Eb__2_0_m2B0DEA3D865BB73FF0B0E570A8164A1A3CAC7C29_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass48_0_U3CWaitUntilInitializedU3Eb__0_mE83B2803FCF35CEF23C80C122D89326760E5D843_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CCreateMaterialU3Eb__0_mCFB3526C16C2A5418FCED76EA984DF7585EFFF20_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CCreateVideoMaterialU3Eb__0_m0AEF9F12FB803587EF412096A3AE3786CCBFC1B9_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass74_0_U3C_initU3Eb__0_mF25CDEE42A2060BA5D37954C68CBD25F333C4C31_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass74_0_U3C_initU3Eb__1_m0C8F1468298902683F8537187994B3AF26829319_RuntimeMethod_var;
extern const RuntimeMethod* U3C_renderPluginOncePerFrameU3Ed__20_System_Collections_IEnumerator_Reset_m6F41101DDEB8717C68D6A5E672E6EB6A426AAECD_RuntimeMethod_var;
extern const RuntimeMethod* Utils_ThrowExceptionIfAbnormallyLarge_m69028CCE30E7D688E0FF58EF04D4DBA70A2DB5B8_RuntimeMethod_var;
extern const RuntimeMethod* WebHandler_U3CGetRequestU3Eb__9_0_m2D98DF7E5843D7C2C03FDF626EA568DE75518226_RuntimeMethod_var;
extern const RuntimeMethod* WebPluginFactory_GetPlugin_mF7D7F9B227FD809E021F517E060A18DA7C360BB6_RuntimeMethod_var;
extern const RuntimeMethod* WebViewPrefab_Init_m236885ABF8FDA9717A1D8C3947D84C33876FD4D0_RuntimeMethod_var;
extern const RuntimeMethod* WebViewPrefab_InputDetector_BeganDrag_mC08F2D10141F3555F06BEE479246AAF6FD4FEC0D_RuntimeMethod_var;
extern const RuntimeMethod* WebViewPrefab_InputDetector_Dragged_mE6AF26943E2FC118A5D0439FB44DCDAC081EB092_RuntimeMethod_var;
extern const RuntimeMethod* WebViewPrefab_InputDetector_PointerExited_mC454B6186AC62B6AC589007B88F7E216B9115194_RuntimeMethod_var;
extern const RuntimeMethod* WebViewPrefab_InputDetector_PointerMoved_m28CD81812C2E59BF0D4DAE6FD8F5FD8571BA6FA9_RuntimeMethod_var;
extern const RuntimeMethod* WebViewPrefab_InputDetector_Scrolled_m310602B0610EB138F30DFACCEB976CADC55610B9_RuntimeMethod_var;
extern const RuntimeMethod* WebViewPrefab_U3C_attachWebViewEventHandlersU3Eb__67_0_m8F378A99B7885B60AFFCAA05C8477343D28B0563_RuntimeMethod_var;
extern const RuntimeMethod* WebViewPrefab__throwExceptionIfInitialized_m6E2F7CAA21DF83F8DE5BC8566C2CF6F92A46F0A4_RuntimeMethod_var;
extern const RuntimeMethod* iOSWebView_GetFileUrlForBundleResource_m9A54FFD0A681D8EB28E48EBDE247644154361C07_RuntimeMethod_var;
extern const uint32_t MockWebView_Blur_m13E9F3C419FBBF7883629F409356CA7301A5205B_MetadataUsageId;
extern const uint32_t MockWebView_CanGoBack_m340E1F4F0D71EAE85F2AEE2538F152466719E7A6_MetadataUsageId;
extern const uint32_t MockWebView_CanGoBack_mC2276E4E373317A6DC0800EC40A48F9D4449D0B3_MetadataUsageId;
extern const uint32_t MockWebView_CanGoForward_m4DE7BE9637CC24E31DEFE90F29523B869BC40ED4_MetadataUsageId;
extern const uint32_t MockWebView_CanGoForward_mA829372BB1718BAD43A11520CCC3139E57DAAE1B_MetadataUsageId;
extern const uint32_t MockWebView_CaptureScreenshot_m799C7C8268344CF5CF2A7A948F2718724EDBAA90_MetadataUsageId;
extern const uint32_t MockWebView_CaptureScreenshot_mD8BD49CF8BA74335FB70EA2196F3258B53262AD5_MetadataUsageId;
extern const uint32_t MockWebView_Click_mC195E1E5B3642650413C2B9883F6342305267344_MetadataUsageId;
extern const uint32_t MockWebView_Click_mDEE25F6E40E414E49C73AE6BA21B51104D29A7B6_MetadataUsageId;
extern const uint32_t MockWebView_Copy_mA7395BE722AA829663773412F7288483F6B5C32D_MetadataUsageId;
extern const uint32_t MockWebView_Cut_m4FE1E633B9190CB25D6C878B3468829B91DF70CC_MetadataUsageId;
extern const uint32_t MockWebView_DisableViewUpdates_m46543A0411B0C1B312F2285811DE8F57A52A52B6_MetadataUsageId;
extern const uint32_t MockWebView_Dispose_mD6E8F97AC2613620F5EC8FDB5125EA3363F65EDB_MetadataUsageId;
extern const uint32_t MockWebView_EnableViewUpdates_mE9A70BABA6649667D466F14F99B91AB344FFB26F_MetadataUsageId;
extern const uint32_t MockWebView_ExecuteJavaScript_m4BB0ECE39ED2C15C6541B619400FB341FC6C46E0_MetadataUsageId;
extern const uint32_t MockWebView_ExecuteJavaScript_m9BA34F6811E44BD7FD37BF81C5FDE75D59B9018A_MetadataUsageId;
extern const uint32_t MockWebView_Focus_m4F4245B5BE6F9B72F340192B211EAF8148886877_MetadataUsageId;
extern const uint32_t MockWebView_GetRawTextureData_m419A8D44E56EE0BF9BA04DDF357510B5DD0800AD_MetadataUsageId;
extern const uint32_t MockWebView_GetRawTextureData_m48F7616E946BF0667692C2D03238F6D3CDF7E1C5_MetadataUsageId;
extern const uint32_t MockWebView_GoBack_m49B2818A05FCCD353FDE1DA4E8CE94D35FC4D699_MetadataUsageId;
extern const uint32_t MockWebView_GoForward_m18BD9416EC5593751166E8F4C38F6E6F2351B31C_MetadataUsageId;
extern const uint32_t MockWebView_HandleKeyboardInput_mD45A8318FC81CD25A90F95FA4A8A203BE614713D_MetadataUsageId;
extern const uint32_t MockWebView_Init_m640C398D0EDDC9DC4D9F8FB94FE83CF23D1DC405_MetadataUsageId;
extern const uint32_t MockWebView_Instantiate_mDCB0961EF970C49FAB8A18ED8F42698D1EA46169_MetadataUsageId;
extern const uint32_t MockWebView_LoadHtml_mF53E9A23CD52AC5F472930C6730AF4908F95B52E_MetadataUsageId;
extern const uint32_t MockWebView_LoadUrl_m3C04C8D64D6DB6ED9942D0BE9D29170491AD6272_MetadataUsageId;
extern const uint32_t MockWebView_Paste_mA995748A3C5259944D4B520B9862AC10A45AAFCE_MetadataUsageId;
extern const uint32_t MockWebView_PostMessage_m9457D12CEDC49EF61553A693CCF82E44FCFD29D3_MetadataUsageId;
extern const uint32_t MockWebView_Reload_mA62B92F26AC7747060447547AAC490C959D74EF4_MetadataUsageId;
extern const uint32_t MockWebView_Resize_m4FAEBB5006B06E3481A41E8C73F0AD3086652BDE_MetadataUsageId;
extern const uint32_t MockWebView_Scroll_m49CD0EF05505ECA3F53B9502A927D7C6D2F7DD7F_MetadataUsageId;
extern const uint32_t MockWebView_Scroll_mC6187498D46F9F7651A2D60B3C709FFBB14D41F7_MetadataUsageId;
extern const uint32_t MockWebView_SelectAll_m25784F118524ECDC7D0C8AE3E713E7F8F34AA1A0_MetadataUsageId;
extern const uint32_t MockWebView_SetResolution_m11A924FAC1B6446C1C8331D7809D4C745C52F74A_MetadataUsageId;
extern const uint32_t MockWebView_ZoomIn_m08774625BFED6F50E3E26AB56A3EF7CC86BC3A2F_MetadataUsageId;
extern const uint32_t MockWebView_ZoomOut_m7C93D1AD83CFEA51406F06FC1B371BC7F22CDAD1_MetadataUsageId;
extern const uint32_t MockWebView__ctor_m5EF16473A8C30F26C73DEC1AC6A56F6DEBD9F494_MetadataUsageId;
extern const uint32_t MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8_MetadataUsageId;
extern const uint32_t MockWebView_add_CloseRequested_mEDD5EAD0949E87FE926698E180E82992C75FDD1E_MetadataUsageId;
extern const uint32_t MockWebView_add_LoadProgressChanged_m1889046207913B0DB872DC0BEF400A406BDF4D87_MetadataUsageId;
extern const uint32_t MockWebView_add_MessageEmitted_mFD2148DF694FC9184A4EEBD40D91137DAB29D9F0_MetadataUsageId;
extern const uint32_t MockWebView_add_PageLoadFailed_m0F73AE0433856C7F85834013215EF5A983CC70AA_MetadataUsageId;
extern const uint32_t MockWebView_add_TitleChanged_m46860E36FD9B95E8A5FFF799B7901E1F04275322_MetadataUsageId;
extern const uint32_t MockWebView_add_UrlChanged_mD6F816D530BD062F2617CFB2BD4E9DA8C0410A59_MetadataUsageId;
extern const uint32_t MockWebView_add_VideoRectChanged_mBDFE3404F39B0CA357A1DD90B853769F396059F2_MetadataUsageId;
extern const uint32_t MockWebView_remove_CloseRequested_mD6383BFF51BEEF104D792DC20864B698C70509B8_MetadataUsageId;
extern const uint32_t MockWebView_remove_LoadProgressChanged_m6AF32BDB2B5EB202388FBC8C0EE779DEDBFE4D38_MetadataUsageId;
extern const uint32_t MockWebView_remove_MessageEmitted_mB399474647CDE72C8E5E939C4F4F0EE2583A29F5_MetadataUsageId;
extern const uint32_t MockWebView_remove_PageLoadFailed_m59586F7A4111D51B431614DA138BBD2DD2A1D0A6_MetadataUsageId;
extern const uint32_t MockWebView_remove_TitleChanged_m39D48E78AC63D668455671CAC5AF9E55379AA323_MetadataUsageId;
extern const uint32_t MockWebView_remove_UrlChanged_m6CD0666250E86E95181F84DD5D58470A10744D90_MetadataUsageId;
extern const uint32_t MockWebView_remove_VideoRectChanged_m5E25341C1B4D01A3F15D1204836E198ADA4DAFBE_MetadataUsageId;
extern const uint32_t PointerEventArgs_ToPointerOptions_mA8B38EC332D839CA31CE5656C1AE58AD9C6BF746_MetadataUsageId;
extern const uint32_t PointerEventArgs__ctor_mE7C4D239B49F303D45FA9D03617F9A76432C2531_MetadataUsageId;
extern const uint32_t PointerOptions_ToString_m48AAC9471EFF37E31588A8089A480CDB54C87B37_MetadataUsageId;
extern const uint32_t PopupRequestedEventArgs__ctor_m8080FFF737F8E14DBA51B4E555A7584864D628D9_MetadataUsageId;
extern const uint32_t ProgressChangedEventArgs__ctor_m9E87AD9D18E12DC9BC77A16EDFCCBD2AD81E747B_MetadataUsageId;
extern const uint32_t ScriptDialogEventArgs__ctor_mB993E6650217AEC4FB503A1547F5291D04A8467D_MetadataUsageId;
extern const uint32_t ScrolledEventArgs__ctor_m23022F20F93F4EC86847064FB7E2E6EDE5681FF3_MetadataUsageId;
extern const uint32_t SettingsException__ctor_m0D8F2A77AA6B2956EEC8A847E35ECFDFFEE6EADC_MetadataUsageId;
extern const uint32_t StringBridgeMessage_ParseValue_mDF6E8AFD55BD867856EE94AD48EFE1D20455C01E_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3CGetGraphicsApiErrorMessageU3Eb__2_0_m2B0DEA3D865BB73FF0B0E570A8164A1A3CAC7C29_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass3_0_U3CCreateTextureU3Eb__0_m607E0349849ED4CD29220D433620F8C6A30AA609_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass48_0_U3CWaitUntilInitializedU3Eb__0_mE83B2803FCF35CEF23C80C122D89326760E5D843_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass4_0_U3CCreateMaterialU3Eb__0_mC55BECC09FE70C089FC316F0F7AD45DF255951DD_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass4_0_U3CCreateMaterialU3Eb__0_mCFB3526C16C2A5418FCED76EA984DF7585EFFF20_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass5_0_U3CCreateVideoMaterialU3Eb__0_m0AEF9F12FB803587EF412096A3AE3786CCBFC1B9_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass74_0_U3C_initU3Eb__1_m0C8F1468298902683F8537187994B3AF26829319_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m968EF80EF0C8830A52D88DF02E17353C9056C0D5_MetadataUsageId;
extern const uint32_t U3C_renderPluginOncePerFrameU3Ed__20_MoveNext_m253E78E6CCA86998595D25654CD0405E2B660683_MetadataUsageId;
extern const uint32_t U3C_renderPluginOncePerFrameU3Ed__20_System_Collections_IEnumerator_Reset_m6F41101DDEB8717C68D6A5E672E6EB6A426AAECD_MetadataUsageId;
extern const uint32_t UrlActionType__cctor_mB36C9E7461DFD6C6402525CE31A4FB4066C601F7_MetadataUsageId;
extern const uint32_t UrlChangedEventArgs__ctor_m2002CFC345EC8B2BBA28C64B406F6759AB2D413A_MetadataUsageId;
extern const uint32_t Utils_ConvertAndroidByteArray_m241675E60F1E4B66383BFBE5BBAE79CAFE39D9FE_MetadataUsageId;
extern const uint32_t Utils_CreateDefaultMaterial_mAC23D791807847F81F2006BD4C55F42D1968F7D8_MetadataUsageId;
extern const uint32_t Utils_GetGraphicsApiErrorMessage_mBB9011FC45763C63F5B8C07EAF91B7060FBFBE6C_MetadataUsageId;
extern const uint32_t Utils_ThrowExceptionIfAbnormallyLarge_m69028CCE30E7D688E0FF58EF04D4DBA70A2DB5B8_MetadataUsageId;
extern const uint32_t ViewportMaterialView_SetCropRect_m2E7361A720624213318BE9673519FA4EAFF6C810_MetadataUsageId;
extern const uint32_t ViewportMaterialView_SetCutoutRect_mF8AFE7237F7C5E920F5B00B30C98D50C37B9251C_MetadataUsageId;
extern const uint32_t ViewportMaterialView_SetStereoToMonoOverride_m9E4419E70F17003363CA3A252219980385306119_MetadataUsageId;
extern const uint32_t ViewportMaterialView_get_Material_m9634E3E046B1387838E5D77A17748D8E981CEED5_MetadataUsageId;
extern const uint32_t ViewportMaterialView_get_Texture_mEA0582EA1BF04408E3A1F19DFFBFE46045DF2EF7_MetadataUsageId;
extern const uint32_t ViewportMaterialView_get_Visible_mD55DE711D44412BF91695EBE0C78526DB2800E45_MetadataUsageId;
extern const uint32_t ViewportMaterialView_set_Material_m3216DE4618BC9B0114ED89F9D4D8BFA548BB564B_MetadataUsageId;
extern const uint32_t ViewportMaterialView_set_Texture_mBF93C6E5D3403512E934FFE5F4A4C965F466CCD5_MetadataUsageId;
extern const uint32_t ViewportMaterialView_set_Visible_m46CFD9A92C822A0F6F1518DBF24FE3538127A934_MetadataUsageId;
extern const uint32_t WebHandler_DecodeURL_m3AD8AFFBE550AF362ABB041B5754CF12A783F591_MetadataUsageId;
extern const uint32_t WebHandler_GetMapLocation_mBBAD7518813337136DBC026AA2EE33878A3BABD5_MetadataUsageId;
extern const uint32_t WebHandler_GetRequest_m456242FFED9A96849A2CFDFE30DD195673EB5690_MetadataUsageId;
extern const uint32_t WebHandler_PostToDatabase_mE53F400673D8CA3F5A8777ED3B33AF7008F24D93_MetadataUsageId;
extern const uint32_t WebHandler_Start_m8C96EF9DAF9292FB3C7364DA42EDE1A55CCAC4DF_MetadataUsageId;
extern const uint32_t WebHandler_U3CGetRequestU3Eb__9_0_m2D98DF7E5843D7C2C03FDF626EA568DE75518226_MetadataUsageId;
extern const uint32_t WebHandler__ctor_mD7F46BBBA775B90ED4D2069F765F2762A1A1A3D1_MetadataUsageId;
extern const uint32_t WebPluginFactory_GetPlugin_mF7D7F9B227FD809E021F517E060A18DA7C360BB6_MetadataUsageId;
extern const uint32_t WebPluginFactory_RegisterAndroidGeckoPlugin_m658F811997EF198E13187192C5D8098BE6559338_MetadataUsageId;
extern const uint32_t WebPluginFactory_RegisterAndroidPlugin_m3FE89C1DDE8DAF38D8E35E5B577C62E79F445CDD_MetadataUsageId;
extern const uint32_t WebPluginFactory_RegisterIOSPlugin_mABB6D9949F7DA58D0B1CED7535FAAB469DE8CD80_MetadataUsageId;
extern const uint32_t WebPluginFactory_RegisterMacPlugin_m4BD298E23F8E352450DDA881DE61D78C04BC691B_MetadataUsageId;
extern const uint32_t WebPluginFactory_RegisterMockPlugin_mC6518B1C1741E97402F9C2B9F48C575D8F9BD1B1_MetadataUsageId;
extern const uint32_t WebPluginFactory_RegisterUwpPlugin_m066A3FFBCD9E096E8473313909AAA06046BE8257_MetadataUsageId;
extern const uint32_t WebPluginFactory_RegisterWindowsPlugin_m270749185016D4A08C11C78AA565AB09D92D628D_MetadataUsageId;
extern const uint32_t WebPluginFactory__cctor_m2CE21F40FB2D492C9ED78D50968205122AFAC698_MetadataUsageId;
extern const uint32_t WebPluginFactory__logMockWarningOnce_m9BCF6ACA96073B76C6EBC33AACBA7C8097847CB6_MetadataUsageId;
extern const uint32_t WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t WebViewPrefab_Destroy_mF72F901B59834762E5FF809B2B007EF34FAC780A_MetadataUsageId;
extern const uint32_t WebViewPrefab_Init_m236885ABF8FDA9717A1D8C3947D84C33876FD4D0_MetadataUsageId;
extern const uint32_t WebViewPrefab_InputDetector_Dragged_mE6AF26943E2FC118A5D0439FB44DCDAC081EB092_MetadataUsageId;
extern const uint32_t WebViewPrefab_InputDetector_PointerDown_m916732B7BD7F956C2062DF32FCDE6441BF923286_MetadataUsageId;
extern const uint32_t WebViewPrefab_InputDetector_PointerExited_mC454B6186AC62B6AC589007B88F7E216B9115194_MetadataUsageId;
extern const uint32_t WebViewPrefab_InputDetector_PointerMoved_m28CD81812C2E59BF0D4DAE6FD8F5FD8571BA6FA9_MetadataUsageId;
extern const uint32_t WebViewPrefab_InputDetector_PointerUp_m2446FFF1E69E354F3236E72E2151C8FA93C6DE3F_MetadataUsageId;
extern const uint32_t WebViewPrefab_Instantiate_m4B348C91B252D1B7FA5A45CA88E93C4B0963647C_MetadataUsageId;
extern const uint32_t WebViewPrefab_Instantiate_m91A51598D793201B9D13F612834861B520B092E5_MetadataUsageId;
extern const uint32_t WebViewPrefab_OnDestroy_m545F254026260747710D70097D950672DBA2A266_MetadataUsageId;
extern const uint32_t WebViewPrefab_Resize_mBBFFFD7A79975BC5DD6024D02634506EB5A5C0C5_MetadataUsageId;
extern const uint32_t WebViewPrefab_SetView_m00410C0224F8F5AE243093B46B15869616719282_MetadataUsageId;
extern const uint32_t WebViewPrefab_U3C_attachWebViewEventHandlersU3Eb__67_0_m8F378A99B7885B60AFFCAA05C8477343D28B0563_MetadataUsageId;
extern const uint32_t WebViewPrefab_WaitUntilInitialized_m84FF09F472AFF65B50C49548F11D1D24A47967CB_MetadataUsageId;
extern const uint32_t WebViewPrefab__attachWebViewEventHandlers_m0520D909F99AAF3050262ED7BD7BABA4DB035728_MetadataUsageId;
extern const uint32_t WebViewPrefab__getDefaultView_mA9F972BA99F0344C4A4B189D532A148EA374A1A9_MetadataUsageId;
extern const uint32_t WebViewPrefab__getVideoLayer_mB5724AEF4C9D3F5E7EDF7D626FD9345FCE643AEB_MetadataUsageId;
extern const uint32_t WebViewPrefab__getVideoRectPositioner_m390E1F260AE80C51044BE830A5A7F6C3F72164AC_MetadataUsageId;
extern const uint32_t WebViewPrefab__getView_m46E4EB9CFF85526B5642F690A95D35106B33F052_MetadataUsageId;
extern const uint32_t WebViewPrefab__initPointerInputDetector_m4559BFB33C2C878457336206D3B50121C0D5870F_MetadataUsageId;
extern const uint32_t WebViewPrefab__initWebViewIfReady_m4CB1839D1116D6681C6A68D582FF5262661D3302_MetadataUsageId;
extern const uint32_t WebViewPrefab__init_mF91085566A79B6477FF2C639B4BC414887409FB3_MetadataUsageId;
extern const uint32_t WebViewPrefab__movePointerIfNeeded_m68349506D83FB9F076C2EB231EF316B2C4FCEAFE_MetadataUsageId;
extern const uint32_t WebViewPrefab__reinitAfterScriptsReloaded_m561DB45E4A1C8B1B63AE4AB80B6A8C593C77E97E_MetadataUsageId;
extern const uint32_t WebViewPrefab__resetLocalScale_m0E922AD2F4E1BAE663CD73BBD0B971FC0F2F6653_MetadataUsageId;
extern const uint32_t WebViewPrefab__scrollIfNeeded_m8D6FB7661DB30A5BDA99AF27C9E669A984EC18ED_MetadataUsageId;
extern const uint32_t WebViewPrefab__setVideoRect_mD369E5C054E170A98321B6E0B8FA591BF7494FD3_MetadataUsageId;
extern const uint32_t WebViewPrefab__throwExceptionIfInitialized_m6E2F7CAA21DF83F8DE5BC8566C2CF6F92A46F0A4_MetadataUsageId;
extern const uint32_t WebViewPrefab_add_Clicked_mA5FDDA91748BC6D07971F12BA6CA2F2C37D9AE9A_MetadataUsageId;
extern const uint32_t WebViewPrefab_add_Initialized_mC6B16CDB0A243D13FF76EDE265D4EF4744F1FB92_MetadataUsageId;
extern const uint32_t WebViewPrefab_add_Scrolled_mC4F2D4090256832CCE3C92F4DEA812050B8642CC_MetadataUsageId;
extern const uint32_t WebViewPrefab_get_Collider_mDC5483F6850AC907ACFBDC84F1F7E28A23BF0137_MetadataUsageId;
extern const uint32_t WebViewPrefab_get_Material_mD81E532E71CDB60953A01C0C7935543B14B1B457_MetadataUsageId;
extern const uint32_t WebViewPrefab_get_ScrollSensitivity_m6BE9D0D60766A0C0B07E748ADF3FAAA3B872C201_MetadataUsageId;
extern const uint32_t WebViewPrefab_remove_Clicked_m348C3366BB3D78C27EA6761F37B31342DAC1E3F6_MetadataUsageId;
extern const uint32_t WebViewPrefab_remove_Initialized_m2879AC9B739F537E45354FDD6179406FA6A583DF_MetadataUsageId;
extern const uint32_t WebViewPrefab_remove_Scrolled_m9220187A6C33DDC52A63155EE6E5CF3334ED461A_MetadataUsageId;
extern const uint32_t WebViewPrefab_set_ScrollSensitivity_m68739511A99D743316D8025B364AD84A096BC4D3_MetadataUsageId;
extern const uint32_t WebViewUnavailableException__ctor_m53F78BA2AAA1C8F59DCB6609CBCDE811EB6AE11E_MetadataUsageId;
extern const uint32_t Web_ClearAllData_mC84D1C3802BE2DB69DC6BEF683399EA0B89DD092_MetadataUsageId;
extern const uint32_t Web_CreateMaterial_mC1EAB14D163166ED8FEDF05DFFC3281B7BE90012_MetadataUsageId;
extern const uint32_t Web_CreateMaterial_mF6009E6F4CB95447C58F2D0E14E5FC22681ECF29_MetadataUsageId;
extern const uint32_t Web_CreateTexture_m02FAB345739C3E91F76CA9CEDE9130A3993EFFF9_MetadataUsageId;
extern const uint32_t Web_CreateTexture_m210998CB0F096B4058D2B6F53A1D238500428D0F_MetadataUsageId;
extern const uint32_t Web_CreateVideoMaterial_mBDFC31FE1992719604DDF0B85426019584AD09A0_MetadataUsageId;
extern const uint32_t Web_CreateWebView_m5E8104DD2965378BE8C97402E107E7546315E6AF_MetadataUsageId;
extern const uint32_t Web_CreateWebView_m8B08CB5C160A4654978AC73251CB67A02B42123C_MetadataUsageId;
extern const uint32_t Web_SetIgnoreCertificateErrors_m01CD07269B4A9BE20F2345D388D32DFE777D024D_MetadataUsageId;
extern const uint32_t Web_SetPluginFactory_m1527026227BF82549853FB75F7B4EEC3D42844A3_MetadataUsageId;
extern const uint32_t Web_SetStorageEnabled_m87AC297A3D512BDDD8EA94094F50AA98B2FB28D1_MetadataUsageId;
extern const uint32_t Web_SetTouchScreenKeyboardEnabled_m3C4DCB372B442BB5B00A16FF0CCE956A3F0ACBE5_MetadataUsageId;
extern const uint32_t Web_SetUserAgent_m81E8A63E4C655A78D3450A3C71B1AF855C2FB9FD_MetadataUsageId;
extern const uint32_t Web_SetUserAgent_mF826653DB13A0D34DC2124FB2D500A98F9ADADAE_MetadataUsageId;
extern const uint32_t Web__cctor_m4255D2FAD5F1DDBE1C796D2897AD8B00891FB152_MetadataUsageId;
extern const uint32_t iOSWebPluginRegistrant__registerPlugin_m98E28E87BB0767C63C4743032D4BBF43AF7D6B45_MetadataUsageId;
extern const uint32_t iOSWebPlugin_ClearAllData_m9CF79610643B53DFA117165C80E844DE38A2A0CB_MetadataUsageId;
extern const uint32_t iOSWebPlugin_CreateMaterial_mD0BA156B79822394ED29052B230B048490A80535_MetadataUsageId;
extern const uint32_t iOSWebPlugin_CreateTexture_mD25F885EF6C2E8F592CE0A56A4B2E3B1E0B51521_MetadataUsageId;
extern const uint32_t iOSWebPlugin_CreateVideoMaterial_mE1971DB87A3714F84A14BAA6851688718D01D812_MetadataUsageId;
extern const uint32_t iOSWebPlugin_SetStorageEnabled_m728EF223BC7409F803E01E1FFC6AF2D8D28C1DB0_MetadataUsageId;
extern const uint32_t iOSWebPlugin_SetUserAgent_mBB1489FDE2E8BA868AECCF611827BE624875DD01_MetadataUsageId;
extern const uint32_t iOSWebPlugin_SetUserAgent_mCAAD91CE4BB3D20E4254F8CC562C8F979F2A3115_MetadataUsageId;
extern const uint32_t iOSWebPlugin_get_Instance_mC64B31768F437596B7B1CCE1E5985E40120F5950_MetadataUsageId;
extern const uint32_t iOSWebView_CaptureScreenshot_m94715AFEE57D031EBE44263B7E1C731FCECDB494_MetadataUsageId;
extern const uint32_t iOSWebView_EnableViewUpdates_m424A35CE3FD5D14BF2F3A8C747C7DFFC4D4AEBB8_MetadataUsageId;
extern const uint32_t iOSWebView_GetFileUrlForBundleResource_m9A54FFD0A681D8EB28E48EBDE247644154361C07_MetadataUsageId;
extern const uint32_t iOSWebView_GetRawTextureData_m724F3BD2B20E2BA5F27D307FA05E991D717F03F2_MetadataUsageId;
extern const uint32_t iOSWebView_HandleVideoTextureChanged_mC5E0A578DF135854705EBB5CCC4CBC910A6B3E9C_MetadataUsageId;
extern const uint32_t iOSWebView_Init_mA534FFD1D34C3B1C00A43FA505834F953F84081B_MetadataUsageId;
extern const uint32_t iOSWebView_Instantiate_mC4AA8C60865B003F043F91746C78E4DAF21C4D98_MetadataUsageId;
extern const uint32_t iOSWebView__applyVideoTexture_m6A03627C0E9AB85569DA5F0EE2095F1F1CAC4929_MetadataUsageId;
extern const uint32_t iOSWebView__ctor_m05A3D1BEFF99158F973E6035C8E340608AB26BDC_MetadataUsageId;
extern const uint32_t iOSWebView__renderPluginOncePerFrame_m1776126DDF637676040A07BD422321BAE88DAE30_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct GraphicsDeviceTypeU5BU5D_t4560B66B4261C7B1422FAA96584DAADE6A935A86;
struct WebPluginTypeU5BU5D_tF25070ED5E0BC7C81ADE86F416BFFFD5472E14B8;


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
#ifndef JTOKEN_T6C6DB22A02D0045180421FAC02F14BC51584FEEF_H
#define JTOKEN_T6C6DB22A02D0045180421FAC02F14BC51584FEEF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Linq.JToken
struct  JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF  : public RuntimeObject
{
public:
	// Mapbox.Json.Linq.JContainer Mapbox.Json.Linq.JToken::_parent
	JContainer_tA9CC992B3CD076B563FF9DCE31C85E3415C6E4DC * ____parent_1;
	// Mapbox.Json.Linq.JToken Mapbox.Json.Linq.JToken::_previous
	JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF * ____previous_2;
	// Mapbox.Json.Linq.JToken Mapbox.Json.Linq.JToken::_next
	JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF * ____next_3;
	// System.Object Mapbox.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_4;

public:
	inline static int32_t get_offset_of__parent_1() { return static_cast<int32_t>(offsetof(JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF, ____parent_1)); }
	inline JContainer_tA9CC992B3CD076B563FF9DCE31C85E3415C6E4DC * get__parent_1() const { return ____parent_1; }
	inline JContainer_tA9CC992B3CD076B563FF9DCE31C85E3415C6E4DC ** get_address_of__parent_1() { return &____parent_1; }
	inline void set__parent_1(JContainer_tA9CC992B3CD076B563FF9DCE31C85E3415C6E4DC * value)
	{
		____parent_1 = value;
		Il2CppCodeGenWriteBarrier((&____parent_1), value);
	}

	inline static int32_t get_offset_of__previous_2() { return static_cast<int32_t>(offsetof(JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF, ____previous_2)); }
	inline JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF * get__previous_2() const { return ____previous_2; }
	inline JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF ** get_address_of__previous_2() { return &____previous_2; }
	inline void set__previous_2(JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF * value)
	{
		____previous_2 = value;
		Il2CppCodeGenWriteBarrier((&____previous_2), value);
	}

	inline static int32_t get_offset_of__next_3() { return static_cast<int32_t>(offsetof(JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF, ____next_3)); }
	inline JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF * get__next_3() const { return ____next_3; }
	inline JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF ** get_address_of__next_3() { return &____next_3; }
	inline void set__next_3(JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF * value)
	{
		____next_3 = value;
		Il2CppCodeGenWriteBarrier((&____next_3), value);
	}

	inline static int32_t get_offset_of__annotations_4() { return static_cast<int32_t>(offsetof(JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF, ____annotations_4)); }
	inline RuntimeObject * get__annotations_4() const { return ____annotations_4; }
	inline RuntimeObject ** get_address_of__annotations_4() { return &____annotations_4; }
	inline void set__annotations_4(RuntimeObject * value)
	{
		____annotations_4 = value;
		Il2CppCodeGenWriteBarrier((&____annotations_4), value);
	}
};

struct JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF_StaticFields
{
public:
	// Mapbox.Json.Linq.JTokenEqualityComparer Mapbox.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t30FC9F8353DDF66A7D936FAD58992C4305C1FD7E * ____equalityComparer_0;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* ___BooleanTypes_5;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* ___NumberTypes_6;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* ___StringTypes_7;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* ___GuidTypes_8;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* ___TimeSpanTypes_9;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* ___UriTypes_10;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* ___CharTypes_11;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* ___DateTimeTypes_12;
	// Mapbox.Json.Linq.JTokenType[] Mapbox.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* ___BytesTypes_13;

public:
	inline static int32_t get_offset_of__equalityComparer_0() { return static_cast<int32_t>(offsetof(JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF_StaticFields, ____equalityComparer_0)); }
	inline JTokenEqualityComparer_t30FC9F8353DDF66A7D936FAD58992C4305C1FD7E * get__equalityComparer_0() const { return ____equalityComparer_0; }
	inline JTokenEqualityComparer_t30FC9F8353DDF66A7D936FAD58992C4305C1FD7E ** get_address_of__equalityComparer_0() { return &____equalityComparer_0; }
	inline void set__equalityComparer_0(JTokenEqualityComparer_t30FC9F8353DDF66A7D936FAD58992C4305C1FD7E * value)
	{
		____equalityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&____equalityComparer_0), value);
	}

	inline static int32_t get_offset_of_BooleanTypes_5() { return static_cast<int32_t>(offsetof(JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF_StaticFields, ___BooleanTypes_5)); }
	inline JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* get_BooleanTypes_5() const { return ___BooleanTypes_5; }
	inline JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10** get_address_of_BooleanTypes_5() { return &___BooleanTypes_5; }
	inline void set_BooleanTypes_5(JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* value)
	{
		___BooleanTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___BooleanTypes_5), value);
	}

	inline static int32_t get_offset_of_NumberTypes_6() { return static_cast<int32_t>(offsetof(JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF_StaticFields, ___NumberTypes_6)); }
	inline JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* get_NumberTypes_6() const { return ___NumberTypes_6; }
	inline JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10** get_address_of_NumberTypes_6() { return &___NumberTypes_6; }
	inline void set_NumberTypes_6(JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* value)
	{
		___NumberTypes_6 = value;
		Il2CppCodeGenWriteBarrier((&___NumberTypes_6), value);
	}

	inline static int32_t get_offset_of_StringTypes_7() { return static_cast<int32_t>(offsetof(JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF_StaticFields, ___StringTypes_7)); }
	inline JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* get_StringTypes_7() const { return ___StringTypes_7; }
	inline JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10** get_address_of_StringTypes_7() { return &___StringTypes_7; }
	inline void set_StringTypes_7(JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* value)
	{
		___StringTypes_7 = value;
		Il2CppCodeGenWriteBarrier((&___StringTypes_7), value);
	}

	inline static int32_t get_offset_of_GuidTypes_8() { return static_cast<int32_t>(offsetof(JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF_StaticFields, ___GuidTypes_8)); }
	inline JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* get_GuidTypes_8() const { return ___GuidTypes_8; }
	inline JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10** get_address_of_GuidTypes_8() { return &___GuidTypes_8; }
	inline void set_GuidTypes_8(JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* value)
	{
		___GuidTypes_8 = value;
		Il2CppCodeGenWriteBarrier((&___GuidTypes_8), value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_9() { return static_cast<int32_t>(offsetof(JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF_StaticFields, ___TimeSpanTypes_9)); }
	inline JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* get_TimeSpanTypes_9() const { return ___TimeSpanTypes_9; }
	inline JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10** get_address_of_TimeSpanTypes_9() { return &___TimeSpanTypes_9; }
	inline void set_TimeSpanTypes_9(JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* value)
	{
		___TimeSpanTypes_9 = value;
		Il2CppCodeGenWriteBarrier((&___TimeSpanTypes_9), value);
	}

	inline static int32_t get_offset_of_UriTypes_10() { return static_cast<int32_t>(offsetof(JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF_StaticFields, ___UriTypes_10)); }
	inline JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* get_UriTypes_10() const { return ___UriTypes_10; }
	inline JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10** get_address_of_UriTypes_10() { return &___UriTypes_10; }
	inline void set_UriTypes_10(JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* value)
	{
		___UriTypes_10 = value;
		Il2CppCodeGenWriteBarrier((&___UriTypes_10), value);
	}

	inline static int32_t get_offset_of_CharTypes_11() { return static_cast<int32_t>(offsetof(JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF_StaticFields, ___CharTypes_11)); }
	inline JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* get_CharTypes_11() const { return ___CharTypes_11; }
	inline JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10** get_address_of_CharTypes_11() { return &___CharTypes_11; }
	inline void set_CharTypes_11(JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* value)
	{
		___CharTypes_11 = value;
		Il2CppCodeGenWriteBarrier((&___CharTypes_11), value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_12() { return static_cast<int32_t>(offsetof(JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF_StaticFields, ___DateTimeTypes_12)); }
	inline JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* get_DateTimeTypes_12() const { return ___DateTimeTypes_12; }
	inline JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10** get_address_of_DateTimeTypes_12() { return &___DateTimeTypes_12; }
	inline void set_DateTimeTypes_12(JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* value)
	{
		___DateTimeTypes_12 = value;
		Il2CppCodeGenWriteBarrier((&___DateTimeTypes_12), value);
	}

	inline static int32_t get_offset_of_BytesTypes_13() { return static_cast<int32_t>(offsetof(JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF_StaticFields, ___BytesTypes_13)); }
	inline JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* get_BytesTypes_13() const { return ___BytesTypes_13; }
	inline JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10** get_address_of_BytesTypes_13() { return &___BytesTypes_13; }
	inline void set_BytesTypes_13(JTokenTypeU5BU5D_t324B5166323271C27A6B1F0200AB69B4AE0CAA10* value)
	{
		___BytesTypes_13 = value;
		Il2CppCodeGenWriteBarrier((&___BytesTypes_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JTOKEN_T6C6DB22A02D0045180421FAC02F14BC51584FEEF_H
#ifndef RESPONSEHELPER_T1D3F6F23A965CA2B1E2CDD0A4BFF16F387D1555F_H
#define RESPONSEHELPER_T1D3F6F23A965CA2B1E2CDD0A4BFF16F387D1555F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Proyecto26.ResponseHelper
struct  ResponseHelper_t1D3F6F23A965CA2B1E2CDD0A4BFF16F387D1555F  : public RuntimeObject
{
public:
	// UnityEngine.Networking.UnityWebRequest Proyecto26.ResponseHelper::<Request>k__BackingField
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CRequestU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CRequestU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ResponseHelper_t1D3F6F23A965CA2B1E2CDD0A4BFF16F387D1555F, ___U3CRequestU3Ek__BackingField_0)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CRequestU3Ek__BackingField_0() const { return ___U3CRequestU3Ek__BackingField_0; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CRequestU3Ek__BackingField_0() { return &___U3CRequestU3Ek__BackingField_0; }
	inline void set_U3CRequestU3Ek__BackingField_0(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CRequestU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRequestU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPONSEHELPER_T1D3F6F23A965CA2B1E2CDD0A4BFF16F387D1555F_H
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
#ifndef DICTIONARY_2_T931BF283048C4E74FC063C3036E5F3FE328861FC_H
#define DICTIONARY_2_T931BF283048C4E74FC063C3036E5F3FE328861FC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___entries_1)); }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___keys_7)); }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___values_8)); }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T931BF283048C4E74FC063C3036E5F3FE328861FC_H
#ifndef LIST_1_TE8032E48C661C350FF9550E9063D595C0AB25CD3_H
#define LIST_1_TE8032E48C661C350FF9550E9063D595C0AB25CD3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TE8032E48C661C350FF9550E9063D595C0AB25CD3_H
#ifndef LIST_1_T3C4F493AD36BE7F2EEDD54D8C0A784299FD3E32D_H
#define LIST_1_T3C4F493AD36BE7F2EEDD54D8C0A784299FD3E32D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Rendering.GraphicsDeviceType>
struct  List_1_t3C4F493AD36BE7F2EEDD54D8C0A784299FD3E32D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GraphicsDeviceTypeU5BU5D_t4560B66B4261C7B1422FAA96584DAADE6A935A86* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3C4F493AD36BE7F2EEDD54D8C0A784299FD3E32D, ____items_1)); }
	inline GraphicsDeviceTypeU5BU5D_t4560B66B4261C7B1422FAA96584DAADE6A935A86* get__items_1() const { return ____items_1; }
	inline GraphicsDeviceTypeU5BU5D_t4560B66B4261C7B1422FAA96584DAADE6A935A86** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GraphicsDeviceTypeU5BU5D_t4560B66B4261C7B1422FAA96584DAADE6A935A86* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3C4F493AD36BE7F2EEDD54D8C0A784299FD3E32D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3C4F493AD36BE7F2EEDD54D8C0A784299FD3E32D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3C4F493AD36BE7F2EEDD54D8C0A784299FD3E32D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t3C4F493AD36BE7F2EEDD54D8C0A784299FD3E32D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GraphicsDeviceTypeU5BU5D_t4560B66B4261C7B1422FAA96584DAADE6A935A86* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3C4F493AD36BE7F2EEDD54D8C0A784299FD3E32D_StaticFields, ____emptyArray_5)); }
	inline GraphicsDeviceTypeU5BU5D_t4560B66B4261C7B1422FAA96584DAADE6A935A86* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GraphicsDeviceTypeU5BU5D_t4560B66B4261C7B1422FAA96584DAADE6A935A86** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GraphicsDeviceTypeU5BU5D_t4560B66B4261C7B1422FAA96584DAADE6A935A86* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3C4F493AD36BE7F2EEDD54D8C0A784299FD3E32D_H
#ifndef EVENTARGS_T8E6CA180BE0E56674C6407011A94BAF7C757352E_H
#define EVENTARGS_T8E6CA180BE0E56674C6407011A94BAF7C757352E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T8E6CA180BE0E56674C6407011A94BAF7C757352E_H
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
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
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
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
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
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
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
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
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef TASKCOMPLETIONSOURCE_1_T99FE296FC744F35118789383C0C0F3156E38E240_H
#define TASKCOMPLETIONSOURCE_1_T99FE296FC744F35118789383C0C0F3156E38E240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct  TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240, ___m_task_0)); }
	inline Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKCOMPLETIONSOURCE_1_T99FE296FC744F35118789383C0C0F3156E38E240_H
#ifndef TASKCOMPLETIONSOURCE_1_TB4013FB3A5C28FCEF0646F3ABE1C6F7C35A30C72_H
#define TASKCOMPLETIONSOURCE_1_TB4013FB3A5C28FCEF0646F3ABE1C6F7C35A30C72_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskCompletionSource`1<System.Byte[]>
struct  TaskCompletionSource_1_tB4013FB3A5C28FCEF0646F3ABE1C6F7C35A30C72  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t2ED0F6929D1C02BC2CEF49AC8D20FFCA4E41D648 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_tB4013FB3A5C28FCEF0646F3ABE1C6F7C35A30C72, ___m_task_0)); }
	inline Task_1_t2ED0F6929D1C02BC2CEF49AC8D20FFCA4E41D648 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t2ED0F6929D1C02BC2CEF49AC8D20FFCA4E41D648 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t2ED0F6929D1C02BC2CEF49AC8D20FFCA4E41D648 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKCOMPLETIONSOURCE_1_TB4013FB3A5C28FCEF0646F3ABE1C6F7C35A30C72_H
#ifndef TASKCOMPLETIONSOURCE_1_T740D6B4559A97E4E740413E4EB4F1F90A84CB317_H
#define TASKCOMPLETIONSOURCE_1_T740D6B4559A97E4E740413E4EB4F1F90A84CB317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct  TaskCompletionSource_1_t740D6B4559A97E4E740413E4EB4F1F90A84CB317  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t740D6B4559A97E4E740413E4EB4F1F90A84CB317, ___m_task_0)); }
	inline Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKCOMPLETIONSOURCE_1_T740D6B4559A97E4E740413E4EB4F1F90A84CB317_H
#ifndef TASKCOMPLETIONSOURCE_1_T8083C9684F0A5B46C36EB727C3A0F3739EA59EC4_H
#define TASKCOMPLETIONSOURCE_1_T8083C9684F0A5B46C36EB727C3A0F3739EA59EC4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Material>
struct  TaskCompletionSource_1_t8083C9684F0A5B46C36EB727C3A0F3739EA59EC4  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t74879D22F3CC6429D4D6FCC94A7597CE737CB1DA * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t8083C9684F0A5B46C36EB727C3A0F3739EA59EC4, ___m_task_0)); }
	inline Task_1_t74879D22F3CC6429D4D6FCC94A7597CE737CB1DA * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t74879D22F3CC6429D4D6FCC94A7597CE737CB1DA ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t74879D22F3CC6429D4D6FCC94A7597CE737CB1DA * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKCOMPLETIONSOURCE_1_T8083C9684F0A5B46C36EB727C3A0F3739EA59EC4_H
#ifndef TASKCOMPLETIONSOURCE_1_TBBC53B913B9FA8D229904EF7E262A97A678D57AA_H
#define TASKCOMPLETIONSOURCE_1_TBBC53B913B9FA8D229904EF7E262A97A678D57AA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Texture2D>
struct  TaskCompletionSource_1_tBBC53B913B9FA8D229904EF7E262A97A678D57AA  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tB68DBA6DA1120A65465275E18B4DD57CA6580BB1 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_tBBC53B913B9FA8D229904EF7E262A97A678D57AA, ___m_task_0)); }
	inline Task_1_tB68DBA6DA1120A65465275E18B4DD57CA6580BB1 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tB68DBA6DA1120A65465275E18B4DD57CA6580BB1 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tB68DBA6DA1120A65465275E18B4DD57CA6580BB1 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKCOMPLETIONSOURCE_1_TBBC53B913B9FA8D229904EF7E262A97A678D57AA_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef ANDROIDJAVAOBJECT_T5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_H
#define ANDROIDJAVAOBJECT_T5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVAOBJECT_T5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_H
#ifndef YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#define YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifndef USER_TC17190F58E7AF577BC179A3103A3D3F299F3B0C7_H
#define USER_TC17190F58E7AF577BC179A3103A3D3F299F3B0C7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// User
struct  User_tC17190F58E7AF577BC179A3103A3D3F299F3B0C7  : public RuntimeObject
{
public:
	// System.String User::longLink
	String_t* ___longLink_0;
	// System.String User::shortLink
	String_t* ___shortLink_1;

public:
	inline static int32_t get_offset_of_longLink_0() { return static_cast<int32_t>(offsetof(User_tC17190F58E7AF577BC179A3103A3D3F299F3B0C7, ___longLink_0)); }
	inline String_t* get_longLink_0() const { return ___longLink_0; }
	inline String_t** get_address_of_longLink_0() { return &___longLink_0; }
	inline void set_longLink_0(String_t* value)
	{
		___longLink_0 = value;
		Il2CppCodeGenWriteBarrier((&___longLink_0), value);
	}

	inline static int32_t get_offset_of_shortLink_1() { return static_cast<int32_t>(offsetof(User_tC17190F58E7AF577BC179A3103A3D3F299F3B0C7, ___shortLink_1)); }
	inline String_t* get_shortLink_1() const { return ___shortLink_1; }
	inline String_t** get_address_of_shortLink_1() { return &___shortLink_1; }
	inline void set_shortLink_1(String_t* value)
	{
		___shortLink_1 = value;
		Il2CppCodeGenWriteBarrier((&___shortLink_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USER_TC17190F58E7AF577BC179A3103A3D3F299F3B0C7_H
#ifndef BRIDGEMESSAGE_TC26A17AE8856C3B00DDF35B7C28A95583F34096F_H
#define BRIDGEMESSAGE_TC26A17AE8856C3B00DDF35B7C28A95583F34096F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.BridgeMessage
struct  BridgeMessage_tC26A17AE8856C3B00DDF35B7C28A95583F34096F  : public RuntimeObject
{
public:
	// System.String Vuplex.WebView.BridgeMessage::type
	String_t* ___type_0;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(BridgeMessage_tC26A17AE8856C3B00DDF35B7C28A95583F34096F, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BRIDGEMESSAGE_TC26A17AE8856C3B00DDF35B7C28A95583F34096F_H
#ifndef MOCKWEBPLUGIN_T99272A529401AD5952F2575D14546B41B7129706_H
#define MOCKWEBPLUGIN_T99272A529401AD5952F2575D14546B41B7129706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.MockWebPlugin
struct  MockWebPlugin_t99272A529401AD5952F2575D14546B41B7129706  : public RuntimeObject
{
public:

public:
};

struct MockWebPlugin_t99272A529401AD5952F2575D14546B41B7129706_StaticFields
{
public:
	// Vuplex.WebView.MockWebPlugin Vuplex.WebView.MockWebPlugin::_instance
	MockWebPlugin_t99272A529401AD5952F2575D14546B41B7129706 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(MockWebPlugin_t99272A529401AD5952F2575D14546B41B7129706_StaticFields, ____instance_0)); }
	inline MockWebPlugin_t99272A529401AD5952F2575D14546B41B7129706 * get__instance_0() const { return ____instance_0; }
	inline MockWebPlugin_t99272A529401AD5952F2575D14546B41B7129706 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(MockWebPlugin_t99272A529401AD5952F2575D14546B41B7129706 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((&____instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOCKWEBPLUGIN_T99272A529401AD5952F2575D14546B41B7129706_H
#ifndef U3CU3EC__DISPLAYCLASS3_0_T609464E30C31F6B2BCBEDF4822C0E5B556F1E31C_H
#define U3CU3EC__DISPLAYCLASS3_0_T609464E30C31F6B2BCBEDF4822C0E5B556F1E31C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.MockWebPlugin_<>c__DisplayClass3_0
struct  U3CU3Ec__DisplayClass3_0_t609464E30C31F6B2BCBEDF4822C0E5B556F1E31C  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.Texture2D> Vuplex.WebView.MockWebPlugin_<>c__DisplayClass3_0::callback
	Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77 * ___callback_0;
	// System.Single Vuplex.WebView.MockWebPlugin_<>c__DisplayClass3_0::width
	float ___width_1;
	// System.Single Vuplex.WebView.MockWebPlugin_<>c__DisplayClass3_0::height
	float ___height_2;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t609464E30C31F6B2BCBEDF4822C0E5B556F1E31C, ___callback_0)); }
	inline Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((&___callback_0), value);
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t609464E30C31F6B2BCBEDF4822C0E5B556F1E31C, ___width_1)); }
	inline float get_width_1() const { return ___width_1; }
	inline float* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(float value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t609464E30C31F6B2BCBEDF4822C0E5B556F1E31C, ___height_2)); }
	inline float get_height_2() const { return ___height_2; }
	inline float* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(float value)
	{
		___height_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS3_0_T609464E30C31F6B2BCBEDF4822C0E5B556F1E31C_H
#ifndef U3CU3EC__DISPLAYCLASS4_0_T1631F9BFCBE1AAE6137CCDF19A1B094DE211CCA7_H
#define U3CU3EC__DISPLAYCLASS4_0_T1631F9BFCBE1AAE6137CCDF19A1B094DE211CCA7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.MockWebPlugin_<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_t1631F9BFCBE1AAE6137CCDF19A1B094DE211CCA7  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.Material> Vuplex.WebView.MockWebPlugin_<>c__DisplayClass4_0::callback
	Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * ___callback_0;
	// UnityEngine.Material Vuplex.WebView.MockWebPlugin_<>c__DisplayClass4_0::material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t1631F9BFCBE1AAE6137CCDF19A1B094DE211CCA7, ___callback_0)); }
	inline Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((&___callback_0), value);
	}

	inline static int32_t get_offset_of_material_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t1631F9BFCBE1AAE6137CCDF19A1B094DE211CCA7, ___material_1)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_material_1() const { return ___material_1; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_material_1() { return &___material_1; }
	inline void set_material_1(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___material_1 = value;
		Il2CppCodeGenWriteBarrier((&___material_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS4_0_T1631F9BFCBE1AAE6137CCDF19A1B094DE211CCA7_H
#ifndef SERIALIZABLERECT_T19F9715A9F171DBD3B54FD4FF5C3580682B02B7E_H
#define SERIALIZABLERECT_T19F9715A9F171DBD3B54FD4FF5C3580682B02B7E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.SerializableRect
struct  SerializableRect_t19F9715A9F171DBD3B54FD4FF5C3580682B02B7E  : public RuntimeObject
{
public:
	// System.Single Vuplex.WebView.SerializableRect::left
	float ___left_0;
	// System.Single Vuplex.WebView.SerializableRect::top
	float ___top_1;
	// System.Single Vuplex.WebView.SerializableRect::width
	float ___width_2;
	// System.Single Vuplex.WebView.SerializableRect::height
	float ___height_3;

public:
	inline static int32_t get_offset_of_left_0() { return static_cast<int32_t>(offsetof(SerializableRect_t19F9715A9F171DBD3B54FD4FF5C3580682B02B7E, ___left_0)); }
	inline float get_left_0() const { return ___left_0; }
	inline float* get_address_of_left_0() { return &___left_0; }
	inline void set_left_0(float value)
	{
		___left_0 = value;
	}

	inline static int32_t get_offset_of_top_1() { return static_cast<int32_t>(offsetof(SerializableRect_t19F9715A9F171DBD3B54FD4FF5C3580682B02B7E, ___top_1)); }
	inline float get_top_1() const { return ___top_1; }
	inline float* get_address_of_top_1() { return &___top_1; }
	inline void set_top_1(float value)
	{
		___top_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(SerializableRect_t19F9715A9F171DBD3B54FD4FF5C3580682B02B7E, ___width_2)); }
	inline float get_width_2() const { return ___width_2; }
	inline float* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(float value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(SerializableRect_t19F9715A9F171DBD3B54FD4FF5C3580682B02B7E, ___height_3)); }
	inline float get_height_3() const { return ___height_3; }
	inline float* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(float value)
	{
		___height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLERECT_T19F9715A9F171DBD3B54FD4FF5C3580682B02B7E_H
#ifndef URLACTION_TCA6BE253E1E21B9F04482433075BF19498E4CC58_H
#define URLACTION_TCA6BE253E1E21B9F04482433075BF19498E4CC58_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.UrlAction
struct  UrlAction_tCA6BE253E1E21B9F04482433075BF19498E4CC58  : public RuntimeObject
{
public:
	// System.String Vuplex.WebView.UrlAction::Url
	String_t* ___Url_0;
	// System.String Vuplex.WebView.UrlAction::Title
	String_t* ___Title_1;
	// System.String Vuplex.WebView.UrlAction::Type
	String_t* ___Type_2;

public:
	inline static int32_t get_offset_of_Url_0() { return static_cast<int32_t>(offsetof(UrlAction_tCA6BE253E1E21B9F04482433075BF19498E4CC58, ___Url_0)); }
	inline String_t* get_Url_0() const { return ___Url_0; }
	inline String_t** get_address_of_Url_0() { return &___Url_0; }
	inline void set_Url_0(String_t* value)
	{
		___Url_0 = value;
		Il2CppCodeGenWriteBarrier((&___Url_0), value);
	}

	inline static int32_t get_offset_of_Title_1() { return static_cast<int32_t>(offsetof(UrlAction_tCA6BE253E1E21B9F04482433075BF19498E4CC58, ___Title_1)); }
	inline String_t* get_Title_1() const { return ___Title_1; }
	inline String_t** get_address_of_Title_1() { return &___Title_1; }
	inline void set_Title_1(String_t* value)
	{
		___Title_1 = value;
		Il2CppCodeGenWriteBarrier((&___Title_1), value);
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(UrlAction_tCA6BE253E1E21B9F04482433075BF19498E4CC58, ___Type_2)); }
	inline String_t* get_Type_2() const { return ___Type_2; }
	inline String_t** get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(String_t* value)
	{
		___Type_2 = value;
		Il2CppCodeGenWriteBarrier((&___Type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URLACTION_TCA6BE253E1E21B9F04482433075BF19498E4CC58_H
#ifndef URLACTIONTYPE_TC1BDC328D886CB352E1EA46985A8D220FE1D0CAA_H
#define URLACTIONTYPE_TC1BDC328D886CB352E1EA46985A8D220FE1D0CAA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.UrlActionType
struct  UrlActionType_tC1BDC328D886CB352E1EA46985A8D220FE1D0CAA  : public RuntimeObject
{
public:

public:
};

struct UrlActionType_tC1BDC328D886CB352E1EA46985A8D220FE1D0CAA_StaticFields
{
public:
	// System.String Vuplex.WebView.UrlActionType::Load
	String_t* ___Load_0;
	// System.String Vuplex.WebView.UrlActionType::PushState
	String_t* ___PushState_1;
	// System.String Vuplex.WebView.UrlActionType::ReplaceState
	String_t* ___ReplaceState_2;
	// System.String Vuplex.WebView.UrlActionType::HashChange
	String_t* ___HashChange_3;

public:
	inline static int32_t get_offset_of_Load_0() { return static_cast<int32_t>(offsetof(UrlActionType_tC1BDC328D886CB352E1EA46985A8D220FE1D0CAA_StaticFields, ___Load_0)); }
	inline String_t* get_Load_0() const { return ___Load_0; }
	inline String_t** get_address_of_Load_0() { return &___Load_0; }
	inline void set_Load_0(String_t* value)
	{
		___Load_0 = value;
		Il2CppCodeGenWriteBarrier((&___Load_0), value);
	}

	inline static int32_t get_offset_of_PushState_1() { return static_cast<int32_t>(offsetof(UrlActionType_tC1BDC328D886CB352E1EA46985A8D220FE1D0CAA_StaticFields, ___PushState_1)); }
	inline String_t* get_PushState_1() const { return ___PushState_1; }
	inline String_t** get_address_of_PushState_1() { return &___PushState_1; }
	inline void set_PushState_1(String_t* value)
	{
		___PushState_1 = value;
		Il2CppCodeGenWriteBarrier((&___PushState_1), value);
	}

	inline static int32_t get_offset_of_ReplaceState_2() { return static_cast<int32_t>(offsetof(UrlActionType_tC1BDC328D886CB352E1EA46985A8D220FE1D0CAA_StaticFields, ___ReplaceState_2)); }
	inline String_t* get_ReplaceState_2() const { return ___ReplaceState_2; }
	inline String_t** get_address_of_ReplaceState_2() { return &___ReplaceState_2; }
	inline void set_ReplaceState_2(String_t* value)
	{
		___ReplaceState_2 = value;
		Il2CppCodeGenWriteBarrier((&___ReplaceState_2), value);
	}

	inline static int32_t get_offset_of_HashChange_3() { return static_cast<int32_t>(offsetof(UrlActionType_tC1BDC328D886CB352E1EA46985A8D220FE1D0CAA_StaticFields, ___HashChange_3)); }
	inline String_t* get_HashChange_3() const { return ___HashChange_3; }
	inline String_t** get_address_of_HashChange_3() { return &___HashChange_3; }
	inline void set_HashChange_3(String_t* value)
	{
		___HashChange_3 = value;
		Il2CppCodeGenWriteBarrier((&___HashChange_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URLACTIONTYPE_TC1BDC328D886CB352E1EA46985A8D220FE1D0CAA_H
#ifndef UTILS_T0411B2EC25B9166DD31786C442D8998366B359F6_H
#define UTILS_T0411B2EC25B9166DD31786C442D8998366B359F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.Utils
struct  Utils_t0411B2EC25B9166DD31786C442D8998366B359F6  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTILS_T0411B2EC25B9166DD31786C442D8998366B359F6_H
#ifndef U3CU3EC_T3D21D2F6E9B7BA79F5978D9FB6626874F47959ED_H
#define U3CU3EC_T3D21D2F6E9B7BA79F5978D9FB6626874F47959ED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.Utils_<>c
struct  U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED_StaticFields
{
public:
	// Vuplex.WebView.Utils_<>c Vuplex.WebView.Utils_<>c::<>9
	U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Rendering.GraphicsDeviceType,System.String> Vuplex.WebView.Utils_<>c::<>9__2_0
	Func_2_t3AB8FFCCD295F3CB6B51AB07C8ADE78F376F3FBC * ___U3CU3E9__2_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Func_2_t3AB8FFCCD295F3CB6B51AB07C8ADE78F376F3FBC * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Func_2_t3AB8FFCCD295F3CB6B51AB07C8ADE78F376F3FBC ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Func_2_t3AB8FFCCD295F3CB6B51AB07C8ADE78F376F3FBC * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__2_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T3D21D2F6E9B7BA79F5978D9FB6626874F47959ED_H
#ifndef VIDEO_T6B8E9A22E411B9AA2BD787CD8A8018AA4A5C641F_H
#define VIDEO_T6B8E9A22E411B9AA2BD787CD8A8018AA4A5C641F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.Video
struct  Video_t6B8E9A22E411B9AA2BD787CD8A8018AA4A5C641F  : public RuntimeObject
{
public:
	// System.String Vuplex.WebView.Video::videoUrl
	String_t* ___videoUrl_0;

public:
	inline static int32_t get_offset_of_videoUrl_0() { return static_cast<int32_t>(offsetof(Video_t6B8E9A22E411B9AA2BD787CD8A8018AA4A5C641F, ___videoUrl_0)); }
	inline String_t* get_videoUrl_0() const { return ___videoUrl_0; }
	inline String_t** get_address_of_videoUrl_0() { return &___videoUrl_0; }
	inline void set_videoUrl_0(String_t* value)
	{
		___videoUrl_0 = value;
		Il2CppCodeGenWriteBarrier((&___videoUrl_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEO_T6B8E9A22E411B9AA2BD787CD8A8018AA4A5C641F_H
#ifndef VIDEORECTCHANGEDMESSAGEVALUE_TED80428A115FBC63F543DBF5E5507C0D46A82EF8_H
#define VIDEORECTCHANGEDMESSAGEVALUE_TED80428A115FBC63F543DBF5E5507C0D46A82EF8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.VideoRectChangedMessageValue
struct  VideoRectChangedMessageValue_tED80428A115FBC63F543DBF5E5507C0D46A82EF8  : public RuntimeObject
{
public:
	// Vuplex.WebView.SerializableRect Vuplex.WebView.VideoRectChangedMessageValue::rect
	SerializableRect_t19F9715A9F171DBD3B54FD4FF5C3580682B02B7E * ___rect_0;

public:
	inline static int32_t get_offset_of_rect_0() { return static_cast<int32_t>(offsetof(VideoRectChangedMessageValue_tED80428A115FBC63F543DBF5E5507C0D46A82EF8, ___rect_0)); }
	inline SerializableRect_t19F9715A9F171DBD3B54FD4FF5C3580682B02B7E * get_rect_0() const { return ___rect_0; }
	inline SerializableRect_t19F9715A9F171DBD3B54FD4FF5C3580682B02B7E ** get_address_of_rect_0() { return &___rect_0; }
	inline void set_rect_0(SerializableRect_t19F9715A9F171DBD3B54FD4FF5C3580682B02B7E * value)
	{
		___rect_0 = value;
		Il2CppCodeGenWriteBarrier((&___rect_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEORECTCHANGEDMESSAGEVALUE_TED80428A115FBC63F543DBF5E5507C0D46A82EF8_H
#ifndef WEB_T6DE347E64D72CDC023EF35528D4E3D09ECF3B014_H
#define WEB_T6DE347E64D72CDC023EF35528D4E3D09ECF3B014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.Web
struct  Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014  : public RuntimeObject
{
public:

public:
};

struct Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_StaticFields
{
public:
	// Vuplex.WebView.WebPluginFactory Vuplex.WebView.Web::_pluginFactory
	WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 * ____pluginFactory_0;

public:
	inline static int32_t get_offset_of__pluginFactory_0() { return static_cast<int32_t>(offsetof(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_StaticFields, ____pluginFactory_0)); }
	inline WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 * get__pluginFactory_0() const { return ____pluginFactory_0; }
	inline WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 ** get_address_of__pluginFactory_0() { return &____pluginFactory_0; }
	inline void set__pluginFactory_0(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 * value)
	{
		____pluginFactory_0 = value;
		Il2CppCodeGenWriteBarrier((&____pluginFactory_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEB_T6DE347E64D72CDC023EF35528D4E3D09ECF3B014_H
#ifndef WEBPLUGINFACTORY_T08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_H
#define WEBPLUGINFACTORY_T08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.WebPluginFactory
struct  WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3  : public RuntimeObject
{
public:
	// System.Boolean Vuplex.WebView.WebPluginFactory::_mockWarningLogged
	bool ____mockWarningLogged_5;

public:
	inline static int32_t get_offset_of__mockWarningLogged_5() { return static_cast<int32_t>(offsetof(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3, ____mockWarningLogged_5)); }
	inline bool get__mockWarningLogged_5() const { return ____mockWarningLogged_5; }
	inline bool* get_address_of__mockWarningLogged_5() { return &____mockWarningLogged_5; }
	inline void set__mockWarningLogged_5(bool value)
	{
		____mockWarningLogged_5 = value;
	}
};

struct WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_StaticFields
{
public:
	// Vuplex.WebView.IWebPlugin Vuplex.WebView.WebPluginFactory::_androidPlugin
	RuntimeObject* ____androidPlugin_0;
	// Vuplex.WebView.IWebPlugin Vuplex.WebView.WebPluginFactory::_androidGeckoPlugin
	RuntimeObject* ____androidGeckoPlugin_1;
	// Vuplex.WebView.IWebPlugin Vuplex.WebView.WebPluginFactory::_iosPlugin
	RuntimeObject* ____iosPlugin_2;
	// Vuplex.WebView.IWebPlugin Vuplex.WebView.WebPluginFactory::_macPlugin
	RuntimeObject* ____macPlugin_3;
	// Vuplex.WebView.IWebPlugin Vuplex.WebView.WebPluginFactory::_mockPlugin
	RuntimeObject* ____mockPlugin_4;
	// Vuplex.WebView.IWebPlugin Vuplex.WebView.WebPluginFactory::_uwpPlugin
	RuntimeObject* ____uwpPlugin_7;
	// Vuplex.WebView.IWebPlugin Vuplex.WebView.WebPluginFactory::_windowsPlugin
	RuntimeObject* ____windowsPlugin_8;

public:
	inline static int32_t get_offset_of__androidPlugin_0() { return static_cast<int32_t>(offsetof(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_StaticFields, ____androidPlugin_0)); }
	inline RuntimeObject* get__androidPlugin_0() const { return ____androidPlugin_0; }
	inline RuntimeObject** get_address_of__androidPlugin_0() { return &____androidPlugin_0; }
	inline void set__androidPlugin_0(RuntimeObject* value)
	{
		____androidPlugin_0 = value;
		Il2CppCodeGenWriteBarrier((&____androidPlugin_0), value);
	}

	inline static int32_t get_offset_of__androidGeckoPlugin_1() { return static_cast<int32_t>(offsetof(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_StaticFields, ____androidGeckoPlugin_1)); }
	inline RuntimeObject* get__androidGeckoPlugin_1() const { return ____androidGeckoPlugin_1; }
	inline RuntimeObject** get_address_of__androidGeckoPlugin_1() { return &____androidGeckoPlugin_1; }
	inline void set__androidGeckoPlugin_1(RuntimeObject* value)
	{
		____androidGeckoPlugin_1 = value;
		Il2CppCodeGenWriteBarrier((&____androidGeckoPlugin_1), value);
	}

	inline static int32_t get_offset_of__iosPlugin_2() { return static_cast<int32_t>(offsetof(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_StaticFields, ____iosPlugin_2)); }
	inline RuntimeObject* get__iosPlugin_2() const { return ____iosPlugin_2; }
	inline RuntimeObject** get_address_of__iosPlugin_2() { return &____iosPlugin_2; }
	inline void set__iosPlugin_2(RuntimeObject* value)
	{
		____iosPlugin_2 = value;
		Il2CppCodeGenWriteBarrier((&____iosPlugin_2), value);
	}

	inline static int32_t get_offset_of__macPlugin_3() { return static_cast<int32_t>(offsetof(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_StaticFields, ____macPlugin_3)); }
	inline RuntimeObject* get__macPlugin_3() const { return ____macPlugin_3; }
	inline RuntimeObject** get_address_of__macPlugin_3() { return &____macPlugin_3; }
	inline void set__macPlugin_3(RuntimeObject* value)
	{
		____macPlugin_3 = value;
		Il2CppCodeGenWriteBarrier((&____macPlugin_3), value);
	}

	inline static int32_t get_offset_of__mockPlugin_4() { return static_cast<int32_t>(offsetof(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_StaticFields, ____mockPlugin_4)); }
	inline RuntimeObject* get__mockPlugin_4() const { return ____mockPlugin_4; }
	inline RuntimeObject** get_address_of__mockPlugin_4() { return &____mockPlugin_4; }
	inline void set__mockPlugin_4(RuntimeObject* value)
	{
		____mockPlugin_4 = value;
		Il2CppCodeGenWriteBarrier((&____mockPlugin_4), value);
	}

	inline static int32_t get_offset_of__uwpPlugin_7() { return static_cast<int32_t>(offsetof(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_StaticFields, ____uwpPlugin_7)); }
	inline RuntimeObject* get__uwpPlugin_7() const { return ____uwpPlugin_7; }
	inline RuntimeObject** get_address_of__uwpPlugin_7() { return &____uwpPlugin_7; }
	inline void set__uwpPlugin_7(RuntimeObject* value)
	{
		____uwpPlugin_7 = value;
		Il2CppCodeGenWriteBarrier((&____uwpPlugin_7), value);
	}

	inline static int32_t get_offset_of__windowsPlugin_8() { return static_cast<int32_t>(offsetof(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_StaticFields, ____windowsPlugin_8)); }
	inline RuntimeObject* get__windowsPlugin_8() const { return ____windowsPlugin_8; }
	inline RuntimeObject** get_address_of__windowsPlugin_8() { return &____windowsPlugin_8; }
	inline void set__windowsPlugin_8(RuntimeObject* value)
	{
		____windowsPlugin_8 = value;
		Il2CppCodeGenWriteBarrier((&____windowsPlugin_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBPLUGINFACTORY_T08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_H
#ifndef U3CU3EC__DISPLAYCLASS48_0_T57C19DEA26A6D9E8471D89B5826654B5DB26CF07_H
#define U3CU3EC__DISPLAYCLASS48_0_T57C19DEA26A6D9E8471D89B5826654B5DB26CF07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.WebViewPrefab_<>c__DisplayClass48_0
struct  U3CU3Ec__DisplayClass48_0_t57C19DEA26A6D9E8471D89B5826654B5DB26CF07  : public RuntimeObject
{
public:
	// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> Vuplex.WebView.WebViewPrefab_<>c__DisplayClass48_0::taskCompletionSource
	TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 * ___taskCompletionSource_0;

public:
	inline static int32_t get_offset_of_taskCompletionSource_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass48_0_t57C19DEA26A6D9E8471D89B5826654B5DB26CF07, ___taskCompletionSource_0)); }
	inline TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 * get_taskCompletionSource_0() const { return ___taskCompletionSource_0; }
	inline TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 ** get_address_of_taskCompletionSource_0() { return &___taskCompletionSource_0; }
	inline void set_taskCompletionSource_0(TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 * value)
	{
		___taskCompletionSource_0 = value;
		Il2CppCodeGenWriteBarrier((&___taskCompletionSource_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS48_0_T57C19DEA26A6D9E8471D89B5826654B5DB26CF07_H
#ifndef U3CU3EC__DISPLAYCLASS74_0_T69C3D3EF646836EF8F76986BDA91ABB8868CB338_H
#define U3CU3EC__DISPLAYCLASS74_0_T69C3D3EF646836EF8F76986BDA91ABB8868CB338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.WebViewPrefab_<>c__DisplayClass74_0
struct  U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338  : public RuntimeObject
{
public:
	// Vuplex.WebView.WebViewPrefab Vuplex.WebView.WebViewPrefab_<>c__DisplayClass74_0::<>4__this
	WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * ___U3CU3E4__this_0;
	// Vuplex.WebView.IWebView Vuplex.WebView.WebViewPrefab_<>c__DisplayClass74_0::webView
	RuntimeObject* ___webView_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338, ___U3CU3E4__this_0)); }
	inline WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_0), value);
	}

	inline static int32_t get_offset_of_webView_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338, ___webView_1)); }
	inline RuntimeObject* get_webView_1() const { return ___webView_1; }
	inline RuntimeObject** get_address_of_webView_1() { return &___webView_1; }
	inline void set_webView_1(RuntimeObject* value)
	{
		___webView_1 = value;
		Il2CppCodeGenWriteBarrier((&___webView_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS74_0_T69C3D3EF646836EF8F76986BDA91ABB8868CB338_H
#ifndef IOSWEBPLUGIN_T3F6012737ECBFFA85629B51D865636C3910F79CC_H
#define IOSWEBPLUGIN_T3F6012737ECBFFA85629B51D865636C3910F79CC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.iOSWebPlugin
struct  iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC  : public RuntimeObject
{
public:

public:
};

struct iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC_StaticFields
{
public:
	// Vuplex.WebView.iOSWebPlugin Vuplex.WebView.iOSWebPlugin::_instance
	iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC_StaticFields, ____instance_0)); }
	inline iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC * get__instance_0() const { return ____instance_0; }
	inline iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((&____instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOSWEBPLUGIN_T3F6012737ECBFFA85629B51D865636C3910F79CC_H
#ifndef U3CU3EC__DISPLAYCLASS4_0_TC23435C025706E1F31BDD4A3EF77E2881D555CCC_H
#define U3CU3EC__DISPLAYCLASS4_0_TC23435C025706E1F31BDD4A3EF77E2881D555CCC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.iOSWebPlugin_<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_tC23435C025706E1F31BDD4A3EF77E2881D555CCC  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.Material> Vuplex.WebView.iOSWebPlugin_<>c__DisplayClass4_0::callback
	Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tC23435C025706E1F31BDD4A3EF77E2881D555CCC, ___callback_0)); }
	inline Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((&___callback_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS4_0_TC23435C025706E1F31BDD4A3EF77E2881D555CCC_H
#ifndef U3CU3EC__DISPLAYCLASS5_0_TCB62563B9978E5FDC80A03614670C70495DA69E0_H
#define U3CU3EC__DISPLAYCLASS5_0_TCB62563B9978E5FDC80A03614670C70495DA69E0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.iOSWebPlugin_<>c__DisplayClass5_0
struct  U3CU3Ec__DisplayClass5_0_tCB62563B9978E5FDC80A03614670C70495DA69E0  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.Material> Vuplex.WebView.iOSWebPlugin_<>c__DisplayClass5_0::callback
	Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tCB62563B9978E5FDC80A03614670C70495DA69E0, ___callback_0)); }
	inline Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((&___callback_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS5_0_TCB62563B9978E5FDC80A03614670C70495DA69E0_H
#ifndef IOSWEBPLUGINREGISTRANT_TDF5D0FD240416F1E577AC322A1520EA86C69E00F_H
#define IOSWEBPLUGINREGISTRANT_TDF5D0FD240416F1E577AC322A1520EA86C69E00F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.iOSWebPluginRegistrant
struct  iOSWebPluginRegistrant_tDF5D0FD240416F1E577AC322A1520EA86C69E00F  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOSWEBPLUGINREGISTRANT_TDF5D0FD240416F1E577AC322A1520EA86C69E00F_H
#ifndef U3C_RENDERPLUGINONCEPERFRAMEU3ED__20_TA70D3EF053EFA34A193BA376BE028A94FD4B37E7_H
#define U3C_RENDERPLUGINONCEPERFRAMEU3ED__20_TA70D3EF053EFA34A193BA376BE028A94FD4B37E7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.iOSWebView_<_renderPluginOncePerFrame>d__20
struct  U3C_renderPluginOncePerFrameU3Ed__20_tA70D3EF053EFA34A193BA376BE028A94FD4B37E7  : public RuntimeObject
{
public:
	// System.Int32 Vuplex.WebView.iOSWebView_<_renderPluginOncePerFrame>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Vuplex.WebView.iOSWebView_<_renderPluginOncePerFrame>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Vuplex.WebView.iOSWebView Vuplex.WebView.iOSWebView_<_renderPluginOncePerFrame>d__20::<>4__this
	iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3C_renderPluginOncePerFrameU3Ed__20_tA70D3EF053EFA34A193BA376BE028A94FD4B37E7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3C_renderPluginOncePerFrameU3Ed__20_tA70D3EF053EFA34A193BA376BE028A94FD4B37E7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3C_renderPluginOncePerFrameU3Ed__20_tA70D3EF053EFA34A193BA376BE028A94FD4B37E7, ___U3CU3E4__this_2)); }
	inline iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3C_RENDERPLUGINONCEPERFRAMEU3ED__20_TA70D3EF053EFA34A193BA376BE028A94FD4B37E7_H
#ifndef JCONTAINER_TA9CC992B3CD076B563FF9DCE31C85E3415C6E4DC_H
#define JCONTAINER_TA9CC992B3CD076B563FF9DCE31C85E3415C6E4DC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Linq.JContainer
struct  JContainer_tA9CC992B3CD076B563FF9DCE31C85E3415C6E4DC  : public JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF
{
public:
	// System.Object Mapbox.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_14;

public:
	inline static int32_t get_offset_of__syncRoot_14() { return static_cast<int32_t>(offsetof(JContainer_tA9CC992B3CD076B563FF9DCE31C85E3415C6E4DC, ____syncRoot_14)); }
	inline RuntimeObject * get__syncRoot_14() const { return ____syncRoot_14; }
	inline RuntimeObject ** get_address_of__syncRoot_14() { return &____syncRoot_14; }
	inline void set__syncRoot_14(RuntimeObject * value)
	{
		____syncRoot_14 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JCONTAINER_TA9CC992B3CD076B563FF9DCE31C85E3415C6E4DC_H
#ifndef VECTOR2D_T2ADEAAB6D75A1150A40E77811906A94E955E5483_H
#define VECTOR2D_T2ADEAAB6D75A1150A40E77811906A94E955E5483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Utils.Vector2d
struct  Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483 
{
public:
	// System.Double Mapbox.Utils.Vector2d::x
	double ___x_1;
	// System.Double Mapbox.Utils.Vector2d::y
	double ___y_2;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483, ___x_1)); }
	inline double get_x_1() const { return ___x_1; }
	inline double* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(double value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483, ___y_2)); }
	inline double get_y_2() const { return ___y_2; }
	inline double* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(double value)
	{
		___y_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2D_T2ADEAAB6D75A1150A40E77811906A94E955E5483_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#define BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifndef CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#define CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifndef DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#define DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#define INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
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
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifndef RECT_T35B976DE901B5423C11705E156938EA27AB402CE_H
#define RECT_T35B976DE901B5423C11705E156938EA27AB402CE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T35B976DE901B5423C11705E156938EA27AB402CE_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#define VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifndef WAITFORENDOFFRAME_T75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA_H
#define WAITFORENDOFFRAME_T75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORENDOFFRAME_T75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA_H
#ifndef POPUPREQUESTEDEVENTARGS_T493D57AB29C528E5680638A9B8027332DC37EFB5_H
#define POPUPREQUESTEDEVENTARGS_T493D57AB29C528E5680638A9B8027332DC37EFB5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.PopupRequestedEventArgs
struct  PopupRequestedEventArgs_t493D57AB29C528E5680638A9B8027332DC37EFB5  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.String Vuplex.WebView.PopupRequestedEventArgs::Url
	String_t* ___Url_1;
	// Vuplex.WebView.IWebView Vuplex.WebView.PopupRequestedEventArgs::WebView
	RuntimeObject* ___WebView_2;

public:
	inline static int32_t get_offset_of_Url_1() { return static_cast<int32_t>(offsetof(PopupRequestedEventArgs_t493D57AB29C528E5680638A9B8027332DC37EFB5, ___Url_1)); }
	inline String_t* get_Url_1() const { return ___Url_1; }
	inline String_t** get_address_of_Url_1() { return &___Url_1; }
	inline void set_Url_1(String_t* value)
	{
		___Url_1 = value;
		Il2CppCodeGenWriteBarrier((&___Url_1), value);
	}

	inline static int32_t get_offset_of_WebView_2() { return static_cast<int32_t>(offsetof(PopupRequestedEventArgs_t493D57AB29C528E5680638A9B8027332DC37EFB5, ___WebView_2)); }
	inline RuntimeObject* get_WebView_2() const { return ___WebView_2; }
	inline RuntimeObject** get_address_of_WebView_2() { return &___WebView_2; }
	inline void set_WebView_2(RuntimeObject* value)
	{
		___WebView_2 = value;
		Il2CppCodeGenWriteBarrier((&___WebView_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POPUPREQUESTEDEVENTARGS_T493D57AB29C528E5680638A9B8027332DC37EFB5_H
#ifndef SCRIPTDIALOGEVENTARGS_T25DAE7F9AF9FED595F29370665DFF1ADA9C8C992_H
#define SCRIPTDIALOGEVENTARGS_T25DAE7F9AF9FED595F29370665DFF1ADA9C8C992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.ScriptDialogEventArgs
struct  ScriptDialogEventArgs_t25DAE7F9AF9FED595F29370665DFF1ADA9C8C992  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.String Vuplex.WebView.ScriptDialogEventArgs::Message
	String_t* ___Message_1;
	// System.Action Vuplex.WebView.ScriptDialogEventArgs::Continue
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___Continue_2;

public:
	inline static int32_t get_offset_of_Message_1() { return static_cast<int32_t>(offsetof(ScriptDialogEventArgs_t25DAE7F9AF9FED595F29370665DFF1ADA9C8C992, ___Message_1)); }
	inline String_t* get_Message_1() const { return ___Message_1; }
	inline String_t** get_address_of_Message_1() { return &___Message_1; }
	inline void set_Message_1(String_t* value)
	{
		___Message_1 = value;
		Il2CppCodeGenWriteBarrier((&___Message_1), value);
	}

	inline static int32_t get_offset_of_Continue_2() { return static_cast<int32_t>(offsetof(ScriptDialogEventArgs_t25DAE7F9AF9FED595F29370665DFF1ADA9C8C992, ___Continue_2)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_Continue_2() const { return ___Continue_2; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_Continue_2() { return &___Continue_2; }
	inline void set_Continue_2(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___Continue_2 = value;
		Il2CppCodeGenWriteBarrier((&___Continue_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTDIALOGEVENTARGS_T25DAE7F9AF9FED595F29370665DFF1ADA9C8C992_H
#ifndef SETTINGSEXCEPTION_TBE79F9DDD1C6AEF6FCF54CA6270DB5BAF5029987_H
#define SETTINGSEXCEPTION_TBE79F9DDD1C6AEF6FCF54CA6270DB5BAF5029987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.SettingsException
struct  SettingsException_tBE79F9DDD1C6AEF6FCF54CA6270DB5BAF5029987  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGSEXCEPTION_TBE79F9DDD1C6AEF6FCF54CA6270DB5BAF5029987_H
#ifndef STRINGBRIDGEMESSAGE_TCE04AF76CE8FFB5504BBB6667549113FEAF288D7_H
#define STRINGBRIDGEMESSAGE_TCE04AF76CE8FFB5504BBB6667549113FEAF288D7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.StringBridgeMessage
struct  StringBridgeMessage_tCE04AF76CE8FFB5504BBB6667549113FEAF288D7  : public BridgeMessage_tC26A17AE8856C3B00DDF35B7C28A95583F34096F
{
public:
	// System.String Vuplex.WebView.StringBridgeMessage::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(StringBridgeMessage_tCE04AF76CE8FFB5504BBB6667549113FEAF288D7, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBRIDGEMESSAGE_TCE04AF76CE8FFB5504BBB6667549113FEAF288D7_H
#ifndef STRINGWITHIDBRIDGEMESSAGE_T10C56D13CB847CBB01F6F2882BC34AD1DA50BE02_H
#define STRINGWITHIDBRIDGEMESSAGE_T10C56D13CB847CBB01F6F2882BC34AD1DA50BE02_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.StringWithIdBridgeMessage
struct  StringWithIdBridgeMessage_t10C56D13CB847CBB01F6F2882BC34AD1DA50BE02  : public BridgeMessage_tC26A17AE8856C3B00DDF35B7C28A95583F34096F
{
public:
	// System.String Vuplex.WebView.StringWithIdBridgeMessage::id
	String_t* ___id_1;
	// System.String Vuplex.WebView.StringWithIdBridgeMessage::value
	String_t* ___value_2;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(StringWithIdBridgeMessage_t10C56D13CB847CBB01F6F2882BC34AD1DA50BE02, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier((&___id_1), value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(StringWithIdBridgeMessage_t10C56D13CB847CBB01F6F2882BC34AD1DA50BE02, ___value_2)); }
	inline String_t* get_value_2() const { return ___value_2; }
	inline String_t** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(String_t* value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((&___value_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGWITHIDBRIDGEMESSAGE_T10C56D13CB847CBB01F6F2882BC34AD1DA50BE02_H
#ifndef URLCHANGEDEVENTARGS_TDB743B0064FEB99171B5C0674C472A33DAE627D6_H
#define URLCHANGEDEVENTARGS_TDB743B0064FEB99171B5C0674C472A33DAE627D6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.UrlChangedEventArgs
struct  UrlChangedEventArgs_tDB743B0064FEB99171B5C0674C472A33DAE627D6  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.String Vuplex.WebView.UrlChangedEventArgs::Url
	String_t* ___Url_1;
	// System.String Vuplex.WebView.UrlChangedEventArgs::Title
	String_t* ___Title_2;
	// System.String Vuplex.WebView.UrlChangedEventArgs::Type
	String_t* ___Type_3;

public:
	inline static int32_t get_offset_of_Url_1() { return static_cast<int32_t>(offsetof(UrlChangedEventArgs_tDB743B0064FEB99171B5C0674C472A33DAE627D6, ___Url_1)); }
	inline String_t* get_Url_1() const { return ___Url_1; }
	inline String_t** get_address_of_Url_1() { return &___Url_1; }
	inline void set_Url_1(String_t* value)
	{
		___Url_1 = value;
		Il2CppCodeGenWriteBarrier((&___Url_1), value);
	}

	inline static int32_t get_offset_of_Title_2() { return static_cast<int32_t>(offsetof(UrlChangedEventArgs_tDB743B0064FEB99171B5C0674C472A33DAE627D6, ___Title_2)); }
	inline String_t* get_Title_2() const { return ___Title_2; }
	inline String_t** get_address_of_Title_2() { return &___Title_2; }
	inline void set_Title_2(String_t* value)
	{
		___Title_2 = value;
		Il2CppCodeGenWriteBarrier((&___Title_2), value);
	}

	inline static int32_t get_offset_of_Type_3() { return static_cast<int32_t>(offsetof(UrlChangedEventArgs_tDB743B0064FEB99171B5C0674C472A33DAE627D6, ___Type_3)); }
	inline String_t* get_Type_3() const { return ___Type_3; }
	inline String_t** get_address_of_Type_3() { return &___Type_3; }
	inline void set_Type_3(String_t* value)
	{
		___Type_3 = value;
		Il2CppCodeGenWriteBarrier((&___Type_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URLCHANGEDEVENTARGS_TDB743B0064FEB99171B5C0674C472A33DAE627D6_H
#ifndef URLCHANGEDMESSAGE_T941E9B50F99CCBC5877E374293C451EEFB0CDF1A_H
#define URLCHANGEDMESSAGE_T941E9B50F99CCBC5877E374293C451EEFB0CDF1A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.UrlChangedMessage
struct  UrlChangedMessage_t941E9B50F99CCBC5877E374293C451EEFB0CDF1A  : public BridgeMessage_tC26A17AE8856C3B00DDF35B7C28A95583F34096F
{
public:
	// Vuplex.WebView.UrlAction Vuplex.WebView.UrlChangedMessage::urlAction
	UrlAction_tCA6BE253E1E21B9F04482433075BF19498E4CC58 * ___urlAction_1;

public:
	inline static int32_t get_offset_of_urlAction_1() { return static_cast<int32_t>(offsetof(UrlChangedMessage_t941E9B50F99CCBC5877E374293C451EEFB0CDF1A, ___urlAction_1)); }
	inline UrlAction_tCA6BE253E1E21B9F04482433075BF19498E4CC58 * get_urlAction_1() const { return ___urlAction_1; }
	inline UrlAction_tCA6BE253E1E21B9F04482433075BF19498E4CC58 ** get_address_of_urlAction_1() { return &___urlAction_1; }
	inline void set_urlAction_1(UrlAction_tCA6BE253E1E21B9F04482433075BF19498E4CC58 * value)
	{
		___urlAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___urlAction_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URLCHANGEDMESSAGE_T941E9B50F99CCBC5877E374293C451EEFB0CDF1A_H
#ifndef VIDEORECTCHANGEDMESSAGE_T3790F03C69380AA72CA014FF1EBA30C90B769E14_H
#define VIDEORECTCHANGEDMESSAGE_T3790F03C69380AA72CA014FF1EBA30C90B769E14_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.VideoRectChangedMessage
struct  VideoRectChangedMessage_t3790F03C69380AA72CA014FF1EBA30C90B769E14  : public BridgeMessage_tC26A17AE8856C3B00DDF35B7C28A95583F34096F
{
public:
	// Vuplex.WebView.VideoRectChangedMessageValue Vuplex.WebView.VideoRectChangedMessage::value
	VideoRectChangedMessageValue_tED80428A115FBC63F543DBF5E5507C0D46A82EF8 * ___value_1;

public:
	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(VideoRectChangedMessage_t3790F03C69380AA72CA014FF1EBA30C90B769E14, ___value_1)); }
	inline VideoRectChangedMessageValue_tED80428A115FBC63F543DBF5E5507C0D46A82EF8 * get_value_1() const { return ___value_1; }
	inline VideoRectChangedMessageValue_tED80428A115FBC63F543DBF5E5507C0D46A82EF8 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(VideoRectChangedMessageValue_tED80428A115FBC63F543DBF5E5507C0D46A82EF8 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEORECTCHANGEDMESSAGE_T3790F03C69380AA72CA014FF1EBA30C90B769E14_H
#ifndef WEBVIEWOPTIONS_T211B797F8936C87922B344DBE0C560B13B4A816C_H
#define WEBVIEWOPTIONS_T211B797F8936C87922B344DBE0C560B13B4A816C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.WebViewOptions
struct  WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C 
{
public:
	// System.Boolean Vuplex.WebView.WebViewOptions::clickWithoutStealingFocus
	bool ___clickWithoutStealingFocus_0;
	// System.Boolean Vuplex.WebView.WebViewOptions::disableVideo
	bool ___disableVideo_1;
	// Vuplex.WebView.WebPluginType[] Vuplex.WebView.WebViewOptions::preferredPlugins
	WebPluginTypeU5BU5D_tF25070ED5E0BC7C81ADE86F416BFFFD5472E14B8* ___preferredPlugins_2;

public:
	inline static int32_t get_offset_of_clickWithoutStealingFocus_0() { return static_cast<int32_t>(offsetof(WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C, ___clickWithoutStealingFocus_0)); }
	inline bool get_clickWithoutStealingFocus_0() const { return ___clickWithoutStealingFocus_0; }
	inline bool* get_address_of_clickWithoutStealingFocus_0() { return &___clickWithoutStealingFocus_0; }
	inline void set_clickWithoutStealingFocus_0(bool value)
	{
		___clickWithoutStealingFocus_0 = value;
	}

	inline static int32_t get_offset_of_disableVideo_1() { return static_cast<int32_t>(offsetof(WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C, ___disableVideo_1)); }
	inline bool get_disableVideo_1() const { return ___disableVideo_1; }
	inline bool* get_address_of_disableVideo_1() { return &___disableVideo_1; }
	inline void set_disableVideo_1(bool value)
	{
		___disableVideo_1 = value;
	}

	inline static int32_t get_offset_of_preferredPlugins_2() { return static_cast<int32_t>(offsetof(WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C, ___preferredPlugins_2)); }
	inline WebPluginTypeU5BU5D_tF25070ED5E0BC7C81ADE86F416BFFFD5472E14B8* get_preferredPlugins_2() const { return ___preferredPlugins_2; }
	inline WebPluginTypeU5BU5D_tF25070ED5E0BC7C81ADE86F416BFFFD5472E14B8** get_address_of_preferredPlugins_2() { return &___preferredPlugins_2; }
	inline void set_preferredPlugins_2(WebPluginTypeU5BU5D_tF25070ED5E0BC7C81ADE86F416BFFFD5472E14B8* value)
	{
		___preferredPlugins_2 = value;
		Il2CppCodeGenWriteBarrier((&___preferredPlugins_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuplex.WebView.WebViewOptions
struct WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C_marshaled_pinvoke
{
	int32_t ___clickWithoutStealingFocus_0;
	int32_t ___disableVideo_1;
	int32_t* ___preferredPlugins_2;
};
// Native definition for COM marshalling of Vuplex.WebView.WebViewOptions
struct WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C_marshaled_com
{
	int32_t ___clickWithoutStealingFocus_0;
	int32_t ___disableVideo_1;
	int32_t* ___preferredPlugins_2;
};
#endif // WEBVIEWOPTIONS_T211B797F8936C87922B344DBE0C560B13B4A816C_H
#ifndef WEBVIEWUNAVAILABLEEXCEPTION_TD560D304E48B8C3927F8ED93B647C9EDBE5D4B1B_H
#define WEBVIEWUNAVAILABLEEXCEPTION_TD560D304E48B8C3927F8ED93B647C9EDBE5D4B1B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.WebViewUnavailableException
struct  WebViewUnavailableException_tD560D304E48B8C3927F8ED93B647C9EDBE5D4B1B  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBVIEWUNAVAILABLEEXCEPTION_TD560D304E48B8C3927F8ED93B647C9EDBE5D4B1B_H
#ifndef JOBJECT_TDAD1F88FC97DFAE2821454F590A9F482AEF04739_H
#define JOBJECT_TDAD1F88FC97DFAE2821454F590A9F482AEF04739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Linq.JObject
struct  JObject_tDAD1F88FC97DFAE2821454F590A9F482AEF04739  : public JContainer_tA9CC992B3CD076B563FF9DCE31C85E3415C6E4DC
{
public:
	// Mapbox.Json.Linq.JPropertyKeyedCollection Mapbox.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t75AE42EF2C3F98F9DD9AE694E97484402C25F13D * ____properties_15;
	// System.ComponentModel.PropertyChangedEventHandler Mapbox.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * ___PropertyChanged_16;

public:
	inline static int32_t get_offset_of__properties_15() { return static_cast<int32_t>(offsetof(JObject_tDAD1F88FC97DFAE2821454F590A9F482AEF04739, ____properties_15)); }
	inline JPropertyKeyedCollection_t75AE42EF2C3F98F9DD9AE694E97484402C25F13D * get__properties_15() const { return ____properties_15; }
	inline JPropertyKeyedCollection_t75AE42EF2C3F98F9DD9AE694E97484402C25F13D ** get_address_of__properties_15() { return &____properties_15; }
	inline void set__properties_15(JPropertyKeyedCollection_t75AE42EF2C3F98F9DD9AE694E97484402C25F13D * value)
	{
		____properties_15 = value;
		Il2CppCodeGenWriteBarrier((&____properties_15), value);
	}

	inline static int32_t get_offset_of_PropertyChanged_16() { return static_cast<int32_t>(offsetof(JObject_tDAD1F88FC97DFAE2821454F590A9F482AEF04739, ___PropertyChanged_16)); }
	inline PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * get_PropertyChanged_16() const { return ___PropertyChanged_16; }
	inline PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 ** get_address_of_PropertyChanged_16() { return &___PropertyChanged_16; }
	inline void set_PropertyChanged_16(PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * value)
	{
		___PropertyChanged_16 = value;
		Il2CppCodeGenWriteBarrier((&___PropertyChanged_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOBJECT_TDAD1F88FC97DFAE2821454F590A9F482AEF04739_H
#ifndef JPROPERTY_T30557F21425BE7749994AB2C7E8AEC664BA98C51_H
#define JPROPERTY_T30557F21425BE7749994AB2C7E8AEC664BA98C51_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Linq.JProperty
struct  JProperty_t30557F21425BE7749994AB2C7E8AEC664BA98C51  : public JContainer_tA9CC992B3CD076B563FF9DCE31C85E3415C6E4DC
{
public:
	// Mapbox.Json.Linq.JProperty_JPropertyList Mapbox.Json.Linq.JProperty::_content
	JPropertyList_t1D68CA39DD5A11AB7CE85B6CD32B924C72516CE1 * ____content_15;
	// System.String Mapbox.Json.Linq.JProperty::_name
	String_t* ____name_16;

public:
	inline static int32_t get_offset_of__content_15() { return static_cast<int32_t>(offsetof(JProperty_t30557F21425BE7749994AB2C7E8AEC664BA98C51, ____content_15)); }
	inline JPropertyList_t1D68CA39DD5A11AB7CE85B6CD32B924C72516CE1 * get__content_15() const { return ____content_15; }
	inline JPropertyList_t1D68CA39DD5A11AB7CE85B6CD32B924C72516CE1 ** get_address_of__content_15() { return &____content_15; }
	inline void set__content_15(JPropertyList_t1D68CA39DD5A11AB7CE85B6CD32B924C72516CE1 * value)
	{
		____content_15 = value;
		Il2CppCodeGenWriteBarrier((&____content_15), value);
	}

	inline static int32_t get_offset_of__name_16() { return static_cast<int32_t>(offsetof(JProperty_t30557F21425BE7749994AB2C7E8AEC664BA98C51, ____name_16)); }
	inline String_t* get__name_16() const { return ____name_16; }
	inline String_t** get_address_of__name_16() { return &____name_16; }
	inline void set__name_16(String_t* value)
	{
		____name_16 = value;
		Il2CppCodeGenWriteBarrier((&____name_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JPROPERTY_T30557F21425BE7749994AB2C7E8AEC664BA98C51_H
#ifndef ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#define ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
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
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#define INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#ifndef INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#define INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifndef NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#define NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifndef TASK_T1F48C203E163126EBC69ACCA679D1A462DEE9EB2_H
#define TASK_T1F48C203E163126EBC69ACCA679D1A462DEE9EB2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task
struct  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_action_5), value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateObject_6), value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_taskScheduler_7), value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_parent_8), value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_continuationObject_28), value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_33)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_contingentProperties_33), value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_factory_3), value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCompletionSentinel_29), value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((&___s_currentActiveTasks_31), value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_activeTasksLock_32), value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCancelCallback_34), value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((&___s_createContingentProperties_35), value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_36)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((&___s_completedTask_36), value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsExceptionObservedByParentPredicate_37), value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((&___s_ecCallback_38), value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsTaskContinuationNullPredicate_39), value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___t_currentTask_0), value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((&___t_stackGuard_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_T1F48C203E163126EBC69ACCA679D1A462DEE9EB2_H
#ifndef COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#define COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
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
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef GRAPHICSDEVICETYPE_TA87720B0E7A15371E70249FC9F4EAE7644015552_H
#define GRAPHICSDEVICETYPE_TA87720B0E7A15371E70249FC9F4EAE7644015552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.GraphicsDeviceType
struct  GraphicsDeviceType_tA87720B0E7A15371E70249FC9F4EAE7644015552 
{
public:
	// System.Int32 UnityEngine.Rendering.GraphicsDeviceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GraphicsDeviceType_tA87720B0E7A15371E70249FC9F4EAE7644015552, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHICSDEVICETYPE_TA87720B0E7A15371E70249FC9F4EAE7644015552_H
#ifndef TEXTUREFORMAT_T7C6B5101554065C47682E592D1E26079D4EC2DCE_H
#define TEXTUREFORMAT_T7C6B5101554065C47682E592D1E26079D4EC2DCE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T7C6B5101554065C47682E592D1E26079D4EC2DCE_H
#ifndef CLICKEDEVENTARGS_T15D6CC25B940C4DE73028D179F1D002ABBC65B25_H
#define CLICKEDEVENTARGS_T15D6CC25B940C4DE73028D179F1D002ABBC65B25_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.ClickedEventArgs
struct  ClickedEventArgs_t15D6CC25B940C4DE73028D179F1D002ABBC65B25  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// UnityEngine.Vector2 Vuplex.WebView.ClickedEventArgs::Point
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Point_1;

public:
	inline static int32_t get_offset_of_Point_1() { return static_cast<int32_t>(offsetof(ClickedEventArgs_t15D6CC25B940C4DE73028D179F1D002ABBC65B25, ___Point_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_Point_1() const { return ___Point_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_Point_1() { return &___Point_1; }
	inline void set_Point_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___Point_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLICKEDEVENTARGS_T15D6CC25B940C4DE73028D179F1D002ABBC65B25_H
#ifndef DRAGMODE_TD566B7BE3883C352712D74EBFEFBAF52CA4688FA_H
#define DRAGMODE_TD566B7BE3883C352712D74EBFEFBAF52CA4688FA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.DragMode
struct  DragMode_tD566B7BE3883C352712D74EBFEFBAF52CA4688FA 
{
public:
	// System.Int32 Vuplex.WebView.DragMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DragMode_tD566B7BE3883C352712D74EBFEFBAF52CA4688FA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRAGMODE_TD566B7BE3883C352712D74EBFEFBAF52CA4688FA_H
#ifndef EVENTARGS_1_T264C9EC409E765DA460145D1F5251E6CEFA7D973_H
#define EVENTARGS_1_T264C9EC409E765DA460145D1F5251E6CEFA7D973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.EventArgs`1<UnityEngine.Rect>
struct  EventArgs_1_t264C9EC409E765DA460145D1F5251E6CEFA7D973  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// T Vuplex.WebView.EventArgs`1::<Value>k__BackingField
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___U3CValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(EventArgs_1_t264C9EC409E765DA460145D1F5251E6CEFA7D973, ___U3CValueU3Ek__BackingField_1)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_U3CValueU3Ek__BackingField_1() const { return ___U3CValueU3Ek__BackingField_1; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_U3CValueU3Ek__BackingField_1() { return &___U3CValueU3Ek__BackingField_1; }
	inline void set_U3CValueU3Ek__BackingField_1(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___U3CValueU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_1_T264C9EC409E765DA460145D1F5251E6CEFA7D973_H
#ifndef EVENTARGS_1_T9FFFE64CD86469F3303B155EE4D2AA8719A34E8F_H
#define EVENTARGS_1_T9FFFE64CD86469F3303B155EE4D2AA8719A34E8F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.EventArgs`1<UnityEngine.Vector2>
struct  EventArgs_1_t9FFFE64CD86469F3303B155EE4D2AA8719A34E8F  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// T Vuplex.WebView.EventArgs`1::<Value>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(EventArgs_1_t9FFFE64CD86469F3303B155EE4D2AA8719A34E8F, ___U3CValueU3Ek__BackingField_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CValueU3Ek__BackingField_1() const { return ___U3CValueU3Ek__BackingField_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CValueU3Ek__BackingField_1() { return &___U3CValueU3Ek__BackingField_1; }
	inline void set_U3CValueU3Ek__BackingField_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CValueU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_1_T9FFFE64CD86469F3303B155EE4D2AA8719A34E8F_H
#ifndef MOUSEBUTTON_T7A679A7E792E06090B97A44570F99AC84FC97FE2_H
#define MOUSEBUTTON_T7A679A7E792E06090B97A44570F99AC84FC97FE2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.MouseButton
struct  MouseButton_t7A679A7E792E06090B97A44570F99AC84FC97FE2 
{
public:
	// System.Int32 Vuplex.WebView.MouseButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MouseButton_t7A679A7E792E06090B97A44570F99AC84FC97FE2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOUSEBUTTON_T7A679A7E792E06090B97A44570F99AC84FC97FE2_H
#ifndef POPUPMODE_T8B8E50158B092E83425D3BAF73AEC895E4A65852_H
#define POPUPMODE_T8B8E50158B092E83425D3BAF73AEC895E4A65852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.PopupMode
struct  PopupMode_t8B8E50158B092E83425D3BAF73AEC895E4A65852 
{
public:
	// System.Int32 Vuplex.WebView.PopupMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PopupMode_t8B8E50158B092E83425D3BAF73AEC895E4A65852, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POPUPMODE_T8B8E50158B092E83425D3BAF73AEC895E4A65852_H
#ifndef PROGRESSCHANGETYPE_T27FA7BB74FEB31299344C6F99A700602E4053DE4_H
#define PROGRESSCHANGETYPE_T27FA7BB74FEB31299344C6F99A700602E4053DE4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.ProgressChangeType
struct  ProgressChangeType_t27FA7BB74FEB31299344C6F99A700602E4053DE4 
{
public:
	// System.Int32 Vuplex.WebView.ProgressChangeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProgressChangeType_t27FA7BB74FEB31299344C6F99A700602E4053DE4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROGRESSCHANGETYPE_T27FA7BB74FEB31299344C6F99A700602E4053DE4_H
#ifndef SCROLLEDEVENTARGS_T4DC4E49687FC1C4A753AD5C53DA266E1AAB24FC1_H
#define SCROLLEDEVENTARGS_T4DC4E49687FC1C4A753AD5C53DA266E1AAB24FC1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.ScrolledEventArgs
struct  ScrolledEventArgs_t4DC4E49687FC1C4A753AD5C53DA266E1AAB24FC1  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// UnityEngine.Vector2 Vuplex.WebView.ScrolledEventArgs::ScrollDelta
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___ScrollDelta_1;
	// UnityEngine.Vector2 Vuplex.WebView.ScrolledEventArgs::Point
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Point_2;

public:
	inline static int32_t get_offset_of_ScrollDelta_1() { return static_cast<int32_t>(offsetof(ScrolledEventArgs_t4DC4E49687FC1C4A753AD5C53DA266E1AAB24FC1, ___ScrollDelta_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_ScrollDelta_1() const { return ___ScrollDelta_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_ScrollDelta_1() { return &___ScrollDelta_1; }
	inline void set_ScrollDelta_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___ScrollDelta_1 = value;
	}

	inline static int32_t get_offset_of_Point_2() { return static_cast<int32_t>(offsetof(ScrolledEventArgs_t4DC4E49687FC1C4A753AD5C53DA266E1AAB24FC1, ___Point_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_Point_2() const { return ___Point_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_Point_2() { return &___Point_2; }
	inline void set_Point_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___Point_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLEDEVENTARGS_T4DC4E49687FC1C4A753AD5C53DA266E1AAB24FC1_H
#ifndef WEBPLUGINTYPE_T789F11EBAF49F25960825CD0895164A8D5488B88_H
#define WEBPLUGINTYPE_T789F11EBAF49F25960825CD0895164A8D5488B88_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.WebPluginType
struct  WebPluginType_t789F11EBAF49F25960825CD0895164A8D5488B88 
{
public:
	// System.Int32 Vuplex.WebView.WebPluginType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebPluginType_t789F11EBAF49F25960825CD0895164A8D5488B88, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBPLUGINTYPE_T789F11EBAF49F25960825CD0895164A8D5488B88_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#endif // MULTICASTDELEGATE_T_H
#ifndef TASK_1_TD6131FE3A3A2F1D58DB886B6CF31A2672B75B439_H
#define TASK_1_TD6131FE3A3A2F1D58DB886B6CF31A2672B75B439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.Boolean>
struct  Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439, ___m_result_40)); }
	inline bool get_m_result_40() const { return ___m_result_40; }
	inline bool* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(bool value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t90DBF289FBDBB845B0FA55E1773164F06FBDEA17 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t185FBBAFD46813778C35A8D4A5FA3AFB4FC0E14C * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t90DBF289FBDBB845B0FA55E1773164F06FBDEA17 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t90DBF289FBDBB845B0FA55E1773164F06FBDEA17 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t90DBF289FBDBB845B0FA55E1773164F06FBDEA17 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_41), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t185FBBAFD46813778C35A8D4A5FA3AFB4FC0E14C * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t185FBBAFD46813778C35A8D4A5FA3AFB4FC0E14C ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t185FBBAFD46813778C35A8D4A5FA3AFB4FC0E14C * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_TD6131FE3A3A2F1D58DB886B6CF31A2672B75B439_H
#ifndef TASK_1_T2ED0F6929D1C02BC2CEF49AC8D20FFCA4E41D648_H
#define TASK_1_T2ED0F6929D1C02BC2CEF49AC8D20FFCA4E41D648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.Byte[]>
struct  Task_1_t2ED0F6929D1C02BC2CEF49AC8D20FFCA4E41D648  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t2ED0F6929D1C02BC2CEF49AC8D20FFCA4E41D648, ___m_result_40)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_result_40() const { return ___m_result_40; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((&___m_result_40), value);
	}
};

struct Task_1_t2ED0F6929D1C02BC2CEF49AC8D20FFCA4E41D648_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tDA9941CADCE61F1EB85F1DE41AA9CE09BF9D4571 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t9CB84E28FC5B5E0E37F3BBD08DF62DF4AF38655B * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t2ED0F6929D1C02BC2CEF49AC8D20FFCA4E41D648_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tDA9941CADCE61F1EB85F1DE41AA9CE09BF9D4571 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tDA9941CADCE61F1EB85F1DE41AA9CE09BF9D4571 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tDA9941CADCE61F1EB85F1DE41AA9CE09BF9D4571 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_41), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t2ED0F6929D1C02BC2CEF49AC8D20FFCA4E41D648_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t9CB84E28FC5B5E0E37F3BBD08DF62DF4AF38655B * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t9CB84E28FC5B5E0E37F3BBD08DF62DF4AF38655B ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t9CB84E28FC5B5E0E37F3BBD08DF62DF4AF38655B * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T2ED0F6929D1C02BC2CEF49AC8D20FFCA4E41D648_H
#ifndef TASK_1_T4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286_H
#define TASK_1_T4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.String>
struct  Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286, ___m_result_40)); }
	inline String_t* get_m_result_40() const { return ___m_result_40; }
	inline String_t** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(String_t* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((&___m_result_40), value);
	}
};

struct Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tC464EE87A6CB7838666431AFB8761D134A690E8D * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tD5DD82F807AA57BEB7EC482428FCFADD3E3EDF93 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tC464EE87A6CB7838666431AFB8761D134A690E8D * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tC464EE87A6CB7838666431AFB8761D134A690E8D ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tC464EE87A6CB7838666431AFB8761D134A690E8D * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_41), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tD5DD82F807AA57BEB7EC482428FCFADD3E3EDF93 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tD5DD82F807AA57BEB7EC482428FCFADD3E3EDF93 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tD5DD82F807AA57BEB7EC482428FCFADD3E3EDF93 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286_H
#ifndef TASK_1_T74879D22F3CC6429D4D6FCC94A7597CE737CB1DA_H
#define TASK_1_T74879D22F3CC6429D4D6FCC94A7597CE737CB1DA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<UnityEngine.Material>
struct  Task_1_t74879D22F3CC6429D4D6FCC94A7597CE737CB1DA  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t74879D22F3CC6429D4D6FCC94A7597CE737CB1DA, ___m_result_40)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_result_40() const { return ___m_result_40; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((&___m_result_40), value);
	}
};

struct Task_1_t74879D22F3CC6429D4D6FCC94A7597CE737CB1DA_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t62B1A2DEDA6C0386D4E7A3281261C596F585E5EA * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tE955DB58474B66BDA48C9F14E8C706FFC7577035 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t74879D22F3CC6429D4D6FCC94A7597CE737CB1DA_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t62B1A2DEDA6C0386D4E7A3281261C596F585E5EA * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t62B1A2DEDA6C0386D4E7A3281261C596F585E5EA ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t62B1A2DEDA6C0386D4E7A3281261C596F585E5EA * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_41), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t74879D22F3CC6429D4D6FCC94A7597CE737CB1DA_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tE955DB58474B66BDA48C9F14E8C706FFC7577035 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tE955DB58474B66BDA48C9F14E8C706FFC7577035 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tE955DB58474B66BDA48C9F14E8C706FFC7577035 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T74879D22F3CC6429D4D6FCC94A7597CE737CB1DA_H
#ifndef TASK_1_TB68DBA6DA1120A65465275E18B4DD57CA6580BB1_H
#define TASK_1_TB68DBA6DA1120A65465275E18B4DD57CA6580BB1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<UnityEngine.Texture2D>
struct  Task_1_tB68DBA6DA1120A65465275E18B4DD57CA6580BB1  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tB68DBA6DA1120A65465275E18B4DD57CA6580BB1, ___m_result_40)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m_result_40() const { return ___m_result_40; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((&___m_result_40), value);
	}
};

struct Task_1_tB68DBA6DA1120A65465275E18B4DD57CA6580BB1_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t2EE78629BBF18B1CF7304E0AFAB7B9A14FB89F85 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t20866BD79DC2E522EB31BD617ECE5BBE8C21C27B * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tB68DBA6DA1120A65465275E18B4DD57CA6580BB1_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t2EE78629BBF18B1CF7304E0AFAB7B9A14FB89F85 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t2EE78629BBF18B1CF7304E0AFAB7B9A14FB89F85 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t2EE78629BBF18B1CF7304E0AFAB7B9A14FB89F85 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_41), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tB68DBA6DA1120A65465275E18B4DD57CA6580BB1_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t20866BD79DC2E522EB31BD617ECE5BBE8C21C27B * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t20866BD79DC2E522EB31BD617ECE5BBE8C21C27B ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t20866BD79DC2E522EB31BD617ECE5BBE8C21C27B * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_TB68DBA6DA1120A65465275E18B4DD57CA6580BB1_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#define MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#ifndef TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#define TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#ifndef POINTEREVENTARGS_TEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648_H
#define POINTEREVENTARGS_TEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.PointerEventArgs
struct  PointerEventArgs_tEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// Vuplex.WebView.MouseButton Vuplex.WebView.PointerEventArgs::Button
	int32_t ___Button_1;
	// System.Int32 Vuplex.WebView.PointerEventArgs::ClickCount
	int32_t ___ClickCount_2;
	// UnityEngine.Vector2 Vuplex.WebView.PointerEventArgs::Point
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Point_3;

public:
	inline static int32_t get_offset_of_Button_1() { return static_cast<int32_t>(offsetof(PointerEventArgs_tEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648, ___Button_1)); }
	inline int32_t get_Button_1() const { return ___Button_1; }
	inline int32_t* get_address_of_Button_1() { return &___Button_1; }
	inline void set_Button_1(int32_t value)
	{
		___Button_1 = value;
	}

	inline static int32_t get_offset_of_ClickCount_2() { return static_cast<int32_t>(offsetof(PointerEventArgs_tEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648, ___ClickCount_2)); }
	inline int32_t get_ClickCount_2() const { return ___ClickCount_2; }
	inline int32_t* get_address_of_ClickCount_2() { return &___ClickCount_2; }
	inline void set_ClickCount_2(int32_t value)
	{
		___ClickCount_2 = value;
	}

	inline static int32_t get_offset_of_Point_3() { return static_cast<int32_t>(offsetof(PointerEventArgs_tEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648, ___Point_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_Point_3() const { return ___Point_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_Point_3() { return &___Point_3; }
	inline void set_Point_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___Point_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTEREVENTARGS_TEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648_H
#ifndef POINTEREVENTOPTIONS_TF8E2802E8E41BFCFA793774039E07CE944BD2038_H
#define POINTEREVENTOPTIONS_TF8E2802E8E41BFCFA793774039E07CE944BD2038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.PointerEventOptions
struct  PointerEventOptions_tF8E2802E8E41BFCFA793774039E07CE944BD2038  : public RuntimeObject
{
public:
	// System.Int32 Vuplex.WebView.PointerEventOptions::ClickCount
	int32_t ___ClickCount_0;
	// Vuplex.WebView.MouseButton Vuplex.WebView.PointerEventOptions::Button
	int32_t ___Button_1;

public:
	inline static int32_t get_offset_of_ClickCount_0() { return static_cast<int32_t>(offsetof(PointerEventOptions_tF8E2802E8E41BFCFA793774039E07CE944BD2038, ___ClickCount_0)); }
	inline int32_t get_ClickCount_0() const { return ___ClickCount_0; }
	inline int32_t* get_address_of_ClickCount_0() { return &___ClickCount_0; }
	inline void set_ClickCount_0(int32_t value)
	{
		___ClickCount_0 = value;
	}

	inline static int32_t get_offset_of_Button_1() { return static_cast<int32_t>(offsetof(PointerEventOptions_tF8E2802E8E41BFCFA793774039E07CE944BD2038, ___Button_1)); }
	inline int32_t get_Button_1() const { return ___Button_1; }
	inline int32_t* get_address_of_Button_1() { return &___Button_1; }
	inline void set_Button_1(int32_t value)
	{
		___Button_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTEREVENTOPTIONS_TF8E2802E8E41BFCFA793774039E07CE944BD2038_H
#ifndef POINTEROPTIONS_T39172500A75A6A654D8E9DA2BE3CE2CEB33415C6_H
#define POINTEROPTIONS_T39172500A75A6A654D8E9DA2BE3CE2CEB33415C6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.PointerOptions
struct  PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6  : public RuntimeObject
{
public:
	// Vuplex.WebView.MouseButton Vuplex.WebView.PointerOptions::Button
	int32_t ___Button_0;
	// System.Int32 Vuplex.WebView.PointerOptions::ClickCount
	int32_t ___ClickCount_1;

public:
	inline static int32_t get_offset_of_Button_0() { return static_cast<int32_t>(offsetof(PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6, ___Button_0)); }
	inline int32_t get_Button_0() const { return ___Button_0; }
	inline int32_t* get_address_of_Button_0() { return &___Button_0; }
	inline void set_Button_0(int32_t value)
	{
		___Button_0 = value;
	}

	inline static int32_t get_offset_of_ClickCount_1() { return static_cast<int32_t>(offsetof(PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6, ___ClickCount_1)); }
	inline int32_t get_ClickCount_1() const { return ___ClickCount_1; }
	inline int32_t* get_address_of_ClickCount_1() { return &___ClickCount_1; }
	inline void set_ClickCount_1(int32_t value)
	{
		___ClickCount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTEROPTIONS_T39172500A75A6A654D8E9DA2BE3CE2CEB33415C6_H
#ifndef PROGRESSCHANGEDEVENTARGS_T89FBDCB348ABD3DF4D5B52ED48C20CBC3338E14E_H
#define PROGRESSCHANGEDEVENTARGS_T89FBDCB348ABD3DF4D5B52ED48C20CBC3338E14E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.ProgressChangedEventArgs
struct  ProgressChangedEventArgs_t89FBDCB348ABD3DF4D5B52ED48C20CBC3338E14E  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.Single Vuplex.WebView.ProgressChangedEventArgs::Progress
	float ___Progress_1;
	// Vuplex.WebView.ProgressChangeType Vuplex.WebView.ProgressChangedEventArgs::Type
	int32_t ___Type_2;

public:
	inline static int32_t get_offset_of_Progress_1() { return static_cast<int32_t>(offsetof(ProgressChangedEventArgs_t89FBDCB348ABD3DF4D5B52ED48C20CBC3338E14E, ___Progress_1)); }
	inline float get_Progress_1() const { return ___Progress_1; }
	inline float* get_address_of_Progress_1() { return &___Progress_1; }
	inline void set_Progress_1(float value)
	{
		___Progress_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(ProgressChangedEventArgs_t89FBDCB348ABD3DF4D5B52ED48C20CBC3338E14E, ___Type_2)); }
	inline int32_t get_Type_2() const { return ___Type_2; }
	inline int32_t* get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(int32_t value)
	{
		___Type_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROGRESSCHANGEDEVENTARGS_T89FBDCB348ABD3DF4D5B52ED48C20CBC3338E14E_H
#ifndef ACTION_T591D2A86165F896B4B800BB5C25CE18672A55579_H
#define ACTION_T591D2A86165F896B4B800BB5C25CE18672A55579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T591D2A86165F896B4B800BB5C25CE18672A55579_H
#ifndef ACTION_1_T65311BD7395CAEB1E9483E030F69FF580BCD5C80_H
#define ACTION_1_T65311BD7395CAEB1E9483E030F69FF580BCD5C80_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<Proyecto26.ResponseHelper>
struct  Action_1_t65311BD7395CAEB1E9483E030F69FF580BCD5C80  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T65311BD7395CAEB1E9483E030F69FF580BCD5C80_H
#ifndef ACTION_1_TAA0F894C98302D68F7D5034E8104E9AB4763CCAD_H
#define ACTION_1_TAA0F894C98302D68F7D5034E8104E9AB4763CCAD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Boolean>
struct  Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_TAA0F894C98302D68F7D5034E8104E9AB4763CCAD_H
#ifndef ACTION_1_TCFD7D0EFEF517D00FE88360104518B2070A270A2_H
#define ACTION_1_TCFD7D0EFEF517D00FE88360104518B2070A270A2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Byte[]>
struct  Action_1_tCFD7D0EFEF517D00FE88360104518B2070A270A2  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_TCFD7D0EFEF517D00FE88360104518B2070A270A2_H
#ifndef ACTION_1_T32A9EECF5D4397CC1B9A7C7079870875411B06D0_H
#define ACTION_1_T32A9EECF5D4397CC1B9A7C7079870875411B06D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.String>
struct  Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T32A9EECF5D4397CC1B9A7C7079870875411B06D0_H
#ifndef ACTION_1_T7D55CDBAF286DDE78372A2D88644D71BD5DD16B3_H
#define ACTION_1_T7D55CDBAF286DDE78372A2D88644D71BD5DD16B3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.Material>
struct  Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T7D55CDBAF286DDE78372A2D88644D71BD5DD16B3_H
#ifndef ACTION_1_T5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77_H
#define ACTION_1_T5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.Texture2D>
struct  Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77_H
#ifndef EVENTHANDLER_T2B84E745E28BA26C49C4E99A387FC3B534D1110C_H
#define EVENTHANDLER_T2B84E745E28BA26C49C4E99A387FC3B534D1110C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler
struct  EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T2B84E745E28BA26C49C4E99A387FC3B534D1110C_H
#ifndef EVENTHANDLER_1_T28913C550C25B74CE8B8B82EF62529533E8E949E_H
#define EVENTHANDLER_1_T28913C550C25B74CE8B8B82EF62529533E8E949E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<Vuplex.WebView.ClickedEventArgs>
struct  EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T28913C550C25B74CE8B8B82EF62529533E8E949E_H
#ifndef EVENTHANDLER_1_T3EA00A1C08C43189A3E9A4C8D66414739A531A5C_H
#define EVENTHANDLER_1_T3EA00A1C08C43189A3E9A4C8D66414739A531A5C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<Vuplex.WebView.EventArgs`1<System.String>>
struct  EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T3EA00A1C08C43189A3E9A4C8D66414739A531A5C_H
#ifndef EVENTHANDLER_1_T3842DC221E08CDBC202024744A0CDAB01C2DADBA_H
#define EVENTHANDLER_1_T3842DC221E08CDBC202024744A0CDAB01C2DADBA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<Vuplex.WebView.EventArgs`1<UnityEngine.Rect>>
struct  EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T3842DC221E08CDBC202024744A0CDAB01C2DADBA_H
#ifndef EVENTHANDLER_1_T09CF224D6908EC2C8372040A6DDE89A5135A84BA_H
#define EVENTHANDLER_1_T09CF224D6908EC2C8372040A6DDE89A5135A84BA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<Vuplex.WebView.EventArgs`1<UnityEngine.Vector2>>
struct  EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T09CF224D6908EC2C8372040A6DDE89A5135A84BA_H
#ifndef EVENTHANDLER_1_TB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A_H
#define EVENTHANDLER_1_TB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<Vuplex.WebView.PointerEventArgs>
struct  EventHandler_1_tB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_TB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A_H
#ifndef EVENTHANDLER_1_T9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469_H
#define EVENTHANDLER_1_T9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<Vuplex.WebView.ProgressChangedEventArgs>
struct  EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469_H
#ifndef EVENTHANDLER_1_T77312AEB247982C1A84344BAA0F1EFD1D3F47515_H
#define EVENTHANDLER_1_T77312AEB247982C1A84344BAA0F1EFD1D3F47515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<Vuplex.WebView.ScrolledEventArgs>
struct  EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T77312AEB247982C1A84344BAA0F1EFD1D3F47515_H
#ifndef EVENTHANDLER_1_T1E4B301584881376D21A41DD3352FB5A0DF12C3A_H
#define EVENTHANDLER_1_T1E4B301584881376D21A41DD3352FB5A0DF12C3A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<Vuplex.WebView.UrlChangedEventArgs>
struct  EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T1E4B301584881376D21A41DD3352FB5A0DF12C3A_H
#ifndef FUNC_2_T3AB8FFCCD295F3CB6B51AB07C8ADE78F376F3FBC_H
#define FUNC_2_T3AB8FFCCD295F3CB6B51AB07C8ADE78F376F3FBC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<UnityEngine.Rendering.GraphicsDeviceType,System.String>
struct  Func_2_t3AB8FFCCD295F3CB6B51AB07C8ADE78F376F3FBC  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3AB8FFCCD295F3CB6B51AB07C8ADE78F376F3FBC_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#define COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#ifndef RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#define RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#ifndef TEXTURE2D_TBBF96AC337723E2EF156DF17E09D4379FD05DE1C_H
#define TEXTURE2D_TBBF96AC337723E2EF156DF17E09D4379FD05DE1C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_TBBF96AC337723E2EF156DF17E09D4379FD05DE1C_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef ABSTRACTMAP_TD0075CA48E7F4B007F3ABA48732443BD199E71C6_H
#define ABSTRACTMAP_TD0075CA48E7F4B007F3ABA48732443BD199E71C6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Map.AbstractMap
struct  AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Mapbox.Unity.Map.MapOptions Mapbox.Unity.Map.AbstractMap::_options
	MapOptions_t8B59AA99565EFC8410F110A4FDCA22C66F80AE92 * ____options_4;
	// System.Boolean Mapbox.Unity.Map.AbstractMap::_initializeOnStart
	bool ____initializeOnStart_5;
	// Mapbox.Unity.Map.ImageryLayer Mapbox.Unity.Map.AbstractMap::_imagery
	ImageryLayer_t8760107E5300CE6ED34EA4FE39CB62A9CA189C07 * ____imagery_6;
	// Mapbox.Unity.Map.TerrainLayer Mapbox.Unity.Map.AbstractMap::_terrain
	TerrainLayer_t9EFC5A340A857CEE8070811A7482C79750338648 * ____terrain_7;
	// Mapbox.Unity.Map.VectorLayer Mapbox.Unity.Map.AbstractMap::_vectorData
	VectorLayer_t70B9CA38A6B1154ADEC8BC4603BDBABF1CEF0D57 * ____vectorData_8;
	// Mapbox.Unity.Map.TileProviders.AbstractTileProvider Mapbox.Unity.Map.AbstractMap::_tileProvider
	AbstractTileProvider_tB864C6E59CCBA95692EDFCBBDB16B48A22A8F17C * ____tileProvider_9;
	// System.Collections.Generic.HashSet`1<Mapbox.Map.UnwrappedTileId> Mapbox.Unity.Map.AbstractMap::_currentExtent
	HashSet_1_t086D06E84F3BF3DC3625011FB4A0F0C64D6C95B2 * ____currentExtent_10;
	// Mapbox.Unity.Map.EditorPreviewOptions Mapbox.Unity.Map.AbstractMap::_previewOptions
	EditorPreviewOptions_tC8AE518ADECCFB4E588305CBB13E264D6995756F * ____previewOptions_11;
	// System.Collections.Generic.List`1<Mapbox.Map.UnwrappedTileId> Mapbox.Unity.Map.AbstractMap::tilesToProcess
	List_1_tC435B8ED54CB6DA699D4AE050AA5698A4C01A445 * ___tilesToProcess_12;
	// Mapbox.Unity.Map.AbstractMapVisualizer Mapbox.Unity.Map.AbstractMap::_mapVisualizer
	AbstractMapVisualizer_t0C37D2E1C17AE1CA4F0363F09F4998672941C30C * ____mapVisualizer_13;
	// System.Single Mapbox.Unity.Map.AbstractMap::_unityTileSize
	float ____unityTileSize_14;
	// System.Boolean Mapbox.Unity.Map.AbstractMap::_worldHeightFixed
	bool ____worldHeightFixed_15;
	// Mapbox.Unity.MapboxAccess Mapbox.Unity.Map.AbstractMap::_fileSource
	MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * ____fileSource_16;
	// System.Int32 Mapbox.Unity.Map.AbstractMap::_initialZoom
	int32_t ____initialZoom_17;
	// Mapbox.Utils.Vector2d Mapbox.Unity.Map.AbstractMap::_centerLatitudeLongitude
	Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  ____centerLatitudeLongitude_18;
	// Mapbox.Utils.Vector2d Mapbox.Unity.Map.AbstractMap::_centerMercator
	Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  ____centerMercator_19;
	// System.Single Mapbox.Unity.Map.AbstractMap::_worldRelativeScale
	float ____worldRelativeScale_20;
	// UnityEngine.Vector3 Mapbox.Unity.Map.AbstractMap::_mapScaleFactor
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____mapScaleFactor_21;
	// UnityEngine.Vector3 Mapbox.Unity.Map.AbstractMap::_cachedPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____cachedPosition_22;
	// UnityEngine.Quaternion Mapbox.Unity.Map.AbstractMap::_cachedRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ____cachedRotation_23;
	// UnityEngine.Vector3 Mapbox.Unity.Map.AbstractMap::_cachedScale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____cachedScale_24;
	// System.Action Mapbox.Unity.Map.AbstractMap::OnInitialized
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnInitialized_25;
	// System.Action Mapbox.Unity.Map.AbstractMap::OnUpdated
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnUpdated_26;
	// System.Action Mapbox.Unity.Map.AbstractMap::OnMapRedrawn
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnMapRedrawn_27;
	// System.Action Mapbox.Unity.Map.AbstractMap::OnEditorPreviewEnabled
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnEditorPreviewEnabled_28;
	// System.Action Mapbox.Unity.Map.AbstractMap::OnEditorPreviewDisabled
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnEditorPreviewDisabled_29;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.Map.AbstractMap::OnTileFinished
	Action_1_tABFC4624428D79874822F435EF3EA6A1D37D94E6 * ___OnTileFinished_30;
	// System.Action`1<System.Collections.Generic.List`1<Mapbox.Map.UnwrappedTileId>> Mapbox.Unity.Map.AbstractMap::OnTilesStarting
	Action_1_t9478877629ADD5C1B0A996958E9F4ADF45FD84F4 * ___OnTilesStarting_31;
	// System.Action`1<System.Collections.Generic.List`1<Mapbox.Map.UnwrappedTileId>> Mapbox.Unity.Map.AbstractMap::OnTilesDisposing
	Action_1_t9478877629ADD5C1B0A996958E9F4ADF45FD84F4 * ___OnTilesDisposing_32;

public:
	inline static int32_t get_offset_of__options_4() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____options_4)); }
	inline MapOptions_t8B59AA99565EFC8410F110A4FDCA22C66F80AE92 * get__options_4() const { return ____options_4; }
	inline MapOptions_t8B59AA99565EFC8410F110A4FDCA22C66F80AE92 ** get_address_of__options_4() { return &____options_4; }
	inline void set__options_4(MapOptions_t8B59AA99565EFC8410F110A4FDCA22C66F80AE92 * value)
	{
		____options_4 = value;
		Il2CppCodeGenWriteBarrier((&____options_4), value);
	}

	inline static int32_t get_offset_of__initializeOnStart_5() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____initializeOnStart_5)); }
	inline bool get__initializeOnStart_5() const { return ____initializeOnStart_5; }
	inline bool* get_address_of__initializeOnStart_5() { return &____initializeOnStart_5; }
	inline void set__initializeOnStart_5(bool value)
	{
		____initializeOnStart_5 = value;
	}

	inline static int32_t get_offset_of__imagery_6() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____imagery_6)); }
	inline ImageryLayer_t8760107E5300CE6ED34EA4FE39CB62A9CA189C07 * get__imagery_6() const { return ____imagery_6; }
	inline ImageryLayer_t8760107E5300CE6ED34EA4FE39CB62A9CA189C07 ** get_address_of__imagery_6() { return &____imagery_6; }
	inline void set__imagery_6(ImageryLayer_t8760107E5300CE6ED34EA4FE39CB62A9CA189C07 * value)
	{
		____imagery_6 = value;
		Il2CppCodeGenWriteBarrier((&____imagery_6), value);
	}

	inline static int32_t get_offset_of__terrain_7() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____terrain_7)); }
	inline TerrainLayer_t9EFC5A340A857CEE8070811A7482C79750338648 * get__terrain_7() const { return ____terrain_7; }
	inline TerrainLayer_t9EFC5A340A857CEE8070811A7482C79750338648 ** get_address_of__terrain_7() { return &____terrain_7; }
	inline void set__terrain_7(TerrainLayer_t9EFC5A340A857CEE8070811A7482C79750338648 * value)
	{
		____terrain_7 = value;
		Il2CppCodeGenWriteBarrier((&____terrain_7), value);
	}

	inline static int32_t get_offset_of__vectorData_8() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____vectorData_8)); }
	inline VectorLayer_t70B9CA38A6B1154ADEC8BC4603BDBABF1CEF0D57 * get__vectorData_8() const { return ____vectorData_8; }
	inline VectorLayer_t70B9CA38A6B1154ADEC8BC4603BDBABF1CEF0D57 ** get_address_of__vectorData_8() { return &____vectorData_8; }
	inline void set__vectorData_8(VectorLayer_t70B9CA38A6B1154ADEC8BC4603BDBABF1CEF0D57 * value)
	{
		____vectorData_8 = value;
		Il2CppCodeGenWriteBarrier((&____vectorData_8), value);
	}

	inline static int32_t get_offset_of__tileProvider_9() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____tileProvider_9)); }
	inline AbstractTileProvider_tB864C6E59CCBA95692EDFCBBDB16B48A22A8F17C * get__tileProvider_9() const { return ____tileProvider_9; }
	inline AbstractTileProvider_tB864C6E59CCBA95692EDFCBBDB16B48A22A8F17C ** get_address_of__tileProvider_9() { return &____tileProvider_9; }
	inline void set__tileProvider_9(AbstractTileProvider_tB864C6E59CCBA95692EDFCBBDB16B48A22A8F17C * value)
	{
		____tileProvider_9 = value;
		Il2CppCodeGenWriteBarrier((&____tileProvider_9), value);
	}

	inline static int32_t get_offset_of__currentExtent_10() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____currentExtent_10)); }
	inline HashSet_1_t086D06E84F3BF3DC3625011FB4A0F0C64D6C95B2 * get__currentExtent_10() const { return ____currentExtent_10; }
	inline HashSet_1_t086D06E84F3BF3DC3625011FB4A0F0C64D6C95B2 ** get_address_of__currentExtent_10() { return &____currentExtent_10; }
	inline void set__currentExtent_10(HashSet_1_t086D06E84F3BF3DC3625011FB4A0F0C64D6C95B2 * value)
	{
		____currentExtent_10 = value;
		Il2CppCodeGenWriteBarrier((&____currentExtent_10), value);
	}

	inline static int32_t get_offset_of__previewOptions_11() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____previewOptions_11)); }
	inline EditorPreviewOptions_tC8AE518ADECCFB4E588305CBB13E264D6995756F * get__previewOptions_11() const { return ____previewOptions_11; }
	inline EditorPreviewOptions_tC8AE518ADECCFB4E588305CBB13E264D6995756F ** get_address_of__previewOptions_11() { return &____previewOptions_11; }
	inline void set__previewOptions_11(EditorPreviewOptions_tC8AE518ADECCFB4E588305CBB13E264D6995756F * value)
	{
		____previewOptions_11 = value;
		Il2CppCodeGenWriteBarrier((&____previewOptions_11), value);
	}

	inline static int32_t get_offset_of_tilesToProcess_12() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ___tilesToProcess_12)); }
	inline List_1_tC435B8ED54CB6DA699D4AE050AA5698A4C01A445 * get_tilesToProcess_12() const { return ___tilesToProcess_12; }
	inline List_1_tC435B8ED54CB6DA699D4AE050AA5698A4C01A445 ** get_address_of_tilesToProcess_12() { return &___tilesToProcess_12; }
	inline void set_tilesToProcess_12(List_1_tC435B8ED54CB6DA699D4AE050AA5698A4C01A445 * value)
	{
		___tilesToProcess_12 = value;
		Il2CppCodeGenWriteBarrier((&___tilesToProcess_12), value);
	}

	inline static int32_t get_offset_of__mapVisualizer_13() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____mapVisualizer_13)); }
	inline AbstractMapVisualizer_t0C37D2E1C17AE1CA4F0363F09F4998672941C30C * get__mapVisualizer_13() const { return ____mapVisualizer_13; }
	inline AbstractMapVisualizer_t0C37D2E1C17AE1CA4F0363F09F4998672941C30C ** get_address_of__mapVisualizer_13() { return &____mapVisualizer_13; }
	inline void set__mapVisualizer_13(AbstractMapVisualizer_t0C37D2E1C17AE1CA4F0363F09F4998672941C30C * value)
	{
		____mapVisualizer_13 = value;
		Il2CppCodeGenWriteBarrier((&____mapVisualizer_13), value);
	}

	inline static int32_t get_offset_of__unityTileSize_14() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____unityTileSize_14)); }
	inline float get__unityTileSize_14() const { return ____unityTileSize_14; }
	inline float* get_address_of__unityTileSize_14() { return &____unityTileSize_14; }
	inline void set__unityTileSize_14(float value)
	{
		____unityTileSize_14 = value;
	}

	inline static int32_t get_offset_of__worldHeightFixed_15() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____worldHeightFixed_15)); }
	inline bool get__worldHeightFixed_15() const { return ____worldHeightFixed_15; }
	inline bool* get_address_of__worldHeightFixed_15() { return &____worldHeightFixed_15; }
	inline void set__worldHeightFixed_15(bool value)
	{
		____worldHeightFixed_15 = value;
	}

	inline static int32_t get_offset_of__fileSource_16() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____fileSource_16)); }
	inline MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * get__fileSource_16() const { return ____fileSource_16; }
	inline MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D ** get_address_of__fileSource_16() { return &____fileSource_16; }
	inline void set__fileSource_16(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * value)
	{
		____fileSource_16 = value;
		Il2CppCodeGenWriteBarrier((&____fileSource_16), value);
	}

	inline static int32_t get_offset_of__initialZoom_17() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____initialZoom_17)); }
	inline int32_t get__initialZoom_17() const { return ____initialZoom_17; }
	inline int32_t* get_address_of__initialZoom_17() { return &____initialZoom_17; }
	inline void set__initialZoom_17(int32_t value)
	{
		____initialZoom_17 = value;
	}

	inline static int32_t get_offset_of__centerLatitudeLongitude_18() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____centerLatitudeLongitude_18)); }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  get__centerLatitudeLongitude_18() const { return ____centerLatitudeLongitude_18; }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483 * get_address_of__centerLatitudeLongitude_18() { return &____centerLatitudeLongitude_18; }
	inline void set__centerLatitudeLongitude_18(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  value)
	{
		____centerLatitudeLongitude_18 = value;
	}

	inline static int32_t get_offset_of__centerMercator_19() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____centerMercator_19)); }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  get__centerMercator_19() const { return ____centerMercator_19; }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483 * get_address_of__centerMercator_19() { return &____centerMercator_19; }
	inline void set__centerMercator_19(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  value)
	{
		____centerMercator_19 = value;
	}

	inline static int32_t get_offset_of__worldRelativeScale_20() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____worldRelativeScale_20)); }
	inline float get__worldRelativeScale_20() const { return ____worldRelativeScale_20; }
	inline float* get_address_of__worldRelativeScale_20() { return &____worldRelativeScale_20; }
	inline void set__worldRelativeScale_20(float value)
	{
		____worldRelativeScale_20 = value;
	}

	inline static int32_t get_offset_of__mapScaleFactor_21() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____mapScaleFactor_21)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__mapScaleFactor_21() const { return ____mapScaleFactor_21; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__mapScaleFactor_21() { return &____mapScaleFactor_21; }
	inline void set__mapScaleFactor_21(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____mapScaleFactor_21 = value;
	}

	inline static int32_t get_offset_of__cachedPosition_22() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____cachedPosition_22)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__cachedPosition_22() const { return ____cachedPosition_22; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__cachedPosition_22() { return &____cachedPosition_22; }
	inline void set__cachedPosition_22(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____cachedPosition_22 = value;
	}

	inline static int32_t get_offset_of__cachedRotation_23() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____cachedRotation_23)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get__cachedRotation_23() const { return ____cachedRotation_23; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of__cachedRotation_23() { return &____cachedRotation_23; }
	inline void set__cachedRotation_23(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		____cachedRotation_23 = value;
	}

	inline static int32_t get_offset_of__cachedScale_24() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ____cachedScale_24)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__cachedScale_24() const { return ____cachedScale_24; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__cachedScale_24() { return &____cachedScale_24; }
	inline void set__cachedScale_24(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____cachedScale_24 = value;
	}

	inline static int32_t get_offset_of_OnInitialized_25() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ___OnInitialized_25)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnInitialized_25() const { return ___OnInitialized_25; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnInitialized_25() { return &___OnInitialized_25; }
	inline void set_OnInitialized_25(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnInitialized_25 = value;
		Il2CppCodeGenWriteBarrier((&___OnInitialized_25), value);
	}

	inline static int32_t get_offset_of_OnUpdated_26() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ___OnUpdated_26)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnUpdated_26() const { return ___OnUpdated_26; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnUpdated_26() { return &___OnUpdated_26; }
	inline void set_OnUpdated_26(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnUpdated_26 = value;
		Il2CppCodeGenWriteBarrier((&___OnUpdated_26), value);
	}

	inline static int32_t get_offset_of_OnMapRedrawn_27() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ___OnMapRedrawn_27)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnMapRedrawn_27() const { return ___OnMapRedrawn_27; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnMapRedrawn_27() { return &___OnMapRedrawn_27; }
	inline void set_OnMapRedrawn_27(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnMapRedrawn_27 = value;
		Il2CppCodeGenWriteBarrier((&___OnMapRedrawn_27), value);
	}

	inline static int32_t get_offset_of_OnEditorPreviewEnabled_28() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ___OnEditorPreviewEnabled_28)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnEditorPreviewEnabled_28() const { return ___OnEditorPreviewEnabled_28; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnEditorPreviewEnabled_28() { return &___OnEditorPreviewEnabled_28; }
	inline void set_OnEditorPreviewEnabled_28(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnEditorPreviewEnabled_28 = value;
		Il2CppCodeGenWriteBarrier((&___OnEditorPreviewEnabled_28), value);
	}

	inline static int32_t get_offset_of_OnEditorPreviewDisabled_29() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ___OnEditorPreviewDisabled_29)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnEditorPreviewDisabled_29() const { return ___OnEditorPreviewDisabled_29; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnEditorPreviewDisabled_29() { return &___OnEditorPreviewDisabled_29; }
	inline void set_OnEditorPreviewDisabled_29(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnEditorPreviewDisabled_29 = value;
		Il2CppCodeGenWriteBarrier((&___OnEditorPreviewDisabled_29), value);
	}

	inline static int32_t get_offset_of_OnTileFinished_30() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ___OnTileFinished_30)); }
	inline Action_1_tABFC4624428D79874822F435EF3EA6A1D37D94E6 * get_OnTileFinished_30() const { return ___OnTileFinished_30; }
	inline Action_1_tABFC4624428D79874822F435EF3EA6A1D37D94E6 ** get_address_of_OnTileFinished_30() { return &___OnTileFinished_30; }
	inline void set_OnTileFinished_30(Action_1_tABFC4624428D79874822F435EF3EA6A1D37D94E6 * value)
	{
		___OnTileFinished_30 = value;
		Il2CppCodeGenWriteBarrier((&___OnTileFinished_30), value);
	}

	inline static int32_t get_offset_of_OnTilesStarting_31() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ___OnTilesStarting_31)); }
	inline Action_1_t9478877629ADD5C1B0A996958E9F4ADF45FD84F4 * get_OnTilesStarting_31() const { return ___OnTilesStarting_31; }
	inline Action_1_t9478877629ADD5C1B0A996958E9F4ADF45FD84F4 ** get_address_of_OnTilesStarting_31() { return &___OnTilesStarting_31; }
	inline void set_OnTilesStarting_31(Action_1_t9478877629ADD5C1B0A996958E9F4ADF45FD84F4 * value)
	{
		___OnTilesStarting_31 = value;
		Il2CppCodeGenWriteBarrier((&___OnTilesStarting_31), value);
	}

	inline static int32_t get_offset_of_OnTilesDisposing_32() { return static_cast<int32_t>(offsetof(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6, ___OnTilesDisposing_32)); }
	inline Action_1_t9478877629ADD5C1B0A996958E9F4ADF45FD84F4 * get_OnTilesDisposing_32() const { return ___OnTilesDisposing_32; }
	inline Action_1_t9478877629ADD5C1B0A996958E9F4ADF45FD84F4 ** get_address_of_OnTilesDisposing_32() { return &___OnTilesDisposing_32; }
	inline void set_OnTilesDisposing_32(Action_1_t9478877629ADD5C1B0A996958E9F4ADF45FD84F4 * value)
	{
		___OnTilesDisposing_32 = value;
		Il2CppCodeGenWriteBarrier((&___OnTilesDisposing_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTMAP_TD0075CA48E7F4B007F3ABA48732443BD199E71C6_H
#ifndef BASEWEBVIEW_T5C30006F29FBD574923434B2A7A1E52C673E9AFB_H
#define BASEWEBVIEW_T5C30006F29FBD574923434B2A7A1E52C673E9AFB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.BaseWebView
struct  BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.EventHandler Vuplex.WebView.BaseWebView::CloseRequested
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___CloseRequested_4;
	// System.EventHandler`1<Vuplex.WebView.ProgressChangedEventArgs> Vuplex.WebView.BaseWebView::LoadProgressChanged
	EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * ___LoadProgressChanged_5;
	// System.EventHandler Vuplex.WebView.BaseWebView::PageLoadFailed
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___PageLoadFailed_6;
	// System.EventHandler`1<Vuplex.WebView.UrlChangedEventArgs> Vuplex.WebView.BaseWebView::UrlChanged
	EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * ___UrlChanged_7;
	// System.Boolean Vuplex.WebView.BaseWebView::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_8;
	// System.Boolean Vuplex.WebView.BaseWebView::<IsInitialized>k__BackingField
	bool ___U3CIsInitializedU3Ek__BackingField_9;
	// System.String Vuplex.WebView.BaseWebView::<Url>k__BackingField
	String_t* ___U3CUrlU3Ek__BackingField_10;
	// System.IntPtr Vuplex.WebView.BaseWebView::_currentViewportNativeTexture
	intptr_t ____currentViewportNativeTexture_11;
	// System.Single Vuplex.WebView.BaseWebView::_height
	float ____height_13;
	// UnityEngine.Material Vuplex.WebView.BaseWebView::_materialForBlitting
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ____materialForBlitting_14;
	// Vuplex.WebView.BridgeMessageHandler Vuplex.WebView.BaseWebView::_messageHandler
	BridgeMessageHandler_t0376CED47DFFF14B8C0196DD45807D7726DA47F5 * ____messageHandler_15;
	// System.IntPtr Vuplex.WebView.BaseWebView::_nativeWebViewPtr
	intptr_t ____nativeWebViewPtr_16;
	// System.Single Vuplex.WebView.BaseWebView::_numberOfPixelsPerUnityUnit
	float ____numberOfPixelsPerUnityUnit_17;
	// System.Collections.Generic.List`1<System.String> Vuplex.WebView.BaseWebView::_pageLoadScripts
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ____pageLoadScripts_18;
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> Vuplex.WebView.BaseWebView::_pendingCanGoBackCallbacks
	List_1_t331F6F02A885A8F44C1CBA5CF6C28E9BA967D234 * ____pendingCanGoBackCallbacks_19;
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> Vuplex.WebView.BaseWebView::_pendingCanGoForwardCallbacks
	List_1_t331F6F02A885A8F44C1CBA5CF6C28E9BA967D234 * ____pendingCanGoForwardCallbacks_20;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>> Vuplex.WebView.BaseWebView::_pendingJavaScriptResultCallbacks
	Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A * ____pendingJavaScriptResultCallbacks_21;
	// UnityEngine.Texture2D Vuplex.WebView.BaseWebView::_videoTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____videoTexture_24;
	// System.Boolean Vuplex.WebView.BaseWebView::_viewUpdatesAreEnabled
	bool ____viewUpdatesAreEnabled_25;
	// UnityEngine.Texture2D Vuplex.WebView.BaseWebView::_viewportTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____viewportTexture_26;
	// System.Single Vuplex.WebView.BaseWebView::_width
	float ____width_27;

public:
	inline static int32_t get_offset_of_CloseRequested_4() { return static_cast<int32_t>(offsetof(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB, ___CloseRequested_4)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_CloseRequested_4() const { return ___CloseRequested_4; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_CloseRequested_4() { return &___CloseRequested_4; }
	inline void set_CloseRequested_4(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___CloseRequested_4 = value;
		Il2CppCodeGenWriteBarrier((&___CloseRequested_4), value);
	}

	inline static int32_t get_offset_of_LoadProgressChanged_5() { return static_cast<int32_t>(offsetof(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB, ___LoadProgressChanged_5)); }
	inline EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * get_LoadProgressChanged_5() const { return ___LoadProgressChanged_5; }
	inline EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 ** get_address_of_LoadProgressChanged_5() { return &___LoadProgressChanged_5; }
	inline void set_LoadProgressChanged_5(EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * value)
	{
		___LoadProgressChanged_5 = value;
		Il2CppCodeGenWriteBarrier((&___LoadProgressChanged_5), value);
	}

	inline static int32_t get_offset_of_PageLoadFailed_6() { return static_cast<int32_t>(offsetof(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB, ___PageLoadFailed_6)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_PageLoadFailed_6() const { return ___PageLoadFailed_6; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_PageLoadFailed_6() { return &___PageLoadFailed_6; }
	inline void set_PageLoadFailed_6(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___PageLoadFailed_6 = value;
		Il2CppCodeGenWriteBarrier((&___PageLoadFailed_6), value);
	}

	inline static int32_t get_offset_of_UrlChanged_7() { return static_cast<int32_t>(offsetof(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB, ___UrlChanged_7)); }
	inline EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * get_UrlChanged_7() const { return ___UrlChanged_7; }
	inline EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A ** get_address_of_UrlChanged_7() { return &___UrlChanged_7; }
	inline void set_UrlChanged_7(EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * value)
	{
		___UrlChanged_7 = value;
		Il2CppCodeGenWriteBarrier((&___UrlChanged_7), value);
	}

	inline static int32_t get_offset_of_U3CIsDisposedU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB, ___U3CIsDisposedU3Ek__BackingField_8)); }
	inline bool get_U3CIsDisposedU3Ek__BackingField_8() const { return ___U3CIsDisposedU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsDisposedU3Ek__BackingField_8() { return &___U3CIsDisposedU3Ek__BackingField_8; }
	inline void set_U3CIsDisposedU3Ek__BackingField_8(bool value)
	{
		___U3CIsDisposedU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIsInitializedU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB, ___U3CIsInitializedU3Ek__BackingField_9)); }
	inline bool get_U3CIsInitializedU3Ek__BackingField_9() const { return ___U3CIsInitializedU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsInitializedU3Ek__BackingField_9() { return &___U3CIsInitializedU3Ek__BackingField_9; }
	inline void set_U3CIsInitializedU3Ek__BackingField_9(bool value)
	{
		___U3CIsInitializedU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CUrlU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB, ___U3CUrlU3Ek__BackingField_10)); }
	inline String_t* get_U3CUrlU3Ek__BackingField_10() const { return ___U3CUrlU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CUrlU3Ek__BackingField_10() { return &___U3CUrlU3Ek__BackingField_10; }
	inline void set_U3CUrlU3Ek__BackingField_10(String_t* value)
	{
		___U3CUrlU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUrlU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of__currentViewportNativeTexture_11() { return static_cast<int32_t>(offsetof(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB, ____currentViewportNativeTexture_11)); }
	inline intptr_t get__currentViewportNativeTexture_11() const { return ____currentViewportNativeTexture_11; }
	inline intptr_t* get_address_of__currentViewportNativeTexture_11() { return &____currentViewportNativeTexture_11; }
	inline void set__currentViewportNativeTexture_11(intptr_t value)
	{
		____currentViewportNativeTexture_11 = value;
	}

	inline static int32_t get_offset_of__height_13() { return static_cast<int32_t>(offsetof(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB, ____height_13)); }
	inline float get__height_13() const { return ____height_13; }
	inline float* get_address_of__height_13() { return &____height_13; }
	inline void set__height_13(float value)
	{
		____height_13 = value;
	}

	inline static int32_t get_offset_of__materialForBlitting_14() { return static_cast<int32_t>(offsetof(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB, ____materialForBlitting_14)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get__materialForBlitting_14() const { return ____materialForBlitting_14; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of__materialForBlitting_14() { return &____materialForBlitting_14; }
	inline void set__materialForBlitting_14(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		____materialForBlitting_14 = value;
		Il2CppCodeGenWriteBarrier((&____materialForBlitting_14), value);
	}

	inline static int32_t get_offset_of__messageHandler_15() { return static_cast<int32_t>(offsetof(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB, ____messageHandler_15)); }
	inline BridgeMessageHandler_t0376CED47DFFF14B8C0196DD45807D7726DA47F5 * get__messageHandler_15() const { return ____messageHandler_15; }
	inline BridgeMessageHandler_t0376CED47DFFF14B8C0196DD45807D7726DA47F5 ** get_address_of__messageHandler_15() { return &____messageHandler_15; }
	inline void set__messageHandler_15(BridgeMessageHandler_t0376CED47DFFF14B8C0196DD45807D7726DA47F5 * value)
	{
		____messageHandler_15 = value;
		Il2CppCodeGenWriteBarrier((&____messageHandler_15), value);
	}

	inline static int32_t get_offset_of__nativeWebViewPtr_16() { return static_cast<int32_t>(offsetof(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB, ____nativeWebViewPtr_16)); }
	inline intptr_t get__nativeWebViewPtr_16() const { return ____nativeWebViewPtr_16; }
	inline intptr_t* get_address_of__nativeWebViewPtr_16() { return &____nativeWebViewPtr_16; }
	inline void set__nativeWebViewPtr_16(intptr_t value)
	{
		____nativeWebViewPtr_16 = value;
	}

	inline static int32_t get_offset_of__numberOfPixelsPerUnityUnit_17() { return static_cast<int32_t>(offsetof(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB, ____numberOfPixelsPerUnityUnit_17)); }
	inline float get__numberOfPixelsPerUnityUnit_17() const { return ____numberOfPixelsPerUnityUnit_17; }
	inline float* get_address_of__numberOfPixelsPerUnityUnit_17() { return &____numberOfPixelsPerUnityUnit_17; }
	inline void set__numberOfPixelsPerUnityUnit_17(float value)
	{
		____numberOfPixelsPerUnityUnit_17 = value;
	}

	inline static int32_t get_offset_of__pageLoadScripts_18() { return static_cast<int32_t>(offsetof(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB, ____pageLoadScripts_18)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get__pageLoadScripts_18() const { return ____pageLoadScripts_18; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of__pageLoadScripts_18() { return &____pageLoadScripts_18; }
	inline void set__pageLoadScripts_18(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		____pageLoadScripts_18 = value;
		Il2CppCodeGenWriteBarrier((&____pageLoadScripts_18), value);
	}

	inline static int32_t get_offset_of__pendingCanGoBackCallbacks_19() { return static_cast<int32_t>(offsetof(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB, ____pendingCanGoBackCallbacks_19)); }
	inline List_1_t331F6F02A885A8F44C1CBA5CF6C28E9BA967D234 * get__pendingCanGoBackCallbacks_19() const { return ____pendingCanGoBackCallbacks_19; }
	inline List_1_t331F6F02A885A8F44C1CBA5CF6C28E9BA967D234 ** get_address_of__pendingCanGoBackCallbacks_19() { return &____pendingCanGoBackCallbacks_19; }
	inline void set__pendingCanGoBackCallbacks_19(List_1_t331F6F02A885A8F44C1CBA5CF6C28E9BA967D234 * value)
	{
		____pendingCanGoBackCallbacks_19 = value;
		Il2CppCodeGenWriteBarrier((&____pendingCanGoBackCallbacks_19), value);
	}

	inline static int32_t get_offset_of__pendingCanGoForwardCallbacks_20() { return static_cast<int32_t>(offsetof(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB, ____pendingCanGoForwardCallbacks_20)); }
	inline List_1_t331F6F02A885A8F44C1CBA5CF6C28E9BA967D234 * get__pendingCanGoForwardCallbacks_20() const { return ____pendingCanGoForwardCallbacks_20; }
	inline List_1_t331F6F02A885A8F44C1CBA5CF6C28E9BA967D234 ** get_address_of__pendingCanGoForwardCallbacks_20() { return &____pendingCanGoForwardCallbacks_20; }
	inline void set__pendingCanGoForwardCallbacks_20(List_1_t331F6F02A885A8F44C1CBA5CF6C28E9BA967D234 * value)
	{
		____pendingCanGoForwardCallbacks_20 = value;
		Il2CppCodeGenWriteBarrier((&____pendingCanGoForwardCallbacks_20), value);
	}

	inline static int32_t get_offset_of__pendingJavaScriptResultCallbacks_21() { return static_cast<int32_t>(offsetof(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB, ____pendingJavaScriptResultCallbacks_21)); }
	inline Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A * get__pendingJavaScriptResultCallbacks_21() const { return ____pendingJavaScriptResultCallbacks_21; }
	inline Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A ** get_address_of__pendingJavaScriptResultCallbacks_21() { return &____pendingJavaScriptResultCallbacks_21; }
	inline void set__pendingJavaScriptResultCallbacks_21(Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A * value)
	{
		____pendingJavaScriptResultCallbacks_21 = value;
		Il2CppCodeGenWriteBarrier((&____pendingJavaScriptResultCallbacks_21), value);
	}

	inline static int32_t get_offset_of__videoTexture_24() { return static_cast<int32_t>(offsetof(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB, ____videoTexture_24)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get__videoTexture_24() const { return ____videoTexture_24; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of__videoTexture_24() { return &____videoTexture_24; }
	inline void set__videoTexture_24(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		____videoTexture_24 = value;
		Il2CppCodeGenWriteBarrier((&____videoTexture_24), value);
	}

	inline static int32_t get_offset_of__viewUpdatesAreEnabled_25() { return static_cast<int32_t>(offsetof(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB, ____viewUpdatesAreEnabled_25)); }
	inline bool get__viewUpdatesAreEnabled_25() const { return ____viewUpdatesAreEnabled_25; }
	inline bool* get_address_of__viewUpdatesAreEnabled_25() { return &____viewUpdatesAreEnabled_25; }
	inline void set__viewUpdatesAreEnabled_25(bool value)
	{
		____viewUpdatesAreEnabled_25 = value;
	}

	inline static int32_t get_offset_of__viewportTexture_26() { return static_cast<int32_t>(offsetof(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB, ____viewportTexture_26)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get__viewportTexture_26() const { return ____viewportTexture_26; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of__viewportTexture_26() { return &____viewportTexture_26; }
	inline void set__viewportTexture_26(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		____viewportTexture_26 = value;
		Il2CppCodeGenWriteBarrier((&____viewportTexture_26), value);
	}

	inline static int32_t get_offset_of__width_27() { return static_cast<int32_t>(offsetof(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB, ____width_27)); }
	inline float get__width_27() const { return ____width_27; }
	inline float* get_address_of__width_27() { return &____width_27; }
	inline void set__width_27(float value)
	{
		____width_27 = value;
	}
};

struct BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex Vuplex.WebView.BaseWebView::STREAMING_ASSETS_URL_REGEX
	Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * ___STREAMING_ASSETS_URL_REGEX_22;

public:
	inline static int32_t get_offset_of_STREAMING_ASSETS_URL_REGEX_22() { return static_cast<int32_t>(offsetof(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB_StaticFields, ___STREAMING_ASSETS_URL_REGEX_22)); }
	inline Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * get_STREAMING_ASSETS_URL_REGEX_22() const { return ___STREAMING_ASSETS_URL_REGEX_22; }
	inline Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF ** get_address_of_STREAMING_ASSETS_URL_REGEX_22() { return &___STREAMING_ASSETS_URL_REGEX_22; }
	inline void set_STREAMING_ASSETS_URL_REGEX_22(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * value)
	{
		___STREAMING_ASSETS_URL_REGEX_22 = value;
		Il2CppCodeGenWriteBarrier((&___STREAMING_ASSETS_URL_REGEX_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEWEBVIEW_T5C30006F29FBD574923434B2A7A1E52C673E9AFB_H
#ifndef MOCKWEBVIEW_T8863F1E203D1B9068A59F50F96A15CC153C759D7_H
#define MOCKWEBVIEW_T8863F1E203D1B9068A59F50F96A15CC153C759D7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.MockWebView
struct  MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.EventHandler Vuplex.WebView.MockWebView::CloseRequested
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___CloseRequested_4;
	// System.EventHandler`1<Vuplex.WebView.ProgressChangedEventArgs> Vuplex.WebView.MockWebView::LoadProgressChanged
	EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * ___LoadProgressChanged_5;
	// System.EventHandler`1<Vuplex.WebView.EventArgs`1<System.String>> Vuplex.WebView.MockWebView::MessageEmitted
	EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * ___MessageEmitted_6;
	// System.EventHandler Vuplex.WebView.MockWebView::PageLoadFailed
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___PageLoadFailed_7;
	// System.EventHandler`1<Vuplex.WebView.EventArgs`1<System.String>> Vuplex.WebView.MockWebView::TitleChanged
	EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * ___TitleChanged_8;
	// System.EventHandler`1<Vuplex.WebView.UrlChangedEventArgs> Vuplex.WebView.MockWebView::UrlChanged
	EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * ___UrlChanged_9;
	// System.EventHandler`1<Vuplex.WebView.EventArgs`1<UnityEngine.Rect>> Vuplex.WebView.MockWebView::VideoRectChanged
	EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * ___VideoRectChanged_10;
	// System.Boolean Vuplex.WebView.MockWebView::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_11;
	// System.Boolean Vuplex.WebView.MockWebView::<IsInitialized>k__BackingField
	bool ___U3CIsInitializedU3Ek__BackingField_12;
	// UnityEngine.Vector2 Vuplex.WebView.MockWebView::<Size>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CSizeU3Ek__BackingField_13;
	// UnityEngine.Texture2D Vuplex.WebView.MockWebView::<Texture>k__BackingField
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___U3CTextureU3Ek__BackingField_14;
	// System.String Vuplex.WebView.MockWebView::<Url>k__BackingField
	String_t* ___U3CUrlU3Ek__BackingField_15;
	// UnityEngine.Texture2D Vuplex.WebView.MockWebView::<VideoTexture>k__BackingField
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___U3CVideoTextureU3Ek__BackingField_16;
	// System.Collections.Generic.List`1<System.String> Vuplex.WebView.MockWebView::_pageLoadScripts
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ____pageLoadScripts_17;
	// System.Single Vuplex.WebView.MockWebView::_numberOfPixelsPerUnityUnit
	float ____numberOfPixelsPerUnityUnit_18;

public:
	inline static int32_t get_offset_of_CloseRequested_4() { return static_cast<int32_t>(offsetof(MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7, ___CloseRequested_4)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_CloseRequested_4() const { return ___CloseRequested_4; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_CloseRequested_4() { return &___CloseRequested_4; }
	inline void set_CloseRequested_4(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___CloseRequested_4 = value;
		Il2CppCodeGenWriteBarrier((&___CloseRequested_4), value);
	}

	inline static int32_t get_offset_of_LoadProgressChanged_5() { return static_cast<int32_t>(offsetof(MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7, ___LoadProgressChanged_5)); }
	inline EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * get_LoadProgressChanged_5() const { return ___LoadProgressChanged_5; }
	inline EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 ** get_address_of_LoadProgressChanged_5() { return &___LoadProgressChanged_5; }
	inline void set_LoadProgressChanged_5(EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * value)
	{
		___LoadProgressChanged_5 = value;
		Il2CppCodeGenWriteBarrier((&___LoadProgressChanged_5), value);
	}

	inline static int32_t get_offset_of_MessageEmitted_6() { return static_cast<int32_t>(offsetof(MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7, ___MessageEmitted_6)); }
	inline EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * get_MessageEmitted_6() const { return ___MessageEmitted_6; }
	inline EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C ** get_address_of_MessageEmitted_6() { return &___MessageEmitted_6; }
	inline void set_MessageEmitted_6(EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * value)
	{
		___MessageEmitted_6 = value;
		Il2CppCodeGenWriteBarrier((&___MessageEmitted_6), value);
	}

	inline static int32_t get_offset_of_PageLoadFailed_7() { return static_cast<int32_t>(offsetof(MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7, ___PageLoadFailed_7)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_PageLoadFailed_7() const { return ___PageLoadFailed_7; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_PageLoadFailed_7() { return &___PageLoadFailed_7; }
	inline void set_PageLoadFailed_7(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___PageLoadFailed_7 = value;
		Il2CppCodeGenWriteBarrier((&___PageLoadFailed_7), value);
	}

	inline static int32_t get_offset_of_TitleChanged_8() { return static_cast<int32_t>(offsetof(MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7, ___TitleChanged_8)); }
	inline EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * get_TitleChanged_8() const { return ___TitleChanged_8; }
	inline EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C ** get_address_of_TitleChanged_8() { return &___TitleChanged_8; }
	inline void set_TitleChanged_8(EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * value)
	{
		___TitleChanged_8 = value;
		Il2CppCodeGenWriteBarrier((&___TitleChanged_8), value);
	}

	inline static int32_t get_offset_of_UrlChanged_9() { return static_cast<int32_t>(offsetof(MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7, ___UrlChanged_9)); }
	inline EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * get_UrlChanged_9() const { return ___UrlChanged_9; }
	inline EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A ** get_address_of_UrlChanged_9() { return &___UrlChanged_9; }
	inline void set_UrlChanged_9(EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * value)
	{
		___UrlChanged_9 = value;
		Il2CppCodeGenWriteBarrier((&___UrlChanged_9), value);
	}

	inline static int32_t get_offset_of_VideoRectChanged_10() { return static_cast<int32_t>(offsetof(MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7, ___VideoRectChanged_10)); }
	inline EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * get_VideoRectChanged_10() const { return ___VideoRectChanged_10; }
	inline EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA ** get_address_of_VideoRectChanged_10() { return &___VideoRectChanged_10; }
	inline void set_VideoRectChanged_10(EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * value)
	{
		___VideoRectChanged_10 = value;
		Il2CppCodeGenWriteBarrier((&___VideoRectChanged_10), value);
	}

	inline static int32_t get_offset_of_U3CIsDisposedU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7, ___U3CIsDisposedU3Ek__BackingField_11)); }
	inline bool get_U3CIsDisposedU3Ek__BackingField_11() const { return ___U3CIsDisposedU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CIsDisposedU3Ek__BackingField_11() { return &___U3CIsDisposedU3Ek__BackingField_11; }
	inline void set_U3CIsDisposedU3Ek__BackingField_11(bool value)
	{
		___U3CIsDisposedU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CIsInitializedU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7, ___U3CIsInitializedU3Ek__BackingField_12)); }
	inline bool get_U3CIsInitializedU3Ek__BackingField_12() const { return ___U3CIsInitializedU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CIsInitializedU3Ek__BackingField_12() { return &___U3CIsInitializedU3Ek__BackingField_12; }
	inline void set_U3CIsInitializedU3Ek__BackingField_12(bool value)
	{
		___U3CIsInitializedU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CSizeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7, ___U3CSizeU3Ek__BackingField_13)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CSizeU3Ek__BackingField_13() const { return ___U3CSizeU3Ek__BackingField_13; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CSizeU3Ek__BackingField_13() { return &___U3CSizeU3Ek__BackingField_13; }
	inline void set_U3CSizeU3Ek__BackingField_13(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CSizeU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CTextureU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7, ___U3CTextureU3Ek__BackingField_14)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_U3CTextureU3Ek__BackingField_14() const { return ___U3CTextureU3Ek__BackingField_14; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_U3CTextureU3Ek__BackingField_14() { return &___U3CTextureU3Ek__BackingField_14; }
	inline void set_U3CTextureU3Ek__BackingField_14(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___U3CTextureU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTextureU3Ek__BackingField_14), value);
	}

	inline static int32_t get_offset_of_U3CUrlU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7, ___U3CUrlU3Ek__BackingField_15)); }
	inline String_t* get_U3CUrlU3Ek__BackingField_15() const { return ___U3CUrlU3Ek__BackingField_15; }
	inline String_t** get_address_of_U3CUrlU3Ek__BackingField_15() { return &___U3CUrlU3Ek__BackingField_15; }
	inline void set_U3CUrlU3Ek__BackingField_15(String_t* value)
	{
		___U3CUrlU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUrlU3Ek__BackingField_15), value);
	}

	inline static int32_t get_offset_of_U3CVideoTextureU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7, ___U3CVideoTextureU3Ek__BackingField_16)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_U3CVideoTextureU3Ek__BackingField_16() const { return ___U3CVideoTextureU3Ek__BackingField_16; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_U3CVideoTextureU3Ek__BackingField_16() { return &___U3CVideoTextureU3Ek__BackingField_16; }
	inline void set_U3CVideoTextureU3Ek__BackingField_16(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___U3CVideoTextureU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CVideoTextureU3Ek__BackingField_16), value);
	}

	inline static int32_t get_offset_of__pageLoadScripts_17() { return static_cast<int32_t>(offsetof(MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7, ____pageLoadScripts_17)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get__pageLoadScripts_17() const { return ____pageLoadScripts_17; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of__pageLoadScripts_17() { return &____pageLoadScripts_17; }
	inline void set__pageLoadScripts_17(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		____pageLoadScripts_17 = value;
		Il2CppCodeGenWriteBarrier((&____pageLoadScripts_17), value);
	}

	inline static int32_t get_offset_of__numberOfPixelsPerUnityUnit_18() { return static_cast<int32_t>(offsetof(MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7, ____numberOfPixelsPerUnityUnit_18)); }
	inline float get__numberOfPixelsPerUnityUnit_18() const { return ____numberOfPixelsPerUnityUnit_18; }
	inline float* get_address_of__numberOfPixelsPerUnityUnit_18() { return &____numberOfPixelsPerUnityUnit_18; }
	inline void set__numberOfPixelsPerUnityUnit_18(float value)
	{
		____numberOfPixelsPerUnityUnit_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOCKWEBVIEW_T8863F1E203D1B9068A59F50F96A15CC153C759D7_H
#ifndef VIEWPORTMATERIALVIEW_TCECDA0A9CF1AB7A9F538488119DFFD074AFDB013_H
#define VIEWPORTMATERIALVIEW_TCECDA0A9CF1AB7A9F538488119DFFD074AFDB013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.ViewportMaterialView
struct  ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIEWPORTMATERIALVIEW_TCECDA0A9CF1AB7A9F538488119DFFD074AFDB013_H
#ifndef WEBVIEWPREFAB_TECA2B2A0D06402329213B95DC5FBE58104A736AE_H
#define WEBVIEWPREFAB_TECA2B2A0D06402329213B95DC5FBE58104A736AE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.WebViewPrefab
struct  WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.EventHandler`1<Vuplex.WebView.ClickedEventArgs> Vuplex.WebView.WebViewPrefab::Clicked
	EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * ___Clicked_4;
	// System.EventHandler Vuplex.WebView.WebViewPrefab::Initialized
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___Initialized_5;
	// System.EventHandler`1<Vuplex.WebView.ScrolledEventArgs> Vuplex.WebView.WebViewPrefab::Scrolled
	EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * ___Scrolled_6;
	// System.String Vuplex.WebView.WebViewPrefab::InitialUrl
	String_t* ___InitialUrl_7;
	// System.Single Vuplex.WebView.WebViewPrefab::InitialResolution
	float ___InitialResolution_8;
	// Vuplex.WebView.DragMode Vuplex.WebView.WebViewPrefab::DragMode
	int32_t ___DragMode_9;
	// System.Boolean Vuplex.WebView.WebViewPrefab::ClickingEnabled
	bool ___ClickingEnabled_10;
	// System.Boolean Vuplex.WebView.WebViewPrefab::HoveringEnabled
	bool ___HoveringEnabled_11;
	// System.Boolean Vuplex.WebView.WebViewPrefab::ScrollingEnabled
	bool ___ScrollingEnabled_12;
	// System.Single Vuplex.WebView.WebViewPrefab::DragThreshold
	float ___DragThreshold_13;
	// System.Single Vuplex.WebView.WebViewPrefab::<DragToScrollThreshold>k__BackingField
	float ___U3CDragToScrollThresholdU3Ek__BackingField_14;
	// System.Single Vuplex.WebView.WebViewPrefab::ScrollingSensitivity
	float ___ScrollingSensitivity_15;
	// UnityEngine.Vector2 Vuplex.WebView.WebViewPrefab::_pointerDownRatioPoint
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ____pointerDownRatioPoint_17;
	// System.Boolean Vuplex.WebView.WebViewPrefab::_clickIsPending
	bool ____clickIsPending_18;
	// System.Boolean Vuplex.WebView.WebViewPrefab::_loggedDragWarning
	bool ____loggedDragWarning_19;
	// Vuplex.WebView.WebViewOptions Vuplex.WebView.WebViewPrefab::_options
	WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C  ____options_20;
	// Vuplex.WebView.IPointerInputDetector Vuplex.WebView.WebViewPrefab::_pointerInputDetector
	RuntimeObject* ____pointerInputDetector_21;
	// System.Boolean Vuplex.WebView.WebViewPrefab::_pointerIsDown
	bool ____pointerIsDown_22;
	// UnityEngine.Vector2 Vuplex.WebView.WebViewPrefab::_previousDragPoint
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ____previousDragPoint_23;
	// UnityEngine.Vector2 Vuplex.WebView.WebViewPrefab::_previousMovePointerPoint
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ____previousMovePointerPoint_24;
	// Vuplex.WebView.ViewportMaterialView Vuplex.WebView.WebViewPrefab::_videoLayer
	ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * ____videoLayer_25;
	// System.Boolean Vuplex.WebView.WebViewPrefab::_videoLayerDisabled
	bool ____videoLayerDisabled_26;
	// UnityEngine.Material Vuplex.WebView.WebViewPrefab::_videoMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ____videoMaterial_27;
	// UnityEngine.Transform Vuplex.WebView.WebViewPrefab::_videoRectPositioner
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ____videoRectPositioner_28;
	// Vuplex.WebView.ViewportMaterialView Vuplex.WebView.WebViewPrefab::_view
	ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * ____view_29;
	// UnityEngine.Material Vuplex.WebView.WebViewPrefab::_viewMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ____viewMaterial_30;
	// Vuplex.WebView.ViewportMaterialView Vuplex.WebView.WebViewPrefab::_viewOverride
	ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * ____viewOverride_31;
	// UnityEngine.Transform Vuplex.WebView.WebViewPrefab::_viewResizer
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ____viewResizer_32;
	// Vuplex.WebView.IWebView Vuplex.WebView.WebViewPrefab::_webView
	RuntimeObject* ____webView_33;
	// UnityEngine.GameObject Vuplex.WebView.WebViewPrefab::_webViewGameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ____webViewGameObject_34;

public:
	inline static int32_t get_offset_of_Clicked_4() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ___Clicked_4)); }
	inline EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * get_Clicked_4() const { return ___Clicked_4; }
	inline EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E ** get_address_of_Clicked_4() { return &___Clicked_4; }
	inline void set_Clicked_4(EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * value)
	{
		___Clicked_4 = value;
		Il2CppCodeGenWriteBarrier((&___Clicked_4), value);
	}

	inline static int32_t get_offset_of_Initialized_5() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ___Initialized_5)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_Initialized_5() const { return ___Initialized_5; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_Initialized_5() { return &___Initialized_5; }
	inline void set_Initialized_5(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___Initialized_5 = value;
		Il2CppCodeGenWriteBarrier((&___Initialized_5), value);
	}

	inline static int32_t get_offset_of_Scrolled_6() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ___Scrolled_6)); }
	inline EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * get_Scrolled_6() const { return ___Scrolled_6; }
	inline EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 ** get_address_of_Scrolled_6() { return &___Scrolled_6; }
	inline void set_Scrolled_6(EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * value)
	{
		___Scrolled_6 = value;
		Il2CppCodeGenWriteBarrier((&___Scrolled_6), value);
	}

	inline static int32_t get_offset_of_InitialUrl_7() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ___InitialUrl_7)); }
	inline String_t* get_InitialUrl_7() const { return ___InitialUrl_7; }
	inline String_t** get_address_of_InitialUrl_7() { return &___InitialUrl_7; }
	inline void set_InitialUrl_7(String_t* value)
	{
		___InitialUrl_7 = value;
		Il2CppCodeGenWriteBarrier((&___InitialUrl_7), value);
	}

	inline static int32_t get_offset_of_InitialResolution_8() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ___InitialResolution_8)); }
	inline float get_InitialResolution_8() const { return ___InitialResolution_8; }
	inline float* get_address_of_InitialResolution_8() { return &___InitialResolution_8; }
	inline void set_InitialResolution_8(float value)
	{
		___InitialResolution_8 = value;
	}

	inline static int32_t get_offset_of_DragMode_9() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ___DragMode_9)); }
	inline int32_t get_DragMode_9() const { return ___DragMode_9; }
	inline int32_t* get_address_of_DragMode_9() { return &___DragMode_9; }
	inline void set_DragMode_9(int32_t value)
	{
		___DragMode_9 = value;
	}

	inline static int32_t get_offset_of_ClickingEnabled_10() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ___ClickingEnabled_10)); }
	inline bool get_ClickingEnabled_10() const { return ___ClickingEnabled_10; }
	inline bool* get_address_of_ClickingEnabled_10() { return &___ClickingEnabled_10; }
	inline void set_ClickingEnabled_10(bool value)
	{
		___ClickingEnabled_10 = value;
	}

	inline static int32_t get_offset_of_HoveringEnabled_11() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ___HoveringEnabled_11)); }
	inline bool get_HoveringEnabled_11() const { return ___HoveringEnabled_11; }
	inline bool* get_address_of_HoveringEnabled_11() { return &___HoveringEnabled_11; }
	inline void set_HoveringEnabled_11(bool value)
	{
		___HoveringEnabled_11 = value;
	}

	inline static int32_t get_offset_of_ScrollingEnabled_12() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ___ScrollingEnabled_12)); }
	inline bool get_ScrollingEnabled_12() const { return ___ScrollingEnabled_12; }
	inline bool* get_address_of_ScrollingEnabled_12() { return &___ScrollingEnabled_12; }
	inline void set_ScrollingEnabled_12(bool value)
	{
		___ScrollingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_DragThreshold_13() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ___DragThreshold_13)); }
	inline float get_DragThreshold_13() const { return ___DragThreshold_13; }
	inline float* get_address_of_DragThreshold_13() { return &___DragThreshold_13; }
	inline void set_DragThreshold_13(float value)
	{
		___DragThreshold_13 = value;
	}

	inline static int32_t get_offset_of_U3CDragToScrollThresholdU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ___U3CDragToScrollThresholdU3Ek__BackingField_14)); }
	inline float get_U3CDragToScrollThresholdU3Ek__BackingField_14() const { return ___U3CDragToScrollThresholdU3Ek__BackingField_14; }
	inline float* get_address_of_U3CDragToScrollThresholdU3Ek__BackingField_14() { return &___U3CDragToScrollThresholdU3Ek__BackingField_14; }
	inline void set_U3CDragToScrollThresholdU3Ek__BackingField_14(float value)
	{
		___U3CDragToScrollThresholdU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_ScrollingSensitivity_15() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ___ScrollingSensitivity_15)); }
	inline float get_ScrollingSensitivity_15() const { return ___ScrollingSensitivity_15; }
	inline float* get_address_of_ScrollingSensitivity_15() { return &___ScrollingSensitivity_15; }
	inline void set_ScrollingSensitivity_15(float value)
	{
		___ScrollingSensitivity_15 = value;
	}

	inline static int32_t get_offset_of__pointerDownRatioPoint_17() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ____pointerDownRatioPoint_17)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get__pointerDownRatioPoint_17() const { return ____pointerDownRatioPoint_17; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of__pointerDownRatioPoint_17() { return &____pointerDownRatioPoint_17; }
	inline void set__pointerDownRatioPoint_17(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		____pointerDownRatioPoint_17 = value;
	}

	inline static int32_t get_offset_of__clickIsPending_18() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ____clickIsPending_18)); }
	inline bool get__clickIsPending_18() const { return ____clickIsPending_18; }
	inline bool* get_address_of__clickIsPending_18() { return &____clickIsPending_18; }
	inline void set__clickIsPending_18(bool value)
	{
		____clickIsPending_18 = value;
	}

	inline static int32_t get_offset_of__loggedDragWarning_19() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ____loggedDragWarning_19)); }
	inline bool get__loggedDragWarning_19() const { return ____loggedDragWarning_19; }
	inline bool* get_address_of__loggedDragWarning_19() { return &____loggedDragWarning_19; }
	inline void set__loggedDragWarning_19(bool value)
	{
		____loggedDragWarning_19 = value;
	}

	inline static int32_t get_offset_of__options_20() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ____options_20)); }
	inline WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C  get__options_20() const { return ____options_20; }
	inline WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C * get_address_of__options_20() { return &____options_20; }
	inline void set__options_20(WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C  value)
	{
		____options_20 = value;
	}

	inline static int32_t get_offset_of__pointerInputDetector_21() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ____pointerInputDetector_21)); }
	inline RuntimeObject* get__pointerInputDetector_21() const { return ____pointerInputDetector_21; }
	inline RuntimeObject** get_address_of__pointerInputDetector_21() { return &____pointerInputDetector_21; }
	inline void set__pointerInputDetector_21(RuntimeObject* value)
	{
		____pointerInputDetector_21 = value;
		Il2CppCodeGenWriteBarrier((&____pointerInputDetector_21), value);
	}

	inline static int32_t get_offset_of__pointerIsDown_22() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ____pointerIsDown_22)); }
	inline bool get__pointerIsDown_22() const { return ____pointerIsDown_22; }
	inline bool* get_address_of__pointerIsDown_22() { return &____pointerIsDown_22; }
	inline void set__pointerIsDown_22(bool value)
	{
		____pointerIsDown_22 = value;
	}

	inline static int32_t get_offset_of__previousDragPoint_23() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ____previousDragPoint_23)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get__previousDragPoint_23() const { return ____previousDragPoint_23; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of__previousDragPoint_23() { return &____previousDragPoint_23; }
	inline void set__previousDragPoint_23(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		____previousDragPoint_23 = value;
	}

	inline static int32_t get_offset_of__previousMovePointerPoint_24() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ____previousMovePointerPoint_24)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get__previousMovePointerPoint_24() const { return ____previousMovePointerPoint_24; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of__previousMovePointerPoint_24() { return &____previousMovePointerPoint_24; }
	inline void set__previousMovePointerPoint_24(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		____previousMovePointerPoint_24 = value;
	}

	inline static int32_t get_offset_of__videoLayer_25() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ____videoLayer_25)); }
	inline ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * get__videoLayer_25() const { return ____videoLayer_25; }
	inline ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 ** get_address_of__videoLayer_25() { return &____videoLayer_25; }
	inline void set__videoLayer_25(ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * value)
	{
		____videoLayer_25 = value;
		Il2CppCodeGenWriteBarrier((&____videoLayer_25), value);
	}

	inline static int32_t get_offset_of__videoLayerDisabled_26() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ____videoLayerDisabled_26)); }
	inline bool get__videoLayerDisabled_26() const { return ____videoLayerDisabled_26; }
	inline bool* get_address_of__videoLayerDisabled_26() { return &____videoLayerDisabled_26; }
	inline void set__videoLayerDisabled_26(bool value)
	{
		____videoLayerDisabled_26 = value;
	}

	inline static int32_t get_offset_of__videoMaterial_27() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ____videoMaterial_27)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get__videoMaterial_27() const { return ____videoMaterial_27; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of__videoMaterial_27() { return &____videoMaterial_27; }
	inline void set__videoMaterial_27(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		____videoMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((&____videoMaterial_27), value);
	}

	inline static int32_t get_offset_of__videoRectPositioner_28() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ____videoRectPositioner_28)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get__videoRectPositioner_28() const { return ____videoRectPositioner_28; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of__videoRectPositioner_28() { return &____videoRectPositioner_28; }
	inline void set__videoRectPositioner_28(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		____videoRectPositioner_28 = value;
		Il2CppCodeGenWriteBarrier((&____videoRectPositioner_28), value);
	}

	inline static int32_t get_offset_of__view_29() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ____view_29)); }
	inline ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * get__view_29() const { return ____view_29; }
	inline ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 ** get_address_of__view_29() { return &____view_29; }
	inline void set__view_29(ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * value)
	{
		____view_29 = value;
		Il2CppCodeGenWriteBarrier((&____view_29), value);
	}

	inline static int32_t get_offset_of__viewMaterial_30() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ____viewMaterial_30)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get__viewMaterial_30() const { return ____viewMaterial_30; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of__viewMaterial_30() { return &____viewMaterial_30; }
	inline void set__viewMaterial_30(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		____viewMaterial_30 = value;
		Il2CppCodeGenWriteBarrier((&____viewMaterial_30), value);
	}

	inline static int32_t get_offset_of__viewOverride_31() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ____viewOverride_31)); }
	inline ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * get__viewOverride_31() const { return ____viewOverride_31; }
	inline ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 ** get_address_of__viewOverride_31() { return &____viewOverride_31; }
	inline void set__viewOverride_31(ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * value)
	{
		____viewOverride_31 = value;
		Il2CppCodeGenWriteBarrier((&____viewOverride_31), value);
	}

	inline static int32_t get_offset_of__viewResizer_32() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ____viewResizer_32)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get__viewResizer_32() const { return ____viewResizer_32; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of__viewResizer_32() { return &____viewResizer_32; }
	inline void set__viewResizer_32(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		____viewResizer_32 = value;
		Il2CppCodeGenWriteBarrier((&____viewResizer_32), value);
	}

	inline static int32_t get_offset_of__webView_33() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ____webView_33)); }
	inline RuntimeObject* get__webView_33() const { return ____webView_33; }
	inline RuntimeObject** get_address_of__webView_33() { return &____webView_33; }
	inline void set__webView_33(RuntimeObject* value)
	{
		____webView_33 = value;
		Il2CppCodeGenWriteBarrier((&____webView_33), value);
	}

	inline static int32_t get_offset_of__webViewGameObject_34() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE, ____webViewGameObject_34)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get__webViewGameObject_34() const { return ____webViewGameObject_34; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of__webViewGameObject_34() { return &____webViewGameObject_34; }
	inline void set__webViewGameObject_34(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		____webViewGameObject_34 = value;
		Il2CppCodeGenWriteBarrier((&____webViewGameObject_34), value);
	}
};

struct WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE_StaticFields
{
public:
	// System.Single Vuplex.WebView.WebViewPrefab::<ScrollSensitivity>k__BackingField
	float ___U3CScrollSensitivityU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CScrollSensitivityU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE_StaticFields, ___U3CScrollSensitivityU3Ek__BackingField_16)); }
	inline float get_U3CScrollSensitivityU3Ek__BackingField_16() const { return ___U3CScrollSensitivityU3Ek__BackingField_16; }
	inline float* get_address_of_U3CScrollSensitivityU3Ek__BackingField_16() { return &___U3CScrollSensitivityU3Ek__BackingField_16; }
	inline void set_U3CScrollSensitivityU3Ek__BackingField_16(float value)
	{
		___U3CScrollSensitivityU3Ek__BackingField_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBVIEWPREFAB_TECA2B2A0D06402329213B95DC5FBE58104A736AE_H
#ifndef WEBHANDLER_TEF3DFECC162F8A29528A5C0396B8D3A36C490A78_H
#define WEBHANDLER_TEF3DFECC162F8A29528A5C0396B8D3A36C490A78_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebHandler
struct  WebHandler_tEF3DFECC162F8A29528A5C0396B8D3A36C490A78  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String WebHandler::baseUrl
	String_t* ___baseUrl_4;
	// Mapbox.Json.Linq.JObject WebHandler::map
	JObject_tDAD1F88FC97DFAE2821454F590A9F482AEF04739 * ___map_5;
	// System.String WebHandler::shortLinkCode
	String_t* ___shortLinkCode_6;
	// System.String WebHandler::longLink
	String_t* ___longLink_7;
	// Mapbox.Unity.Map.AbstractMap WebHandler::_abstractMap
	AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6 * ____abstractMap_8;
	// User WebHandler::user
	User_tC17190F58E7AF577BC179A3103A3D3F299F3B0C7 * ___user_9;

public:
	inline static int32_t get_offset_of_baseUrl_4() { return static_cast<int32_t>(offsetof(WebHandler_tEF3DFECC162F8A29528A5C0396B8D3A36C490A78, ___baseUrl_4)); }
	inline String_t* get_baseUrl_4() const { return ___baseUrl_4; }
	inline String_t** get_address_of_baseUrl_4() { return &___baseUrl_4; }
	inline void set_baseUrl_4(String_t* value)
	{
		___baseUrl_4 = value;
		Il2CppCodeGenWriteBarrier((&___baseUrl_4), value);
	}

	inline static int32_t get_offset_of_map_5() { return static_cast<int32_t>(offsetof(WebHandler_tEF3DFECC162F8A29528A5C0396B8D3A36C490A78, ___map_5)); }
	inline JObject_tDAD1F88FC97DFAE2821454F590A9F482AEF04739 * get_map_5() const { return ___map_5; }
	inline JObject_tDAD1F88FC97DFAE2821454F590A9F482AEF04739 ** get_address_of_map_5() { return &___map_5; }
	inline void set_map_5(JObject_tDAD1F88FC97DFAE2821454F590A9F482AEF04739 * value)
	{
		___map_5 = value;
		Il2CppCodeGenWriteBarrier((&___map_5), value);
	}

	inline static int32_t get_offset_of_shortLinkCode_6() { return static_cast<int32_t>(offsetof(WebHandler_tEF3DFECC162F8A29528A5C0396B8D3A36C490A78, ___shortLinkCode_6)); }
	inline String_t* get_shortLinkCode_6() const { return ___shortLinkCode_6; }
	inline String_t** get_address_of_shortLinkCode_6() { return &___shortLinkCode_6; }
	inline void set_shortLinkCode_6(String_t* value)
	{
		___shortLinkCode_6 = value;
		Il2CppCodeGenWriteBarrier((&___shortLinkCode_6), value);
	}

	inline static int32_t get_offset_of_longLink_7() { return static_cast<int32_t>(offsetof(WebHandler_tEF3DFECC162F8A29528A5C0396B8D3A36C490A78, ___longLink_7)); }
	inline String_t* get_longLink_7() const { return ___longLink_7; }
	inline String_t** get_address_of_longLink_7() { return &___longLink_7; }
	inline void set_longLink_7(String_t* value)
	{
		___longLink_7 = value;
		Il2CppCodeGenWriteBarrier((&___longLink_7), value);
	}

	inline static int32_t get_offset_of__abstractMap_8() { return static_cast<int32_t>(offsetof(WebHandler_tEF3DFECC162F8A29528A5C0396B8D3A36C490A78, ____abstractMap_8)); }
	inline AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6 * get__abstractMap_8() const { return ____abstractMap_8; }
	inline AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6 ** get_address_of__abstractMap_8() { return &____abstractMap_8; }
	inline void set__abstractMap_8(AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6 * value)
	{
		____abstractMap_8 = value;
		Il2CppCodeGenWriteBarrier((&____abstractMap_8), value);
	}

	inline static int32_t get_offset_of_user_9() { return static_cast<int32_t>(offsetof(WebHandler_tEF3DFECC162F8A29528A5C0396B8D3A36C490A78, ___user_9)); }
	inline User_tC17190F58E7AF577BC179A3103A3D3F299F3B0C7 * get_user_9() const { return ___user_9; }
	inline User_tC17190F58E7AF577BC179A3103A3D3F299F3B0C7 ** get_address_of_user_9() { return &___user_9; }
	inline void set_user_9(User_tC17190F58E7AF577BC179A3103A3D3F299F3B0C7 * value)
	{
		___user_9 = value;
		Il2CppCodeGenWriteBarrier((&___user_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBHANDLER_TEF3DFECC162F8A29528A5C0396B8D3A36C490A78_H
#ifndef IOSWEBVIEW_TD7EFA8DCAB7D9C42E5359281C147322D07461234_H
#define IOSWEBVIEW_TD7EFA8DCAB7D9C42E5359281C147322D07461234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuplex.WebView.iOSWebView
struct  iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234  : public BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB
{
public:
	// System.IntPtr Vuplex.WebView.iOSWebView::_currentVideoNativeTexture
	intptr_t ____currentVideoNativeTexture_28;

public:
	inline static int32_t get_offset_of__currentVideoNativeTexture_28() { return static_cast<int32_t>(offsetof(iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234, ____currentVideoNativeTexture_28)); }
	inline intptr_t get__currentVideoNativeTexture_28() const { return ____currentVideoNativeTexture_28; }
	inline intptr_t* get_address_of__currentVideoNativeTexture_28() { return &____currentVideoNativeTexture_28; }
	inline void set__currentVideoNativeTexture_28(intptr_t value)
	{
		____currentVideoNativeTexture_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOSWEBVIEW_TD7EFA8DCAB7D9C42E5359281C147322D07461234_H
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Rendering.GraphicsDeviceType[]
struct GraphicsDeviceTypeU5BU5D_t4560B66B4261C7B1422FAA96584DAADE6A935A86  : public RuntimeArray
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
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
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
// Vuplex.WebView.WebPluginType[]
struct WebPluginTypeU5BU5D_tF25070ED5E0BC7C81ADE86F416BFFFD5472E14B8  : public RuntimeArray
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
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
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


// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared (const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m8DE03339B68AF1101DC4477F47D7729AC5C9F608_gshared (TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_mAC998B8AD6A8D39434263D21FA7397949F39F244_gshared (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
extern "C" IL2CPP_METHOD_ATTR Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * TaskCompletionSource_1_get_Task_m9329D3F5934204E0569D9E62652D410AE3AD8F44_gshared (TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_gshared (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m3A77018A60870C828E549796E331896683B62705_gshared (TaskCompletionSource_1_t6C02642279BC7BF03091A8CB685FC6B4E68BED12 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
extern "C" IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * TaskCompletionSource_1_get_Task_mE3DDBDE4F3FB8A530456D158F4C460E85A4974B9_gshared (TaskCompletionSource_1_t6C02642279BC7BF03091A8CB685FC6B4E68BED12 * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared (EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m2597682B0DDA25AD5310A52CBBA88D8DD8DFBAC0_gshared (String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Object>(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m6A2C76FD29784691B5EB1C0AC6F156A983508B89_gshared (intptr_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m5DBFEC24E0DC9FC8734E858A489BC7B8B64B0BFF_gshared (String_t* p0, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Int32Enum>(!!0[],!!0)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_mBEB3AE9783E299CC73E61FB5350FA779DB1C80D2_gshared (Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* p0, int32_t p1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Int32Enum>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR List_1_t116A3B8CE581BED3D4552A7F22FE553557ADC4C5 * Enumerable_ToList_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_mD7A6A554DDB29912C3A863FC8DFA074AE81F11E2_gshared (RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Int32Enum,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_2__ctor_mE57949BFC29C854D1CB9ACC0D14A3DD016E84993_gshared (Func_2_tDDF77F36600A668273BF1A3C083A30113D6E51CB * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Int32Enum,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_TisRuntimeObject_m0A81FED89FA05CAF43592B34B19C6EA200FC8EB2_gshared (RuntimeObject* p0, Func_2_tDDF77F36600A668273BF1A3C083A30113D6E51CB * p1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Enumerable_ToArray_TisRuntimeObject_mF33F5D8045B820AE98F4EEE7524A58F9B52436DA_gshared (RuntimeObject* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4566F033303F52A6D430A06E5FA2D29E2A8D6ED3_gshared (RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetResult(!0)
extern "C" IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m034EA77A1AA02DF06AC5B882AA38AA79BAF51754_gshared (TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m2F4B147DEC855146FD0EDA4C46398F7DA148FD1B_gshared (EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m0A52F3C5B5FF663BE30EF619B4D961185A4C97EC_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// T Vuplex.WebView.EventArgs`1<UnityEngine.Vector2>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  EventArgs_1_get_Value_m55F02A187457EDA7101C659E455C00F59E19B229_gshared (EventArgs_1_t9FFFE64CD86469F3303B155EE4D2AA8719A34E8F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_m68D3406339E1B2B961D358E52E3C91503568C27E_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// T Vuplex.WebView.EventArgs`1<UnityEngine.Rect>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  EventArgs_1_get_Value_mC97C715553CF288B9A69829B2D0DF13BE9A4C987_gshared (EventArgs_1_t264C9EC409E765DA460145D1F5251E6CEFA7D973 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * Enumerable_ToList_TisRuntimeObject_m4E22BE033B818CC1081A3C0D02E9D139A4DABFD3_gshared (RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!0> System.Collections.Generic.List`1<System.Object>::GetRange(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * List_1_GetRange_m77C864252F5CBB9626B106BA9C72C62E40020F15_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m251F203B12669585A5E663F529F6DF09F931B5DA_gshared (const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Texture2D>::Invoke(!0)
inline void Action_1_Invoke_m4FDEC794781FBC6B576389503CE9A9B7ED1A06AB (Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77 * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77 *, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, p0, method);
}
// System.Void System.Action`1<UnityEngine.Material>::Invoke(!0)
inline void Action_1_Invoke_mAEF60C0D26E6CB251A8E07EEAB9A0233801E88BD (Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 *, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, p0, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// UnityEngine.Vector2 Vuplex.WebView.MockWebView::get_Size()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MockWebView_get_Size_m668EA91461840CFFA61DFF0A7B4459BE0ADAA944 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float p0, float p1, const RuntimeMethod* method);
// System.Void Vuplex.WebView.MockWebView::Init(UnityEngine.Texture2D,System.Single,System.Single,UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_Init_m640C398D0EDDC9DC4D9F8FB94FE83CF23D1DC405 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___viewportTexture0, float ___width1, float ___height2, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___videoTexture3, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Vuplex.WebView.MockWebView>()
inline MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * GameObject_AddComponent_TisMockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7_mC0EED77203046BFDF11B7F8935EBE728B4D380CB (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// System.Void Vuplex.WebView.MockWebView::set_Texture(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_set_Texture_m0D2536866F92349C6A2B9A790B64697167712F46 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___value0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.MockWebView::set_VideoTexture(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_set_VideoTexture_mB6F852112990630A13EABCA3177FEF84917AEDDE (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___value0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.MockWebView::set_Size(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_set_Size_mEF77EA494EE710456BF19A20FBD45EF577533318 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.MockWebView::set_IsInitialized(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_set_IsInitialized_mDECB737F2ED380C64BEE8DF928B9F60988BCD26F (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Single_ToString_m211B5E14B0C60667C56838D5C3788CFA58670DDE (float* __this, String_t* p0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.MockWebView::_log(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, String_t* ___message0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared)(method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
inline void TaskCompletionSource_1__ctor_m8DE03339B68AF1101DC4477F47D7729AC5C9F608 (TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m8DE03339B68AF1101DC4477F47D7729AC5C9F608_gshared)(__this, method);
}
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mAC998B8AD6A8D39434263D21FA7397949F39F244 (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAC998B8AD6A8D39434263D21FA7397949F39F244_gshared)(__this, p0, p1, method);
}
// System.Void Vuplex.WebView.MockWebView::CanGoBack(System.Action`1<System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_CanGoBack_mC2276E4E373317A6DC0800EC40A48F9D4449D0B3 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
inline Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * TaskCompletionSource_1_get_Task_m9329D3F5934204E0569D9E62652D410AE3AD8F44 (TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * (*) (TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m9329D3F5934204E0569D9E62652D410AE3AD8F44_gshared)(__this, method);
}
// System.Void Vuplex.WebView.MockWebView::CanGoForward(System.Action`1<System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_CanGoForward_mA829372BB1718BAD43A11520CCC3139E57DAAE1B (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, bool p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, bool, const RuntimeMethod*))Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_gshared)(__this, p0, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte[]>::.ctor()
inline void TaskCompletionSource_1__ctor_m446C67D6303F5CA8E10157F29BFB0B6DCD2429A2 (TaskCompletionSource_1_tB4013FB3A5C28FCEF0646F3ABE1C6F7C35A30C72 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tB4013FB3A5C28FCEF0646F3ABE1C6F7C35A30C72 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m3A77018A60870C828E549796E331896683B62705_gshared)(__this, method);
}
// System.Void System.Action`1<System.Byte[]>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mCD8302FC6FE684869E9533861A0EE32E3195AD35 (Action_1_tCFD7D0EFEF517D00FE88360104518B2070A270A2 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCFD7D0EFEF517D00FE88360104518B2070A270A2 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, p0, p1, method);
}
// System.Void Vuplex.WebView.MockWebView::CaptureScreenshot(System.Action`1<System.Byte[]>)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_CaptureScreenshot_m799C7C8268344CF5CF2A7A948F2718724EDBAA90 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, Action_1_tCFD7D0EFEF517D00FE88360104518B2070A270A2 * ___callback0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Byte[]>::get_Task()
inline Task_1_t2ED0F6929D1C02BC2CEF49AC8D20FFCA4E41D648 * TaskCompletionSource_1_get_Task_mDF1880FB9E18FC04E5FE0D02DE7208DF581CAC54 (TaskCompletionSource_1_tB4013FB3A5C28FCEF0646F3ABE1C6F7C35A30C72 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t2ED0F6929D1C02BC2CEF49AC8D20FFCA4E41D648 * (*) (TaskCompletionSource_1_tB4013FB3A5C28FCEF0646F3ABE1C6F7C35A30C72 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mE3DDBDE4F3FB8A530456D158F4C460E85A4974B9_gshared)(__this, method);
}
// System.Void System.Action`1<System.Byte[]>::Invoke(!0)
inline void Action_1_Invoke_mE2800B8E7A8B62C005C1EA186199E5413CB35A5F (Action_1_tCFD7D0EFEF517D00FE88360104518B2070A270A2 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCFD7D0EFEF517D00FE88360104518B2070A270A2 *, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, p0, method);
}
// System.String UnityEngine.Vector2::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Vector2_ToString_m270ACF7952BD3D18BBF2C43767400BFD9CF8C4DB (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.MockWebView::set_IsDisposed(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_set_IsDisposed_mE74151C17FFE9B9B7CC7C3EE1E1F50464C3EDF6A (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::.ctor()
inline void TaskCompletionSource_1__ctor_m7FF4CB19A6FFF62BC7704E01DE773276895D0061 (TaskCompletionSource_1_t740D6B4559A97E4E740413E4EB4F1F90A84CB317 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t740D6B4559A97E4E740413E4EB4F1F90A84CB317 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m3A77018A60870C828E549796E331896683B62705_gshared)(__this, method);
}
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3 (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, p0, p1, method);
}
// System.Void Vuplex.WebView.MockWebView::ExecuteJavaScript(System.String,System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_ExecuteJavaScript_m9BA34F6811E44BD7FD37BF81C5FDE75D59B9018A (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, String_t* ___javaScript0, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___callback1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.String>::get_Task()
inline Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * TaskCompletionSource_1_get_Task_m0318082F7A10338098BC30D69462BD4DF8CD11EF (TaskCompletionSource_1_t740D6B4559A97E4E740413E4EB4F1F90A84CB317 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * (*) (TaskCompletionSource_1_t740D6B4559A97E4E740413E4EB4F1F90A84CB317 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mE3DDBDE4F3FB8A530456D158F4C460E85A4974B9_gshared)(__this, method);
}
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * __this, String_t* p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *, String_t*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, p0, method);
}
// System.Void Vuplex.WebView.MockWebView::GetRawTextureData(System.Action`1<System.Byte[]>)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_GetRawTextureData_m419A8D44E56EE0BF9BA04DDF357510B5DD0800AD (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, Action_1_tCFD7D0EFEF517D00FE88360104518B2070A270A2 * ___callback0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.MockWebView::set_Url(System.String)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_set_Url_mE5BA081DFF9085B46C94736E1258742EC2A87A6A (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Vuplex.WebView.MockWebView::get_Url()
extern "C" IL2CPP_METHOD_ATTR String_t* MockWebView_get_Url_m3A39906A792B2FC6DF6EA2B98309C72B32A1E5B1 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method);
// System.Void Vuplex.WebView.UrlChangedEventArgs::.ctor(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UrlChangedEventArgs__ctor_m2002CFC345EC8B2BBA28C64B406F6759AB2D413A (UrlChangedEventArgs_tDB743B0064FEB99171B5C0674C472A33DAE627D6 * __this, String_t* ___url0, String_t* ___title1, String_t* ___type2, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Vuplex.WebView.UrlChangedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m1FDA85A53D246720364C1DCEA0DB747F6B92A5EF (EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * __this, RuntimeObject * p0, UrlChangedEventArgs_tDB743B0064FEB99171B5C0674C472A33DAE627D6 * p1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A *, RuntimeObject *, UrlChangedEventArgs_tDB743B0064FEB99171B5C0674C472A33DAE627D6 *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, p0, p1, method);
}
// System.Void Vuplex.WebView.ProgressChangedEventArgs::.ctor(Vuplex.WebView.ProgressChangeType,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ProgressChangedEventArgs__ctor_m9E87AD9D18E12DC9BC77A16EDFCCBD2AD81E747B (ProgressChangedEventArgs_t89FBDCB348ABD3DF4D5B52ED48C20CBC3338E14E * __this, int32_t ___type0, float ___progress1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Vuplex.WebView.ProgressChangedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m5C072AF2E55C5B2CAC182D8B11222A2A45C5101B (EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * __this, RuntimeObject * p0, ProgressChangedEventArgs_t89FBDCB348ABD3DF4D5B52ED48C20CBC3338E14E * p1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 *, RuntimeObject *, ProgressChangedEventArgs_t89FBDCB348ABD3DF4D5B52ED48C20CBC3338E14E *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, p0, p1, method);
}
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Debug_LogFormat_mB23DDD2CD05B2E66F9CF8CA72ECA66C02DCC209E (String_t* p0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void Vuplex.WebView.PointerOptions::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PointerOptions__ctor_mE9FCC4FCDF8D1BB58EE1E3AF04C9F19428BF3D8A (PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6 * __this, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7 (EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<Vuplex.WebView.StringBridgeMessage>(System.String)
inline StringBridgeMessage_tCE04AF76CE8FFB5504BBB6667549113FEAF288D7 * JsonUtility_FromJson_TisStringBridgeMessage_tCE04AF76CE8FFB5504BBB6667549113FEAF288D7_mBBD8ADE6FB0B0C4323BA79CEAEA798CB22388891 (String_t* p0, const RuntimeMethod* method)
{
	return ((  StringBridgeMessage_tCE04AF76CE8FFB5504BBB6667549113FEAF288D7 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m2597682B0DDA25AD5310A52CBBA88D8DD8DFBAC0_gshared)(p0, method);
}
// System.Void Vuplex.WebView.BridgeMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BridgeMessage__ctor_mAE05ED7DBBB953128C59354F00F692FBD94B9B07 (BridgeMessage_tC26A17AE8856C3B00DDF35B7C28A95583F34096F * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawObject()
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_mAEB3A269841B8D0BB5701C59AC7463DF7806CA2F (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJNIHelper::ConvertFromJNIArray<System.Byte[]>(System.IntPtr)
inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* AndroidJNIHelper_ConvertFromJNIArray_TisByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_m9D93404DD3C510A7C80EA522A17C8564BED7A371 (intptr_t p0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m6A2C76FD29784691B5EB1C0AC6F156A983508B89_gshared)(p0, method);
}
// !!0 UnityEngine.Resources::Load<UnityEngine.Material>(System.String)
inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Resources_Load_TisMaterial_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_m03D88584A63B0ABDC1B4BE7B8EB210D9ECBEDE03 (String_t* p0, const RuntimeMethod* method)
{
	return ((  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m5DBFEC24E0DC9FC8734E858A489BC7B8B64B0BFF_gshared)(p0, method);
}
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * p0, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<UnityEngine.Rendering.GraphicsDeviceType>(!!0[],!!0)
inline int32_t Array_IndexOf_TisGraphicsDeviceType_tA87720B0E7A15371E70249FC9F4EAE7644015552_m45C497A46A18BB36CBBBDB7BCFA094446E909CFE (GraphicsDeviceTypeU5BU5D_t4560B66B4261C7B1422FAA96584DAADE6A935A86* p0, int32_t p1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GraphicsDeviceTypeU5BU5D_t4560B66B4261C7B1422FAA96584DAADE6A935A86*, int32_t, const RuntimeMethod*))Array_IndexOf_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_mBEB3AE9783E299CC73E61FB5350FA779DB1C80D2_gshared)(p0, p1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.Rendering.GraphicsDeviceType>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t3C4F493AD36BE7F2EEDD54D8C0A784299FD3E32D * Enumerable_ToList_TisGraphicsDeviceType_tA87720B0E7A15371E70249FC9F4EAE7644015552_m125119326AC72B6E5C2EA3BB2AFB9FD49B2E3D8E (RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  List_1_t3C4F493AD36BE7F2EEDD54D8C0A784299FD3E32D * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_mD7A6A554DDB29912C3A863FC8DFA074AE81F11E2_gshared)(p0, method);
}
// System.Void System.Func`2<UnityEngine.Rendering.GraphicsDeviceType,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m996B551BC4F8A8D65A1A2BD0723B71F85C96828D (Func_2_t3AB8FFCCD295F3CB6B51AB07C8ADE78F376F3FBC * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3AB8FFCCD295F3CB6B51AB07C8ADE78F376F3FBC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE57949BFC29C854D1CB9ACC0D14A3DD016E84993_gshared)(__this, p0, p1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<UnityEngine.Rendering.GraphicsDeviceType,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisGraphicsDeviceType_tA87720B0E7A15371E70249FC9F4EAE7644015552_TisString_t_m1DBBAE98C6B42C5AFF68534E0C35EB116FC7878F (RuntimeObject* p0, Func_2_t3AB8FFCCD295F3CB6B51AB07C8ADE78F376F3FBC * p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t3AB8FFCCD295F3CB6B51AB07C8ADE78F376F3FBC *, const RuntimeMethod*))Enumerable_Select_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_TisRuntimeObject_m0A81FED89FA05CAF43592B34B19C6EA200FC8EB2_gshared)(p0, p1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Enumerable_ToArray_TisString_t_m1BAD76FB02571EB3CCC5BB00D4D581399F8523FC (RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mF33F5D8045B820AE98F4EEE7524A58F9B52436DA_gshared)(p0, method);
}
// System.String System.String::Join(System.String,System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4 (String_t* p0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* p1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.Utils/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF56B83720E84EDABCE279ACE2BCB2EED50544E39 (U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
extern "C" IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * p0, const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C" IL2CPP_METHOD_ATTR Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * Material_get_mainTexture_mE85CF647728AD145D7E03A172EFD5930773E514E (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void Material_set_mainTexture_m0742CFF768E9701618DA07C71F009239AB31EB41 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Renderer::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Renderer_get_enabled_m40E07BB15DA58D2EF6F6796C6778163107DD7E1B (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool p0, const RuntimeMethod* method);
// UnityEngine.Vector4 Vuplex.WebView.ViewportMaterialView::_rectToVector(UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ViewportMaterialView__rectToVector_mE82B968055D2A0CF24B5D1327179253FDC4EFF3D (ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___rect0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR void Material_SetVector_m6FC2CC4EBE6C45D48D8B9164148A0CB3124335EC (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* p0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::op_Inequality(UnityEngine.Rect,UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR bool Rect_op_Inequality_mAF9DC03779A7C3E1B430D7FFA797F2C4CEAD1FC7 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  p0, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* p0, float p1, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_x()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_y()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Material>::.ctor()
inline void TaskCompletionSource_1__ctor_m1C2FD4998ADA138B6C41A33EC0FB0FB8548CF92A (TaskCompletionSource_1_t8083C9684F0A5B46C36EB727C3A0F3739EA59EC4 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8083C9684F0A5B46C36EB727C3A0F3739EA59EC4 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m3A77018A60870C828E549796E331896683B62705_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.Material>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mFE4DACEE3A547513AF5929267E7200E2739B7E14 (Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, p0, p1, method);
}
// System.Void Vuplex.WebView.Web::CreateMaterial(System.Action`1<UnityEngine.Material>)
extern "C" IL2CPP_METHOD_ATTR void Web_CreateMaterial_mF6009E6F4CB95447C58F2D0E14E5FC22681ECF29 (Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * ___callback0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Material>::get_Task()
inline Task_1_t74879D22F3CC6429D4D6FCC94A7597CE737CB1DA * TaskCompletionSource_1_get_Task_mA42AB9FA0F829428BE4C498890B2F344E28E8566 (TaskCompletionSource_1_t8083C9684F0A5B46C36EB727C3A0F3739EA59EC4 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t74879D22F3CC6429D4D6FCC94A7597CE737CB1DA * (*) (TaskCompletionSource_1_t8083C9684F0A5B46C36EB727C3A0F3739EA59EC4 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mE3DDBDE4F3FB8A530456D158F4C460E85A4974B9_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Texture2D>::.ctor()
inline void TaskCompletionSource_1__ctor_m1956B55AE4E1C8B54B70936B575997159656ED69 (TaskCompletionSource_1_tBBC53B913B9FA8D229904EF7E262A97A678D57AA * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tBBC53B913B9FA8D229904EF7E262A97A678D57AA *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m3A77018A60870C828E549796E331896683B62705_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.Texture2D>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC973C70328D6C85A8183929F295AABE327469148 (Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, p0, p1, method);
}
// System.Void Vuplex.WebView.Web::CreateTexture(System.Single,System.Single,System.Action`1<UnityEngine.Texture2D>)
extern "C" IL2CPP_METHOD_ATTR void Web_CreateTexture_m210998CB0F096B4058D2B6F53A1D238500428D0F (float ___width0, float ___height1, Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77 * ___callback2, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Texture2D>::get_Task()
inline Task_1_tB68DBA6DA1120A65465275E18B4DD57CA6580BB1 * TaskCompletionSource_1_get_Task_m4242037F4A9E8C7E15364B30CC754D27826FBD7C (TaskCompletionSource_1_tBBC53B913B9FA8D229904EF7E262A97A678D57AA * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tB68DBA6DA1120A65465275E18B4DD57CA6580BB1 * (*) (TaskCompletionSource_1_tBBC53B913B9FA8D229904EF7E262A97A678D57AA *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mE3DDBDE4F3FB8A530456D158F4C460E85A4974B9_gshared)(__this, method);
}
// System.Void Vuplex.WebView.WebPluginFactory::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WebPluginFactory__ctor_m24C06C745DAC20E3CE0A2138ED677F11393CE0FC (WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 * __this, const RuntimeMethod* method);
// System.Void Vuplex.WebView.WebViewUnavailableException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void WebViewUnavailableException__ctor_m53F78BA2AAA1C8F59DCB6609CBCDE811EB6AE11E (WebViewUnavailableException_tD560D304E48B8C3927F8ED93B647C9EDBE5D4B1B * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * p0, const RuntimeMethod* method);
// Vuplex.WebView.MockWebPlugin Vuplex.WebView.MockWebPlugin::get_Instance()
extern "C" IL2CPP_METHOD_ATTR MockWebPlugin_t99272A529401AD5952F2575D14546B41B7129706 * MockWebPlugin_get_Instance_mC313676E7F215E61750C38E24F66E3FB0C194BCC (const RuntimeMethod* method);
// Vuplex.WebView.ViewportMaterialView Vuplex.WebView.WebViewPrefab::_getDefaultView()
extern "C" IL2CPP_METHOD_ATTR ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * WebViewPrefab__getDefaultView_mA9F972BA99F0344C4A4B189D532A148EA374A1A9 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * Component_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m6B8E8E0E0AF6B08652B81B7950FC5AF63EAD40C6 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// Vuplex.WebView.ViewportMaterialView Vuplex.WebView.WebViewPrefab::_getVideoLayer()
extern "C" IL2CPP_METHOD_ATTR ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * WebViewPrefab__getVideoLayer_mB5724AEF4C9D3F5E7EDF7D626FD9345FCE643AEB (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method);
// Vuplex.WebView.WebViewPrefab Vuplex.WebView.WebViewPrefab::Instantiate(System.Single,System.Single,Vuplex.WebView.WebViewOptions)
extern "C" IL2CPP_METHOD_ATTR WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * WebViewPrefab_Instantiate_m91A51598D793201B9D13F612834861B520B092E5 (float ___width0, float ___height1, WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C  ___options2, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
extern "C" IL2CPP_METHOD_ATTR Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1 (String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4566F033303F52A6D430A06E5FA2D29E2A8D6ED3_gshared)(p0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Vuplex.WebView.WebViewPrefab>()
inline WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * GameObject_GetComponent_TisWebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE_m966B1BA11F9B73255B21EB2EAFA0D24F75348E70 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void Vuplex.WebView.WebViewPrefab::Init(Vuplex.WebView.IWebView)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_Init_m236885ABF8FDA9717A1D8C3947D84C33876FD4D0 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, RuntimeObject* ___webView0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void Vuplex.WebView.WebViewPrefab::_init(System.Single,System.Single,Vuplex.WebView.WebViewOptions,Vuplex.WebView.IWebView)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__init_mF91085566A79B6477FF2C639B4BC414887409FB3 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, float ___width0, float ___height1, WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C  ___options2, RuntimeObject* ___initializedWebView3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_InverseTransformPoint_mB6E3145F20B531B4A781C194BAC43A8255C96C47 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.WebViewPrefab::_setViewSize(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__setViewSize_mD45418D1E463C96C1AA4484C3D4C4FFB12BAF411 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, float ___width0, float ___height1, const RuntimeMethod* method);
// System.Void Vuplex.WebView.WebViewPrefab::_initPointerInputDetector(Vuplex.WebView.IWebView,Vuplex.WebView.IPointerInputDetector)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__initPointerInputDetector_m4559BFB33C2C878457336206D3B50121C0D5870F (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, RuntimeObject* ___webView0, RuntimeObject* ___previousPointerInputDetector1, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool p0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.WebViewPrefab/<>c__DisplayClass48_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0__ctor_m123DF26F984F420D51F4D64F1844136A744DAAC5 (U3CU3Ec__DisplayClass48_0_t57C19DEA26A6D9E8471D89B5826654B5DB26CF07 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetResult(!0)
inline void TaskCompletionSource_1_SetResult_m034EA77A1AA02DF06AC5B882AA38AA79BAF51754 (TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 * __this, bool p0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 *, bool, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m034EA77A1AA02DF06AC5B882AA38AA79BAF51754_gshared)(__this, p0, method);
}
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void Vuplex.WebView.WebViewPrefab::add_Initialized(System.EventHandler)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_add_Initialized_mC6B16CDB0A243D13FF76EDE265D4EF4744F1FB92 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Vuplex.WebView.EventArgs`1<UnityEngine.Rect>>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mE38EEA9633C8509E9B507EEA707BF2C3962D3649 (EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2F4B147DEC855146FD0EDA4C46398F7DA148FD1B_gshared)(__this, p0, p1, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* p0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.WebViewPrefab::Init()
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_Init_mCF3514946F4D01E3396BB5415540C6B8F9D35BC5 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Vuplex.WebView.ViewportMaterialView>()
inline ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * Component_GetComponent_TisViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013_m105D71127F0D20D233112057AD746096AE0B21A8 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// UnityEngine.Transform Vuplex.WebView.WebViewPrefab::_getVideoRectPositioner()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * WebViewPrefab__getVideoRectPositioner_m390E1F260AE80C51044BE830A5A7F6C3F72164AC (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<Vuplex.WebView.ViewportMaterialView>()
inline ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * Component_GetComponentInChildren_TisViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013_m9600D5CBA071D6C4BA029349F9EAADCF56394E07 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m0A52F3C5B5FF663BE30EF619B4D961185A4C97EC_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t p0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.WebViewPrefab/<>c__DisplayClass74_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass74_0__ctor_m4C414EB82435B75E2666AF5F0D4FC29642E76B14 (U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338 * __this, const RuntimeMethod* method);
// System.Void Vuplex.WebView.WebViewPrefab::_throwExceptionIfInitialized()
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__throwExceptionIfInitialized_m6E2F7CAA21DF83F8DE5BC8566C2CF6F92A46F0A4 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method);
// System.Void Vuplex.WebView.WebViewPrefab::_resetLocalScale()
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__resetLocalScale_m0E922AD2F4E1BAE663CD73BBD0B971FC0F2F6653 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method);
// Vuplex.WebView.IWebView Vuplex.WebView.Web::CreateWebView(Vuplex.WebView.WebPluginType[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Web_CreateWebView_m8B08CB5C160A4654978AC73251CB67A02B42123C (WebPluginTypeU5BU5D_tF25070ED5E0BC7C81ADE86F416BFFFD5472E14B8* ___preferredPlugins0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.WebViewPrefab::_attachWebViewEventHandlers(Vuplex.WebView.IWebView)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__attachWebViewEventHandlers_m0520D909F99AAF3050262ED7BD7BABA4DB035728 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, RuntimeObject* ___webView0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB (String_t* p0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p1, const RuntimeMethod* method);
// System.Void Vuplex.WebView.WebViewPrefab::_initView()
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__initView_m5C098646B820A9E333D423F0A8B7F1ABD8E4E049 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method);
// System.Void Vuplex.WebView.WebViewPrefab::_initVideoLayer()
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__initVideoLayer_m0FE16F761EA8F9E420D9739988F2610CDFF2B733 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool p0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.WebViewPrefab::_initWebViewIfReady(Vuplex.WebView.IWebView)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__initWebViewIfReady_m4CB1839D1116D6681C6A68D582FF5262661D3302 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, RuntimeObject* ___webView0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.Web::CreateVideoMaterial(System.Action`1<UnityEngine.Material>)
extern "C" IL2CPP_METHOD_ATTR void Web_CreateVideoMaterial_mBDFC31FE1992719604DDF0B85426019584AD09A0 (Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * ___callback0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Vuplex.WebView.EventArgs`1<UnityEngine.Vector2>>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m21FC9012EDACF1FCF6883101AAA41B6983FB84B4 (EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2F4B147DEC855146FD0EDA4C46398F7DA148FD1B_gshared)(__this, p0, p1, method);
}
// System.Void System.EventHandler`1<Vuplex.WebView.PointerEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mA3D53174D92F5F1E64F81109717B31DB37CEF0CB (EventHandler_1_tB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2F4B147DEC855146FD0EDA4C46398F7DA148FD1B_gshared)(__this, p0, p1, method);
}
// System.Void System.EventHandler`1<Vuplex.WebView.ScrolledEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mBA7576030ECA6CBA11E2AA1378319EBA1E62D242 (EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2F4B147DEC855146FD0EDA4C46398F7DA148FD1B_gshared)(__this, p0, p1, method);
}
// !!0 UnityEngine.Component::GetComponentInChildren<Vuplex.WebView.IPointerInputDetector>()
inline RuntimeObject* Component_GetComponentInChildren_TisIPointerInputDetector_t26253C0036FF8B030A4D2DB07C1BFB08BAC4DF36_mB33FBE95E65651DE78B2171971D88AB5D5F516AB (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m0A52F3C5B5FF663BE30EF619B4D961185A4C97EC_gshared)(__this, method);
}
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_Invoke_mD23D5EFEA562A05C5EACDD3E91EEDD2BF6C22800 (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * __this, RuntimeObject * p0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * p1, const RuntimeMethod* method);
// System.String System.String::Trim()
extern "C" IL2CPP_METHOD_ATTR String_t* String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B (String_t* __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Vector2 Vuplex.WebView.WebViewPrefab::_convertRatioPointToUnityUnits(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  WebViewPrefab__convertRatioPointToUnityUnits_m89ABD1E1D39B6C92CE787C73BC18CF09153AB0AB (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___point0, const RuntimeMethod* method);
// T Vuplex.WebView.EventArgs`1<UnityEngine.Vector2>::get_Value()
inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  EventArgs_1_get_Value_m55F02A187457EDA7101C659E455C00F59E19B229 (EventArgs_1_t9FFFE64CD86469F3303B155EE4D2AA8719A34E8F * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  (*) (EventArgs_1_t9FFFE64CD86469F3303B155EE4D2AA8719A34E8F *, const RuntimeMethod*))EventArgs_1_get_Value_m55F02A187457EDA7101C659E455C00F59E19B229_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// System.Void Vuplex.WebView.WebViewPrefab::_movePointerIfNeeded(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__movePointerIfNeeded_m68349506D83FB9F076C2EB231EF316B2C4FCEAFE (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___point0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.WebViewPrefab::_scrollIfNeeded(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__scrollIfNeeded_m8D6FB7661DB30A5BDA99AF27C9E669A984EC18ED (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___scrollDelta0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___point1, const RuntimeMethod* method);
// Vuplex.WebView.PointerOptions Vuplex.WebView.PointerEventArgs::ToPointerOptions()
extern "C" IL2CPP_METHOD_ATTR PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6 * PointerEventArgs_ToPointerOptions_mA8B38EC332D839CA31CE5656C1AE58AD9C6BF746 (PointerEventArgs_tEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
// System.Void Vuplex.WebView.ClickedEventArgs::.ctor(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void ClickedEventArgs__ctor_m0A93D7E604B1AA1264DCC6A45C3F8D87EAEF4844 (ClickedEventArgs_t15D6CC25B940C4DE73028D179F1D002ABBC65B25 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___point0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Vuplex.WebView.ClickedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m8F52667860D12B30330374B902DEB3822EBEC3FE (EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * __this, RuntimeObject * p0, ClickedEventArgs_t15D6CC25B940C4DE73028D179F1D002ABBC65B25 * p1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E *, RuntimeObject *, ClickedEventArgs_t15D6CC25B940C4DE73028D179F1D002ABBC65B25 *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, p0, p1, method);
}
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mC16161C640C89D98A00800924F83FF09FD7C100E (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// System.Void Vuplex.WebView.WebViewPrefab::Destroy()
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_Destroy_mF72F901B59834762E5FF809B2B007EF34FAC780A (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<Vuplex.WebView.IWebView>()
inline RuntimeObject* GameObject_GetComponentInChildren_TisIWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_m1FEC8153AFCF69F230EB0EF49A10B6B29176C15A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_m68D3406339E1B2B961D358E52E3C91503568C27E_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localEulerAngles_m445AD7F6706B0BDABA8A875C899EB1E1DF1A2A2B (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m0E86E1B1038DDB8554A8A0D58729A7788D989588 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// System.Void Vuplex.WebView.ScrolledEventArgs::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void ScrolledEventArgs__ctor_m23022F20F93F4EC86847064FB7E2E6EDE5681FF3 (ScrolledEventArgs_t4DC4E49687FC1C4A753AD5C53DA266E1AAB24FC1 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___scrollDelta0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___point1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Vuplex.WebView.ScrolledEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m0A8B07D7304D59AB60E1E09F390A83AFCD7E4C1B (EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * __this, RuntimeObject * p0, ScrolledEventArgs_t4DC4E49687FC1C4A753AD5C53DA266E1AAB24FC1 * p1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 *, RuntimeObject *, ScrolledEventArgs_t4DC4E49687FC1C4A753AD5C53DA266E1AAB24FC1 *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, p0, p1, method);
}
// System.Single System.Math::Max(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Math_Max_m545895C37C1F738BBB653CA1F65E50FF1D197675 (float p0, float p1, const RuntimeMethod* method);
// System.Single System.Math::Min(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Math_Min_mB77A95F6A1FE3B8E7CD784F20AF4E1C908B5E9CD (float p0, float p1, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Rect::MinMaxRect(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  Rect_MinMaxRect_m9513FDB332B24FB8B49202C7350FF7223477F54F (float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::op_Equality(UnityEngine.Rect,UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR bool Rect_op_Equality_mFBE3505CEDD6B73F66276E782C1B02E0E5633563 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  p0, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  p1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* p0, const RuntimeMethod* method);
// T Vuplex.WebView.EventArgs`1<UnityEngine.Rect>::get_Value()
inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  EventArgs_1_get_Value_mC97C715553CF288B9A69829B2D0DF13BE9A4C987 (EventArgs_1_t264C9EC409E765DA460145D1F5251E6CEFA7D973 * __this, const RuntimeMethod* method)
{
	return ((  Rect_t35B976DE901B5423C11705E156938EA27AB402CE  (*) (EventArgs_1_t264C9EC409E765DA460145D1F5251E6CEFA7D973 *, const RuntimeMethod*))EventArgs_1_get_Value_mC97C715553CF288B9A69829B2D0DF13BE9A4C987_gshared)(__this, method);
}
// System.Void Vuplex.WebView.WebViewPrefab::_setVideoRect(UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__setVideoRect_mD369E5C054E170A98321B6E0B8FA591BF7494FD3 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___videoRect0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.iOSWebPlugin::.ctor()
extern "C" IL2CPP_METHOD_ATTR void iOSWebPlugin__ctor_mCCF24846AA4790C3F53CCDFDAF109BA1602163FA (iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC * __this, const RuntimeMethod* method);
// System.Void Vuplex.WebView.BaseWebView::ClearAllData()
extern "C" IL2CPP_METHOD_ATTR void BaseWebView_ClearAllData_m36737D9327CF84790649EA4117D19074AA41B82B (const RuntimeMethod* method);
// System.Void Vuplex.WebView.BaseWebView::CreateTexture(System.Single,System.Single,System.Action`1<UnityEngine.Texture2D>)
extern "C" IL2CPP_METHOD_ATTR void BaseWebView_CreateTexture_mC94AAEAF49FB4680E756E5FC9AA13E545176D0AC (float ___width0, float ___height1, Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77 * ___callback2, const RuntimeMethod* method);
// System.Void Vuplex.WebView.iOSWebPlugin/<>c__DisplayClass4_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mDB42FCD92F56F18F33309367147DAA9A22B6F1B4 (U3CU3Ec__DisplayClass4_0_tC23435C025706E1F31BDD4A3EF77E2881D555CCC * __this, const RuntimeMethod* method);
// System.Void Vuplex.WebView.iOSWebPlugin::CreateTexture(System.Single,System.Single,System.Action`1<UnityEngine.Texture2D>)
extern "C" IL2CPP_METHOD_ATTR void iOSWebPlugin_CreateTexture_mD25F885EF6C2E8F592CE0A56A4B2E3B1E0B51521 (iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC * __this, float ___width0, float ___height1, Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77 * ___callback2, const RuntimeMethod* method);
// System.Void Vuplex.WebView.iOSWebPlugin/<>c__DisplayClass5_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m7E3EC3289E2348D5B188FB13CA1073150A17D064 (U3CU3Ec__DisplayClass5_0_tCB62563B9978E5FDC80A03614670C70495DA69E0 * __this, const RuntimeMethod* method);
// Vuplex.WebView.iOSWebView Vuplex.WebView.iOSWebView::Instantiate()
extern "C" IL2CPP_METHOD_ATTR iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * iOSWebView_Instantiate_mC4AA8C60865B003F043F91746C78E4DAF21C4D98 (const RuntimeMethod* method);
// System.Void Vuplex.WebView.iOSWebView::SetIgnoreCertificateErrors(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_SetIgnoreCertificateErrors_mDF21F6E347AE107C46E8201A5992E0ACCD12C3F1 (bool ___ignore0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.BaseWebView::SetStorageEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void BaseWebView_SetStorageEnabled_m9A2579498D0CC650BC7238E0A40B253BF97408A4 (bool ___enabled0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.iOSWebView::SetTouchScreenKeyboardEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_SetTouchScreenKeyboardEnabled_m678B27DED2FD736C48F2EDF8FB001A671535B88E (bool ___enabled0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.BaseWebView::GloballySetUserAgent(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void BaseWebView_GloballySetUserAgent_m0DB577B09FBBACA611895601028654498C3D2BF6 (bool ___mobile0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.BaseWebView::GloballySetUserAgent(System.String)
extern "C" IL2CPP_METHOD_ATTR void BaseWebView_GloballySetUserAgent_m81EFEACD50865BAE40B64DF1D6225BBA220C90B4 (String_t* ___userAgent0, const RuntimeMethod* method);
// Vuplex.WebView.iOSWebPlugin Vuplex.WebView.iOSWebPlugin::get_Instance()
extern "C" IL2CPP_METHOD_ATTR iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC * iOSWebPlugin_get_Instance_mC64B31768F437596B7B1CCE1E5985E40120F5950 (const RuntimeMethod* method);
// System.Void Vuplex.WebView.WebPluginFactory::RegisterIOSPlugin(Vuplex.WebView.IWebPlugin)
extern "C" IL2CPP_METHOD_ATTR void WebPluginFactory_RegisterIOSPlugin_mABB6D9949F7DA58D0B1CED7535FAAB469DE8CD80 (RuntimeObject* ___plugin0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Vuplex.WebView.iOSWebView>()
inline iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * GameObject_AddComponent_TisiOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234_mAB65CCC3DE3C1E25EAE09995F5F5CB91BCE9AFA1 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// System.Void Vuplex.WebView.BaseWebView::Init(UnityEngine.Texture2D,System.Single,System.Single,UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void BaseWebView_Init_mDB38417F0CE4ABF5B453A3591F90729F239757DC (BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___viewportTexture0, float ___width1, float ___height2, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___videoTexture3, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Int32 Vuplex.WebView.BaseWebView::get__nativeWidth()
extern "C" IL2CPP_METHOD_ATTR int32_t BaseWebView_get__nativeWidth_mB68B6545EC5DC8F6DEE60028E8DDF654E58DCB9C (BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB * __this, const RuntimeMethod* method);
// System.Int32 Vuplex.WebView.BaseWebView::get__nativeHeight()
extern "C" IL2CPP_METHOD_ATTR int32_t BaseWebView_get__nativeHeight_m4D65DBD9C5451CABF733F07498DCBAF009CEF47C (BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB * __this, const RuntimeMethod* method);
// UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::get_graphicsDeviceType()
extern "C" IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceType_m675AD9D5FA869DF9E71FAEC03F39E8AE8DEBA8D0 (const RuntimeMethod* method);
// System.IntPtr Vuplex.WebView.iOSWebView::WebView_new(System.String,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR intptr_t iOSWebView_WebView_new_m639EBCFCB66633FD285BA9BAE66FB6D432CB98CA (String_t* ___gameObjectName0, int32_t ___width1, int32_t ___height2, bool ___enableVideoSupport3, bool ___useOpenGL4, const RuntimeMethod* method);
// System.Void Vuplex.WebView.iOSWebView::SetCustomUriSchemesEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_SetCustomUriSchemesEnabled_m340855B09A24F483913EFC74AD6CFA3983975671 (bool ___enabled0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.BaseWebView::_assertValidState()
extern "C" IL2CPP_METHOD_ATTR void BaseWebView__assertValidState_mBA2B8E887B524035F5147A6DD7A42E7969AF4A9B (BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB * __this, const RuntimeMethod* method);
// System.Void Vuplex.WebView.iOSWebView::WebView_clickWithoutStealingFocus(System.IntPtr,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_WebView_clickWithoutStealingFocus_m1F7C216F8C2299304E81813DF8218ED2B45AB8F4 (intptr_t ___webViewPtr0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method);
// System.Void Vuplex.WebView.iOSWebView::WebView_captureScreenshot(System.IntPtr,System.IntPtr&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_WebView_captureScreenshot_m579EDFEB709ABEF1F73445FB9915D4690D74A57A (intptr_t ___webViewPtr0, intptr_t* ___bytes1, int32_t* ___length2, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Marshal_Copy_m64744D9E23AFC00AA06CD6B057E19B7C0CE4C0C2 (intptr_t p0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void Vuplex.WebView.iOSWebView::WebView_freeMemory(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_WebView_freeMemory_m450B87825BF7C745AE867C432063E39E9E940244 (intptr_t ___bytes0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::UpdateExternalTexture(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_UpdateExternalTexture_m8A3486B0779454739624888EFD6D9EC42D30874F (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, intptr_t p0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.BaseWebView::EnableViewUpdates()
extern "C" IL2CPP_METHOD_ATTR void BaseWebView_EnableViewUpdates_m30BE43E519B2D7BE1AD868335370993A4C7DD25D (BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB * __this, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* String_Split_m13262358217AD2C119FD1B9733C3C0289D608512 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* p0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * Enumerable_ToList_TisString_t_m5819BB1395C8CAB17E7B1E8EED76702D3AE855B5 (RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m4E22BE033B818CC1081A3C0D02E9D139A4DABFD3_gshared)(p0, method);
}
// System.Collections.Generic.List`1<!0> System.Collections.Generic.List`1<System.String>::GetRange(System.Int32,System.Int32)
inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * List_1_GetRange_m4D719DF591ACF770E8025E84CC1DE0426A543EA1 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method)
{
	return ((  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, int32_t, int32_t, const RuntimeMethod*))List_1_GetRange_m77C864252F5CBB9626B106BA9C72C62E40020F15_gshared)(__this, p0, p1, method);
}
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared)(__this, method);
}
// System.IntPtr Vuplex.WebView.iOSWebView::WebView_getFileUrlForBundleResource(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t iOSWebView_WebView_getFileUrlForBundleResource_mB92FB2A11FF241611F4E015C7C060513ECB3F1C9 (String_t* ___fileNameWithoutExtension0, String_t* ___fileExtension1, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_mA5D5D1AA7C0EB6A96F92454A8AF9C266E2DF5DA5 (intptr_t p0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.iOSWebView::WebView_getRawTextureData(System.IntPtr,System.IntPtr&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_WebView_getRawTextureData_mCACC882C85AABCBED4988734A6C16C8397F5586D (intptr_t ___webViewPtr0, intptr_t* ___bytes1, int32_t* ___length2, const RuntimeMethod* method);
// System.Void Vuplex.WebView.iOSWebView::WebView_allowCustomUriSchemes(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_WebView_allowCustomUriSchemes_m7ABB9611D14C782DB559CC7AEF100CD559112629 (bool ___allowCustomSchemes0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.iOSWebView::WebView_setIgnoreCertificateErrors(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_WebView_setIgnoreCertificateErrors_mD52EC686E92FE747E32FC5C058274DC20376DDA6 (bool ___ignore0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.iOSWebView::WebView_setTouchScreenKeyboardEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_WebView_setTouchScreenKeyboardEnabled_m1520C3875F85F050A24CFC5081B88CE161722F05 (bool ___enabled0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.iOSWebView::WebView_setUserAgentToMobile(System.IntPtr,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_WebView_setUserAgentToMobile_mFC4AF7209467DB931F1F20675A9F9B3F046886BD (intptr_t ___webViewPtr0, bool ___mobile1, const RuntimeMethod* method);
// System.Void Vuplex.WebView.iOSWebView::WebView_setUserAgent(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_WebView_setUserAgent_mD393259EC37912FD0F178B9E77D19D6E4359211A (intptr_t ___webViewPtr0, String_t* ___userAgent1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Texture::GetNativeTexturePtr()
extern "C" IL2CPP_METHOD_ATTR intptr_t Texture_GetNativeTexturePtr_mB29F70DB525E825A4A3BB908F90C06F3171E92FD (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
extern "C" IL2CPP_METHOD_ATTR void Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method);
// System.Void Vuplex.WebView.BaseWebView::WebView_destroyTexture(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void BaseWebView_WebView_destroyTexture_m0E997388D5BC5BFDCBF4D3E48DB0E88BED3DE8C3 (intptr_t ___texture0, String_t* ___graphicsApi1, const RuntimeMethod* method);
// System.Int64 System.Int64::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR int64_t Int64_Parse_mF23EAF76DFE5560832595FCAC1ACABFB717E3D4D (String_t* p0, const RuntimeMethod* method);
// System.Void System.IntPtr::.ctor(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void IntPtr__ctor_m3C2353A241FD6B18CAE68756977D63B85F14DEBD (intptr_t* __this, int64_t p0, const RuntimeMethod* method);
// System.Collections.IEnumerator Vuplex.WebView.iOSWebView::_renderPluginOncePerFrame()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* iOSWebView__renderPluginOncePerFrame_m1776126DDF637676040A07BD422321BAE88DAE30 (iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.iOSWebView/<_renderPluginOncePerFrame>d__20::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3C_renderPluginOncePerFrameU3Ed__20__ctor_m0968DC296F96A4A2210FC020160335B02666381D (U3C_renderPluginOncePerFrameU3Ed__20_tA70D3EF053EFA34A193BA376BE028A94FD4B37E7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Vuplex.WebView.BaseWebView::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseWebView__ctor_mD8AE2CA192EF4E2B89B091D0DD2FD3CAC3D7280C (BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m6CDB79476A4A84CEC62947D36ADED96E907BA20B (WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA * __this, const RuntimeMethod* method);
// System.Boolean Vuplex.WebView.BaseWebView::get_IsDisposed()
extern "C" IL2CPP_METHOD_ATTR bool BaseWebView_get_IsDisposed_m13398DAB3F7E72152E2C998676A6DD0E75682F2B (BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB * __this, const RuntimeMethod* method);
// System.Int32 Vuplex.WebView.iOSWebView::WebView_depositPointer(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t iOSWebView_WebView_depositPointer_m7E5D7586B1E2AA9CF9CC7072B65ABEE9E6271A54 (intptr_t ___pointer0, const RuntimeMethod* method);
// System.IntPtr Vuplex.WebView.iOSWebView::WebView_getRenderFunction()
extern "C" IL2CPP_METHOD_ATTR intptr_t iOSWebView_WebView_getRenderFunction_m6F379FA8732DAC89D82998F7D3E1132343B997D0 (const RuntimeMethod* method);
// System.Void UnityEngine.GL::IssuePluginEvent(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GL_IssuePluginEvent_mE95C5B1FBEA4BEE77FC0F0DFB539EE41E4472125 (intptr_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<Mapbox.Unity.Map.AbstractMap>()
inline AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6 * Object_FindObjectOfType_TisAbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6_mAD69E97D9DD8BC735BDF7AE33522EC43FE33D69D (const RuntimeMethod* method)
{
	return ((  AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m251F203B12669585A5E663F529F6DF09F931B5DA_gshared)(method);
}
// System.Void WebHandler::PostToDatabase()
extern "C" IL2CPP_METHOD_ATTR void WebHandler_PostToDatabase_mE53F400673D8CA3F5A8777ED3B33AF7008F24D93 (WebHandler_tEF3DFECC162F8A29528A5C0396B8D3A36C490A78 * __this, const RuntimeMethod* method);
// System.Void User::.ctor()
extern "C" IL2CPP_METHOD_ATTR void User__ctor_mB5B1D42F0980D69CF10E95B3BF591E010A500A53 (User_tC17190F58E7AF577BC179A3103A3D3F299F3B0C7 * __this, const RuntimeMethod* method);
// RSG.IPromise`1<Proyecto26.ResponseHelper> Proyecto26.RestClient::Put(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RestClient_Put_mDA697668DBD06112E4E5B05C4741DD46C76387A4 (String_t* ___url0, RuntimeObject * ___body1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// RSG.IPromise`1<Proyecto26.ResponseHelper> Proyecto26.RestClient::Get(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RestClient_Get_mB7C87B45B0AC6B96336314E2C6F9BF16446565A7 (String_t* ___url0, const RuntimeMethod* method);
// System.Void System.Action`1<Proyecto26.ResponseHelper>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5541C3BBE123DA9981022935C7C933D248C90656 (Action_1_t65311BD7395CAEB1E9483E030F69FF580BCD5C80 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t65311BD7395CAEB1E9483E030F69FF580BCD5C80 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, p0, p1, method);
}
// Mapbox.Json.Linq.JObject WebHandler::DecodeURL(System.String)
extern "C" IL2CPP_METHOD_ATTR JObject_tDAD1F88FC97DFAE2821454F590A9F482AEF04739 * WebHandler_DecodeURL_m3AD8AFFBE550AF362ABB041B5754CF12A783F591 (WebHandler_tEF3DFECC162F8A29528A5C0396B8D3A36C490A78 * __this, String_t* ___url0, const RuntimeMethod* method);
// Mapbox.Json.Linq.JProperty Mapbox.Json.Linq.JObject::Property(System.String)
extern "C" IL2CPP_METHOD_ATTR JProperty_t30557F21425BE7749994AB2C7E8AEC664BA98C51 * JObject_Property_m63E4482F22F0D8035355C36599E4D199E59D4DEF (JObject_tDAD1F88FC97DFAE2821454F590A9F482AEF04739 * __this, String_t* p0, const RuntimeMethod* method);
// Mapbox.Json.Linq.JToken Mapbox.Json.Linq.JProperty::get_Value()
extern "C" IL2CPP_METHOD_ATTR JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF * JProperty_get_Value_m1D1D04C3957E7A46CC2620007E72B935E3A4ABD5 (JProperty_t30557F21425BE7749994AB2C7E8AEC664BA98C51 * __this, const RuntimeMethod* method);
// System.Single System.Single::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR float Single_Parse_m643ECE18CB0499B2B3EC76C8B941020122003DC6 (String_t* p0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.String)
extern "C" IL2CPP_METHOD_ATTR double Convert_ToDouble_mAB1A9AC95EC05C079529253797362E319C342A6F (String_t* p0, const RuntimeMethod* method);
// System.Void Mapbox.Utils.Vector2d::.ctor(System.Double,System.Double)
extern "C" IL2CPP_METHOD_ATTR void Vector2d__ctor_m7C9BCA1D14B517A38C0F378907B88C00E958B7EB (Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483 * __this, double ___x0, double ___y1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::UnEscapeURL(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_UnEscapeURL_m1224F23674AC91179573482A2993CB9E4EC98980 (String_t* p0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD (String_t* __this, Il2CppChar p0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// Mapbox.Json.Linq.JObject Mapbox.Json.Linq.JObject::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR JObject_tDAD1F88FC97DFAE2821454F590A9F482AEF04739 * JObject_Parse_m59A14585EFE40CCE84F70248D6CB82D9E39D4655 (String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * p0, const RuntimeMethod* method);
// System.String Proyecto26.ResponseHelper::get_Text()
extern "C" IL2CPP_METHOD_ATTR String_t* ResponseHelper_get_Text_mA285A72FBA91A37ED55E48088DFE8E53EA3B733D (ResponseHelper_t1D3F6F23A965CA2B1E2CDD0A4BFF16F387D1555F * __this, const RuntimeMethod* method);
// System.Void WebHandler::GetMapLocation()
extern "C" IL2CPP_METHOD_ATTR void WebHandler_GetMapLocation_mBBAD7518813337136DBC026AA2EE33878A3BABD5 (WebHandler_tEF3DFECC162F8A29528A5C0396B8D3A36C490A78 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuplex.WebView.MockWebPlugin_<>c__DisplayClass3_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m5E04EF784EF6A17D65119B1F833E7DEA35AE8C62 (U3CU3Ec__DisplayClass3_0_t609464E30C31F6B2BCBEDF4822C0E5B556F1E31C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebPlugin_<>c__DisplayClass3_0::<CreateTexture>b__0()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CCreateTextureU3Eb__0_m607E0349849ED4CD29220D433620F8C6A30AA609 (U3CU3Ec__DisplayClass3_0_t609464E30C31F6B2BCBEDF4822C0E5B556F1E31C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass3_0_U3CCreateTextureU3Eb__0_m607E0349849ED4CD29220D433620F8C6A30AA609_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77 * L_0 = __this->get_callback_0();
		float L_1 = __this->get_width_1();
		float L_2 = __this->get_height_2();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_3 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A(L_3, (((int32_t)((int32_t)(int32_t)L_1))), (((int32_t)((int32_t)(int32_t)L_2))), 4, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_0);
		Action_1_Invoke_m4FDEC794781FBC6B576389503CE9A9B7ED1A06AB(L_0, L_3, /*hidden argument*/Action_1_Invoke_m4FDEC794781FBC6B576389503CE9A9B7ED1A06AB_RuntimeMethod_var);
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
// System.Void Vuplex.WebView.MockWebPlugin_<>c__DisplayClass4_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m5D3DFAAC6471090C779914E804ECC5847D567363 (U3CU3Ec__DisplayClass4_0_t1631F9BFCBE1AAE6137CCDF19A1B094DE211CCA7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebPlugin_<>c__DisplayClass4_0::<CreateMaterial>b__0()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CCreateMaterialU3Eb__0_mC55BECC09FE70C089FC316F0F7AD45DF255951DD (U3CU3Ec__DisplayClass4_0_t1631F9BFCBE1AAE6137CCDF19A1B094DE211CCA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass4_0_U3CCreateMaterialU3Eb__0_mC55BECC09FE70C089FC316F0F7AD45DF255951DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * L_0 = __this->get_callback_0();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = __this->get_material_1();
		NullCheck(L_0);
		Action_1_Invoke_mAEF60C0D26E6CB251A8E07EEAB9A0233801E88BD(L_0, L_1, /*hidden argument*/Action_1_Invoke_mAEF60C0D26E6CB251A8E07EEAB9A0233801E88BD_RuntimeMethod_var);
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
// System.Void Vuplex.WebView.MockWebView::add_CloseRequested(System.EventHandler)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_add_CloseRequested_mEDD5EAD0949E87FE926698E180E82992C75FDD1E (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_add_CloseRequested_mEDD5EAD0949E87FE926698E180E82992C75FDD1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * V_0 = NULL;
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * V_1 = NULL;
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * V_2 = NULL;
	{
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_0 = __this->get_CloseRequested_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_2 = V_1;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var));
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** L_5 = __this->get_address_of_CloseRequested_4();
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_6 = V_2;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_7 = V_1;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_8 = InterlockedCompareExchangeImpl<EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *>((EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_9 = V_0;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)L_9) == ((RuntimeObject*)(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::remove_CloseRequested(System.EventHandler)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_remove_CloseRequested_mD6383BFF51BEEF104D792DC20864B698C70509B8 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_remove_CloseRequested_mD6383BFF51BEEF104D792DC20864B698C70509B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * V_0 = NULL;
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * V_1 = NULL;
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * V_2 = NULL;
	{
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_0 = __this->get_CloseRequested_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_2 = V_1;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var));
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** L_5 = __this->get_address_of_CloseRequested_4();
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_6 = V_2;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_7 = V_1;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_8 = InterlockedCompareExchangeImpl<EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *>((EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_9 = V_0;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)L_9) == ((RuntimeObject*)(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::add_LoadProgressChanged(System.EventHandler`1<Vuplex.WebView.ProgressChangedEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_add_LoadProgressChanged_m1889046207913B0DB872DC0BEF400A406BDF4D87 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_add_LoadProgressChanged_m1889046207913B0DB872DC0BEF400A406BDF4D87_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * V_0 = NULL;
	EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * V_1 = NULL;
	EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * V_2 = NULL;
	{
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * L_0 = __this->get_LoadProgressChanged_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * L_2 = V_1;
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469_il2cpp_TypeInfo_var));
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 ** L_5 = __this->get_address_of_LoadProgressChanged_5();
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * L_6 = V_2;
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * L_7 = V_1;
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 *>((EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * L_9 = V_0;
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 *)L_9) == ((RuntimeObject*)(EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::remove_LoadProgressChanged(System.EventHandler`1<Vuplex.WebView.ProgressChangedEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_remove_LoadProgressChanged_m6AF32BDB2B5EB202388FBC8C0EE779DEDBFE4D38 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_remove_LoadProgressChanged_m6AF32BDB2B5EB202388FBC8C0EE779DEDBFE4D38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * V_0 = NULL;
	EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * V_1 = NULL;
	EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * V_2 = NULL;
	{
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * L_0 = __this->get_LoadProgressChanged_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * L_2 = V_1;
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469_il2cpp_TypeInfo_var));
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 ** L_5 = __this->get_address_of_LoadProgressChanged_5();
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * L_6 = V_2;
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * L_7 = V_1;
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 *>((EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * L_9 = V_0;
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 *)L_9) == ((RuntimeObject*)(EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::add_MessageEmitted(System.EventHandler`1<Vuplex.WebView.EventArgs`1<System.String>>)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_add_MessageEmitted_mFD2148DF694FC9184A4EEBD40D91137DAB29D9F0 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_add_MessageEmitted_mFD2148DF694FC9184A4EEBD40D91137DAB29D9F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * V_0 = NULL;
	EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * V_1 = NULL;
	EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * V_2 = NULL;
	{
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_0 = __this->get_MessageEmitted_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_2 = V_1;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C_il2cpp_TypeInfo_var));
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C ** L_5 = __this->get_address_of_MessageEmitted_6();
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_6 = V_2;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_7 = V_1;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C *>((EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_9 = V_0;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C *)L_9) == ((RuntimeObject*)(EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::remove_MessageEmitted(System.EventHandler`1<Vuplex.WebView.EventArgs`1<System.String>>)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_remove_MessageEmitted_mB399474647CDE72C8E5E939C4F4F0EE2583A29F5 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_remove_MessageEmitted_mB399474647CDE72C8E5E939C4F4F0EE2583A29F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * V_0 = NULL;
	EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * V_1 = NULL;
	EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * V_2 = NULL;
	{
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_0 = __this->get_MessageEmitted_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_2 = V_1;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C_il2cpp_TypeInfo_var));
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C ** L_5 = __this->get_address_of_MessageEmitted_6();
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_6 = V_2;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_7 = V_1;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C *>((EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_9 = V_0;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C *)L_9) == ((RuntimeObject*)(EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::add_PageLoadFailed(System.EventHandler)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_add_PageLoadFailed_m0F73AE0433856C7F85834013215EF5A983CC70AA (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_add_PageLoadFailed_m0F73AE0433856C7F85834013215EF5A983CC70AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * V_0 = NULL;
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * V_1 = NULL;
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * V_2 = NULL;
	{
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_0 = __this->get_PageLoadFailed_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_2 = V_1;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var));
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** L_5 = __this->get_address_of_PageLoadFailed_7();
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_6 = V_2;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_7 = V_1;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_8 = InterlockedCompareExchangeImpl<EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *>((EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_9 = V_0;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)L_9) == ((RuntimeObject*)(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::remove_PageLoadFailed(System.EventHandler)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_remove_PageLoadFailed_m59586F7A4111D51B431614DA138BBD2DD2A1D0A6 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_remove_PageLoadFailed_m59586F7A4111D51B431614DA138BBD2DD2A1D0A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * V_0 = NULL;
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * V_1 = NULL;
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * V_2 = NULL;
	{
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_0 = __this->get_PageLoadFailed_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_2 = V_1;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var));
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** L_5 = __this->get_address_of_PageLoadFailed_7();
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_6 = V_2;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_7 = V_1;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_8 = InterlockedCompareExchangeImpl<EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *>((EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_9 = V_0;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)L_9) == ((RuntimeObject*)(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::add_TitleChanged(System.EventHandler`1<Vuplex.WebView.EventArgs`1<System.String>>)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_add_TitleChanged_m46860E36FD9B95E8A5FFF799B7901E1F04275322 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_add_TitleChanged_m46860E36FD9B95E8A5FFF799B7901E1F04275322_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * V_0 = NULL;
	EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * V_1 = NULL;
	EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * V_2 = NULL;
	{
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_0 = __this->get_TitleChanged_8();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_2 = V_1;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C_il2cpp_TypeInfo_var));
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C ** L_5 = __this->get_address_of_TitleChanged_8();
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_6 = V_2;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_7 = V_1;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C *>((EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_9 = V_0;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C *)L_9) == ((RuntimeObject*)(EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::remove_TitleChanged(System.EventHandler`1<Vuplex.WebView.EventArgs`1<System.String>>)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_remove_TitleChanged_m39D48E78AC63D668455671CAC5AF9E55379AA323 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_remove_TitleChanged_m39D48E78AC63D668455671CAC5AF9E55379AA323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * V_0 = NULL;
	EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * V_1 = NULL;
	EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * V_2 = NULL;
	{
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_0 = __this->get_TitleChanged_8();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_2 = V_1;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C_il2cpp_TypeInfo_var));
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C ** L_5 = __this->get_address_of_TitleChanged_8();
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_6 = V_2;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_7 = V_1;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C *>((EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_9 = V_0;
		EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C *)L_9) == ((RuntimeObject*)(EventHandler_1_t3EA00A1C08C43189A3E9A4C8D66414739A531A5C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::add_UrlChanged(System.EventHandler`1<Vuplex.WebView.UrlChangedEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_add_UrlChanged_mD6F816D530BD062F2617CFB2BD4E9DA8C0410A59 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_add_UrlChanged_mD6F816D530BD062F2617CFB2BD4E9DA8C0410A59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * V_0 = NULL;
	EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * V_1 = NULL;
	EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * V_2 = NULL;
	{
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * L_0 = __this->get_UrlChanged_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * L_2 = V_1;
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A_il2cpp_TypeInfo_var));
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A ** L_5 = __this->get_address_of_UrlChanged_9();
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * L_6 = V_2;
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * L_7 = V_1;
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A *>((EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * L_9 = V_0;
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A *)L_9) == ((RuntimeObject*)(EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::remove_UrlChanged(System.EventHandler`1<Vuplex.WebView.UrlChangedEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_remove_UrlChanged_m6CD0666250E86E95181F84DD5D58470A10744D90 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_remove_UrlChanged_m6CD0666250E86E95181F84DD5D58470A10744D90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * V_0 = NULL;
	EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * V_1 = NULL;
	EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * V_2 = NULL;
	{
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * L_0 = __this->get_UrlChanged_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * L_2 = V_1;
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A_il2cpp_TypeInfo_var));
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A ** L_5 = __this->get_address_of_UrlChanged_9();
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * L_6 = V_2;
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * L_7 = V_1;
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A *>((EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * L_9 = V_0;
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A *)L_9) == ((RuntimeObject*)(EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::add_VideoRectChanged(System.EventHandler`1<Vuplex.WebView.EventArgs`1<UnityEngine.Rect>>)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_add_VideoRectChanged_mBDFE3404F39B0CA357A1DD90B853769F396059F2 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_add_VideoRectChanged_mBDFE3404F39B0CA357A1DD90B853769F396059F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * V_0 = NULL;
	EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * V_1 = NULL;
	EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * V_2 = NULL;
	{
		EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * L_0 = __this->get_VideoRectChanged_10();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * L_2 = V_1;
		EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA_il2cpp_TypeInfo_var));
		EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA ** L_5 = __this->get_address_of_VideoRectChanged_10();
		EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * L_6 = V_2;
		EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * L_7 = V_1;
		EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA *>((EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * L_9 = V_0;
		EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA *)L_9) == ((RuntimeObject*)(EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::remove_VideoRectChanged(System.EventHandler`1<Vuplex.WebView.EventArgs`1<UnityEngine.Rect>>)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_remove_VideoRectChanged_m5E25341C1B4D01A3F15D1204836E198ADA4DAFBE (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_remove_VideoRectChanged_m5E25341C1B4D01A3F15D1204836E198ADA4DAFBE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * V_0 = NULL;
	EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * V_1 = NULL;
	EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * V_2 = NULL;
	{
		EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * L_0 = __this->get_VideoRectChanged_10();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * L_2 = V_1;
		EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA_il2cpp_TypeInfo_var));
		EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA ** L_5 = __this->get_address_of_VideoRectChanged_10();
		EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * L_6 = V_2;
		EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * L_7 = V_1;
		EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA *>((EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * L_9 = V_0;
		EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA *)L_9) == ((RuntimeObject*)(EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Vuplex.WebView.MockWebView::get_IsDisposed()
extern "C" IL2CPP_METHOD_ATTR bool MockWebView_get_IsDisposed_mBDF09F1E1E9B447567718762D2482449DFA74335 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsDisposedU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void Vuplex.WebView.MockWebView::set_IsDisposed(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_set_IsDisposed_mE74151C17FFE9B9B7CC7C3EE1E1F50464C3EDF6A (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsDisposedU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Boolean Vuplex.WebView.MockWebView::get_IsInitialized()
extern "C" IL2CPP_METHOD_ATTR bool MockWebView_get_IsInitialized_m3EAC7D78FBFFB4F1CD17035B00CC032081BBF443 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsInitializedU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Vuplex.WebView.MockWebView::set_IsInitialized(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_set_IsInitialized_mDECB737F2ED380C64BEE8DF928B9F60988BCD26F (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsInitializedU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Vuplex.WebView.MockWebView::get_PageLoadScripts()
extern "C" IL2CPP_METHOD_ATTR List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * MockWebView_get_PageLoadScripts_m00689BF6E60435320256D3828BCAE1540F0A597C (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = __this->get__pageLoadScripts_17();
		return L_0;
	}
}
// Vuplex.WebView.WebPluginType Vuplex.WebView.MockWebView::get_PluginType()
extern "C" IL2CPP_METHOD_ATTR int32_t MockWebView_get_PluginType_m905550396DB16C509D640AC12B0031F39D4D20BE (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(4);
	}
}
// System.Single Vuplex.WebView.MockWebView::get_Resolution()
extern "C" IL2CPP_METHOD_ATTR float MockWebView_get_Resolution_m96D2B7142DA2623950931153BFB6169B3EB098B7 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__numberOfPixelsPerUnityUnit_18();
		return L_0;
	}
}
// UnityEngine.Vector2 Vuplex.WebView.MockWebView::get_Size()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MockWebView_get_Size_m668EA91461840CFFA61DFF0A7B4459BE0ADAA944 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_U3CSizeU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Vuplex.WebView.MockWebView::set_Size(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_set_Size_mEF77EA494EE710456BF19A20FBD45EF577533318 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_U3CSizeU3Ek__BackingField_13(L_0);
		return;
	}
}
// UnityEngine.Vector2 Vuplex.WebView.MockWebView::get_SizeInPixels()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MockWebView_get_SizeInPixels_mD12454D41E33D871747AC1A03E0FB11D16FAB960 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = MockWebView_get_Size_m668EA91461840CFFA61DFF0A7B4459BE0ADAA944(__this, /*hidden argument*/NULL);
		float L_1 = L_0.get_x_0();
		float L_2 = __this->get__numberOfPixelsPerUnityUnit_18();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = MockWebView_get_Size_m668EA91461840CFFA61DFF0A7B4459BE0ADAA944(__this, /*hidden argument*/NULL);
		float L_4 = L_3.get_y_1();
		float L_5 = __this->get__numberOfPixelsPerUnityUnit_18();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Texture2D Vuplex.WebView.MockWebView::get_Texture()
extern "C" IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * MockWebView_get_Texture_mB3CD9F698FF013C81E5BC1F5BBD501E6B56CFAC0 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = __this->get_U3CTextureU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Vuplex.WebView.MockWebView::set_Texture(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_set_Texture_m0D2536866F92349C6A2B9A790B64697167712F46 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___value0, const RuntimeMethod* method)
{
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = ___value0;
		__this->set_U3CTextureU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.String Vuplex.WebView.MockWebView::get_Url()
extern "C" IL2CPP_METHOD_ATTR String_t* MockWebView_get_Url_m3A39906A792B2FC6DF6EA2B98309C72B32A1E5B1 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CUrlU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void Vuplex.WebView.MockWebView::set_Url(System.String)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_set_Url_mE5BA081DFF9085B46C94736E1258742EC2A87A6A (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CUrlU3Ek__BackingField_15(L_0);
		return;
	}
}
// UnityEngine.Texture2D Vuplex.WebView.MockWebView::get_VideoTexture()
extern "C" IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * MockWebView_get_VideoTexture_mF636D1063A84AE1F7814E1B663B2116A962C411D (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = __this->get_U3CVideoTextureU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Vuplex.WebView.MockWebView::set_VideoTexture(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_set_VideoTexture_mB6F852112990630A13EABCA3177FEF84917AEDDE (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___value0, const RuntimeMethod* method)
{
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = ___value0;
		__this->set_U3CVideoTextureU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::Init(UnityEngine.Texture2D,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_Init_mB2EEE17E7CEE950883E81E7BC5B68B3AD3EE0B0E (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___viewportTexture0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = ___viewportTexture0;
		float L_1 = ___width1;
		float L_2 = ___height2;
		MockWebView_Init_m640C398D0EDDC9DC4D9F8FB94FE83CF23D1DC405(__this, L_0, L_1, L_2, (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// Vuplex.WebView.MockWebView Vuplex.WebView.MockWebView::Instantiate()
extern "C" IL2CPP_METHOD_ATTR MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * MockWebView_Instantiate_mDCB0961EF970C49FAB8A18ED8F42698D1EA46169 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_Instantiate_mDCB0961EF970C49FAB8A18ED8F42698D1EA46169_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_0, _stringLiteral74094BEAD136E16886013CFB5180AB35832D30A7, /*hidden argument*/NULL);
		NullCheck(L_0);
		MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * L_1 = GameObject_AddComponent_TisMockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7_mC0EED77203046BFDF11B7F8935EBE728B4D380CB(L_0, /*hidden argument*/GameObject_AddComponent_TisMockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7_mC0EED77203046BFDF11B7F8935EBE728B4D380CB_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Vuplex.WebView.MockWebView::Init(UnityEngine.Texture2D,System.Single,System.Single,UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_Init_m640C398D0EDDC9DC4D9F8FB94FE83CF23D1DC405 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___viewportTexture0, float ___width1, float ___height2, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___videoTexture3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_Init_m640C398D0EDDC9DC4D9F8FB94FE83CF23D1DC405_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = ___viewportTexture0;
		MockWebView_set_Texture_m0D2536866F92349C6A2B9A790B64697167712F46(__this, L_0, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_1 = ___videoTexture3;
		MockWebView_set_VideoTexture_mB6F852112990630A13EABCA3177FEF84917AEDDE(__this, L_1, /*hidden argument*/NULL);
		float L_2 = ___width1;
		float L_3 = ___height2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_4), L_2, L_3, /*hidden argument*/NULL);
		MockWebView_set_Size_mEF77EA494EE710456BF19A20FBD45EF577533318(__this, L_4, /*hidden argument*/NULL);
		MockWebView_set_IsInitialized_mDECB737F2ED380C64BEE8DF928B9F60988BCD26F(__this, (bool)1, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_5, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_6;
		String_t* L_8 = Single_ToString_m211B5E14B0C60667C56838D5C3788CFA58670DDE((float*)(&___width1), _stringLiteralF3342A76BD80E19429A753BA2DF5C9377E8225A3, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_7;
		String_t* L_10 = Single_ToString_m211B5E14B0C60667C56838D5C3788CFA58670DDE((float*)(&___height2), _stringLiteralF3342A76BD80E19429A753BA2DF5C9377E8225A3, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteral4FA6DBC10D5F7E7898861C0DA45D101E81BA0DDC, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::Blur()
extern "C" IL2CPP_METHOD_ATTR void MockWebView_Blur_m13E9F3C419FBBF7883629F409356CA7301A5205B (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_Blur_m13E9F3C419FBBF7883629F409356CA7301A5205B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteralDDD9FD727381EAE37D0017C58931C05F51D9B376, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> Vuplex.WebView.MockWebView::CanGoBack()
extern "C" IL2CPP_METHOD_ATTR Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * MockWebView_CanGoBack_m340E1F4F0D71EAE85F2AEE2538F152466719E7A6 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_CanGoBack_m340E1F4F0D71EAE85F2AEE2538F152466719E7A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 * V_0 = NULL;
	{
		TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 * L_0 = (TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m8DE03339B68AF1101DC4477F47D7729AC5C9F608(L_0, /*hidden argument*/TaskCompletionSource_1__ctor_m8DE03339B68AF1101DC4477F47D7729AC5C9F608_RuntimeMethod_var);
		V_0 = L_0;
		TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 * L_1 = V_0;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_2 = (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *)il2cpp_codegen_object_new(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD_il2cpp_TypeInfo_var);
		Action_1__ctor_mAC998B8AD6A8D39434263D21FA7397949F39F244(L_2, L_1, (intptr_t)((intptr_t)TaskCompletionSource_1_SetResult_m034EA77A1AA02DF06AC5B882AA38AA79BAF51754_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mAC998B8AD6A8D39434263D21FA7397949F39F244_RuntimeMethod_var);
		MockWebView_CanGoBack_mC2276E4E373317A6DC0800EC40A48F9D4449D0B3(__this, L_2, /*hidden argument*/NULL);
		TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 * L_3 = V_0;
		NullCheck(L_3);
		Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_4 = TaskCompletionSource_1_get_Task_m9329D3F5934204E0569D9E62652D410AE3AD8F44(L_3, /*hidden argument*/TaskCompletionSource_1_get_Task_m9329D3F5934204E0569D9E62652D410AE3AD8F44_RuntimeMethod_var);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> Vuplex.WebView.MockWebView::CanGoForward()
extern "C" IL2CPP_METHOD_ATTR Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * MockWebView_CanGoForward_m4DE7BE9637CC24E31DEFE90F29523B869BC40ED4 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_CanGoForward_m4DE7BE9637CC24E31DEFE90F29523B869BC40ED4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 * V_0 = NULL;
	{
		TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 * L_0 = (TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m8DE03339B68AF1101DC4477F47D7729AC5C9F608(L_0, /*hidden argument*/TaskCompletionSource_1__ctor_m8DE03339B68AF1101DC4477F47D7729AC5C9F608_RuntimeMethod_var);
		V_0 = L_0;
		TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 * L_1 = V_0;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_2 = (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *)il2cpp_codegen_object_new(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD_il2cpp_TypeInfo_var);
		Action_1__ctor_mAC998B8AD6A8D39434263D21FA7397949F39F244(L_2, L_1, (intptr_t)((intptr_t)TaskCompletionSource_1_SetResult_m034EA77A1AA02DF06AC5B882AA38AA79BAF51754_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mAC998B8AD6A8D39434263D21FA7397949F39F244_RuntimeMethod_var);
		MockWebView_CanGoForward_mA829372BB1718BAD43A11520CCC3139E57DAAE1B(__this, L_2, /*hidden argument*/NULL);
		TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 * L_3 = V_0;
		NullCheck(L_3);
		Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_4 = TaskCompletionSource_1_get_Task_m9329D3F5934204E0569D9E62652D410AE3AD8F44(L_3, /*hidden argument*/TaskCompletionSource_1_get_Task_m9329D3F5934204E0569D9E62652D410AE3AD8F44_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void Vuplex.WebView.MockWebView::CanGoBack(System.Action`1<System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_CanGoBack_mC2276E4E373317A6DC0800EC40A48F9D4449D0B3 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_CanGoBack_mC2276E4E373317A6DC0800EC40A48F9D4449D0B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteral036FD5F1D09CBB1C7766D6A780B35B4DA07A1D45, L_0, /*hidden argument*/NULL);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_1 = ___callback0;
		NullCheck(L_1);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_1, (bool)0, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::CanGoForward(System.Action`1<System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_CanGoForward_mA829372BB1718BAD43A11520CCC3139E57DAAE1B (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_CanGoForward_mA829372BB1718BAD43A11520CCC3139E57DAAE1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteral0F08825A9A7D45D5F26E6773697EB8CAEBB224BD, L_0, /*hidden argument*/NULL);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_1 = ___callback0;
		NullCheck(L_1);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_1, (bool)0, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Byte[]> Vuplex.WebView.MockWebView::CaptureScreenshot()
extern "C" IL2CPP_METHOD_ATTR Task_1_t2ED0F6929D1C02BC2CEF49AC8D20FFCA4E41D648 * MockWebView_CaptureScreenshot_mD8BD49CF8BA74335FB70EA2196F3258B53262AD5 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_CaptureScreenshot_mD8BD49CF8BA74335FB70EA2196F3258B53262AD5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TaskCompletionSource_1_tB4013FB3A5C28FCEF0646F3ABE1C6F7C35A30C72 * V_0 = NULL;
	{
		TaskCompletionSource_1_tB4013FB3A5C28FCEF0646F3ABE1C6F7C35A30C72 * L_0 = (TaskCompletionSource_1_tB4013FB3A5C28FCEF0646F3ABE1C6F7C35A30C72 *)il2cpp_codegen_object_new(TaskCompletionSource_1_tB4013FB3A5C28FCEF0646F3ABE1C6F7C35A30C72_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m446C67D6303F5CA8E10157F29BFB0B6DCD2429A2(L_0, /*hidden argument*/TaskCompletionSource_1__ctor_m446C67D6303F5CA8E10157F29BFB0B6DCD2429A2_RuntimeMethod_var);
		V_0 = L_0;
		TaskCompletionSource_1_tB4013FB3A5C28FCEF0646F3ABE1C6F7C35A30C72 * L_1 = V_0;
		Action_1_tCFD7D0EFEF517D00FE88360104518B2070A270A2 * L_2 = (Action_1_tCFD7D0EFEF517D00FE88360104518B2070A270A2 *)il2cpp_codegen_object_new(Action_1_tCFD7D0EFEF517D00FE88360104518B2070A270A2_il2cpp_TypeInfo_var);
		Action_1__ctor_mCD8302FC6FE684869E9533861A0EE32E3195AD35(L_2, L_1, (intptr_t)((intptr_t)TaskCompletionSource_1_SetResult_m963D78FD47D7FB79E2F6E342A60675D85EBF2936_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mCD8302FC6FE684869E9533861A0EE32E3195AD35_RuntimeMethod_var);
		MockWebView_CaptureScreenshot_m799C7C8268344CF5CF2A7A948F2718724EDBAA90(__this, L_2, /*hidden argument*/NULL);
		TaskCompletionSource_1_tB4013FB3A5C28FCEF0646F3ABE1C6F7C35A30C72 * L_3 = V_0;
		NullCheck(L_3);
		Task_1_t2ED0F6929D1C02BC2CEF49AC8D20FFCA4E41D648 * L_4 = TaskCompletionSource_1_get_Task_mDF1880FB9E18FC04E5FE0D02DE7208DF581CAC54(L_3, /*hidden argument*/TaskCompletionSource_1_get_Task_mDF1880FB9E18FC04E5FE0D02DE7208DF581CAC54_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void Vuplex.WebView.MockWebView::CaptureScreenshot(System.Action`1<System.Byte[]>)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_CaptureScreenshot_m799C7C8268344CF5CF2A7A948F2718724EDBAA90 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, Action_1_tCFD7D0EFEF517D00FE88360104518B2070A270A2 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_CaptureScreenshot_m799C7C8268344CF5CF2A7A948F2718724EDBAA90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteral25E9AE11F77F84411079626115735F738CF8D4BD, L_0, /*hidden argument*/NULL);
		Action_1_tCFD7D0EFEF517D00FE88360104518B2070A270A2 * L_1 = ___callback0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_1);
		Action_1_Invoke_mE2800B8E7A8B62C005C1EA186199E5413CB35A5F(L_1, L_2, /*hidden argument*/Action_1_Invoke_mE2800B8E7A8B62C005C1EA186199E5413CB35A5F_RuntimeMethod_var);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::Click(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_Click_mDEE25F6E40E414E49C73AE6BA21B51104D29A7B6 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___point0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_Click_mDEE25F6E40E414E49C73AE6BA21B51104D29A7B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = Vector2_ToString_m270ACF7952BD3D18BBF2C43767400BFD9CF8C4DB((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&___point0), _stringLiteralF3342A76BD80E19429A753BA2DF5C9377E8225A3, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteralCE716D0F6696F662371B6E1B84D9D892AFE64355, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::Click(UnityEngine.Vector2,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_Click_mC195E1E5B3642650413C2B9883F6342305267344 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___point0, bool ___preventStealingFocus1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_Click_mC195E1E5B3642650413C2B9883F6342305267344_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = Vector2_ToString_m270ACF7952BD3D18BBF2C43767400BFD9CF8C4DB((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&___point0), _stringLiteralF3342A76BD80E19429A753BA2DF5C9377E8225A3, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		bool L_4 = ___preventStealingFocus1;
		bool L_5 = L_4;
		RuntimeObject * L_6 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteralD528C1F77A3C226D1B4F29F97DDACC8223F1E1F2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::Copy()
extern "C" IL2CPP_METHOD_ATTR void MockWebView_Copy_mA7395BE722AA829663773412F7288483F6B5C32D (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_Copy_mA7395BE722AA829663773412F7288483F6B5C32D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteralB9A9077890C54E9C71049AC7AA7FCE4723B78065, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::Cut()
extern "C" IL2CPP_METHOD_ATTR void MockWebView_Cut_m4FE1E633B9190CB25D6C878B3468829B91DF70CC (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_Cut_m4FE1E633B9190CB25D6C878B3468829B91DF70CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteral134E948E4BB85D667D03CD36303CD0BB02B72311, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::DisableViewUpdates()
extern "C" IL2CPP_METHOD_ATTR void MockWebView_DisableViewUpdates_m46543A0411B0C1B312F2285811DE8F57A52A52B6 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_DisableViewUpdates_m46543A0411B0C1B312F2285811DE8F57A52A52B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteral6A6A869A8714CF2E133F246A0F2392FFB666C5DC, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::Dispose()
extern "C" IL2CPP_METHOD_ATTR void MockWebView_Dispose_mD6E8F97AC2613620F5EC8FDB5125EA3363F65EDB (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_Dispose_mD6E8F97AC2613620F5EC8FDB5125EA3363F65EDB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MockWebView_set_IsDisposed_mE74151C17FFE9B9B7CC7C3EE1E1F50464C3EDF6A(__this, (bool)1, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteral942AFEFE5DDA838A569F975E9E19E084E64F6CC1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(__this, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_2, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::EnableViewUpdates()
extern "C" IL2CPP_METHOD_ATTR void MockWebView_EnableViewUpdates_mE9A70BABA6649667D466F14F99B91AB344FFB26F (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_EnableViewUpdates_mE9A70BABA6649667D466F14F99B91AB344FFB26F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteralEFB2E85AD6FE1B821C5F1E7E6C9A660EBDBBA5DB, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> Vuplex.WebView.MockWebView::ExecuteJavaScript(System.String)
extern "C" IL2CPP_METHOD_ATTR Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * MockWebView_ExecuteJavaScript_m4BB0ECE39ED2C15C6541B619400FB341FC6C46E0 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, String_t* ___javaScript0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_ExecuteJavaScript_m4BB0ECE39ED2C15C6541B619400FB341FC6C46E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TaskCompletionSource_1_t740D6B4559A97E4E740413E4EB4F1F90A84CB317 * V_0 = NULL;
	{
		TaskCompletionSource_1_t740D6B4559A97E4E740413E4EB4F1F90A84CB317 * L_0 = (TaskCompletionSource_1_t740D6B4559A97E4E740413E4EB4F1F90A84CB317 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t740D6B4559A97E4E740413E4EB4F1F90A84CB317_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m7FF4CB19A6FFF62BC7704E01DE773276895D0061(L_0, /*hidden argument*/TaskCompletionSource_1__ctor_m7FF4CB19A6FFF62BC7704E01DE773276895D0061_RuntimeMethod_var);
		V_0 = L_0;
		String_t* L_1 = ___javaScript0;
		TaskCompletionSource_1_t740D6B4559A97E4E740413E4EB4F1F90A84CB317 * L_2 = V_0;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_3 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3(L_3, L_2, (intptr_t)((intptr_t)TaskCompletionSource_1_SetResult_mD39FBE682EB405E5AC468C741ECB89340B9E0DA0_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var);
		MockWebView_ExecuteJavaScript_m9BA34F6811E44BD7FD37BF81C5FDE75D59B9018A(__this, L_1, L_3, /*hidden argument*/NULL);
		TaskCompletionSource_1_t740D6B4559A97E4E740413E4EB4F1F90A84CB317 * L_4 = V_0;
		NullCheck(L_4);
		Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * L_5 = TaskCompletionSource_1_get_Task_m0318082F7A10338098BC30D69462BD4DF8CD11EF(L_4, /*hidden argument*/TaskCompletionSource_1_get_Task_m0318082F7A10338098BC30D69462BD4DF8CD11EF_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Vuplex.WebView.MockWebView::ExecuteJavaScript(System.String,System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_ExecuteJavaScript_m9BA34F6811E44BD7FD37BF81C5FDE75D59B9018A (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, String_t* ___javaScript0, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_ExecuteJavaScript_m9BA34F6811E44BD7FD37BF81C5FDE75D59B9018A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = ___javaScript0;
		NullCheck(L_2);
		String_t* L_3 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_2, 0, ((int32_t)25), /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteralE9957D6A4AD6FCD4843BB6DB9ADC0C76CBBDD069, L_1, /*hidden argument*/NULL);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_4 = ___callback1;
		NullCheck(L_4);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::Focus()
extern "C" IL2CPP_METHOD_ATTR void MockWebView_Focus_m4F4245B5BE6F9B72F340192B211EAF8148886877 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_Focus_m4F4245B5BE6F9B72F340192B211EAF8148886877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteral144B5C28FCB7F4D331BBDF15F81F4F627FE2C93D, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Byte[]> Vuplex.WebView.MockWebView::GetRawTextureData()
extern "C" IL2CPP_METHOD_ATTR Task_1_t2ED0F6929D1C02BC2CEF49AC8D20FFCA4E41D648 * MockWebView_GetRawTextureData_m48F7616E946BF0667692C2D03238F6D3CDF7E1C5 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_GetRawTextureData_m48F7616E946BF0667692C2D03238F6D3CDF7E1C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TaskCompletionSource_1_tB4013FB3A5C28FCEF0646F3ABE1C6F7C35A30C72 * V_0 = NULL;
	{
		TaskCompletionSource_1_tB4013FB3A5C28FCEF0646F3ABE1C6F7C35A30C72 * L_0 = (TaskCompletionSource_1_tB4013FB3A5C28FCEF0646F3ABE1C6F7C35A30C72 *)il2cpp_codegen_object_new(TaskCompletionSource_1_tB4013FB3A5C28FCEF0646F3ABE1C6F7C35A30C72_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m446C67D6303F5CA8E10157F29BFB0B6DCD2429A2(L_0, /*hidden argument*/TaskCompletionSource_1__ctor_m446C67D6303F5CA8E10157F29BFB0B6DCD2429A2_RuntimeMethod_var);
		V_0 = L_0;
		TaskCompletionSource_1_tB4013FB3A5C28FCEF0646F3ABE1C6F7C35A30C72 * L_1 = V_0;
		Action_1_tCFD7D0EFEF517D00FE88360104518B2070A270A2 * L_2 = (Action_1_tCFD7D0EFEF517D00FE88360104518B2070A270A2 *)il2cpp_codegen_object_new(Action_1_tCFD7D0EFEF517D00FE88360104518B2070A270A2_il2cpp_TypeInfo_var);
		Action_1__ctor_mCD8302FC6FE684869E9533861A0EE32E3195AD35(L_2, L_1, (intptr_t)((intptr_t)TaskCompletionSource_1_SetResult_m963D78FD47D7FB79E2F6E342A60675D85EBF2936_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mCD8302FC6FE684869E9533861A0EE32E3195AD35_RuntimeMethod_var);
		MockWebView_GetRawTextureData_m419A8D44E56EE0BF9BA04DDF357510B5DD0800AD(__this, L_2, /*hidden argument*/NULL);
		TaskCompletionSource_1_tB4013FB3A5C28FCEF0646F3ABE1C6F7C35A30C72 * L_3 = V_0;
		NullCheck(L_3);
		Task_1_t2ED0F6929D1C02BC2CEF49AC8D20FFCA4E41D648 * L_4 = TaskCompletionSource_1_get_Task_mDF1880FB9E18FC04E5FE0D02DE7208DF581CAC54(L_3, /*hidden argument*/TaskCompletionSource_1_get_Task_mDF1880FB9E18FC04E5FE0D02DE7208DF581CAC54_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void Vuplex.WebView.MockWebView::GetRawTextureData(System.Action`1<System.Byte[]>)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_GetRawTextureData_m419A8D44E56EE0BF9BA04DDF357510B5DD0800AD (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, Action_1_tCFD7D0EFEF517D00FE88360104518B2070A270A2 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_GetRawTextureData_m419A8D44E56EE0BF9BA04DDF357510B5DD0800AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteral0243885F9FA398A96F29D7CA18CB3B74323E1346, L_0, /*hidden argument*/NULL);
		Action_1_tCFD7D0EFEF517D00FE88360104518B2070A270A2 * L_1 = ___callback0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_1);
		Action_1_Invoke_mE2800B8E7A8B62C005C1EA186199E5413CB35A5F(L_1, L_2, /*hidden argument*/Action_1_Invoke_mE2800B8E7A8B62C005C1EA186199E5413CB35A5F_RuntimeMethod_var);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::GoBack()
extern "C" IL2CPP_METHOD_ATTR void MockWebView_GoBack_m49B2818A05FCCD353FDE1DA4E8CE94D35FC4D699 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_GoBack_m49B2818A05FCCD353FDE1DA4E8CE94D35FC4D699_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteral89C6E428F9EBECD1ECD0C60EE7A779B6161C6F65, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::GoForward()
extern "C" IL2CPP_METHOD_ATTR void MockWebView_GoForward_m18BD9416EC5593751166E8F4C38F6E6F2351B31C (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_GoForward_m18BD9416EC5593751166E8F4C38F6E6F2351B31C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteral8EDD660F557AC75E1FE0D90E50F5874CE1EB8F3F, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::HandleKeyboardInput(System.String)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_HandleKeyboardInput_mD45A8318FC81CD25A90F95FA4A8A203BE614713D (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_HandleKeyboardInput_mD45A8318FC81CD25A90F95FA4A8A203BE614713D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = ___input0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteralC173FBC19131AA0A1036406BB6A90DEB15574D12, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::LoadHtml(System.String)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_LoadHtml_mF53E9A23CD52AC5F472930C6730AF4908F95B52E (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, String_t* ___html0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_LoadHtml_mF53E9A23CD52AC5F472930C6730AF4908F95B52E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___html0;
		NullCheck(L_0);
		String_t* L_1 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_0, 0, ((int32_t)25), /*hidden argument*/NULL);
		MockWebView_set_Url_mE5BA081DFF9085B46C94736E1258742EC2A87A6A(__this, L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_2;
		String_t* L_4 = MockWebView_get_Url_m3A39906A792B2FC6DF6EA2B98309C72B32A1E5B1(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteral897CA6EED95B99852DA377AEAB06AC6B4437C10D, L_3, /*hidden argument*/NULL);
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * L_5 = __this->get_UrlChanged_9();
		if (!L_5)
		{
			goto IL_0052;
		}
	}
	{
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * L_6 = __this->get_UrlChanged_9();
		String_t* L_7 = MockWebView_get_Url_m3A39906A792B2FC6DF6EA2B98309C72B32A1E5B1(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UrlActionType_tC1BDC328D886CB352E1EA46985A8D220FE1D0CAA_il2cpp_TypeInfo_var);
		String_t* L_8 = ((UrlActionType_tC1BDC328D886CB352E1EA46985A8D220FE1D0CAA_StaticFields*)il2cpp_codegen_static_fields_for(UrlActionType_tC1BDC328D886CB352E1EA46985A8D220FE1D0CAA_il2cpp_TypeInfo_var))->get_Load_0();
		UrlChangedEventArgs_tDB743B0064FEB99171B5C0674C472A33DAE627D6 * L_9 = (UrlChangedEventArgs_tDB743B0064FEB99171B5C0674C472A33DAE627D6 *)il2cpp_codegen_object_new(UrlChangedEventArgs_tDB743B0064FEB99171B5C0674C472A33DAE627D6_il2cpp_TypeInfo_var);
		UrlChangedEventArgs__ctor_m2002CFC345EC8B2BBA28C64B406F6759AB2D413A(L_9, L_7, _stringLiteral768E0C1C69573FB588F61F1308A015C11468E05F, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		EventHandler_1_Invoke_m1FDA85A53D246720364C1DCEA0DB747F6B92A5EF(L_6, __this, L_9, /*hidden argument*/EventHandler_1_Invoke_m1FDA85A53D246720364C1DCEA0DB747F6B92A5EF_RuntimeMethod_var);
	}

IL_0052:
	{
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * L_10 = __this->get_LoadProgressChanged_5();
		if (!L_10)
		{
			goto IL_0071;
		}
	}
	{
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * L_11 = __this->get_LoadProgressChanged_5();
		ProgressChangedEventArgs_t89FBDCB348ABD3DF4D5B52ED48C20CBC3338E14E * L_12 = (ProgressChangedEventArgs_t89FBDCB348ABD3DF4D5B52ED48C20CBC3338E14E *)il2cpp_codegen_object_new(ProgressChangedEventArgs_t89FBDCB348ABD3DF4D5B52ED48C20CBC3338E14E_il2cpp_TypeInfo_var);
		ProgressChangedEventArgs__ctor_m9E87AD9D18E12DC9BC77A16EDFCCBD2AD81E747B(L_12, 1, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		EventHandler_1_Invoke_m5C072AF2E55C5B2CAC182D8B11222A2A45C5101B(L_11, __this, L_12, /*hidden argument*/EventHandler_1_Invoke_m5C072AF2E55C5B2CAC182D8B11222A2A45C5101B_RuntimeMethod_var);
	}

IL_0071:
	{
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::LoadUrl(System.String)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_LoadUrl_mB7D13DC7129D40EEC0141B438655B2E5CED3D390 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___url0;
		VirtActionInvoker2< String_t*, Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * >::Invoke(67 /* System.Void Vuplex.WebView.MockWebView::LoadUrl(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>) */, __this, L_0, (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *)NULL);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::LoadUrl(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_LoadUrl_m3C04C8D64D6DB6ED9942D0BE9D29170491AD6272 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, String_t* ___url0, Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___additionalHttpHeaders1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_LoadUrl_m3C04C8D64D6DB6ED9942D0BE9D29170491AD6272_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___url0;
		MockWebView_set_Url_mE5BA081DFF9085B46C94736E1258742EC2A87A6A(__this, L_0, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		String_t* L_3 = ___url0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteralB2E6A4C406836E1CDE0A41C5120B81A9516A1A78, L_2, /*hidden argument*/NULL);
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * L_4 = __this->get_UrlChanged_9();
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		EventHandler_1_t1E4B301584881376D21A41DD3352FB5A0DF12C3A * L_5 = __this->get_UrlChanged_9();
		String_t* L_6 = ___url0;
		IL2CPP_RUNTIME_CLASS_INIT(UrlActionType_tC1BDC328D886CB352E1EA46985A8D220FE1D0CAA_il2cpp_TypeInfo_var);
		String_t* L_7 = ((UrlActionType_tC1BDC328D886CB352E1EA46985A8D220FE1D0CAA_StaticFields*)il2cpp_codegen_static_fields_for(UrlActionType_tC1BDC328D886CB352E1EA46985A8D220FE1D0CAA_il2cpp_TypeInfo_var))->get_Load_0();
		UrlChangedEventArgs_tDB743B0064FEB99171B5C0674C472A33DAE627D6 * L_8 = (UrlChangedEventArgs_tDB743B0064FEB99171B5C0674C472A33DAE627D6 *)il2cpp_codegen_object_new(UrlChangedEventArgs_tDB743B0064FEB99171B5C0674C472A33DAE627D6_il2cpp_TypeInfo_var);
		UrlChangedEventArgs__ctor_m2002CFC345EC8B2BBA28C64B406F6759AB2D413A(L_8, L_6, _stringLiteral768E0C1C69573FB588F61F1308A015C11468E05F, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		EventHandler_1_Invoke_m1FDA85A53D246720364C1DCEA0DB747F6B92A5EF(L_5, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_m1FDA85A53D246720364C1DCEA0DB747F6B92A5EF_RuntimeMethod_var);
	}

IL_0040:
	{
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * L_9 = __this->get_LoadProgressChanged_5();
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		EventHandler_1_t9869DFE1C2D16C4D7C07F16D578DEFAA6D7F2469 * L_10 = __this->get_LoadProgressChanged_5();
		ProgressChangedEventArgs_t89FBDCB348ABD3DF4D5B52ED48C20CBC3338E14E * L_11 = (ProgressChangedEventArgs_t89FBDCB348ABD3DF4D5B52ED48C20CBC3338E14E *)il2cpp_codegen_object_new(ProgressChangedEventArgs_t89FBDCB348ABD3DF4D5B52ED48C20CBC3338E14E_il2cpp_TypeInfo_var);
		ProgressChangedEventArgs__ctor_m9E87AD9D18E12DC9BC77A16EDFCCBD2AD81E747B(L_11, 1, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		EventHandler_1_Invoke_m5C072AF2E55C5B2CAC182D8B11222A2A45C5101B(L_10, __this, L_11, /*hidden argument*/EventHandler_1_Invoke_m5C072AF2E55C5B2CAC182D8B11222A2A45C5101B_RuntimeMethod_var);
	}

IL_005f:
	{
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::Paste()
extern "C" IL2CPP_METHOD_ATTR void MockWebView_Paste_mA995748A3C5259944D4B520B9862AC10A45AAFCE (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_Paste_mA995748A3C5259944D4B520B9862AC10A45AAFCE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteral612B74813BA51F10212C47C97E831649335E8762, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::PostMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_PostMessage_m9457D12CEDC49EF61553A693CCF82E44FCFD29D3 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, String_t* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_PostMessage_m9457D12CEDC49EF61553A693CCF82E44FCFD29D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = ___data0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteralC34B5A244FC8E380DFB1B055AEDEF9753442A476, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::Reload()
extern "C" IL2CPP_METHOD_ATTR void MockWebView_Reload_mA62B92F26AC7747060447547AAC490C959D74EF4 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_Reload_mA62B92F26AC7747060447547AAC490C959D74EF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteral0181D3A3522094E55C0647C5E505AB1338271A81, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::Resize(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_Resize_m4FAEBB5006B06E3481A41E8C73F0AD3086652BDE (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, float ___width0, float ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_Resize_m4FAEBB5006B06E3481A41E8C73F0AD3086652BDE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___width0;
		float L_1 = ___height1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_2), L_0, L_1, /*hidden argument*/NULL);
		MockWebView_set_Size_mEF77EA494EE710456BF19A20FBD45EF577533318(__this, L_2, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		String_t* L_5 = Single_ToString_m211B5E14B0C60667C56838D5C3788CFA58670DDE((float*)(&___width0), _stringLiteralF3342A76BD80E19429A753BA2DF5C9377E8225A3, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_4;
		String_t* L_7 = Single_ToString_m211B5E14B0C60667C56838D5C3788CFA58670DDE((float*)(&___height1), _stringLiteralF3342A76BD80E19429A753BA2DF5C9377E8225A3, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteral9AE8589BC6CE2CBFF32DC9DDF0B9F83BC964E232, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::Scroll(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_Scroll_m49CD0EF05505ECA3F53B9502A927D7C6D2F7DD7F (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___delta0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_Scroll_m49CD0EF05505ECA3F53B9502A927D7C6D2F7DD7F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = Vector2_ToString_m270ACF7952BD3D18BBF2C43767400BFD9CF8C4DB((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&___delta0), _stringLiteralF3342A76BD80E19429A753BA2DF5C9377E8225A3, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteral93AF4B68616C9C3716085B50E58EE8DC9C4F091A, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::Scroll(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_Scroll_mC6187498D46F9F7651A2D60B3C709FFBB14D41F7 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___delta0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___point1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_Scroll_mC6187498D46F9F7651A2D60B3C709FFBB14D41F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = Vector2_ToString_m270ACF7952BD3D18BBF2C43767400BFD9CF8C4DB((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&___delta0), _stringLiteralF3342A76BD80E19429A753BA2DF5C9377E8225A3, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		String_t* L_4 = Vector2_ToString_m270ACF7952BD3D18BBF2C43767400BFD9CF8C4DB((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&___point1), _stringLiteralF3342A76BD80E19429A753BA2DF5C9377E8225A3, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteralCD535DBE21128728BA0BABDFDFE0BAEEB909B0F4, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::SelectAll()
extern "C" IL2CPP_METHOD_ATTR void MockWebView_SelectAll_m25784F118524ECDC7D0C8AE3E713E7F8F34AA1A0 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_SelectAll_m25784F118524ECDC7D0C8AE3E713E7F8F34AA1A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteral9AB9F24C6E88339FEC50A0F3FDA8CA33B69BB50F, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::SetResolution(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MockWebView_SetResolution_m11A924FAC1B6446C1C8331D7809D4C745C52F74A (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, float ___pixelsPerUnityUnit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_SetResolution_m11A924FAC1B6446C1C8331D7809D4C745C52F74A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___pixelsPerUnityUnit0;
		__this->set__numberOfPixelsPerUnityUnit_18(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		float L_3 = ___pixelsPerUnityUnit0;
		float L_4 = L_3;
		RuntimeObject * L_5 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteral1300C347151176CF5DC139026EC2BCA605F1C4D7, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::ZoomIn()
extern "C" IL2CPP_METHOD_ATTR void MockWebView_ZoomIn_m08774625BFED6F50E3E26AB56A3EF7CC86BC3A2F (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_ZoomIn_m08774625BFED6F50E3E26AB56A3EF7CC86BC3A2F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteralD2BD0D85C702A7FF1185F68E63819CC35586620F, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::ZoomOut()
extern "C" IL2CPP_METHOD_ATTR void MockWebView_ZoomOut_m7C93D1AD83CFEA51406F06FC1B371BC7F22CDAD1 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView_ZoomOut_m7C93D1AD83CFEA51406F06FC1B371BC7F22CDAD1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8(__this, _stringLiteralCD3FABEC75C2EC041D564D3CA3E1901B8AE3E45B, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::_log(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, String_t* ___message0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView__log_m140318B53F6130BF3F1A853F8E30A3BAFF84AFC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral80708A7A82A6018E72BCFD1E7A9876516E7A7573, L_0, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogFormat_mB23DDD2CD05B2E66F9CF8CA72ECA66C02DCC209E(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.MockWebView::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MockWebView__ctor_m5EF16473A8C30F26C73DEC1AC6A56F6DEBD9F494 (MockWebView_t8863F1E203D1B9068A59F50F96A15CC153C759D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MockWebView__ctor_m5EF16473A8C30F26C73DEC1AC6A56F6DEBD9F494_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_0, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		__this->set__pageLoadScripts_17(L_0);
		__this->set__numberOfPixelsPerUnityUnit_18((1300.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// Vuplex.WebView.PointerOptions Vuplex.WebView.PointerEventArgs::ToPointerOptions()
extern "C" IL2CPP_METHOD_ATTR PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6 * PointerEventArgs_ToPointerOptions_mA8B38EC332D839CA31CE5656C1AE58AD9C6BF746 (PointerEventArgs_tEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerEventArgs_ToPointerOptions_mA8B38EC332D839CA31CE5656C1AE58AD9C6BF746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6 * L_0 = (PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6 *)il2cpp_codegen_object_new(PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6_il2cpp_TypeInfo_var);
		PointerOptions__ctor_mE9FCC4FCDF8D1BB58EE1E3AF04C9F19428BF3D8A(L_0, /*hidden argument*/NULL);
		PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6 * L_1 = L_0;
		int32_t L_2 = __this->get_Button_1();
		NullCheck(L_1);
		L_1->set_Button_0(L_2);
		PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6 * L_3 = L_1;
		int32_t L_4 = __this->get_ClickCount_2();
		NullCheck(L_3);
		L_3->set_ClickCount_1(L_4);
		return L_3;
	}
}
// System.Void Vuplex.WebView.PointerEventArgs::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PointerEventArgs__ctor_mE7C4D239B49F303D45FA9D03617F9A76432C2531 (PointerEventArgs_tEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerEventArgs__ctor_mE7C4D239B49F303D45FA9D03617F9A76432C2531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_ClickCount_2(1);
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
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
// System.Void Vuplex.WebView.PointerEventOptions::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PointerEventOptions__ctor_m154ED408C0439A68EFC6A68FAA587F69603D27F5 (PointerEventOptions_tF8E2802E8E41BFCFA793774039E07CE944BD2038 * __this, const RuntimeMethod* method)
{
	{
		__this->set_ClickCount_0(1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.String Vuplex.WebView.PointerOptions::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* PointerOptions_ToString_m48AAC9471EFF37E31588A8089A480CDB54C87B37 (PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerOptions_ToString_m48AAC9471EFF37E31588A8089A480CDB54C87B37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_Button_0();
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(MouseButton_t7A679A7E792E06090B97A44570F99AC84FC97FE2_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = __this->get_ClickCount_1();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral79196FB3C75CA3AA02DBFC705A57E64A3ECA4298, L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Vuplex.WebView.PointerOptions::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PointerOptions__ctor_mE9FCC4FCDF8D1BB58EE1E3AF04C9F19428BF3D8A (PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6 * __this, const RuntimeMethod* method)
{
	{
		__this->set_ClickCount_1(1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Vuplex.WebView.PopupRequestedEventArgs::.ctor(System.String,Vuplex.WebView.IWebView)
extern "C" IL2CPP_METHOD_ATTR void PopupRequestedEventArgs__ctor_m8080FFF737F8E14DBA51B4E555A7584864D628D9 (PopupRequestedEventArgs_t493D57AB29C528E5680638A9B8027332DC37EFB5 * __this, String_t* ___url0, RuntimeObject* ___webView1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PopupRequestedEventArgs__ctor_m8080FFF737F8E14DBA51B4E555A7584864D628D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___url0;
		__this->set_Url_1(L_0);
		RuntimeObject* L_1 = ___webView1;
		__this->set_WebView_2(L_1);
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
// System.Void Vuplex.WebView.ProgressChangedEventArgs::.ctor(Vuplex.WebView.ProgressChangeType,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ProgressChangedEventArgs__ctor_m9E87AD9D18E12DC9BC77A16EDFCCBD2AD81E747B (ProgressChangedEventArgs_t89FBDCB348ABD3DF4D5B52ED48C20CBC3338E14E * __this, int32_t ___type0, float ___progress1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProgressChangedEventArgs__ctor_m9E87AD9D18E12DC9BC77A16EDFCCBD2AD81E747B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___type0;
		__this->set_Type_2(L_0);
		float L_1 = ___progress1;
		__this->set_Progress_1(L_1);
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
// System.Void Vuplex.WebView.ScriptDialogEventArgs::.ctor(System.String,System.Action)
extern "C" IL2CPP_METHOD_ATTR void ScriptDialogEventArgs__ctor_mB993E6650217AEC4FB503A1547F5291D04A8467D (ScriptDialogEventArgs_t25DAE7F9AF9FED595F29370665DFF1ADA9C8C992 * __this, String_t* ___message0, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___continueCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptDialogEventArgs__ctor_mB993E6650217AEC4FB503A1547F5291D04A8467D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___message0;
		__this->set_Message_1(L_0);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = ___continueCallback1;
		__this->set_Continue_2(L_1);
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
// System.Void Vuplex.WebView.ScrolledEventArgs::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void ScrolledEventArgs__ctor_m23022F20F93F4EC86847064FB7E2E6EDE5681FF3 (ScrolledEventArgs_t4DC4E49687FC1C4A753AD5C53DA266E1AAB24FC1 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___scrollDelta0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___point1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScrolledEventArgs__ctor_m23022F20F93F4EC86847064FB7E2E6EDE5681FF3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___scrollDelta0;
		__this->set_ScrollDelta_1(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___point1;
		__this->set_Point_2(L_1);
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
// UnityEngine.Rect Vuplex.WebView.SerializableRect::toRect()
extern "C" IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  SerializableRect_toRect_m5E3AC2FD111C386288CD084AC75D4AF8D75D750A (SerializableRect_t19F9715A9F171DBD3B54FD4FF5C3580682B02B7E * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_left_0();
		float L_1 = __this->get_top_1();
		float L_2 = __this->get_width_2();
		float L_3 = __this->get_height_3();
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Vuplex.WebView.SerializableRect::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SerializableRect__ctor_m8B66822FF717787BF389B5C154FD1A1C5C3EA70C (SerializableRect_t19F9715A9F171DBD3B54FD4FF5C3580682B02B7E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Vuplex.WebView.SettingsException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void SettingsException__ctor_m0D8F2A77AA6B2956EEC8A847E35ECFDFFEE6EADC (SettingsException_tBE79F9DDD1C6AEF6FCF54CA6270DB5BAF5029987 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SettingsException__ctor_m0D8F2A77AA6B2956EEC8A847E35ECFDFFEE6EADC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(__this, L_0, /*hidden argument*/NULL);
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
// System.String Vuplex.WebView.StringBridgeMessage::ParseValue(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* StringBridgeMessage_ParseValue_mDF6E8AFD55BD867856EE94AD48EFE1D20455C01E (String_t* ___serializedMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringBridgeMessage_ParseValue_mDF6E8AFD55BD867856EE94AD48EFE1D20455C01E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___serializedMessage0;
		StringBridgeMessage_tCE04AF76CE8FFB5504BBB6667549113FEAF288D7 * L_1 = JsonUtility_FromJson_TisStringBridgeMessage_tCE04AF76CE8FFB5504BBB6667549113FEAF288D7_mBBD8ADE6FB0B0C4323BA79CEAEA798CB22388891(L_0, /*hidden argument*/JsonUtility_FromJson_TisStringBridgeMessage_tCE04AF76CE8FFB5504BBB6667549113FEAF288D7_mBBD8ADE6FB0B0C4323BA79CEAEA798CB22388891_RuntimeMethod_var);
		NullCheck(L_1);
		String_t* L_2 = L_1->get_value_1();
		return L_2;
	}
}
// System.Void Vuplex.WebView.StringBridgeMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBridgeMessage__ctor_m38156A2999A5673CA988228BF2B1409925527C32 (StringBridgeMessage_tCE04AF76CE8FFB5504BBB6667549113FEAF288D7 * __this, const RuntimeMethod* method)
{
	{
		BridgeMessage__ctor_mAE05ED7DBBB953128C59354F00F692FBD94B9B07(__this, /*hidden argument*/NULL);
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
// System.Void Vuplex.WebView.StringWithIdBridgeMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringWithIdBridgeMessage__ctor_mEB2093633A8F167D4B3D90B2F2B51FE89AC92F9A (StringWithIdBridgeMessage_t10C56D13CB847CBB01F6F2882BC34AD1DA50BE02 * __this, const RuntimeMethod* method)
{
	{
		BridgeMessage__ctor_mAE05ED7DBBB953128C59354F00F692FBD94B9B07(__this, /*hidden argument*/NULL);
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
// System.Void Vuplex.WebView.UrlAction::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UrlAction__ctor_m213B7C2C12A79D7F0685C101E229050288D6C828 (UrlAction_tCA6BE253E1E21B9F04482433075BF19498E4CC58 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.UrlAction::.ctor(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UrlAction__ctor_m4C01CD5592768A479A2D62394C398DCB697D9A2F (UrlAction_tCA6BE253E1E21B9F04482433075BF19498E4CC58 * __this, String_t* ___url0, String_t* ___title1, String_t* ___type2, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___url0;
		__this->set_Url_0(L_0);
		String_t* L_1 = ___title1;
		__this->set_Title_1(L_1);
		String_t* L_2 = ___type2;
		__this->set_Type_2(L_2);
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
// System.Void Vuplex.WebView.UrlActionType::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UrlActionType__ctor_m609E1EC41EC8CE90351466FD4CBDC363C7B8C544 (UrlActionType_tC1BDC328D886CB352E1EA46985A8D220FE1D0CAA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.UrlActionType::.cctor()
extern "C" IL2CPP_METHOD_ATTR void UrlActionType__cctor_mB36C9E7461DFD6C6402525CE31A4FB4066C601F7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UrlActionType__cctor_mB36C9E7461DFD6C6402525CE31A4FB4066C601F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((UrlActionType_tC1BDC328D886CB352E1EA46985A8D220FE1D0CAA_StaticFields*)il2cpp_codegen_static_fields_for(UrlActionType_tC1BDC328D886CB352E1EA46985A8D220FE1D0CAA_il2cpp_TypeInfo_var))->set_Load_0(_stringLiteral97EB8C80F7FD9D9F6120C3BFFD79E5E23E575196);
		((UrlActionType_tC1BDC328D886CB352E1EA46985A8D220FE1D0CAA_StaticFields*)il2cpp_codegen_static_fields_for(UrlActionType_tC1BDC328D886CB352E1EA46985A8D220FE1D0CAA_il2cpp_TypeInfo_var))->set_PushState_1(_stringLiteralA99EA5BD9E37A6159589FEB1CB8C6653A1F39DD9);
		((UrlActionType_tC1BDC328D886CB352E1EA46985A8D220FE1D0CAA_StaticFields*)il2cpp_codegen_static_fields_for(UrlActionType_tC1BDC328D886CB352E1EA46985A8D220FE1D0CAA_il2cpp_TypeInfo_var))->set_ReplaceState_2(_stringLiteral183B21C28726A29B7BA9C0633569DEC605CE49DE);
		((UrlActionType_tC1BDC328D886CB352E1EA46985A8D220FE1D0CAA_StaticFields*)il2cpp_codegen_static_fields_for(UrlActionType_tC1BDC328D886CB352E1EA46985A8D220FE1D0CAA_il2cpp_TypeInfo_var))->set_HashChange_3(_stringLiteral8F6FF63F67342E73A3806185F2431E00BB32D0EA);
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
// System.Void Vuplex.WebView.UrlChangedEventArgs::.ctor(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UrlChangedEventArgs__ctor_m2002CFC345EC8B2BBA28C64B406F6759AB2D413A (UrlChangedEventArgs_tDB743B0064FEB99171B5C0674C472A33DAE627D6 * __this, String_t* ___url0, String_t* ___title1, String_t* ___type2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UrlChangedEventArgs__ctor_m2002CFC345EC8B2BBA28C64B406F6759AB2D413A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___url0;
		__this->set_Url_1(L_0);
		String_t* L_1 = ___title1;
		__this->set_Title_2(L_1);
		String_t* L_2 = ___type2;
		__this->set_Type_3(L_2);
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
// System.Void Vuplex.WebView.UrlChangedMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UrlChangedMessage__ctor_m86DF6C4F425517C58676E68F3E28D5F8170C65EA (UrlChangedMessage_t941E9B50F99CCBC5877E374293C451EEFB0CDF1A * __this, const RuntimeMethod* method)
{
	{
		BridgeMessage__ctor_mAE05ED7DBBB953128C59354F00F692FBD94B9B07(__this, /*hidden argument*/NULL);
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
// System.Byte[] Vuplex.WebView.Utils::ConvertAndroidByteArray(UnityEngine.AndroidJavaObject)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Utils_ConvertAndroidByteArray_m241675E60F1E4B66383BFBE5BBAE79CAFE39D9FE (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * ___arrayObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_ConvertAndroidByteArray_m241675E60F1E4B66383BFBE5BBAE79CAFE39D9FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_0 = ___arrayObject0;
		NullCheck(L_0);
		intptr_t L_1 = AndroidJavaObject_GetRawObject_mAEB3A269841B8D0BB5701C59AC7463DF7806CA2F(L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = AndroidJNIHelper_ConvertFromJNIArray_TisByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_m9D93404DD3C510A7C80EA522A17C8564BED7A371((intptr_t)L_1, /*hidden argument*/AndroidJNIHelper_ConvertFromJNIArray_TisByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_m9D93404DD3C510A7C80EA522A17C8564BED7A371_RuntimeMethod_var);
		return L_2;
	}
}
// UnityEngine.Material Vuplex.WebView.Utils::CreateDefaultMaterial()
extern "C" IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Utils_CreateDefaultMaterial_mAC23D791807847F81F2006BD4C55F42D1968F7D8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_CreateDefaultMaterial_mAC23D791807847F81F2006BD4C55F42D1968F7D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = Resources_Load_TisMaterial_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_m03D88584A63B0ABDC1B4BE7B8EB210D9ECBEDE03(_stringLiteral8423F30732BAB644D2DEFA1A9253775834274EA9, /*hidden argument*/Resources_Load_TisMaterial_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_m03D88584A63B0ABDC1B4BE7B8EB210D9ECBEDE03_RuntimeMethod_var);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Vuplex.WebView.Utils::GetGraphicsApiErrorMessage(UnityEngine.Rendering.GraphicsDeviceType,UnityEngine.Rendering.GraphicsDeviceType[])
extern "C" IL2CPP_METHOD_ATTR String_t* Utils_GetGraphicsApiErrorMessage_mBB9011FC45763C63F5B8C07EAF91B7060FBFBE6C (int32_t ___activeGraphicsApi0, GraphicsDeviceTypeU5BU5D_t4560B66B4261C7B1422FAA96584DAADE6A935A86* ___acceptableGraphicsApis1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_GetGraphicsApiErrorMessage_mBB9011FC45763C63F5B8C07EAF91B7060FBFBE6C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	Func_2_t3AB8FFCCD295F3CB6B51AB07C8ADE78F376F3FBC * G_B4_0 = NULL;
	List_1_t3C4F493AD36BE7F2EEDD54D8C0A784299FD3E32D * G_B4_1 = NULL;
	Func_2_t3AB8FFCCD295F3CB6B51AB07C8ADE78F376F3FBC * G_B3_0 = NULL;
	List_1_t3C4F493AD36BE7F2EEDD54D8C0A784299FD3E32D * G_B3_1 = NULL;
	{
		GraphicsDeviceTypeU5BU5D_t4560B66B4261C7B1422FAA96584DAADE6A935A86* L_0 = ___acceptableGraphicsApis1;
		int32_t L_1 = ___activeGraphicsApi0;
		int32_t L_2 = Array_IndexOf_TisGraphicsDeviceType_tA87720B0E7A15371E70249FC9F4EAE7644015552_m45C497A46A18BB36CBBBDB7BCFA094446E909CFE(L_0, L_1, /*hidden argument*/Array_IndexOf_TisGraphicsDeviceType_tA87720B0E7A15371E70249FC9F4EAE7644015552_m45C497A46A18BB36CBBBDB7BCFA094446E909CFE_RuntimeMethod_var);
		if (!((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0))
		{
			goto IL_0011;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0011:
	{
		GraphicsDeviceTypeU5BU5D_t4560B66B4261C7B1422FAA96584DAADE6A935A86* L_3 = ___acceptableGraphicsApis1;
		List_1_t3C4F493AD36BE7F2EEDD54D8C0A784299FD3E32D * L_4 = Enumerable_ToList_TisGraphicsDeviceType_tA87720B0E7A15371E70249FC9F4EAE7644015552_m125119326AC72B6E5C2EA3BB2AFB9FD49B2E3D8E((RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/Enumerable_ToList_TisGraphicsDeviceType_tA87720B0E7A15371E70249FC9F4EAE7644015552_m125119326AC72B6E5C2EA3BB2AFB9FD49B2E3D8E_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED_il2cpp_TypeInfo_var);
		Func_2_t3AB8FFCCD295F3CB6B51AB07C8ADE78F376F3FBC * L_5 = ((U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED_il2cpp_TypeInfo_var))->get_U3CU3E9__2_0_1();
		Func_2_t3AB8FFCCD295F3CB6B51AB07C8ADE78F376F3FBC * L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = L_4;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = L_4;
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED_il2cpp_TypeInfo_var);
		U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED * L_7 = ((U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t3AB8FFCCD295F3CB6B51AB07C8ADE78F376F3FBC * L_8 = (Func_2_t3AB8FFCCD295F3CB6B51AB07C8ADE78F376F3FBC *)il2cpp_codegen_object_new(Func_2_t3AB8FFCCD295F3CB6B51AB07C8ADE78F376F3FBC_il2cpp_TypeInfo_var);
		Func_2__ctor_m996B551BC4F8A8D65A1A2BD0723B71F85C96828D(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec_U3CGetGraphicsApiErrorMessageU3Eb__2_0_m2B0DEA3D865BB73FF0B0E570A8164A1A3CAC7C29_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m996B551BC4F8A8D65A1A2BD0723B71F85C96828D_RuntimeMethod_var);
		Func_2_t3AB8FFCCD295F3CB6B51AB07C8ADE78F376F3FBC * L_9 = L_8;
		((U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED_il2cpp_TypeInfo_var))->set_U3CU3E9__2_0_1(L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
	}

IL_0036:
	{
		RuntimeObject* L_10 = Enumerable_Select_TisGraphicsDeviceType_tA87720B0E7A15371E70249FC9F4EAE7644015552_TisString_t_m1DBBAE98C6B42C5AFF68534E0C35EB116FC7878F(G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Select_TisGraphicsDeviceType_tA87720B0E7A15371E70249FC9F4EAE7644015552_TisString_t_m1DBBAE98C6B42C5AFF68534E0C35EB116FC7878F_RuntimeMethod_var);
		V_0 = L_10;
		RuntimeObject* L_11 = V_0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = Enumerable_ToArray_TisString_t_m1BAD76FB02571EB3CCC5BB00D4D581399F8523FC(L_11, /*hidden argument*/Enumerable_ToArray_TisString_t_m1BAD76FB02571EB3CCC5BB00D4D581399F8523FC_RuntimeMethod_var);
		String_t* L_13 = String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4(_stringLiteral439AC6327D9E85C6128D568E206F852F3E18A74C, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		String_t* L_14 = V_1;
		int32_t L_15 = ___activeGraphicsApi0;
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(GraphicsDeviceType_tA87720B0E7A15371E70249FC9F4EAE7644015552_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral4139A73525AC0B60DD8BDA852AD2ADF3D833BDED, L_14, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Void Vuplex.WebView.Utils::ThrowExceptionIfAbnormallyLarge(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Utils_ThrowExceptionIfAbnormallyLarge_m69028CCE30E7D688E0FF58EF04D4DBA70A2DB5B8 (int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_ThrowExceptionIfAbnormallyLarge_m69028CCE30E7D688E0FF58EF04D4DBA70A2DB5B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1))) <= ((int32_t)((int32_t)14700000))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_2 = ___width0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = ___height1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral12B7C73DAC08619D478AADDD6938791B31DA52DC, L_4, L_7, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_9 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, Utils_ThrowExceptionIfAbnormallyLarge_m69028CCE30E7D688E0FF58EF04D4DBA70A2DB5B8_RuntimeMethod_var);
	}

IL_0026:
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
// System.Void Vuplex.WebView.Utils_<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m968EF80EF0C8830A52D88DF02E17353C9056C0D5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m968EF80EF0C8830A52D88DF02E17353C9056C0D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED * L_0 = (U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED *)il2cpp_codegen_object_new(U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF56B83720E84EDABCE279ACE2BCB2EED50544E39(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuplex.WebView.Utils_<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF56B83720E84EDABCE279ACE2BCB2EED50544E39 (U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Vuplex.WebView.Utils_<>c::<GetGraphicsApiErrorMessage>b__2_0(UnityEngine.Rendering.GraphicsDeviceType)
extern "C" IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetGraphicsApiErrorMessageU3Eb__2_0_m2B0DEA3D865BB73FF0B0E570A8164A1A3CAC7C29 (U3CU3Ec_t3D21D2F6E9B7BA79F5978D9FB6626874F47959ED * __this, int32_t ___api0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CGetGraphicsApiErrorMessageU3Eb__2_0_m2B0DEA3D865BB73FF0B0E570A8164A1A3CAC7C29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = Box(GraphicsDeviceType_tA87720B0E7A15371E70249FC9F4EAE7644015552_il2cpp_TypeInfo_var, (&___api0));
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___api0 = *(int32_t*)UnBox(L_0);
		return L_1;
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
// System.Void Vuplex.WebView.Video::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Video__ctor_m9F337933BD5243959EAB62E8D1F5F4377B23F37A (Video_t6B8E9A22E411B9AA2BD787CD8A8018AA4A5C641F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Vuplex.WebView.VideoRectChangedMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VideoRectChangedMessage__ctor_mB6932828940DBE945F8C39209F37FA6B481BC925 (VideoRectChangedMessage_t3790F03C69380AA72CA014FF1EBA30C90B769E14 * __this, const RuntimeMethod* method)
{
	{
		BridgeMessage__ctor_mAE05ED7DBBB953128C59354F00F692FBD94B9B07(__this, /*hidden argument*/NULL);
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
// System.Void Vuplex.WebView.VideoRectChangedMessageValue::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VideoRectChangedMessageValue__ctor_mC513F65B1820276F85D99AED9DE45F1BEDC450D0 (VideoRectChangedMessageValue_tED80428A115FBC63F543DBF5E5507C0D46A82EF8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// UnityEngine.Material Vuplex.WebView.ViewportMaterialView::get_Material()
extern "C" IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ViewportMaterialView_get_Material_m9634E3E046B1387838E5D77A17748D8E981CEED5 (ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ViewportMaterialView_get_Material_m9634E3E046B1387838E5D77A17748D8E981CEED5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var);
		NullCheck(L_0);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Vuplex.WebView.ViewportMaterialView::set_Material(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void ViewportMaterialView_set_Material_m3216DE4618BC9B0114ED89F9D4D8BFA548BB564B (ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ViewportMaterialView_set_Material_m3216DE4618BC9B0114ED89F9D4D8BFA548BB564B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = ___value0;
		NullCheck(L_0);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture2D Vuplex.WebView.ViewportMaterialView::get_Texture()
extern "C" IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ViewportMaterialView_get_Texture_mEA0582EA1BF04408E3A1F19DFFBFE46045DF2EF7 (ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ViewportMaterialView_get_Texture_mEA0582EA1BF04408E3A1F19DFFBFE46045DF2EF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var);
		NullCheck(L_0);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_2 = Material_get_mainTexture_mE85CF647728AD145D7E03A172EFD5930773E514E(L_1, /*hidden argument*/NULL);
		return ((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)CastclassSealed((RuntimeObject*)L_2, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var));
	}
}
// System.Void Vuplex.WebView.ViewportMaterialView::set_Texture(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void ViewportMaterialView_set_Texture_mBF93C6E5D3403512E934FFE5F4A4C965F466CCD5 (ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ViewportMaterialView_set_Texture_mBF93C6E5D3403512E934FFE5F4A4C965F466CCD5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var);
		NullCheck(L_0);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9(L_0, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_2 = ___value0;
		NullCheck(L_1);
		Material_set_mainTexture_m0742CFF768E9701618DA07C71F009239AB31EB41(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuplex.WebView.ViewportMaterialView::get_Visible()
extern "C" IL2CPP_METHOD_ATTR bool ViewportMaterialView_get_Visible_mD55DE711D44412BF91695EBE0C78526DB2800E45 (ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ViewportMaterialView_get_Visible_mD55DE711D44412BF91695EBE0C78526DB2800E45_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1 = Renderer_get_enabled_m40E07BB15DA58D2EF6F6796C6778163107DD7E1B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Vuplex.WebView.ViewportMaterialView::set_Visible(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ViewportMaterialView_set_Visible_m46CFD9A92C822A0F6F1518DBF24FE3538127A934 (ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ViewportMaterialView_set_Visible_m46CFD9A92C822A0F6F1518DBF24FE3538127A934_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var);
		bool L_1 = ___value0;
		NullCheck(L_0);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.ViewportMaterialView::SetCropRect(UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR void ViewportMaterialView_SetCropRect_m2E7361A720624213318BE9673519FA4EAFF6C810 (ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___rect0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ViewportMaterialView_SetCropRect_m2E7361A720624213318BE9673519FA4EAFF6C810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var);
		NullCheck(L_0);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9(L_0, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_2 = ___rect0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_3 = ViewportMaterialView__rectToVector_mE82B968055D2A0CF24B5D1327179253FDC4EFF3D(__this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Material_SetVector_m6FC2CC4EBE6C45D48D8B9164148A0CB3124335EC(L_1, _stringLiteral9B83FDCDE8EB04D61B97C8F48792F869BB92A95B, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.ViewportMaterialView::SetCutoutRect(UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR void ViewportMaterialView_SetCutoutRect_mF8AFE7237F7C5E920F5B00B30C98D50C37B9251C (ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___rect0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ViewportMaterialView_SetCutoutRect_mF8AFE7237F7C5E920F5B00B30C98D50C37B9251C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_0 = ___rect0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1 = ViewportMaterialView__rectToVector_mE82B968055D2A0CF24B5D1327179253FDC4EFF3D(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_2 = ___rect0;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_3), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		bool L_4 = Rect_op_Inequality_mAF9DC03779A7C3E1B430D7FFA797F2C4CEAD1FC7(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		float L_5 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___rect0), /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_5, (float)(0.01f)));
		float L_6 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___rect0), /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_multiply((float)L_6, (float)(0.01f)));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_7 = V_0;
		float L_8 = L_7.get_x_1();
		float L_9 = V_1;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_10 = V_0;
		float L_11 = L_10.get_y_2();
		float L_12 = V_2;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_13 = V_0;
		float L_14 = L_13.get_z_3();
		float L_15 = V_1;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_16 = V_0;
		float L_17 = L_16.get_w_4();
		float L_18 = V_2;
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)(&V_0), ((float)il2cpp_codegen_add((float)L_8, (float)L_9)), ((float)il2cpp_codegen_add((float)L_11, (float)L_12)), ((float)il2cpp_codegen_subtract((float)L_14, (float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_15)))), ((float)il2cpp_codegen_subtract((float)L_17, (float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_18)))), /*hidden argument*/NULL);
	}

IL_0078:
	{
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_19 = Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var);
		NullCheck(L_19);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_20 = Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9(L_19, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_21 = V_0;
		NullCheck(L_20);
		Material_SetVector_m6FC2CC4EBE6C45D48D8B9164148A0CB3124335EC(L_20, _stringLiteralC06C0C8DCD8836A9531D5F9B0B1E92F5A0F98BEF, L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.ViewportMaterialView::SetStereoToMonoOverride(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ViewportMaterialView_SetStereoToMonoOverride_m9E4419E70F17003363CA3A252219980385306119 (ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * __this, bool ___overrideStereoToMono0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ViewportMaterialView_SetStereoToMonoOverride_m9E4419E70F17003363CA3A252219980385306119_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	String_t* G_B3_1 = NULL;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * G_B3_2 = NULL;
	{
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var);
		NullCheck(L_0);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9(L_0, /*hidden argument*/NULL);
		bool L_2 = ___overrideStereoToMono0;
		G_B1_0 = _stringLiteral459B0E189EEC2E290C75D879AF60962B204A4060;
		G_B1_1 = L_1;
		if (L_2)
		{
			G_B2_0 = _stringLiteral459B0E189EEC2E290C75D879AF60962B204A4060;
			G_B2_1 = L_1;
			goto IL_001a;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001a:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		NullCheck(G_B3_2);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector4 Vuplex.WebView.ViewportMaterialView::_rectToVector(UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ViewportMaterialView__rectToVector_mE82B968055D2A0CF24B5D1327179253FDC4EFF3D (ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___rect0, const RuntimeMethod* method)
{
	{
		float L_0 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___rect0), /*hidden argument*/NULL);
		float L_1 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___rect0), /*hidden argument*/NULL);
		float L_2 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___rect0), /*hidden argument*/NULL);
		float L_3 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___rect0), /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Vuplex.WebView.ViewportMaterialView::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ViewportMaterialView__ctor_m5F5041D464E062D0769FCE2527F07E6A134E82C7 (ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Vuplex.WebView.Web::ClearAllData()
extern "C" IL2CPP_METHOD_ATTR void Web_ClearAllData_mC84D1C3802BE2DB69DC6BEF683399EA0B89DD092 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Web_ClearAllData_mC84D1C3802BE2DB69DC6BEF683399EA0B89DD092_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var);
		WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 * L_0 = ((Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_StaticFields*)il2cpp_codegen_static_fields_for(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var))->get__pluginFactory_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuplex.WebView.IWebPlugin Vuplex.WebView.WebPluginFactory::GetPlugin() */, L_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Vuplex.WebView.IWebPlugin::ClearAllData() */, IWebPlugin_t2DF773F5D05CE4BA66AC923F808E93BB7D90C76C_il2cpp_TypeInfo_var, L_1);
		return;
	}
}
// System.Threading.Tasks.Task`1<UnityEngine.Material> Vuplex.WebView.Web::CreateMaterial()
extern "C" IL2CPP_METHOD_ATTR Task_1_t74879D22F3CC6429D4D6FCC94A7597CE737CB1DA * Web_CreateMaterial_mC1EAB14D163166ED8FEDF05DFFC3281B7BE90012 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Web_CreateMaterial_mC1EAB14D163166ED8FEDF05DFFC3281B7BE90012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TaskCompletionSource_1_t8083C9684F0A5B46C36EB727C3A0F3739EA59EC4 * L_0 = (TaskCompletionSource_1_t8083C9684F0A5B46C36EB727C3A0F3739EA59EC4 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t8083C9684F0A5B46C36EB727C3A0F3739EA59EC4_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m1C2FD4998ADA138B6C41A33EC0FB0FB8548CF92A(L_0, /*hidden argument*/TaskCompletionSource_1__ctor_m1C2FD4998ADA138B6C41A33EC0FB0FB8548CF92A_RuntimeMethod_var);
		TaskCompletionSource_1_t8083C9684F0A5B46C36EB727C3A0F3739EA59EC4 * L_1 = L_0;
		Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * L_2 = (Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 *)il2cpp_codegen_object_new(Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3_il2cpp_TypeInfo_var);
		Action_1__ctor_mFE4DACEE3A547513AF5929267E7200E2739B7E14(L_2, L_1, (intptr_t)((intptr_t)TaskCompletionSource_1_SetResult_m4F663858083BE6E11B2CAC7D03C60983405FDC78_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mFE4DACEE3A547513AF5929267E7200E2739B7E14_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var);
		Web_CreateMaterial_mF6009E6F4CB95447C58F2D0E14E5FC22681ECF29(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Task_1_t74879D22F3CC6429D4D6FCC94A7597CE737CB1DA * L_3 = TaskCompletionSource_1_get_Task_mA42AB9FA0F829428BE4C498890B2F344E28E8566(L_1, /*hidden argument*/TaskCompletionSource_1_get_Task_mA42AB9FA0F829428BE4C498890B2F344E28E8566_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Vuplex.WebView.Web::CreateMaterial(System.Action`1<UnityEngine.Material>)
extern "C" IL2CPP_METHOD_ATTR void Web_CreateMaterial_mF6009E6F4CB95447C58F2D0E14E5FC22681ECF29 (Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Web_CreateMaterial_mF6009E6F4CB95447C58F2D0E14E5FC22681ECF29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var);
		WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 * L_0 = ((Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_StaticFields*)il2cpp_codegen_static_fields_for(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var))->get__pluginFactory_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuplex.WebView.IWebPlugin Vuplex.WebView.WebPluginFactory::GetPlugin() */, L_0);
		Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * L_2 = ___callback0;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * >::Invoke(2 /* System.Void Vuplex.WebView.IWebPlugin::CreateMaterial(System.Action`1<UnityEngine.Material>) */, IWebPlugin_t2DF773F5D05CE4BA66AC923F808E93BB7D90C76C_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void Vuplex.WebView.Web::CreateVideoMaterial(System.Action`1<UnityEngine.Material>)
extern "C" IL2CPP_METHOD_ATTR void Web_CreateVideoMaterial_mBDFC31FE1992719604DDF0B85426019584AD09A0 (Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Web_CreateVideoMaterial_mBDFC31FE1992719604DDF0B85426019584AD09A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var);
		WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 * L_0 = ((Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_StaticFields*)il2cpp_codegen_static_fields_for(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var))->get__pluginFactory_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuplex.WebView.IWebPlugin Vuplex.WebView.WebPluginFactory::GetPlugin() */, L_0);
		Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * L_2 = ___callback0;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * >::Invoke(3 /* System.Void Vuplex.WebView.IWebPlugin::CreateVideoMaterial(System.Action`1<UnityEngine.Material>) */, IWebPlugin_t2DF773F5D05CE4BA66AC923F808E93BB7D90C76C_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Threading.Tasks.Task`1<UnityEngine.Texture2D> Vuplex.WebView.Web::CreateTexture(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Task_1_tB68DBA6DA1120A65465275E18B4DD57CA6580BB1 * Web_CreateTexture_m02FAB345739C3E91F76CA9CEDE9130A3993EFFF9 (float ___width0, float ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Web_CreateTexture_m02FAB345739C3E91F76CA9CEDE9130A3993EFFF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TaskCompletionSource_1_tBBC53B913B9FA8D229904EF7E262A97A678D57AA * V_0 = NULL;
	{
		TaskCompletionSource_1_tBBC53B913B9FA8D229904EF7E262A97A678D57AA * L_0 = (TaskCompletionSource_1_tBBC53B913B9FA8D229904EF7E262A97A678D57AA *)il2cpp_codegen_object_new(TaskCompletionSource_1_tBBC53B913B9FA8D229904EF7E262A97A678D57AA_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m1956B55AE4E1C8B54B70936B575997159656ED69(L_0, /*hidden argument*/TaskCompletionSource_1__ctor_m1956B55AE4E1C8B54B70936B575997159656ED69_RuntimeMethod_var);
		V_0 = L_0;
		float L_1 = ___width0;
		float L_2 = ___height1;
		TaskCompletionSource_1_tBBC53B913B9FA8D229904EF7E262A97A678D57AA * L_3 = V_0;
		Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77 * L_4 = (Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77 *)il2cpp_codegen_object_new(Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77_il2cpp_TypeInfo_var);
		Action_1__ctor_mC973C70328D6C85A8183929F295AABE327469148(L_4, L_3, (intptr_t)((intptr_t)TaskCompletionSource_1_SetResult_m875DC4E8359A72CD3BBFA80285184F63EEF82BA3_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC973C70328D6C85A8183929F295AABE327469148_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var);
		Web_CreateTexture_m210998CB0F096B4058D2B6F53A1D238500428D0F(L_1, L_2, L_4, /*hidden argument*/NULL);
		TaskCompletionSource_1_tBBC53B913B9FA8D229904EF7E262A97A678D57AA * L_5 = V_0;
		NullCheck(L_5);
		Task_1_tB68DBA6DA1120A65465275E18B4DD57CA6580BB1 * L_6 = TaskCompletionSource_1_get_Task_m4242037F4A9E8C7E15364B30CC754D27826FBD7C(L_5, /*hidden argument*/TaskCompletionSource_1_get_Task_m4242037F4A9E8C7E15364B30CC754D27826FBD7C_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void Vuplex.WebView.Web::CreateTexture(System.Single,System.Single,System.Action`1<UnityEngine.Texture2D>)
extern "C" IL2CPP_METHOD_ATTR void Web_CreateTexture_m210998CB0F096B4058D2B6F53A1D238500428D0F (float ___width0, float ___height1, Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77 * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Web_CreateTexture_m210998CB0F096B4058D2B6F53A1D238500428D0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var);
		WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 * L_0 = ((Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_StaticFields*)il2cpp_codegen_static_fields_for(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var))->get__pluginFactory_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuplex.WebView.IWebPlugin Vuplex.WebView.WebPluginFactory::GetPlugin() */, L_0);
		float L_2 = ___width0;
		float L_3 = ___height1;
		Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77 * L_4 = ___callback2;
		NullCheck(L_1);
		InterfaceActionInvoker3< float, float, Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77 * >::Invoke(1 /* System.Void Vuplex.WebView.IWebPlugin::CreateTexture(System.Single,System.Single,System.Action`1<UnityEngine.Texture2D>) */, IWebPlugin_t2DF773F5D05CE4BA66AC923F808E93BB7D90C76C_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		return;
	}
}
// Vuplex.WebView.IWebView Vuplex.WebView.Web::CreateWebView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Web_CreateWebView_m5E8104DD2965378BE8C97402E107E7546315E6AF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Web_CreateWebView_m5E8104DD2965378BE8C97402E107E7546315E6AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var);
		WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 * L_0 = ((Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_StaticFields*)il2cpp_codegen_static_fields_for(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var))->get__pluginFactory_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuplex.WebView.IWebPlugin Vuplex.WebView.WebPluginFactory::GetPlugin() */, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuplex.WebView.IWebView Vuplex.WebView.IWebPlugin::CreateWebView() */, IWebPlugin_t2DF773F5D05CE4BA66AC923F808E93BB7D90C76C_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// Vuplex.WebView.IWebView Vuplex.WebView.Web::CreateWebView(Vuplex.WebView.WebPluginType[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Web_CreateWebView_m8B08CB5C160A4654978AC73251CB67A02B42123C (WebPluginTypeU5BU5D_tF25070ED5E0BC7C81ADE86F416BFFFD5472E14B8* ___preferredPlugins0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Web_CreateWebView_m8B08CB5C160A4654978AC73251CB67A02B42123C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var);
		WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 * L_0 = ((Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_StaticFields*)il2cpp_codegen_static_fields_for(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var))->get__pluginFactory_0();
		WebPluginTypeU5BU5D_tF25070ED5E0BC7C81ADE86F416BFFFD5472E14B8* L_1 = ___preferredPlugins0;
		NullCheck(L_0);
		RuntimeObject* L_2 = VirtFuncInvoker1< RuntimeObject*, WebPluginTypeU5BU5D_tF25070ED5E0BC7C81ADE86F416BFFFD5472E14B8* >::Invoke(5 /* Vuplex.WebView.IWebPlugin Vuplex.WebView.WebPluginFactory::GetPlugin(Vuplex.WebView.WebPluginType[]) */, L_0, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuplex.WebView.IWebView Vuplex.WebView.IWebPlugin::CreateWebView() */, IWebPlugin_t2DF773F5D05CE4BA66AC923F808E93BB7D90C76C_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}
}
// System.Void Vuplex.WebView.Web::SetIgnoreCertificateErrors(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Web_SetIgnoreCertificateErrors_m01CD07269B4A9BE20F2345D388D32DFE777D024D (bool ___ignore0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Web_SetIgnoreCertificateErrors_m01CD07269B4A9BE20F2345D388D32DFE777D024D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var);
		WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 * L_0 = ((Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_StaticFields*)il2cpp_codegen_static_fields_for(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var))->get__pluginFactory_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuplex.WebView.IWebPlugin Vuplex.WebView.WebPluginFactory::GetPlugin() */, L_0);
		bool L_2 = ___ignore0;
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(5 /* System.Void Vuplex.WebView.IWebPlugin::SetIgnoreCertificateErrors(System.Boolean) */, IWebPlugin_t2DF773F5D05CE4BA66AC923F808E93BB7D90C76C_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void Vuplex.WebView.Web::SetTouchScreenKeyboardEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Web_SetTouchScreenKeyboardEnabled_m3C4DCB372B442BB5B00A16FF0CCE956A3F0ACBE5 (bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Web_SetTouchScreenKeyboardEnabled_m3C4DCB372B442BB5B00A16FF0CCE956A3F0ACBE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var);
		WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 * L_0 = ((Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_StaticFields*)il2cpp_codegen_static_fields_for(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var))->get__pluginFactory_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuplex.WebView.IWebPlugin Vuplex.WebView.WebPluginFactory::GetPlugin() */, L_0);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IPluginWithTouchScreenKeyboard_tB5D06E1D022DE3B25627374A1313E09190433E12_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		bool L_4 = ___enabled0;
		NullCheck(L_3);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void Vuplex.WebView.IPluginWithTouchScreenKeyboard::SetTouchScreenKeyboardEnabled(System.Boolean) */, IPluginWithTouchScreenKeyboard_tB5D06E1D022DE3B25627374A1313E09190433E12_il2cpp_TypeInfo_var, L_3, L_4);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Vuplex.WebView.Web::SetStorageEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Web_SetStorageEnabled_m87AC297A3D512BDDD8EA94094F50AA98B2FB28D1 (bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Web_SetStorageEnabled_m87AC297A3D512BDDD8EA94094F50AA98B2FB28D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var);
		WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 * L_0 = ((Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_StaticFields*)il2cpp_codegen_static_fields_for(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var))->get__pluginFactory_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuplex.WebView.IWebPlugin Vuplex.WebView.WebPluginFactory::GetPlugin() */, L_0);
		bool L_2 = ___enabled0;
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(6 /* System.Void Vuplex.WebView.IWebPlugin::SetStorageEnabled(System.Boolean) */, IWebPlugin_t2DF773F5D05CE4BA66AC923F808E93BB7D90C76C_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void Vuplex.WebView.Web::SetUserAgent(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Web_SetUserAgent_m81E8A63E4C655A78D3450A3C71B1AF855C2FB9FD (bool ___mobile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Web_SetUserAgent_m81E8A63E4C655A78D3450A3C71B1AF855C2FB9FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var);
		WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 * L_0 = ((Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_StaticFields*)il2cpp_codegen_static_fields_for(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var))->get__pluginFactory_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuplex.WebView.IWebPlugin Vuplex.WebView.WebPluginFactory::GetPlugin() */, L_0);
		bool L_2 = ___mobile0;
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(7 /* System.Void Vuplex.WebView.IWebPlugin::SetUserAgent(System.Boolean) */, IWebPlugin_t2DF773F5D05CE4BA66AC923F808E93BB7D90C76C_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void Vuplex.WebView.Web::SetUserAgent(System.String)
extern "C" IL2CPP_METHOD_ATTR void Web_SetUserAgent_mF826653DB13A0D34DC2124FB2D500A98F9ADADAE (String_t* ___userAgent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Web_SetUserAgent_mF826653DB13A0D34DC2124FB2D500A98F9ADADAE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var);
		WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 * L_0 = ((Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_StaticFields*)il2cpp_codegen_static_fields_for(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var))->get__pluginFactory_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuplex.WebView.IWebPlugin Vuplex.WebView.WebPluginFactory::GetPlugin() */, L_0);
		String_t* L_2 = ___userAgent0;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(8 /* System.Void Vuplex.WebView.IWebPlugin::SetUserAgent(System.String) */, IWebPlugin_t2DF773F5D05CE4BA66AC923F808E93BB7D90C76C_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void Vuplex.WebView.Web::SetPluginFactory(Vuplex.WebView.WebPluginFactory)
extern "C" IL2CPP_METHOD_ATTR void Web_SetPluginFactory_m1527026227BF82549853FB75F7B4EEC3D42844A3 (WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 * ___pluginFactory0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Web_SetPluginFactory_m1527026227BF82549853FB75F7B4EEC3D42844A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 * L_0 = ___pluginFactory0;
		IL2CPP_RUNTIME_CLASS_INIT(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var);
		((Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_StaticFields*)il2cpp_codegen_static_fields_for(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var))->set__pluginFactory_0(L_0);
		return;
	}
}
// System.Void Vuplex.WebView.Web::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Web__cctor_m4255D2FAD5F1DDBE1C796D2897AD8B00891FB152 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Web__cctor_m4255D2FAD5F1DDBE1C796D2897AD8B00891FB152_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 * L_0 = (WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 *)il2cpp_codegen_object_new(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_il2cpp_TypeInfo_var);
		WebPluginFactory__ctor_m24C06C745DAC20E3CE0A2138ED677F11393CE0FC(L_0, /*hidden argument*/NULL);
		((Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_StaticFields*)il2cpp_codegen_static_fields_for(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var))->set__pluginFactory_0(L_0);
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
// Vuplex.WebView.IWebPlugin Vuplex.WebView.WebPluginFactory::GetPlugin()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WebPluginFactory_GetPlugin_mEFF555A5EA5A64AF1BE198C1B42A888164F4CB38 (WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = VirtFuncInvoker1< RuntimeObject*, WebPluginTypeU5BU5D_tF25070ED5E0BC7C81ADE86F416BFFFD5472E14B8* >::Invoke(5 /* Vuplex.WebView.IWebPlugin Vuplex.WebView.WebPluginFactory::GetPlugin(Vuplex.WebView.WebPluginType[]) */, __this, (WebPluginTypeU5BU5D_tF25070ED5E0BC7C81ADE86F416BFFFD5472E14B8*)(WebPluginTypeU5BU5D_tF25070ED5E0BC7C81ADE86F416BFFFD5472E14B8*)NULL);
		return L_0;
	}
}
// Vuplex.WebView.IWebPlugin Vuplex.WebView.WebPluginFactory::GetPlugin(Vuplex.WebView.WebPluginType[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WebPluginFactory_GetPlugin_mF7D7F9B227FD809E021F517E060A18DA7C360BB6 (WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 * __this, WebPluginTypeU5BU5D_tF25070ED5E0BC7C81ADE86F416BFFFD5472E14B8* ___preferredPlugins0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebPluginFactory_GetPlugin_mF7D7F9B227FD809E021F517E060A18DA7C360BB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_StaticFields*)il2cpp_codegen_static_fields_for(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_il2cpp_TypeInfo_var))->get__iosPlugin_2();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_StaticFields*)il2cpp_codegen_static_fields_for(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_il2cpp_TypeInfo_var))->get__iosPlugin_2();
		return L_1;
	}

IL_000d:
	{
		WebViewUnavailableException_tD560D304E48B8C3927F8ED93B647C9EDBE5D4B1B * L_2 = (WebViewUnavailableException_tD560D304E48B8C3927F8ED93B647C9EDBE5D4B1B *)il2cpp_codegen_object_new(WebViewUnavailableException_tD560D304E48B8C3927F8ED93B647C9EDBE5D4B1B_il2cpp_TypeInfo_var);
		WebViewUnavailableException__ctor_m53F78BA2AAA1C8F59DCB6609CBCDE811EB6AE11E(L_2, _stringLiteral56839ED9EDBBE925C580345DB88C4F56DA790AAB, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, WebPluginFactory_GetPlugin_mF7D7F9B227FD809E021F517E060A18DA7C360BB6_RuntimeMethod_var);
	}
}
// System.Void Vuplex.WebView.WebPluginFactory::RegisterAndroidPlugin(Vuplex.WebView.IWebPlugin)
extern "C" IL2CPP_METHOD_ATTR void WebPluginFactory_RegisterAndroidPlugin_m3FE89C1DDE8DAF38D8E35E5B577C62E79F445CDD (RuntimeObject* ___plugin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebPluginFactory_RegisterAndroidPlugin_m3FE89C1DDE8DAF38D8E35E5B577C62E79F445CDD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___plugin0;
		IL2CPP_RUNTIME_CLASS_INIT(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_il2cpp_TypeInfo_var);
		((WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_StaticFields*)il2cpp_codegen_static_fields_for(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_il2cpp_TypeInfo_var))->set__androidPlugin_0(L_0);
		return;
	}
}
// System.Void Vuplex.WebView.WebPluginFactory::RegisterAndroidGeckoPlugin(Vuplex.WebView.IWebPlugin)
extern "C" IL2CPP_METHOD_ATTR void WebPluginFactory_RegisterAndroidGeckoPlugin_m658F811997EF198E13187192C5D8098BE6559338 (RuntimeObject* ___plugin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebPluginFactory_RegisterAndroidGeckoPlugin_m658F811997EF198E13187192C5D8098BE6559338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___plugin0;
		IL2CPP_RUNTIME_CLASS_INIT(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_il2cpp_TypeInfo_var);
		((WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_StaticFields*)il2cpp_codegen_static_fields_for(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_il2cpp_TypeInfo_var))->set__androidGeckoPlugin_1(L_0);
		return;
	}
}
// System.Void Vuplex.WebView.WebPluginFactory::RegisterIOSPlugin(Vuplex.WebView.IWebPlugin)
extern "C" IL2CPP_METHOD_ATTR void WebPluginFactory_RegisterIOSPlugin_mABB6D9949F7DA58D0B1CED7535FAAB469DE8CD80 (RuntimeObject* ___plugin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebPluginFactory_RegisterIOSPlugin_mABB6D9949F7DA58D0B1CED7535FAAB469DE8CD80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___plugin0;
		IL2CPP_RUNTIME_CLASS_INIT(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_il2cpp_TypeInfo_var);
		((WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_StaticFields*)il2cpp_codegen_static_fields_for(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_il2cpp_TypeInfo_var))->set__iosPlugin_2(L_0);
		return;
	}
}
// System.Void Vuplex.WebView.WebPluginFactory::RegisterMacPlugin(Vuplex.WebView.IWebPlugin)
extern "C" IL2CPP_METHOD_ATTR void WebPluginFactory_RegisterMacPlugin_m4BD298E23F8E352450DDA881DE61D78C04BC691B (RuntimeObject* ___plugin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebPluginFactory_RegisterMacPlugin_m4BD298E23F8E352450DDA881DE61D78C04BC691B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___plugin0;
		IL2CPP_RUNTIME_CLASS_INIT(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_il2cpp_TypeInfo_var);
		((WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_StaticFields*)il2cpp_codegen_static_fields_for(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_il2cpp_TypeInfo_var))->set__macPlugin_3(L_0);
		return;
	}
}
// System.Void Vuplex.WebView.WebPluginFactory::RegisterMockPlugin(Vuplex.WebView.IWebPlugin)
extern "C" IL2CPP_METHOD_ATTR void WebPluginFactory_RegisterMockPlugin_mC6518B1C1741E97402F9C2B9F48C575D8F9BD1B1 (RuntimeObject* ___plugin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebPluginFactory_RegisterMockPlugin_mC6518B1C1741E97402F9C2B9F48C575D8F9BD1B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___plugin0;
		IL2CPP_RUNTIME_CLASS_INIT(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_il2cpp_TypeInfo_var);
		((WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_StaticFields*)il2cpp_codegen_static_fields_for(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_il2cpp_TypeInfo_var))->set__mockPlugin_4(L_0);
		return;
	}
}
// System.Void Vuplex.WebView.WebPluginFactory::RegisterUwpPlugin(Vuplex.WebView.IWebPlugin)
extern "C" IL2CPP_METHOD_ATTR void WebPluginFactory_RegisterUwpPlugin_m066A3FFBCD9E096E8473313909AAA06046BE8257 (RuntimeObject* ___plugin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebPluginFactory_RegisterUwpPlugin_m066A3FFBCD9E096E8473313909AAA06046BE8257_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___plugin0;
		IL2CPP_RUNTIME_CLASS_INIT(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_il2cpp_TypeInfo_var);
		((WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_StaticFields*)il2cpp_codegen_static_fields_for(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_il2cpp_TypeInfo_var))->set__uwpPlugin_7(L_0);
		return;
	}
}
// System.Void Vuplex.WebView.WebPluginFactory::RegisterWindowsPlugin(Vuplex.WebView.IWebPlugin)
extern "C" IL2CPP_METHOD_ATTR void WebPluginFactory_RegisterWindowsPlugin_m270749185016D4A08C11C78AA565AB09D92D628D (RuntimeObject* ___plugin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebPluginFactory_RegisterWindowsPlugin_m270749185016D4A08C11C78AA565AB09D92D628D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___plugin0;
		IL2CPP_RUNTIME_CLASS_INIT(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_il2cpp_TypeInfo_var);
		((WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_StaticFields*)il2cpp_codegen_static_fields_for(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_il2cpp_TypeInfo_var))->set__windowsPlugin_8(L_0);
		return;
	}
}
// System.Void Vuplex.WebView.WebPluginFactory::_logMockWarningOnce(System.String)
extern "C" IL2CPP_METHOD_ATTR void WebPluginFactory__logMockWarningOnce_m9BCF6ACA96073B76C6EBC33AACBA7C8097847CB6 (WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 * __this, String_t* ___warning0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebPluginFactory__logMockWarningOnce_m9BCF6ACA96073B76C6EBC33AACBA7C8097847CB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__mockWarningLogged_5();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		__this->set__mockWarningLogged_5((bool)1);
		String_t* L_1 = ___warning0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_1, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void Vuplex.WebView.WebPluginFactory::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WebPluginFactory__ctor_m24C06C745DAC20E3CE0A2138ED677F11393CE0FC (WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.WebPluginFactory::.cctor()
extern "C" IL2CPP_METHOD_ATTR void WebPluginFactory__cctor_m2CE21F40FB2D492C9ED78D50968205122AFAC698 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebPluginFactory__cctor_m2CE21F40FB2D492C9ED78D50968205122AFAC698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MockWebPlugin_t99272A529401AD5952F2575D14546B41B7129706 * L_0 = MockWebPlugin_get_Instance_mC313676E7F215E61750C38E24F66E3FB0C194BCC(/*hidden argument*/NULL);
		((WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_StaticFields*)il2cpp_codegen_static_fields_for(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_il2cpp_TypeInfo_var))->set__mockPlugin_4(L_0);
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
// Conversion methods for marshalling of: Vuplex.WebView.WebViewOptions
extern "C" void WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C_marshal_pinvoke(const WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C& unmarshaled, WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C_marshaled_pinvoke& marshaled)
{
	marshaled.___clickWithoutStealingFocus_0 = static_cast<int32_t>(unmarshaled.get_clickWithoutStealingFocus_0());
	marshaled.___disableVideo_1 = static_cast<int32_t>(unmarshaled.get_disableVideo_1());
	if (unmarshaled.get_preferredPlugins_2() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_preferredPlugins_Length = (unmarshaled.get_preferredPlugins_2())->max_length;
		marshaled.___preferredPlugins_2 = il2cpp_codegen_marshal_allocate_array<int32_t>(_unmarshaled_preferredPlugins_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_preferredPlugins_Length); i++)
		{
			(marshaled.___preferredPlugins_2)[i] = (unmarshaled.get_preferredPlugins_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___preferredPlugins_2 = NULL;
	}
}
extern "C" void WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C_marshal_pinvoke_back(const WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C_marshaled_pinvoke& marshaled, WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool unmarshaled_clickWithoutStealingFocus_temp_0 = false;
	unmarshaled_clickWithoutStealingFocus_temp_0 = static_cast<bool>(marshaled.___clickWithoutStealingFocus_0);
	unmarshaled.set_clickWithoutStealingFocus_0(unmarshaled_clickWithoutStealingFocus_temp_0);
	bool unmarshaled_disableVideo_temp_1 = false;
	unmarshaled_disableVideo_temp_1 = static_cast<bool>(marshaled.___disableVideo_1);
	unmarshaled.set_disableVideo_1(unmarshaled_disableVideo_temp_1);
	if (marshaled.___preferredPlugins_2 != NULL)
	{
		if (unmarshaled.get_preferredPlugins_2() == NULL)
		{
			unmarshaled.set_preferredPlugins_2(reinterpret_cast<WebPluginTypeU5BU5D_tF25070ED5E0BC7C81ADE86F416BFFFD5472E14B8*>(SZArrayNew(WebPluginTypeU5BU5D_tF25070ED5E0BC7C81ADE86F416BFFFD5472E14B8_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_preferredPlugins_2())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_preferredPlugins_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___preferredPlugins_2)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: Vuplex.WebView.WebViewOptions
extern "C" void WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C_marshal_pinvoke_cleanup(WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C_marshaled_pinvoke& marshaled)
{
	if (marshaled.___preferredPlugins_2 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___preferredPlugins_2);
		marshaled.___preferredPlugins_2 = NULL;
	}
}
// Conversion methods for marshalling of: Vuplex.WebView.WebViewOptions
extern "C" void WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C_marshal_com(const WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C& unmarshaled, WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C_marshaled_com& marshaled)
{
	marshaled.___clickWithoutStealingFocus_0 = static_cast<int32_t>(unmarshaled.get_clickWithoutStealingFocus_0());
	marshaled.___disableVideo_1 = static_cast<int32_t>(unmarshaled.get_disableVideo_1());
	if (unmarshaled.get_preferredPlugins_2() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_preferredPlugins_Length = (unmarshaled.get_preferredPlugins_2())->max_length;
		marshaled.___preferredPlugins_2 = il2cpp_codegen_marshal_allocate_array<int32_t>(_unmarshaled_preferredPlugins_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_preferredPlugins_Length); i++)
		{
			(marshaled.___preferredPlugins_2)[i] = (unmarshaled.get_preferredPlugins_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___preferredPlugins_2 = NULL;
	}
}
extern "C" void WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C_marshal_com_back(const WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C_marshaled_com& marshaled, WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool unmarshaled_clickWithoutStealingFocus_temp_0 = false;
	unmarshaled_clickWithoutStealingFocus_temp_0 = static_cast<bool>(marshaled.___clickWithoutStealingFocus_0);
	unmarshaled.set_clickWithoutStealingFocus_0(unmarshaled_clickWithoutStealingFocus_temp_0);
	bool unmarshaled_disableVideo_temp_1 = false;
	unmarshaled_disableVideo_temp_1 = static_cast<bool>(marshaled.___disableVideo_1);
	unmarshaled.set_disableVideo_1(unmarshaled_disableVideo_temp_1);
	if (marshaled.___preferredPlugins_2 != NULL)
	{
		if (unmarshaled.get_preferredPlugins_2() == NULL)
		{
			unmarshaled.set_preferredPlugins_2(reinterpret_cast<WebPluginTypeU5BU5D_tF25070ED5E0BC7C81ADE86F416BFFFD5472E14B8*>(SZArrayNew(WebPluginTypeU5BU5D_tF25070ED5E0BC7C81ADE86F416BFFFD5472E14B8_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_preferredPlugins_2())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_preferredPlugins_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___preferredPlugins_2)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: Vuplex.WebView.WebViewOptions
extern "C" void WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C_marshal_com_cleanup(WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C_marshaled_com& marshaled)
{
	if (marshaled.___preferredPlugins_2 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___preferredPlugins_2);
		marshaled.___preferredPlugins_2 = NULL;
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
// System.Void Vuplex.WebView.WebViewPrefab::add_Clicked(System.EventHandler`1<Vuplex.WebView.ClickedEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_add_Clicked_mA5FDDA91748BC6D07971F12BA6CA2F2C37D9AE9A (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_add_Clicked_mA5FDDA91748BC6D07971F12BA6CA2F2C37D9AE9A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * V_0 = NULL;
	EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * V_1 = NULL;
	EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * V_2 = NULL;
	{
		EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * L_0 = __this->get_Clicked_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * L_2 = V_1;
		EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E_il2cpp_TypeInfo_var));
		EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E ** L_5 = __this->get_address_of_Clicked_4();
		EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * L_6 = V_2;
		EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * L_7 = V_1;
		EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E *>((EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * L_9 = V_0;
		EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E *)L_9) == ((RuntimeObject*)(EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::remove_Clicked(System.EventHandler`1<Vuplex.WebView.ClickedEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_remove_Clicked_m348C3366BB3D78C27EA6761F37B31342DAC1E3F6 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_remove_Clicked_m348C3366BB3D78C27EA6761F37B31342DAC1E3F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * V_0 = NULL;
	EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * V_1 = NULL;
	EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * V_2 = NULL;
	{
		EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * L_0 = __this->get_Clicked_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * L_2 = V_1;
		EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E_il2cpp_TypeInfo_var));
		EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E ** L_5 = __this->get_address_of_Clicked_4();
		EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * L_6 = V_2;
		EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * L_7 = V_1;
		EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E *>((EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * L_9 = V_0;
		EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E *)L_9) == ((RuntimeObject*)(EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::add_Initialized(System.EventHandler)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_add_Initialized_mC6B16CDB0A243D13FF76EDE265D4EF4744F1FB92 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_add_Initialized_mC6B16CDB0A243D13FF76EDE265D4EF4744F1FB92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * V_0 = NULL;
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * V_1 = NULL;
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * V_2 = NULL;
	{
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_0 = __this->get_Initialized_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_2 = V_1;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var));
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** L_5 = __this->get_address_of_Initialized_5();
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_6 = V_2;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_7 = V_1;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_8 = InterlockedCompareExchangeImpl<EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *>((EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_9 = V_0;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)L_9) == ((RuntimeObject*)(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::remove_Initialized(System.EventHandler)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_remove_Initialized_m2879AC9B739F537E45354FDD6179406FA6A583DF (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_remove_Initialized_m2879AC9B739F537E45354FDD6179406FA6A583DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * V_0 = NULL;
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * V_1 = NULL;
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * V_2 = NULL;
	{
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_0 = __this->get_Initialized_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_2 = V_1;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var));
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** L_5 = __this->get_address_of_Initialized_5();
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_6 = V_2;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_7 = V_1;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_8 = InterlockedCompareExchangeImpl<EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *>((EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_9 = V_0;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)L_9) == ((RuntimeObject*)(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::add_Scrolled(System.EventHandler`1<Vuplex.WebView.ScrolledEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_add_Scrolled_mC4F2D4090256832CCE3C92F4DEA812050B8642CC (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_add_Scrolled_mC4F2D4090256832CCE3C92F4DEA812050B8642CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * V_0 = NULL;
	EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * V_1 = NULL;
	EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * V_2 = NULL;
	{
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * L_0 = __this->get_Scrolled_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * L_2 = V_1;
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515_il2cpp_TypeInfo_var));
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 ** L_5 = __this->get_address_of_Scrolled_6();
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * L_6 = V_2;
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * L_7 = V_1;
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 *>((EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * L_9 = V_0;
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 *)L_9) == ((RuntimeObject*)(EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::remove_Scrolled(System.EventHandler`1<Vuplex.WebView.ScrolledEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_remove_Scrolled_m9220187A6C33DDC52A63155EE6E5CF3334ED461A (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_remove_Scrolled_m9220187A6C33DDC52A63155EE6E5CF3334ED461A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * V_0 = NULL;
	EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * V_1 = NULL;
	EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * V_2 = NULL;
	{
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * L_0 = __this->get_Scrolled_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * L_2 = V_1;
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515_il2cpp_TypeInfo_var));
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 ** L_5 = __this->get_address_of_Scrolled_6();
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * L_6 = V_2;
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * L_7 = V_1;
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 *>((EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * L_9 = V_0;
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 *)L_9) == ((RuntimeObject*)(EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Single Vuplex.WebView.WebViewPrefab::get_DragToScrollThreshold()
extern "C" IL2CPP_METHOD_ATTR float WebViewPrefab_get_DragToScrollThreshold_m10E5CACA3FB5233CF6A2CD47778EA5052A370093 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CDragToScrollThresholdU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::set_DragToScrollThreshold(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_set_DragToScrollThreshold_mF1B5D9F2A07CB9938BC8C81A1CA30B44AD0EE240 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CDragToScrollThresholdU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Single Vuplex.WebView.WebViewPrefab::get_ScrollSensitivity()
extern "C" IL2CPP_METHOD_ATTR float WebViewPrefab_get_ScrollSensitivity_m6BE9D0D60766A0C0B07E748ADF3FAAA3B872C201 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_get_ScrollSensitivity_m6BE9D0D60766A0C0B07E748ADF3FAAA3B872C201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ((WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE_StaticFields*)il2cpp_codegen_static_fields_for(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE_il2cpp_TypeInfo_var))->get_U3CScrollSensitivityU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::set_ScrollSensitivity(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_set_ScrollSensitivity_m68739511A99D743316D8025B364AD84A096BC4D3 (float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_set_ScrollSensitivity_m68739511A99D743316D8025B364AD84A096BC4D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		((WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE_StaticFields*)il2cpp_codegen_static_fields_for(WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE_il2cpp_TypeInfo_var))->set_U3CScrollSensitivityU3Ek__BackingField_16(L_0);
		return;
	}
}
// UnityEngine.Collider Vuplex.WebView.WebViewPrefab::get_Collider()
extern "C" IL2CPP_METHOD_ATTR Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * WebViewPrefab_get_Collider_mDC5483F6850AC907ACFBDC84F1F7E28A23BF0137 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_get_Collider_mDC5483F6850AC907ACFBDC84F1F7E28A23BF0137_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_0 = WebViewPrefab__getDefaultView_mA9F972BA99F0344C4A4B189D532A148EA374A1A9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_1 = Component_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m6B8E8E0E0AF6B08652B81B7950FC5AF63EAD40C6(L_0, /*hidden argument*/Component_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m6B8E8E0E0AF6B08652B81B7950FC5AF63EAD40C6_RuntimeMethod_var);
		return L_1;
	}
}
// UnityEngine.Material Vuplex.WebView.WebViewPrefab::get_Material()
extern "C" IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * WebViewPrefab_get_Material_mD81E532E71CDB60953A01C0C7935543B14B1B457 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_get_Material_mD81E532E71CDB60953A01C0C7935543B14B1B457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_0 = __this->get__view_29();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_2 = __this->get__view_29();
		NullCheck(L_2);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = VirtFuncInvoker0< Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * >::Invoke(4 /* UnityEngine.Material Vuplex.WebView.ViewportMaterialView::get_Material() */, L_2);
		return L_3;
	}

IL_001a:
	{
		return (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)NULL;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::set_Material(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_set_Material_m124B8F43F31B560A909998032E12AAD1A582253E (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method)
{
	{
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_0 = __this->get__view_29();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * >::Invoke(5 /* System.Void Vuplex.WebView.ViewportMaterialView::set_Material(UnityEngine.Material) */, L_0, L_1);
		return;
	}
}
// System.Boolean Vuplex.WebView.WebViewPrefab::get_Visible()
extern "C" IL2CPP_METHOD_ATTR bool WebViewPrefab_get_Visible_m9C5DA613D19243CA6A1110E5DB7CD53EDAE5CD27 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method)
{
	{
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_0 = VirtFuncInvoker0< ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * >::Invoke(6 /* Vuplex.WebView.ViewportMaterialView Vuplex.WebView.WebViewPrefab::_getView() */, __this);
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean Vuplex.WebView.ViewportMaterialView::get_Visible() */, L_0);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_2 = WebViewPrefab__getVideoLayer_mB5724AEF4C9D3F5E7EDF7D626FD9345FCE643AEB(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean Vuplex.WebView.ViewportMaterialView::get_Visible() */, L_2);
		return L_3;
	}

IL_0019:
	{
		return (bool)1;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::set_Visible(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_set_Visible_m57318F470647C2A4EC1769C3C3657519B8076D60 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_0 = VirtFuncInvoker0< ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * >::Invoke(6 /* Vuplex.WebView.ViewportMaterialView Vuplex.WebView.WebViewPrefab::_getView() */, __this);
		bool L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(9 /* System.Void Vuplex.WebView.ViewportMaterialView::set_Visible(System.Boolean) */, L_0, L_1);
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_2 = WebViewPrefab__getVideoLayer_mB5724AEF4C9D3F5E7EDF7D626FD9345FCE643AEB(__this, /*hidden argument*/NULL);
		bool L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< bool >::Invoke(9 /* System.Void Vuplex.WebView.ViewportMaterialView::set_Visible(System.Boolean) */, L_2, L_3);
		return;
	}
}
// Vuplex.WebView.IWebView Vuplex.WebView.WebViewPrefab::get_WebView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WebViewPrefab_get_WebView_m12552AF71855F77EC3BA726CC44AB793F47784D1 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get__webView_33();
		return L_0;
	}
}
// Vuplex.WebView.WebViewPrefab Vuplex.WebView.WebViewPrefab::Instantiate(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * WebViewPrefab_Instantiate_m3454BF49F7AB1E557AE1D41E3048BDCA8D372843 (float ___width0, float ___height1, const RuntimeMethod* method)
{
	WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = ___width0;
		float L_1 = ___height1;
		il2cpp_codegen_initobj((&V_0), sizeof(WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C ));
		WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C  L_2 = V_0;
		WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * L_3 = WebViewPrefab_Instantiate_m91A51598D793201B9D13F612834861B520B092E5(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Vuplex.WebView.WebViewPrefab Vuplex.WebView.WebViewPrefab::Instantiate(System.Single,System.Single,Vuplex.WebView.WebViewOptions)
extern "C" IL2CPP_METHOD_ATTR WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * WebViewPrefab_Instantiate_m91A51598D793201B9D13F612834861B520B092E5 (float ___width0, float ___height1, WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C  ___options2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_Instantiate_m91A51598D793201B9D13F612834861B520B092E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1(_stringLiteralB042D04B8E87A67980F52F2DB7592E3C38A80D9F, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90(((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)CastclassSealed((RuntimeObject*)L_0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var)), /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var);
		NullCheck(L_1);
		WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * L_2 = GameObject_GetComponent_TisWebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE_m966B1BA11F9B73255B21EB2EAFA0D24F75348E70(L_1, /*hidden argument*/GameObject_GetComponent_TisWebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE_m966B1BA11F9B73255B21EB2EAFA0D24F75348E70_RuntimeMethod_var);
		WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * L_3 = L_2;
		float L_4 = ___width0;
		float L_5 = ___height1;
		WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C  L_6 = ___options2;
		NullCheck(L_3);
		VirtActionInvoker3< float, float, WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C  >::Invoke(5 /* System.Void Vuplex.WebView.WebViewPrefab::Init(System.Single,System.Single,Vuplex.WebView.WebViewOptions) */, L_3, L_4, L_5, L_6);
		return L_3;
	}
}
// Vuplex.WebView.WebViewPrefab Vuplex.WebView.WebViewPrefab::Instantiate(Vuplex.WebView.IWebView)
extern "C" IL2CPP_METHOD_ATTR WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * WebViewPrefab_Instantiate_m4B348C91B252D1B7FA5A45CA88E93C4B0963647C (RuntimeObject* ___webView0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_Instantiate_m4B348C91B252D1B7FA5A45CA88E93C4B0963647C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1(_stringLiteralB042D04B8E87A67980F52F2DB7592E3C38A80D9F, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90(((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)CastclassSealed((RuntimeObject*)L_0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var)), /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var);
		NullCheck(L_1);
		WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * L_2 = GameObject_GetComponent_TisWebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE_m966B1BA11F9B73255B21EB2EAFA0D24F75348E70(L_1, /*hidden argument*/GameObject_GetComponent_TisWebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE_m966B1BA11F9B73255B21EB2EAFA0D24F75348E70_RuntimeMethod_var);
		WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * L_3 = L_2;
		RuntimeObject* L_4 = ___webView0;
		NullCheck(L_3);
		WebViewPrefab_Init_m236885ABF8FDA9717A1D8C3947D84C33876FD4D0(L_3, L_4, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::Init()
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_Init_mCF3514946F4D01E3396BB5415540C6B8F9D35BC5 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method)
{
	WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		il2cpp_codegen_initobj((&V_0), sizeof(WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C ));
		WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C  L_6 = V_0;
		WebViewPrefab__init_mF91085566A79B6477FF2C639B4BC414887409FB3(__this, L_2, L_5, L_6, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::Init(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_Init_m6AD6A00F7150C42D07950B2EFBA704DB7FBE006A (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, float ___width0, float ___height1, const RuntimeMethod* method)
{
	WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = ___width0;
		float L_1 = ___height1;
		il2cpp_codegen_initobj((&V_0), sizeof(WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C ));
		WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C  L_2 = V_0;
		WebViewPrefab__init_mF91085566A79B6477FF2C639B4BC414887409FB3(__this, L_0, L_1, L_2, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::Init(System.Single,System.Single,Vuplex.WebView.WebViewOptions)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_Init_mDD6EB86432260D2C8109A3B1962B7F3F12BFEC74 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, float ___width0, float ___height1, WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C  ___options2, const RuntimeMethod* method)
{
	{
		float L_0 = ___width0;
		float L_1 = ___height1;
		WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C  L_2 = ___options2;
		WebViewPrefab__init_mF91085566A79B6477FF2C639B4BC414887409FB3(__this, L_0, L_1, L_2, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::Init(Vuplex.WebView.IWebView)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_Init_m236885ABF8FDA9717A1D8C3947D84C33876FD4D0 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, RuntimeObject* ___webView0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_Init_m236885ABF8FDA9717A1D8C3947D84C33876FD4D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___webView0;
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(15 /* System.Boolean Vuplex.WebView.IWebView::get_IsInitialized() */, IWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, _stringLiteral577D7200DC7F0BD96B9FF582F80E235B44F8B5A9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, WebViewPrefab_Init_m236885ABF8FDA9717A1D8C3947D84C33876FD4D0_RuntimeMethod_var);
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___webView0;
		NullCheck(L_3);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = InterfaceFuncInvoker0< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(19 /* UnityEngine.Vector2 Vuplex.WebView.IWebView::get_Size() */, IWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_il2cpp_TypeInfo_var, L_3);
		float L_5 = L_4.get_x_0();
		RuntimeObject* L_6 = ___webView0;
		NullCheck(L_6);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = InterfaceFuncInvoker0< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(19 /* UnityEngine.Vector2 Vuplex.WebView.IWebView::get_Size() */, IWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_il2cpp_TypeInfo_var, L_6);
		float L_8 = L_7.get_y_1();
		il2cpp_codegen_initobj((&V_0), sizeof(WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C ));
		WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C  L_9 = V_0;
		RuntimeObject* L_10 = ___webView0;
		WebViewPrefab__init_mF91085566A79B6477FF2C639B4BC414887409FB3(__this, L_5, L_8, L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 Vuplex.WebView.WebViewPrefab::ConvertToScreenPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  WebViewPrefab_ConvertToScreenPoint_mBBBDCA88568205AA0C1D52A927CF94DD74295EE1 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get__viewResizer_32();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___worldPosition0;
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_InverseTransformPoint_mB6E3145F20B531B4A781C194BAC43A8255C96C47(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		float L_5 = L_4.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		float L_7 = L_6.get_y_3();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_8), ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_5)), ((float)il2cpp_codegen_multiply((float)(-1.0f), (float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::Destroy()
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_Destroy_mF72F901B59834762E5FF809B2B007EF34FAC780A (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_Destroy_mF72F901B59834762E5FF809B2B007EF34FAC780A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::Resize(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_Resize_mBBFFFD7A79975BC5DD6024D02634506EB5A5C0C5 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, float ___width0, float ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_Resize_mBBFFFD7A79975BC5DD6024D02634506EB5A5C0C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__webView_33();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->get__webView_33();
		float L_2 = ___width0;
		float L_3 = ___height1;
		NullCheck(L_1);
		InterfaceActionInvoker2< float, float >::Invoke(54 /* System.Void Vuplex.WebView.IWebView::Resize(System.Single,System.Single) */, IWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_il2cpp_TypeInfo_var, L_1, L_2, L_3);
	}

IL_0015:
	{
		float L_4 = ___width0;
		float L_5 = ___height1;
		WebViewPrefab__setViewSize_mD45418D1E463C96C1AA4484C3D4C4FFB12BAF411(__this, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::SetCutoutRect(UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_SetCutoutRect_m7E7BBC91F5C342BC288C839FFF8500C95D4A6CBB (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___rect0, const RuntimeMethod* method)
{
	{
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_0 = __this->get__view_29();
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_1 = ___rect0;
		NullCheck(L_0);
		VirtActionInvoker1< Rect_t35B976DE901B5423C11705E156938EA27AB402CE  >::Invoke(11 /* System.Void Vuplex.WebView.ViewportMaterialView::SetCutoutRect(UnityEngine.Rect) */, L_0, L_1);
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::SetPointerInputDetector(Vuplex.WebView.IPointerInputDetector)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_SetPointerInputDetector_mD649B14A99D2ABE39AE3E215B5C7192FB8636975 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, RuntimeObject* ___pointerInputDetector0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get__pointerInputDetector_21();
		V_0 = L_0;
		RuntimeObject* L_1 = ___pointerInputDetector0;
		__this->set__pointerInputDetector_21(L_1);
		RuntimeObject* L_2 = __this->get__webView_33();
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = __this->get__webView_33();
		RuntimeObject* L_4 = V_0;
		WebViewPrefab__initPointerInputDetector_m4559BFB33C2C878457336206D3B50121C0D5870F(__this, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::SetView(Vuplex.WebView.ViewportMaterialView)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_SetView_m00410C0224F8F5AE243093B46B15869616719282 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * ___view0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_SetView_m00410C0224F8F5AE243093B46B15869616719282_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_0 = ___view0;
		__this->set__viewOverride_31(L_0);
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_1 = WebViewPrefab__getDefaultView_mA9F972BA99F0344C4A4B189D532A148EA374A1A9(__this, /*hidden argument*/NULL);
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_2 = ___view0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		NullCheck(L_1);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task Vuplex.WebView.WebViewPrefab::WaitUntilInitialized()
extern "C" IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * WebViewPrefab_WaitUntilInitialized_m84FF09F472AFF65B50C49548F11D1D24A47967CB (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_WaitUntilInitialized_m84FF09F472AFF65B50C49548F11D1D24A47967CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass48_0_t57C19DEA26A6D9E8471D89B5826654B5DB26CF07 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass48_0_t57C19DEA26A6D9E8471D89B5826654B5DB26CF07 * L_0 = (U3CU3Ec__DisplayClass48_0_t57C19DEA26A6D9E8471D89B5826654B5DB26CF07 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass48_0_t57C19DEA26A6D9E8471D89B5826654B5DB26CF07_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass48_0__ctor_m123DF26F984F420D51F4D64F1844136A744DAAC5(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass48_0_t57C19DEA26A6D9E8471D89B5826654B5DB26CF07 * L_1 = V_0;
		TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 * L_2 = (TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m8DE03339B68AF1101DC4477F47D7729AC5C9F608(L_2, /*hidden argument*/TaskCompletionSource_1__ctor_m8DE03339B68AF1101DC4477F47D7729AC5C9F608_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->set_taskCompletionSource_0(L_2);
		RuntimeObject* L_3 = __this->get__webView_33();
		if (!((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0))
		{
			goto IL_002a;
		}
	}
	{
		U3CU3Ec__DisplayClass48_0_t57C19DEA26A6D9E8471D89B5826654B5DB26CF07 * L_4 = V_0;
		NullCheck(L_4);
		TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 * L_5 = L_4->get_taskCompletionSource_0();
		NullCheck(L_5);
		TaskCompletionSource_1_SetResult_m034EA77A1AA02DF06AC5B882AA38AA79BAF51754(L_5, (bool)1, /*hidden argument*/TaskCompletionSource_1_SetResult_m034EA77A1AA02DF06AC5B882AA38AA79BAF51754_RuntimeMethod_var);
		goto IL_003c;
	}

IL_002a:
	{
		U3CU3Ec__DisplayClass48_0_t57C19DEA26A6D9E8471D89B5826654B5DB26CF07 * L_6 = V_0;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_7 = (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)il2cpp_codegen_object_new(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var);
		EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass48_0_U3CWaitUntilInitializedU3Eb__0_mE83B2803FCF35CEF23C80C122D89326760E5D843_RuntimeMethod_var), /*hidden argument*/NULL);
		WebViewPrefab_add_Initialized_mC6B16CDB0A243D13FF76EDE265D4EF4744F1FB92(__this, L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		U3CU3Ec__DisplayClass48_0_t57C19DEA26A6D9E8471D89B5826654B5DB26CF07 * L_8 = V_0;
		NullCheck(L_8);
		TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 * L_9 = L_8->get_taskCompletionSource_0();
		NullCheck(L_9);
		Task_1_tD6131FE3A3A2F1D58DB886B6CF31A2672B75B439 * L_10 = TaskCompletionSource_1_get_Task_m9329D3F5934204E0569D9E62652D410AE3AD8F44(L_9, /*hidden argument*/TaskCompletionSource_1_get_Task_m9329D3F5934204E0569D9E62652D410AE3AD8F44_RuntimeMethod_var);
		return L_10;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::_attachWebViewEventHandlers(Vuplex.WebView.IWebView)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__attachWebViewEventHandlers_m0520D909F99AAF3050262ED7BD7BABA4DB035728 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, RuntimeObject* ___webView0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab__attachWebViewEventHandlers_m0520D909F99AAF3050262ED7BD7BABA4DB035728_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C * L_0 = __this->get_address_of__options_20();
		bool L_1 = L_0->get_disableVideo_1();
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_2 = ___webView0;
		EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * L_3 = (EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA *)il2cpp_codegen_object_new(EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mE38EEA9633C8509E9B507EEA707BF2C3962D3649(L_3, __this, (intptr_t)((intptr_t)WebViewPrefab_U3C_attachWebViewEventHandlersU3Eb__67_0_m8F378A99B7885B60AFFCAA05C8477343D28B0563_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mE38EEA9633C8509E9B507EEA707BF2C3962D3649_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_1_t3842DC221E08CDBC202024744A0CDAB01C2DADBA * >::Invoke(12 /* System.Void Vuplex.WebView.IWebView::add_VideoRectChanged(System.EventHandler`1<Vuplex.WebView.EventArgs`1<UnityEngine.Rect>>) */, IWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_il2cpp_TypeInfo_var, L_2, L_3);
	}

IL_001f:
	{
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::Awake()
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_Awake_mEF225947F94C9C759BA3A32F8CF18F50F90E763C (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_InitialUrl_7();
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		WebViewPrefab_Init_mCF3514946F4D01E3396BB5415540C6B8F9D35BC5(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		return;
	}
}
// UnityEngine.Vector2 Vuplex.WebView.WebViewPrefab::_convertRatioPointToUnityUnits(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  WebViewPrefab__convertRatioPointToUnityUnits_m89ABD1E1D39B6C92CE787C73BC18CF09153AB0AB (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___point0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get__viewResizer_32();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = ___point0;
		float L_5 = L_4.get_x_0();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = __this->get__viewResizer_32();
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = ___point0;
		float L_11 = L_10.get_y_1();
		V_0 = ((float)il2cpp_codegen_multiply((float)L_9, (float)L_11));
		float L_12 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_13), ((float)il2cpp_codegen_multiply((float)L_3, (float)L_5)), L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// Vuplex.WebView.ViewportMaterialView Vuplex.WebView.WebViewPrefab::_getDefaultView()
extern "C" IL2CPP_METHOD_ATTR ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * WebViewPrefab__getDefaultView_mA9F972BA99F0344C4A4B189D532A148EA374A1A9 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab__getDefaultView_mA9F972BA99F0344C4A4B189D532A148EA374A1A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_0, _stringLiteral3FCD56255F419E0C4467B620356C7A1A229955E8, /*hidden argument*/NULL);
		NullCheck(L_1);
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_2 = Component_GetComponent_TisViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013_m105D71127F0D20D233112057AD746096AE0B21A8(L_1, /*hidden argument*/Component_GetComponent_TisViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013_m105D71127F0D20D233112057AD746096AE0B21A8_RuntimeMethod_var);
		return L_2;
	}
}
// Vuplex.WebView.ViewportMaterialView Vuplex.WebView.WebViewPrefab::_getVideoLayer()
extern "C" IL2CPP_METHOD_ATTR ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * WebViewPrefab__getVideoLayer_mB5724AEF4C9D3F5E7EDF7D626FD9345FCE643AEB (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab__getVideoLayer_mB5724AEF4C9D3F5E7EDF7D626FD9345FCE643AEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = WebViewPrefab__getVideoRectPositioner_m390E1F260AE80C51044BE830A5A7F6C3F72164AC(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_1 = Component_GetComponentInChildren_TisViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013_m9600D5CBA071D6C4BA029349F9EAADCF56394E07(L_0, /*hidden argument*/Component_GetComponentInChildren_TisViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013_m9600D5CBA071D6C4BA029349F9EAADCF56394E07_RuntimeMethod_var);
		return L_1;
	}
}
// UnityEngine.Transform Vuplex.WebView.WebViewPrefab::_getVideoRectPositioner()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * WebViewPrefab__getVideoRectPositioner_m390E1F260AE80C51044BE830A5A7F6C3F72164AC (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab__getVideoRectPositioner_m390E1F260AE80C51044BE830A5A7F6C3F72164AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_0, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_1, _stringLiteralFD97A1BF2CB9C9F72CD9B4AD1CE8EF4A2AC7EF29, /*hidden argument*/NULL);
		return L_2;
	}
}
// Vuplex.WebView.ViewportMaterialView Vuplex.WebView.WebViewPrefab::_getView()
extern "C" IL2CPP_METHOD_ATTR ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * WebViewPrefab__getView_m46E4EB9CFF85526B5642F690A95D35106B33F052 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab__getView_m46E4EB9CFF85526B5642F690A95D35106B33F052_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_0 = __this->get__viewOverride_31();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_2 = __this->get__viewOverride_31();
		return L_2;
	}

IL_0015:
	{
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_3 = WebViewPrefab__getDefaultView_mA9F972BA99F0344C4A4B189D532A148EA374A1A9(__this, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::_init(System.Single,System.Single,Vuplex.WebView.WebViewOptions,Vuplex.WebView.IWebView)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__init_mF91085566A79B6477FF2C639B4BC414887409FB3 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, float ___width0, float ___height1, WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C  ___options2, RuntimeObject* ___initializedWebView3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab__init_mF91085566A79B6477FF2C639B4BC414887409FB3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338 * V_0 = NULL;
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * V_1 = NULL;
	U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338 * G_B2_0 = NULL;
	U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338 * G_B1_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338 * G_B3_1 = NULL;
	{
		U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338 * L_0 = (U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass74_0__ctor_m4C414EB82435B75E2666AF5F0D4FC29642E76B14(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		WebViewPrefab__throwExceptionIfInitialized_m6E2F7CAA21DF83F8DE5BC8566C2CF6F92A46F0A4(__this, /*hidden argument*/NULL);
		WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C  L_2 = ___options2;
		__this->set__options_20(L_2);
		WebViewPrefab__resetLocalScale_m0E922AD2F4E1BAE663CD73BBD0B971FC0F2F6653(__this, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338 * L_3 = V_0;
		RuntimeObject* L_4 = ___initializedWebView3;
		G_B1_0 = L_3;
		if (!L_4)
		{
			G_B2_0 = L_3;
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_5 = ___initializedWebView3;
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0039;
	}

IL_0029:
	{
		WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C * L_6 = __this->get_address_of__options_20();
		WebPluginTypeU5BU5D_tF25070ED5E0BC7C81ADE86F416BFFFD5472E14B8* L_7 = L_6->get_preferredPlugins_2();
		IL2CPP_RUNTIME_CLASS_INIT(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var);
		RuntimeObject* L_8 = Web_CreateWebView_m8B08CB5C160A4654978AC73251CB67A02B42123C(L_7, /*hidden argument*/NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_0039:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_webView_1(G_B3_0);
		U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338 * L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->get_webView_1();
		V_1 = ((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)IsInstClass((RuntimeObject*)L_10, MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429_il2cpp_TypeInfo_var));
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_13 = V_1;
		NullCheck(L_13);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_13, /*hidden argument*/NULL);
		__this->set__webViewGameObject_34(L_14);
	}

IL_005f:
	{
		U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338 * L_15 = V_0;
		NullCheck(L_15);
		RuntimeObject* L_16 = L_15->get_webView_1();
		WebViewPrefab__attachWebViewEventHandlers_m0520D909F99AAF3050262ED7BD7BABA4DB035728(__this, L_16, /*hidden argument*/NULL);
		float L_17 = __this->get_InitialResolution_8();
		if ((!(((float)L_17) <= ((float)(0.0f)))))
		{
			goto IL_0098;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = L_18;
		float L_20 = __this->get_InitialResolution_8();
		float L_21 = L_20;
		RuntimeObject * L_22 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_22);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB(_stringLiteral2DF53D2ECEC36B188849C98FDB0200BC4775B7D4, L_19, /*hidden argument*/NULL);
		goto IL_00cf;
	}

IL_0098:
	{
		float L_23 = __this->get_InitialResolution_8();
		if ((((float)L_23) == ((float)(1300.0f))))
		{
			goto IL_00cf;
		}
	}
	{
		U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338 * L_24 = V_0;
		NullCheck(L_24);
		RuntimeObject* L_25 = L_24->get_webView_1();
		NullCheck(L_25);
		bool L_26 = InterfaceFuncInvoker0< bool >::Invoke(15 /* System.Boolean Vuplex.WebView.IWebView::get_IsInitialized() */, IWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_il2cpp_TypeInfo_var, L_25);
		if (!L_26)
		{
			goto IL_00be;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral5F7A2D405C4CE7E6EA706A88D2CA56835A658BBB, /*hidden argument*/NULL);
		goto IL_00cf;
	}

IL_00be:
	{
		U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338 * L_27 = V_0;
		NullCheck(L_27);
		RuntimeObject* L_28 = L_27->get_webView_1();
		float L_29 = __this->get_InitialResolution_8();
		NullCheck(L_28);
		InterfaceActionInvoker1< float >::Invoke(58 /* System.Void Vuplex.WebView.IWebView::SetResolution(System.Single) */, IWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_il2cpp_TypeInfo_var, L_28, L_29);
	}

IL_00cf:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_30, 0, /*hidden argument*/NULL);
		__this->set__viewResizer_32(L_31);
		float L_32 = ___width0;
		float L_33 = ___height1;
		WebViewPrefab__setViewSize_mD45418D1E463C96C1AA4484C3D4C4FFB12BAF411(__this, L_32, L_33, /*hidden argument*/NULL);
		WebViewPrefab__initView_m5C098646B820A9E333D423F0A8B7F1ABD8E4E049(__this, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338 * L_34 = V_0;
		Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * L_35 = (Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 *)il2cpp_codegen_object_new(Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3_il2cpp_TypeInfo_var);
		Action_1__ctor_mFE4DACEE3A547513AF5929267E7200E2739B7E14(L_35, L_34, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass74_0_U3C_initU3Eb__0_mF25CDEE42A2060BA5D37954C68CBD25F333C4C31_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mFE4DACEE3A547513AF5929267E7200E2739B7E14_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var);
		Web_CreateMaterial_mF6009E6F4CB95447C58F2D0E14E5FC22681ECF29(L_35, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_36 = WebViewPrefab__getVideoRectPositioner_m390E1F260AE80C51044BE830A5A7F6C3F72164AC(__this, /*hidden argument*/NULL);
		__this->set__videoRectPositioner_28(L_36);
		WebViewPrefab__initVideoLayer_m0FE16F761EA8F9E420D9739988F2610CDFF2B733(__this, /*hidden argument*/NULL);
		WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C  L_37 = ___options2;
		bool L_38 = L_37.get_disableVideo_1();
		if (!L_38)
		{
			goto IL_013f;
		}
	}
	{
		__this->set__videoLayerDisabled_26((bool)1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_39 = __this->get__videoRectPositioner_28();
		NullCheck(L_39);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_40 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_40, (bool)0, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338 * L_41 = V_0;
		NullCheck(L_41);
		RuntimeObject* L_42 = L_41->get_webView_1();
		WebViewPrefab__initWebViewIfReady_m4CB1839D1116D6681C6A68D582FF5262661D3302(__this, L_42, /*hidden argument*/NULL);
		return;
	}

IL_013f:
	{
		U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338 * L_43 = V_0;
		Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * L_44 = (Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 *)il2cpp_codegen_object_new(Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3_il2cpp_TypeInfo_var);
		Action_1__ctor_mFE4DACEE3A547513AF5929267E7200E2739B7E14(L_44, L_43, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass74_0_U3C_initU3Eb__1_m0C8F1468298902683F8537187994B3AF26829319_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mFE4DACEE3A547513AF5929267E7200E2739B7E14_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Web_t6DE347E64D72CDC023EF35528D4E3D09ECF3B014_il2cpp_TypeInfo_var);
		Web_CreateVideoMaterial_mBDFC31FE1992719604DDF0B85426019584AD09A0(L_44, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::_initPointerInputDetector(Vuplex.WebView.IWebView,Vuplex.WebView.IPointerInputDetector)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__initPointerInputDetector_m4559BFB33C2C878457336206D3B50121C0D5870F (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, RuntimeObject* ___webView0, RuntimeObject* ___previousPointerInputDetector1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab__initPointerInputDetector_m4559BFB33C2C878457336206D3B50121C0D5870F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___previousPointerInputDetector1;
		if (!L_0)
		{
			goto IL_0086;
		}
	}
	{
		RuntimeObject* L_1 = ___previousPointerInputDetector1;
		EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA * L_2 = (EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA *)il2cpp_codegen_object_new(EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m21FC9012EDACF1FCF6883101AAA41B6983FB84B4(L_2, __this, (intptr_t)((intptr_t)WebViewPrefab_InputDetector_BeganDrag_mC08F2D10141F3555F06BEE479246AAF6FD4FEC0D_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m21FC9012EDACF1FCF6883101AAA41B6983FB84B4_RuntimeMethod_var);
		NullCheck(L_1);
		InterfaceActionInvoker1< EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA * >::Invoke(1 /* System.Void Vuplex.WebView.IPointerInputDetector::remove_BeganDrag(System.EventHandler`1<Vuplex.WebView.EventArgs`1<UnityEngine.Vector2>>) */, IPointerInputDetector_t26253C0036FF8B030A4D2DB07C1BFB08BAC4DF36_il2cpp_TypeInfo_var, L_1, L_2);
		RuntimeObject* L_3 = ___previousPointerInputDetector1;
		EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA * L_4 = (EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA *)il2cpp_codegen_object_new(EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m21FC9012EDACF1FCF6883101AAA41B6983FB84B4(L_4, __this, (intptr_t)((intptr_t)WebViewPrefab_InputDetector_Dragged_mE6AF26943E2FC118A5D0439FB44DCDAC081EB092_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m21FC9012EDACF1FCF6883101AAA41B6983FB84B4_RuntimeMethod_var);
		NullCheck(L_3);
		InterfaceActionInvoker1< EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA * >::Invoke(3 /* System.Void Vuplex.WebView.IPointerInputDetector::remove_Dragged(System.EventHandler`1<Vuplex.WebView.EventArgs`1<UnityEngine.Vector2>>) */, IPointerInputDetector_t26253C0036FF8B030A4D2DB07C1BFB08BAC4DF36_il2cpp_TypeInfo_var, L_3, L_4);
		RuntimeObject* L_5 = ___previousPointerInputDetector1;
		EventHandler_1_tB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A * L_6 = (EventHandler_1_tB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A *)il2cpp_codegen_object_new(EventHandler_1_tB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mA3D53174D92F5F1E64F81109717B31DB37CEF0CB(L_6, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 7)), /*hidden argument*/EventHandler_1__ctor_mA3D53174D92F5F1E64F81109717B31DB37CEF0CB_RuntimeMethod_var);
		NullCheck(L_5);
		InterfaceActionInvoker1< EventHandler_1_tB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A * >::Invoke(5 /* System.Void Vuplex.WebView.IPointerInputDetector::remove_PointerDown(System.EventHandler`1<Vuplex.WebView.PointerEventArgs>) */, IPointerInputDetector_t26253C0036FF8B030A4D2DB07C1BFB08BAC4DF36_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7 = ___previousPointerInputDetector1;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_8 = (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)il2cpp_codegen_object_new(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var);
		EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F(L_8, __this, (intptr_t)((intptr_t)WebViewPrefab_InputDetector_PointerExited_mC454B6186AC62B6AC589007B88F7E216B9115194_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		InterfaceActionInvoker1< EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * >::Invoke(7 /* System.Void Vuplex.WebView.IPointerInputDetector::remove_PointerExited(System.EventHandler) */, IPointerInputDetector_t26253C0036FF8B030A4D2DB07C1BFB08BAC4DF36_il2cpp_TypeInfo_var, L_7, L_8);
		RuntimeObject* L_9 = ___previousPointerInputDetector1;
		EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA * L_10 = (EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA *)il2cpp_codegen_object_new(EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m21FC9012EDACF1FCF6883101AAA41B6983FB84B4(L_10, __this, (intptr_t)((intptr_t)WebViewPrefab_InputDetector_PointerMoved_m28CD81812C2E59BF0D4DAE6FD8F5FD8571BA6FA9_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m21FC9012EDACF1FCF6883101AAA41B6983FB84B4_RuntimeMethod_var);
		NullCheck(L_9);
		InterfaceActionInvoker1< EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA * >::Invoke(9 /* System.Void Vuplex.WebView.IPointerInputDetector::remove_PointerMoved(System.EventHandler`1<Vuplex.WebView.EventArgs`1<UnityEngine.Vector2>>) */, IPointerInputDetector_t26253C0036FF8B030A4D2DB07C1BFB08BAC4DF36_il2cpp_TypeInfo_var, L_9, L_10);
		RuntimeObject* L_11 = ___previousPointerInputDetector1;
		EventHandler_1_tB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A * L_12 = (EventHandler_1_tB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A *)il2cpp_codegen_object_new(EventHandler_1_tB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mA3D53174D92F5F1E64F81109717B31DB37CEF0CB(L_12, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 8)), /*hidden argument*/EventHandler_1__ctor_mA3D53174D92F5F1E64F81109717B31DB37CEF0CB_RuntimeMethod_var);
		NullCheck(L_11);
		InterfaceActionInvoker1< EventHandler_1_tB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A * >::Invoke(11 /* System.Void Vuplex.WebView.IPointerInputDetector::remove_PointerUp(System.EventHandler`1<Vuplex.WebView.PointerEventArgs>) */, IPointerInputDetector_t26253C0036FF8B030A4D2DB07C1BFB08BAC4DF36_il2cpp_TypeInfo_var, L_11, L_12);
		RuntimeObject* L_13 = ___previousPointerInputDetector1;
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * L_14 = (EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 *)il2cpp_codegen_object_new(EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mBA7576030ECA6CBA11E2AA1378319EBA1E62D242(L_14, __this, (intptr_t)((intptr_t)WebViewPrefab_InputDetector_Scrolled_m310602B0610EB138F30DFACCEB976CADC55610B9_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mBA7576030ECA6CBA11E2AA1378319EBA1E62D242_RuntimeMethod_var);
		NullCheck(L_13);
		InterfaceActionInvoker1< EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * >::Invoke(13 /* System.Void Vuplex.WebView.IPointerInputDetector::remove_Scrolled(System.EventHandler`1<Vuplex.WebView.ScrolledEventArgs>) */, IPointerInputDetector_t26253C0036FF8B030A4D2DB07C1BFB08BAC4DF36_il2cpp_TypeInfo_var, L_13, L_14);
	}

IL_0086:
	{
		RuntimeObject* L_15 = __this->get__pointerInputDetector_21();
		if (L_15)
		{
			goto IL_009f;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = __this->get__viewResizer_32();
		NullCheck(L_16);
		RuntimeObject* L_17 = Component_GetComponentInChildren_TisIPointerInputDetector_t26253C0036FF8B030A4D2DB07C1BFB08BAC4DF36_mB33FBE95E65651DE78B2171971D88AB5D5F516AB(L_16, /*hidden argument*/Component_GetComponentInChildren_TisIPointerInputDetector_t26253C0036FF8B030A4D2DB07C1BFB08BAC4DF36_mB33FBE95E65651DE78B2171971D88AB5D5F516AB_RuntimeMethod_var);
		__this->set__pointerInputDetector_21(L_17);
	}

IL_009f:
	{
		RuntimeObject* L_18 = __this->get__pointerInputDetector_21();
		RuntimeObject* L_19 = ___webView0;
		NullCheck(L_18);
		InterfaceActionInvoker1< bool >::Invoke(15 /* System.Void Vuplex.WebView.IPointerInputDetector::set_PointerMovedEnabled(System.Boolean) */, IPointerInputDetector_t26253C0036FF8B030A4D2DB07C1BFB08BAC4DF36_il2cpp_TypeInfo_var, L_18, (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_19, IWithMovablePointer_tA06B659533C5D9437EC190C9896A6D7ED98C62FA_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0));
		RuntimeObject* L_20 = __this->get__pointerInputDetector_21();
		EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA * L_21 = (EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA *)il2cpp_codegen_object_new(EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m21FC9012EDACF1FCF6883101AAA41B6983FB84B4(L_21, __this, (intptr_t)((intptr_t)WebViewPrefab_InputDetector_BeganDrag_mC08F2D10141F3555F06BEE479246AAF6FD4FEC0D_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m21FC9012EDACF1FCF6883101AAA41B6983FB84B4_RuntimeMethod_var);
		NullCheck(L_20);
		InterfaceActionInvoker1< EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA * >::Invoke(0 /* System.Void Vuplex.WebView.IPointerInputDetector::add_BeganDrag(System.EventHandler`1<Vuplex.WebView.EventArgs`1<UnityEngine.Vector2>>) */, IPointerInputDetector_t26253C0036FF8B030A4D2DB07C1BFB08BAC4DF36_il2cpp_TypeInfo_var, L_20, L_21);
		RuntimeObject* L_22 = __this->get__pointerInputDetector_21();
		EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA * L_23 = (EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA *)il2cpp_codegen_object_new(EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m21FC9012EDACF1FCF6883101AAA41B6983FB84B4(L_23, __this, (intptr_t)((intptr_t)WebViewPrefab_InputDetector_Dragged_mE6AF26943E2FC118A5D0439FB44DCDAC081EB092_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m21FC9012EDACF1FCF6883101AAA41B6983FB84B4_RuntimeMethod_var);
		NullCheck(L_22);
		InterfaceActionInvoker1< EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA * >::Invoke(2 /* System.Void Vuplex.WebView.IPointerInputDetector::add_Dragged(System.EventHandler`1<Vuplex.WebView.EventArgs`1<UnityEngine.Vector2>>) */, IPointerInputDetector_t26253C0036FF8B030A4D2DB07C1BFB08BAC4DF36_il2cpp_TypeInfo_var, L_22, L_23);
		RuntimeObject* L_24 = __this->get__pointerInputDetector_21();
		EventHandler_1_tB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A * L_25 = (EventHandler_1_tB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A *)il2cpp_codegen_object_new(EventHandler_1_tB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mA3D53174D92F5F1E64F81109717B31DB37CEF0CB(L_25, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 7)), /*hidden argument*/EventHandler_1__ctor_mA3D53174D92F5F1E64F81109717B31DB37CEF0CB_RuntimeMethod_var);
		NullCheck(L_24);
		InterfaceActionInvoker1< EventHandler_1_tB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A * >::Invoke(4 /* System.Void Vuplex.WebView.IPointerInputDetector::add_PointerDown(System.EventHandler`1<Vuplex.WebView.PointerEventArgs>) */, IPointerInputDetector_t26253C0036FF8B030A4D2DB07C1BFB08BAC4DF36_il2cpp_TypeInfo_var, L_24, L_25);
		RuntimeObject* L_26 = __this->get__pointerInputDetector_21();
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_27 = (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)il2cpp_codegen_object_new(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var);
		EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F(L_27, __this, (intptr_t)((intptr_t)WebViewPrefab_InputDetector_PointerExited_mC454B6186AC62B6AC589007B88F7E216B9115194_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_26);
		InterfaceActionInvoker1< EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * >::Invoke(6 /* System.Void Vuplex.WebView.IPointerInputDetector::add_PointerExited(System.EventHandler) */, IPointerInputDetector_t26253C0036FF8B030A4D2DB07C1BFB08BAC4DF36_il2cpp_TypeInfo_var, L_26, L_27);
		RuntimeObject* L_28 = __this->get__pointerInputDetector_21();
		EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA * L_29 = (EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA *)il2cpp_codegen_object_new(EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m21FC9012EDACF1FCF6883101AAA41B6983FB84B4(L_29, __this, (intptr_t)((intptr_t)WebViewPrefab_InputDetector_PointerMoved_m28CD81812C2E59BF0D4DAE6FD8F5FD8571BA6FA9_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m21FC9012EDACF1FCF6883101AAA41B6983FB84B4_RuntimeMethod_var);
		NullCheck(L_28);
		InterfaceActionInvoker1< EventHandler_1_t09CF224D6908EC2C8372040A6DDE89A5135A84BA * >::Invoke(8 /* System.Void Vuplex.WebView.IPointerInputDetector::add_PointerMoved(System.EventHandler`1<Vuplex.WebView.EventArgs`1<UnityEngine.Vector2>>) */, IPointerInputDetector_t26253C0036FF8B030A4D2DB07C1BFB08BAC4DF36_il2cpp_TypeInfo_var, L_28, L_29);
		RuntimeObject* L_30 = __this->get__pointerInputDetector_21();
		EventHandler_1_tB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A * L_31 = (EventHandler_1_tB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A *)il2cpp_codegen_object_new(EventHandler_1_tB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mA3D53174D92F5F1E64F81109717B31DB37CEF0CB(L_31, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 8)), /*hidden argument*/EventHandler_1__ctor_mA3D53174D92F5F1E64F81109717B31DB37CEF0CB_RuntimeMethod_var);
		NullCheck(L_30);
		InterfaceActionInvoker1< EventHandler_1_tB08D7AAB15AC4AD6B33D6EA2AED8AB2162A77A4A * >::Invoke(10 /* System.Void Vuplex.WebView.IPointerInputDetector::add_PointerUp(System.EventHandler`1<Vuplex.WebView.PointerEventArgs>) */, IPointerInputDetector_t26253C0036FF8B030A4D2DB07C1BFB08BAC4DF36_il2cpp_TypeInfo_var, L_30, L_31);
		RuntimeObject* L_32 = __this->get__pointerInputDetector_21();
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * L_33 = (EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 *)il2cpp_codegen_object_new(EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mBA7576030ECA6CBA11E2AA1378319EBA1E62D242(L_33, __this, (intptr_t)((intptr_t)WebViewPrefab_InputDetector_Scrolled_m310602B0610EB138F30DFACCEB976CADC55610B9_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mBA7576030ECA6CBA11E2AA1378319EBA1E62D242_RuntimeMethod_var);
		NullCheck(L_32);
		InterfaceActionInvoker1< EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * >::Invoke(12 /* System.Void Vuplex.WebView.IPointerInputDetector::add_Scrolled(System.EventHandler`1<Vuplex.WebView.ScrolledEventArgs>) */, IPointerInputDetector_t26253C0036FF8B030A4D2DB07C1BFB08BAC4DF36_il2cpp_TypeInfo_var, L_32, L_33);
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::_initVideoLayer()
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__initVideoLayer_m0FE16F761EA8F9E420D9739988F2610CDFF2B733 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method)
{
	{
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_0 = WebViewPrefab__getVideoLayer_mB5724AEF4C9D3F5E7EDF7D626FD9345FCE643AEB(__this, /*hidden argument*/NULL);
		__this->set__videoLayer_25(L_0);
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::_initView()
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__initView_m5C098646B820A9E333D423F0A8B7F1ABD8E4E049 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method)
{
	{
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_0 = VirtFuncInvoker0< ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * >::Invoke(6 /* Vuplex.WebView.ViewportMaterialView Vuplex.WebView.WebViewPrefab::_getView() */, __this);
		__this->set__view_29(L_0);
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::_initWebViewIfReady(Vuplex.WebView.IWebView)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__initWebViewIfReady_m4CB1839D1116D6681C6A68D582FF5262661D3302 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, RuntimeObject* ___webView0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab__initWebViewIfReady_m4CB1839D1116D6681C6A68D582FF5262661D3302_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * V_1 = NULL;
	String_t* V_2 = NULL;
	{
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_0 = __this->get__view_29();
		NullCheck(L_0);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_1 = VirtFuncInvoker0< Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * >::Invoke(6 /* UnityEngine.Texture2D Vuplex.WebView.ViewportMaterialView::get_Texture() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		bool L_3 = __this->get__videoLayerDisabled_26();
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_4 = __this->get__videoLayer_25();
		NullCheck(L_4);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_5 = VirtFuncInvoker0< Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * >::Invoke(6 /* UnityEngine.Texture2D Vuplex.WebView.ViewportMaterialView::get_Texture() */, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002f;
		}
	}

IL_002e:
	{
		return;
	}

IL_002f:
	{
		RuntimeObject* L_7 = ___webView0;
		NullCheck(L_7);
		bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(15 /* System.Boolean Vuplex.WebView.IWebView::get_IsInitialized() */, IWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_il2cpp_TypeInfo_var, L_7);
		V_0 = L_8;
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_10 = __this->get__view_29();
		RuntimeObject* L_11 = ___webView0;
		NullCheck(L_11);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_12 = InterfaceFuncInvoker0< Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * >::Invoke(21 /* UnityEngine.Texture2D Vuplex.WebView.IWebView::get_Texture() */, IWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_10);
		VirtActionInvoker1< Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * >::Invoke(7 /* System.Void Vuplex.WebView.ViewportMaterialView::set_Texture(UnityEngine.Texture2D) */, L_10, L_12);
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_13 = __this->get__videoLayer_25();
		RuntimeObject* L_14 = ___webView0;
		NullCheck(L_14);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_15 = InterfaceFuncInvoker0< Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * >::Invoke(23 /* UnityEngine.Texture2D Vuplex.WebView.IWebView::get_VideoTexture() */, IWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_il2cpp_TypeInfo_var, L_14);
		NullCheck(L_13);
		VirtActionInvoker1< Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * >::Invoke(7 /* System.Void Vuplex.WebView.ViewportMaterialView::set_Texture(UnityEngine.Texture2D) */, L_13, L_15);
		goto IL_0099;
	}

IL_005d:
	{
		RuntimeObject* L_16 = ___webView0;
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_17 = __this->get__view_29();
		NullCheck(L_17);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_18 = VirtFuncInvoker0< Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * >::Invoke(6 /* UnityEngine.Texture2D Vuplex.WebView.ViewportMaterialView::get_Texture() */, L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = __this->get__viewResizer_32();
		NullCheck(L_19);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = __this->get__viewResizer_32();
		NullCheck(L_22);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_y_3();
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_25 = __this->get__videoLayer_25();
		NullCheck(L_25);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_26 = VirtFuncInvoker0< Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * >::Invoke(6 /* UnityEngine.Texture2D Vuplex.WebView.ViewportMaterialView::get_Texture() */, L_25);
		NullCheck(L_16);
		InterfaceActionInvoker4< Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *, float, float, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * >::Invoke(24 /* System.Void Vuplex.WebView.IWebView::Init(UnityEngine.Texture2D,System.Single,System.Single,UnityEngine.Texture2D) */, IWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_il2cpp_TypeInfo_var, L_16, L_18, L_21, L_24, L_26);
	}

IL_0099:
	{
		RuntimeObject* L_27 = ___webView0;
		WebViewPrefab__initPointerInputDetector_m4559BFB33C2C878457336206D3B50121C0D5870F(__this, L_27, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		RuntimeObject* L_28 = ___webView0;
		__this->set__webView_33(L_28);
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_29 = __this->get_Initialized_5();
		V_1 = L_29;
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_30 = V_1;
		if (!L_30)
		{
			goto IL_00be;
		}
	}
	{
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_31 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_32 = ((EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_31);
		EventHandler_Invoke_mD23D5EFEA562A05C5EACDD3E91EEDD2BF6C22800(L_31, __this, L_32, /*hidden argument*/NULL);
	}

IL_00be:
	{
		String_t* L_33 = __this->get_InitialUrl_7();
		bool L_34 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_0105;
		}
	}
	{
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00d9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral1DE437673F7C1D714E8F4F1F8194606A785F2BDF, /*hidden argument*/NULL);
		return;
	}

IL_00d9:
	{
		String_t* L_36 = __this->get_InitialUrl_7();
		NullCheck(L_36);
		String_t* L_37 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_36, /*hidden argument*/NULL);
		V_2 = L_37;
		String_t* L_38 = V_2;
		NullCheck(L_38);
		bool L_39 = String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B(L_38, _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_00fe;
		}
	}
	{
		String_t* L_40 = V_2;
		String_t* L_41 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral43A9519ED4B5E9C75EB7D683E3D1E09708F9B34A, L_40, /*hidden argument*/NULL);
		V_2 = L_41;
	}

IL_00fe:
	{
		RuntimeObject* L_42 = ___webView0;
		String_t* L_43 = V_2;
		NullCheck(L_42);
		InterfaceActionInvoker1< String_t* >::Invoke(49 /* System.Void Vuplex.WebView.IWebView::LoadUrl(System.String) */, IWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_il2cpp_TypeInfo_var, L_42, L_43);
	}

IL_0105:
	{
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::InputDetector_BeganDrag(System.Object,Vuplex.WebView.EventArgs`1<UnityEngine.Vector2>)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_InputDetector_BeganDrag_mC08F2D10141F3555F06BEE479246AAF6FD4FEC0D (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, RuntimeObject * ___sender0, EventArgs_1_t9FFFE64CD86469F3303B155EE4D2AA8719A34E8F * ___eventArgs1, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get__pointerDownRatioPoint_17();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = WebViewPrefab__convertRatioPointToUnityUnits_m89ABD1E1D39B6C92CE787C73BC18CF09153AB0AB(__this, L_0, /*hidden argument*/NULL);
		__this->set__previousDragPoint_23(L_1);
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::InputDetector_Dragged(System.Object,Vuplex.WebView.EventArgs`1<UnityEngine.Vector2>)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_InputDetector_Dragged_mE6AF26943E2FC118A5D0439FB44DCDAC081EB092 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, RuntimeObject * ___sender0, EventArgs_1_t9FFFE64CD86469F3303B155EE4D2AA8719A34E8F * ___eventArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_InputDetector_Dragged_mE6AF26943E2FC118A5D0439FB44DCDAC081EB092_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		int32_t L_0 = __this->get_DragMode_9();
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_1 = __this->get__webView_33();
		if (L_1)
		{
			goto IL_0012;
		}
	}

IL_0011:
	{
		return;
	}

IL_0012:
	{
		EventArgs_1_t9FFFE64CD86469F3303B155EE4D2AA8719A34E8F * L_2 = ___eventArgs1;
		NullCheck(L_2);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = EventArgs_1_get_Value_m55F02A187457EDA7101C659E455C00F59E19B229(L_2, /*hidden argument*/EventArgs_1_get_Value_m55F02A187457EDA7101C659E455C00F59E19B229_RuntimeMethod_var);
		V_0 = L_3;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = __this->get__previousDragPoint_23();
		V_1 = L_4;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = WebViewPrefab__convertRatioPointToUnityUnits_m89ABD1E1D39B6C92CE787C73BC18CF09153AB0AB(__this, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = V_2;
		__this->set__previousDragPoint_23(L_7);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = __this->get__pointerDownRatioPoint_17();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = WebViewPrefab__convertRatioPointToUnityUnits_m89ABD1E1D39B6C92CE787C73BC18CF09153AB0AB(__this, L_8, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_9, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		int32_t L_12 = __this->get_DragMode_9();
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0070;
		}
	}
	{
		float L_13 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_3), /*hidden argument*/NULL);
		RuntimeObject* L_14 = __this->get__webView_33();
		NullCheck(L_14);
		float L_15 = InterfaceFuncInvoker0< float >::Invoke(18 /* System.Single Vuplex.WebView.IWebView::get_Resolution() */, IWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_il2cpp_TypeInfo_var, L_14);
		float L_16 = __this->get_DragThreshold_13();
		if (!((((float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_15))) > ((float)L_16))? 1 : 0))
		{
			goto IL_006f;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = V_0;
		WebViewPrefab__movePointerIfNeeded_m68349506D83FB9F076C2EB231EF316B2C4FCEAFE(__this, L_17, /*hidden argument*/NULL);
	}

IL_006f:
	{
		return;
	}

IL_0070:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_18, L_19, /*hidden argument*/NULL);
		V_4 = L_20;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_21 = V_4;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = __this->get__pointerDownRatioPoint_17();
		WebViewPrefab__scrollIfNeeded_m8D6FB7661DB30A5BDA99AF27C9E669A984EC18ED(__this, L_21, L_22, /*hidden argument*/NULL);
		bool L_23 = __this->get__clickIsPending_18();
		if (!L_23)
		{
			goto IL_00b3;
		}
	}
	{
		float L_24 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_3), /*hidden argument*/NULL);
		RuntimeObject* L_25 = __this->get__webView_33();
		NullCheck(L_25);
		float L_26 = InterfaceFuncInvoker0< float >::Invoke(18 /* System.Single Vuplex.WebView.IWebView::get_Resolution() */, IWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_il2cpp_TypeInfo_var, L_25);
		float L_27 = __this->get_DragThreshold_13();
		if (!((((float)((float)il2cpp_codegen_multiply((float)L_24, (float)L_26))) > ((float)L_27))? 1 : 0))
		{
			goto IL_00b3;
		}
	}
	{
		__this->set__clickIsPending_18((bool)0);
	}

IL_00b3:
	{
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::InputDetector_PointerDown(System.Object,Vuplex.WebView.PointerEventArgs)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_InputDetector_PointerDown_m916732B7BD7F956C2062DF32FCDE6441BF923286 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, RuntimeObject * ___sender0, PointerEventArgs_tEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648 * ___eventArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_InputDetector_PointerDown_m916732B7BD7F956C2062DF32FCDE6441BF923286_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		__this->set__pointerIsDown_22((bool)1);
		PointerEventArgs_tEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648 * L_0 = ___eventArgs1;
		NullCheck(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = L_0->get_Point_3();
		__this->set__pointerDownRatioPoint_17(L_1);
		bool L_2 = __this->get_ClickingEnabled_10();
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = __this->get__webView_33();
		if (L_3)
		{
			goto IL_0024;
		}
	}

IL_0023:
	{
		return;
	}

IL_0024:
	{
		int32_t L_4 = __this->get_DragMode_9();
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0081;
		}
	}
	{
		RuntimeObject* L_5 = __this->get__webView_33();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IWithPointerDownAndUp_t4046274808EC4BB6B685EC799A141A90B4CB2823_il2cpp_TypeInfo_var));
		RuntimeObject* L_6 = V_0;
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		PointerEventArgs_tEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648 * L_8 = ___eventArgs1;
		NullCheck(L_8);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = L_8->get_Point_3();
		PointerEventArgs_tEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648 * L_10 = ___eventArgs1;
		NullCheck(L_10);
		PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6 * L_11 = PointerEventArgs_ToPointerOptions_mA8B38EC332D839CA31CE5656C1AE58AD9C6BF746(L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		InterfaceActionInvoker2< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6 * >::Invoke(1 /* System.Void Vuplex.WebView.IWithPointerDownAndUp::PointerDown(UnityEngine.Vector2,Vuplex.WebView.PointerOptions) */, IWithPointerDownAndUp_t4046274808EC4BB6B685EC799A141A90B4CB2823_il2cpp_TypeInfo_var, L_7, L_9, L_11);
		return;
	}

IL_004f:
	{
		bool L_12 = __this->get__loggedDragWarning_19();
		if (L_12)
		{
			goto IL_0081;
		}
	}
	{
		__this->set__loggedDragWarning_19((bool)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = L_13;
		RuntimeObject* L_15 = __this->get__webView_33();
		NullCheck(L_15);
		int32_t L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(17 /* Vuplex.WebView.WebPluginType Vuplex.WebView.IWebView::get_PluginType() */, IWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_il2cpp_TypeInfo_var, L_15);
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(WebPluginType_t789F11EBAF49F25960825CD0895164A8D5488B88_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_18);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB(_stringLiteral73119A4682CADB81B4BDF5A1426A87B281211030, L_14, /*hidden argument*/NULL);
	}

IL_0081:
	{
		__this->set__clickIsPending_18((bool)1);
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::InputDetector_PointerExited(System.Object,System.EventArgs)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_InputDetector_PointerExited_mC454B6186AC62B6AC589007B88F7E216B9115194 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___eventArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_InputDetector_PointerExited_mC454B6186AC62B6AC589007B88F7E216B9115194_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_HoveringEnabled_11();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		WebViewPrefab__movePointerIfNeeded_m68349506D83FB9F076C2EB231EF316B2C4FCEAFE(__this, L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::InputDetector_PointerMoved(System.Object,Vuplex.WebView.EventArgs`1<UnityEngine.Vector2>)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_InputDetector_PointerMoved_m28CD81812C2E59BF0D4DAE6FD8F5FD8571BA6FA9 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, RuntimeObject * ___sender0, EventArgs_1_t9FFFE64CD86469F3303B155EE4D2AA8719A34E8F * ___eventArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_InputDetector_PointerMoved_m28CD81812C2E59BF0D4DAE6FD8F5FD8571BA6FA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__pointerIsDown_22();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get_HoveringEnabled_11();
		if (L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		return;
	}

IL_0011:
	{
		EventArgs_1_t9FFFE64CD86469F3303B155EE4D2AA8719A34E8F * L_2 = ___eventArgs1;
		NullCheck(L_2);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = EventArgs_1_get_Value_m55F02A187457EDA7101C659E455C00F59E19B229(L_2, /*hidden argument*/EventArgs_1_get_Value_m55F02A187457EDA7101C659E455C00F59E19B229_RuntimeMethod_var);
		WebViewPrefab__movePointerIfNeeded_m68349506D83FB9F076C2EB231EF316B2C4FCEAFE(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::InputDetector_PointerUp(System.Object,Vuplex.WebView.PointerEventArgs)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_InputDetector_PointerUp_m2446FFF1E69E354F3236E72E2151C8FA93C6DE3F (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, RuntimeObject * ___sender0, PointerEventArgs_tEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648 * ___eventArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_InputDetector_PointerUp_m2446FFF1E69E354F3236E72E2151C8FA93C6DE3F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * V_1 = NULL;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_3;
	memset(&V_3, 0, sizeof(V_3));
	PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6 * V_4 = NULL;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  G_B8_0;
	memset(&G_B8_0, 0, sizeof(G_B8_0));
	{
		__this->set__pointerIsDown_22((bool)0);
		bool L_0 = __this->get_ClickingEnabled_10();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = __this->get__webView_33();
		if (L_1)
		{
			goto IL_0018;
		}
	}

IL_0017:
	{
		return;
	}

IL_0018:
	{
		RuntimeObject* L_2 = __this->get__webView_33();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IWithPointerDownAndUp_t4046274808EC4BB6B685EC799A141A90B4CB2823_il2cpp_TypeInfo_var));
		int32_t L_3 = __this->get_DragMode_9();
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0089;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = __this->get__pointerDownRatioPoint_17();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = WebViewPrefab__convertRatioPointToUnityUnits_m89ABD1E1D39B6C92CE787C73BC18CF09153AB0AB(__this, L_5, /*hidden argument*/NULL);
		PointerEventArgs_tEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648 * L_7 = ___eventArgs1;
		NullCheck(L_7);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = L_7->get_Point_3();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = WebViewPrefab__convertRatioPointToUnityUnits_m89ABD1E1D39B6C92CE787C73BC18CF09153AB0AB(__this, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_6, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		float L_11 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_2), /*hidden argument*/NULL);
		RuntimeObject* L_12 = __this->get__webView_33();
		NullCheck(L_12);
		float L_13 = InterfaceFuncInvoker0< float >::Invoke(18 /* System.Single Vuplex.WebView.IWebView::get_Resolution() */, IWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_il2cpp_TypeInfo_var, L_12);
		float L_14 = __this->get_DragThreshold_13();
		if (((((float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_13))) > ((float)L_14))? 1 : 0))
		{
			goto IL_0073;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = __this->get__pointerDownRatioPoint_17();
		G_B8_0 = L_15;
		goto IL_0079;
	}

IL_0073:
	{
		PointerEventArgs_tEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648 * L_16 = ___eventArgs1;
		NullCheck(L_16);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = L_16->get_Point_3();
		G_B8_0 = L_17;
	}

IL_0079:
	{
		V_3 = G_B8_0;
		RuntimeObject* L_18 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = V_3;
		PointerEventArgs_tEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648 * L_20 = ___eventArgs1;
		NullCheck(L_20);
		PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6 * L_21 = PointerEventArgs_ToPointerOptions_mA8B38EC332D839CA31CE5656C1AE58AD9C6BF746(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		InterfaceActionInvoker2< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6 * >::Invoke(3 /* System.Void Vuplex.WebView.IWithPointerDownAndUp::PointerUp(UnityEngine.Vector2,Vuplex.WebView.PointerOptions) */, IWithPointerDownAndUp_t4046274808EC4BB6B685EC799A141A90B4CB2823_il2cpp_TypeInfo_var, L_18, L_19, L_21);
		goto IL_00eb;
	}

IL_0089:
	{
		bool L_22 = __this->get__clickIsPending_18();
		if (L_22)
		{
			goto IL_0092;
		}
	}
	{
		return;
	}

IL_0092:
	{
		__this->set__clickIsPending_18((bool)0);
		RuntimeObject* L_23 = V_0;
		if (!L_23)
		{
			goto IL_00a9;
		}
	}
	{
		WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C * L_24 = __this->get_address_of__options_20();
		bool L_25 = L_24->get_clickWithoutStealingFocus_0();
		if (!L_25)
		{
			goto IL_00c7;
		}
	}

IL_00a9:
	{
		RuntimeObject* L_26 = __this->get__webView_33();
		PointerEventArgs_tEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648 * L_27 = ___eventArgs1;
		NullCheck(L_27);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_28 = L_27->get_Point_3();
		WebViewOptions_t211B797F8936C87922B344DBE0C560B13B4A816C * L_29 = __this->get_address_of__options_20();
		bool L_30 = L_29->get_clickWithoutStealingFocus_0();
		NullCheck(L_26);
		InterfaceActionInvoker2< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , bool >::Invoke(34 /* System.Void Vuplex.WebView.IWebView::Click(UnityEngine.Vector2,System.Boolean) */, IWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_il2cpp_TypeInfo_var, L_26, L_28, L_30);
		goto IL_00eb;
	}

IL_00c7:
	{
		PointerEventArgs_tEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648 * L_31 = ___eventArgs1;
		NullCheck(L_31);
		PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6 * L_32 = PointerEventArgs_ToPointerOptions_mA8B38EC332D839CA31CE5656C1AE58AD9C6BF746(L_31, /*hidden argument*/NULL);
		V_4 = L_32;
		RuntimeObject* L_33 = V_0;
		PointerEventArgs_tEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648 * L_34 = ___eventArgs1;
		NullCheck(L_34);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_35 = L_34->get_Point_3();
		PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6 * L_36 = V_4;
		NullCheck(L_33);
		InterfaceActionInvoker2< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6 * >::Invoke(1 /* System.Void Vuplex.WebView.IWithPointerDownAndUp::PointerDown(UnityEngine.Vector2,Vuplex.WebView.PointerOptions) */, IWithPointerDownAndUp_t4046274808EC4BB6B685EC799A141A90B4CB2823_il2cpp_TypeInfo_var, L_33, L_35, L_36);
		RuntimeObject* L_37 = V_0;
		PointerEventArgs_tEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648 * L_38 = ___eventArgs1;
		NullCheck(L_38);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_39 = L_38->get_Point_3();
		PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6 * L_40 = V_4;
		NullCheck(L_37);
		InterfaceActionInvoker2< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , PointerOptions_t39172500A75A6A654D8E9DA2BE3CE2CEB33415C6 * >::Invoke(3 /* System.Void Vuplex.WebView.IWithPointerDownAndUp::PointerUp(UnityEngine.Vector2,Vuplex.WebView.PointerOptions) */, IWithPointerDownAndUp_t4046274808EC4BB6B685EC799A141A90B4CB2823_il2cpp_TypeInfo_var, L_37, L_39, L_40);
	}

IL_00eb:
	{
		EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * L_41 = __this->get_Clicked_4();
		V_1 = L_41;
		EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * L_42 = V_1;
		if (!L_42)
		{
			goto IL_0107;
		}
	}
	{
		EventHandler_1_t28913C550C25B74CE8B8B82EF62529533E8E949E * L_43 = V_1;
		PointerEventArgs_tEA26FC3B7DA4F9DE90D1468AF36551D4E04B7648 * L_44 = ___eventArgs1;
		NullCheck(L_44);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_45 = L_44->get_Point_3();
		ClickedEventArgs_t15D6CC25B940C4DE73028D179F1D002ABBC65B25 * L_46 = (ClickedEventArgs_t15D6CC25B940C4DE73028D179F1D002ABBC65B25 *)il2cpp_codegen_object_new(ClickedEventArgs_t15D6CC25B940C4DE73028D179F1D002ABBC65B25_il2cpp_TypeInfo_var);
		ClickedEventArgs__ctor_m0A93D7E604B1AA1264DCC6A45C3F8D87EAEF4844(L_46, L_45, /*hidden argument*/NULL);
		NullCheck(L_43);
		EventHandler_1_Invoke_m8F52667860D12B30330374B902DEB3822EBEC3FE(L_43, __this, L_46, /*hidden argument*/EventHandler_1_Invoke_m8F52667860D12B30330374B902DEB3822EBEC3FE_RuntimeMethod_var);
	}

IL_0107:
	{
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::InputDetector_Scrolled(System.Object,Vuplex.WebView.ScrolledEventArgs)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_InputDetector_Scrolled_m310602B0610EB138F30DFACCEB976CADC55610B9 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, RuntimeObject * ___sender0, ScrolledEventArgs_t4DC4E49687FC1C4A753AD5C53DA266E1AAB24FC1 * ___eventArgs1, const RuntimeMethod* method)
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		ScrolledEventArgs_t4DC4E49687FC1C4A753AD5C53DA266E1AAB24FC1 * L_0 = ___eventArgs1;
		NullCheck(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_1 = L_0->get_address_of_ScrollDelta_1();
		float L_2 = L_1->get_x_0();
		float L_3 = __this->get_ScrollingSensitivity_15();
		ScrolledEventArgs_t4DC4E49687FC1C4A753AD5C53DA266E1AAB24FC1 * L_4 = ___eventArgs1;
		NullCheck(L_4);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_5 = L_4->get_address_of_ScrollDelta_1();
		float L_6 = L_5->get_y_1();
		float L_7 = __this->get_ScrollingSensitivity_15();
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = V_0;
		ScrolledEventArgs_t4DC4E49687FC1C4A753AD5C53DA266E1AAB24FC1 * L_9 = ___eventArgs1;
		NullCheck(L_9);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = L_9->get_Point_2();
		WebViewPrefab__scrollIfNeeded_m8D6FB7661DB30A5BDA99AF27C9E669A984EC18ED(__this, L_8, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::_movePointerIfNeeded(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__movePointerIfNeeded_m68349506D83FB9F076C2EB231EF316B2C4FCEAFE (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___point0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab__movePointerIfNeeded_m68349506D83FB9F076C2EB231EF316B2C4FCEAFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get__webView_33();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IWithMovablePointer_tA06B659533C5D9437EC190C9896A6D7ED98C62FA_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___point0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = __this->get__previousMovePointerPoint_24();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		bool L_4 = Vector2_op_Inequality_mC16161C640C89D98A00800924F83FF09FD7C100E(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = ___point0;
		__this->set__previousMovePointerPoint_24(L_5);
		RuntimeObject* L_6 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = ___point0;
		NullCheck(L_6);
		InterfaceActionInvoker1< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(0 /* System.Void Vuplex.WebView.IWithMovablePointer::MovePointer(UnityEngine.Vector2) */, IWithMovablePointer_tA06B659533C5D9437EC190C9896A6D7ED98C62FA_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_002c:
	{
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_OnDestroy_m545F254026260747710D70097D950672DBA2A266 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_OnDestroy_m545F254026260747710D70097D950672DBA2A266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__webView_33();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_1 = __this->get__webView_33();
		NullCheck(L_1);
		bool L_2 = InterfaceFuncInvoker0< bool >::Invoke(14 /* System.Boolean Vuplex.WebView.IWebView::get_IsDisposed() */, IWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_3 = __this->get__webView_33();
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(38 /* System.Void Vuplex.WebView.IWebView::Dispose() */, IWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_il2cpp_TypeInfo_var, L_3);
	}

IL_0020:
	{
		WebViewPrefab_Destroy_mF72F901B59834762E5FF809B2B007EF34FAC780A(__this, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_4 = __this->get__viewMaterial_30();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_6 = __this->get__viewMaterial_30();
		NullCheck(L_6);
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_7 = Material_get_mainTexture_mE85CF647728AD145D7E03A172EFD5930773E514E(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_7, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_8 = __this->get__viewMaterial_30();
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_8, /*hidden argument*/NULL);
	}

IL_004f:
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_9 = __this->get__videoMaterial_27();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0078;
		}
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_11 = __this->get__videoMaterial_27();
		NullCheck(L_11);
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_12 = Material_get_mainTexture_mE85CF647728AD145D7E03A172EFD5930773E514E(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_12, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_13 = __this->get__videoMaterial_27();
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_13, /*hidden argument*/NULL);
	}

IL_0078:
	{
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::_reinitAfterScriptsReloaded()
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__reinitAfterScriptsReloaded_m561DB45E4A1C8B1B63AE4AB80B6A8C593C77E97E (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab__reinitAfterScriptsReloaded_m561DB45E4A1C8B1B63AE4AB80B6A8C593C77E97E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get__webViewGameObject_34();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get__webViewGameObject_34();
		NullCheck(L_2);
		RuntimeObject* L_3 = GameObject_GetComponentInChildren_TisIWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_m1FEC8153AFCF69F230EB0EF49A10B6B29176C15A(L_2, /*hidden argument*/GameObject_GetComponentInChildren_TisIWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_m1FEC8153AFCF69F230EB0EF49A10B6B29176C15A_RuntimeMethod_var);
		V_0 = L_3;
		RuntimeObject* L_4 = V_0;
		WebViewPrefab__attachWebViewEventHandlers_m0520D909F99AAF3050262ED7BD7BABA4DB035728(__this, L_4, /*hidden argument*/NULL);
		WebViewPrefab__initView_m5C098646B820A9E333D423F0A8B7F1ABD8E4E049(__this, /*hidden argument*/NULL);
		WebViewPrefab__initVideoLayer_m0FE16F761EA8F9E420D9739988F2610CDFF2B733(__this, /*hidden argument*/NULL);
		RuntimeObject* L_5 = V_0;
		WebViewPrefab__initPointerInputDetector_m4559BFB33C2C878457336206D3B50121C0D5870F(__this, L_5, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		RuntimeObject* L_6 = V_0;
		__this->set__webView_33(L_6);
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::_resetLocalScale()
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__resetLocalScale_m0E922AD2F4E1BAE663CD73BBD0B971FC0F2F6653 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab__resetLocalScale_m0E922AD2F4E1BAE663CD73BBD0B971FC0F2F6653_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_2, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		float L_5 = L_4.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_6), (1.0f), (1.0f), L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_3, L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		float L_8 = L_7.get_x_2();
		V_1 = ((float)il2cpp_codegen_multiply((float)(0.5f), (float)L_8));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_10, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_localEulerAngles_m445AD7F6706B0BDABA8A875C899EB1E1DF1A2A2B(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_13, /*hidden argument*/NULL);
		float L_15 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_16), L_15, (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_14, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_11, L_17, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_9, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::_scrollIfNeeded(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__scrollIfNeeded_m8D6FB7661DB30A5BDA99AF27C9E669A984EC18ED (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___scrollDelta0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___point1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab__scrollIfNeeded_m8D6FB7661DB30A5BDA99AF27C9E669A984EC18ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * V_0 = NULL;
	{
		bool L_0 = __this->get_ScrollingEnabled_12();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_1 = __this->get__webView_33();
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___scrollDelta0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		bool L_4 = Vector2_op_Equality_m0E86E1B1038DDB8554A8A0D58729A7788D989588(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}

IL_001d:
	{
		return;
	}

IL_001e:
	{
		RuntimeObject* L_5 = __this->get__webView_33();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = ___scrollDelta0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = ___point1;
		NullCheck(L_5);
		InterfaceActionInvoker2< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(56 /* System.Void Vuplex.WebView.IWebView::Scroll(UnityEngine.Vector2,UnityEngine.Vector2) */, IWebView_t1D5690065406162A1F97DFC8D6A82E1DF3A83492_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * L_8 = __this->get_Scrolled_6();
		V_0 = L_8;
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * L_9 = V_0;
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		EventHandler_1_t77312AEB247982C1A84344BAA0F1EFD1D3F47515 * L_10 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = ___scrollDelta0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = ___point1;
		ScrolledEventArgs_t4DC4E49687FC1C4A753AD5C53DA266E1AAB24FC1 * L_13 = (ScrolledEventArgs_t4DC4E49687FC1C4A753AD5C53DA266E1AAB24FC1 *)il2cpp_codegen_object_new(ScrolledEventArgs_t4DC4E49687FC1C4A753AD5C53DA266E1AAB24FC1_il2cpp_TypeInfo_var);
		ScrolledEventArgs__ctor_m23022F20F93F4EC86847064FB7E2E6EDE5681FF3(L_13, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		EventHandler_1_Invoke_m0A8B07D7304D59AB60E1E09F390A83AFCD7E4C1B(L_10, __this, L_13, /*hidden argument*/EventHandler_1_Invoke_m0A8B07D7304D59AB60E1E09F390A83AFCD7E4C1B_RuntimeMethod_var);
	}

IL_0043:
	{
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::_setVideoRect(UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__setVideoRect_mD369E5C054E170A98321B6E0B8FA591BF7494FD3 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___videoRect0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab__setVideoRect_mD369E5C054E170A98321B6E0B8FA591BF7494FD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_0 = __this->get__view_29();
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_1 = ___videoRect0;
		NullCheck(L_0);
		VirtActionInvoker1< Rect_t35B976DE901B5423C11705E156938EA27AB402CE  >::Invoke(11 /* System.Void Vuplex.WebView.ViewportMaterialView::SetCutoutRect(UnityEngine.Rect) */, L_0, L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get__videoRectPositioner_28();
		float L_3 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___videoRect0), /*hidden argument*/NULL);
		float L_4 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___videoRect0), /*hidden argument*/NULL);
		float L_5 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___videoRect0), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = __this->get__videoRectPositioner_28();
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_9), ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_add((float)L_3, (float)L_4)))), ((float)il2cpp_codegen_multiply((float)(-1.0f), (float)L_5)), L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_2, L_9, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = __this->get__videoRectPositioner_28();
		float L_11 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___videoRect0), /*hidden argument*/NULL);
		float L_12 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___videoRect0), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = __this->get__videoRectPositioner_28();
		NullCheck(L_13);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_16), L_11, L_12, L_15, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_10, L_16, /*hidden argument*/NULL);
		float L_17 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___videoRect0), /*hidden argument*/NULL);
		float L_18 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___videoRect0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		float L_19 = Math_Max_m545895C37C1F738BBB653CA1F65E50FF1D197675((0.0f), ((float)((float)((float)il2cpp_codegen_multiply((float)(-1.0f), (float)L_17))/(float)L_18)), /*hidden argument*/NULL);
		float L_20 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___videoRect0), /*hidden argument*/NULL);
		float L_21 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___videoRect0), /*hidden argument*/NULL);
		float L_22 = Math_Max_m545895C37C1F738BBB653CA1F65E50FF1D197675((0.0f), ((float)((float)((float)il2cpp_codegen_multiply((float)(-1.0f), (float)L_20))/(float)L_21)), /*hidden argument*/NULL);
		V_0 = L_22;
		float L_23 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___videoRect0), /*hidden argument*/NULL);
		float L_24 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___videoRect0), /*hidden argument*/NULL);
		float L_25 = Math_Min_mB77A95F6A1FE3B8E7CD784F20AF4E1C908B5E9CD((1.0f), ((float)((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_23))/(float)L_24)), /*hidden argument*/NULL);
		V_1 = L_25;
		float L_26 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___videoRect0), /*hidden argument*/NULL);
		float L_27 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___videoRect0), /*hidden argument*/NULL);
		float L_28 = Math_Min_mB77A95F6A1FE3B8E7CD784F20AF4E1C908B5E9CD((1.0f), ((float)((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_26))/(float)L_27)), /*hidden argument*/NULL);
		V_2 = L_28;
		float L_29 = V_0;
		float L_30 = V_1;
		float L_31 = V_2;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_32 = Rect_MinMaxRect_m9513FDB332B24FB8B49202C7350FF7223477F54F(L_19, L_29, L_30, L_31, /*hidden argument*/NULL);
		V_3 = L_32;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_33 = V_3;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_34;
		memset(&L_34, 0, sizeof(L_34));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_34), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		bool L_35 = Rect_op_Equality_mFBE3505CEDD6B73F66276E782C1B02E0E5633563(L_33, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0140;
		}
	}
	{
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
	}

IL_0140:
	{
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_36 = __this->get__videoLayer_25();
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_37 = V_3;
		NullCheck(L_36);
		VirtActionInvoker1< Rect_t35B976DE901B5423C11705E156938EA27AB402CE  >::Invoke(10 /* System.Void Vuplex.WebView.ViewportMaterialView::SetCropRect(UnityEngine.Rect) */, L_36, L_37);
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::_setViewSize(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__setViewSize_mD45418D1E463C96C1AA4484C3D4C4FFB12BAF411 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, float ___width0, float ___height1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get__viewResizer_32();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_z_4();
		V_0 = L_2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = __this->get__viewResizer_32();
		float L_4 = ___width0;
		float L_5 = ___height1;
		float L_6 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_7), L_4, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_3, L_7, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = __this->get__viewResizer_32();
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = ___width0;
		(&V_1)->set_x_2(((float)il2cpp_codegen_multiply((float)L_10, (float)(-0.5f))));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = __this->get__viewResizer_32();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_1;
		NullCheck(L_11);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::_throwExceptionIfInitialized()
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__throwExceptionIfInitialized_m6E2F7CAA21DF83F8DE5BC8566C2CF6F92A46F0A4 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab__throwExceptionIfInitialized_m6E2F7CAA21DF83F8DE5BC8566C2CF6F92A46F0A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__webView_33();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_1 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_1, _stringLiteral2B0CD5532A565BE310F8F03CDFA35058A8A96454, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WebViewPrefab__throwExceptionIfInitialized_m6E2F7CAA21DF83F8DE5BC8566C2CF6F92A46F0A4_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab__ctor_mAFEF66D9E98DDE52098BDDBF45E1049BF6C38CDD (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, const RuntimeMethod* method)
{
	{
		__this->set_InitialResolution_8((1300.0f));
		__this->set_ClickingEnabled_10((bool)1);
		__this->set_HoveringEnabled_11((bool)1);
		__this->set_ScrollingEnabled_12((bool)1);
		__this->set_DragThreshold_13((20.0f));
		__this->set_ScrollingSensitivity_15((0.005f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab::<_attachWebViewEventHandlers>b__67_0(System.Object,Vuplex.WebView.EventArgs`1<UnityEngine.Rect>)
extern "C" IL2CPP_METHOD_ATTR void WebViewPrefab_U3C_attachWebViewEventHandlersU3Eb__67_0_m8F378A99B7885B60AFFCAA05C8477343D28B0563 (WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * __this, RuntimeObject * ___sender0, EventArgs_1_t264C9EC409E765DA460145D1F5251E6CEFA7D973 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewPrefab_U3C_attachWebViewEventHandlersU3Eb__67_0_m8F378A99B7885B60AFFCAA05C8477343D28B0563_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventArgs_1_t264C9EC409E765DA460145D1F5251E6CEFA7D973 * L_0 = ___e1;
		NullCheck(L_0);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_1 = EventArgs_1_get_Value_mC97C715553CF288B9A69829B2D0DF13BE9A4C987(L_0, /*hidden argument*/EventArgs_1_get_Value_mC97C715553CF288B9A69829B2D0DF13BE9A4C987_RuntimeMethod_var);
		WebViewPrefab__setVideoRect_mD369E5C054E170A98321B6E0B8FA591BF7494FD3(__this, L_1, /*hidden argument*/NULL);
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
// System.Void Vuplex.WebView.WebViewPrefab_<>c__DisplayClass48_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0__ctor_m123DF26F984F420D51F4D64F1844136A744DAAC5 (U3CU3Ec__DisplayClass48_0_t57C19DEA26A6D9E8471D89B5826654B5DB26CF07 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab_<>c__DisplayClass48_0::<WaitUntilInitialized>b__0(System.Object,System.EventArgs)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0_U3CWaitUntilInitializedU3Eb__0_mE83B2803FCF35CEF23C80C122D89326760E5D843 (U3CU3Ec__DisplayClass48_0_t57C19DEA26A6D9E8471D89B5826654B5DB26CF07 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass48_0_U3CWaitUntilInitializedU3Eb__0_mE83B2803FCF35CEF23C80C122D89326760E5D843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TaskCompletionSource_1_t99FE296FC744F35118789383C0C0F3156E38E240 * L_0 = __this->get_taskCompletionSource_0();
		NullCheck(L_0);
		TaskCompletionSource_1_SetResult_m034EA77A1AA02DF06AC5B882AA38AA79BAF51754(L_0, (bool)1, /*hidden argument*/TaskCompletionSource_1_SetResult_m034EA77A1AA02DF06AC5B882AA38AA79BAF51754_RuntimeMethod_var);
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
// System.Void Vuplex.WebView.WebViewPrefab_<>c__DisplayClass74_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass74_0__ctor_m4C414EB82435B75E2666AF5F0D4FC29642E76B14 (U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab_<>c__DisplayClass74_0::<_init>b__0(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass74_0_U3C_initU3Eb__0_mF25CDEE42A2060BA5D37954C68CBD25F333C4C31 (U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___viewMaterial0, const RuntimeMethod* method)
{
	{
		WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * L_0 = __this->get_U3CU3E4__this_0();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = ___viewMaterial0;
		NullCheck(L_0);
		L_0->set__viewMaterial_30(L_1);
		WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * L_2 = __this->get_U3CU3E4__this_0();
		NullCheck(L_2);
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_3 = L_2->get__view_29();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_4 = ___viewMaterial0;
		NullCheck(L_3);
		VirtActionInvoker1< Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * >::Invoke(5 /* System.Void Vuplex.WebView.ViewportMaterialView::set_Material(UnityEngine.Material) */, L_3, L_4);
		WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * L_5 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_6 = __this->get_webView_1();
		NullCheck(L_5);
		WebViewPrefab__initWebViewIfReady_m4CB1839D1116D6681C6A68D582FF5262661D3302(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.WebViewPrefab_<>c__DisplayClass74_0::<_init>b__1(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass74_0_U3C_initU3Eb__1_m0C8F1468298902683F8537187994B3AF26829319 (U3CU3Ec__DisplayClass74_0_t69C3D3EF646836EF8F76986BDA91ABB8868CB338 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___videoMaterial0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass74_0_U3C_initU3Eb__1_m0C8F1468298902683F8537187994B3AF26829319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ___videoMaterial0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * L_2 = __this->get_U3CU3E4__this_0();
		NullCheck(L_2);
		L_2->set__videoLayerDisabled_26((bool)1);
		WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * L_3 = __this->get_U3CU3E4__this_0();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = L_3->get__videoRectPositioner_28();
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)0, /*hidden argument*/NULL);
		goto IL_006e;
	}

IL_002d:
	{
		WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * L_6 = __this->get_U3CU3E4__this_0();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = ___videoMaterial0;
		NullCheck(L_6);
		L_6->set__videoMaterial_27(L_7);
		WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * L_8 = __this->get_U3CU3E4__this_0();
		NullCheck(L_8);
		ViewportMaterialView_tCECDA0A9CF1AB7A9F538488119DFFD074AFDB013 * L_9 = L_8->get__videoLayer_25();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_10 = ___videoMaterial0;
		NullCheck(L_9);
		VirtActionInvoker1< Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * >::Invoke(5 /* System.Void Vuplex.WebView.ViewportMaterialView::set_Material(UnityEngine.Material) */, L_9, L_10);
		WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * L_11 = __this->get_U3CU3E4__this_0();
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_12), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		WebViewPrefab__setVideoRect_mD369E5C054E170A98321B6E0B8FA591BF7494FD3(L_11, L_12, /*hidden argument*/NULL);
	}

IL_006e:
	{
		WebViewPrefab_tECA2B2A0D06402329213B95DC5FBE58104A736AE * L_13 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_14 = __this->get_webView_1();
		NullCheck(L_13);
		WebViewPrefab__initWebViewIfReady_m4CB1839D1116D6681C6A68D582FF5262661D3302(L_13, L_14, /*hidden argument*/NULL);
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
// System.Void Vuplex.WebView.WebViewUnavailableException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void WebViewUnavailableException__ctor_m53F78BA2AAA1C8F59DCB6609CBCDE811EB6AE11E (WebViewUnavailableException_tD560D304E48B8C3927F8ED93B647C9EDBE5D4B1B * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewUnavailableException__ctor_m53F78BA2AAA1C8F59DCB6609CBCDE811EB6AE11E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(__this, L_0, /*hidden argument*/NULL);
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
// Vuplex.WebView.iOSWebPlugin Vuplex.WebView.iOSWebPlugin::get_Instance()
extern "C" IL2CPP_METHOD_ATTR iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC * iOSWebPlugin_get_Instance_mC64B31768F437596B7B1CCE1E5985E40120F5950 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSWebPlugin_get_Instance_mC64B31768F437596B7B1CCE1E5985E40120F5950_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC * L_0 = ((iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC_StaticFields*)il2cpp_codegen_static_fields_for(iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC_il2cpp_TypeInfo_var))->get__instance_0();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC * L_1 = (iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC *)il2cpp_codegen_object_new(iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC_il2cpp_TypeInfo_var);
		iOSWebPlugin__ctor_mCCF24846AA4790C3F53CCDFDAF109BA1602163FA(L_1, /*hidden argument*/NULL);
		((iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC_StaticFields*)il2cpp_codegen_static_fields_for(iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC_il2cpp_TypeInfo_var))->set__instance_0(L_1);
	}

IL_0011:
	{
		iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC * L_2 = ((iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC_StaticFields*)il2cpp_codegen_static_fields_for(iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC_il2cpp_TypeInfo_var))->get__instance_0();
		return L_2;
	}
}
// System.Void Vuplex.WebView.iOSWebPlugin::ClearAllData()
extern "C" IL2CPP_METHOD_ATTR void iOSWebPlugin_ClearAllData_m9CF79610643B53DFA117165C80E844DE38A2A0CB (iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSWebPlugin_ClearAllData_m9CF79610643B53DFA117165C80E844DE38A2A0CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB_il2cpp_TypeInfo_var);
		BaseWebView_ClearAllData_m36737D9327CF84790649EA4117D19074AA41B82B(/*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebPlugin::CreateTexture(System.Single,System.Single,System.Action`1<UnityEngine.Texture2D>)
extern "C" IL2CPP_METHOD_ATTR void iOSWebPlugin_CreateTexture_mD25F885EF6C2E8F592CE0A56A4B2E3B1E0B51521 (iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC * __this, float ___width0, float ___height1, Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77 * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSWebPlugin_CreateTexture_mD25F885EF6C2E8F592CE0A56A4B2E3B1E0B51521_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___width0;
		float L_1 = ___height1;
		Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77 * L_2 = ___callback2;
		IL2CPP_RUNTIME_CLASS_INIT(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB_il2cpp_TypeInfo_var);
		BaseWebView_CreateTexture_mC94AAEAF49FB4680E756E5FC9AA13E545176D0AC(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebPlugin::CreateMaterial(System.Action`1<UnityEngine.Material>)
extern "C" IL2CPP_METHOD_ATTR void iOSWebPlugin_CreateMaterial_mD0BA156B79822394ED29052B230B048490A80535 (iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC * __this, Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSWebPlugin_CreateMaterial_mD0BA156B79822394ED29052B230B048490A80535_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tC23435C025706E1F31BDD4A3EF77E2881D555CCC * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tC23435C025706E1F31BDD4A3EF77E2881D555CCC * L_0 = (U3CU3Ec__DisplayClass4_0_tC23435C025706E1F31BDD4A3EF77E2881D555CCC *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tC23435C025706E1F31BDD4A3EF77E2881D555CCC_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_mDB42FCD92F56F18F33309367147DAA9A22B6F1B4(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tC23435C025706E1F31BDD4A3EF77E2881D555CCC * L_1 = V_0;
		Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * L_2 = ___callback0;
		NullCheck(L_1);
		L_1->set_callback_0(L_2);
		U3CU3Ec__DisplayClass4_0_tC23435C025706E1F31BDD4A3EF77E2881D555CCC * L_3 = V_0;
		Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77 * L_4 = (Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77 *)il2cpp_codegen_object_new(Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77_il2cpp_TypeInfo_var);
		Action_1__ctor_mC973C70328D6C85A8183929F295AABE327469148(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3CCreateMaterialU3Eb__0_mCFB3526C16C2A5418FCED76EA984DF7585EFFF20_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC973C70328D6C85A8183929F295AABE327469148_RuntimeMethod_var);
		iOSWebPlugin_CreateTexture_mD25F885EF6C2E8F592CE0A56A4B2E3B1E0B51521(__this, (1.0f), (1.0f), L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebPlugin::CreateVideoMaterial(System.Action`1<UnityEngine.Material>)
extern "C" IL2CPP_METHOD_ATTR void iOSWebPlugin_CreateVideoMaterial_mE1971DB87A3714F84A14BAA6851688718D01D812 (iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC * __this, Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSWebPlugin_CreateVideoMaterial_mE1971DB87A3714F84A14BAA6851688718D01D812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_tCB62563B9978E5FDC80A03614670C70495DA69E0 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_tCB62563B9978E5FDC80A03614670C70495DA69E0 * L_0 = (U3CU3Ec__DisplayClass5_0_tCB62563B9978E5FDC80A03614670C70495DA69E0 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tCB62563B9978E5FDC80A03614670C70495DA69E0_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass5_0__ctor_m7E3EC3289E2348D5B188FB13CA1073150A17D064(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_tCB62563B9978E5FDC80A03614670C70495DA69E0 * L_1 = V_0;
		Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * L_2 = ___callback0;
		NullCheck(L_1);
		L_1->set_callback_0(L_2);
		U3CU3Ec__DisplayClass5_0_tCB62563B9978E5FDC80A03614670C70495DA69E0 * L_3 = V_0;
		Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77 * L_4 = (Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77 *)il2cpp_codegen_object_new(Action_1_t5DF2DB80B8ECC3CB04DFF47D5E1A79B8043BDC77_il2cpp_TypeInfo_var);
		Action_1__ctor_mC973C70328D6C85A8183929F295AABE327469148(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3CCreateVideoMaterialU3Eb__0_m0AEF9F12FB803587EF412096A3AE3786CCBFC1B9_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC973C70328D6C85A8183929F295AABE327469148_RuntimeMethod_var);
		iOSWebPlugin_CreateTexture_mD25F885EF6C2E8F592CE0A56A4B2E3B1E0B51521(__this, (1.0f), (1.0f), L_4, /*hidden argument*/NULL);
		return;
	}
}
// Vuplex.WebView.IWebView Vuplex.WebView.iOSWebPlugin::CreateWebView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* iOSWebPlugin_CreateWebView_m03EAE0B09E399CB2F0DBE3C363AEA282FEBDA7AE (iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC * __this, const RuntimeMethod* method)
{
	{
		iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * L_0 = iOSWebView_Instantiate_mC4AA8C60865B003F043F91746C78E4DAF21C4D98(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Vuplex.WebView.iOSWebPlugin::SetIgnoreCertificateErrors(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void iOSWebPlugin_SetIgnoreCertificateErrors_mB1FDE911F2AB1333E8BB7CA024DF14FF62ED327E (iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC * __this, bool ___ignore0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___ignore0;
		iOSWebView_SetIgnoreCertificateErrors_mDF21F6E347AE107C46E8201A5992E0ACCD12C3F1(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebPlugin::SetStorageEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void iOSWebPlugin_SetStorageEnabled_m728EF223BC7409F803E01E1FFC6AF2D8D28C1DB0 (iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSWebPlugin_SetStorageEnabled_m728EF223BC7409F803E01E1FFC6AF2D8D28C1DB0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___enabled0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB_il2cpp_TypeInfo_var);
		BaseWebView_SetStorageEnabled_m9A2579498D0CC650BC7238E0A40B253BF97408A4(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebPlugin::SetTouchScreenKeyboardEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void iOSWebPlugin_SetTouchScreenKeyboardEnabled_m79085C4452C434F2D290B3A5A7961907AE45B615 (iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC * __this, bool ___enabled0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___enabled0;
		iOSWebView_SetTouchScreenKeyboardEnabled_m678B27DED2FD736C48F2EDF8FB001A671535B88E(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebPlugin::SetUserAgent(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void iOSWebPlugin_SetUserAgent_mCAAD91CE4BB3D20E4254F8CC562C8F979F2A3115 (iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC * __this, bool ___mobile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSWebPlugin_SetUserAgent_mCAAD91CE4BB3D20E4254F8CC562C8F979F2A3115_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___mobile0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB_il2cpp_TypeInfo_var);
		BaseWebView_GloballySetUserAgent_m0DB577B09FBBACA611895601028654498C3D2BF6(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebPlugin::SetUserAgent(System.String)
extern "C" IL2CPP_METHOD_ATTR void iOSWebPlugin_SetUserAgent_mBB1489FDE2E8BA868AECCF611827BE624875DD01 (iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC * __this, String_t* ___userAgent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSWebPlugin_SetUserAgent_mBB1489FDE2E8BA868AECCF611827BE624875DD01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___userAgent0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB_il2cpp_TypeInfo_var);
		BaseWebView_GloballySetUserAgent_m81EFEACD50865BAE40B64DF1D6225BBA220C90B4(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebPlugin::.ctor()
extern "C" IL2CPP_METHOD_ATTR void iOSWebPlugin__ctor_mCCF24846AA4790C3F53CCDFDAF109BA1602163FA (iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Vuplex.WebView.iOSWebPlugin_<>c__DisplayClass4_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mDB42FCD92F56F18F33309367147DAA9A22B6F1B4 (U3CU3Ec__DisplayClass4_0_tC23435C025706E1F31BDD4A3EF77E2881D555CCC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebPlugin_<>c__DisplayClass4_0::<CreateMaterial>b__0(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CCreateMaterialU3Eb__0_mCFB3526C16C2A5418FCED76EA984DF7585EFFF20 (U3CU3Ec__DisplayClass4_0_tC23435C025706E1F31BDD4A3EF77E2881D555CCC * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___texture0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass4_0_U3CCreateMaterialU3Eb__0_mCFB3526C16C2A5418FCED76EA984DF7585EFFF20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * V_0 = NULL;
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = Resources_Load_TisMaterial_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_m03D88584A63B0ABDC1B4BE7B8EB210D9ECBEDE03(_stringLiteral87509D7F56D6C4C4EEF2F367B525BFB1CB2853CF, /*hidden argument*/Resources_Load_TisMaterial_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_m03D88584A63B0ABDC1B4BE7B8EB210D9ECBEDE03_RuntimeMethod_var);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = V_0;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_3 = ___texture0;
		NullCheck(L_2);
		Material_set_mainTexture_m0742CFF768E9701618DA07C71F009239AB31EB41(L_2, L_3, /*hidden argument*/NULL);
		Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * L_4 = __this->get_callback_0();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_5 = V_0;
		NullCheck(L_4);
		Action_1_Invoke_mAEF60C0D26E6CB251A8E07EEAB9A0233801E88BD(L_4, L_5, /*hidden argument*/Action_1_Invoke_mAEF60C0D26E6CB251A8E07EEAB9A0233801E88BD_RuntimeMethod_var);
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
// System.Void Vuplex.WebView.iOSWebPlugin_<>c__DisplayClass5_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m7E3EC3289E2348D5B188FB13CA1073150A17D064 (U3CU3Ec__DisplayClass5_0_tCB62563B9978E5FDC80A03614670C70495DA69E0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebPlugin_<>c__DisplayClass5_0::<CreateVideoMaterial>b__0(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CCreateVideoMaterialU3Eb__0_m0AEF9F12FB803587EF412096A3AE3786CCBFC1B9 (U3CU3Ec__DisplayClass5_0_tCB62563B9978E5FDC80A03614670C70495DA69E0 * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___texture0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass5_0_U3CCreateVideoMaterialU3Eb__0_m0AEF9F12FB803587EF412096A3AE3786CCBFC1B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * V_0 = NULL;
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = Resources_Load_TisMaterial_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_m03D88584A63B0ABDC1B4BE7B8EB210D9ECBEDE03(_stringLiteral14DA5074BDC9CFC42E0C47D58D27258836739EA9, /*hidden argument*/Resources_Load_TisMaterial_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_m03D88584A63B0ABDC1B4BE7B8EB210D9ECBEDE03_RuntimeMethod_var);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = V_0;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_3 = ___texture0;
		NullCheck(L_2);
		Material_set_mainTexture_m0742CFF768E9701618DA07C71F009239AB31EB41(L_2, L_3, /*hidden argument*/NULL);
		Action_1_t7D55CDBAF286DDE78372A2D88644D71BD5DD16B3 * L_4 = __this->get_callback_0();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_5 = V_0;
		NullCheck(L_4);
		Action_1_Invoke_mAEF60C0D26E6CB251A8E07EEAB9A0233801E88BD(L_4, L_5, /*hidden argument*/Action_1_Invoke_mAEF60C0D26E6CB251A8E07EEAB9A0233801E88BD_RuntimeMethod_var);
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
// System.Void Vuplex.WebView.iOSWebPluginRegistrant::_registerPlugin()
extern "C" IL2CPP_METHOD_ATTR void iOSWebPluginRegistrant__registerPlugin_m98E28E87BB0767C63C4743032D4BBF43AF7D6B45 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSWebPluginRegistrant__registerPlugin_m98E28E87BB0767C63C4743032D4BBF43AF7D6B45_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		iOSWebPlugin_t3F6012737ECBFFA85629B51D865636C3910F79CC * L_0 = iOSWebPlugin_get_Instance_mC64B31768F437596B7B1CCE1E5985E40120F5950(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WebPluginFactory_t08A0E2FB9A97AB9D23145C5F5EA61D0A03635FD3_il2cpp_TypeInfo_var);
		WebPluginFactory_RegisterIOSPlugin_mABB6D9949F7DA58D0B1CED7535FAAB469DE8CD80(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebPluginRegistrant::.ctor()
extern "C" IL2CPP_METHOD_ATTR void iOSWebPluginRegistrant__ctor_m673606D722A45A6E382561B68E03196B849D80F7 (iOSWebPluginRegistrant_tDF5D0FD240416F1E577AC322A1520EA86C69E00F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// Vuplex.WebView.WebPluginType Vuplex.WebView.iOSWebView::get_PluginType()
extern "C" IL2CPP_METHOD_ATTR int32_t iOSWebView_get_PluginType_m163BE4212AE4C7BF067740E3E9B1E1A6F0CAAA53 (iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(2);
	}
}
// Vuplex.WebView.iOSWebView Vuplex.WebView.iOSWebView::Instantiate()
extern "C" IL2CPP_METHOD_ATTR iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * iOSWebView_Instantiate_mC4AA8C60865B003F043F91746C78E4DAF21C4D98 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSWebView_Instantiate_mC4AA8C60865B003F043F91746C78E4DAF21C4D98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D(L_0, /*hidden argument*/NULL);
		NullCheck(L_0);
		iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * L_1 = GameObject_AddComponent_TisiOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234_mAB65CCC3DE3C1E25EAE09995F5F5CB91BCE9AFA1(L_0, /*hidden argument*/GameObject_AddComponent_TisiOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234_mAB65CCC3DE3C1E25EAE09995F5F5CB91BCE9AFA1_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Vuplex.WebView.iOSWebView::Init(UnityEngine.Texture2D,System.Single,System.Single,UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_Init_mA534FFD1D34C3B1C00A43FA505834F953F84081B (iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___viewportTexture0, float ___width1, float ___height2, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___videoTexture3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSWebView_Init_mA534FFD1D34C3B1C00A43FA505834F953F84081B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = ___viewportTexture0;
		float L_1 = ___width1;
		float L_2 = ___height2;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_3 = ___videoTexture3;
		BaseWebView_Init_mDB38417F0CE4ABF5B453A3591F90729F239757DC(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_4, /*hidden argument*/NULL);
		int32_t L_6 = BaseWebView_get__nativeWidth_mB68B6545EC5DC8F6DEE60028E8DDF654E58DCB9C(__this, /*hidden argument*/NULL);
		int32_t L_7 = BaseWebView_get__nativeHeight_m4D65DBD9C5451CABF733F07498DCBAF009CEF47C(__this, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_8 = ___videoTexture3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		int32_t L_10 = SystemInfo_get_graphicsDeviceType_m675AD9D5FA869DF9E71FAEC03F39E8AE8DEBA8D0(/*hidden argument*/NULL);
		intptr_t L_11 = iOSWebView_WebView_new_m639EBCFCB66633FD285BA9BAE66FB6D432CB98CA(L_5, L_6, L_7, L_9, (bool)((((int32_t)((((int32_t)L_10) == ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		((BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB *)__this)->set__nativeWebViewPtr_16((intptr_t)L_11);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebView::AllowCustomUriSchemes(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_AllowCustomUriSchemes_mDCA872D104D2B9730E1E32E5087EC6D66860559E (bool ___allowCustomSchemes0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___allowCustomSchemes0;
		iOSWebView_SetCustomUriSchemesEnabled_m340855B09A24F483913EFC74AD6CFA3983975671(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebView::Click(UnityEngine.Vector2,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_Click_m9CDF386D6B1D85A411DF93107FF272A4FE8D1740 (iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___point0, bool ___preventStealingFocus1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		BaseWebView__assertValidState_mBA2B8E887B524035F5147A6DD7A42E7969AF4A9B(__this, /*hidden argument*/NULL);
		bool L_0 = ___preventStealingFocus1;
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___point0;
		float L_2 = L_1.get_x_0();
		int32_t L_3 = BaseWebView_get__nativeWidth_mB68B6545EC5DC8F6DEE60028E8DDF654E58DCB9C(__this, /*hidden argument*/NULL);
		V_0 = (((int32_t)((int32_t)(int32_t)((float)il2cpp_codegen_multiply((float)L_2, (float)(((float)((float)L_3))))))));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = ___point0;
		float L_5 = L_4.get_y_1();
		int32_t L_6 = BaseWebView_get__nativeHeight_m4D65DBD9C5451CABF733F07498DCBAF009CEF47C(__this, /*hidden argument*/NULL);
		V_1 = (((int32_t)((int32_t)(int32_t)((float)il2cpp_codegen_multiply((float)L_5, (float)(((float)((float)L_6))))))));
		intptr_t L_7 = ((BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB *)__this)->get__nativeWebViewPtr_16();
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		iOSWebView_WebView_clickWithoutStealingFocus_m1F7C216F8C2299304E81813DF8218ED2B45AB8F4((intptr_t)L_7, L_8, L_9, /*hidden argument*/NULL);
		return;
	}

IL_0037:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = ___point0;
		VirtActionInvoker1< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(36 /* System.Void Vuplex.WebView.BaseWebView::Click(UnityEngine.Vector2) */, __this, L_10);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebView::CaptureScreenshot(System.Action`1<System.Byte[]>)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_CaptureScreenshot_m94715AFEE57D031EBE44263B7E1C731FCECDB494 (iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * __this, Action_1_tCFD7D0EFEF517D00FE88360104518B2070A270A2 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSWebView_CaptureScreenshot_m94715AFEE57D031EBE44263B7E1C731FCECDB494_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	{
		BaseWebView__assertValidState_mBA2B8E887B524035F5147A6DD7A42E7969AF4A9B(__this, /*hidden argument*/NULL);
		V_0 = (intptr_t)(0);
		V_1 = 0;
		intptr_t L_0 = ((BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB *)__this)->get__nativeWebViewPtr_16();
		iOSWebView_WebView_captureScreenshot_m579EDFEB709ABEF1F73445FB9915D4690D74A57A((intptr_t)L_0, (intptr_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_2 = L_2;
		intptr_t L_3 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_2;
		int32_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_Copy_m64744D9E23AFC00AA06CD6B057E19B7C0CE4C0C2((intptr_t)L_3, L_4, 0, L_5, /*hidden argument*/NULL);
		intptr_t L_6 = V_0;
		iOSWebView_WebView_freeMemory_m450B87825BF7C745AE867C432063E39E9E940244((intptr_t)L_6, /*hidden argument*/NULL);
		Action_1_tCFD7D0EFEF517D00FE88360104518B2070A270A2 * L_7 = ___callback0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = V_2;
		NullCheck(L_7);
		Action_1_Invoke_mE2800B8E7A8B62C005C1EA186199E5413CB35A5F(L_7, L_8, /*hidden argument*/Action_1_Invoke_mE2800B8E7A8B62C005C1EA186199E5413CB35A5F_RuntimeMethod_var);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebView::EnableViewUpdates()
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_EnableViewUpdates_m424A35CE3FD5D14BF2F3A8C747C7DFFC4D4AEBB8 (iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSWebView_EnableViewUpdates_m424A35CE3FD5D14BF2F3A8C747C7DFFC4D4AEBB8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get__currentVideoNativeTexture_28();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_2 = ((BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB *)__this)->get__videoTexture_24();
		intptr_t L_3 = __this->get__currentVideoNativeTexture_28();
		NullCheck(L_2);
		Texture2D_UpdateExternalTexture_m8A3486B0779454739624888EFD6D9EC42D30874F(L_2, (intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		BaseWebView_EnableViewUpdates_m30BE43E519B2D7BE1AD868335370993A4C7DD25D(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Vuplex.WebView.iOSWebView::GetFileUrlForBundleResource(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* iOSWebView_GetFileUrlForBundleResource_m9A54FFD0A681D8EB28E48EBDE247644154361C07 (String_t* ___fileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSWebView_GetFileUrlForBundleResource_m9A54FFD0A681D8EB28E48EBDE247644154361C07_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___fileName0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))) >= ((int32_t)2)))
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_5 = ___fileName0;
		String_t* L_6 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralB22DBCEC5EA0609A77FF3D58D65605D10A5F041B, L_5, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_7 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, iOSWebView_GetFileUrlForBundleResource_m9A54FFD0A681D8EB28E48EBDE247644154361C07_RuntimeMethod_var);
	}

IL_0029:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = V_0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))), (int32_t)1));
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = L_11;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = V_0;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_13 = Enumerable_ToList_TisString_t_m5819BB1395C8CAB17E7B1E8EED76702D3AE855B5((RuntimeObject*)(RuntimeObject*)L_12, /*hidden argument*/Enumerable_ToList_TisString_t_m5819BB1395C8CAB17E7B1E8EED76702D3AE855B5_RuntimeMethod_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = V_0;
		NullCheck(L_14);
		NullCheck(L_13);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_15 = List_1_GetRange_m4D719DF591ACF770E8025E84CC1DE0426A543EA1(L_13, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))), (int32_t)1)), /*hidden argument*/List_1_GetRange_m4D719DF591ACF770E8025E84CC1DE0426A543EA1_RuntimeMethod_var);
		NullCheck(L_15);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_16 = List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38(L_15, /*hidden argument*/List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38_RuntimeMethod_var);
		String_t* L_17 = String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4(_stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727, L_16, /*hidden argument*/NULL);
		String_t* L_18 = V_1;
		intptr_t L_19 = iOSWebView_WebView_getFileUrlForBundleResource_mB92FB2A11FF241611F4E015C7C060513ECB3F1C9(L_17, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		String_t* L_20 = Marshal_PtrToStringAnsi_mA5D5D1AA7C0EB6A96F92454A8AF9C266E2DF5DA5((intptr_t)L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Void Vuplex.WebView.iOSWebView::GetRawTextureData(System.Action`1<System.Byte[]>)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_GetRawTextureData_m724F3BD2B20E2BA5F27D307FA05E991D717F03F2 (iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * __this, Action_1_tCFD7D0EFEF517D00FE88360104518B2070A270A2 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSWebView_GetRawTextureData_m724F3BD2B20E2BA5F27D307FA05E991D717F03F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	{
		BaseWebView__assertValidState_mBA2B8E887B524035F5147A6DD7A42E7969AF4A9B(__this, /*hidden argument*/NULL);
		V_0 = (intptr_t)(0);
		V_1 = 0;
		intptr_t L_0 = ((BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB *)__this)->get__nativeWebViewPtr_16();
		iOSWebView_WebView_getRawTextureData_mCACC882C85AABCBED4988734A6C16C8397F5586D((intptr_t)L_0, (intptr_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_2 = L_2;
		intptr_t L_3 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_2;
		int32_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_Copy_m64744D9E23AFC00AA06CD6B057E19B7C0CE4C0C2((intptr_t)L_3, L_4, 0, L_5, /*hidden argument*/NULL);
		intptr_t L_6 = V_0;
		iOSWebView_WebView_freeMemory_m450B87825BF7C745AE867C432063E39E9E940244((intptr_t)L_6, /*hidden argument*/NULL);
		Action_1_tCFD7D0EFEF517D00FE88360104518B2070A270A2 * L_7 = ___callback0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = V_2;
		NullCheck(L_7);
		Action_1_Invoke_mE2800B8E7A8B62C005C1EA186199E5413CB35A5F(L_7, L_8, /*hidden argument*/Action_1_Invoke_mE2800B8E7A8B62C005C1EA186199E5413CB35A5F_RuntimeMethod_var);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebView::SetCustomUriSchemesEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_SetCustomUriSchemesEnabled_m340855B09A24F483913EFC74AD6CFA3983975671 (bool ___enabled0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___enabled0;
		iOSWebView_WebView_allowCustomUriSchemes_m7ABB9611D14C782DB559CC7AEF100CD559112629(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebView::SetIgnoreCertificateErrors(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_SetIgnoreCertificateErrors_mDF21F6E347AE107C46E8201A5992E0ACCD12C3F1 (bool ___ignore0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___ignore0;
		iOSWebView_WebView_setIgnoreCertificateErrors_mD52EC686E92FE747E32FC5C058274DC20376DDA6(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebView::SetNativeKeyboardEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_SetNativeKeyboardEnabled_m065D7201A7EE26CBD0CBD46E05AF7F3D3F179AAE (bool ___enabled0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___enabled0;
		iOSWebView_SetTouchScreenKeyboardEnabled_m678B27DED2FD736C48F2EDF8FB001A671535B88E(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebView::SetTouchScreenKeyboardEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_SetTouchScreenKeyboardEnabled_m678B27DED2FD736C48F2EDF8FB001A671535B88E (bool ___enabled0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___enabled0;
		iOSWebView_WebView_setTouchScreenKeyboardEnabled_m1520C3875F85F050A24CFC5081B88CE161722F05(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebView::SetUserAgent(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_SetUserAgent_mB775A84CE6FC6CBADDAA4B89E116B7BC17F8F00C (iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * __this, bool ___mobile0, const RuntimeMethod* method)
{
	{
		BaseWebView__assertValidState_mBA2B8E887B524035F5147A6DD7A42E7969AF4A9B(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ((BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB *)__this)->get__nativeWebViewPtr_16();
		bool L_1 = ___mobile0;
		iOSWebView_WebView_setUserAgentToMobile_mFC4AF7209467DB931F1F20675A9F9B3F046886BD((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebView::SetUserAgent(System.String)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_SetUserAgent_mBF7B1A91550A8B14AC0B9764E5E4D211FA0F396B (iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * __this, String_t* ___userAgent0, const RuntimeMethod* method)
{
	{
		BaseWebView__assertValidState_mBA2B8E887B524035F5147A6DD7A42E7969AF4A9B(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ((BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB *)__this)->get__nativeWebViewPtr_16();
		String_t* L_1 = ___userAgent0;
		iOSWebView_WebView_setUserAgent_mD393259EC37912FD0F178B9E77D19D6E4359211A((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebView::_applyVideoTexture()
extern "C" IL2CPP_METHOD_ATTR void iOSWebView__applyVideoTexture_m6A03627C0E9AB85569DA5F0EE2095F1F1CAC4929 (iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSWebView__applyVideoTexture_m6A03627C0E9AB85569DA5F0EE2095F1F1CAC4929_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		intptr_t L_0 = __this->get__currentVideoNativeTexture_28();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_2 = ((BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB *)__this)->get__videoTexture_24();
		NullCheck(L_2);
		intptr_t L_3 = Texture_GetNativeTexturePtr_mB29F70DB525E825A4A3BB908F90C06F3171E92FD(L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_4 = ((BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB *)__this)->get__videoTexture_24();
		intptr_t L_5 = __this->get__currentVideoNativeTexture_28();
		NullCheck(L_4);
		Texture2D_UpdateExternalTexture_m8A3486B0779454739624888EFD6D9EC42D30874F(L_4, (intptr_t)L_5, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_6 = ((BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB *)__this)->get__videoTexture_24();
		NullCheck(L_6);
		Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA(L_6, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_7 = ((BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB *)__this)->get__videoTexture_24();
		NullCheck(L_7);
		intptr_t L_8 = Texture_GetNativeTexturePtr_mB29F70DB525E825A4A3BB908F90C06F3171E92FD(L_7, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_8;
		intptr_t L_9 = V_0;
		bool L_10 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_9, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0076;
		}
	}
	{
		intptr_t L_11 = V_0;
		intptr_t L_12 = V_1;
		bool L_13 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_11, (intptr_t)L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0076;
		}
	}
	{
		intptr_t L_14 = V_0;
		int32_t L_15 = SystemInfo_get_graphicsDeviceType_m675AD9D5FA869DF9E71FAEC03F39E8AE8DEBA8D0(/*hidden argument*/NULL);
		V_2 = L_15;
		RuntimeObject * L_16 = Box(GraphicsDeviceType_tA87720B0E7A15371E70249FC9F4EAE7644015552_il2cpp_TypeInfo_var, (&V_2));
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		V_2 = *(int32_t*)UnBox(L_16);
		IL2CPP_RUNTIME_CLASS_INIT(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB_il2cpp_TypeInfo_var);
		BaseWebView_WebView_destroyTexture_m0E997388D5BC5BFDCBF4D3E48DB0E88BED3DE8C3((intptr_t)L_14, L_17, /*hidden argument*/NULL);
	}

IL_0076:
	{
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebView::HandleVideoTextureChanged(System.String)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_HandleVideoTextureChanged_mC5E0A578DF135854705EBB5CCC4CBC910A6B3E9C (iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * __this, String_t* ___textureString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSWebView_HandleVideoTextureChanged_mC5E0A578DF135854705EBB5CCC4CBC910A6B3E9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___textureString0;
		int64_t L_1 = Int64_Parse_mF23EAF76DFE5560832595FCAC1ACABFB717E3D4D(L_0, /*hidden argument*/NULL);
		IntPtr__ctor_m3C2353A241FD6B18CAE68756977D63B85F14DEBD((intptr_t*)(&V_0), L_1, /*hidden argument*/NULL);
		intptr_t L_2 = V_0;
		intptr_t L_3 = __this->get__currentVideoNativeTexture_28();
		bool L_4 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_2, (intptr_t)L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		intptr_t L_5 = __this->get__currentVideoNativeTexture_28();
		V_1 = (intptr_t)L_5;
		intptr_t L_6 = V_0;
		__this->set__currentVideoNativeTexture_28((intptr_t)L_6);
		bool L_7 = ((BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB *)__this)->get__viewUpdatesAreEnabled_25();
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_8 = ((BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB *)__this)->get__videoTexture_24();
		intptr_t L_9 = __this->get__currentVideoNativeTexture_28();
		NullCheck(L_8);
		Texture2D_UpdateExternalTexture_m8A3486B0779454739624888EFD6D9EC42D30874F(L_8, (intptr_t)L_9, /*hidden argument*/NULL);
	}

IL_0043:
	{
		intptr_t L_10 = V_1;
		bool L_11 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_10, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0077;
		}
	}
	{
		intptr_t L_12 = V_1;
		intptr_t L_13 = __this->get__currentVideoNativeTexture_28();
		bool L_14 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_12, (intptr_t)L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		intptr_t L_15 = V_1;
		int32_t L_16 = SystemInfo_get_graphicsDeviceType_m675AD9D5FA869DF9E71FAEC03F39E8AE8DEBA8D0(/*hidden argument*/NULL);
		V_2 = L_16;
		RuntimeObject * L_17 = Box(GraphicsDeviceType_tA87720B0E7A15371E70249FC9F4EAE7644015552_il2cpp_TypeInfo_var, (&V_2));
		NullCheck(L_17);
		String_t* L_18 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		V_2 = *(int32_t*)UnBox(L_17);
		IL2CPP_RUNTIME_CLASS_INIT(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB_il2cpp_TypeInfo_var);
		BaseWebView_WebView_destroyTexture_m0E997388D5BC5BFDCBF4D3E48DB0E88BED3DE8C3((intptr_t)L_15, L_18, /*hidden argument*/NULL);
	}

IL_0077:
	{
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebView::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_OnEnable_mFC9C94D6BF2DE3F3569714E04BA8192BDC8CB6AA (iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = iOSWebView__renderPluginOncePerFrame_m1776126DDF637676040A07BD422321BAE88DAE30(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Vuplex.WebView.iOSWebView::_renderPluginOncePerFrame()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* iOSWebView__renderPluginOncePerFrame_m1776126DDF637676040A07BD422321BAE88DAE30 (iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSWebView__renderPluginOncePerFrame_m1776126DDF637676040A07BD422321BAE88DAE30_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3C_renderPluginOncePerFrameU3Ed__20_tA70D3EF053EFA34A193BA376BE028A94FD4B37E7 * L_0 = (U3C_renderPluginOncePerFrameU3Ed__20_tA70D3EF053EFA34A193BA376BE028A94FD4B37E7 *)il2cpp_codegen_object_new(U3C_renderPluginOncePerFrameU3Ed__20_tA70D3EF053EFA34A193BA376BE028A94FD4B37E7_il2cpp_TypeInfo_var);
		U3C_renderPluginOncePerFrameU3Ed__20__ctor_m0968DC296F96A4A2210FC020160335B02666381D(L_0, 0, /*hidden argument*/NULL);
		U3C_renderPluginOncePerFrameU3Ed__20_tA70D3EF053EFA34A193BA376BE028A94FD4B37E7 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
extern "C" void DEFAULT_CALL WebView_allowCustomUriSchemes(int32_t);
// System.Void Vuplex.WebView.iOSWebView::WebView_allowCustomUriSchemes(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_WebView_allowCustomUriSchemes_m7ABB9611D14C782DB559CC7AEF100CD559112629 (bool ___allowCustomSchemes0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebView_allowCustomUriSchemes)(static_cast<int32_t>(___allowCustomSchemes0));

}
extern "C" void DEFAULT_CALL WebView_captureScreenshot(intptr_t, intptr_t*, int32_t*);
// System.Void Vuplex.WebView.iOSWebView::WebView_captureScreenshot(System.IntPtr,System.IntPtrU26,System.Int32U26)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_WebView_captureScreenshot_m579EDFEB709ABEF1F73445FB9915D4690D74A57A (intptr_t ___webViewPtr0, intptr_t* ___bytes1, int32_t* ___length2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*, int32_t*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebView_captureScreenshot)(___webViewPtr0, ___bytes1, ___length2);

}
extern "C" void DEFAULT_CALL WebView_clickWithoutStealingFocus(intptr_t, int32_t, int32_t);
// System.Void Vuplex.WebView.iOSWebView::WebView_clickWithoutStealingFocus(System.IntPtr,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_WebView_clickWithoutStealingFocus_m1F7C216F8C2299304E81813DF8218ED2B45AB8F4 (intptr_t ___webViewPtr0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebView_clickWithoutStealingFocus)(___webViewPtr0, ___x1, ___y2);

}
extern "C" int32_t DEFAULT_CALL WebView_depositPointer(intptr_t);
// System.Int32 Vuplex.WebView.iOSWebView::WebView_depositPointer(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t iOSWebView_WebView_depositPointer_m7E5D7586B1E2AA9CF9CC7072B65ABEE9E6271A54 (intptr_t ___pointer0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebView_depositPointer)(___pointer0);

	return returnValue;
}
extern "C" void DEFAULT_CALL WebView_freeMemory(intptr_t);
// System.Void Vuplex.WebView.iOSWebView::WebView_freeMemory(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_WebView_freeMemory_m450B87825BF7C745AE867C432063E39E9E940244 (intptr_t ___bytes0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebView_freeMemory)(___bytes0);

}
extern "C" intptr_t DEFAULT_CALL WebView_getFileUrlForBundleResource(char*, char*);
// System.IntPtr Vuplex.WebView.iOSWebView::WebView_getFileUrlForBundleResource(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t iOSWebView_WebView_getFileUrlForBundleResource_mB92FB2A11FF241611F4E015C7C060513ECB3F1C9 (String_t* ___fileNameWithoutExtension0, String_t* ___fileExtension1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter U27___fileNameWithoutExtension0U27 to native representation
	char* ____fileNameWithoutExtension0_marshaled = NULL;
	____fileNameWithoutExtension0_marshaled = il2cpp_codegen_marshal_string(___fileNameWithoutExtension0);

	// Marshaling of parameter U27___fileExtension1U27 to native representation
	char* ____fileExtension1_marshaled = NULL;
	____fileExtension1_marshaled = il2cpp_codegen_marshal_string(___fileExtension1);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(WebView_getFileUrlForBundleResource)(____fileNameWithoutExtension0_marshaled, ____fileExtension1_marshaled);

	// Marshaling cleanup of parameter U27___fileNameWithoutExtension0U27 native representation
	il2cpp_codegen_marshal_free(____fileNameWithoutExtension0_marshaled);
	____fileNameWithoutExtension0_marshaled = NULL;

	// Marshaling cleanup of parameter U27___fileExtension1U27 native representation
	il2cpp_codegen_marshal_free(____fileExtension1_marshaled);
	____fileExtension1_marshaled = NULL;

	return returnValue;
}
extern "C" void DEFAULT_CALL WebView_getRawTextureData(intptr_t, intptr_t*, int32_t*);
// System.Void Vuplex.WebView.iOSWebView::WebView_getRawTextureData(System.IntPtr,System.IntPtrU26,System.Int32U26)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_WebView_getRawTextureData_mCACC882C85AABCBED4988734A6C16C8397F5586D (intptr_t ___webViewPtr0, intptr_t* ___bytes1, int32_t* ___length2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*, int32_t*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebView_getRawTextureData)(___webViewPtr0, ___bytes1, ___length2);

}
extern "C" intptr_t DEFAULT_CALL WebView_getRenderFunction();
// System.IntPtr Vuplex.WebView.iOSWebView::WebView_getRenderFunction()
extern "C" IL2CPP_METHOD_ATTR intptr_t iOSWebView_WebView_getRenderFunction_m6F379FA8732DAC89D82998F7D3E1132343B997D0 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(WebView_getRenderFunction)();

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL WebView_new(char*, int32_t, int32_t, int32_t, int32_t);
// System.IntPtr Vuplex.WebView.iOSWebView::WebView_new(System.String,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR intptr_t iOSWebView_WebView_new_m639EBCFCB66633FD285BA9BAE66FB6D432CB98CA (String_t* ___gameObjectName0, int32_t ___width1, int32_t ___height2, bool ___enableVideoSupport3, bool ___useOpenGL4, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, int32_t, int32_t);

	// Marshaling of parameter U27___gameObjectName0U27 to native representation
	char* ____gameObjectName0_marshaled = NULL;
	____gameObjectName0_marshaled = il2cpp_codegen_marshal_string(___gameObjectName0);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(WebView_new)(____gameObjectName0_marshaled, ___width1, ___height2, static_cast<int32_t>(___enableVideoSupport3), static_cast<int32_t>(___useOpenGL4));

	// Marshaling cleanup of parameter U27___gameObjectName0U27 native representation
	il2cpp_codegen_marshal_free(____gameObjectName0_marshaled);
	____gameObjectName0_marshaled = NULL;

	return returnValue;
}
extern "C" void DEFAULT_CALL WebView_setIgnoreCertificateErrors(int32_t);
// System.Void Vuplex.WebView.iOSWebView::WebView_setIgnoreCertificateErrors(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_WebView_setIgnoreCertificateErrors_mD52EC686E92FE747E32FC5C058274DC20376DDA6 (bool ___ignore0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebView_setIgnoreCertificateErrors)(static_cast<int32_t>(___ignore0));

}
extern "C" void DEFAULT_CALL WebView_setTouchScreenKeyboardEnabled(int32_t);
// System.Void Vuplex.WebView.iOSWebView::WebView_setTouchScreenKeyboardEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_WebView_setTouchScreenKeyboardEnabled_m1520C3875F85F050A24CFC5081B88CE161722F05 (bool ___enabled0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebView_setTouchScreenKeyboardEnabled)(static_cast<int32_t>(___enabled0));

}
extern "C" void DEFAULT_CALL WebView_setUserAgentToMobile(intptr_t, int32_t);
// System.Void Vuplex.WebView.iOSWebView::WebView_setUserAgentToMobile(System.IntPtr,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_WebView_setUserAgentToMobile_mFC4AF7209467DB931F1F20675A9F9B3F046886BD (intptr_t ___webViewPtr0, bool ___mobile1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebView_setUserAgentToMobile)(___webViewPtr0, static_cast<int32_t>(___mobile1));

}
extern "C" void DEFAULT_CALL WebView_setUserAgent(intptr_t, char*);
// System.Void Vuplex.WebView.iOSWebView::WebView_setUserAgent(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void iOSWebView_WebView_setUserAgent_mD393259EC37912FD0F178B9E77D19D6E4359211A (intptr_t ___webViewPtr0, String_t* ___userAgent1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter U27___userAgent1U27 to native representation
	char* ____userAgent1_marshaled = NULL;
	____userAgent1_marshaled = il2cpp_codegen_marshal_string(___userAgent1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebView_setUserAgent)(___webViewPtr0, ____userAgent1_marshaled);

	// Marshaling cleanup of parameter U27___userAgent1U27 native representation
	il2cpp_codegen_marshal_free(____userAgent1_marshaled);
	____userAgent1_marshaled = NULL;

}
// System.Void Vuplex.WebView.iOSWebView::.ctor()
extern "C" IL2CPP_METHOD_ATTR void iOSWebView__ctor_m05A3D1BEFF99158F973E6035C8E340608AB26BDC (iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSWebView__ctor_m05A3D1BEFF99158F973E6035C8E340608AB26BDC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB_il2cpp_TypeInfo_var);
		BaseWebView__ctor_mD8AE2CA192EF4E2B89B091D0DD2FD3CAC3D7280C(__this, /*hidden argument*/NULL);
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
// System.Void Vuplex.WebView.iOSWebView_<_renderPluginOncePerFrame>d__20::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3C_renderPluginOncePerFrameU3Ed__20__ctor_m0968DC296F96A4A2210FC020160335B02666381D (U3C_renderPluginOncePerFrameU3Ed__20_tA70D3EF053EFA34A193BA376BE028A94FD4B37E7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebView_<_renderPluginOncePerFrame>d__20::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3C_renderPluginOncePerFrameU3Ed__20_System_IDisposable_Dispose_m450AFB83F9114E926731705812D875A21D50BC97 (U3C_renderPluginOncePerFrameU3Ed__20_tA70D3EF053EFA34A193BA376BE028A94FD4B37E7 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Vuplex.WebView.iOSWebView_<_renderPluginOncePerFrame>d__20::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3C_renderPluginOncePerFrameU3Ed__20_MoveNext_m253E78E6CCA86998595D25654CD0405E2B660683 (U3C_renderPluginOncePerFrameU3Ed__20_tA70D3EF053EFA34A193BA376BE028A94FD4B37E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3C_renderPluginOncePerFrameU3Ed__20_MoveNext_m253E78E6CCA86998595D25654CD0405E2B660683_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA * L_4 = (WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA *)il2cpp_codegen_object_new(WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m6CDB79476A4A84CEC62947D36ADED96E907BA20B(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
		iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = ((BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB *)L_5)->get__viewUpdatesAreEnabled_25();
		if (!L_6)
		{
			goto IL_001e;
		}
	}
	{
		iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * L_7 = V_1;
		NullCheck(L_7);
		bool L_8 = BaseWebView_get_IsDisposed_m13398DAB3F7E72152E2C998676A6DD0E75682F2B(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_001e;
		}
	}
	{
		iOSWebView_tD7EFA8DCAB7D9C42E5359281C147322D07461234 * L_9 = V_1;
		NullCheck(L_9);
		intptr_t L_10 = ((BaseWebView_t5C30006F29FBD574923434B2A7A1E52C673E9AFB *)L_9)->get__nativeWebViewPtr_16();
		int32_t L_11 = iOSWebView_WebView_depositPointer_m7E5D7586B1E2AA9CF9CC7072B65ABEE9E6271A54((intptr_t)L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		intptr_t L_12 = iOSWebView_WebView_getRenderFunction_m6F379FA8732DAC89D82998F7D3E1132343B997D0(/*hidden argument*/NULL);
		int32_t L_13 = V_2;
		GL_IssuePluginEvent_mE95C5B1FBEA4BEE77FC0F0DFB539EE41E4472125((intptr_t)L_12, L_13, /*hidden argument*/NULL);
		goto IL_001e;
	}
}
// System.Object Vuplex.WebView.iOSWebView_<_renderPluginOncePerFrame>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3C_renderPluginOncePerFrameU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAC3412CA35E0D7D41D4D95C30D94603255BEECB7 (U3C_renderPluginOncePerFrameU3Ed__20_tA70D3EF053EFA34A193BA376BE028A94FD4B37E7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Vuplex.WebView.iOSWebView_<_renderPluginOncePerFrame>d__20::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3C_renderPluginOncePerFrameU3Ed__20_System_Collections_IEnumerator_Reset_m6F41101DDEB8717C68D6A5E672E6EB6A426AAECD (U3C_renderPluginOncePerFrameU3Ed__20_tA70D3EF053EFA34A193BA376BE028A94FD4B37E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3C_renderPluginOncePerFrameU3Ed__20_System_Collections_IEnumerator_Reset_m6F41101DDEB8717C68D6A5E672E6EB6A426AAECD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3C_renderPluginOncePerFrameU3Ed__20_System_Collections_IEnumerator_Reset_m6F41101DDEB8717C68D6A5E672E6EB6A426AAECD_RuntimeMethod_var);
	}
}
// System.Object Vuplex.WebView.iOSWebView_<_renderPluginOncePerFrame>d__20::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3C_renderPluginOncePerFrameU3Ed__20_System_Collections_IEnumerator_get_Current_m811BACF3C44129650663E262F9F96A945CEA3234 (U3C_renderPluginOncePerFrameU3Ed__20_tA70D3EF053EFA34A193BA376BE028A94FD4B37E7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void WebHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void WebHandler_Start_m8C96EF9DAF9292FB3C7364DA42EDE1A55CCAC4DF (WebHandler_tEF3DFECC162F8A29528A5C0396B8D3A36C490A78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebHandler_Start_m8C96EF9DAF9292FB3C7364DA42EDE1A55CCAC4DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6 * L_0 = Object_FindObjectOfType_TisAbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6_mAD69E97D9DD8BC735BDF7AE33522EC43FE33D69D(/*hidden argument*/Object_FindObjectOfType_TisAbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6_mAD69E97D9DD8BC735BDF7AE33522EC43FE33D69D_RuntimeMethod_var);
		__this->set__abstractMap_8(L_0);
		return;
	}
}
// System.Void WebHandler::OnSubmit()
extern "C" IL2CPP_METHOD_ATTR void WebHandler_OnSubmit_mB5C9B14270034E7EDBC482C6C1E1CDA21A09D9DF (WebHandler_tEF3DFECC162F8A29528A5C0396B8D3A36C490A78 * __this, const RuntimeMethod* method)
{
	{
		WebHandler_PostToDatabase_mE53F400673D8CA3F5A8777ED3B33AF7008F24D93(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebHandler::PostToDatabase()
extern "C" IL2CPP_METHOD_ATTR void WebHandler_PostToDatabase_mE53F400673D8CA3F5A8777ED3B33AF7008F24D93 (WebHandler_tEF3DFECC162F8A29528A5C0396B8D3A36C490A78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebHandler_PostToDatabase_mE53F400673D8CA3F5A8777ED3B33AF7008F24D93_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	User_tC17190F58E7AF577BC179A3103A3D3F299F3B0C7 * V_0 = NULL;
	{
		User_tC17190F58E7AF577BC179A3103A3D3F299F3B0C7 * L_0 = (User_tC17190F58E7AF577BC179A3103A3D3F299F3B0C7 *)il2cpp_codegen_object_new(User_tC17190F58E7AF577BC179A3103A3D3F299F3B0C7_il2cpp_TypeInfo_var);
		User__ctor_mB5B1D42F0980D69CF10E95B3BF591E010A500A53(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = __this->get_baseUrl_4();
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_1, _stringLiteral685B56269E9682DF1E329F25FC18034536A9228C, /*hidden argument*/NULL);
		User_tC17190F58E7AF577BC179A3103A3D3F299F3B0C7 * L_3 = V_0;
		RestClient_Put_mDA697668DBD06112E4E5B05C4741DD46C76387A4(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebHandler::GetRequest()
extern "C" IL2CPP_METHOD_ATTR void WebHandler_GetRequest_m456242FFED9A96849A2CFDFE30DD195673EB5690 (WebHandler_tEF3DFECC162F8A29528A5C0396B8D3A36C490A78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebHandler_GetRequest_m456242FFED9A96849A2CFDFE30DD195673EB5690_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_baseUrl_4();
		String_t* L_1 = __this->get_shortLinkCode_6();
		String_t* L_2 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_0, _stringLiteral7E653D3AC679D6B3D773C20BA5FA94CA6B4D7C75, L_1, _stringLiteral25688845860B85616A3FABDEB2E53D4408F6DEA8, /*hidden argument*/NULL);
		RuntimeObject* L_3 = RestClient_Get_mB7C87B45B0AC6B96336314E2C6F9BF16446565A7(L_2, /*hidden argument*/NULL);
		Action_1_t65311BD7395CAEB1E9483E030F69FF580BCD5C80 * L_4 = (Action_1_t65311BD7395CAEB1E9483E030F69FF580BCD5C80 *)il2cpp_codegen_object_new(Action_1_t65311BD7395CAEB1E9483E030F69FF580BCD5C80_il2cpp_TypeInfo_var);
		Action_1__ctor_m5541C3BBE123DA9981022935C7C933D248C90656(L_4, __this, (intptr_t)((intptr_t)WebHandler_U3CGetRequestU3Eb__9_0_m2D98DF7E5843D7C2C03FDF626EA568DE75518226_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5541C3BBE123DA9981022935C7C933D248C90656_RuntimeMethod_var);
		NullCheck(L_3);
		InterfaceFuncInvoker1< RuntimeObject*, Action_1_t65311BD7395CAEB1E9483E030F69FF580BCD5C80 * >::Invoke(9 /* RSG.IPromise RSG.IPromise`1<Proyecto26.ResponseHelper>::Then(System.Action`1<PromisedT>) */, IPromise_1_t2BD69455F5AA937AC3122D68570094E2384BED19_il2cpp_TypeInfo_var, L_3, L_4);
		return;
	}
}
// System.Void WebHandler::GetMapLocation()
extern "C" IL2CPP_METHOD_ATTR void WebHandler_GetMapLocation_mBBAD7518813337136DBC026AA2EE33878A3BABD5 (WebHandler_tEF3DFECC162F8A29528A5C0396B8D3A36C490A78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebHandler_GetMapLocation_mBBAD7518813337136DBC026AA2EE33878A3BABD5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		String_t* L_0 = __this->get_longLink_7();
		JObject_tDAD1F88FC97DFAE2821454F590A9F482AEF04739 * L_1 = WebHandler_DecodeURL_m3AD8AFFBE550AF362ABB041B5754CF12A783F591(__this, L_0, /*hidden argument*/NULL);
		__this->set_map_5(L_1);
		JObject_tDAD1F88FC97DFAE2821454F590A9F482AEF04739 * L_2 = __this->get_map_5();
		NullCheck(L_2);
		JProperty_t30557F21425BE7749994AB2C7E8AEC664BA98C51 * L_3 = JObject_Property_m63E4482F22F0D8035355C36599E4D199E59D4DEF(L_2, _stringLiteralD2A773AE817D7D07C19D9E37BE4E792CEC37AFF0, /*hidden argument*/NULL);
		NullCheck(L_3);
		JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF * L_4 = JProperty_get_Value_m1D1D04C3957E7A46CC2620007E72B935E3A4ABD5(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		JObject_tDAD1F88FC97DFAE2821454F590A9F482AEF04739 * L_6 = __this->get_map_5();
		NullCheck(L_6);
		JProperty_t30557F21425BE7749994AB2C7E8AEC664BA98C51 * L_7 = JObject_Property_m63E4482F22F0D8035355C36599E4D199E59D4DEF(L_6, _stringLiteral5FCCCDCF1D079C4A85C92C6FE7C8D29A27E49BED, /*hidden argument*/NULL);
		NullCheck(L_7);
		JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF * L_8 = JProperty_get_Value_m1D1D04C3957E7A46CC2620007E72B935E3A4ABD5(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		JObject_tDAD1F88FC97DFAE2821454F590A9F482AEF04739 * L_10 = __this->get_map_5();
		NullCheck(L_10);
		JProperty_t30557F21425BE7749994AB2C7E8AEC664BA98C51 * L_11 = JObject_Property_m63E4482F22F0D8035355C36599E4D199E59D4DEF(L_10, _stringLiteral92298812107BB17EFF1B85E15547AE13B6FEE3A1, /*hidden argument*/NULL);
		NullCheck(L_11);
		JToken_t6C6DB22A02D0045180421FAC02F14BC51584FEEF * L_12 = JProperty_get_Value_m1D1D04C3957E7A46CC2620007E72B935E3A4ABD5(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		float L_14 = Single_Parse_m643ECE18CB0499B2B3EC76C8B941020122003DC6(L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		double L_15 = Convert_ToDouble_mAB1A9AC95EC05C079529253797362E319C342A6F(L_9, /*hidden argument*/NULL);
		V_1 = L_15;
		double L_16 = Convert_ToDouble_mAB1A9AC95EC05C079529253797362E319C342A6F(L_5, /*hidden argument*/NULL);
		V_2 = L_16;
		AbstractMap_tD0075CA48E7F4B007F3ABA48732443BD199E71C6 * L_17 = __this->get__abstractMap_8();
		double L_18 = V_1;
		double L_19 = V_2;
		Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  L_20;
		memset(&L_20, 0, sizeof(L_20));
		Vector2d__ctor_m7C9BCA1D14B517A38C0F378907B88C00E958B7EB((&L_20), L_18, L_19, /*hidden argument*/NULL);
		float L_21 = V_0;
		NullCheck(L_17);
		VirtActionInvoker2< Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483 , float >::Invoke(32 /* System.Void Mapbox.Unity.Map.AbstractMap::UpdateMap(Mapbox.Utils.Vector2d,System.Single) */, L_17, L_20, L_21);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = L_22;
		double L_24 = V_1;
		double L_25 = L_24;
		RuntimeObject * L_26 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_26);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_27 = L_23;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteralD08F88DF745FA7950B104E4A707A31CFCE7B5841);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralD08F88DF745FA7950B104E4A707A31CFCE7B5841);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = L_27;
		double L_29 = V_2;
		double L_30 = L_29;
		RuntimeObject * L_31 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_31);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_32 = L_28;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteralD08F88DF745FA7950B104E4A707A31CFCE7B5841);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralD08F88DF745FA7950B104E4A707A31CFCE7B5841);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_33 = L_32;
		float L_34 = V_0;
		float L_35 = L_34;
		RuntimeObject * L_36 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_36);
		String_t* L_37 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_37, /*hidden argument*/NULL);
		return;
	}
}
// Mapbox.Json.Linq.JObject WebHandler::DecodeURL(System.String)
extern "C" IL2CPP_METHOD_ATTR JObject_tDAD1F88FC97DFAE2821454F590A9F482AEF04739 * WebHandler_DecodeURL_m3AD8AFFBE550AF362ABB041B5754CF12A783F591 (WebHandler_tEF3DFECC162F8A29528A5C0396B8D3A36C490A78 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebHandler_DecodeURL_m3AD8AFFBE550AF362ABB041B5754CF12A783F591_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_1 = NULL;
	JObject_tDAD1F88FC97DFAE2821454F590A9F482AEF04739 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		String_t* L_0 = ___url0;
		String_t* L_1 = UnityWebRequest_UnEscapeURL_m1224F23674AC91179573482A2993CB9E4EC98980(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_2 = (JObject_tDAD1F88FC97DFAE2821454F590A9F482AEF04739 *)NULL;
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_2, ((int32_t)63), /*hidden argument*/NULL);
		V_3 = L_3;
		int32_t L_4 = V_3;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0090;
		}
	}
	{
		String_t* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		String_t* L_10 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11 = V_0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_12 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_13 = L_12;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)38));
		NullCheck(L_11);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_11, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		V_4 = 0;
		goto IL_0087;
	}

IL_0042:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		String_t* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		bool L_19 = String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B(L_18, _stringLiteralF5424E84A20660EC4AE9731F60B0CD6CF2668D7D, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0081;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_20 = V_1;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		int32_t L_24 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_23, ((int32_t)61), /*hidden argument*/NULL);
		V_5 = L_24;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_25 = V_1;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		String_t* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		int32_t L_29 = V_5;
		NullCheck(L_28);
		String_t* L_30 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_28, ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_30);
		String_t* L_31 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_30, _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6, _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8, /*hidden argument*/NULL);
		JObject_tDAD1F88FC97DFAE2821454F590A9F482AEF04739 * L_32 = JObject_Parse_m59A14585EFE40CCE84F70248D6CB82D9E39D4655(L_31, /*hidden argument*/NULL);
		V_2 = L_32;
	}

IL_0081:
	{
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_0087:
	{
		int32_t L_34 = V_4;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_35 = V_1;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_35)->max_length)))))))
		{
			goto IL_0042;
		}
	}
	{
		JObject_tDAD1F88FC97DFAE2821454F590A9F482AEF04739 * L_36 = V_2;
		return L_36;
	}

IL_0090:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralC0CEF2B89C1E231B8907D9D8A09B95C98488CC08, /*hidden argument*/NULL);
		return (JObject_tDAD1F88FC97DFAE2821454F590A9F482AEF04739 *)NULL;
	}
}
// System.Void WebHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WebHandler__ctor_mD7F46BBBA775B90ED4D2069F765F2762A1A1A3D1 (WebHandler_tEF3DFECC162F8A29528A5C0396B8D3A36C490A78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebHandler__ctor_mD7F46BBBA775B90ED4D2069F765F2762A1A1A3D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_baseUrl_4(_stringLiteral0673CA4D7B5E3737AD01543628B363533DE97619);
		__this->set_shortLinkCode_6(_stringLiteral8AE16D30542A37BD196F8418F9FF380DC39334E6);
		User_tC17190F58E7AF577BC179A3103A3D3F299F3B0C7 * L_0 = (User_tC17190F58E7AF577BC179A3103A3D3F299F3B0C7 *)il2cpp_codegen_object_new(User_tC17190F58E7AF577BC179A3103A3D3F299F3B0C7_il2cpp_TypeInfo_var);
		User__ctor_mB5B1D42F0980D69CF10E95B3BF591E010A500A53(L_0, /*hidden argument*/NULL);
		__this->set_user_9(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebHandler::<GetRequest>b__9_0(Proyecto26.ResponseHelper)
extern "C" IL2CPP_METHOD_ATTR void WebHandler_U3CGetRequestU3Eb__9_0_m2D98DF7E5843D7C2C03FDF626EA568DE75518226 (WebHandler_tEF3DFECC162F8A29528A5C0396B8D3A36C490A78 * __this, ResponseHelper_t1D3F6F23A965CA2B1E2CDD0A4BFF16F387D1555F * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebHandler_U3CGetRequestU3Eb__9_0_m2D98DF7E5843D7C2C03FDF626EA568DE75518226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ResponseHelper_t1D3F6F23A965CA2B1E2CDD0A4BFF16F387D1555F * L_0 = ___response0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ResponseHelper_t1D3F6F23A965CA2B1E2CDD0A4BFF16F387D1555F * L_1 = ___response0;
		NullCheck(L_1);
		String_t* L_2 = ResponseHelper_get_Text_mA285A72FBA91A37ED55E48088DFE8E53EA3B733D(L_1, /*hidden argument*/NULL);
		__this->set_longLink_7(L_2);
		WebHandler_GetMapLocation_mBBAD7518813337136DBC026AA2EE33878A3BABD5(__this, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral90AC86513D7D93E868698D90B2842650FBAE5540, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
