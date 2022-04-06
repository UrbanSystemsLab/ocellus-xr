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

// System.Action`1<UnityEngine.Material>
struct Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>
struct Dictionary_2_tAB8DD48C6C619B787512903708272AC1164CE7E1;
// System.EventHandler`1<Vuplex.WebView.EventArgs`1<UnityEngine.Rect>>
struct EventHandler_1_t9194B4C97F49ADD5089D89D75F4F2BB8BF5B67ED;
// System.EventHandler`1<Vuplex.WebView.EventArgs`1<System.String>>
struct EventHandler_1_t48B659E8A04B374D57AC577E14D0787F0653B63D;
// System.EventHandler`1<Vuplex.WebView.ClickedEventArgs>
struct EventHandler_1_tF22611595B9E5F119DC928B8BA1C1BC091AB6C5B;
// System.EventHandler`1<Vuplex.WebView.ConsoleMessageEventArgs>
struct EventHandler_1_tCD76EC50EEBCD9E381521191668E5C85FC66D492;
// System.EventHandler`1<Vuplex.WebView.FocusedInputFieldChangedEventArgs>
struct EventHandler_1_t9F252B5BA664B37EE6601ADF51FBB90A7D343F62;
// System.EventHandler`1<Vuplex.WebView.ProgressChangedEventArgs>
struct EventHandler_1_t8EE7F393A98500CC3B3D1B1A1D3A6F98B1368DF4;
// System.EventHandler`1<Vuplex.WebView.ScrolledEventArgs>
struct EventHandler_1_t24BCEA0C01521095E56C2CF20034BDD19F16C361;
// System.EventHandler`1<Vuplex.WebView.UrlChangedEventArgs>
struct EventHandler_1_tE104F106190FD0231B231A059551BCFB4A08C6FF;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC;
// System.Func`2<System.Object,System.Single>
struct Func_2_t78F21BB7B6C7D754A8C4D71ACB39668A8F967BA1;
// System.Func`2<Mapbox.Examples.Voxels.VoxelData,System.Single>
struct Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<Mapbox.Examples.Voxels.VoxelData>
struct IEnumerable_1_tEE41F559C008A2DEFBB79D81D7F1478843F0EC0E;
// System.Linq.IOrderedEnumerable`1<System.Object>
struct IOrderedEnumerable_1_tB9F2319177B9E63FFCBB89F9E57F8529A97CC77B;
// System.Linq.IOrderedEnumerable`1<Mapbox.Examples.Voxels.VoxelData>
struct IOrderedEnumerable_1_t4709C10805BB8953A3F411DF075499511009AE0C;
// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<Mapbox.Unity.MeshGeneration.Modifiers.GameObjectModifier>
struct List_1_tFC175C8200E774CBC616C7E9E4EE155A7D746733;
// System.Collections.Generic.List`1<Mapbox.Unity.MeshGeneration.Modifiers.MeshModifier>
struct List_1_t3A82E12604FB4C6AFFE2FC6A0DD0D4A38EEF0A6D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<Mapbox.Examples.Voxels.VoxelData>
struct List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1;
// Mapbox.Map.Map`1<Mapbox.Map.RasterTile>
struct Map_1_tC48A961A1B61785722D5907072B2D13475A89832;
// Mapbox.Map.Map`1<Mapbox.Map.RawPngRasterTile>
struct Map_1_t11BF2AF4B8B14E81CF098228619FEF7891D6E067;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Mapbox.Examples.Voxels.VoxelData[]
struct VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1;
// Vuplex.WebView.WebPluginType[]
struct WebPluginTypeU5BU5D_t78DEF9244FB9E85487E818A8B75F44B014D48141;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Vuplex.WebView.BaseWebView
struct BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9;
// Vuplex.WebView.BaseWebViewPrefab
struct BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// Vuplex.WebView.CanvasWebViewPrefab
struct CanvasWebViewPrefab_tBA29146094CB4C872D4879E97AC68DA099409180;
// Mapbox.Unity.Map.ColliderOptions
struct ColliderOptions_t42E870C736B3D06B1A8D44CB2E96B1C4BDA888AB;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// Mapbox.Unity.Map.CoreVectorLayerProperties
struct CoreVectorLayerProperties_t66F41FDEEDFACE93E9033E98ABB3F67275387BB9;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// Mapbox.Examples.ForwardGeocodeUserInput
struct ForwardGeocodeUserInput_t10C9A318B7C61E1D0B36245E3C2C475A0D483D70;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Mapbox.Unity.Map.GeometryExtrusionOptions
struct GeometryExtrusionOptions_t78960005A491E7B5D6CC93BD9579FAB2B07F7E76;
// Mapbox.Unity.Map.GeometryMaterialOptions
struct GeometryMaterialOptions_t9651B879AFFC3ACAD4C1F82DC787B432AF1788CB;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Mapbox.Platform.IFileSource
struct IFileSource_t2DDCC31C6A4E31824E3A92156372D1AAF8ECA872;
// Vuplex.WebView.IWebView
struct IWebView_t2A8AD5915D9A2817DDF17237F2A4BE7704DDACC0;
// JSCom
struct JSCom_t405735338C026C27A23A4739D94D75A1261A93FC;
// Mapbox.Unity.Map.LayerPerformanceOptions
struct LayerPerformanceOptions_t3BF47B0C60085EA4DF7D68C764FEC250920FBC4A;
// Mapbox.Unity.MeshGeneration.Interfaces.LayerVisualizerBase
struct LayerVisualizerBase_t053BD1F0B887C15925A6589933F5059B68704BB0;
// Mapbox.Unity.Map.LineGeometryOptions
struct LineGeometryOptions_tE1BF919C7A117501C6A118D3621E92166FAB0899;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// Vuplex.WebView.ProgressChangedEventArgs
struct ProgressChangedEventArgs_t1E932488A49A8E10A0278FD4E62A82B884BEB11B;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// Mapbox.Unity.Map.SubLayerBehaviorModifiers
struct SubLayerBehaviorModifiers_tBA0933937A41D361FEEEF30259FB14B6ED55B4FE;
// Mapbox.Unity.SourceLayers.SubLayerModeling
struct SubLayerModeling_t792118EBCD8BBA1FCBB250897BF7C7A3E7DA1219;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// Mapbox.Unity.Map.VectorFilterOptions
struct VectorFilterOptions_t8F2D8B65EE82F8320A181AFFFF95271748A088B2;
// Mapbox.Unity.Map.VectorSubLayerProperties
struct VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// Vuplex.WebView.Internal.ViewportMaterialView
struct ViewportMaterialView_t124EF608DBE03B6C7374D67BD9D9BFDC25D79182;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Mapbox.Examples.Voxels.VoxelData
struct VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310;
// Mapbox.Examples.Voxels.VoxelFetcher
struct VoxelFetcher_t31CB60AE2A4EA3F4D722321C8BB87B3FE68FBE2D;
// Mapbox.Examples.Voxels.VoxelTile
struct VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// Vuplex.WebView.iOSWebView
struct iOSWebView_t6F9C3966310654822C871CE0B645D17FF023048A;
// JSCom/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t52CD5CAA203755EC9D6A5193FED056055179D7A6;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Mapbox.Unity.MeshGeneration.Factories.VectorTileFactory/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tD51096156D8090011EDE9879EBADC6CFEC1385C5;
// Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27
struct U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4;
// Vuplex.WebView.iOSWebPlugin/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t54688621AEDC0934BB96EBA50AB1C9FFB275F5F1;
// Vuplex.WebView.iOSWebPlugin/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tA394A0EB1E0822ADAC182BCD5C924E6DC6B9CB76;
// Vuplex.WebView.iOSWebView/<_renderPluginOncePerFrame>d__58
struct U3C_renderPluginOncePerFrameU3Ed__58_tA94517BC082A5B5588B8D4805C1C6A0D8B61B6C9;
// JSCom/<>c__DisplayClass7_0/<<ExcuteJavaScript>b__0>d
struct U3CU3CExcuteJavaScriptU3Eb__0U3Ed_t8457EF3A2FF22012B77DE6D1E145E6D45FF0D03E;

IL2CPP_EXTERN_C RuntimeClass* Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWebView_t2A8AD5915D9A2817DDF17237F2A4BE7704DDACC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Styles_tC2114566EF266EDE02B1538CCED728740517B148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral29B2F8783E410CE10F7BB0B78AEE135CC0B8CF6F;
IL2CPP_EXTERN_C String_t* _stringLiteral7A1C2915FB99314605150EDC61A8759FB6FDA12E;
IL2CPP_EXTERN_C String_t* _stringLiteral930EDD56406E5AF72EE12437B33D92A25014F76C;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mA723CB9DC3CE0FFDE3C69F46483D43DAF59918E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CU3CExcuteJavaScriptU3Eb__0U3Ed_t8457EF3A2FF22012B77DE6D1E145E6D45FF0D03E_m475E2490F947664E79A22992F8C447BBB7B2F461_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mBF00C43ACF732C51807D2918F15796B12003004D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_m078E1276721A44D63CE6F05D94A43B9906E3F728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mCD478719723548C6E12D89305EE208EECF554A10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m88E0826830D6C42C874C280F965582D68A9D5392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD784C4B201AB3443B8E52973D5A141C37DCFC02E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m9408F72BD0D020C6C9E11C3D30F6236635CFA70F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBuildRoutineU3Ed__27_System_Collections_IEnumerator_Reset_m04332478F50334727E80E32D39A2AF9C186EEA34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3C_renderPluginOncePerFrameU3Ed__58_System_Collections_IEnumerator_Reset_mCA2128FC6D77F5A38873919D414484CBD1C43A9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoxelTile_U3CBuildRoutineU3Eb__27_0_m8BC543C8B0F7C0C1348B1261916A5824C7638A62_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Mapbox.Examples.Voxels.VoxelData>
struct  List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1, ____items_1)); }
	inline VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1* get__items_1() const { return ____items_1; }
	inline VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1_StaticFields, ____emptyArray_5)); }
	inline VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.EventArgs
struct  EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// Mapbox.Unity.Map.MapboxDataProperty
struct  MapboxDataProperty_t78D91CB59A6B49D128A7B69F37CC8999C351C89C  : public RuntimeObject
{
public:
	// System.EventHandler Mapbox.Unity.Map.MapboxDataProperty::PropertyHasChanged
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___PropertyHasChanged_0;

public:
	inline static int32_t get_offset_of_PropertyHasChanged_0() { return static_cast<int32_t>(offsetof(MapboxDataProperty_t78D91CB59A6B49D128A7B69F37CC8999C351C89C, ___PropertyHasChanged_0)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_PropertyHasChanged_0() const { return ___PropertyHasChanged_0; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_PropertyHasChanged_0() { return &___PropertyHasChanged_0; }
	inline void set_PropertyHasChanged_0(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___PropertyHasChanged_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyHasChanged_0), (void*)value);
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

// JSCom/<>c__DisplayClass7_0
struct  U3CU3Ec__DisplayClass7_0_t52CD5CAA203755EC9D6A5193FED056055179D7A6  : public RuntimeObject
{
public:
	// JSCom JSCom/<>c__DisplayClass7_0::<>4__this
	JSCom_t405735338C026C27A23A4739D94D75A1261A93FC * ___U3CU3E4__this_0;
	// System.String JSCom/<>c__DisplayClass7_0::myJS
	String_t* ___myJS_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t52CD5CAA203755EC9D6A5193FED056055179D7A6, ___U3CU3E4__this_0)); }
	inline JSCom_t405735338C026C27A23A4739D94D75A1261A93FC * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline JSCom_t405735338C026C27A23A4739D94D75A1261A93FC ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(JSCom_t405735338C026C27A23A4739D94D75A1261A93FC * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_myJS_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t52CD5CAA203755EC9D6A5193FED056055179D7A6, ___myJS_1)); }
	inline String_t* get_myJS_1() const { return ___myJS_1; }
	inline String_t** get_address_of_myJS_1() { return &___myJS_1; }
	inline void set_myJS_1(String_t* value)
	{
		___myJS_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myJS_1), (void*)value);
	}
};


// Mapbox.Unity.MeshGeneration.Factories.VectorTileFactory/<>c__DisplayClass13_0
struct  U3CU3Ec__DisplayClass13_0_tD51096156D8090011EDE9879EBADC6CFEC1385C5  : public RuntimeObject
{
public:
	// Mapbox.Unity.Map.VectorSubLayerProperties Mapbox.Unity.MeshGeneration.Factories.VectorTileFactory/<>c__DisplayClass13_0::subLayer
	VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204 * ___subLayer_0;

public:
	inline static int32_t get_offset_of_subLayer_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_tD51096156D8090011EDE9879EBADC6CFEC1385C5, ___subLayer_0)); }
	inline VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204 * get_subLayer_0() const { return ___subLayer_0; }
	inline VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204 ** get_address_of_subLayer_0() { return &___subLayer_0; }
	inline void set_subLayer_0(VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204 * value)
	{
		___subLayer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subLayer_0), (void*)value);
	}
};


// Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27
struct  U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4  : public RuntimeObject
{
public:
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mapbox.Examples.Voxels.VoxelTile Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::<>4__this
	VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1<Mapbox.Examples.Voxels.VoxelData> Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::<distanceOrderedVoxels>5__1
	List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * ___U3CdistanceOrderedVoxelsU3E5__1_3;
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::<i>5__2
	int32_t ___U3CiU3E5__2_4;
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::<j>5__3
	int32_t ___U3CjU3E5__3_5;
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::<index>5__4
	int32_t ___U3CindexU3E5__4_6;
	// Mapbox.Examples.Voxels.VoxelData Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::<voxel>5__5
	VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310 * ___U3CvoxelU3E5__5_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4, ___U3CU3E4__this_2)); }
	inline VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdistanceOrderedVoxelsU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4, ___U3CdistanceOrderedVoxelsU3E5__1_3)); }
	inline List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * get_U3CdistanceOrderedVoxelsU3E5__1_3() const { return ___U3CdistanceOrderedVoxelsU3E5__1_3; }
	inline List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 ** get_address_of_U3CdistanceOrderedVoxelsU3E5__1_3() { return &___U3CdistanceOrderedVoxelsU3E5__1_3; }
	inline void set_U3CdistanceOrderedVoxelsU3E5__1_3(List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * value)
	{
		___U3CdistanceOrderedVoxelsU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdistanceOrderedVoxelsU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4, ___U3CiU3E5__2_4)); }
	inline int32_t get_U3CiU3E5__2_4() const { return ___U3CiU3E5__2_4; }
	inline int32_t* get_address_of_U3CiU3E5__2_4() { return &___U3CiU3E5__2_4; }
	inline void set_U3CiU3E5__2_4(int32_t value)
	{
		___U3CiU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CjU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4, ___U3CjU3E5__3_5)); }
	inline int32_t get_U3CjU3E5__3_5() const { return ___U3CjU3E5__3_5; }
	inline int32_t* get_address_of_U3CjU3E5__3_5() { return &___U3CjU3E5__3_5; }
	inline void set_U3CjU3E5__3_5(int32_t value)
	{
		___U3CjU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CindexU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4, ___U3CindexU3E5__4_6)); }
	inline int32_t get_U3CindexU3E5__4_6() const { return ___U3CindexU3E5__4_6; }
	inline int32_t* get_address_of_U3CindexU3E5__4_6() { return &___U3CindexU3E5__4_6; }
	inline void set_U3CindexU3E5__4_6(int32_t value)
	{
		___U3CindexU3E5__4_6 = value;
	}

	inline static int32_t get_offset_of_U3CvoxelU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4, ___U3CvoxelU3E5__5_7)); }
	inline VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310 * get_U3CvoxelU3E5__5_7() const { return ___U3CvoxelU3E5__5_7; }
	inline VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310 ** get_address_of_U3CvoxelU3E5__5_7() { return &___U3CvoxelU3E5__5_7; }
	inline void set_U3CvoxelU3E5__5_7(VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310 * value)
	{
		___U3CvoxelU3E5__5_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvoxelU3E5__5_7), (void*)value);
	}
};


// Vuplex.WebView.iOSWebPlugin/<>c__DisplayClass6_0
struct  U3CU3Ec__DisplayClass6_0_t54688621AEDC0934BB96EBA50AB1C9FFB275F5F1  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.Material> Vuplex.WebView.iOSWebPlugin/<>c__DisplayClass6_0::callback
	Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t54688621AEDC0934BB96EBA50AB1C9FFB275F5F1, ___callback_0)); }
	inline Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// Vuplex.WebView.iOSWebPlugin/<>c__DisplayClass7_0
struct  U3CU3Ec__DisplayClass7_0_tA394A0EB1E0822ADAC182BCD5C924E6DC6B9CB76  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.Material> Vuplex.WebView.iOSWebPlugin/<>c__DisplayClass7_0::callback
	Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_tA394A0EB1E0822ADAC182BCD5C924E6DC6B9CB76, ___callback_0)); }
	inline Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// Vuplex.WebView.iOSWebView/<_renderPluginOncePerFrame>d__58
struct  U3C_renderPluginOncePerFrameU3Ed__58_tA94517BC082A5B5588B8D4805C1C6A0D8B61B6C9  : public RuntimeObject
{
public:
	// System.Int32 Vuplex.WebView.iOSWebView/<_renderPluginOncePerFrame>d__58::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Vuplex.WebView.iOSWebView/<_renderPluginOncePerFrame>d__58::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Vuplex.WebView.iOSWebView Vuplex.WebView.iOSWebView/<_renderPluginOncePerFrame>d__58::<>4__this
	iOSWebView_t6F9C3966310654822C871CE0B645D17FF023048A * ___U3CU3E4__this_2;
	// System.Int32 Vuplex.WebView.iOSWebView/<_renderPluginOncePerFrame>d__58::<pointerId>5__1
	int32_t ___U3CpointerIdU3E5__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3C_renderPluginOncePerFrameU3Ed__58_tA94517BC082A5B5588B8D4805C1C6A0D8B61B6C9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3C_renderPluginOncePerFrameU3Ed__58_tA94517BC082A5B5588B8D4805C1C6A0D8B61B6C9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3C_renderPluginOncePerFrameU3Ed__58_tA94517BC082A5B5588B8D4805C1C6A0D8B61B6C9, ___U3CU3E4__this_2)); }
	inline iOSWebView_t6F9C3966310654822C871CE0B645D17FF023048A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline iOSWebView_t6F9C3966310654822C871CE0B645D17FF023048A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(iOSWebView_t6F9C3966310654822C871CE0B645D17FF023048A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerIdU3E5__1_3() { return static_cast<int32_t>(offsetof(U3C_renderPluginOncePerFrameU3Ed__58_tA94517BC082A5B5588B8D4805C1C6A0D8B61B6C9, ___U3CpointerIdU3E5__1_3)); }
	inline int32_t get_U3CpointerIdU3E5__1_3() const { return ___U3CpointerIdU3E5__1_3; }
	inline int32_t* get_address_of_U3CpointerIdU3E5__1_3() { return &___U3CpointerIdU3E5__1_3; }
	inline void set_U3CpointerIdU3E5__1_3(int32_t value)
	{
		___U3CpointerIdU3E5__1_3 = value;
	}
};


// Mapbox.Unity.Constants/GUI/Styles
struct  Styles_tC2114566EF266EDE02B1538CCED728740517B148  : public RuntimeObject
{
public:

public:
};

struct Styles_tC2114566EF266EDE02B1538CCED728740517B148_StaticFields
{
public:
	// UnityEngine.GUIStyle Mapbox.Unity.Constants/GUI/Styles::EDITOR_NOTE_STYLE
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___EDITOR_NOTE_STYLE_0;
	// UnityEngine.GUIStyle Mapbox.Unity.Constants/GUI/Styles::EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1;
	// UnityEngine.GUIStyle Mapbox.Unity.Constants/GUI/Styles::EDITOR_TEXTURE_THUMBNAIL_STYLE
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___EDITOR_TEXTURE_THUMBNAIL_STYLE_2;

public:
	inline static int32_t get_offset_of_EDITOR_NOTE_STYLE_0() { return static_cast<int32_t>(offsetof(Styles_tC2114566EF266EDE02B1538CCED728740517B148_StaticFields, ___EDITOR_NOTE_STYLE_0)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_EDITOR_NOTE_STYLE_0() const { return ___EDITOR_NOTE_STYLE_0; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_EDITOR_NOTE_STYLE_0() { return &___EDITOR_NOTE_STYLE_0; }
	inline void set_EDITOR_NOTE_STYLE_0(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___EDITOR_NOTE_STYLE_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EDITOR_NOTE_STYLE_0), (void*)value);
	}

	inline static int32_t get_offset_of_EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1() { return static_cast<int32_t>(offsetof(Styles_tC2114566EF266EDE02B1538CCED728740517B148_StaticFields, ___EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1() const { return ___EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1() { return &___EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1; }
	inline void set_EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1), (void*)value);
	}

	inline static int32_t get_offset_of_EDITOR_TEXTURE_THUMBNAIL_STYLE_2() { return static_cast<int32_t>(offsetof(Styles_tC2114566EF266EDE02B1538CCED728740517B148_StaticFields, ___EDITOR_TEXTURE_THUMBNAIL_STYLE_2)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_EDITOR_TEXTURE_THUMBNAIL_STYLE_2() const { return ___EDITOR_TEXTURE_THUMBNAIL_STYLE_2; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_EDITOR_TEXTURE_THUMBNAIL_STYLE_2() { return &___EDITOR_TEXTURE_THUMBNAIL_STYLE_2; }
	inline void set_EDITOR_TEXTURE_THUMBNAIL_STYLE_2(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___EDITOR_TEXTURE_THUMBNAIL_STYLE_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EDITOR_TEXTURE_THUMBNAIL_STYLE_2), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct  TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct  TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D, ___m_task_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// Mapbox.Unity.Map.LayerProperties
struct  LayerProperties_tB12705F078F4E8DAD34A357CB20A8B233984C91F  : public MapboxDataProperty_t78D91CB59A6B49D128A7B69F37CC8999C351C89C
{
public:

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


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
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


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// Vuplex.WebView.WebViewOptions
struct  WebViewOptions_t13C9D028049632B6DBB08A44249BB1789CEA2208 
{
public:
	// System.Boolean Vuplex.WebView.WebViewOptions::clickWithoutStealingFocus
	bool ___clickWithoutStealingFocus_0;
	// System.Boolean Vuplex.WebView.WebViewOptions::disableVideo
	bool ___disableVideo_1;
	// Vuplex.WebView.WebPluginType[] Vuplex.WebView.WebViewOptions::preferredPlugins
	WebPluginTypeU5BU5D_t78DEF9244FB9E85487E818A8B75F44B014D48141* ___preferredPlugins_2;

public:
	inline static int32_t get_offset_of_clickWithoutStealingFocus_0() { return static_cast<int32_t>(offsetof(WebViewOptions_t13C9D028049632B6DBB08A44249BB1789CEA2208, ___clickWithoutStealingFocus_0)); }
	inline bool get_clickWithoutStealingFocus_0() const { return ___clickWithoutStealingFocus_0; }
	inline bool* get_address_of_clickWithoutStealingFocus_0() { return &___clickWithoutStealingFocus_0; }
	inline void set_clickWithoutStealingFocus_0(bool value)
	{
		___clickWithoutStealingFocus_0 = value;
	}

	inline static int32_t get_offset_of_disableVideo_1() { return static_cast<int32_t>(offsetof(WebViewOptions_t13C9D028049632B6DBB08A44249BB1789CEA2208, ___disableVideo_1)); }
	inline bool get_disableVideo_1() const { return ___disableVideo_1; }
	inline bool* get_address_of_disableVideo_1() { return &___disableVideo_1; }
	inline void set_disableVideo_1(bool value)
	{
		___disableVideo_1 = value;
	}

	inline static int32_t get_offset_of_preferredPlugins_2() { return static_cast<int32_t>(offsetof(WebViewOptions_t13C9D028049632B6DBB08A44249BB1789CEA2208, ___preferredPlugins_2)); }
	inline WebPluginTypeU5BU5D_t78DEF9244FB9E85487E818A8B75F44B014D48141* get_preferredPlugins_2() const { return ___preferredPlugins_2; }
	inline WebPluginTypeU5BU5D_t78DEF9244FB9E85487E818A8B75F44B014D48141** get_address_of_preferredPlugins_2() { return &___preferredPlugins_2; }
	inline void set_preferredPlugins_2(WebPluginTypeU5BU5D_t78DEF9244FB9E85487E818A8B75F44B014D48141* value)
	{
		___preferredPlugins_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preferredPlugins_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Vuplex.WebView.WebViewOptions
struct WebViewOptions_t13C9D028049632B6DBB08A44249BB1789CEA2208_marshaled_pinvoke
{
	int32_t ___clickWithoutStealingFocus_0;
	int32_t ___disableVideo_1;
	int32_t* ___preferredPlugins_2;
};
// Native definition for COM marshalling of Vuplex.WebView.WebViewOptions
struct WebViewOptions_t13C9D028049632B6DBB08A44249BB1789CEA2208_marshaled_com
{
	int32_t ___clickWithoutStealingFocus_0;
	int32_t ___disableVideo_1;
	int32_t* ___preferredPlugins_2;
};

// MessageClass/DataContent
struct  DataContent_tA8C17A832CB9D081B79A48A284BF7155C6CCE386 
{
public:
	// System.String MessageClass/DataContent::layer
	String_t* ___layer_0;
	// System.Single MessageClass/DataContent::lat
	float ___lat_1;
	// System.Single MessageClass/DataContent::lon
	float ___lon_2;

public:
	inline static int32_t get_offset_of_layer_0() { return static_cast<int32_t>(offsetof(DataContent_tA8C17A832CB9D081B79A48A284BF7155C6CCE386, ___layer_0)); }
	inline String_t* get_layer_0() const { return ___layer_0; }
	inline String_t** get_address_of_layer_0() { return &___layer_0; }
	inline void set_layer_0(String_t* value)
	{
		___layer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layer_0), (void*)value);
	}

	inline static int32_t get_offset_of_lat_1() { return static_cast<int32_t>(offsetof(DataContent_tA8C17A832CB9D081B79A48A284BF7155C6CCE386, ___lat_1)); }
	inline float get_lat_1() const { return ___lat_1; }
	inline float* get_address_of_lat_1() { return &___lat_1; }
	inline void set_lat_1(float value)
	{
		___lat_1 = value;
	}

	inline static int32_t get_offset_of_lon_2() { return static_cast<int32_t>(offsetof(DataContent_tA8C17A832CB9D081B79A48A284BF7155C6CCE386, ___lon_2)); }
	inline float get_lon_2() const { return ___lon_2; }
	inline float* get_address_of_lon_2() { return &___lon_2; }
	inline void set_lon_2(float value)
	{
		___lon_2 = value;
	}
};

// Native definition for P/Invoke marshalling of MessageClass/DataContent
struct DataContent_tA8C17A832CB9D081B79A48A284BF7155C6CCE386_marshaled_pinvoke
{
	char* ___layer_0;
	float ___lat_1;
	float ___lon_2;
};
// Native definition for COM marshalling of MessageClass/DataContent
struct DataContent_tA8C17A832CB9D081B79A48A284BF7155C6CCE386_marshaled_com
{
	Il2CppChar* ___layer_0;
	float ___lat_1;
	float ___lon_2;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct  AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
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

// Vuplex.WebView.DragMode
struct  DragMode_t6F342CE84E18CA9EAFA8568C0AA9EA3F794C8586 
{
public:
	// System.Int32 Vuplex.WebView.DragMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DragMode_t6F342CE84E18CA9EAFA8568C0AA9EA3F794C8586, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.GUIStyleState
struct  GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_SourceStyle_1)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com* ___m_SourceStyle_1;
};

// UnityEngine.ImagePosition
struct  ImagePosition_t3DBA97C0793136D349135BC5E6814CFB2BE5A43A 
{
public:
	// System.Int32 UnityEngine.ImagePosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImagePosition_t3DBA97C0793136D349135BC5E6814CFB2BE5A43A, ___value___2)); }
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

// Mapbox.Unity.MeshGeneration.Modifiers.PositionTargetType
struct  PositionTargetType_tF4D1F562DEF873FC0511FA3F4A6932D59CF7F7F7 
{
public:
	// System.Int32 Mapbox.Unity.MeshGeneration.Modifiers.PositionTargetType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PositionTargetType_tF4D1F562DEF873FC0511FA3F4A6932D59CF7F7F7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.Unity.Map.PresetFeatureType
struct  PresetFeatureType_tEE0AF9985708350C675904C915B23D0CF877C0A6 
{
public:
	// System.Int32 Mapbox.Unity.Map.PresetFeatureType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PresetFeatureType_tEE0AF9985708350C675904C915B23D0CF877C0A6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuplex.WebView.ProgressChangeType
struct  ProgressChangeType_t0E0448A6A514CB2C194DC2AC13BDF871131B8830 
{
public:
	// System.Int32 Vuplex.WebView.ProgressChangeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProgressChangeType_t0E0448A6A514CB2C194DC2AC13BDF871131B8830, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RectOffset
struct  RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// System.Threading.Tasks.Task
struct  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// Mapbox.Examples.Voxels.VoxelData
struct  VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Mapbox.Examples.Voxels.VoxelData::Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Position_0;
	// UnityEngine.GameObject Mapbox.Examples.Voxels.VoxelData::Prefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Prefab_1;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310, ___Position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Position_0() const { return ___Position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Prefab_1() { return static_cast<int32_t>(offsetof(VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310, ___Prefab_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Prefab_1() const { return ___Prefab_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Prefab_1() { return &___Prefab_1; }
	inline void set_Prefab_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Prefab_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Prefab_1), (void*)value);
	}
};


// MessageClass/RecieveJSON
struct  RecieveJSON_t97DBC6F4547780CC3BCDB594AF98BF13F0662C4D 
{
public:
	// System.String MessageClass/RecieveJSON::type
	String_t* ___type_0;
	// MessageClass/DataContent MessageClass/RecieveJSON::data
	DataContent_tA8C17A832CB9D081B79A48A284BF7155C6CCE386  ___data_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(RecieveJSON_t97DBC6F4547780CC3BCDB594AF98BF13F0662C4D, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(RecieveJSON_t97DBC6F4547780CC3BCDB594AF98BF13F0662C4D, ___data_1)); }
	inline DataContent_tA8C17A832CB9D081B79A48A284BF7155C6CCE386  get_data_1() const { return ___data_1; }
	inline DataContent_tA8C17A832CB9D081B79A48A284BF7155C6CCE386 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(DataContent_tA8C17A832CB9D081B79A48A284BF7155C6CCE386  value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_1))->___layer_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of MessageClass/RecieveJSON
struct RecieveJSON_t97DBC6F4547780CC3BCDB594AF98BF13F0662C4D_marshaled_pinvoke
{
	char* ___type_0;
	DataContent_tA8C17A832CB9D081B79A48A284BF7155C6CCE386_marshaled_pinvoke ___data_1;
};
// Native definition for COM marshalling of MessageClass/RecieveJSON
struct RecieveJSON_t97DBC6F4547780CC3BCDB594AF98BF13F0662C4D_marshaled_com
{
	Il2CppChar* ___type_0;
	DataContent_tA8C17A832CB9D081B79A48A284BF7155C6CCE386_marshaled_com ___data_1;
};

// Mapbox.Unity.Constants/GUI/Colors
struct  Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD  : public RuntimeObject
{
public:

public:
};

struct Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields
{
public:
	// UnityEngine.Color Mapbox.Unity.Constants/GUI/Colors::EDITOR_TEXT_COLOR
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___EDITOR_TEXT_COLOR_0;
	// UnityEngine.Color Mapbox.Unity.Constants/GUI/Colors::EDITOR_NOTE_COLOR
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___EDITOR_NOTE_COLOR_1;
	// UnityEngine.Color Mapbox.Unity.Constants/GUI/Colors::EDITOR_FEATURE_DEFAULT_COLOR
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___EDITOR_FEATURE_DEFAULT_COLOR_2;

public:
	inline static int32_t get_offset_of_EDITOR_TEXT_COLOR_0() { return static_cast<int32_t>(offsetof(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields, ___EDITOR_TEXT_COLOR_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_EDITOR_TEXT_COLOR_0() const { return ___EDITOR_TEXT_COLOR_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_EDITOR_TEXT_COLOR_0() { return &___EDITOR_TEXT_COLOR_0; }
	inline void set_EDITOR_TEXT_COLOR_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___EDITOR_TEXT_COLOR_0 = value;
	}

	inline static int32_t get_offset_of_EDITOR_NOTE_COLOR_1() { return static_cast<int32_t>(offsetof(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields, ___EDITOR_NOTE_COLOR_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_EDITOR_NOTE_COLOR_1() const { return ___EDITOR_NOTE_COLOR_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_EDITOR_NOTE_COLOR_1() { return &___EDITOR_NOTE_COLOR_1; }
	inline void set_EDITOR_NOTE_COLOR_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___EDITOR_NOTE_COLOR_1 = value;
	}

	inline static int32_t get_offset_of_EDITOR_FEATURE_DEFAULT_COLOR_2() { return static_cast<int32_t>(offsetof(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields, ___EDITOR_FEATURE_DEFAULT_COLOR_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_EDITOR_FEATURE_DEFAULT_COLOR_2() const { return ___EDITOR_FEATURE_DEFAULT_COLOR_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_EDITOR_FEATURE_DEFAULT_COLOR_2() { return &___EDITOR_FEATURE_DEFAULT_COLOR_2; }
	inline void set_EDITOR_FEATURE_DEFAULT_COLOR_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___EDITOR_FEATURE_DEFAULT_COLOR_2 = value;
	}
};


// System.Threading.Tasks.Task`1<System.String>
struct  Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3, ___m_result_40)); }
	inline String_t* get_m_result_40() const { return ___m_result_40; }
	inline String_t** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(String_t* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GUIStyle
struct  GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// Vuplex.WebView.ProgressChangedEventArgs
struct  ProgressChangedEventArgs_t1E932488A49A8E10A0278FD4E62A82B884BEB11B  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.Single Vuplex.WebView.ProgressChangedEventArgs::Progress
	float ___Progress_1;
	// Vuplex.WebView.ProgressChangeType Vuplex.WebView.ProgressChangedEventArgs::Type
	int32_t ___Type_2;

public:
	inline static int32_t get_offset_of_Progress_1() { return static_cast<int32_t>(offsetof(ProgressChangedEventArgs_t1E932488A49A8E10A0278FD4E62A82B884BEB11B, ___Progress_1)); }
	inline float get_Progress_1() const { return ___Progress_1; }
	inline float* get_address_of_Progress_1() { return &___Progress_1; }
	inline void set_Progress_1(float value)
	{
		___Progress_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(ProgressChangedEventArgs_t1E932488A49A8E10A0278FD4E62A82B884BEB11B, ___Type_2)); }
	inline int32_t get_Type_2() const { return ___Type_2; }
	inline int32_t* get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(int32_t value)
	{
		___Type_2 = value;
	}
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

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// Mapbox.Unity.Map.VectorSubLayerProperties
struct  VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204  : public LayerProperties_tB12705F078F4E8DAD34A357CB20A8B233984C91F
{
public:
	// Mapbox.Unity.SourceLayers.SubLayerModeling Mapbox.Unity.Map.VectorSubLayerProperties::modeling
	SubLayerModeling_t792118EBCD8BBA1FCBB250897BF7C7A3E7DA1219 * ___modeling_1;
	// Mapbox.Unity.Map.SubLayerBehaviorModifiers Mapbox.Unity.Map.VectorSubLayerProperties::behaviorModifiers
	SubLayerBehaviorModifiers_tBA0933937A41D361FEEEF30259FB14B6ED55B4FE * ___behaviorModifiers_2;
	// Mapbox.Unity.Map.CoreVectorLayerProperties Mapbox.Unity.Map.VectorSubLayerProperties::coreOptions
	CoreVectorLayerProperties_t66F41FDEEDFACE93E9033E98ABB3F67275387BB9 * ___coreOptions_3;
	// Mapbox.Unity.Map.LineGeometryOptions Mapbox.Unity.Map.VectorSubLayerProperties::lineGeometryOptions
	LineGeometryOptions_tE1BF919C7A117501C6A118D3621E92166FAB0899 * ___lineGeometryOptions_4;
	// Mapbox.Unity.Map.VectorFilterOptions Mapbox.Unity.Map.VectorSubLayerProperties::filterOptions
	VectorFilterOptions_t8F2D8B65EE82F8320A181AFFFF95271748A088B2 * ___filterOptions_5;
	// Mapbox.Unity.Map.GeometryExtrusionOptions Mapbox.Unity.Map.VectorSubLayerProperties::extrusionOptions
	GeometryExtrusionOptions_t78960005A491E7B5D6CC93BD9579FAB2B07F7E76 * ___extrusionOptions_6;
	// Mapbox.Unity.Map.ColliderOptions Mapbox.Unity.Map.VectorSubLayerProperties::colliderOptions
	ColliderOptions_t42E870C736B3D06B1A8D44CB2E96B1C4BDA888AB * ___colliderOptions_7;
	// Mapbox.Unity.Map.GeometryMaterialOptions Mapbox.Unity.Map.VectorSubLayerProperties::materialOptions
	GeometryMaterialOptions_t9651B879AFFC3ACAD4C1F82DC787B432AF1788CB * ___materialOptions_8;
	// Mapbox.Unity.Map.LayerPerformanceOptions Mapbox.Unity.Map.VectorSubLayerProperties::performanceOptions
	LayerPerformanceOptions_t3BF47B0C60085EA4DF7D68C764FEC250920FBC4A * ___performanceOptions_9;
	// System.Boolean Mapbox.Unity.Map.VectorSubLayerProperties::honorBuildingIdSetting
	bool ___honorBuildingIdSetting_10;
	// System.Boolean Mapbox.Unity.Map.VectorSubLayerProperties::buildingsWithUniqueIds
	bool ___buildingsWithUniqueIds_11;
	// Mapbox.Unity.MeshGeneration.Modifiers.PositionTargetType Mapbox.Unity.Map.VectorSubLayerProperties::moveFeaturePositionTo
	int32_t ___moveFeaturePositionTo_12;
	// System.Collections.Generic.List`1<Mapbox.Unity.MeshGeneration.Modifiers.MeshModifier> Mapbox.Unity.Map.VectorSubLayerProperties::MeshModifiers
	List_1_t3A82E12604FB4C6AFFE2FC6A0DD0D4A38EEF0A6D * ___MeshModifiers_13;
	// System.Collections.Generic.List`1<Mapbox.Unity.MeshGeneration.Modifiers.GameObjectModifier> Mapbox.Unity.Map.VectorSubLayerProperties::GoModifiers
	List_1_tFC175C8200E774CBC616C7E9E4EE155A7D746733 * ___GoModifiers_14;
	// Mapbox.Unity.Map.PresetFeatureType Mapbox.Unity.Map.VectorSubLayerProperties::presetFeatureType
	int32_t ___presetFeatureType_15;
	// System.Int32 Mapbox.Unity.Map.VectorSubLayerProperties::_maskValue
	int32_t ____maskValue_16;
	// System.String Mapbox.Unity.Map.VectorSubLayerProperties::selectedTypes
	String_t* ___selectedTypes_17;

public:
	inline static int32_t get_offset_of_modeling_1() { return static_cast<int32_t>(offsetof(VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204, ___modeling_1)); }
	inline SubLayerModeling_t792118EBCD8BBA1FCBB250897BF7C7A3E7DA1219 * get_modeling_1() const { return ___modeling_1; }
	inline SubLayerModeling_t792118EBCD8BBA1FCBB250897BF7C7A3E7DA1219 ** get_address_of_modeling_1() { return &___modeling_1; }
	inline void set_modeling_1(SubLayerModeling_t792118EBCD8BBA1FCBB250897BF7C7A3E7DA1219 * value)
	{
		___modeling_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modeling_1), (void*)value);
	}

	inline static int32_t get_offset_of_behaviorModifiers_2() { return static_cast<int32_t>(offsetof(VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204, ___behaviorModifiers_2)); }
	inline SubLayerBehaviorModifiers_tBA0933937A41D361FEEEF30259FB14B6ED55B4FE * get_behaviorModifiers_2() const { return ___behaviorModifiers_2; }
	inline SubLayerBehaviorModifiers_tBA0933937A41D361FEEEF30259FB14B6ED55B4FE ** get_address_of_behaviorModifiers_2() { return &___behaviorModifiers_2; }
	inline void set_behaviorModifiers_2(SubLayerBehaviorModifiers_tBA0933937A41D361FEEEF30259FB14B6ED55B4FE * value)
	{
		___behaviorModifiers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___behaviorModifiers_2), (void*)value);
	}

	inline static int32_t get_offset_of_coreOptions_3() { return static_cast<int32_t>(offsetof(VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204, ___coreOptions_3)); }
	inline CoreVectorLayerProperties_t66F41FDEEDFACE93E9033E98ABB3F67275387BB9 * get_coreOptions_3() const { return ___coreOptions_3; }
	inline CoreVectorLayerProperties_t66F41FDEEDFACE93E9033E98ABB3F67275387BB9 ** get_address_of_coreOptions_3() { return &___coreOptions_3; }
	inline void set_coreOptions_3(CoreVectorLayerProperties_t66F41FDEEDFACE93E9033E98ABB3F67275387BB9 * value)
	{
		___coreOptions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coreOptions_3), (void*)value);
	}

	inline static int32_t get_offset_of_lineGeometryOptions_4() { return static_cast<int32_t>(offsetof(VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204, ___lineGeometryOptions_4)); }
	inline LineGeometryOptions_tE1BF919C7A117501C6A118D3621E92166FAB0899 * get_lineGeometryOptions_4() const { return ___lineGeometryOptions_4; }
	inline LineGeometryOptions_tE1BF919C7A117501C6A118D3621E92166FAB0899 ** get_address_of_lineGeometryOptions_4() { return &___lineGeometryOptions_4; }
	inline void set_lineGeometryOptions_4(LineGeometryOptions_tE1BF919C7A117501C6A118D3621E92166FAB0899 * value)
	{
		___lineGeometryOptions_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineGeometryOptions_4), (void*)value);
	}

	inline static int32_t get_offset_of_filterOptions_5() { return static_cast<int32_t>(offsetof(VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204, ___filterOptions_5)); }
	inline VectorFilterOptions_t8F2D8B65EE82F8320A181AFFFF95271748A088B2 * get_filterOptions_5() const { return ___filterOptions_5; }
	inline VectorFilterOptions_t8F2D8B65EE82F8320A181AFFFF95271748A088B2 ** get_address_of_filterOptions_5() { return &___filterOptions_5; }
	inline void set_filterOptions_5(VectorFilterOptions_t8F2D8B65EE82F8320A181AFFFF95271748A088B2 * value)
	{
		___filterOptions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filterOptions_5), (void*)value);
	}

	inline static int32_t get_offset_of_extrusionOptions_6() { return static_cast<int32_t>(offsetof(VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204, ___extrusionOptions_6)); }
	inline GeometryExtrusionOptions_t78960005A491E7B5D6CC93BD9579FAB2B07F7E76 * get_extrusionOptions_6() const { return ___extrusionOptions_6; }
	inline GeometryExtrusionOptions_t78960005A491E7B5D6CC93BD9579FAB2B07F7E76 ** get_address_of_extrusionOptions_6() { return &___extrusionOptions_6; }
	inline void set_extrusionOptions_6(GeometryExtrusionOptions_t78960005A491E7B5D6CC93BD9579FAB2B07F7E76 * value)
	{
		___extrusionOptions_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extrusionOptions_6), (void*)value);
	}

	inline static int32_t get_offset_of_colliderOptions_7() { return static_cast<int32_t>(offsetof(VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204, ___colliderOptions_7)); }
	inline ColliderOptions_t42E870C736B3D06B1A8D44CB2E96B1C4BDA888AB * get_colliderOptions_7() const { return ___colliderOptions_7; }
	inline ColliderOptions_t42E870C736B3D06B1A8D44CB2E96B1C4BDA888AB ** get_address_of_colliderOptions_7() { return &___colliderOptions_7; }
	inline void set_colliderOptions_7(ColliderOptions_t42E870C736B3D06B1A8D44CB2E96B1C4BDA888AB * value)
	{
		___colliderOptions_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colliderOptions_7), (void*)value);
	}

	inline static int32_t get_offset_of_materialOptions_8() { return static_cast<int32_t>(offsetof(VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204, ___materialOptions_8)); }
	inline GeometryMaterialOptions_t9651B879AFFC3ACAD4C1F82DC787B432AF1788CB * get_materialOptions_8() const { return ___materialOptions_8; }
	inline GeometryMaterialOptions_t9651B879AFFC3ACAD4C1F82DC787B432AF1788CB ** get_address_of_materialOptions_8() { return &___materialOptions_8; }
	inline void set_materialOptions_8(GeometryMaterialOptions_t9651B879AFFC3ACAD4C1F82DC787B432AF1788CB * value)
	{
		___materialOptions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materialOptions_8), (void*)value);
	}

	inline static int32_t get_offset_of_performanceOptions_9() { return static_cast<int32_t>(offsetof(VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204, ___performanceOptions_9)); }
	inline LayerPerformanceOptions_t3BF47B0C60085EA4DF7D68C764FEC250920FBC4A * get_performanceOptions_9() const { return ___performanceOptions_9; }
	inline LayerPerformanceOptions_t3BF47B0C60085EA4DF7D68C764FEC250920FBC4A ** get_address_of_performanceOptions_9() { return &___performanceOptions_9; }
	inline void set_performanceOptions_9(LayerPerformanceOptions_t3BF47B0C60085EA4DF7D68C764FEC250920FBC4A * value)
	{
		___performanceOptions_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___performanceOptions_9), (void*)value);
	}

	inline static int32_t get_offset_of_honorBuildingIdSetting_10() { return static_cast<int32_t>(offsetof(VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204, ___honorBuildingIdSetting_10)); }
	inline bool get_honorBuildingIdSetting_10() const { return ___honorBuildingIdSetting_10; }
	inline bool* get_address_of_honorBuildingIdSetting_10() { return &___honorBuildingIdSetting_10; }
	inline void set_honorBuildingIdSetting_10(bool value)
	{
		___honorBuildingIdSetting_10 = value;
	}

	inline static int32_t get_offset_of_buildingsWithUniqueIds_11() { return static_cast<int32_t>(offsetof(VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204, ___buildingsWithUniqueIds_11)); }
	inline bool get_buildingsWithUniqueIds_11() const { return ___buildingsWithUniqueIds_11; }
	inline bool* get_address_of_buildingsWithUniqueIds_11() { return &___buildingsWithUniqueIds_11; }
	inline void set_buildingsWithUniqueIds_11(bool value)
	{
		___buildingsWithUniqueIds_11 = value;
	}

	inline static int32_t get_offset_of_moveFeaturePositionTo_12() { return static_cast<int32_t>(offsetof(VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204, ___moveFeaturePositionTo_12)); }
	inline int32_t get_moveFeaturePositionTo_12() const { return ___moveFeaturePositionTo_12; }
	inline int32_t* get_address_of_moveFeaturePositionTo_12() { return &___moveFeaturePositionTo_12; }
	inline void set_moveFeaturePositionTo_12(int32_t value)
	{
		___moveFeaturePositionTo_12 = value;
	}

	inline static int32_t get_offset_of_MeshModifiers_13() { return static_cast<int32_t>(offsetof(VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204, ___MeshModifiers_13)); }
	inline List_1_t3A82E12604FB4C6AFFE2FC6A0DD0D4A38EEF0A6D * get_MeshModifiers_13() const { return ___MeshModifiers_13; }
	inline List_1_t3A82E12604FB4C6AFFE2FC6A0DD0D4A38EEF0A6D ** get_address_of_MeshModifiers_13() { return &___MeshModifiers_13; }
	inline void set_MeshModifiers_13(List_1_t3A82E12604FB4C6AFFE2FC6A0DD0D4A38EEF0A6D * value)
	{
		___MeshModifiers_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MeshModifiers_13), (void*)value);
	}

	inline static int32_t get_offset_of_GoModifiers_14() { return static_cast<int32_t>(offsetof(VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204, ___GoModifiers_14)); }
	inline List_1_tFC175C8200E774CBC616C7E9E4EE155A7D746733 * get_GoModifiers_14() const { return ___GoModifiers_14; }
	inline List_1_tFC175C8200E774CBC616C7E9E4EE155A7D746733 ** get_address_of_GoModifiers_14() { return &___GoModifiers_14; }
	inline void set_GoModifiers_14(List_1_tFC175C8200E774CBC616C7E9E4EE155A7D746733 * value)
	{
		___GoModifiers_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GoModifiers_14), (void*)value);
	}

	inline static int32_t get_offset_of_presetFeatureType_15() { return static_cast<int32_t>(offsetof(VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204, ___presetFeatureType_15)); }
	inline int32_t get_presetFeatureType_15() const { return ___presetFeatureType_15; }
	inline int32_t* get_address_of_presetFeatureType_15() { return &___presetFeatureType_15; }
	inline void set_presetFeatureType_15(int32_t value)
	{
		___presetFeatureType_15 = value;
	}

	inline static int32_t get_offset_of__maskValue_16() { return static_cast<int32_t>(offsetof(VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204, ____maskValue_16)); }
	inline int32_t get__maskValue_16() const { return ____maskValue_16; }
	inline int32_t* get_address_of__maskValue_16() { return &____maskValue_16; }
	inline void set__maskValue_16(int32_t value)
	{
		____maskValue_16 = value;
	}

	inline static int32_t get_offset_of_selectedTypes_17() { return static_cast<int32_t>(offsetof(VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204, ___selectedTypes_17)); }
	inline String_t* get_selectedTypes_17() const { return ___selectedTypes_17; }
	inline String_t** get_address_of_selectedTypes_17() { return &___selectedTypes_17; }
	inline void set_selectedTypes_17(String_t* value)
	{
		___selectedTypes_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedTypes_17), (void*)value);
	}
};


// JSCom/<>c__DisplayClass7_0/<<ExcuteJavaScript>b__0>d
struct  U3CU3CExcuteJavaScriptU3Eb__0U3Ed_t8457EF3A2FF22012B77DE6D1E145E6D45FF0D03E  : public RuntimeObject
{
public:
	// System.Int32 JSCom/<>c__DisplayClass7_0/<<ExcuteJavaScript>b__0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder JSCom/<>c__DisplayClass7_0/<<ExcuteJavaScript>b__0>d::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// System.Object JSCom/<>c__DisplayClass7_0/<<ExcuteJavaScript>b__0>d::sender
	RuntimeObject * ___sender_2;
	// Vuplex.WebView.ProgressChangedEventArgs JSCom/<>c__DisplayClass7_0/<<ExcuteJavaScript>b__0>d::eventArgs
	ProgressChangedEventArgs_t1E932488A49A8E10A0278FD4E62A82B884BEB11B * ___eventArgs_3;
	// JSCom/<>c__DisplayClass7_0 JSCom/<>c__DisplayClass7_0/<<ExcuteJavaScript>b__0>d::<>4__this
	U3CU3Ec__DisplayClass7_0_t52CD5CAA203755EC9D6A5193FED056055179D7A6 * ___U3CU3E4__this_4;
	// System.String JSCom/<>c__DisplayClass7_0/<<ExcuteJavaScript>b__0>d::<headerText>5__1
	String_t* ___U3CheaderTextU3E5__1_5;
	// System.String JSCom/<>c__DisplayClass7_0/<<ExcuteJavaScript>b__0>d::<>s__2
	String_t* ___U3CU3Es__2_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> JSCom/<>c__DisplayClass7_0/<<ExcuteJavaScript>b__0>d::<>u__1
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  ___U3CU3Eu__1_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CExcuteJavaScriptU3Eb__0U3Ed_t8457EF3A2FF22012B77DE6D1E145E6D45FF0D03E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CExcuteJavaScriptU3Eb__0U3Ed_t8457EF3A2FF22012B77DE6D1E145E6D45FF0D03E, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sender_2() { return static_cast<int32_t>(offsetof(U3CU3CExcuteJavaScriptU3Eb__0U3Ed_t8457EF3A2FF22012B77DE6D1E145E6D45FF0D03E, ___sender_2)); }
	inline RuntimeObject * get_sender_2() const { return ___sender_2; }
	inline RuntimeObject ** get_address_of_sender_2() { return &___sender_2; }
	inline void set_sender_2(RuntimeObject * value)
	{
		___sender_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sender_2), (void*)value);
	}

	inline static int32_t get_offset_of_eventArgs_3() { return static_cast<int32_t>(offsetof(U3CU3CExcuteJavaScriptU3Eb__0U3Ed_t8457EF3A2FF22012B77DE6D1E145E6D45FF0D03E, ___eventArgs_3)); }
	inline ProgressChangedEventArgs_t1E932488A49A8E10A0278FD4E62A82B884BEB11B * get_eventArgs_3() const { return ___eventArgs_3; }
	inline ProgressChangedEventArgs_t1E932488A49A8E10A0278FD4E62A82B884BEB11B ** get_address_of_eventArgs_3() { return &___eventArgs_3; }
	inline void set_eventArgs_3(ProgressChangedEventArgs_t1E932488A49A8E10A0278FD4E62A82B884BEB11B * value)
	{
		___eventArgs_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventArgs_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CU3CExcuteJavaScriptU3Eb__0U3Ed_t8457EF3A2FF22012B77DE6D1E145E6D45FF0D03E, ___U3CU3E4__this_4)); }
	inline U3CU3Ec__DisplayClass7_0_t52CD5CAA203755EC9D6A5193FED056055179D7A6 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline U3CU3Ec__DisplayClass7_0_t52CD5CAA203755EC9D6A5193FED056055179D7A6 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(U3CU3Ec__DisplayClass7_0_t52CD5CAA203755EC9D6A5193FED056055179D7A6 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CheaderTextU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CU3CExcuteJavaScriptU3Eb__0U3Ed_t8457EF3A2FF22012B77DE6D1E145E6D45FF0D03E, ___U3CheaderTextU3E5__1_5)); }
	inline String_t* get_U3CheaderTextU3E5__1_5() const { return ___U3CheaderTextU3E5__1_5; }
	inline String_t** get_address_of_U3CheaderTextU3E5__1_5() { return &___U3CheaderTextU3E5__1_5; }
	inline void set_U3CheaderTextU3E5__1_5(String_t* value)
	{
		___U3CheaderTextU3E5__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CheaderTextU3E5__1_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__2_6() { return static_cast<int32_t>(offsetof(U3CU3CExcuteJavaScriptU3Eb__0U3Ed_t8457EF3A2FF22012B77DE6D1E145E6D45FF0D03E, ___U3CU3Es__2_6)); }
	inline String_t* get_U3CU3Es__2_6() const { return ___U3CU3Es__2_6; }
	inline String_t** get_address_of_U3CU3Es__2_6() { return &___U3CU3Es__2_6; }
	inline void set_U3CU3Es__2_6(String_t* value)
	{
		___U3CU3Es__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__2_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_7() { return static_cast<int32_t>(offsetof(U3CU3CExcuteJavaScriptU3Eb__0U3Ed_t8457EF3A2FF22012B77DE6D1E145E6D45FF0D03E, ___U3CU3Eu__1_7)); }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  get_U3CU3Eu__1_7() const { return ___U3CU3Eu__1_7; }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * get_address_of_U3CU3Eu__1_7() { return &___U3CU3Eu__1_7; }
	inline void set_U3CU3Eu__1_7(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  value)
	{
		___U3CU3Eu__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
	}
};


// System.Action`1<UnityEngine.Material>
struct  Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mapbox.Examples.Voxels.VoxelData,System.Single>
struct  Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Mapbox.Unity.MeshGeneration.Interfaces.LayerVisualizerBase
struct  LayerVisualizerBase_t053BD1F0B887C15925A6589933F5059B68704BB0  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.EventHandler Mapbox.Unity.MeshGeneration.Interfaces.LayerVisualizerBase::LayerVisualizerHasChanged
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___LayerVisualizerHasChanged_4;

public:
	inline static int32_t get_offset_of_LayerVisualizerHasChanged_4() { return static_cast<int32_t>(offsetof(LayerVisualizerBase_t053BD1F0B887C15925A6589933F5059B68704BB0, ___LayerVisualizerHasChanged_4)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_LayerVisualizerHasChanged_4() const { return ___LayerVisualizerHasChanged_4; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_LayerVisualizerHasChanged_4() { return &___LayerVisualizerHasChanged_4; }
	inline void set_LayerVisualizerHasChanged_4(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___LayerVisualizerHasChanged_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LayerVisualizerHasChanged_4), (void*)value);
	}
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
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


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Vuplex.WebView.BaseWebView
struct  BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.EventHandler Vuplex.WebView.BaseWebView::CloseRequested
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___CloseRequested_4;
	// System.EventHandler`1<Vuplex.WebView.ProgressChangedEventArgs> Vuplex.WebView.BaseWebView::LoadProgressChanged
	EventHandler_1_t8EE7F393A98500CC3B3D1B1A1D3A6F98B1368DF4 * ___LoadProgressChanged_5;
	// System.EventHandler`1<Vuplex.WebView.EventArgs`1<System.String>> Vuplex.WebView.BaseWebView::MessageEmitted
	EventHandler_1_t48B659E8A04B374D57AC577E14D0787F0653B63D * ___MessageEmitted_6;
	// System.EventHandler Vuplex.WebView.BaseWebView::PageLoadFailed
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___PageLoadFailed_7;
	// System.EventHandler`1<Vuplex.WebView.EventArgs`1<System.String>> Vuplex.WebView.BaseWebView::TitleChanged
	EventHandler_1_t48B659E8A04B374D57AC577E14D0787F0653B63D * ___TitleChanged_8;
	// System.EventHandler`1<Vuplex.WebView.UrlChangedEventArgs> Vuplex.WebView.BaseWebView::UrlChanged
	EventHandler_1_tE104F106190FD0231B231A059551BCFB4A08C6FF * ___UrlChanged_9;
	// System.EventHandler`1<Vuplex.WebView.EventArgs`1<UnityEngine.Rect>> Vuplex.WebView.BaseWebView::VideoRectChanged
	EventHandler_1_t9194B4C97F49ADD5089D89D75F4F2BB8BF5B67ED * ___VideoRectChanged_10;
	// System.Boolean Vuplex.WebView.BaseWebView::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_11;
	// System.Boolean Vuplex.WebView.BaseWebView::<IsInitialized>k__BackingField
	bool ___U3CIsInitializedU3Ek__BackingField_12;
	// System.Collections.Generic.List`1<System.String> Vuplex.WebView.BaseWebView::<PageLoadScripts>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CPageLoadScriptsU3Ek__BackingField_13;
	// System.String Vuplex.WebView.BaseWebView::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_14;
	// System.String Vuplex.WebView.BaseWebView::<Url>k__BackingField
	String_t* ___U3CUrlU3Ek__BackingField_15;
	// System.EventHandler`1<Vuplex.WebView.ConsoleMessageEventArgs> Vuplex.WebView.BaseWebView::_consoleMessageLogged
	EventHandler_1_tCD76EC50EEBCD9E381521191668E5C85FC66D492 * ____consoleMessageLogged_16;
	// System.IntPtr Vuplex.WebView.BaseWebView::_currentViewportNativeTexture
	intptr_t ____currentViewportNativeTexture_17;
	// System.EventHandler`1<Vuplex.WebView.FocusedInputFieldChangedEventArgs> Vuplex.WebView.BaseWebView::_focusedInputFieldChanged
	EventHandler_1_t9F252B5BA664B37EE6601ADF51FBB90A7D343F62 * ____focusedInputFieldChanged_19;
	// System.Single Vuplex.WebView.BaseWebView::_height
	float ____height_20;
	// UnityEngine.Material Vuplex.WebView.BaseWebView::_materialForBlitting
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ____materialForBlitting_21;
	// System.IntPtr Vuplex.WebView.BaseWebView::_nativeWebViewPtr
	intptr_t ____nativeWebViewPtr_22;
	// System.Single Vuplex.WebView.BaseWebView::_numberOfPixelsPerUnityUnit
	float ____numberOfPixelsPerUnityUnit_23;
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> Vuplex.WebView.BaseWebView::_pendingCanGoBackCallbacks
	List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * ____pendingCanGoBackCallbacks_24;
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> Vuplex.WebView.BaseWebView::_pendingCanGoForwardCallbacks
	List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * ____pendingCanGoForwardCallbacks_25;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>> Vuplex.WebView.BaseWebView::_pendingJavaScriptResultCallbacks
	Dictionary_2_tAB8DD48C6C619B787512903708272AC1164CE7E1 * ____pendingJavaScriptResultCallbacks_26;
	// System.Boolean Vuplex.WebView.BaseWebView::_renderingEnabled
	bool ____renderingEnabled_27;
	// UnityEngine.Rect Vuplex.WebView.BaseWebView::_videoRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ____videoRect_29;
	// UnityEngine.Texture2D Vuplex.WebView.BaseWebView::_videoTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____videoTexture_30;
	// UnityEngine.Texture2D Vuplex.WebView.BaseWebView::_viewportTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____viewportTexture_31;
	// System.Single Vuplex.WebView.BaseWebView::_width
	float ____width_32;

public:
	inline static int32_t get_offset_of_CloseRequested_4() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ___CloseRequested_4)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_CloseRequested_4() const { return ___CloseRequested_4; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_CloseRequested_4() { return &___CloseRequested_4; }
	inline void set_CloseRequested_4(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___CloseRequested_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CloseRequested_4), (void*)value);
	}

	inline static int32_t get_offset_of_LoadProgressChanged_5() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ___LoadProgressChanged_5)); }
	inline EventHandler_1_t8EE7F393A98500CC3B3D1B1A1D3A6F98B1368DF4 * get_LoadProgressChanged_5() const { return ___LoadProgressChanged_5; }
	inline EventHandler_1_t8EE7F393A98500CC3B3D1B1A1D3A6F98B1368DF4 ** get_address_of_LoadProgressChanged_5() { return &___LoadProgressChanged_5; }
	inline void set_LoadProgressChanged_5(EventHandler_1_t8EE7F393A98500CC3B3D1B1A1D3A6F98B1368DF4 * value)
	{
		___LoadProgressChanged_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoadProgressChanged_5), (void*)value);
	}

	inline static int32_t get_offset_of_MessageEmitted_6() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ___MessageEmitted_6)); }
	inline EventHandler_1_t48B659E8A04B374D57AC577E14D0787F0653B63D * get_MessageEmitted_6() const { return ___MessageEmitted_6; }
	inline EventHandler_1_t48B659E8A04B374D57AC577E14D0787F0653B63D ** get_address_of_MessageEmitted_6() { return &___MessageEmitted_6; }
	inline void set_MessageEmitted_6(EventHandler_1_t48B659E8A04B374D57AC577E14D0787F0653B63D * value)
	{
		___MessageEmitted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageEmitted_6), (void*)value);
	}

	inline static int32_t get_offset_of_PageLoadFailed_7() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ___PageLoadFailed_7)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_PageLoadFailed_7() const { return ___PageLoadFailed_7; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_PageLoadFailed_7() { return &___PageLoadFailed_7; }
	inline void set_PageLoadFailed_7(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___PageLoadFailed_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PageLoadFailed_7), (void*)value);
	}

	inline static int32_t get_offset_of_TitleChanged_8() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ___TitleChanged_8)); }
	inline EventHandler_1_t48B659E8A04B374D57AC577E14D0787F0653B63D * get_TitleChanged_8() const { return ___TitleChanged_8; }
	inline EventHandler_1_t48B659E8A04B374D57AC577E14D0787F0653B63D ** get_address_of_TitleChanged_8() { return &___TitleChanged_8; }
	inline void set_TitleChanged_8(EventHandler_1_t48B659E8A04B374D57AC577E14D0787F0653B63D * value)
	{
		___TitleChanged_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TitleChanged_8), (void*)value);
	}

	inline static int32_t get_offset_of_UrlChanged_9() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ___UrlChanged_9)); }
	inline EventHandler_1_tE104F106190FD0231B231A059551BCFB4A08C6FF * get_UrlChanged_9() const { return ___UrlChanged_9; }
	inline EventHandler_1_tE104F106190FD0231B231A059551BCFB4A08C6FF ** get_address_of_UrlChanged_9() { return &___UrlChanged_9; }
	inline void set_UrlChanged_9(EventHandler_1_tE104F106190FD0231B231A059551BCFB4A08C6FF * value)
	{
		___UrlChanged_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UrlChanged_9), (void*)value);
	}

	inline static int32_t get_offset_of_VideoRectChanged_10() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ___VideoRectChanged_10)); }
	inline EventHandler_1_t9194B4C97F49ADD5089D89D75F4F2BB8BF5B67ED * get_VideoRectChanged_10() const { return ___VideoRectChanged_10; }
	inline EventHandler_1_t9194B4C97F49ADD5089D89D75F4F2BB8BF5B67ED ** get_address_of_VideoRectChanged_10() { return &___VideoRectChanged_10; }
	inline void set_VideoRectChanged_10(EventHandler_1_t9194B4C97F49ADD5089D89D75F4F2BB8BF5B67ED * value)
	{
		___VideoRectChanged_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VideoRectChanged_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsDisposedU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ___U3CIsDisposedU3Ek__BackingField_11)); }
	inline bool get_U3CIsDisposedU3Ek__BackingField_11() const { return ___U3CIsDisposedU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CIsDisposedU3Ek__BackingField_11() { return &___U3CIsDisposedU3Ek__BackingField_11; }
	inline void set_U3CIsDisposedU3Ek__BackingField_11(bool value)
	{
		___U3CIsDisposedU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CIsInitializedU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ___U3CIsInitializedU3Ek__BackingField_12)); }
	inline bool get_U3CIsInitializedU3Ek__BackingField_12() const { return ___U3CIsInitializedU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CIsInitializedU3Ek__BackingField_12() { return &___U3CIsInitializedU3Ek__BackingField_12; }
	inline void set_U3CIsInitializedU3Ek__BackingField_12(bool value)
	{
		___U3CIsInitializedU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CPageLoadScriptsU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ___U3CPageLoadScriptsU3Ek__BackingField_13)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CPageLoadScriptsU3Ek__BackingField_13() const { return ___U3CPageLoadScriptsU3Ek__BackingField_13; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CPageLoadScriptsU3Ek__BackingField_13() { return &___U3CPageLoadScriptsU3Ek__BackingField_13; }
	inline void set_U3CPageLoadScriptsU3Ek__BackingField_13(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CPageLoadScriptsU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPageLoadScriptsU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTitleU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ___U3CTitleU3Ek__BackingField_14)); }
	inline String_t* get_U3CTitleU3Ek__BackingField_14() const { return ___U3CTitleU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CTitleU3Ek__BackingField_14() { return &___U3CTitleU3Ek__BackingField_14; }
	inline void set_U3CTitleU3Ek__BackingField_14(String_t* value)
	{
		___U3CTitleU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTitleU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUrlU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ___U3CUrlU3Ek__BackingField_15)); }
	inline String_t* get_U3CUrlU3Ek__BackingField_15() const { return ___U3CUrlU3Ek__BackingField_15; }
	inline String_t** get_address_of_U3CUrlU3Ek__BackingField_15() { return &___U3CUrlU3Ek__BackingField_15; }
	inline void set_U3CUrlU3Ek__BackingField_15(String_t* value)
	{
		___U3CUrlU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of__consoleMessageLogged_16() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ____consoleMessageLogged_16)); }
	inline EventHandler_1_tCD76EC50EEBCD9E381521191668E5C85FC66D492 * get__consoleMessageLogged_16() const { return ____consoleMessageLogged_16; }
	inline EventHandler_1_tCD76EC50EEBCD9E381521191668E5C85FC66D492 ** get_address_of__consoleMessageLogged_16() { return &____consoleMessageLogged_16; }
	inline void set__consoleMessageLogged_16(EventHandler_1_tCD76EC50EEBCD9E381521191668E5C85FC66D492 * value)
	{
		____consoleMessageLogged_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____consoleMessageLogged_16), (void*)value);
	}

	inline static int32_t get_offset_of__currentViewportNativeTexture_17() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ____currentViewportNativeTexture_17)); }
	inline intptr_t get__currentViewportNativeTexture_17() const { return ____currentViewportNativeTexture_17; }
	inline intptr_t* get_address_of__currentViewportNativeTexture_17() { return &____currentViewportNativeTexture_17; }
	inline void set__currentViewportNativeTexture_17(intptr_t value)
	{
		____currentViewportNativeTexture_17 = value;
	}

	inline static int32_t get_offset_of__focusedInputFieldChanged_19() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ____focusedInputFieldChanged_19)); }
	inline EventHandler_1_t9F252B5BA664B37EE6601ADF51FBB90A7D343F62 * get__focusedInputFieldChanged_19() const { return ____focusedInputFieldChanged_19; }
	inline EventHandler_1_t9F252B5BA664B37EE6601ADF51FBB90A7D343F62 ** get_address_of__focusedInputFieldChanged_19() { return &____focusedInputFieldChanged_19; }
	inline void set__focusedInputFieldChanged_19(EventHandler_1_t9F252B5BA664B37EE6601ADF51FBB90A7D343F62 * value)
	{
		____focusedInputFieldChanged_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____focusedInputFieldChanged_19), (void*)value);
	}

	inline static int32_t get_offset_of__height_20() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ____height_20)); }
	inline float get__height_20() const { return ____height_20; }
	inline float* get_address_of__height_20() { return &____height_20; }
	inline void set__height_20(float value)
	{
		____height_20 = value;
	}

	inline static int32_t get_offset_of__materialForBlitting_21() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ____materialForBlitting_21)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get__materialForBlitting_21() const { return ____materialForBlitting_21; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of__materialForBlitting_21() { return &____materialForBlitting_21; }
	inline void set__materialForBlitting_21(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		____materialForBlitting_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____materialForBlitting_21), (void*)value);
	}

	inline static int32_t get_offset_of__nativeWebViewPtr_22() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ____nativeWebViewPtr_22)); }
	inline intptr_t get__nativeWebViewPtr_22() const { return ____nativeWebViewPtr_22; }
	inline intptr_t* get_address_of__nativeWebViewPtr_22() { return &____nativeWebViewPtr_22; }
	inline void set__nativeWebViewPtr_22(intptr_t value)
	{
		____nativeWebViewPtr_22 = value;
	}

	inline static int32_t get_offset_of__numberOfPixelsPerUnityUnit_23() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ____numberOfPixelsPerUnityUnit_23)); }
	inline float get__numberOfPixelsPerUnityUnit_23() const { return ____numberOfPixelsPerUnityUnit_23; }
	inline float* get_address_of__numberOfPixelsPerUnityUnit_23() { return &____numberOfPixelsPerUnityUnit_23; }
	inline void set__numberOfPixelsPerUnityUnit_23(float value)
	{
		____numberOfPixelsPerUnityUnit_23 = value;
	}

	inline static int32_t get_offset_of__pendingCanGoBackCallbacks_24() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ____pendingCanGoBackCallbacks_24)); }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * get__pendingCanGoBackCallbacks_24() const { return ____pendingCanGoBackCallbacks_24; }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 ** get_address_of__pendingCanGoBackCallbacks_24() { return &____pendingCanGoBackCallbacks_24; }
	inline void set__pendingCanGoBackCallbacks_24(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * value)
	{
		____pendingCanGoBackCallbacks_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pendingCanGoBackCallbacks_24), (void*)value);
	}

	inline static int32_t get_offset_of__pendingCanGoForwardCallbacks_25() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ____pendingCanGoForwardCallbacks_25)); }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * get__pendingCanGoForwardCallbacks_25() const { return ____pendingCanGoForwardCallbacks_25; }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 ** get_address_of__pendingCanGoForwardCallbacks_25() { return &____pendingCanGoForwardCallbacks_25; }
	inline void set__pendingCanGoForwardCallbacks_25(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * value)
	{
		____pendingCanGoForwardCallbacks_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pendingCanGoForwardCallbacks_25), (void*)value);
	}

	inline static int32_t get_offset_of__pendingJavaScriptResultCallbacks_26() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ____pendingJavaScriptResultCallbacks_26)); }
	inline Dictionary_2_tAB8DD48C6C619B787512903708272AC1164CE7E1 * get__pendingJavaScriptResultCallbacks_26() const { return ____pendingJavaScriptResultCallbacks_26; }
	inline Dictionary_2_tAB8DD48C6C619B787512903708272AC1164CE7E1 ** get_address_of__pendingJavaScriptResultCallbacks_26() { return &____pendingJavaScriptResultCallbacks_26; }
	inline void set__pendingJavaScriptResultCallbacks_26(Dictionary_2_tAB8DD48C6C619B787512903708272AC1164CE7E1 * value)
	{
		____pendingJavaScriptResultCallbacks_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pendingJavaScriptResultCallbacks_26), (void*)value);
	}

	inline static int32_t get_offset_of__renderingEnabled_27() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ____renderingEnabled_27)); }
	inline bool get__renderingEnabled_27() const { return ____renderingEnabled_27; }
	inline bool* get_address_of__renderingEnabled_27() { return &____renderingEnabled_27; }
	inline void set__renderingEnabled_27(bool value)
	{
		____renderingEnabled_27 = value;
	}

	inline static int32_t get_offset_of__videoRect_29() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ____videoRect_29)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get__videoRect_29() const { return ____videoRect_29; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of__videoRect_29() { return &____videoRect_29; }
	inline void set__videoRect_29(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		____videoRect_29 = value;
	}

	inline static int32_t get_offset_of__videoTexture_30() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ____videoTexture_30)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get__videoTexture_30() const { return ____videoTexture_30; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of__videoTexture_30() { return &____videoTexture_30; }
	inline void set__videoTexture_30(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		____videoTexture_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____videoTexture_30), (void*)value);
	}

	inline static int32_t get_offset_of__viewportTexture_31() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ____viewportTexture_31)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get__viewportTexture_31() const { return ____viewportTexture_31; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of__viewportTexture_31() { return &____viewportTexture_31; }
	inline void set__viewportTexture_31(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		____viewportTexture_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____viewportTexture_31), (void*)value);
	}

	inline static int32_t get_offset_of__width_32() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9, ____width_32)); }
	inline float get__width_32() const { return ____width_32; }
	inline float* get_address_of__width_32() { return &____width_32; }
	inline void set__width_32(float value)
	{
		____width_32 = value;
	}
};

struct BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex Vuplex.WebView.BaseWebView::_streamingAssetsUrlRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ____streamingAssetsUrlRegex_28;

public:
	inline static int32_t get_offset_of__streamingAssetsUrlRegex_28() { return static_cast<int32_t>(offsetof(BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9_StaticFields, ____streamingAssetsUrlRegex_28)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get__streamingAssetsUrlRegex_28() const { return ____streamingAssetsUrlRegex_28; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of__streamingAssetsUrlRegex_28() { return &____streamingAssetsUrlRegex_28; }
	inline void set__streamingAssetsUrlRegex_28(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		____streamingAssetsUrlRegex_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____streamingAssetsUrlRegex_28), (void*)value);
	}
};


// Vuplex.WebView.BaseWebViewPrefab
struct  BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.EventHandler`1<Vuplex.WebView.ClickedEventArgs> Vuplex.WebView.BaseWebViewPrefab::Clicked
	EventHandler_1_tF22611595B9E5F119DC928B8BA1C1BC091AB6C5B * ___Clicked_4;
	// System.EventHandler Vuplex.WebView.BaseWebViewPrefab::Initialized
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___Initialized_5;
	// System.EventHandler`1<Vuplex.WebView.ScrolledEventArgs> Vuplex.WebView.BaseWebViewPrefab::Scrolled
	EventHandler_1_t24BCEA0C01521095E56C2CF20034BDD19F16C361 * ___Scrolled_6;
	// System.String Vuplex.WebView.BaseWebViewPrefab::InitialUrl
	String_t* ___InitialUrl_7;
	// Vuplex.WebView.DragMode Vuplex.WebView.BaseWebViewPrefab::DragMode
	int32_t ___DragMode_8;
	// System.Boolean Vuplex.WebView.BaseWebViewPrefab::ClickingEnabled
	bool ___ClickingEnabled_9;
	// System.Boolean Vuplex.WebView.BaseWebViewPrefab::HoveringEnabled
	bool ___HoveringEnabled_10;
	// System.Boolean Vuplex.WebView.BaseWebViewPrefab::ScrollingEnabled
	bool ___ScrollingEnabled_11;
	// System.Single Vuplex.WebView.BaseWebViewPrefab::DragThreshold
	float ___DragThreshold_12;
	// System.Single Vuplex.WebView.BaseWebViewPrefab::<DragToScrollThreshold>k__BackingField
	float ___U3CDragToScrollThresholdU3Ek__BackingField_13;
	// System.Boolean Vuplex.WebView.BaseWebViewPrefab::RemoteDebuggingEnabled
	bool ___RemoteDebuggingEnabled_14;
	// System.Boolean Vuplex.WebView.BaseWebViewPrefab::LogConsoleMessages
	bool ___LogConsoleMessages_15;
	// Vuplex.WebView.Internal.ViewportMaterialView Vuplex.WebView.BaseWebViewPrefab::_cachedVideoLayer
	ViewportMaterialView_t124EF608DBE03B6C7374D67BD9D9BFDC25D79182 * ____cachedVideoLayer_16;
	// Vuplex.WebView.Internal.ViewportMaterialView Vuplex.WebView.BaseWebViewPrefab::_cachedView
	ViewportMaterialView_t124EF608DBE03B6C7374D67BD9D9BFDC25D79182 * ____cachedView_17;
	// Vuplex.WebView.IWebView Vuplex.WebView.BaseWebViewPrefab::_cachedWebView
	RuntimeObject* ____cachedWebView_18;
	// System.Boolean Vuplex.WebView.BaseWebViewPrefab::_clickIsPending
	bool ____clickIsPending_19;
	// System.Boolean Vuplex.WebView.BaseWebViewPrefab::_consoleMessageLoggedHandlerAttached
	bool ____consoleMessageLoggedHandlerAttached_20;
	// System.Boolean Vuplex.WebView.BaseWebViewPrefab::_loggedDragWarning
	bool ____loggedDragWarning_21;
	// Vuplex.WebView.WebViewOptions Vuplex.WebView.BaseWebViewPrefab::_options
	WebViewOptions_t13C9D028049632B6DBB08A44249BB1789CEA2208  ____options_23;
	// UnityEngine.MonoBehaviour Vuplex.WebView.BaseWebViewPrefab::_pointerInputDetectorMonoBehaviour
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ____pointerInputDetectorMonoBehaviour_24;
	// System.Boolean Vuplex.WebView.BaseWebViewPrefab::_pointerIsDown
	bool ____pointerIsDown_25;
	// UnityEngine.Vector2 Vuplex.WebView.BaseWebViewPrefab::_pointerDownRatioPoint
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____pointerDownRatioPoint_26;
	// UnityEngine.Vector2 Vuplex.WebView.BaseWebViewPrefab::_previousDragPoint
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____previousDragPoint_27;
	// UnityEngine.Vector2 Vuplex.WebView.BaseWebViewPrefab::_previousMovePointerPoint
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____previousMovePointerPoint_28;
	// UnityEngine.Material Vuplex.WebView.BaseWebViewPrefab::_videoMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ____videoMaterial_30;
	// UnityEngine.Material Vuplex.WebView.BaseWebViewPrefab::_viewMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ____viewMaterial_31;
	// Vuplex.WebView.IWebView Vuplex.WebView.BaseWebViewPrefab::_webViewForInitialization
	RuntimeObject* ____webViewForInitialization_32;
	// UnityEngine.GameObject Vuplex.WebView.BaseWebViewPrefab::_webViewGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____webViewGameObject_33;

public:
	inline static int32_t get_offset_of_Clicked_4() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ___Clicked_4)); }
	inline EventHandler_1_tF22611595B9E5F119DC928B8BA1C1BC091AB6C5B * get_Clicked_4() const { return ___Clicked_4; }
	inline EventHandler_1_tF22611595B9E5F119DC928B8BA1C1BC091AB6C5B ** get_address_of_Clicked_4() { return &___Clicked_4; }
	inline void set_Clicked_4(EventHandler_1_tF22611595B9E5F119DC928B8BA1C1BC091AB6C5B * value)
	{
		___Clicked_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Clicked_4), (void*)value);
	}

	inline static int32_t get_offset_of_Initialized_5() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ___Initialized_5)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_Initialized_5() const { return ___Initialized_5; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_Initialized_5() { return &___Initialized_5; }
	inline void set_Initialized_5(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___Initialized_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Initialized_5), (void*)value);
	}

	inline static int32_t get_offset_of_Scrolled_6() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ___Scrolled_6)); }
	inline EventHandler_1_t24BCEA0C01521095E56C2CF20034BDD19F16C361 * get_Scrolled_6() const { return ___Scrolled_6; }
	inline EventHandler_1_t24BCEA0C01521095E56C2CF20034BDD19F16C361 ** get_address_of_Scrolled_6() { return &___Scrolled_6; }
	inline void set_Scrolled_6(EventHandler_1_t24BCEA0C01521095E56C2CF20034BDD19F16C361 * value)
	{
		___Scrolled_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Scrolled_6), (void*)value);
	}

	inline static int32_t get_offset_of_InitialUrl_7() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ___InitialUrl_7)); }
	inline String_t* get_InitialUrl_7() const { return ___InitialUrl_7; }
	inline String_t** get_address_of_InitialUrl_7() { return &___InitialUrl_7; }
	inline void set_InitialUrl_7(String_t* value)
	{
		___InitialUrl_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InitialUrl_7), (void*)value);
	}

	inline static int32_t get_offset_of_DragMode_8() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ___DragMode_8)); }
	inline int32_t get_DragMode_8() const { return ___DragMode_8; }
	inline int32_t* get_address_of_DragMode_8() { return &___DragMode_8; }
	inline void set_DragMode_8(int32_t value)
	{
		___DragMode_8 = value;
	}

	inline static int32_t get_offset_of_ClickingEnabled_9() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ___ClickingEnabled_9)); }
	inline bool get_ClickingEnabled_9() const { return ___ClickingEnabled_9; }
	inline bool* get_address_of_ClickingEnabled_9() { return &___ClickingEnabled_9; }
	inline void set_ClickingEnabled_9(bool value)
	{
		___ClickingEnabled_9 = value;
	}

	inline static int32_t get_offset_of_HoveringEnabled_10() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ___HoveringEnabled_10)); }
	inline bool get_HoveringEnabled_10() const { return ___HoveringEnabled_10; }
	inline bool* get_address_of_HoveringEnabled_10() { return &___HoveringEnabled_10; }
	inline void set_HoveringEnabled_10(bool value)
	{
		___HoveringEnabled_10 = value;
	}

	inline static int32_t get_offset_of_ScrollingEnabled_11() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ___ScrollingEnabled_11)); }
	inline bool get_ScrollingEnabled_11() const { return ___ScrollingEnabled_11; }
	inline bool* get_address_of_ScrollingEnabled_11() { return &___ScrollingEnabled_11; }
	inline void set_ScrollingEnabled_11(bool value)
	{
		___ScrollingEnabled_11 = value;
	}

	inline static int32_t get_offset_of_DragThreshold_12() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ___DragThreshold_12)); }
	inline float get_DragThreshold_12() const { return ___DragThreshold_12; }
	inline float* get_address_of_DragThreshold_12() { return &___DragThreshold_12; }
	inline void set_DragThreshold_12(float value)
	{
		___DragThreshold_12 = value;
	}

	inline static int32_t get_offset_of_U3CDragToScrollThresholdU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ___U3CDragToScrollThresholdU3Ek__BackingField_13)); }
	inline float get_U3CDragToScrollThresholdU3Ek__BackingField_13() const { return ___U3CDragToScrollThresholdU3Ek__BackingField_13; }
	inline float* get_address_of_U3CDragToScrollThresholdU3Ek__BackingField_13() { return &___U3CDragToScrollThresholdU3Ek__BackingField_13; }
	inline void set_U3CDragToScrollThresholdU3Ek__BackingField_13(float value)
	{
		___U3CDragToScrollThresholdU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_RemoteDebuggingEnabled_14() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ___RemoteDebuggingEnabled_14)); }
	inline bool get_RemoteDebuggingEnabled_14() const { return ___RemoteDebuggingEnabled_14; }
	inline bool* get_address_of_RemoteDebuggingEnabled_14() { return &___RemoteDebuggingEnabled_14; }
	inline void set_RemoteDebuggingEnabled_14(bool value)
	{
		___RemoteDebuggingEnabled_14 = value;
	}

	inline static int32_t get_offset_of_LogConsoleMessages_15() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ___LogConsoleMessages_15)); }
	inline bool get_LogConsoleMessages_15() const { return ___LogConsoleMessages_15; }
	inline bool* get_address_of_LogConsoleMessages_15() { return &___LogConsoleMessages_15; }
	inline void set_LogConsoleMessages_15(bool value)
	{
		___LogConsoleMessages_15 = value;
	}

	inline static int32_t get_offset_of__cachedVideoLayer_16() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ____cachedVideoLayer_16)); }
	inline ViewportMaterialView_t124EF608DBE03B6C7374D67BD9D9BFDC25D79182 * get__cachedVideoLayer_16() const { return ____cachedVideoLayer_16; }
	inline ViewportMaterialView_t124EF608DBE03B6C7374D67BD9D9BFDC25D79182 ** get_address_of__cachedVideoLayer_16() { return &____cachedVideoLayer_16; }
	inline void set__cachedVideoLayer_16(ViewportMaterialView_t124EF608DBE03B6C7374D67BD9D9BFDC25D79182 * value)
	{
		____cachedVideoLayer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedVideoLayer_16), (void*)value);
	}

	inline static int32_t get_offset_of__cachedView_17() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ____cachedView_17)); }
	inline ViewportMaterialView_t124EF608DBE03B6C7374D67BD9D9BFDC25D79182 * get__cachedView_17() const { return ____cachedView_17; }
	inline ViewportMaterialView_t124EF608DBE03B6C7374D67BD9D9BFDC25D79182 ** get_address_of__cachedView_17() { return &____cachedView_17; }
	inline void set__cachedView_17(ViewportMaterialView_t124EF608DBE03B6C7374D67BD9D9BFDC25D79182 * value)
	{
		____cachedView_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedView_17), (void*)value);
	}

	inline static int32_t get_offset_of__cachedWebView_18() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ____cachedWebView_18)); }
	inline RuntimeObject* get__cachedWebView_18() const { return ____cachedWebView_18; }
	inline RuntimeObject** get_address_of__cachedWebView_18() { return &____cachedWebView_18; }
	inline void set__cachedWebView_18(RuntimeObject* value)
	{
		____cachedWebView_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedWebView_18), (void*)value);
	}

	inline static int32_t get_offset_of__clickIsPending_19() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ____clickIsPending_19)); }
	inline bool get__clickIsPending_19() const { return ____clickIsPending_19; }
	inline bool* get_address_of__clickIsPending_19() { return &____clickIsPending_19; }
	inline void set__clickIsPending_19(bool value)
	{
		____clickIsPending_19 = value;
	}

	inline static int32_t get_offset_of__consoleMessageLoggedHandlerAttached_20() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ____consoleMessageLoggedHandlerAttached_20)); }
	inline bool get__consoleMessageLoggedHandlerAttached_20() const { return ____consoleMessageLoggedHandlerAttached_20; }
	inline bool* get_address_of__consoleMessageLoggedHandlerAttached_20() { return &____consoleMessageLoggedHandlerAttached_20; }
	inline void set__consoleMessageLoggedHandlerAttached_20(bool value)
	{
		____consoleMessageLoggedHandlerAttached_20 = value;
	}

	inline static int32_t get_offset_of__loggedDragWarning_21() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ____loggedDragWarning_21)); }
	inline bool get__loggedDragWarning_21() const { return ____loggedDragWarning_21; }
	inline bool* get_address_of__loggedDragWarning_21() { return &____loggedDragWarning_21; }
	inline void set__loggedDragWarning_21(bool value)
	{
		____loggedDragWarning_21 = value;
	}

	inline static int32_t get_offset_of__options_23() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ____options_23)); }
	inline WebViewOptions_t13C9D028049632B6DBB08A44249BB1789CEA2208  get__options_23() const { return ____options_23; }
	inline WebViewOptions_t13C9D028049632B6DBB08A44249BB1789CEA2208 * get_address_of__options_23() { return &____options_23; }
	inline void set__options_23(WebViewOptions_t13C9D028049632B6DBB08A44249BB1789CEA2208  value)
	{
		____options_23 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____options_23))->___preferredPlugins_2), (void*)NULL);
	}

	inline static int32_t get_offset_of__pointerInputDetectorMonoBehaviour_24() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ____pointerInputDetectorMonoBehaviour_24)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get__pointerInputDetectorMonoBehaviour_24() const { return ____pointerInputDetectorMonoBehaviour_24; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of__pointerInputDetectorMonoBehaviour_24() { return &____pointerInputDetectorMonoBehaviour_24; }
	inline void set__pointerInputDetectorMonoBehaviour_24(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		____pointerInputDetectorMonoBehaviour_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pointerInputDetectorMonoBehaviour_24), (void*)value);
	}

	inline static int32_t get_offset_of__pointerIsDown_25() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ____pointerIsDown_25)); }
	inline bool get__pointerIsDown_25() const { return ____pointerIsDown_25; }
	inline bool* get_address_of__pointerIsDown_25() { return &____pointerIsDown_25; }
	inline void set__pointerIsDown_25(bool value)
	{
		____pointerIsDown_25 = value;
	}

	inline static int32_t get_offset_of__pointerDownRatioPoint_26() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ____pointerDownRatioPoint_26)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__pointerDownRatioPoint_26() const { return ____pointerDownRatioPoint_26; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__pointerDownRatioPoint_26() { return &____pointerDownRatioPoint_26; }
	inline void set__pointerDownRatioPoint_26(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____pointerDownRatioPoint_26 = value;
	}

	inline static int32_t get_offset_of__previousDragPoint_27() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ____previousDragPoint_27)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__previousDragPoint_27() const { return ____previousDragPoint_27; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__previousDragPoint_27() { return &____previousDragPoint_27; }
	inline void set__previousDragPoint_27(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____previousDragPoint_27 = value;
	}

	inline static int32_t get_offset_of__previousMovePointerPoint_28() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ____previousMovePointerPoint_28)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__previousMovePointerPoint_28() const { return ____previousMovePointerPoint_28; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__previousMovePointerPoint_28() { return &____previousMovePointerPoint_28; }
	inline void set__previousMovePointerPoint_28(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____previousMovePointerPoint_28 = value;
	}

	inline static int32_t get_offset_of__videoMaterial_30() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ____videoMaterial_30)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get__videoMaterial_30() const { return ____videoMaterial_30; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of__videoMaterial_30() { return &____videoMaterial_30; }
	inline void set__videoMaterial_30(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		____videoMaterial_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____videoMaterial_30), (void*)value);
	}

	inline static int32_t get_offset_of__viewMaterial_31() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ____viewMaterial_31)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get__viewMaterial_31() const { return ____viewMaterial_31; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of__viewMaterial_31() { return &____viewMaterial_31; }
	inline void set__viewMaterial_31(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		____viewMaterial_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____viewMaterial_31), (void*)value);
	}

	inline static int32_t get_offset_of__webViewForInitialization_32() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ____webViewForInitialization_32)); }
	inline RuntimeObject* get__webViewForInitialization_32() const { return ____webViewForInitialization_32; }
	inline RuntimeObject** get_address_of__webViewForInitialization_32() { return &____webViewForInitialization_32; }
	inline void set__webViewForInitialization_32(RuntimeObject* value)
	{
		____webViewForInitialization_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____webViewForInitialization_32), (void*)value);
	}

	inline static int32_t get_offset_of__webViewGameObject_33() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7, ____webViewGameObject_33)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__webViewGameObject_33() const { return ____webViewGameObject_33; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__webViewGameObject_33() { return &____webViewGameObject_33; }
	inline void set__webViewGameObject_33(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____webViewGameObject_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____webViewGameObject_33), (void*)value);
	}
};

struct BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7_StaticFields
{
public:
	// System.Boolean Vuplex.WebView.BaseWebViewPrefab::_loggedHoverWarning
	bool ____loggedHoverWarning_22;
	// System.Boolean Vuplex.WebView.BaseWebViewPrefab::_remoteDebuggingEnabled
	bool ____remoteDebuggingEnabled_29;

public:
	inline static int32_t get_offset_of__loggedHoverWarning_22() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7_StaticFields, ____loggedHoverWarning_22)); }
	inline bool get__loggedHoverWarning_22() const { return ____loggedHoverWarning_22; }
	inline bool* get_address_of__loggedHoverWarning_22() { return &____loggedHoverWarning_22; }
	inline void set__loggedHoverWarning_22(bool value)
	{
		____loggedHoverWarning_22 = value;
	}

	inline static int32_t get_offset_of__remoteDebuggingEnabled_29() { return static_cast<int32_t>(offsetof(BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7_StaticFields, ____remoteDebuggingEnabled_29)); }
	inline bool get__remoteDebuggingEnabled_29() const { return ____remoteDebuggingEnabled_29; }
	inline bool* get_address_of__remoteDebuggingEnabled_29() { return &____remoteDebuggingEnabled_29; }
	inline void set__remoteDebuggingEnabled_29(bool value)
	{
		____remoteDebuggingEnabled_29 = value;
	}
};


// JSCom
struct  JSCom_t405735338C026C27A23A4739D94D75A1261A93FC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Vuplex.WebView.CanvasWebViewPrefab JSCom::webViewPrefab
	CanvasWebViewPrefab_tBA29146094CB4C872D4879E97AC68DA099409180 * ___webViewPrefab_4;
	// UnityEngine.UI.Text JSCom::infoText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___infoText_5;
	// UnityEngine.GameObject JSCom::webViewObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___webViewObject_6;
	// MessageClass/RecieveJSON JSCom::gotData
	RecieveJSON_t97DBC6F4547780CC3BCDB594AF98BF13F0662C4D  ___gotData_7;

public:
	inline static int32_t get_offset_of_webViewPrefab_4() { return static_cast<int32_t>(offsetof(JSCom_t405735338C026C27A23A4739D94D75A1261A93FC, ___webViewPrefab_4)); }
	inline CanvasWebViewPrefab_tBA29146094CB4C872D4879E97AC68DA099409180 * get_webViewPrefab_4() const { return ___webViewPrefab_4; }
	inline CanvasWebViewPrefab_tBA29146094CB4C872D4879E97AC68DA099409180 ** get_address_of_webViewPrefab_4() { return &___webViewPrefab_4; }
	inline void set_webViewPrefab_4(CanvasWebViewPrefab_tBA29146094CB4C872D4879E97AC68DA099409180 * value)
	{
		___webViewPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webViewPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_infoText_5() { return static_cast<int32_t>(offsetof(JSCom_t405735338C026C27A23A4739D94D75A1261A93FC, ___infoText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_infoText_5() const { return ___infoText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_infoText_5() { return &___infoText_5; }
	inline void set_infoText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___infoText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___infoText_5), (void*)value);
	}

	inline static int32_t get_offset_of_webViewObject_6() { return static_cast<int32_t>(offsetof(JSCom_t405735338C026C27A23A4739D94D75A1261A93FC, ___webViewObject_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_webViewObject_6() const { return ___webViewObject_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_webViewObject_6() { return &___webViewObject_6; }
	inline void set_webViewObject_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___webViewObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webViewObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_gotData_7() { return static_cast<int32_t>(offsetof(JSCom_t405735338C026C27A23A4739D94D75A1261A93FC, ___gotData_7)); }
	inline RecieveJSON_t97DBC6F4547780CC3BCDB594AF98BF13F0662C4D  get_gotData_7() const { return ___gotData_7; }
	inline RecieveJSON_t97DBC6F4547780CC3BCDB594AF98BF13F0662C4D * get_address_of_gotData_7() { return &___gotData_7; }
	inline void set_gotData_7(RecieveJSON_t97DBC6F4547780CC3BCDB594AF98BF13F0662C4D  value)
	{
		___gotData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___gotData_7))->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___gotData_7))->___data_1))->___layer_0), (void*)NULL);
		#endif
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Mapbox.Examples.Voxels.VoxelTile
struct  VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Mapbox.Examples.ForwardGeocodeUserInput Mapbox.Examples.Voxels.VoxelTile::_geocodeInput
	ForwardGeocodeUserInput_t10C9A318B7C61E1D0B36245E3C2C475A0D483D70 * ____geocodeInput_4;
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile::_zoom
	int32_t ____zoom_5;
	// System.Single Mapbox.Examples.Voxels.VoxelTile::_elevationMultiplier
	float ____elevationMultiplier_6;
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile::_voxelDepthPadding
	int32_t ____voxelDepthPadding_7;
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile::_tileWidthInVoxels
	int32_t ____tileWidthInVoxels_8;
	// Mapbox.Examples.Voxels.VoxelFetcher Mapbox.Examples.Voxels.VoxelTile::_voxelFetcher
	VoxelFetcher_t31CB60AE2A4EA3F4D722321C8BB87B3FE68FBE2D * ____voxelFetcher_9;
	// UnityEngine.GameObject Mapbox.Examples.Voxels.VoxelTile::_camera
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____camera_10;
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile::_voxelBatchCount
	int32_t ____voxelBatchCount_11;
	// System.String Mapbox.Examples.Voxels.VoxelTile::_styleUrl
	String_t* ____styleUrl_12;
	// Mapbox.Map.Map`1<Mapbox.Map.RasterTile> Mapbox.Examples.Voxels.VoxelTile::_raster
	Map_1_tC48A961A1B61785722D5907072B2D13475A89832 * ____raster_13;
	// Mapbox.Map.Map`1<Mapbox.Map.RawPngRasterTile> Mapbox.Examples.Voxels.VoxelTile::_elevation
	Map_1_t11BF2AF4B8B14E81CF098228619FEF7891D6E067 * ____elevation_14;
	// UnityEngine.Texture2D Mapbox.Examples.Voxels.VoxelTile::_rasterTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____rasterTexture_15;
	// UnityEngine.Texture2D Mapbox.Examples.Voxels.VoxelTile::_elevationTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____elevationTexture_16;
	// Mapbox.Platform.IFileSource Mapbox.Examples.Voxels.VoxelTile::_fileSource
	RuntimeObject* ____fileSource_17;
	// System.Collections.Generic.List`1<Mapbox.Examples.Voxels.VoxelData> Mapbox.Examples.Voxels.VoxelTile::_voxels
	List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * ____voxels_18;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Mapbox.Examples.Voxels.VoxelTile::_instantiatedVoxels
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ____instantiatedVoxels_19;
	// System.Single Mapbox.Examples.Voxels.VoxelTile::_tileScale
	float ____tileScale_20;

public:
	inline static int32_t get_offset_of__geocodeInput_4() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____geocodeInput_4)); }
	inline ForwardGeocodeUserInput_t10C9A318B7C61E1D0B36245E3C2C475A0D483D70 * get__geocodeInput_4() const { return ____geocodeInput_4; }
	inline ForwardGeocodeUserInput_t10C9A318B7C61E1D0B36245E3C2C475A0D483D70 ** get_address_of__geocodeInput_4() { return &____geocodeInput_4; }
	inline void set__geocodeInput_4(ForwardGeocodeUserInput_t10C9A318B7C61E1D0B36245E3C2C475A0D483D70 * value)
	{
		____geocodeInput_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____geocodeInput_4), (void*)value);
	}

	inline static int32_t get_offset_of__zoom_5() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____zoom_5)); }
	inline int32_t get__zoom_5() const { return ____zoom_5; }
	inline int32_t* get_address_of__zoom_5() { return &____zoom_5; }
	inline void set__zoom_5(int32_t value)
	{
		____zoom_5 = value;
	}

	inline static int32_t get_offset_of__elevationMultiplier_6() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____elevationMultiplier_6)); }
	inline float get__elevationMultiplier_6() const { return ____elevationMultiplier_6; }
	inline float* get_address_of__elevationMultiplier_6() { return &____elevationMultiplier_6; }
	inline void set__elevationMultiplier_6(float value)
	{
		____elevationMultiplier_6 = value;
	}

	inline static int32_t get_offset_of__voxelDepthPadding_7() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____voxelDepthPadding_7)); }
	inline int32_t get__voxelDepthPadding_7() const { return ____voxelDepthPadding_7; }
	inline int32_t* get_address_of__voxelDepthPadding_7() { return &____voxelDepthPadding_7; }
	inline void set__voxelDepthPadding_7(int32_t value)
	{
		____voxelDepthPadding_7 = value;
	}

	inline static int32_t get_offset_of__tileWidthInVoxels_8() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____tileWidthInVoxels_8)); }
	inline int32_t get__tileWidthInVoxels_8() const { return ____tileWidthInVoxels_8; }
	inline int32_t* get_address_of__tileWidthInVoxels_8() { return &____tileWidthInVoxels_8; }
	inline void set__tileWidthInVoxels_8(int32_t value)
	{
		____tileWidthInVoxels_8 = value;
	}

	inline static int32_t get_offset_of__voxelFetcher_9() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____voxelFetcher_9)); }
	inline VoxelFetcher_t31CB60AE2A4EA3F4D722321C8BB87B3FE68FBE2D * get__voxelFetcher_9() const { return ____voxelFetcher_9; }
	inline VoxelFetcher_t31CB60AE2A4EA3F4D722321C8BB87B3FE68FBE2D ** get_address_of__voxelFetcher_9() { return &____voxelFetcher_9; }
	inline void set__voxelFetcher_9(VoxelFetcher_t31CB60AE2A4EA3F4D722321C8BB87B3FE68FBE2D * value)
	{
		____voxelFetcher_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____voxelFetcher_9), (void*)value);
	}

	inline static int32_t get_offset_of__camera_10() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____camera_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__camera_10() const { return ____camera_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__camera_10() { return &____camera_10; }
	inline void set__camera_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____camera_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____camera_10), (void*)value);
	}

	inline static int32_t get_offset_of__voxelBatchCount_11() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____voxelBatchCount_11)); }
	inline int32_t get__voxelBatchCount_11() const { return ____voxelBatchCount_11; }
	inline int32_t* get_address_of__voxelBatchCount_11() { return &____voxelBatchCount_11; }
	inline void set__voxelBatchCount_11(int32_t value)
	{
		____voxelBatchCount_11 = value;
	}

	inline static int32_t get_offset_of__styleUrl_12() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____styleUrl_12)); }
	inline String_t* get__styleUrl_12() const { return ____styleUrl_12; }
	inline String_t** get_address_of__styleUrl_12() { return &____styleUrl_12; }
	inline void set__styleUrl_12(String_t* value)
	{
		____styleUrl_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____styleUrl_12), (void*)value);
	}

	inline static int32_t get_offset_of__raster_13() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____raster_13)); }
	inline Map_1_tC48A961A1B61785722D5907072B2D13475A89832 * get__raster_13() const { return ____raster_13; }
	inline Map_1_tC48A961A1B61785722D5907072B2D13475A89832 ** get_address_of__raster_13() { return &____raster_13; }
	inline void set__raster_13(Map_1_tC48A961A1B61785722D5907072B2D13475A89832 * value)
	{
		____raster_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____raster_13), (void*)value);
	}

	inline static int32_t get_offset_of__elevation_14() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____elevation_14)); }
	inline Map_1_t11BF2AF4B8B14E81CF098228619FEF7891D6E067 * get__elevation_14() const { return ____elevation_14; }
	inline Map_1_t11BF2AF4B8B14E81CF098228619FEF7891D6E067 ** get_address_of__elevation_14() { return &____elevation_14; }
	inline void set__elevation_14(Map_1_t11BF2AF4B8B14E81CF098228619FEF7891D6E067 * value)
	{
		____elevation_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____elevation_14), (void*)value);
	}

	inline static int32_t get_offset_of__rasterTexture_15() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____rasterTexture_15)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get__rasterTexture_15() const { return ____rasterTexture_15; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of__rasterTexture_15() { return &____rasterTexture_15; }
	inline void set__rasterTexture_15(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		____rasterTexture_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rasterTexture_15), (void*)value);
	}

	inline static int32_t get_offset_of__elevationTexture_16() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____elevationTexture_16)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get__elevationTexture_16() const { return ____elevationTexture_16; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of__elevationTexture_16() { return &____elevationTexture_16; }
	inline void set__elevationTexture_16(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		____elevationTexture_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____elevationTexture_16), (void*)value);
	}

	inline static int32_t get_offset_of__fileSource_17() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____fileSource_17)); }
	inline RuntimeObject* get__fileSource_17() const { return ____fileSource_17; }
	inline RuntimeObject** get_address_of__fileSource_17() { return &____fileSource_17; }
	inline void set__fileSource_17(RuntimeObject* value)
	{
		____fileSource_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileSource_17), (void*)value);
	}

	inline static int32_t get_offset_of__voxels_18() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____voxels_18)); }
	inline List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * get__voxels_18() const { return ____voxels_18; }
	inline List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 ** get_address_of__voxels_18() { return &____voxels_18; }
	inline void set__voxels_18(List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * value)
	{
		____voxels_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____voxels_18), (void*)value);
	}

	inline static int32_t get_offset_of__instantiatedVoxels_19() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____instantiatedVoxels_19)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get__instantiatedVoxels_19() const { return ____instantiatedVoxels_19; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of__instantiatedVoxels_19() { return &____instantiatedVoxels_19; }
	inline void set__instantiatedVoxels_19(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		____instantiatedVoxels_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instantiatedVoxels_19), (void*)value);
	}

	inline static int32_t get_offset_of__tileScale_20() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____tileScale_20)); }
	inline float get__tileScale_20() const { return ____tileScale_20; }
	inline float* get_address_of__tileScale_20() { return &____tileScale_20; }
	inline void set__tileScale_20(float value)
	{
		____tileScale_20 = value;
	}
};


// Vuplex.WebView.CanvasWebViewPrefab
struct  CanvasWebViewPrefab_tBA29146094CB4C872D4879E97AC68DA099409180  : public BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7
{
public:
	// System.Boolean Vuplex.WebView.CanvasWebViewPrefab::Native2DModeEnabled
	bool ___Native2DModeEnabled_34;
	// System.Boolean Vuplex.WebView.CanvasWebViewPrefab::NativeOnScreenKeyboardEnabled
	bool ___NativeOnScreenKeyboardEnabled_35;
	// System.Single Vuplex.WebView.CanvasWebViewPrefab::InitialResolution
	float ___InitialResolution_36;
	// System.Single Vuplex.WebView.CanvasWebViewPrefab::ScrollingSensitivity
	float ___ScrollingSensitivity_37;
	// UnityEngine.RectTransform Vuplex.WebView.CanvasWebViewPrefab::_cachedRectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ____cachedRectTransform_38;
	// System.Boolean Vuplex.WebView.CanvasWebViewPrefab::_setCustomPointerInputDetector
	bool ____setCustomPointerInputDetector_39;

public:
	inline static int32_t get_offset_of_Native2DModeEnabled_34() { return static_cast<int32_t>(offsetof(CanvasWebViewPrefab_tBA29146094CB4C872D4879E97AC68DA099409180, ___Native2DModeEnabled_34)); }
	inline bool get_Native2DModeEnabled_34() const { return ___Native2DModeEnabled_34; }
	inline bool* get_address_of_Native2DModeEnabled_34() { return &___Native2DModeEnabled_34; }
	inline void set_Native2DModeEnabled_34(bool value)
	{
		___Native2DModeEnabled_34 = value;
	}

	inline static int32_t get_offset_of_NativeOnScreenKeyboardEnabled_35() { return static_cast<int32_t>(offsetof(CanvasWebViewPrefab_tBA29146094CB4C872D4879E97AC68DA099409180, ___NativeOnScreenKeyboardEnabled_35)); }
	inline bool get_NativeOnScreenKeyboardEnabled_35() const { return ___NativeOnScreenKeyboardEnabled_35; }
	inline bool* get_address_of_NativeOnScreenKeyboardEnabled_35() { return &___NativeOnScreenKeyboardEnabled_35; }
	inline void set_NativeOnScreenKeyboardEnabled_35(bool value)
	{
		___NativeOnScreenKeyboardEnabled_35 = value;
	}

	inline static int32_t get_offset_of_InitialResolution_36() { return static_cast<int32_t>(offsetof(CanvasWebViewPrefab_tBA29146094CB4C872D4879E97AC68DA099409180, ___InitialResolution_36)); }
	inline float get_InitialResolution_36() const { return ___InitialResolution_36; }
	inline float* get_address_of_InitialResolution_36() { return &___InitialResolution_36; }
	inline void set_InitialResolution_36(float value)
	{
		___InitialResolution_36 = value;
	}

	inline static int32_t get_offset_of_ScrollingSensitivity_37() { return static_cast<int32_t>(offsetof(CanvasWebViewPrefab_tBA29146094CB4C872D4879E97AC68DA099409180, ___ScrollingSensitivity_37)); }
	inline float get_ScrollingSensitivity_37() const { return ___ScrollingSensitivity_37; }
	inline float* get_address_of_ScrollingSensitivity_37() { return &___ScrollingSensitivity_37; }
	inline void set_ScrollingSensitivity_37(float value)
	{
		___ScrollingSensitivity_37 = value;
	}

	inline static int32_t get_offset_of__cachedRectTransform_38() { return static_cast<int32_t>(offsetof(CanvasWebViewPrefab_tBA29146094CB4C872D4879E97AC68DA099409180, ____cachedRectTransform_38)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get__cachedRectTransform_38() const { return ____cachedRectTransform_38; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of__cachedRectTransform_38() { return &____cachedRectTransform_38; }
	inline void set__cachedRectTransform_38(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		____cachedRectTransform_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedRectTransform_38), (void*)value);
	}

	inline static int32_t get_offset_of__setCustomPointerInputDetector_39() { return static_cast<int32_t>(offsetof(CanvasWebViewPrefab_tBA29146094CB4C872D4879E97AC68DA099409180, ____setCustomPointerInputDetector_39)); }
	inline bool get__setCustomPointerInputDetector_39() const { return ____setCustomPointerInputDetector_39; }
	inline bool* get_address_of__setCustomPointerInputDetector_39() { return &____setCustomPointerInputDetector_39; }
	inline void set__setCustomPointerInputDetector_39(bool value)
	{
		____setCustomPointerInputDetector_39 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// Vuplex.WebView.iOSWebView
struct  iOSWebView_t6F9C3966310654822C871CE0B645D17FF023048A  : public BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9
{
public:
	// System.Boolean Vuplex.WebView.iOSWebView::<Native2DModeEnabled>k__BackingField
	bool ___U3CNative2DModeEnabledU3Ek__BackingField_33;
	// UnityEngine.Rect Vuplex.WebView.iOSWebView::<Rect>k__BackingField
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___U3CRectU3Ek__BackingField_34;
	// System.Boolean Vuplex.WebView.iOSWebView::<Visible>k__BackingField
	bool ___U3CVisibleU3Ek__BackingField_35;
	// System.IntPtr Vuplex.WebView.iOSWebView::_currentVideoNativeTexture
	intptr_t ____currentVideoNativeTexture_36;
	// UnityEngine.WaitForEndOfFrame Vuplex.WebView.iOSWebView::_waitForEndOfFrame
	WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * ____waitForEndOfFrame_37;

public:
	inline static int32_t get_offset_of_U3CNative2DModeEnabledU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(iOSWebView_t6F9C3966310654822C871CE0B645D17FF023048A, ___U3CNative2DModeEnabledU3Ek__BackingField_33)); }
	inline bool get_U3CNative2DModeEnabledU3Ek__BackingField_33() const { return ___U3CNative2DModeEnabledU3Ek__BackingField_33; }
	inline bool* get_address_of_U3CNative2DModeEnabledU3Ek__BackingField_33() { return &___U3CNative2DModeEnabledU3Ek__BackingField_33; }
	inline void set_U3CNative2DModeEnabledU3Ek__BackingField_33(bool value)
	{
		___U3CNative2DModeEnabledU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CRectU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(iOSWebView_t6F9C3966310654822C871CE0B645D17FF023048A, ___U3CRectU3Ek__BackingField_34)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_U3CRectU3Ek__BackingField_34() const { return ___U3CRectU3Ek__BackingField_34; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_U3CRectU3Ek__BackingField_34() { return &___U3CRectU3Ek__BackingField_34; }
	inline void set_U3CRectU3Ek__BackingField_34(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___U3CRectU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CVisibleU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(iOSWebView_t6F9C3966310654822C871CE0B645D17FF023048A, ___U3CVisibleU3Ek__BackingField_35)); }
	inline bool get_U3CVisibleU3Ek__BackingField_35() const { return ___U3CVisibleU3Ek__BackingField_35; }
	inline bool* get_address_of_U3CVisibleU3Ek__BackingField_35() { return &___U3CVisibleU3Ek__BackingField_35; }
	inline void set_U3CVisibleU3Ek__BackingField_35(bool value)
	{
		___U3CVisibleU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of__currentVideoNativeTexture_36() { return static_cast<int32_t>(offsetof(iOSWebView_t6F9C3966310654822C871CE0B645D17FF023048A, ____currentVideoNativeTexture_36)); }
	inline intptr_t get__currentVideoNativeTexture_36() const { return ____currentVideoNativeTexture_36; }
	inline intptr_t* get_address_of__currentVideoNativeTexture_36() { return &____currentVideoNativeTexture_36; }
	inline void set__currentVideoNativeTexture_36(intptr_t value)
	{
		____currentVideoNativeTexture_36 = value;
	}

	inline static int32_t get_offset_of__waitForEndOfFrame_37() { return static_cast<int32_t>(offsetof(iOSWebView_t6F9C3966310654822C871CE0B645D17FF023048A, ____waitForEndOfFrame_37)); }
	inline WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * get__waitForEndOfFrame_37() const { return ____waitForEndOfFrame_37; }
	inline WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 ** get_address_of__waitForEndOfFrame_37() { return &____waitForEndOfFrame_37; }
	inline void set__waitForEndOfFrame_37(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * value)
	{
		____waitForEndOfFrame_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____waitForEndOfFrame_37), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
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


// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m58A51FA150C3A0C8F5868AF68C4FEA3896ED1752_gshared (Func_2_t78F21BB7B6C7D754A8C4D71ACB39668A8F967BA1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderBy<System.Object,System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m07E5F4A2FE5C2A651505F5DB0CF3ECE258F2B54D_gshared (RuntimeObject* ___source0, Func_2_t78F21BB7B6C7D754A8C4D71ACB39668A8F967BA1 * ___keySelector1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m7B696202BBB75B9EABAEA52D2D463236406A6302_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisRuntimeObject_mB1409EBBA8754AF8D1F56A6D5337931DB40C39D8_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Func`2<Mapbox.Examples.Voxels.VoxelData,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mCD478719723548C6E12D89305EE208EECF554A10 (Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m58A51FA150C3A0C8F5868AF68C4FEA3896ED1752_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderBy<Mapbox.Examples.Voxels.VoxelData,System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_OrderBy_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mBF00C43ACF732C51807D2918F15796B12003004D (RuntimeObject* ___source0, Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7 * ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7 *, const RuntimeMethod*))Enumerable_OrderBy_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m07E5F4A2FE5C2A651505F5DB0CF3ECE258F2B54D_gshared)(___source0, ___keySelector1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<Mapbox.Examples.Voxels.VoxelData>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * Enumerable_ToList_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_m078E1276721A44D63CE6F05D94A43B9906E3F728 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared)(___source0, method);
}
// System.Int32 System.Collections.Generic.List`1<Mapbox.Examples.Voxels.VoxelData>::get_Count()
inline int32_t List_1_get_Count_m88E0826830D6C42C874C280F965582D68A9D5392_inline (List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Mapbox.Examples.Voxels.VoxelData>::get_Item(System.Int32)
inline VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310 * List_1_get_Item_mD784C4B201AB3443B8E52973D5A141C37DCFC02E_inline (List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310 * (*) (List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m7B696202BBB75B9EABAEA52D2D463236406A6302_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<UnityEngine.Material>(System.String)
inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * Resources_Load_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m9408F72BD0D020C6C9E11C3D30F6236635CFA70F (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Material_t8927C00353A72755313F046D0CE85178AE8218EE * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared)(___path0, method);
}
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___source0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Material>::Invoke(!0)
inline void Action_1_Invoke_mA723CB9DC3CE0FFDE3C69F46483D43DAF59918E7 (Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0 *, Material_t8927C00353A72755313F046D0CE85178AE8218EE *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Boolean Vuplex.WebView.iOSWebView::get_Native2DModeEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSWebView_get_Native2DModeEnabled_mEC23DD6B8CAB5BC0267551E9B207F93AEA88F2DB_inline (iOSWebView_t6F9C3966310654822C871CE0B645D17FF023048A * __this, const RuntimeMethod* method);
// System.Boolean Vuplex.WebView.BaseWebView::get_IsDisposed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseWebView_get_IsDisposed_m2E3074FB2CA95D6EA3E1CCD834B3804FF796EA97_inline (BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9 * __this, const RuntimeMethod* method);
// System.Int32 Vuplex.WebView.iOSWebView::WebView_depositPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSWebView_WebView_depositPointer_m8EB4125303176A154D53B96384BEC0E583963F78 (intptr_t ___pointer0, const RuntimeMethod* method);
// System.IntPtr Vuplex.WebView.iOSWebView::WebView_getRenderFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSWebView_WebView_getRenderFunction_mA3DF1BB210998C8010B5068707B22C224355FCE9 (const RuntimeMethod* method);
// System.Void UnityEngine.GL::IssuePluginEvent(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_IssuePluginEvent_m32D9CA3BC8CFC8A03D57AE31D40F1CBEB928B88A (intptr_t ___callback0, int32_t ___eventID1, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_wordWrap_mB6D788509ADD7BBDEFFB4409E5719FF14DC9A684 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_imagePosition(UnityEngine.ImagePosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_imagePosition_mE650EF31D86572D41CAED2F20B098AE471AD04F4 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// Vuplex.WebView.IWebView Vuplex.WebView.BaseWebViewPrefab::get_WebView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseWebViewPrefab_get_WebView_m95629F8B1256FBADB9ADC7770DE7958F2EA23156 (BaseWebViewPrefab_t0E341971F6C260BD4EEC9336C16728CDEA6BF7B7 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1 (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  (*) (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,JSCom/<>c__DisplayClass7_0/<<ExcuteJavaScript>b__0>d>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CU3CExcuteJavaScriptU3Eb__0U3Ed_t8457EF3A2FF22012B77DE6D1E145E6D45FF0D03E_m475E2490F947664E79A22992F8C447BBB7B2F461 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * ___awaiter0, U3CU3CExcuteJavaScriptU3Eb__0U3Ed_t8457EF3A2FF22012B77DE6D1E145E6D45FF0D03E ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, U3CU3CExcuteJavaScriptU3Eb__0U3Ed_t8457EF3A2FF22012B77DE6D1E145E6D45FF0D03E **, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisRuntimeObject_mB1409EBBA8754AF8D1F56A6D5337931DB40C39D8_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895 (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mapbox.Unity.MeshGeneration.Factories.VectorTileFactory/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_mFC26F1B73D4886BC2F8B8EF3A005F0C4EE6058C8 (U3CU3Ec__DisplayClass13_0_tD51096156D8090011EDE9879EBADC6CFEC1385C5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mapbox.Unity.MeshGeneration.Factories.VectorTileFactory/<>c__DisplayClass13_0::<FindVectorLayerVisualizer>b__0(Mapbox.Unity.MeshGeneration.Interfaces.LayerVisualizerBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CFindVectorLayerVisualizerU3Eb__0_mAD1370E89A6292585995F68009C25DD69A599C84 (U3CU3Ec__DisplayClass13_0_tD51096156D8090011EDE9879EBADC6CFEC1385C5 * __this, LayerVisualizerBase_t053BD1F0B887C15925A6589933F5059B68704BB0 * ___obj0, const RuntimeMethod* method)
{
	{
		// var visualizer = _layerBuilder[subLayer.Key].Find((obj) => obj.SubLayerProperties == subLayer);
		LayerVisualizerBase_t053BD1F0B887C15925A6589933F5059B68704BB0 * L_0 = ___obj0;
		NullCheck(L_0);
		VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204 * L_1;
		L_1 = VirtFuncInvoker0< VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204 * >::Invoke(7 /* Mapbox.Unity.Map.VectorSubLayerProperties Mapbox.Unity.MeshGeneration.Interfaces.LayerVisualizerBase::get_SubLayerProperties() */, L_0);
		VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204 * L_2 = __this->get_subLayer_0();
		return (bool)((((RuntimeObject*)(VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204 *)L_1) == ((RuntimeObject*)(VectorSubLayerProperties_tAA9AAFFC6F69EAA1FDE4219D099527203B2D8204 *)L_2))? 1 : 0);
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
// System.Void Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildRoutineU3Ed__27__ctor_m0B8919E93FA333B95BDE8DD79D5B3A3CBA2F1443 (U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildRoutineU3Ed__27_System_IDisposable_Dispose_m7CAC623BCD0EF90EF3DD2C2DC21210C2AFADE34C (U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBuildRoutineU3Ed__27_MoveNext_m738E223B3783C8F138DACB123EDB8F55A48E8C8D (U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mBF00C43ACF732C51807D2918F15796B12003004D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_m078E1276721A44D63CE6F05D94A43B9906E3F728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mCD478719723548C6E12D89305EE208EECF554A10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m88E0826830D6C42C874C280F965582D68A9D5392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD784C4B201AB3443B8E52973D5A141C37DCFC02E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelTile_U3CBuildRoutineU3Eb__27_0_m8BC543C8B0F7C0C1348B1261916A5824C7638A62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_012a;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var distanceOrderedVoxels = _voxels.OrderBy(x => (_camera.transform.position - x.Position).magnitude).ToList();
		VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * L_4 = L_3->get__voxels_18();
		VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * L_5 = __this->get_U3CU3E4__this_2();
		Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7 * L_6 = (Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7 *)il2cpp_codegen_object_new(Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7_il2cpp_TypeInfo_var);
		Func_2__ctor_mCD478719723548C6E12D89305EE208EECF554A10(L_6, L_5, (intptr_t)((intptr_t)VoxelTile_U3CBuildRoutineU3Eb__27_0_m8BC543C8B0F7C0C1348B1261916A5824C7638A62_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mCD478719723548C6E12D89305EE208EECF554A10_RuntimeMethod_var);
		RuntimeObject* L_7;
		L_7 = Enumerable_OrderBy_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mBF00C43ACF732C51807D2918F15796B12003004D(L_4, L_6, /*hidden argument*/Enumerable_OrderBy_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mBF00C43ACF732C51807D2918F15796B12003004D_RuntimeMethod_var);
		List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * L_8;
		L_8 = Enumerable_ToList_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_m078E1276721A44D63CE6F05D94A43B9906E3F728(L_7, /*hidden argument*/Enumerable_ToList_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_m078E1276721A44D63CE6F05D94A43B9906E3F728_RuntimeMethod_var);
		__this->set_U3CdistanceOrderedVoxelsU3E5__1_3(L_8);
		// for (int i = 0; i < distanceOrderedVoxels.Count; i += _voxelBatchCount)
		__this->set_U3CiU3E5__2_4(0);
		goto IL_014a;
	}

IL_005b:
	{
		// for (int j = 0; j < _voxelBatchCount; j++)
		__this->set_U3CjU3E5__3_5(0);
		goto IL_0100;
	}

IL_0068:
	{
		// var index = i + j;
		int32_t L_9 = __this->get_U3CiU3E5__2_4();
		int32_t L_10 = __this->get_U3CjU3E5__3_5();
		__this->set_U3CindexU3E5__4_6(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)));
		// if (index < distanceOrderedVoxels.Count)
		int32_t L_11 = __this->get_U3CindexU3E5__4_6();
		List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * L_12 = __this->get_U3CdistanceOrderedVoxelsU3E5__1_3();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m88E0826830D6C42C874C280F965582D68A9D5392_inline(L_12, /*hidden argument*/List_1_get_Count_m88E0826830D6C42C874C280F965582D68A9D5392_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_11) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_00ef;
		}
	}
	{
		// var voxel = distanceOrderedVoxels[index];
		List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * L_15 = __this->get_U3CdistanceOrderedVoxelsU3E5__1_3();
		int32_t L_16 = __this->get_U3CindexU3E5__4_6();
		NullCheck(L_15);
		VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310 * L_17;
		L_17 = List_1_get_Item_mD784C4B201AB3443B8E52973D5A141C37DCFC02E_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_mD784C4B201AB3443B8E52973D5A141C37DCFC02E_RuntimeMethod_var);
		__this->set_U3CvoxelU3E5__5_7(L_17);
		// _instantiatedVoxels.Add(Instantiate(voxel.Prefab, voxel.Position, Quaternion.identity, transform) as GameObject);
		VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * L_18 = __this->get_U3CU3E4__this_2();
		NullCheck(L_18);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_19 = L_18->get__instantiatedVoxels_19();
		VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310 * L_20 = __this->get_U3CvoxelU3E5__5_7();
		NullCheck(L_20);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = L_20->get_Prefab_1();
		VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310 * L_22 = __this->get_U3CvoxelU3E5__5_7();
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = L_22->get_Position_0();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24;
		L_24 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * L_25 = __this->get_U3CU3E4__this_2();
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_21, L_23, L_24, L_26, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		NullCheck(L_19);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_19, L_27, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		__this->set_U3CvoxelU3E5__5_7((VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310 *)NULL);
	}

IL_00ef:
	{
		// for (int j = 0; j < _voxelBatchCount; j++)
		int32_t L_28 = __this->get_U3CjU3E5__3_5();
		V_2 = L_28;
		int32_t L_29 = V_2;
		__this->set_U3CjU3E5__3_5(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)));
	}

IL_0100:
	{
		// for (int j = 0; j < _voxelBatchCount; j++)
		int32_t L_30 = __this->get_U3CjU3E5__3_5();
		VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * L_31 = __this->get_U3CU3E4__this_2();
		NullCheck(L_31);
		int32_t L_32 = L_31->get__voxelBatchCount_11();
		V_3 = (bool)((((int32_t)L_30) < ((int32_t)L_32))? 1 : 0);
		bool L_33 = V_3;
		if (L_33)
		{
			goto IL_0068;
		}
	}
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_012a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < distanceOrderedVoxels.Count; i += _voxelBatchCount)
		int32_t L_34 = __this->get_U3CiU3E5__2_4();
		VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * L_35 = __this->get_U3CU3E4__this_2();
		NullCheck(L_35);
		int32_t L_36 = L_35->get__voxelBatchCount_11();
		__this->set_U3CiU3E5__2_4(((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)L_36)));
	}

IL_014a:
	{
		// for (int i = 0; i < distanceOrderedVoxels.Count; i += _voxelBatchCount)
		int32_t L_37 = __this->get_U3CiU3E5__2_4();
		List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * L_38 = __this->get_U3CdistanceOrderedVoxelsU3E5__1_3();
		NullCheck(L_38);
		int32_t L_39;
		L_39 = List_1_get_Count_m88E0826830D6C42C874C280F965582D68A9D5392_inline(L_38, /*hidden argument*/List_1_get_Count_m88E0826830D6C42C874C280F965582D68A9D5392_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_37) < ((int32_t)L_39))? 1 : 0);
		bool L_40 = V_4;
		if (L_40)
		{
			goto IL_005b;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBuildRoutineU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0DB9EC10F91D4D7D02C5AD56DF97AEDF2128A9FA (U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildRoutineU3Ed__27_System_Collections_IEnumerator_Reset_m04332478F50334727E80E32D39A2AF9C186EEA34 (U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBuildRoutineU3Ed__27_System_Collections_IEnumerator_Reset_m04332478F50334727E80E32D39A2AF9C186EEA34_RuntimeMethod_var)));
	}
}
// System.Object Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBuildRoutineU3Ed__27_System_Collections_IEnumerator_get_Current_m634DD817D9163EE06846A5DA8C0D1E3B23BE77F3 (U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4 * __this, const RuntimeMethod* method)
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
// System.Void Vuplex.WebView.iOSWebPlugin/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mB41FC76B7903172B2D5DB2604275FC59E1182636 (U3CU3Ec__DisplayClass6_0_t54688621AEDC0934BB96EBA50AB1C9FFB275F5F1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebPlugin/<>c__DisplayClass6_0::<CreateMaterial>b__0(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CCreateMaterialU3Eb__0_mE364DDA57E5433AF78443A6E241D099E1F9A2949 (U3CU3Ec__DisplayClass6_0_t54688621AEDC0934BB96EBA50AB1C9FFB275F5F1 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mA723CB9DC3CE0FFDE3C69F46483D43DAF59918E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m9408F72BD0D020C6C9E11C3D30F6236635CFA70F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral930EDD56406E5AF72EE12437B33D92A25014F76C);
		s_Il2CppMethodInitialized = true;
	}
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_0 = NULL;
	{
		// var material = new Material(Resources.Load<Material>("iOSViewportMaterial"));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0;
		L_0 = Resources_Load_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m9408F72BD0D020C6C9E11C3D30F6236635CFA70F(_stringLiteral930EDD56406E5AF72EE12437B33D92A25014F76C, /*hidden argument*/Resources_Load_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m9408F72BD0D020C6C9E11C3D30F6236635CFA70F_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// material.mainTexture = texture;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = V_0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = ___texture0;
		NullCheck(L_2);
		Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5(L_2, L_3, /*hidden argument*/NULL);
		// callback(material);
		Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0 * L_4 = __this->get_callback_0();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = V_0;
		NullCheck(L_4);
		Action_1_Invoke_mA723CB9DC3CE0FFDE3C69F46483D43DAF59918E7(L_4, L_5, /*hidden argument*/Action_1_Invoke_mA723CB9DC3CE0FFDE3C69F46483D43DAF59918E7_RuntimeMethod_var);
		// });
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
// System.Void Vuplex.WebView.iOSWebPlugin/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m2E37C157921D5E0B8F2B9F052C3316FF96F1D642 (U3CU3Ec__DisplayClass7_0_tA394A0EB1E0822ADAC182BCD5C924E6DC6B9CB76 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebPlugin/<>c__DisplayClass7_0::<CreateVideoMaterial>b__0(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CCreateVideoMaterialU3Eb__0_m8F26C62E6439A5E08AC58580BE65AA6DA6C629B0 (U3CU3Ec__DisplayClass7_0_tA394A0EB1E0822ADAC182BCD5C924E6DC6B9CB76 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mA723CB9DC3CE0FFDE3C69F46483D43DAF59918E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m9408F72BD0D020C6C9E11C3D30F6236635CFA70F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29B2F8783E410CE10F7BB0B78AEE135CC0B8CF6F);
		s_Il2CppMethodInitialized = true;
	}
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_0 = NULL;
	{
		// var material = new Material(Resources.Load<Material>("iOSVideoMaterial"));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0;
		L_0 = Resources_Load_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m9408F72BD0D020C6C9E11C3D30F6236635CFA70F(_stringLiteral29B2F8783E410CE10F7BB0B78AEE135CC0B8CF6F, /*hidden argument*/Resources_Load_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_m9408F72BD0D020C6C9E11C3D30F6236635CFA70F_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// material.mainTexture = texture;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = V_0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = ___texture0;
		NullCheck(L_2);
		Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5(L_2, L_3, /*hidden argument*/NULL);
		// callback(material);
		Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0 * L_4 = __this->get_callback_0();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = V_0;
		NullCheck(L_4);
		Action_1_Invoke_mA723CB9DC3CE0FFDE3C69F46483D43DAF59918E7(L_4, L_5, /*hidden argument*/Action_1_Invoke_mA723CB9DC3CE0FFDE3C69F46483D43DAF59918E7_RuntimeMethod_var);
		// });
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
// System.Void Vuplex.WebView.iOSWebView/<_renderPluginOncePerFrame>d__58::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_renderPluginOncePerFrameU3Ed__58__ctor_m77B1B7164933FE42DEBC7EEEF30EEC7867AB1E08 (U3C_renderPluginOncePerFrameU3Ed__58_tA94517BC082A5B5588B8D4805C1C6A0D8B61B6C9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Vuplex.WebView.iOSWebView/<_renderPluginOncePerFrame>d__58::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_renderPluginOncePerFrameU3Ed__58_System_IDisposable_Dispose_m8767FA8B52E057C241B2B76AA0467C0F69D89870 (U3C_renderPluginOncePerFrameU3Ed__58_tA94517BC082A5B5588B8D4805C1C6A0D8B61B6C9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Vuplex.WebView.iOSWebView/<_renderPluginOncePerFrame>d__58::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3C_renderPluginOncePerFrameU3Ed__58_MoveNext_mC6C3F59A1CFC7E78E9A4E93459FDE72209C3EE5F (U3C_renderPluginOncePerFrameU3Ed__58_tA94517BC082A5B5588B8D4805C1C6A0D8B61B6C9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B14_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_003d;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_00a0;
	}

IL_0022:
	{
		// yield return _waitForEndOfFrame;
		iOSWebView_t6F9C3966310654822C871CE0B645D17FF023048A * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_4 = L_3->get__waitForEndOfFrame_37();
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (Native2DModeEnabled) {
		iOSWebView_t6F9C3966310654822C871CE0B645D17FF023048A * L_5 = __this->get_U3CU3E4__this_2();
		NullCheck(L_5);
		bool L_6;
		L_6 = iOSWebView_get_Native2DModeEnabled_mEC23DD6B8CAB5BC0267551E9B207F93AEA88F2DB_inline(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		// break;
		goto IL_00a7;
	}

IL_0056:
	{
		// if (!_renderingEnabled || IsDisposed) {
		iOSWebView_t6F9C3966310654822C871CE0B645D17FF023048A * L_8 = __this->get_U3CU3E4__this_2();
		NullCheck(L_8);
		bool L_9 = ((BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9 *)L_8)->get__renderingEnabled_27();
		if (!L_9)
		{
			goto IL_0070;
		}
	}
	{
		iOSWebView_t6F9C3966310654822C871CE0B645D17FF023048A * L_10 = __this->get_U3CU3E4__this_2();
		NullCheck(L_10);
		bool L_11;
		L_11 = BaseWebView_get_IsDisposed_m2E3074FB2CA95D6EA3E1CCD834B3804FF796EA97_inline(L_10, /*hidden argument*/NULL);
		G_B14_0 = ((int32_t)(L_11));
		goto IL_0071;
	}

IL_0070:
	{
		G_B14_0 = 1;
	}

IL_0071:
	{
		V_2 = (bool)G_B14_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0078;
		}
	}
	{
		// continue;
		goto IL_00a0;
	}

IL_0078:
	{
		// int pointerId = WebView_depositPointer(_nativeWebViewPtr);
		iOSWebView_t6F9C3966310654822C871CE0B645D17FF023048A * L_13 = __this->get_U3CU3E4__this_2();
		NullCheck(L_13);
		intptr_t L_14 = ((BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9 *)L_13)->get__nativeWebViewPtr_22();
		int32_t L_15;
		L_15 = iOSWebView_WebView_depositPointer_m8EB4125303176A154D53B96384BEC0E583963F78((intptr_t)L_14, /*hidden argument*/NULL);
		__this->set_U3CpointerIdU3E5__1_3(L_15);
		// GL.IssuePluginEvent(WebView_getRenderFunction(), pointerId);
		intptr_t L_16;
		L_16 = iOSWebView_WebView_getRenderFunction_mA3DF1BB210998C8010B5068707B22C224355FCE9(/*hidden argument*/NULL);
		int32_t L_17 = __this->get_U3CpointerIdU3E5__1_3();
		GL_IssuePluginEvent_m32D9CA3BC8CFC8A03D57AE31D40F1CBEB928B88A((intptr_t)L_16, L_17, /*hidden argument*/NULL);
	}

IL_00a0:
	{
		// while (true) {
		V_3 = (bool)1;
		goto IL_0022;
	}

IL_00a7:
	{
		// }
		return (bool)0;
	}
}
// System.Object Vuplex.WebView.iOSWebView/<_renderPluginOncePerFrame>d__58::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3C_renderPluginOncePerFrameU3Ed__58_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB593B0E681DEC43EB3F999AE70D6DBCEF5566279 (U3C_renderPluginOncePerFrameU3Ed__58_tA94517BC082A5B5588B8D4805C1C6A0D8B61B6C9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Vuplex.WebView.iOSWebView/<_renderPluginOncePerFrame>d__58::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_renderPluginOncePerFrameU3Ed__58_System_Collections_IEnumerator_Reset_mCA2128FC6D77F5A38873919D414484CBD1C43A9E (U3C_renderPluginOncePerFrameU3Ed__58_tA94517BC082A5B5588B8D4805C1C6A0D8B61B6C9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3C_renderPluginOncePerFrameU3Ed__58_System_Collections_IEnumerator_Reset_mCA2128FC6D77F5A38873919D414484CBD1C43A9E_RuntimeMethod_var)));
	}
}
// System.Object Vuplex.WebView.iOSWebView/<_renderPluginOncePerFrame>d__58::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3C_renderPluginOncePerFrameU3Ed__58_System_Collections_IEnumerator_get_Current_m1FD39BA10C77866A9D2B3E0AFB155689B7DE6F33 (U3C_renderPluginOncePerFrameU3Ed__58_tA94517BC082A5B5588B8D4805C1C6A0D8B61B6C9 * __this, const RuntimeMethod* method)
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
// System.Void Mapbox.Unity.Constants/GUI/Colors::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Colors__cctor_mC3C959146F9C4D1CA5B50F879B8CE77CE5CE49AE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly Color EDITOR_TEXT_COLOR = new Color(0.7f, 0.7f, 0.7f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_0), (0.699999988f), (0.699999988f), (0.699999988f), /*hidden argument*/NULL);
		((Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields*)il2cpp_codegen_static_fields_for(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var))->set_EDITOR_TEXT_COLOR_0(L_0);
		// public static readonly Color EDITOR_NOTE_COLOR = new Color(1.0f, 0.8f, 0.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_1), (1.0f), (0.800000012f), (0.0f), /*hidden argument*/NULL);
		((Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields*)il2cpp_codegen_static_fields_for(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var))->set_EDITOR_NOTE_COLOR_1(L_1);
		// public static readonly Color EDITOR_FEATURE_DEFAULT_COLOR = new Color(0.1764706f, 0.8509805f, 1.0f, 1.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_2), (0.176470593f), (0.85098052f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields*)il2cpp_codegen_static_fields_for(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var))->set_EDITOR_FEATURE_DEFAULT_COLOR_2(L_2);
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
// System.Void Mapbox.Unity.Constants/GUI/Styles::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Styles__cctor_m0C8D2A1B018039E7B1145FAF284772F28526F9D7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Styles_tC2114566EF266EDE02B1538CCED728740517B148_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly GUIStyle EDITOR_NOTE_STYLE = new GUIStyle { wordWrap = true, normal = { textColor = Colors.EDITOR_NOTE_COLOR } };
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_0, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = L_0;
		NullCheck(L_1);
		GUIStyle_set_wordWrap_mB6D788509ADD7BBDEFFB4409E5719FF14DC9A684(L_1, (bool)1, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_2 = L_1;
		NullCheck(L_2);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_3;
		L_3 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ((Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields*)il2cpp_codegen_static_fields_for(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var))->get_EDITOR_NOTE_COLOR_1();
		NullCheck(L_3);
		GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A(L_3, L_4, /*hidden argument*/NULL);
		((Styles_tC2114566EF266EDE02B1538CCED728740517B148_StaticFields*)il2cpp_codegen_static_fields_for(Styles_tC2114566EF266EDE02B1538CCED728740517B148_il2cpp_TypeInfo_var))->set_EDITOR_NOTE_STYLE_0(L_2);
		// public static readonly GUIStyle EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE = new GUIStyle { wordWrap = true, normal = { textColor = Colors.EDITOR_TEXT_COLOR } };
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_5 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_5, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_6 = L_5;
		NullCheck(L_6);
		GUIStyle_set_wordWrap_mB6D788509ADD7BBDEFFB4409E5719FF14DC9A684(L_6, (bool)1, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_7 = L_6;
		NullCheck(L_7);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_8;
		L_8 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_7, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = ((Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields*)il2cpp_codegen_static_fields_for(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var))->get_EDITOR_TEXT_COLOR_0();
		NullCheck(L_8);
		GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A(L_8, L_9, /*hidden argument*/NULL);
		((Styles_tC2114566EF266EDE02B1538CCED728740517B148_StaticFields*)il2cpp_codegen_static_fields_for(Styles_tC2114566EF266EDE02B1538CCED728740517B148_il2cpp_TypeInfo_var))->set_EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1(L_7);
		// public static readonly GUIStyle EDITOR_TEXTURE_THUMBNAIL_STYLE = new GUIStyle { imagePosition = ImagePosition.ImageOnly, wordWrap = true };
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_10 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_10, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_11 = L_10;
		NullCheck(L_11);
		GUIStyle_set_imagePosition_mE650EF31D86572D41CAED2F20B098AE471AD04F4(L_11, 2, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_12 = L_11;
		NullCheck(L_12);
		GUIStyle_set_wordWrap_mB6D788509ADD7BBDEFFB4409E5719FF14DC9A684(L_12, (bool)1, /*hidden argument*/NULL);
		((Styles_tC2114566EF266EDE02B1538CCED728740517B148_StaticFields*)il2cpp_codegen_static_fields_for(Styles_tC2114566EF266EDE02B1538CCED728740517B148_il2cpp_TypeInfo_var))->set_EDITOR_TEXTURE_THUMBNAIL_STYLE_2(L_12);
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
// System.Void JSCom/<>c__DisplayClass7_0/<<ExcuteJavaScript>b__0>d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CExcuteJavaScriptU3Eb__0U3Ed__ctor_mEB3FB9294A428C9B589D36DE779E638ADD612A37 (U3CU3CExcuteJavaScriptU3Eb__0U3Ed_t8457EF3A2FF22012B77DE6D1E145E6D45FF0D03E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JSCom/<>c__DisplayClass7_0/<<ExcuteJavaScript>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CExcuteJavaScriptU3Eb__0U3Ed_MoveNext_mC44D52732A983AE8CA8C2812AEB84E3BE2687889 (U3CU3CExcuteJavaScriptU3Eb__0U3Ed_t8457EF3A2FF22012B77DE6D1E145E6D45FF0D03E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CU3CExcuteJavaScriptU3Eb__0U3Ed_t8457EF3A2FF22012B77DE6D1E145E6D45FF0D03E_m475E2490F947664E79A22992F8C447BBB7B2F461_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t2A8AD5915D9A2817DDF17237F2A4BE7704DDACC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A1C2915FB99314605150EDC61A8759FB6FDA12E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CU3CExcuteJavaScriptU3Eb__0U3Ed_t8457EF3A2FF22012B77DE6D1E145E6D45FF0D03E * V_3 = NULL;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_0080;
		}

IL_000e:
		{
			// if (eventArgs.Type == ProgressChangeType.Finished)
			ProgressChangedEventArgs_t1E932488A49A8E10A0278FD4E62A82B884BEB11B * L_2 = __this->get_eventArgs_3();
			NullCheck(L_2);
			int32_t L_3 = L_2->get_Type_2();
			V_1 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0101;
			}
		}

IL_0024:
		{
			// var headerText = await webViewPrefab.WebView.ExecuteJavaScript(myJS);
			U3CU3Ec__DisplayClass7_0_t52CD5CAA203755EC9D6A5193FED056055179D7A6 * L_5 = __this->get_U3CU3E4__this_4();
			NullCheck(L_5);
			JSCom_t405735338C026C27A23A4739D94D75A1261A93FC * L_6 = L_5->get_U3CU3E4__this_0();
			NullCheck(L_6);
			CanvasWebViewPrefab_tBA29146094CB4C872D4879E97AC68DA099409180 * L_7 = L_6->get_webViewPrefab_4();
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = BaseWebViewPrefab_get_WebView_m95629F8B1256FBADB9ADC7770DE7958F2EA23156(L_7, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass7_0_t52CD5CAA203755EC9D6A5193FED056055179D7A6 * L_9 = __this->get_U3CU3E4__this_4();
			NullCheck(L_9);
			String_t* L_10 = L_9->get_myJS_1();
			NullCheck(L_8);
			Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_11;
			L_11 = InterfaceFuncInvoker1< Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 *, String_t* >::Invoke(43 /* System.Threading.Tasks.Task`1<System.String> Vuplex.WebView.IWebView::ExecuteJavaScript(System.String) */, IWebView_t2A8AD5915D9A2817DDF17237F2A4BE7704DDACC0_il2cpp_TypeInfo_var, L_8, L_10);
			NullCheck(L_11);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_12;
			L_12 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_11, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
			V_2 = L_12;
			bool L_13;
			L_13 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_009c;
			}
		}

IL_0059:
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_15 = V_2;
			__this->set_U3CU3Eu__1_7(L_15);
			V_3 = __this;
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CU3CExcuteJavaScriptU3Eb__0U3Ed_t8457EF3A2FF22012B77DE6D1E145E6D45FF0D03E_m475E2490F947664E79A22992F8C447BBB7B2F461((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_16, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_2), (U3CU3CExcuteJavaScriptU3Eb__0U3Ed_t8457EF3A2FF22012B77DE6D1E145E6D45FF0D03E **)(&V_3), /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CU3CExcuteJavaScriptU3Eb__0U3Ed_t8457EF3A2FF22012B77DE6D1E145E6D45FF0D03E_m475E2490F947664E79A22992F8C447BBB7B2F461_RuntimeMethod_var);
			goto IL_0131;
		}

IL_0080:
		{
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_17 = __this->get_U3CU3Eu__1_7();
			V_2 = L_17;
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_18 = __this->get_address_of_U3CU3Eu__1_7();
			il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->set_U3CU3E1__state_0(L_19);
		}

IL_009c:
		{
			String_t* L_20;
			L_20 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
			__this->set_U3CU3Es__2_6(L_20);
			String_t* L_21 = __this->get_U3CU3Es__2_6();
			__this->set_U3CheaderTextU3E5__1_5(L_21);
			__this->set_U3CU3Es__2_6((String_t*)NULL);
			// infoText.text += headerText;
			U3CU3Ec__DisplayClass7_0_t52CD5CAA203755EC9D6A5193FED056055179D7A6 * L_22 = __this->get_U3CU3E4__this_4();
			NullCheck(L_22);
			JSCom_t405735338C026C27A23A4739D94D75A1261A93FC * L_23 = L_22->get_U3CU3E4__this_0();
			NullCheck(L_23);
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_24 = L_23->get_infoText_5();
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_25 = L_24;
			NullCheck(L_25);
			String_t* L_26;
			L_26 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_25);
			String_t* L_27 = __this->get_U3CheaderTextU3E5__1_5();
			String_t* L_28;
			L_28 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_26, L_27, /*hidden argument*/NULL);
			NullCheck(L_25);
			VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_28);
			// Debug.Log("my text is " + headerText);
			String_t* L_29 = __this->get_U3CheaderTextU3E5__1_5();
			String_t* L_30;
			L_30 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral7A1C2915FB99314605150EDC61A8759FB6FDA12E, L_29, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_30, /*hidden argument*/NULL);
			__this->set_U3CheaderTextU3E5__1_5((String_t*)NULL);
		}

IL_0101:
		{
			goto IL_011d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0103;
		}
		throw e;
	}

CATCH_0103:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_31 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_32 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_31, L_32, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0131;
	} // end catch (depth: 1)

IL_011d:
	{
		// };
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_33 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_33, /*hidden argument*/NULL);
	}

IL_0131:
	{
		return;
	}
}
// System.Void JSCom/<>c__DisplayClass7_0/<<ExcuteJavaScript>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CExcuteJavaScriptU3Eb__0U3Ed_SetStateMachine_mCD96E677B53A635FB9B6E72891E3E4CFEFDF38A2 (U3CU3CExcuteJavaScriptU3Eb__0U3Ed_t8457EF3A2FF22012B77DE6D1E145E6D45FF0D03E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSWebView_get_Native2DModeEnabled_mEC23DD6B8CAB5BC0267551E9B207F93AEA88F2DB_inline (iOSWebView_t6F9C3966310654822C871CE0B645D17FF023048A * __this, const RuntimeMethod* method)
{
	{
		// public bool Native2DModeEnabled { get; private set; }
		bool L_0 = __this->get_U3CNative2DModeEnabledU3Ek__BackingField_33();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseWebView_get_IsDisposed_m2E3074FB2CA95D6EA3E1CCD834B3804FF796EA97_inline (BaseWebView_t799624BD9A0D9BEE428CCA1D9A5CEA6C232026E9 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsDisposed { get; protected set; }
		bool L_0 = __this->get_U3CIsDisposedU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
