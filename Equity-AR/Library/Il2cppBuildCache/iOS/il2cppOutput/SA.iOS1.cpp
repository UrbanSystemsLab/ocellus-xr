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
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.DateTime>
struct Action_1_t2B33C6C2E077C8AA0861FADB5453D90C6F9A7B97;
// System.Action`1<SA.iOS.Contacts.ISN_CNContactsResult>
struct Action_1_t93AFA1AE027C78386A3DAF5B255C378893B62690;
// System.Action`1<SA.iOS.GameKit.ISN_GKLoadDefaultLeaderboardResult>
struct Action_1_t297BE403C517D6F098CCAD063217CC4522C4C280;
// System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameFetchResult>
struct Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741;
// System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameLoadResult>
struct Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4;
// System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameSaveResult>
struct Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33;
// System.Action`1<SA.iOS.GameKit.ISN_GKScoreLoadResult>
struct Action_1_tF3DE25E536BCA9529D0526BD696C217D9BDE1941;
// System.Action`1<SA.iOS.Social.ISN_MessageComposeResult>
struct Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498;
// System.Action`1<SA.iOS.ReplayKit.ISN_PRPreviewResult>
struct Action_1_t188D50561FE00C43EEC15D580F8275871ED91CC8;
// System.Action`1<SA.iOS.ReplayKit.ISN_RPStopResult>
struct Action_1_t17F5618884671AD79DC13716497D94B79820F327;
// System.Action`1<SA.iOS.StoreKit.ISN_SKInitResult>
struct Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189;
// System.Action`1<SA.iOS.StoreKit.ISN_SKProduct>
struct Action_1_t30CDCE9A41808D71965EB27032C972CD5B867AF3;
// System.Action`1<SA.iOS.UIKit.ISN_UIPickerControllerResult>
struct Action_1_t33C7AA5928E86B6367AFDBF1055EB7751D2D699C;
// System.Action`1<SA.iOS.StoreKit.ISN_iSKPaymentTransaction>
struct Action_1_t7EA3C9CDA20C4F7D638DE4ACDE8CD92738372C96;
// System.Action`1<System.Int32Enum>
struct Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<SA.Foundation.Templates.SA_Result>
struct Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20;
// System.Collections.Generic.Dictionary`2<System.String,SA.iOS.StoreKit.ISN_SKProduct>
struct Dictionary_2_tC2985B17C01F696AE46A04BD1272D18586AA11AD;
// System.Func`2<SA.iOS.AuthenticationServices.ISN_ASAuthorizationRequest,System.String>
struct Func_2_t879FBF6683CEB200D6AA7587414E7192279A30A5;
// System.Func`2<SA.iOS.AuthenticationServices.ISN_ASAuthorizationScope,System.String>
struct Func_2_tEA31683D59A13276AF709C6B04E0214B2C1C4F57;
// SA.iOS.Utilities.ISN_Singleton`1<System.Object>
struct ISN_Singleton_1_tCFF7CF4983BE62DA9FD5684ECF2E5D2A5D5CF507;
// SA.iOS.Utilities.ISN_Singleton`1<SA.iOS.Social.ISN_Facebook/NativeListener>
struct ISN_Singleton_1_t52D89AE00A37AFC230CB211D33F9D3F76FC86CD6;
// SA.iOS.Utilities.ISN_Singleton`1<SA.iOS.Social.ISN_Instagram/NativeListener>
struct ISN_Singleton_1_t738E8E6DAD0DD066BFFE46293306B1EEF45CB95B;
// SA.iOS.Utilities.ISN_Singleton`1<SA.iOS.Social.ISN_Mail/NativeListener>
struct ISN_Singleton_1_tA408106398E41BA8BE78F0BB1B1E3B751E40688E;
// SA.iOS.Utilities.ISN_Singleton`1<SA.iOS.Social.ISN_TextMessage/NativeListener>
struct ISN_Singleton_1_t49FEC97025D75E045CA2B1EF40E9DBD04AB1F8B6;
// SA.iOS.Utilities.ISN_Singleton`1<SA.iOS.Social.ISN_Twitter/NativeListener>
struct ISN_Singleton_1_tAF891CCAF9214C8BFF2DDD4450764709A8F49569;
// System.Collections.Generic.List`1<SA.Foundation.Events.SA_Event`1/SafeActionInfo<SA.iOS.StoreKit.ISN_iSKPaymentTransaction>>
struct List_1_t0F65018102BD8F91AE7AD3AEA1D0A9F3B9C5FCB1;
// System.Collections.Generic.List`1<SA.iOS.Contacts.ISN_CNContact>
struct List_1_t0F4B332F375C4FD5A1EB84B0C3A98AB8E3938395;
// System.Collections.Generic.List`1<SA.iOS.GameKit.ISN_GKAchievement>
struct List_1_t4AA71A9A2338D3E5F86C232C087F57785B25F6D5;
// System.Collections.Generic.List`1<SA.iOS.GameKit.ISN_GKSavedGame>
struct List_1_t6BEBFE77F805B78C9D3C9EE8B4C4E6A27B1AE641;
// System.Collections.Generic.List`1<SA.iOS.GameKit.ISN_GKScore>
struct List_1_t08BB076155DD422337809CD51D7A12C5C78F05BC;
// System.Collections.Generic.List`1<SA.iOS.StoreKit.ISN_SKProduct>
struct List_1_t2D723F9BB968A2CB16CAEB637951A33404D5E48C;
// System.Collections.Generic.List`1<SA.iOS.UIKit.ISN_UIAlertAction>
struct List_1_t26E5867239E0CEE830EF38FA7A3C1898B9061037;
// System.Collections.Generic.List`1<SA.iOS.UIKit.ISN_UIApplicationShortcutItem>
struct List_1_t6A30C5609DA0FA69B8061C339F280DF032648CD0;
// System.Collections.Generic.List`1<SA.iOS.UIKit.ISN_UIUrlType>
struct List_1_t2C364BC8501E2C690B34A8D0CCED091C143A09DE;
// System.Collections.Generic.List`1<SA.iOS.StoreKit.ISN_iSKPaymentTransactionObserver>
struct List_1_t5A6D69A90896741CD34AAFF072502D7844EDF7A3;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// SA.Foundation.Events.SA_Event`1<SA.iOS.StoreKit.ISN_SKProduct>
struct SA_Event_1_t1D7A76236A8FFAF846B558758C3B5464D5CE9260;
// SA.Foundation.Events.SA_Event`1<SA.iOS.StoreKit.ISN_iSKPaymentTransaction>
struct SA_Event_1_tE849E11935AC44EFC07E16AF67D4A70BC40A422C;
// SA.Foundation.Events.SA_Event`1<System.Object>
struct SA_Event_1_t2B5B1F6E90D8C2FDDCCA1AF8DF56D08FE29837FB;
// SA.Foundation.Events.SA_Event`1<SA.Foundation.Templates.SA_Result>
struct SA_Event_1_tE3A8DA1D167F4A4AF89190347E2BB3D60713102E;
// SA.Foundation.Events.SA_iEvent`1<SA.iOS.UserNotifications.ISN_UNNotification>
struct SA_iEvent_1_tDB559175AEDEDBA8CA1449C40976EE2342DD9DE9;
// SA.Foundation.Events.SA_iEvent`1<SA.iOS.UserNotifications.ISN_UNNotificationResponse>
struct SA_iEvent_1_t2F9F4E7515F7C5DD0A0E117A381AF32FFBC0F964;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// SA.iOS.GameKit.ISN_GKScore[]
struct ISN_GKScoreU5BU5D_t30BE6D311E8830FEF219B8E8267BD1B6EB712AC4;
// SA.iOS.StoreKit.ISN_SKProduct[]
struct ISN_SKProductU5BU5D_tE541403AAE38D40706000729BC2D4E0DE7FAB8AE;
// SA.iOS.StoreKit.ISN_iSKPaymentTransactionObserver[]
struct ISN_iSKPaymentTransactionObserverU5BU5D_t8D05BE7493627AE6113F02700D6A9F2638AF0E11;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// SA.iOS.AuthenticationServices.ISN_ASAuthorizationRequest
struct ISN_ASAuthorizationRequest_tAEE1757BCE033CB0C41F1CA0355AB7616B12CD79;
// SA.iOS.Contacts.ISN_CNContactsResult
struct ISN_CNContactsResult_tABC68FBC091A4AB69DC9872B9FC49390246A6E7D;
// SA.iOS.Contacts.Internal.ISN_CNEditorAPI
struct ISN_CNEditorAPI_t2397B4C523B9DEB554661F0D17CD308FF7A46AB8;
// SA.iOS.GameKit.ISN_GKLeaderboard
struct ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1;
// SA.iOS.GameKit.ISN_GKLoadDefaultLeaderboardResult
struct ISN_GKLoadDefaultLeaderboardResult_tE64A92BC175FD8A53E25F74D66B51190DC95C193;
// SA.iOS.GameKit.ISN_GKPlayer
struct ISN_GKPlayer_tC728E93D11A3D9166E012CB46705607F186DD46F;
// SA.iOS.GameKit.ISN_GKResolveSavedGamesRequest
struct ISN_GKResolveSavedGamesRequest_t63F2971A42475A746601E490454A56E7EB9631AF;
// SA.iOS.GameKit.ISN_GKSavedGame
struct ISN_GKSavedGame_t52515D9C97E72ACC06287D9E422E4D661BF038A2;
// SA.iOS.GameKit.ISN_GKSavedGameFetchResult
struct ISN_GKSavedGameFetchResult_t429317C838E84AD0264669DC43F5C4C5D23EE715;
// SA.iOS.GameKit.ISN_GKSavedGameLoadResult
struct ISN_GKSavedGameLoadResult_t01255EF9BF3D93463A616431A95EEF5BEC728C52;
// SA.iOS.GameKit.ISN_GKSavedGameSaveResult
struct ISN_GKSavedGameSaveResult_t79F7828795EB6CA14EE02D198BF136038F40F319;
// SA.iOS.GameKit.ISN_GKScore
struct ISN_GKScore_t61C79EFDE5BD5A770466331E28E6C7D520F08139;
// SA.iOS.GameKit.ISN_GKScoreLoadResult
struct ISN_GKScoreLoadResult_t57A8A5AEDF4143C5599DB1B6314E795F42AC5B13;
// SA.iOS.MediaPlayer.ISN_IMPMediaPickerControllerDelegate
struct ISN_IMPMediaPickerControllerDelegate_t416B5FE64904066E2206007D33732C0026F144E8;
// SA.iOS.Utilities.ISN_LogLevel
struct ISN_LogLevel_tDE6F0B554B0E8176D5C73179A916D7B514E92679;
// SA.iOS.MediaPlayer.ISN_MPMediaItemCollection
struct ISN_MPMediaItemCollection_tA22A8D7C54B8FD586195739E8678EFD4AD921BFE;
// SA.iOS.MediaPlayer.ISN_MPMediaPickerController
struct ISN_MPMediaPickerController_tE46DF789FC1F7CE0D0D599680D85106DD8B3193B;
// SA.iOS.Foundation.ISN_NSLocale
struct ISN_NSLocale_tEF536C568090D59F7F0C68E948B2DA5C5FF43272;
// SA.iOS.Foundation.ISN_NSRange
struct ISN_NSRange_t60353B7306C6294C931D84F824FD14F97A2F02FB;
// SA.iOS.Utilities.ISN_NativeObject
struct ISN_NativeObject_tCBEFEB9640F4BE02478CE5834ABB80EB299E044F;
// SA.iOS.ReplayKit.ISN_PRPreviewResult
struct ISN_PRPreviewResult_tD9D9A58600785C4A5CAA6B5C79648FEB9D6873DE;
// SA.iOS.ReplayKit.ISN_RPPreviewViewController
struct ISN_RPPreviewViewController_t5B55610C1A19F52C2941408B1A5DD353A77DFF7E;
// SA.iOS.ReplayKit.ISN_RPStopResult
struct ISN_RPStopResult_t309EF21FB3F3CCDA08FE47353642069F0314E362;
// SA.iOS.StoreKit.ISN_SKEditorAPI
struct ISN_SKEditorAPI_t04F1EEA2CC9A465E126DDBD91123FB3F959B1345;
// SA.iOS.StoreKit.ISN_SKInitResult
struct ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731;
// SA.iOS.StoreKit.ISN_SKPaymentOriginalTransaction
struct ISN_SKPaymentOriginalTransaction_tF9300731FDFEBE9DEB1FA78AC85D7026122E0C76;
// SA.iOS.StoreKit.ISN_SKPaymentTransaction
struct ISN_SKPaymentTransaction_tF41BFFFB76CBCFDADBB1E5E752EA8ADB53EFF12C;
// SA.iOS.StoreKit.ISN_SKProduct
struct ISN_SKProduct_tB70386270C96B57C2FB14E931332F98F0F186B15;
// SA.iOS.StoreKit.ISN_SKProductDiscount
struct ISN_SKProductDiscount_t2A84CBD55FF51721100726DA4B25A078DB1C82F9;
// SA.iOS.StoreKit.ISN_SKProductEditorData
struct ISN_SKProductEditorData_t5A75975F979B075D6CF23CEFB1E262BF3124F6B7;
// SA.iOS.StoreKit.ISN_SKProductSubscriptionPeriod
struct ISN_SKProductSubscriptionPeriod_t7B9C772EB3186D0D485FA57DA19AD9D7023C34C1;
// SA.iOS.ISN_Settings
struct ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3;
// SA.iOS.UIKit.ISN_UIAlertAction
struct ISN_UIAlertAction_t25272F021C3D4DEC1E8257EB31BBDC9855A1EB81;
// SA.iOS.UIKit.ISN_UIAlertController
struct ISN_UIAlertController_t7E492DF004875CDD24E30821D1BE5CF460BE5B0F;
// SA.iOS.UIKit.ISN_UIImagePickerController
struct ISN_UIImagePickerController_t5E19A899C36CEF2E58829CCD7D4EF76DCCF8E03F;
// SA.iOS.UIKit.ISN_UIPickerControllerRequest
struct ISN_UIPickerControllerRequest_t9E8E61943493A29045F8D2D1EEE9169C080FCDFC;
// SA.iOS.UIKit.ISN_UIPickerControllerResult
struct ISN_UIPickerControllerResult_tCA7C312FBEFBE946A75BD9E9FBBDEB77F88679CC;
// SA.iOS.UserNotifications.ISN_UNNotification
struct ISN_UNNotification_tB6E4CEA049D5E118C5B1CD57E7D21292DF0A2827;
// SA.iOS.UserNotifications.ISN_UNNotificationResponse
struct ISN_UNNotificationResponse_t30FAF666EEE812D1513DABBFB08BFFD1582B80AC;
// SA.iOS.StoreKit.ISN_iSKAPI
struct ISN_iSKAPI_tF0DAD2993BE274EB620FC7D9129F7CEA839CD805;
// SA.iOS.StoreKit.ISN_iSKPaymentTransaction
struct ISN_iSKPaymentTransaction_t0741335B92885E1DAD539A216C0FF8BEFE5BCC32;
// SA.iOS.StoreKit.ISN_iSKPaymentTransactionObserver
struct ISN_iSKPaymentTransactionObserver_tFE7A1EB3AC5DC32DF138E246BC7FE622CAD99A45;
// SA.iOS.UserNotifications.ISN_iUNAPI
struct ISN_iUNAPI_t04D4D0ADC3CE4D5F792817B48A1CE6DA095CAA2C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// SA.Foundation.Config.PluginVersionHandler
struct PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335;
// SA.Foundation.Templates.SA_DataResult
struct SA_DataResult_tF0A5319D09E80AE65AF389F07D60BD8DB8353144;
// SA.Foundation.Templates.SA_Error
struct SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1;
// SA.Foundation.Events.SA_Event
struct SA_Event_t3F394B9F2E2D192A7D1476DB378EC8B1A6ABB3C0;
// SA.Foundation.Templates.SA_Result
struct SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// SA.iOS.AuthenticationServices.ISN_ASAuthorizationController/<>c
struct U3CU3Ec_tA660AB806A590C5359CA1B2CA66002F25A18A5D8;
// SA.iOS.AuthenticationServices.ISN_ASAuthorizationOpenIDRequest/<>c
struct U3CU3Ec_tA5F88AFDE3B0CEB4F2DC371311B5EBE0C801888B;
// SA.iOS.Contacts.Internal.ISN_CNEditorAPI/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t603E6ED61B252428003CDA6E77955FB6FB384CF4;
// SA.iOS.Contacts.Internal.ISN_CNEditorAPI/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tF085503B8696BCC6BC20EF9B653B5FF4FD2D3C20;
// SA.iOS.Contacts.Internal.ISN_CNEditorAPI/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t1CA38D17431AEF9E4C50E112948192EDD123CA92;
// SA.iOS.UIKit.ISN_DialogsStack/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t80B916A319B2A4EA519FB0A85408348F53C3F183;
// SA.iOS.Social.ISN_Facebook/<>c
struct U3CU3Ec_t991E7432CD9C5E03D22ABA90B56CEDC6F92754B6;
// SA.iOS.Social.ISN_Facebook/NativeListener
struct NativeListener_t98737FF9BE7B87DF62EF58AE265C1B169902E682;
// SA.iOS.GameKit.ISN_GKGameCenterViewController/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t8DFCCB93EAA393FDB4B787B5D29A0E62402DF3B2;
// SA.iOS.GameKit.ISN_GKLeaderboard/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_tF2C7AD25CB12CD7598AE205D4CDE8C5E582FA7BE;
// SA.iOS.GameKit.ISN_GKLocalPlayer/<>c
struct U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604;
// SA.iOS.GameKit.ISN_GKLocalPlayer/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t283A445BD13EF0495D3D95432964BDDCFD260B97;
// SA.iOS.Social.ISN_Instagram/<>c
struct U3CU3Ec_t0775DC4B3F2747BD58CE3092A2638DB17C2368D1;
// SA.iOS.Social.ISN_Instagram/NativeListener
struct NativeListener_tF61FAF3BFB2428151E6987AFF17346C5ED1AA2B2;
// SA.iOS.MediaPlayer.ISN_MPMediaPickerController/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t778F81DFA95BC843725618B8E5CCD98FBA6C5495;
// SA.iOS.Social.ISN_Mail/<>c
struct U3CU3Ec_tB990CAF31D94D477325E36EB65019F184028D78E;
// SA.iOS.Social.ISN_Mail/NativeListener
struct NativeListener_tFB38CE83332FBD025D4CCE9B67A2F374C1C73CCE;
// SA.iOS.Utilities.ISN_MonoPCallback/MonoPCallbackDelegate
struct MonoPCallbackDelegate_t684ECA24F90DA794192384D419435F2320168D8C;
// SA.iOS.UIKit.ISN_PhotoAlbum/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t12DA2EB5B6C3B2A77528B0243A14A908037AFB81;
// SA.iOS.ReplayKit.ISN_RPNativeAPI/<>c
struct U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B;
// SA.iOS.StoreKit.ISN_SKEditorAPI/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t89A1E79CC49CA6B4F745392E404591AF1C6F476F;
// SA.iOS.StoreKit.ISN_SKEditorAPI/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tFFE496638994CC71212A0B0521C025EACDBF79E2;
// SA.iOS.StoreKit.ISN_SKEditorAPI/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tD63406D539CA3AC8C0533EE3A00262D75F3AFD3D;
// SA.iOS.StoreKit.ISN_SKEditorAPI/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tC3A5C6CBF9B065CB81CFB0584F6F9271908A692B;
// SA.iOS.StoreKit.ISN_SKLib/ISN_LoadStoreRequest
struct ISN_LoadStoreRequest_t3B1D6CD566FCBC4EE16D3F4194588A17E6B3FC76;
// SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c
struct U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198;
// SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t259F77E81AD57B760C1ADF0FC76032345C0B9B80;
// SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t82A96A498716BE4B4498FFB65DC8A080E2696468;
// SA.iOS.Social.ISN_TextMessage/<>c
struct U3CU3Ec_t8918F2BDA86BE8B5D96447E240E938D792AB831C;
// SA.iOS.Social.ISN_TextMessage/NativeListener
struct NativeListener_t67BED7CC896E080EC5BF48CD15CD186291262B18;
// SA.iOS.Social.ISN_Twitter/<>c
struct U3CU3Ec_tB612FA6C01CF59E9410CE34DE0BF9541025AEBEE;
// SA.iOS.Social.ISN_Twitter/NativeListener
struct NativeListener_t2AE2C1EF80322C5B5F35000779FC06E9C3FF0725;
// SA.iOS.UIKit.ISN_UIAlertUtility/<>c
struct U3CU3Ec_tF7D107C15428F961368BCBD03604B0286EFE5F09;
// SA.iOS.UIKit.ISN_UICalendar/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t4A3B3092B2CB9587C2A0B7FE317B8158B24DD870;
// SA.iOS.UIKit.ISN_UIDateTimePicker/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t9D2F0D64014A32ECD9FFE2F7484A3359B85DD882;
// SA.iOS.UIKit.ISN_UIImagePickerController/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tB88483A12772C5E444E87F2CB6D8618AA17D4927;
// SA.iOS.UIKit.ISN_UIImagePickerController/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_t85E370B6792D0FF0CCE4E9C04BB7C674502D8062;
// SA.iOS.UIKit.ISN_UILib/SA_PluginSettingsWindowStylesRequest
struct SA_PluginSettingsWindowStylesRequest_t36C7BC6794AC2DF9C0DDA80B47D4FAAC21C536FE;
// SA.iOS.Social.ISN_TextMessage/NativeListener/<>c
struct U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISN_ASAuthorizationScope_t9D27F8F9DD2FA4CEAE6D9374BCA53FFF50B5D27B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISN_DialogsStack_t62CEBBC002BA51C893161BA9017D574E277464D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISN_Facebook_tCD136BCA11DD7D280FBBA62D9A4CE22C4EB38D9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISN_GKLoadDefaultLeaderboardResult_tE64A92BC175FD8A53E25F74D66B51190DC95C193_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISN_IMPMediaPickerControllerDelegate_t416B5FE64904066E2206007D33732C0026F144E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISN_Instagram_tCB4540960CFBC1CAC928922E35A7D7F56F08DE16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISN_MPMediaItemCollection_tA22A8D7C54B8FD586195739E8678EFD4AD921BFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISN_Mail_t4B6BCF11C3D52FF3AD015BAF5A3F11376DBC946C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISN_SKPaymentTransaction_tF41BFFFB76CBCFDADBB1E5E752EA8ADB53EFF12C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISN_TextMessage_t982F0CF25C97F72D367854A79CFC6027324EE154_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISN_Twitter_t8A20A02412BEB51CEA787BF6907FB456CBDAFB4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISN_UIPickerControllerResult_tCA7C312FBEFBE946A75BD9E9FBBDEB77F88679CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISN_iSKAPI_tF0DAD2993BE274EB620FC7D9129F7CEA839CD805_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISN_iSKPaymentTransactionObserver_tFE7A1EB3AC5DC32DF138E246BC7FE622CAD99A45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISN_iUNAPI_t04D4D0ADC3CE4D5F792817B48A1CE6DA095CAA2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SA_ScriptableSingleton_1_t08876A890E2E57E39DCC5D03C916A31673F3A8E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0775DC4B3F2747BD58CE3092A2638DB17C2368D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8918F2BDA86BE8B5D96447E240E938D792AB831C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t991E7432CD9C5E03D22ABA90B56CEDC6F92754B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA5F88AFDE3B0CEB4F2DC371311B5EBE0C801888B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA660AB806A590C5359CA1B2CA66002F25A18A5D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB612FA6C01CF59E9410CE34DE0BF9541025AEBEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB990CAF31D94D477325E36EB65019F184028D78E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF7D107C15428F961368BCBD03604B0286EFE5F09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A44311C35B6614A6996BB036577C2CF56DD05B6;
IL2CPP_EXTERN_C String_t* _stringLiteral650CD06570745708593096FE4EF5A6CC18E33F31;
IL2CPP_EXTERN_C String_t* _stringLiteral81705C352B1918412D3A5BA7D8B7F97F3EACBC11;
IL2CPP_EXTERN_C String_t* _stringLiteralD501CE2AED06CB2FC7E25D3E411BA34FF3A76660;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m168C30157817DF3E1710919C8C8ED31D9EEEF064_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6873CF478F7A8574B4AE415288788904629411EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m88465E33E49A8CA9DAE3AFF1AEB503200BF0903A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m973FFEC4ABCA3B472E04CEB5D23F6127664A1015_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m9758977374B90655D6DD83A89AB898D5F4611ED3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m9F479A261371548B5118A48139644FF4DEA6B350_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m9F6378C783F6AC0EEF23F9F24A4EEB29AE73D820_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mC4A45C1850A7925CD1DCF8395F207CC27298AE38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mDC5E3F9883943DC4E9A8443A068DA6F3B9CD49BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mFF907E3593C3D4AD822B1F1BD5D30494CEA74412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m48880B6DF302877F768269906EF27CF9980EDAC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m7A92B13F4266F93847CEE64DCA2BF57416DB1815_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m889D1F87AF98386E956F8E88C7CDB011188F5FAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m8B31B3592A076C43438A9CFB48BF1E686FD71FBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mD426C1BAD069EC21073F6473399CB74532DBFE75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mD9740D4214410B812D153422F0102DD31D56BB5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD529F0745024A38E3ED28ABFA8D9B144060CE735_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8B0028B35AB15EAF23FDFE22D0A1B85ECD5BA0BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m256C3A016DB020EE3DADE774C8ED3B98145E40FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISN_Singleton_1__ctor_m46E9870625A518B6682A4D39EF490D078FEF70A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISN_Singleton_1__ctor_m8B57FEAAC7BCB8FC63BC97091BFAB0E6166E924C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISN_Singleton_1__ctor_m95D0F0CCC9F850E28667508D0BA2D1CC3B474AD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISN_Singleton_1__ctor_mCF161A82B2F5FEE3389B73E7D9CBC02F5C4A1765_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISN_Singleton_1__ctor_mD1375734B51A77ED086F6ED3F470035C98C99DE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF1A0CFD995AD189624A4DF42F837CC7E91B9412C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SA_Event_1_Invoke_m850152DA5F2F6C405D365EB12ABC12D04B1FA689_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SA_ScriptableSingleton_1_get_Instance_m91035B08BB57A2127C7A297AEAD89A75BC37D63F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CDeleteSavedGameU3Eb__32_1_m07A720E8261003C05E4CC232F815A79E0407F369_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFetchSavedGamesU3Eb__30_1_m29BA0C960A4A7BFAF5961E1AFA2910CDB879790C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitU3Eb__9_1_mD1A297D3815A11D77AAC52E57383412EE21B7C94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CLoadGameDataU3Eb__33_1_m4D7782EEAE2CB182093D9EFB75E20E5BB31ACAC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnTextMessageComposeResultU3Eb__0_0_m5D95FFC1E9CFFB151E5EF66FC218247790BF6848_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CResolveConflictingSavedGamesU3Eb__34_1_m6FB6B2385A03593DEFC3C1C738E2942D7F2B8460_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSavedGameU3Eb__31_1_m904647495E7CDE611BB7AE189BB0CE5896ECA8E6_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<SA.iOS.GameKit.ISN_GKScore>
struct  List_1_t08BB076155DD422337809CD51D7A12C5C78F05BC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ISN_GKScoreU5BU5D_t30BE6D311E8830FEF219B8E8267BD1B6EB712AC4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t08BB076155DD422337809CD51D7A12C5C78F05BC, ____items_1)); }
	inline ISN_GKScoreU5BU5D_t30BE6D311E8830FEF219B8E8267BD1B6EB712AC4* get__items_1() const { return ____items_1; }
	inline ISN_GKScoreU5BU5D_t30BE6D311E8830FEF219B8E8267BD1B6EB712AC4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ISN_GKScoreU5BU5D_t30BE6D311E8830FEF219B8E8267BD1B6EB712AC4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t08BB076155DD422337809CD51D7A12C5C78F05BC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t08BB076155DD422337809CD51D7A12C5C78F05BC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t08BB076155DD422337809CD51D7A12C5C78F05BC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t08BB076155DD422337809CD51D7A12C5C78F05BC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ISN_GKScoreU5BU5D_t30BE6D311E8830FEF219B8E8267BD1B6EB712AC4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t08BB076155DD422337809CD51D7A12C5C78F05BC_StaticFields, ____emptyArray_5)); }
	inline ISN_GKScoreU5BU5D_t30BE6D311E8830FEF219B8E8267BD1B6EB712AC4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ISN_GKScoreU5BU5D_t30BE6D311E8830FEF219B8E8267BD1B6EB712AC4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ISN_GKScoreU5BU5D_t30BE6D311E8830FEF219B8E8267BD1B6EB712AC4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<SA.iOS.StoreKit.ISN_SKProduct>
struct  List_1_t2D723F9BB968A2CB16CAEB637951A33404D5E48C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ISN_SKProductU5BU5D_tE541403AAE38D40706000729BC2D4E0DE7FAB8AE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2D723F9BB968A2CB16CAEB637951A33404D5E48C, ____items_1)); }
	inline ISN_SKProductU5BU5D_tE541403AAE38D40706000729BC2D4E0DE7FAB8AE* get__items_1() const { return ____items_1; }
	inline ISN_SKProductU5BU5D_tE541403AAE38D40706000729BC2D4E0DE7FAB8AE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ISN_SKProductU5BU5D_tE541403AAE38D40706000729BC2D4E0DE7FAB8AE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2D723F9BB968A2CB16CAEB637951A33404D5E48C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2D723F9BB968A2CB16CAEB637951A33404D5E48C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2D723F9BB968A2CB16CAEB637951A33404D5E48C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2D723F9BB968A2CB16CAEB637951A33404D5E48C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ISN_SKProductU5BU5D_tE541403AAE38D40706000729BC2D4E0DE7FAB8AE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2D723F9BB968A2CB16CAEB637951A33404D5E48C_StaticFields, ____emptyArray_5)); }
	inline ISN_SKProductU5BU5D_tE541403AAE38D40706000729BC2D4E0DE7FAB8AE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ISN_SKProductU5BU5D_tE541403AAE38D40706000729BC2D4E0DE7FAB8AE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ISN_SKProductU5BU5D_tE541403AAE38D40706000729BC2D4E0DE7FAB8AE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<SA.iOS.StoreKit.ISN_iSKPaymentTransactionObserver>
struct  List_1_t5A6D69A90896741CD34AAFF072502D7844EDF7A3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ISN_iSKPaymentTransactionObserverU5BU5D_t8D05BE7493627AE6113F02700D6A9F2638AF0E11* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5A6D69A90896741CD34AAFF072502D7844EDF7A3, ____items_1)); }
	inline ISN_iSKPaymentTransactionObserverU5BU5D_t8D05BE7493627AE6113F02700D6A9F2638AF0E11* get__items_1() const { return ____items_1; }
	inline ISN_iSKPaymentTransactionObserverU5BU5D_t8D05BE7493627AE6113F02700D6A9F2638AF0E11** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ISN_iSKPaymentTransactionObserverU5BU5D_t8D05BE7493627AE6113F02700D6A9F2638AF0E11* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5A6D69A90896741CD34AAFF072502D7844EDF7A3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5A6D69A90896741CD34AAFF072502D7844EDF7A3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5A6D69A90896741CD34AAFF072502D7844EDF7A3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5A6D69A90896741CD34AAFF072502D7844EDF7A3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ISN_iSKPaymentTransactionObserverU5BU5D_t8D05BE7493627AE6113F02700D6A9F2638AF0E11* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5A6D69A90896741CD34AAFF072502D7844EDF7A3_StaticFields, ____emptyArray_5)); }
	inline ISN_iSKPaymentTransactionObserverU5BU5D_t8D05BE7493627AE6113F02700D6A9F2638AF0E11* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ISN_iSKPaymentTransactionObserverU5BU5D_t8D05BE7493627AE6113F02700D6A9F2638AF0E11** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ISN_iSKPaymentTransactionObserverU5BU5D_t8D05BE7493627AE6113F02700D6A9F2638AF0E11* value)
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


// SA.Foundation.Events.SA_Event`1<SA.iOS.StoreKit.ISN_iSKPaymentTransaction>
struct  SA_Event_1_tE849E11935AC44EFC07E16AF67D4A70BC40A422C  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<SA.Foundation.Events.SA_Event`1/SafeActionInfo<T>> SA.Foundation.Events.SA_Event`1::m_targetedActions
	List_1_t0F65018102BD8F91AE7AD3AEA1D0A9F3B9C5FCB1 * ___m_targetedActions_0;

public:
	inline static int32_t get_offset_of_m_targetedActions_0() { return static_cast<int32_t>(offsetof(SA_Event_1_tE849E11935AC44EFC07E16AF67D4A70BC40A422C, ___m_targetedActions_0)); }
	inline List_1_t0F65018102BD8F91AE7AD3AEA1D0A9F3B9C5FCB1 * get_m_targetedActions_0() const { return ___m_targetedActions_0; }
	inline List_1_t0F65018102BD8F91AE7AD3AEA1D0A9F3B9C5FCB1 ** get_address_of_m_targetedActions_0() { return &___m_targetedActions_0; }
	inline void set_m_targetedActions_0(List_1_t0F65018102BD8F91AE7AD3AEA1D0A9F3B9C5FCB1 * value)
	{
		___m_targetedActions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_targetedActions_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// SA.iOS.Contacts.Internal.ISN_CNEditorAPI
struct  ISN_CNEditorAPI_t2397B4C523B9DEB554661F0D17CD308FF7A46AB8  : public RuntimeObject
{
public:

public:
};


// SA.iOS.Social.ISN_Facebook
struct  ISN_Facebook_tCD136BCA11DD7D280FBBA62D9A4CE22C4EB38D9F  : public RuntimeObject
{
public:

public:
};

struct ISN_Facebook_tCD136BCA11DD7D280FBBA62D9A4CE22C4EB38D9F_StaticFields
{
public:
	// System.Action SA.iOS.Social.ISN_Facebook::OnPostStart
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnPostStart_0;
	// System.Action`1<SA.Foundation.Templates.SA_Result> SA.iOS.Social.ISN_Facebook::OnPostResult
	Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * ___OnPostResult_1;

public:
	inline static int32_t get_offset_of_OnPostStart_0() { return static_cast<int32_t>(offsetof(ISN_Facebook_tCD136BCA11DD7D280FBBA62D9A4CE22C4EB38D9F_StaticFields, ___OnPostStart_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnPostStart_0() const { return ___OnPostStart_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnPostStart_0() { return &___OnPostStart_0; }
	inline void set_OnPostStart_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnPostStart_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPostStart_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnPostResult_1() { return static_cast<int32_t>(offsetof(ISN_Facebook_tCD136BCA11DD7D280FBBA62D9A4CE22C4EB38D9F_StaticFields, ___OnPostResult_1)); }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * get_OnPostResult_1() const { return ___OnPostResult_1; }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 ** get_address_of_OnPostResult_1() { return &___OnPostResult_1; }
	inline void set_OnPostResult_1(Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * value)
	{
		___OnPostResult_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPostResult_1), (void*)value);
	}
};


// SA.iOS.GameKit.ISN_GKScore
struct  ISN_GKScore_t61C79EFDE5BD5A770466331E28E6C7D520F08139  : public RuntimeObject
{
public:
	// System.Int64 SA.iOS.GameKit.ISN_GKScore::m_Rank
	int64_t ___m_Rank_0;
	// System.Int64 SA.iOS.GameKit.ISN_GKScore::m_Value
	int64_t ___m_Value_1;
	// System.UInt64 SA.iOS.GameKit.ISN_GKScore::m_Context
	uint64_t ___m_Context_2;
	// System.Int64 SA.iOS.GameKit.ISN_GKScore::m_Date
	int64_t ___m_Date_3;
	// System.String SA.iOS.GameKit.ISN_GKScore::m_FormattedValue
	String_t* ___m_FormattedValue_4;
	// System.String SA.iOS.GameKit.ISN_GKScore::m_LeaderboardIdentifier
	String_t* ___m_LeaderboardIdentifier_5;
	// System.UInt64 SA.iOS.GameKit.ISN_GKScore::m_PlayerKey
	uint64_t ___m_PlayerKey_6;
	// SA.iOS.GameKit.ISN_GKPlayer SA.iOS.GameKit.ISN_GKScore::m_Player
	ISN_GKPlayer_tC728E93D11A3D9166E012CB46705607F186DD46F * ___m_Player_7;

public:
	inline static int32_t get_offset_of_m_Rank_0() { return static_cast<int32_t>(offsetof(ISN_GKScore_t61C79EFDE5BD5A770466331E28E6C7D520F08139, ___m_Rank_0)); }
	inline int64_t get_m_Rank_0() const { return ___m_Rank_0; }
	inline int64_t* get_address_of_m_Rank_0() { return &___m_Rank_0; }
	inline void set_m_Rank_0(int64_t value)
	{
		___m_Rank_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(ISN_GKScore_t61C79EFDE5BD5A770466331E28E6C7D520F08139, ___m_Value_1)); }
	inline int64_t get_m_Value_1() const { return ___m_Value_1; }
	inline int64_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int64_t value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_Context_2() { return static_cast<int32_t>(offsetof(ISN_GKScore_t61C79EFDE5BD5A770466331E28E6C7D520F08139, ___m_Context_2)); }
	inline uint64_t get_m_Context_2() const { return ___m_Context_2; }
	inline uint64_t* get_address_of_m_Context_2() { return &___m_Context_2; }
	inline void set_m_Context_2(uint64_t value)
	{
		___m_Context_2 = value;
	}

	inline static int32_t get_offset_of_m_Date_3() { return static_cast<int32_t>(offsetof(ISN_GKScore_t61C79EFDE5BD5A770466331E28E6C7D520F08139, ___m_Date_3)); }
	inline int64_t get_m_Date_3() const { return ___m_Date_3; }
	inline int64_t* get_address_of_m_Date_3() { return &___m_Date_3; }
	inline void set_m_Date_3(int64_t value)
	{
		___m_Date_3 = value;
	}

	inline static int32_t get_offset_of_m_FormattedValue_4() { return static_cast<int32_t>(offsetof(ISN_GKScore_t61C79EFDE5BD5A770466331E28E6C7D520F08139, ___m_FormattedValue_4)); }
	inline String_t* get_m_FormattedValue_4() const { return ___m_FormattedValue_4; }
	inline String_t** get_address_of_m_FormattedValue_4() { return &___m_FormattedValue_4; }
	inline void set_m_FormattedValue_4(String_t* value)
	{
		___m_FormattedValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FormattedValue_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_LeaderboardIdentifier_5() { return static_cast<int32_t>(offsetof(ISN_GKScore_t61C79EFDE5BD5A770466331E28E6C7D520F08139, ___m_LeaderboardIdentifier_5)); }
	inline String_t* get_m_LeaderboardIdentifier_5() const { return ___m_LeaderboardIdentifier_5; }
	inline String_t** get_address_of_m_LeaderboardIdentifier_5() { return &___m_LeaderboardIdentifier_5; }
	inline void set_m_LeaderboardIdentifier_5(String_t* value)
	{
		___m_LeaderboardIdentifier_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LeaderboardIdentifier_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_PlayerKey_6() { return static_cast<int32_t>(offsetof(ISN_GKScore_t61C79EFDE5BD5A770466331E28E6C7D520F08139, ___m_PlayerKey_6)); }
	inline uint64_t get_m_PlayerKey_6() const { return ___m_PlayerKey_6; }
	inline uint64_t* get_address_of_m_PlayerKey_6() { return &___m_PlayerKey_6; }
	inline void set_m_PlayerKey_6(uint64_t value)
	{
		___m_PlayerKey_6 = value;
	}

	inline static int32_t get_offset_of_m_Player_7() { return static_cast<int32_t>(offsetof(ISN_GKScore_t61C79EFDE5BD5A770466331E28E6C7D520F08139, ___m_Player_7)); }
	inline ISN_GKPlayer_tC728E93D11A3D9166E012CB46705607F186DD46F * get_m_Player_7() const { return ___m_Player_7; }
	inline ISN_GKPlayer_tC728E93D11A3D9166E012CB46705607F186DD46F ** get_address_of_m_Player_7() { return &___m_Player_7; }
	inline void set_m_Player_7(ISN_GKPlayer_tC728E93D11A3D9166E012CB46705607F186DD46F * value)
	{
		___m_Player_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Player_7), (void*)value);
	}
};


// SA.iOS.Social.ISN_Instagram
struct  ISN_Instagram_tCB4540960CFBC1CAC928922E35A7D7F56F08DE16  : public RuntimeObject
{
public:

public:
};

struct ISN_Instagram_tCB4540960CFBC1CAC928922E35A7D7F56F08DE16_StaticFields
{
public:
	// System.Action SA.iOS.Social.ISN_Instagram::OnPostStart
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnPostStart_0;
	// System.Action`1<SA.Foundation.Templates.SA_Result> SA.iOS.Social.ISN_Instagram::OnPostResult
	Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * ___OnPostResult_1;

public:
	inline static int32_t get_offset_of_OnPostStart_0() { return static_cast<int32_t>(offsetof(ISN_Instagram_tCB4540960CFBC1CAC928922E35A7D7F56F08DE16_StaticFields, ___OnPostStart_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnPostStart_0() const { return ___OnPostStart_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnPostStart_0() { return &___OnPostStart_0; }
	inline void set_OnPostStart_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnPostStart_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPostStart_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnPostResult_1() { return static_cast<int32_t>(offsetof(ISN_Instagram_tCB4540960CFBC1CAC928922E35A7D7F56F08DE16_StaticFields, ___OnPostResult_1)); }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * get_OnPostResult_1() const { return ___OnPostResult_1; }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 ** get_address_of_OnPostResult_1() { return &___OnPostResult_1; }
	inline void set_OnPostResult_1(Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * value)
	{
		___OnPostResult_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPostResult_1), (void*)value);
	}
};


// SA.iOS.Social.ISN_Mail
struct  ISN_Mail_t4B6BCF11C3D52FF3AD015BAF5A3F11376DBC946C  : public RuntimeObject
{
public:

public:
};

struct ISN_Mail_t4B6BCF11C3D52FF3AD015BAF5A3F11376DBC946C_StaticFields
{
public:
	// System.Action`1<SA.Foundation.Templates.SA_Result> SA.iOS.Social.ISN_Mail::OnSendMailResult
	Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * ___OnSendMailResult_0;

public:
	inline static int32_t get_offset_of_OnSendMailResult_0() { return static_cast<int32_t>(offsetof(ISN_Mail_t4B6BCF11C3D52FF3AD015BAF5A3F11376DBC946C_StaticFields, ___OnSendMailResult_0)); }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * get_OnSendMailResult_0() const { return ___OnSendMailResult_0; }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 ** get_address_of_OnSendMailResult_0() { return &___OnSendMailResult_0; }
	inline void set_OnSendMailResult_0(Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * value)
	{
		___OnSendMailResult_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSendMailResult_0), (void*)value);
	}
};


// SA.iOS.Utilities.ISN_NativeObject
struct  ISN_NativeObject_tCBEFEB9640F4BE02478CE5834ABB80EB299E044F  : public RuntimeObject
{
public:
	// System.UInt64 SA.iOS.Utilities.ISN_NativeObject::m_NativeHashCode
	uint64_t ___m_NativeHashCode_1;

public:
	inline static int32_t get_offset_of_m_NativeHashCode_1() { return static_cast<int32_t>(offsetof(ISN_NativeObject_tCBEFEB9640F4BE02478CE5834ABB80EB299E044F, ___m_NativeHashCode_1)); }
	inline uint64_t get_m_NativeHashCode_1() const { return ___m_NativeHashCode_1; }
	inline uint64_t* get_address_of_m_NativeHashCode_1() { return &___m_NativeHashCode_1; }
	inline void set_m_NativeHashCode_1(uint64_t value)
	{
		___m_NativeHashCode_1 = value;
	}
};


// SA.iOS.StoreKit.ISN_SKEditorAPI
struct  ISN_SKEditorAPI_t04F1EEA2CC9A465E126DDBD91123FB3F959B1345  : public RuntimeObject
{
public:
	// SA.Foundation.Events.SA_Event`1<SA.iOS.StoreKit.ISN_iSKPaymentTransaction> SA.iOS.StoreKit.ISN_SKEditorAPI::m_TransactionUpdated
	SA_Event_1_tE849E11935AC44EFC07E16AF67D4A70BC40A422C * ___m_TransactionUpdated_0;
	// SA.Foundation.Events.SA_Event`1<SA.iOS.StoreKit.ISN_iSKPaymentTransaction> SA.iOS.StoreKit.ISN_SKEditorAPI::m_TransactionRemoved
	SA_Event_1_tE849E11935AC44EFC07E16AF67D4A70BC40A422C * ___m_TransactionRemoved_1;
	// SA.Foundation.Events.SA_Event`1<SA.iOS.StoreKit.ISN_SKProduct> SA.iOS.StoreKit.ISN_SKEditorAPI::m_ShouldAddStorePayment
	SA_Event_1_t1D7A76236A8FFAF846B558758C3B5464D5CE9260 * ___m_ShouldAddStorePayment_2;
	// SA.Foundation.Events.SA_Event`1<SA.Foundation.Templates.SA_Result> SA.iOS.StoreKit.ISN_SKEditorAPI::m_RestoreTransactionsComplete
	SA_Event_1_tE3A8DA1D167F4A4AF89190347E2BB3D60713102E * ___m_RestoreTransactionsComplete_3;
	// SA.Foundation.Events.SA_Event SA.iOS.StoreKit.ISN_SKEditorAPI::m_DidChangeStorefront
	SA_Event_t3F394B9F2E2D192A7D1476DB378EC8B1A6ABB3C0 * ___m_DidChangeStorefront_4;

public:
	inline static int32_t get_offset_of_m_TransactionUpdated_0() { return static_cast<int32_t>(offsetof(ISN_SKEditorAPI_t04F1EEA2CC9A465E126DDBD91123FB3F959B1345, ___m_TransactionUpdated_0)); }
	inline SA_Event_1_tE849E11935AC44EFC07E16AF67D4A70BC40A422C * get_m_TransactionUpdated_0() const { return ___m_TransactionUpdated_0; }
	inline SA_Event_1_tE849E11935AC44EFC07E16AF67D4A70BC40A422C ** get_address_of_m_TransactionUpdated_0() { return &___m_TransactionUpdated_0; }
	inline void set_m_TransactionUpdated_0(SA_Event_1_tE849E11935AC44EFC07E16AF67D4A70BC40A422C * value)
	{
		___m_TransactionUpdated_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TransactionUpdated_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_TransactionRemoved_1() { return static_cast<int32_t>(offsetof(ISN_SKEditorAPI_t04F1EEA2CC9A465E126DDBD91123FB3F959B1345, ___m_TransactionRemoved_1)); }
	inline SA_Event_1_tE849E11935AC44EFC07E16AF67D4A70BC40A422C * get_m_TransactionRemoved_1() const { return ___m_TransactionRemoved_1; }
	inline SA_Event_1_tE849E11935AC44EFC07E16AF67D4A70BC40A422C ** get_address_of_m_TransactionRemoved_1() { return &___m_TransactionRemoved_1; }
	inline void set_m_TransactionRemoved_1(SA_Event_1_tE849E11935AC44EFC07E16AF67D4A70BC40A422C * value)
	{
		___m_TransactionRemoved_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TransactionRemoved_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldAddStorePayment_2() { return static_cast<int32_t>(offsetof(ISN_SKEditorAPI_t04F1EEA2CC9A465E126DDBD91123FB3F959B1345, ___m_ShouldAddStorePayment_2)); }
	inline SA_Event_1_t1D7A76236A8FFAF846B558758C3B5464D5CE9260 * get_m_ShouldAddStorePayment_2() const { return ___m_ShouldAddStorePayment_2; }
	inline SA_Event_1_t1D7A76236A8FFAF846B558758C3B5464D5CE9260 ** get_address_of_m_ShouldAddStorePayment_2() { return &___m_ShouldAddStorePayment_2; }
	inline void set_m_ShouldAddStorePayment_2(SA_Event_1_t1D7A76236A8FFAF846B558758C3B5464D5CE9260 * value)
	{
		___m_ShouldAddStorePayment_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShouldAddStorePayment_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_RestoreTransactionsComplete_3() { return static_cast<int32_t>(offsetof(ISN_SKEditorAPI_t04F1EEA2CC9A465E126DDBD91123FB3F959B1345, ___m_RestoreTransactionsComplete_3)); }
	inline SA_Event_1_tE3A8DA1D167F4A4AF89190347E2BB3D60713102E * get_m_RestoreTransactionsComplete_3() const { return ___m_RestoreTransactionsComplete_3; }
	inline SA_Event_1_tE3A8DA1D167F4A4AF89190347E2BB3D60713102E ** get_address_of_m_RestoreTransactionsComplete_3() { return &___m_RestoreTransactionsComplete_3; }
	inline void set_m_RestoreTransactionsComplete_3(SA_Event_1_tE3A8DA1D167F4A4AF89190347E2BB3D60713102E * value)
	{
		___m_RestoreTransactionsComplete_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RestoreTransactionsComplete_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DidChangeStorefront_4() { return static_cast<int32_t>(offsetof(ISN_SKEditorAPI_t04F1EEA2CC9A465E126DDBD91123FB3F959B1345, ___m_DidChangeStorefront_4)); }
	inline SA_Event_t3F394B9F2E2D192A7D1476DB378EC8B1A6ABB3C0 * get_m_DidChangeStorefront_4() const { return ___m_DidChangeStorefront_4; }
	inline SA_Event_t3F394B9F2E2D192A7D1476DB378EC8B1A6ABB3C0 ** get_address_of_m_DidChangeStorefront_4() { return &___m_DidChangeStorefront_4; }
	inline void set_m_DidChangeStorefront_4(SA_Event_t3F394B9F2E2D192A7D1476DB378EC8B1A6ABB3C0 * value)
	{
		___m_DidChangeStorefront_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DidChangeStorefront_4), (void*)value);
	}
};


// SA.iOS.StoreKit.ISN_SKPaymentQueue
struct  ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D  : public RuntimeObject
{
public:

public:
};

struct ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_StaticFields
{
public:
	// System.Action`1<SA.iOS.StoreKit.ISN_SKInitResult> SA.iOS.StoreKit.ISN_SKPaymentQueue::OnStoreKitInitComplete
	Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * ___OnStoreKitInitComplete_0;
	// System.Boolean SA.iOS.StoreKit.ISN_SKPaymentQueue::s_IsInitializationInProgress
	bool ___s_IsInitializationInProgress_1;
	// SA.iOS.StoreKit.ISN_SKInitResult SA.iOS.StoreKit.ISN_SKPaymentQueue::s_SuccessInitResultCache
	ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731 * ___s_SuccessInitResultCache_2;
	// System.Collections.Generic.Dictionary`2<System.String,SA.iOS.StoreKit.ISN_SKProduct> SA.iOS.StoreKit.ISN_SKPaymentQueue::s_Products
	Dictionary_2_tC2985B17C01F696AE46A04BD1272D18586AA11AD * ___s_Products_3;
	// System.Collections.Generic.List`1<SA.iOS.StoreKit.ISN_iSKPaymentTransactionObserver> SA.iOS.StoreKit.ISN_SKPaymentQueue::s_Observers
	List_1_t5A6D69A90896741CD34AAFF072502D7844EDF7A3 * ___s_Observers_4;

public:
	inline static int32_t get_offset_of_OnStoreKitInitComplete_0() { return static_cast<int32_t>(offsetof(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_StaticFields, ___OnStoreKitInitComplete_0)); }
	inline Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * get_OnStoreKitInitComplete_0() const { return ___OnStoreKitInitComplete_0; }
	inline Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 ** get_address_of_OnStoreKitInitComplete_0() { return &___OnStoreKitInitComplete_0; }
	inline void set_OnStoreKitInitComplete_0(Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * value)
	{
		___OnStoreKitInitComplete_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStoreKitInitComplete_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsInitializationInProgress_1() { return static_cast<int32_t>(offsetof(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_StaticFields, ___s_IsInitializationInProgress_1)); }
	inline bool get_s_IsInitializationInProgress_1() const { return ___s_IsInitializationInProgress_1; }
	inline bool* get_address_of_s_IsInitializationInProgress_1() { return &___s_IsInitializationInProgress_1; }
	inline void set_s_IsInitializationInProgress_1(bool value)
	{
		___s_IsInitializationInProgress_1 = value;
	}

	inline static int32_t get_offset_of_s_SuccessInitResultCache_2() { return static_cast<int32_t>(offsetof(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_StaticFields, ___s_SuccessInitResultCache_2)); }
	inline ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731 * get_s_SuccessInitResultCache_2() const { return ___s_SuccessInitResultCache_2; }
	inline ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731 ** get_address_of_s_SuccessInitResultCache_2() { return &___s_SuccessInitResultCache_2; }
	inline void set_s_SuccessInitResultCache_2(ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731 * value)
	{
		___s_SuccessInitResultCache_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SuccessInitResultCache_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_Products_3() { return static_cast<int32_t>(offsetof(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_StaticFields, ___s_Products_3)); }
	inline Dictionary_2_tC2985B17C01F696AE46A04BD1272D18586AA11AD * get_s_Products_3() const { return ___s_Products_3; }
	inline Dictionary_2_tC2985B17C01F696AE46A04BD1272D18586AA11AD ** get_address_of_s_Products_3() { return &___s_Products_3; }
	inline void set_s_Products_3(Dictionary_2_tC2985B17C01F696AE46A04BD1272D18586AA11AD * value)
	{
		___s_Products_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Products_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Observers_4() { return static_cast<int32_t>(offsetof(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_StaticFields, ___s_Observers_4)); }
	inline List_1_t5A6D69A90896741CD34AAFF072502D7844EDF7A3 * get_s_Observers_4() const { return ___s_Observers_4; }
	inline List_1_t5A6D69A90896741CD34AAFF072502D7844EDF7A3 ** get_address_of_s_Observers_4() { return &___s_Observers_4; }
	inline void set_s_Observers_4(List_1_t5A6D69A90896741CD34AAFF072502D7844EDF7A3 * value)
	{
		___s_Observers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Observers_4), (void*)value);
	}
};


// SA.iOS.StoreKit.ISN_SKProduct
struct  ISN_SKProduct_tB70386270C96B57C2FB14E931332F98F0F186B15  : public RuntimeObject
{
public:
	// System.String SA.iOS.StoreKit.ISN_SKProduct::m_ProductIdentifier
	String_t* ___m_ProductIdentifier_0;
	// System.String SA.iOS.StoreKit.ISN_SKProduct::m_LocalizedDescription
	String_t* ___m_LocalizedDescription_1;
	// System.String SA.iOS.StoreKit.ISN_SKProduct::m_LocalizedTitle
	String_t* ___m_LocalizedTitle_2;
	// System.Single SA.iOS.StoreKit.ISN_SKProduct::m_Price
	float ___m_Price_3;
	// SA.iOS.Foundation.ISN_NSLocale SA.iOS.StoreKit.ISN_SKProduct::m_PriceLocale
	ISN_NSLocale_tEF536C568090D59F7F0C68E948B2DA5C5FF43272 * ___m_PriceLocale_4;
	// SA.iOS.StoreKit.ISN_SKProductDiscount SA.iOS.StoreKit.ISN_SKProduct::m_IntroductoryPrice
	ISN_SKProductDiscount_t2A84CBD55FF51721100726DA4B25A078DB1C82F9 * ___m_IntroductoryPrice_5;
	// SA.iOS.StoreKit.ISN_SKProductSubscriptionPeriod SA.iOS.StoreKit.ISN_SKProduct::m_SubscriptionPeriod
	ISN_SKProductSubscriptionPeriod_t7B9C772EB3186D0D485FA57DA19AD9D7023C34C1 * ___m_SubscriptionPeriod_6;
	// System.String SA.iOS.StoreKit.ISN_SKProduct::m_LocalizedPrice
	String_t* ___m_LocalizedPrice_7;
	// SA.iOS.StoreKit.ISN_SKProductEditorData SA.iOS.StoreKit.ISN_SKProduct::m_EditorData
	ISN_SKProductEditorData_t5A75975F979B075D6CF23CEFB1E262BF3124F6B7 * ___m_EditorData_8;

public:
	inline static int32_t get_offset_of_m_ProductIdentifier_0() { return static_cast<int32_t>(offsetof(ISN_SKProduct_tB70386270C96B57C2FB14E931332F98F0F186B15, ___m_ProductIdentifier_0)); }
	inline String_t* get_m_ProductIdentifier_0() const { return ___m_ProductIdentifier_0; }
	inline String_t** get_address_of_m_ProductIdentifier_0() { return &___m_ProductIdentifier_0; }
	inline void set_m_ProductIdentifier_0(String_t* value)
	{
		___m_ProductIdentifier_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProductIdentifier_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_LocalizedDescription_1() { return static_cast<int32_t>(offsetof(ISN_SKProduct_tB70386270C96B57C2FB14E931332F98F0F186B15, ___m_LocalizedDescription_1)); }
	inline String_t* get_m_LocalizedDescription_1() const { return ___m_LocalizedDescription_1; }
	inline String_t** get_address_of_m_LocalizedDescription_1() { return &___m_LocalizedDescription_1; }
	inline void set_m_LocalizedDescription_1(String_t* value)
	{
		___m_LocalizedDescription_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocalizedDescription_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_LocalizedTitle_2() { return static_cast<int32_t>(offsetof(ISN_SKProduct_tB70386270C96B57C2FB14E931332F98F0F186B15, ___m_LocalizedTitle_2)); }
	inline String_t* get_m_LocalizedTitle_2() const { return ___m_LocalizedTitle_2; }
	inline String_t** get_address_of_m_LocalizedTitle_2() { return &___m_LocalizedTitle_2; }
	inline void set_m_LocalizedTitle_2(String_t* value)
	{
		___m_LocalizedTitle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocalizedTitle_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Price_3() { return static_cast<int32_t>(offsetof(ISN_SKProduct_tB70386270C96B57C2FB14E931332F98F0F186B15, ___m_Price_3)); }
	inline float get_m_Price_3() const { return ___m_Price_3; }
	inline float* get_address_of_m_Price_3() { return &___m_Price_3; }
	inline void set_m_Price_3(float value)
	{
		___m_Price_3 = value;
	}

	inline static int32_t get_offset_of_m_PriceLocale_4() { return static_cast<int32_t>(offsetof(ISN_SKProduct_tB70386270C96B57C2FB14E931332F98F0F186B15, ___m_PriceLocale_4)); }
	inline ISN_NSLocale_tEF536C568090D59F7F0C68E948B2DA5C5FF43272 * get_m_PriceLocale_4() const { return ___m_PriceLocale_4; }
	inline ISN_NSLocale_tEF536C568090D59F7F0C68E948B2DA5C5FF43272 ** get_address_of_m_PriceLocale_4() { return &___m_PriceLocale_4; }
	inline void set_m_PriceLocale_4(ISN_NSLocale_tEF536C568090D59F7F0C68E948B2DA5C5FF43272 * value)
	{
		___m_PriceLocale_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PriceLocale_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_IntroductoryPrice_5() { return static_cast<int32_t>(offsetof(ISN_SKProduct_tB70386270C96B57C2FB14E931332F98F0F186B15, ___m_IntroductoryPrice_5)); }
	inline ISN_SKProductDiscount_t2A84CBD55FF51721100726DA4B25A078DB1C82F9 * get_m_IntroductoryPrice_5() const { return ___m_IntroductoryPrice_5; }
	inline ISN_SKProductDiscount_t2A84CBD55FF51721100726DA4B25A078DB1C82F9 ** get_address_of_m_IntroductoryPrice_5() { return &___m_IntroductoryPrice_5; }
	inline void set_m_IntroductoryPrice_5(ISN_SKProductDiscount_t2A84CBD55FF51721100726DA4B25A078DB1C82F9 * value)
	{
		___m_IntroductoryPrice_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_IntroductoryPrice_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_SubscriptionPeriod_6() { return static_cast<int32_t>(offsetof(ISN_SKProduct_tB70386270C96B57C2FB14E931332F98F0F186B15, ___m_SubscriptionPeriod_6)); }
	inline ISN_SKProductSubscriptionPeriod_t7B9C772EB3186D0D485FA57DA19AD9D7023C34C1 * get_m_SubscriptionPeriod_6() const { return ___m_SubscriptionPeriod_6; }
	inline ISN_SKProductSubscriptionPeriod_t7B9C772EB3186D0D485FA57DA19AD9D7023C34C1 ** get_address_of_m_SubscriptionPeriod_6() { return &___m_SubscriptionPeriod_6; }
	inline void set_m_SubscriptionPeriod_6(ISN_SKProductSubscriptionPeriod_t7B9C772EB3186D0D485FA57DA19AD9D7023C34C1 * value)
	{
		___m_SubscriptionPeriod_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubscriptionPeriod_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_LocalizedPrice_7() { return static_cast<int32_t>(offsetof(ISN_SKProduct_tB70386270C96B57C2FB14E931332F98F0F186B15, ___m_LocalizedPrice_7)); }
	inline String_t* get_m_LocalizedPrice_7() const { return ___m_LocalizedPrice_7; }
	inline String_t** get_address_of_m_LocalizedPrice_7() { return &___m_LocalizedPrice_7; }
	inline void set_m_LocalizedPrice_7(String_t* value)
	{
		___m_LocalizedPrice_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocalizedPrice_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_EditorData_8() { return static_cast<int32_t>(offsetof(ISN_SKProduct_tB70386270C96B57C2FB14E931332F98F0F186B15, ___m_EditorData_8)); }
	inline ISN_SKProductEditorData_t5A75975F979B075D6CF23CEFB1E262BF3124F6B7 * get_m_EditorData_8() const { return ___m_EditorData_8; }
	inline ISN_SKProductEditorData_t5A75975F979B075D6CF23CEFB1E262BF3124F6B7 ** get_address_of_m_EditorData_8() { return &___m_EditorData_8; }
	inline void set_m_EditorData_8(ISN_SKProductEditorData_t5A75975F979B075D6CF23CEFB1E262BF3124F6B7 * value)
	{
		___m_EditorData_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EditorData_8), (void*)value);
	}
};


// SA.iOS.Social.ISN_TextMessage
struct  ISN_TextMessage_t982F0CF25C97F72D367854A79CFC6027324EE154  : public RuntimeObject
{
public:

public:
};

struct ISN_TextMessage_t982F0CF25C97F72D367854A79CFC6027324EE154_StaticFields
{
public:
	// System.Action`1<SA.iOS.Social.ISN_MessageComposeResult> SA.iOS.Social.ISN_TextMessage::OnTextMessageResult
	Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498 * ___OnTextMessageResult_0;

public:
	inline static int32_t get_offset_of_OnTextMessageResult_0() { return static_cast<int32_t>(offsetof(ISN_TextMessage_t982F0CF25C97F72D367854A79CFC6027324EE154_StaticFields, ___OnTextMessageResult_0)); }
	inline Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498 * get_OnTextMessageResult_0() const { return ___OnTextMessageResult_0; }
	inline Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498 ** get_address_of_OnTextMessageResult_0() { return &___OnTextMessageResult_0; }
	inline void set_OnTextMessageResult_0(Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498 * value)
	{
		___OnTextMessageResult_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTextMessageResult_0), (void*)value);
	}
};


// SA.iOS.Social.ISN_Twitter
struct  ISN_Twitter_t8A20A02412BEB51CEA787BF6907FB456CBDAFB4D  : public RuntimeObject
{
public:

public:
};

struct ISN_Twitter_t8A20A02412BEB51CEA787BF6907FB456CBDAFB4D_StaticFields
{
public:
	// System.Action SA.iOS.Social.ISN_Twitter::OnPostStart
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnPostStart_0;
	// System.Action`1<SA.Foundation.Templates.SA_Result> SA.iOS.Social.ISN_Twitter::OnPostResult
	Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * ___OnPostResult_1;

public:
	inline static int32_t get_offset_of_OnPostStart_0() { return static_cast<int32_t>(offsetof(ISN_Twitter_t8A20A02412BEB51CEA787BF6907FB456CBDAFB4D_StaticFields, ___OnPostStart_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnPostStart_0() const { return ___OnPostStart_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnPostStart_0() { return &___OnPostStart_0; }
	inline void set_OnPostStart_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnPostStart_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPostStart_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnPostResult_1() { return static_cast<int32_t>(offsetof(ISN_Twitter_t8A20A02412BEB51CEA787BF6907FB456CBDAFB4D_StaticFields, ___OnPostResult_1)); }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * get_OnPostResult_1() const { return ___OnPostResult_1; }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 ** get_address_of_OnPostResult_1() { return &___OnPostResult_1; }
	inline void set_OnPostResult_1(Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * value)
	{
		___OnPostResult_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPostResult_1), (void*)value);
	}
};


// SA.iOS.UIKit.ISN_UIImagePickerController
struct  ISN_UIImagePickerController_t5E19A899C36CEF2E58829CCD7D4EF76DCCF8E03F  : public RuntimeObject
{
public:
	// SA.iOS.UIKit.ISN_UIPickerControllerRequest SA.iOS.UIKit.ISN_UIImagePickerController::m_Request
	ISN_UIPickerControllerRequest_t9E8E61943493A29045F8D2D1EEE9169C080FCDFC * ___m_Request_0;

public:
	inline static int32_t get_offset_of_m_Request_0() { return static_cast<int32_t>(offsetof(ISN_UIImagePickerController_t5E19A899C36CEF2E58829CCD7D4EF76DCCF8E03F, ___m_Request_0)); }
	inline ISN_UIPickerControllerRequest_t9E8E61943493A29045F8D2D1EEE9169C080FCDFC * get_m_Request_0() const { return ___m_Request_0; }
	inline ISN_UIPickerControllerRequest_t9E8E61943493A29045F8D2D1EEE9169C080FCDFC ** get_address_of_m_Request_0() { return &___m_Request_0; }
	inline void set_m_Request_0(ISN_UIPickerControllerRequest_t9E8E61943493A29045F8D2D1EEE9169C080FCDFC * value)
	{
		___m_Request_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Request_0), (void*)value);
	}
};


// SA.iOS.UserNotifications.ISN_UNNotificationResponse
struct  ISN_UNNotificationResponse_t30FAF666EEE812D1513DABBFB08BFFD1582B80AC  : public RuntimeObject
{
public:
	// SA.iOS.UserNotifications.ISN_UNNotification SA.iOS.UserNotifications.ISN_UNNotificationResponse::m_Notification
	ISN_UNNotification_tB6E4CEA049D5E118C5B1CD57E7D21292DF0A2827 * ___m_Notification_0;
	// System.String SA.iOS.UserNotifications.ISN_UNNotificationResponse::m_ActionIdentifier
	String_t* ___m_ActionIdentifier_1;

public:
	inline static int32_t get_offset_of_m_Notification_0() { return static_cast<int32_t>(offsetof(ISN_UNNotificationResponse_t30FAF666EEE812D1513DABBFB08BFFD1582B80AC, ___m_Notification_0)); }
	inline ISN_UNNotification_tB6E4CEA049D5E118C5B1CD57E7D21292DF0A2827 * get_m_Notification_0() const { return ___m_Notification_0; }
	inline ISN_UNNotification_tB6E4CEA049D5E118C5B1CD57E7D21292DF0A2827 ** get_address_of_m_Notification_0() { return &___m_Notification_0; }
	inline void set_m_Notification_0(ISN_UNNotification_tB6E4CEA049D5E118C5B1CD57E7D21292DF0A2827 * value)
	{
		___m_Notification_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Notification_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionIdentifier_1() { return static_cast<int32_t>(offsetof(ISN_UNNotificationResponse_t30FAF666EEE812D1513DABBFB08BFFD1582B80AC, ___m_ActionIdentifier_1)); }
	inline String_t* get_m_ActionIdentifier_1() const { return ___m_ActionIdentifier_1; }
	inline String_t** get_address_of_m_ActionIdentifier_1() { return &___m_ActionIdentifier_1; }
	inline void set_m_ActionIdentifier_1(String_t* value)
	{
		___m_ActionIdentifier_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionIdentifier_1), (void*)value);
	}
};


// SA.iOS.UserNotifications.ISN_UNUserNotificationCenterDelegate
struct  ISN_UNUserNotificationCenterDelegate_t92F036B08952781F600D5691A173DCAABB110E55  : public RuntimeObject
{
public:

public:
};


// SA.iOS.Social.ISN_Whatsapp
struct  ISN_Whatsapp_t964A5BE009502A1F3B85B39B423C8B19668B1DCB  : public RuntimeObject
{
public:

public:
};


// SA.Foundation.Templates.SA_Error
struct  SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1  : public RuntimeObject
{
public:
	// System.Int32 SA.Foundation.Templates.SA_Error::m_code
	int32_t ___m_code_0;
	// System.String SA.Foundation.Templates.SA_Error::m_message
	String_t* ___m_message_1;

public:
	inline static int32_t get_offset_of_m_code_0() { return static_cast<int32_t>(offsetof(SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1, ___m_code_0)); }
	inline int32_t get_m_code_0() const { return ___m_code_0; }
	inline int32_t* get_address_of_m_code_0() { return &___m_code_0; }
	inline void set_m_code_0(int32_t value)
	{
		___m_code_0 = value;
	}

	inline static int32_t get_offset_of_m_message_1() { return static_cast<int32_t>(offsetof(SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1, ___m_message_1)); }
	inline String_t* get_m_message_1() const { return ___m_message_1; }
	inline String_t** get_address_of_m_message_1() { return &___m_message_1; }
	inline void set_m_message_1(String_t* value)
	{
		___m_message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_message_1), (void*)value);
	}
};


// SA.Foundation.Templates.SA_Result
struct  SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE  : public RuntimeObject
{
public:
	// SA.Foundation.Templates.SA_Error SA.Foundation.Templates.SA_Result::m_error
	SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * ___m_error_0;
	// System.String SA.Foundation.Templates.SA_Result::m_requestId
	String_t* ___m_requestId_1;

public:
	inline static int32_t get_offset_of_m_error_0() { return static_cast<int32_t>(offsetof(SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE, ___m_error_0)); }
	inline SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * get_m_error_0() const { return ___m_error_0; }
	inline SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 ** get_address_of_m_error_0() { return &___m_error_0; }
	inline void set_m_error_0(SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * value)
	{
		___m_error_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_error_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_requestId_1() { return static_cast<int32_t>(offsetof(SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE, ___m_requestId_1)); }
	inline String_t* get_m_requestId_1() const { return ___m_requestId_1; }
	inline String_t** get_address_of_m_requestId_1() { return &___m_requestId_1; }
	inline void set_m_requestId_1(String_t* value)
	{
		___m_requestId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_requestId_1), (void*)value);
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

// SA.iOS.AuthenticationServices.ISN_ASAuthorizationController/<>c
struct  U3CU3Ec_tA660AB806A590C5359CA1B2CA66002F25A18A5D8  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tA660AB806A590C5359CA1B2CA66002F25A18A5D8_StaticFields
{
public:
	// SA.iOS.AuthenticationServices.ISN_ASAuthorizationController/<>c SA.iOS.AuthenticationServices.ISN_ASAuthorizationController/<>c::<>9
	U3CU3Ec_tA660AB806A590C5359CA1B2CA66002F25A18A5D8 * ___U3CU3E9_0;
	// System.Func`2<SA.iOS.AuthenticationServices.ISN_ASAuthorizationRequest,System.String> SA.iOS.AuthenticationServices.ISN_ASAuthorizationController/<>c::<>9__0_0
	Func_2_t879FBF6683CEB200D6AA7587414E7192279A30A5 * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA660AB806A590C5359CA1B2CA66002F25A18A5D8_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tA660AB806A590C5359CA1B2CA66002F25A18A5D8 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tA660AB806A590C5359CA1B2CA66002F25A18A5D8 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tA660AB806A590C5359CA1B2CA66002F25A18A5D8 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA660AB806A590C5359CA1B2CA66002F25A18A5D8_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Func_2_t879FBF6683CEB200D6AA7587414E7192279A30A5 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Func_2_t879FBF6683CEB200D6AA7587414E7192279A30A5 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Func_2_t879FBF6683CEB200D6AA7587414E7192279A30A5 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// SA.iOS.AuthenticationServices.ISN_ASAuthorizationOpenIDRequest/<>c
struct  U3CU3Ec_tA5F88AFDE3B0CEB4F2DC371311B5EBE0C801888B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tA5F88AFDE3B0CEB4F2DC371311B5EBE0C801888B_StaticFields
{
public:
	// SA.iOS.AuthenticationServices.ISN_ASAuthorizationOpenIDRequest/<>c SA.iOS.AuthenticationServices.ISN_ASAuthorizationOpenIDRequest/<>c::<>9
	U3CU3Ec_tA5F88AFDE3B0CEB4F2DC371311B5EBE0C801888B * ___U3CU3E9_0;
	// System.Func`2<SA.iOS.AuthenticationServices.ISN_ASAuthorizationScope,System.String> SA.iOS.AuthenticationServices.ISN_ASAuthorizationOpenIDRequest/<>c::<>9__1_0
	Func_2_tEA31683D59A13276AF709C6B04E0214B2C1C4F57 * ___U3CU3E9__1_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA5F88AFDE3B0CEB4F2DC371311B5EBE0C801888B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tA5F88AFDE3B0CEB4F2DC371311B5EBE0C801888B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tA5F88AFDE3B0CEB4F2DC371311B5EBE0C801888B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tA5F88AFDE3B0CEB4F2DC371311B5EBE0C801888B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA5F88AFDE3B0CEB4F2DC371311B5EBE0C801888B_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_2_tEA31683D59A13276AF709C6B04E0214B2C1C4F57 * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_2_tEA31683D59A13276AF709C6B04E0214B2C1C4F57 ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_2_tEA31683D59A13276AF709C6B04E0214B2C1C4F57 * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
	}
};


// SA.iOS.Contacts.Internal.ISN_CNEditorAPI/<>c__DisplayClass0_0
struct  U3CU3Ec__DisplayClass0_0_t603E6ED61B252428003CDA6E77955FB6FB384CF4  : public RuntimeObject
{
public:
	// System.Action`1<SA.iOS.Contacts.ISN_CNContactsResult> SA.iOS.Contacts.Internal.ISN_CNEditorAPI/<>c__DisplayClass0_0::callback
	Action_1_t93AFA1AE027C78386A3DAF5B255C378893B62690 * ___callback_0;
	// SA.iOS.Contacts.Internal.ISN_CNEditorAPI SA.iOS.Contacts.Internal.ISN_CNEditorAPI/<>c__DisplayClass0_0::<>4__this
	ISN_CNEditorAPI_t2397B4C523B9DEB554661F0D17CD308FF7A46AB8 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t603E6ED61B252428003CDA6E77955FB6FB384CF4, ___callback_0)); }
	inline Action_1_t93AFA1AE027C78386A3DAF5B255C378893B62690 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t93AFA1AE027C78386A3DAF5B255C378893B62690 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t93AFA1AE027C78386A3DAF5B255C378893B62690 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t603E6ED61B252428003CDA6E77955FB6FB384CF4, ___U3CU3E4__this_1)); }
	inline ISN_CNEditorAPI_t2397B4C523B9DEB554661F0D17CD308FF7A46AB8 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline ISN_CNEditorAPI_t2397B4C523B9DEB554661F0D17CD308FF7A46AB8 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(ISN_CNEditorAPI_t2397B4C523B9DEB554661F0D17CD308FF7A46AB8 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// SA.iOS.Contacts.Internal.ISN_CNEditorAPI/<>c__DisplayClass1_0
struct  U3CU3Ec__DisplayClass1_0_tF085503B8696BCC6BC20EF9B653B5FF4FD2D3C20  : public RuntimeObject
{
public:
	// System.Action`1<SA.iOS.Contacts.ISN_CNContactsResult> SA.iOS.Contacts.Internal.ISN_CNEditorAPI/<>c__DisplayClass1_0::callback
	Action_1_t93AFA1AE027C78386A3DAF5B255C378893B62690 * ___callback_0;
	// SA.iOS.Contacts.Internal.ISN_CNEditorAPI SA.iOS.Contacts.Internal.ISN_CNEditorAPI/<>c__DisplayClass1_0::<>4__this
	ISN_CNEditorAPI_t2397B4C523B9DEB554661F0D17CD308FF7A46AB8 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_tF085503B8696BCC6BC20EF9B653B5FF4FD2D3C20, ___callback_0)); }
	inline Action_1_t93AFA1AE027C78386A3DAF5B255C378893B62690 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t93AFA1AE027C78386A3DAF5B255C378893B62690 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t93AFA1AE027C78386A3DAF5B255C378893B62690 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_tF085503B8696BCC6BC20EF9B653B5FF4FD2D3C20, ___U3CU3E4__this_1)); }
	inline ISN_CNEditorAPI_t2397B4C523B9DEB554661F0D17CD308FF7A46AB8 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline ISN_CNEditorAPI_t2397B4C523B9DEB554661F0D17CD308FF7A46AB8 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(ISN_CNEditorAPI_t2397B4C523B9DEB554661F0D17CD308FF7A46AB8 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// SA.iOS.Contacts.Internal.ISN_CNEditorAPI/<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_t1CA38D17431AEF9E4C50E112948192EDD123CA92  : public RuntimeObject
{
public:
	// System.Action`1<SA.Foundation.Templates.SA_Result> SA.iOS.Contacts.Internal.ISN_CNEditorAPI/<>c__DisplayClass4_0::callback
	Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t1CA38D17431AEF9E4C50E112948192EDD123CA92, ___callback_0)); }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * get_callback_0() const { return ___callback_0; }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// SA.iOS.UIKit.ISN_DialogsStack/<>c__DisplayClass2_0
struct  U3CU3Ec__DisplayClass2_0_t80B916A319B2A4EA519FB0A85408348F53C3F183  : public RuntimeObject
{
public:
	// SA.iOS.UIKit.ISN_UIAlertController SA.iOS.UIKit.ISN_DialogsStack/<>c__DisplayClass2_0::dialog
	ISN_UIAlertController_t7E492DF004875CDD24E30821D1BE5CF460BE5B0F * ___dialog_0;

public:
	inline static int32_t get_offset_of_dialog_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t80B916A319B2A4EA519FB0A85408348F53C3F183, ___dialog_0)); }
	inline ISN_UIAlertController_t7E492DF004875CDD24E30821D1BE5CF460BE5B0F * get_dialog_0() const { return ___dialog_0; }
	inline ISN_UIAlertController_t7E492DF004875CDD24E30821D1BE5CF460BE5B0F ** get_address_of_dialog_0() { return &___dialog_0; }
	inline void set_dialog_0(ISN_UIAlertController_t7E492DF004875CDD24E30821D1BE5CF460BE5B0F * value)
	{
		___dialog_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dialog_0), (void*)value);
	}
};


// SA.iOS.Social.ISN_Facebook/<>c
struct  U3CU3Ec_t991E7432CD9C5E03D22ABA90B56CEDC6F92754B6  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t991E7432CD9C5E03D22ABA90B56CEDC6F92754B6_StaticFields
{
public:
	// SA.iOS.Social.ISN_Facebook/<>c SA.iOS.Social.ISN_Facebook/<>c::<>9
	U3CU3Ec_t991E7432CD9C5E03D22ABA90B56CEDC6F92754B6 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t991E7432CD9C5E03D22ABA90B56CEDC6F92754B6_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t991E7432CD9C5E03D22ABA90B56CEDC6F92754B6 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t991E7432CD9C5E03D22ABA90B56CEDC6F92754B6 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t991E7432CD9C5E03D22ABA90B56CEDC6F92754B6 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// SA.iOS.Social.ISN_Facebook/Internal
struct  Internal_t06FD9C2DE60E153C3D912B8C955C88B0BFCCDEA1  : public RuntimeObject
{
public:

public:
};


// SA.iOS.GameKit.ISN_GKGameCenterViewController/<>c__DisplayClass3_0
struct  U3CU3Ec__DisplayClass3_0_t8DFCCB93EAA393FDB4B787B5D29A0E62402DF3B2  : public RuntimeObject
{
public:
	// System.Action SA.iOS.GameKit.ISN_GKGameCenterViewController/<>c__DisplayClass3_0::callback
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t8DFCCB93EAA393FDB4B787B5D29A0E62402DF3B2, ___callback_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_callback_0() const { return ___callback_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// SA.iOS.GameKit.ISN_GKLeaderboard/<>c__DisplayClass36_0
struct  U3CU3Ec__DisplayClass36_0_tF2C7AD25CB12CD7598AE205D4CDE8C5E582FA7BE  : public RuntimeObject
{
public:
	// SA.iOS.GameKit.ISN_GKLeaderboard SA.iOS.GameKit.ISN_GKLeaderboard/<>c__DisplayClass36_0::<>4__this
	ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 * ___U3CU3E4__this_0;
	// System.Action`1<SA.iOS.GameKit.ISN_GKScoreLoadResult> SA.iOS.GameKit.ISN_GKLeaderboard/<>c__DisplayClass36_0::callback
	Action_1_tF3DE25E536BCA9529D0526BD696C217D9BDE1941 * ___callback_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_tF2C7AD25CB12CD7598AE205D4CDE8C5E582FA7BE, ___U3CU3E4__this_0)); }
	inline ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_tF2C7AD25CB12CD7598AE205D4CDE8C5E582FA7BE, ___callback_1)); }
	inline Action_1_tF3DE25E536BCA9529D0526BD696C217D9BDE1941 * get_callback_1() const { return ___callback_1; }
	inline Action_1_tF3DE25E536BCA9529D0526BD696C217D9BDE1941 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_1_tF3DE25E536BCA9529D0526BD696C217D9BDE1941 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};


// SA.iOS.GameKit.ISN_GKLocalPlayer/<>c
struct  U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields
{
public:
	// SA.iOS.GameKit.ISN_GKLocalPlayer/<>c SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<>9
	U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * ___U3CU3E9_0;
	// System.Action`1<SA.Foundation.Templates.SA_Result> SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<>9__21_0
	Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * ___U3CU3E9__21_0_1;
	// System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameFetchResult> SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<>9__30_1
	Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * ___U3CU3E9__30_1_2;
	// System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameFetchResult> SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<>9__30_0
	Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * ___U3CU3E9__30_0_3;
	// System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameSaveResult> SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<>9__31_1
	Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 * ___U3CU3E9__31_1_4;
	// System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameSaveResult> SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<>9__31_0
	Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 * ___U3CU3E9__31_0_5;
	// System.Action`1<SA.Foundation.Templates.SA_Result> SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<>9__32_1
	Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * ___U3CU3E9__32_1_6;
	// System.Action`1<SA.Foundation.Templates.SA_Result> SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<>9__32_0
	Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * ___U3CU3E9__32_0_7;
	// System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameLoadResult> SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<>9__33_1
	Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 * ___U3CU3E9__33_1_8;
	// System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameLoadResult> SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<>9__33_0
	Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 * ___U3CU3E9__33_0_9;
	// System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameFetchResult> SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<>9__34_1
	Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * ___U3CU3E9__34_1_10;
	// System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameFetchResult> SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<>9__34_0
	Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * ___U3CU3E9__34_0_11;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__21_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields, ___U3CU3E9__21_0_1)); }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * get_U3CU3E9__21_0_1() const { return ___U3CU3E9__21_0_1; }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 ** get_address_of_U3CU3E9__21_0_1() { return &___U3CU3E9__21_0_1; }
	inline void set_U3CU3E9__21_0_1(Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * value)
	{
		___U3CU3E9__21_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__21_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__30_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields, ___U3CU3E9__30_1_2)); }
	inline Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * get_U3CU3E9__30_1_2() const { return ___U3CU3E9__30_1_2; }
	inline Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 ** get_address_of_U3CU3E9__30_1_2() { return &___U3CU3E9__30_1_2; }
	inline void set_U3CU3E9__30_1_2(Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * value)
	{
		___U3CU3E9__30_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__30_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__30_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields, ___U3CU3E9__30_0_3)); }
	inline Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * get_U3CU3E9__30_0_3() const { return ___U3CU3E9__30_0_3; }
	inline Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 ** get_address_of_U3CU3E9__30_0_3() { return &___U3CU3E9__30_0_3; }
	inline void set_U3CU3E9__30_0_3(Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * value)
	{
		___U3CU3E9__30_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__30_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__31_1_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields, ___U3CU3E9__31_1_4)); }
	inline Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 * get_U3CU3E9__31_1_4() const { return ___U3CU3E9__31_1_4; }
	inline Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 ** get_address_of_U3CU3E9__31_1_4() { return &___U3CU3E9__31_1_4; }
	inline void set_U3CU3E9__31_1_4(Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 * value)
	{
		___U3CU3E9__31_1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__31_1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__31_0_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields, ___U3CU3E9__31_0_5)); }
	inline Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 * get_U3CU3E9__31_0_5() const { return ___U3CU3E9__31_0_5; }
	inline Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 ** get_address_of_U3CU3E9__31_0_5() { return &___U3CU3E9__31_0_5; }
	inline void set_U3CU3E9__31_0_5(Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 * value)
	{
		___U3CU3E9__31_0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__31_0_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__32_1_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields, ___U3CU3E9__32_1_6)); }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * get_U3CU3E9__32_1_6() const { return ___U3CU3E9__32_1_6; }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 ** get_address_of_U3CU3E9__32_1_6() { return &___U3CU3E9__32_1_6; }
	inline void set_U3CU3E9__32_1_6(Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * value)
	{
		___U3CU3E9__32_1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__32_1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__32_0_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields, ___U3CU3E9__32_0_7)); }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * get_U3CU3E9__32_0_7() const { return ___U3CU3E9__32_0_7; }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 ** get_address_of_U3CU3E9__32_0_7() { return &___U3CU3E9__32_0_7; }
	inline void set_U3CU3E9__32_0_7(Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * value)
	{
		___U3CU3E9__32_0_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__32_0_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__33_1_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields, ___U3CU3E9__33_1_8)); }
	inline Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 * get_U3CU3E9__33_1_8() const { return ___U3CU3E9__33_1_8; }
	inline Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 ** get_address_of_U3CU3E9__33_1_8() { return &___U3CU3E9__33_1_8; }
	inline void set_U3CU3E9__33_1_8(Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 * value)
	{
		___U3CU3E9__33_1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__33_1_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__33_0_9() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields, ___U3CU3E9__33_0_9)); }
	inline Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 * get_U3CU3E9__33_0_9() const { return ___U3CU3E9__33_0_9; }
	inline Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 ** get_address_of_U3CU3E9__33_0_9() { return &___U3CU3E9__33_0_9; }
	inline void set_U3CU3E9__33_0_9(Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 * value)
	{
		___U3CU3E9__33_0_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__33_0_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__34_1_10() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields, ___U3CU3E9__34_1_10)); }
	inline Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * get_U3CU3E9__34_1_10() const { return ___U3CU3E9__34_1_10; }
	inline Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 ** get_address_of_U3CU3E9__34_1_10() { return &___U3CU3E9__34_1_10; }
	inline void set_U3CU3E9__34_1_10(Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * value)
	{
		___U3CU3E9__34_1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__34_1_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__34_0_11() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields, ___U3CU3E9__34_0_11)); }
	inline Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * get_U3CU3E9__34_0_11() const { return ___U3CU3E9__34_0_11; }
	inline Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 ** get_address_of_U3CU3E9__34_0_11() { return &___U3CU3E9__34_0_11; }
	inline void set_U3CU3E9__34_0_11(Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * value)
	{
		___U3CU3E9__34_0_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__34_0_11), (void*)value);
	}
};


// SA.iOS.GameKit.ISN_GKLocalPlayer/<>c__DisplayClass36_0
struct  U3CU3Ec__DisplayClass36_0_t283A445BD13EF0495D3D95432964BDDCFD260B97  : public RuntimeObject
{
public:
	// System.Action`1<SA.iOS.GameKit.ISN_GKLoadDefaultLeaderboardResult> SA.iOS.GameKit.ISN_GKLocalPlayer/<>c__DisplayClass36_0::callback
	Action_1_t297BE403C517D6F098CCAD063217CC4522C4C280 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t283A445BD13EF0495D3D95432964BDDCFD260B97, ___callback_0)); }
	inline Action_1_t297BE403C517D6F098CCAD063217CC4522C4C280 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t297BE403C517D6F098CCAD063217CC4522C4C280 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t297BE403C517D6F098CCAD063217CC4522C4C280 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// SA.iOS.Social.ISN_Instagram/<>c
struct  U3CU3Ec_t0775DC4B3F2747BD58CE3092A2638DB17C2368D1  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t0775DC4B3F2747BD58CE3092A2638DB17C2368D1_StaticFields
{
public:
	// SA.iOS.Social.ISN_Instagram/<>c SA.iOS.Social.ISN_Instagram/<>c::<>9
	U3CU3Ec_t0775DC4B3F2747BD58CE3092A2638DB17C2368D1 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0775DC4B3F2747BD58CE3092A2638DB17C2368D1_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t0775DC4B3F2747BD58CE3092A2638DB17C2368D1 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t0775DC4B3F2747BD58CE3092A2638DB17C2368D1 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t0775DC4B3F2747BD58CE3092A2638DB17C2368D1 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// SA.iOS.Social.ISN_Instagram/Internal
struct  Internal_t23355DFDFA1B7CC07756E527ACB05B82EEF89487  : public RuntimeObject
{
public:

public:
};


// SA.iOS.MediaPlayer.ISN_MPMediaPickerController/<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_t778F81DFA95BC843725618B8E5CCD98FBA6C5495  : public RuntimeObject
{
public:
	// SA.iOS.MediaPlayer.ISN_IMPMediaPickerControllerDelegate SA.iOS.MediaPlayer.ISN_MPMediaPickerController/<>c__DisplayClass4_0::delegate
	RuntimeObject* ___delegate_0;
	// SA.iOS.MediaPlayer.ISN_MPMediaPickerController SA.iOS.MediaPlayer.ISN_MPMediaPickerController/<>c__DisplayClass4_0::<>4__this
	ISN_MPMediaPickerController_tE46DF789FC1F7CE0D0D599680D85106DD8B3193B * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_delegate_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t778F81DFA95BC843725618B8E5CCD98FBA6C5495, ___delegate_0)); }
	inline RuntimeObject* get_delegate_0() const { return ___delegate_0; }
	inline RuntimeObject** get_address_of_delegate_0() { return &___delegate_0; }
	inline void set_delegate_0(RuntimeObject* value)
	{
		___delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t778F81DFA95BC843725618B8E5CCD98FBA6C5495, ___U3CU3E4__this_1)); }
	inline ISN_MPMediaPickerController_tE46DF789FC1F7CE0D0D599680D85106DD8B3193B * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline ISN_MPMediaPickerController_tE46DF789FC1F7CE0D0D599680D85106DD8B3193B ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(ISN_MPMediaPickerController_tE46DF789FC1F7CE0D0D599680D85106DD8B3193B * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// SA.iOS.Social.ISN_Mail/<>c
struct  U3CU3Ec_tB990CAF31D94D477325E36EB65019F184028D78E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB990CAF31D94D477325E36EB65019F184028D78E_StaticFields
{
public:
	// SA.iOS.Social.ISN_Mail/<>c SA.iOS.Social.ISN_Mail/<>c::<>9
	U3CU3Ec_tB990CAF31D94D477325E36EB65019F184028D78E * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB990CAF31D94D477325E36EB65019F184028D78E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB990CAF31D94D477325E36EB65019F184028D78E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB990CAF31D94D477325E36EB65019F184028D78E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB990CAF31D94D477325E36EB65019F184028D78E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// SA.iOS.Social.ISN_Mail/Internal
struct  Internal_t9E61C40486709A12408FBADA77CC5B8457CCE061  : public RuntimeObject
{
public:

public:
};


// SA.iOS.UIKit.ISN_PhotoAlbum/<>c__DisplayClass1_0
struct  U3CU3Ec__DisplayClass1_0_t12DA2EB5B6C3B2A77528B0243A14A908037AFB81  : public RuntimeObject
{
public:
	// System.Action`1<SA.Foundation.Templates.SA_Result> SA.iOS.UIKit.ISN_PhotoAlbum/<>c__DisplayClass1_0::callback
	Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t12DA2EB5B6C3B2A77528B0243A14A908037AFB81, ___callback_0)); }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * get_callback_0() const { return ___callback_0; }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// SA.iOS.ReplayKit.ISN_RPNativeAPI/<>c
struct  U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B_StaticFields
{
public:
	// SA.iOS.ReplayKit.ISN_RPNativeAPI/<>c SA.iOS.ReplayKit.ISN_RPNativeAPI/<>c::<>9
	U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B * ___U3CU3E9_0;
	// System.Action`1<SA.Foundation.Templates.SA_Result> SA.iOS.ReplayKit.ISN_RPNativeAPI/<>c::<>9__24_0
	Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * ___U3CU3E9__24_0_1;
	// System.Action`1<SA.iOS.ReplayKit.ISN_RPStopResult> SA.iOS.ReplayKit.ISN_RPNativeAPI/<>c::<>9__24_1
	Action_1_t17F5618884671AD79DC13716497D94B79820F327 * ___U3CU3E9__24_1_2;
	// System.Action SA.iOS.ReplayKit.ISN_RPNativeAPI/<>c::<>9__24_2
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__24_2_3;
	// System.Action`1<SA.iOS.ReplayKit.ISN_PRPreviewResult> SA.iOS.ReplayKit.ISN_RPNativeAPI/<>c::<>9__24_3
	Action_1_t188D50561FE00C43EEC15D580F8275871ED91CC8 * ___U3CU3E9__24_3_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B_StaticFields, ___U3CU3E9__24_0_1)); }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * get_U3CU3E9__24_0_1() const { return ___U3CU3E9__24_0_1; }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 ** get_address_of_U3CU3E9__24_0_1() { return &___U3CU3E9__24_0_1; }
	inline void set_U3CU3E9__24_0_1(Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * value)
	{
		___U3CU3E9__24_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B_StaticFields, ___U3CU3E9__24_1_2)); }
	inline Action_1_t17F5618884671AD79DC13716497D94B79820F327 * get_U3CU3E9__24_1_2() const { return ___U3CU3E9__24_1_2; }
	inline Action_1_t17F5618884671AD79DC13716497D94B79820F327 ** get_address_of_U3CU3E9__24_1_2() { return &___U3CU3E9__24_1_2; }
	inline void set_U3CU3E9__24_1_2(Action_1_t17F5618884671AD79DC13716497D94B79820F327 * value)
	{
		___U3CU3E9__24_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B_StaticFields, ___U3CU3E9__24_2_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__24_2_3() const { return ___U3CU3E9__24_2_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__24_2_3() { return &___U3CU3E9__24_2_3; }
	inline void set_U3CU3E9__24_2_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__24_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B_StaticFields, ___U3CU3E9__24_3_4)); }
	inline Action_1_t188D50561FE00C43EEC15D580F8275871ED91CC8 * get_U3CU3E9__24_3_4() const { return ___U3CU3E9__24_3_4; }
	inline Action_1_t188D50561FE00C43EEC15D580F8275871ED91CC8 ** get_address_of_U3CU3E9__24_3_4() { return &___U3CU3E9__24_3_4; }
	inline void set_U3CU3E9__24_3_4(Action_1_t188D50561FE00C43EEC15D580F8275871ED91CC8 * value)
	{
		___U3CU3E9__24_3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_3_4), (void*)value);
	}
};


// SA.iOS.StoreKit.ISN_SKEditorAPI/<>c__DisplayClass14_0
struct  U3CU3Ec__DisplayClass14_0_t89A1E79CC49CA6B4F745392E404591AF1C6F476F  : public RuntimeObject
{
public:
	// System.Action`1<SA.Foundation.Templates.SA_Result> SA.iOS.StoreKit.ISN_SKEditorAPI/<>c__DisplayClass14_0::callback
	Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_t89A1E79CC49CA6B4F745392E404591AF1C6F476F, ___callback_0)); }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * get_callback_0() const { return ___callback_0; }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// SA.iOS.StoreKit.ISN_SKEditorAPI/<>c__DisplayClass5_0
struct  U3CU3Ec__DisplayClass5_0_tFFE496638994CC71212A0B0521C025EACDBF79E2  : public RuntimeObject
{
public:
	// System.Action`1<SA.iOS.StoreKit.ISN_SKInitResult> SA.iOS.StoreKit.ISN_SKEditorAPI/<>c__DisplayClass5_0::callback
	Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tFFE496638994CC71212A0B0521C025EACDBF79E2, ___callback_0)); }
	inline Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// SA.iOS.StoreKit.ISN_SKEditorAPI/<>c__DisplayClass6_0
struct  U3CU3Ec__DisplayClass6_0_tD63406D539CA3AC8C0533EE3A00262D75F3AFD3D  : public RuntimeObject
{
public:
	// System.String SA.iOS.StoreKit.ISN_SKEditorAPI/<>c__DisplayClass6_0::productIdentifier
	String_t* ___productIdentifier_0;
	// SA.iOS.StoreKit.ISN_SKEditorAPI SA.iOS.StoreKit.ISN_SKEditorAPI/<>c__DisplayClass6_0::<>4__this
	ISN_SKEditorAPI_t04F1EEA2CC9A465E126DDBD91123FB3F959B1345 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_productIdentifier_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tD63406D539CA3AC8C0533EE3A00262D75F3AFD3D, ___productIdentifier_0)); }
	inline String_t* get_productIdentifier_0() const { return ___productIdentifier_0; }
	inline String_t** get_address_of_productIdentifier_0() { return &___productIdentifier_0; }
	inline void set_productIdentifier_0(String_t* value)
	{
		___productIdentifier_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___productIdentifier_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tD63406D539CA3AC8C0533EE3A00262D75F3AFD3D, ___U3CU3E4__this_1)); }
	inline ISN_SKEditorAPI_t04F1EEA2CC9A465E126DDBD91123FB3F959B1345 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline ISN_SKEditorAPI_t04F1EEA2CC9A465E126DDBD91123FB3F959B1345 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(ISN_SKEditorAPI_t04F1EEA2CC9A465E126DDBD91123FB3F959B1345 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// SA.iOS.StoreKit.ISN_SKEditorAPI/<>c__DisplayClass7_0
struct  U3CU3Ec__DisplayClass7_0_tC3A5C6CBF9B065CB81CFB0584F6F9271908A692B  : public RuntimeObject
{
public:
	// SA.iOS.StoreKit.ISN_SKEditorAPI SA.iOS.StoreKit.ISN_SKEditorAPI/<>c__DisplayClass7_0::<>4__this
	ISN_SKEditorAPI_t04F1EEA2CC9A465E126DDBD91123FB3F959B1345 * ___U3CU3E4__this_0;
	// SA.iOS.StoreKit.ISN_iSKPaymentTransaction SA.iOS.StoreKit.ISN_SKEditorAPI/<>c__DisplayClass7_0::transaction
	RuntimeObject* ___transaction_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_tC3A5C6CBF9B065CB81CFB0584F6F9271908A692B, ___U3CU3E4__this_0)); }
	inline ISN_SKEditorAPI_t04F1EEA2CC9A465E126DDBD91123FB3F959B1345 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ISN_SKEditorAPI_t04F1EEA2CC9A465E126DDBD91123FB3F959B1345 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ISN_SKEditorAPI_t04F1EEA2CC9A465E126DDBD91123FB3F959B1345 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_transaction_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_tC3A5C6CBF9B065CB81CFB0584F6F9271908A692B, ___transaction_1)); }
	inline RuntimeObject* get_transaction_1() const { return ___transaction_1; }
	inline RuntimeObject** get_address_of_transaction_1() { return &___transaction_1; }
	inline void set_transaction_1(RuntimeObject* value)
	{
		___transaction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transaction_1), (void*)value);
	}
};


// SA.iOS.StoreKit.ISN_SKLib/ISN_LoadStoreRequest
struct  ISN_LoadStoreRequest_t3B1D6CD566FCBC4EE16D3F4194588A17E6B3FC76  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> SA.iOS.StoreKit.ISN_SKLib/ISN_LoadStoreRequest::ProductIdentifiers
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___ProductIdentifiers_0;

public:
	inline static int32_t get_offset_of_ProductIdentifiers_0() { return static_cast<int32_t>(offsetof(ISN_LoadStoreRequest_t3B1D6CD566FCBC4EE16D3F4194588A17E6B3FC76, ___ProductIdentifiers_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_ProductIdentifiers_0() const { return ___ProductIdentifiers_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_ProductIdentifiers_0() { return &___ProductIdentifiers_0; }
	inline void set_ProductIdentifiers_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___ProductIdentifiers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProductIdentifiers_0), (void*)value);
	}
};


// SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c
struct  U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_StaticFields
{
public:
	// SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c::<>9
	U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198 * ___U3CU3E9_0;
	// System.Action`1<SA.iOS.StoreKit.ISN_SKInitResult> SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c::<>9__9_1
	Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * ___U3CU3E9__9_1_1;
	// System.Action`1<SA.iOS.StoreKit.ISN_SKInitResult> SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c::<>9__9_0
	Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * ___U3CU3E9__9_0_2;
	// System.Action`1<SA.iOS.StoreKit.ISN_SKInitResult> SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c::<>9__14_0
	Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * ___U3CU3E9__14_0_3;
	// System.Action`1<SA.iOS.StoreKit.ISN_iSKPaymentTransaction> SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c::<>9__28_0
	Action_1_t7EA3C9CDA20C4F7D638DE4ACDE8CD92738372C96 * ___U3CU3E9__28_0_4;
	// System.Action`1<SA.iOS.StoreKit.ISN_iSKPaymentTransaction> SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c::<>9__28_1
	Action_1_t7EA3C9CDA20C4F7D638DE4ACDE8CD92738372C96 * ___U3CU3E9__28_1_5;
	// System.Action`1<SA.Foundation.Templates.SA_Result> SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c::<>9__28_2
	Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * ___U3CU3E9__28_2_6;
	// System.Action SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c::<>9__28_3
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__28_3_7;
	// System.Action`1<SA.iOS.StoreKit.ISN_SKProduct> SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c::<>9__28_4
	Action_1_t30CDCE9A41808D71965EB27032C972CD5B867AF3 * ___U3CU3E9__28_4_8;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__9_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_StaticFields, ___U3CU3E9__9_1_1)); }
	inline Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * get_U3CU3E9__9_1_1() const { return ___U3CU3E9__9_1_1; }
	inline Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 ** get_address_of_U3CU3E9__9_1_1() { return &___U3CU3E9__9_1_1; }
	inline void set_U3CU3E9__9_1_1(Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * value)
	{
		___U3CU3E9__9_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__9_1_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__9_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_StaticFields, ___U3CU3E9__9_0_2)); }
	inline Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * get_U3CU3E9__9_0_2() const { return ___U3CU3E9__9_0_2; }
	inline Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 ** get_address_of_U3CU3E9__9_0_2() { return &___U3CU3E9__9_0_2; }
	inline void set_U3CU3E9__9_0_2(Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * value)
	{
		___U3CU3E9__9_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__9_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_StaticFields, ___U3CU3E9__14_0_3)); }
	inline Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * get_U3CU3E9__14_0_3() const { return ___U3CU3E9__14_0_3; }
	inline Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 ** get_address_of_U3CU3E9__14_0_3() { return &___U3CU3E9__14_0_3; }
	inline void set_U3CU3E9__14_0_3(Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * value)
	{
		___U3CU3E9__14_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__28_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_StaticFields, ___U3CU3E9__28_0_4)); }
	inline Action_1_t7EA3C9CDA20C4F7D638DE4ACDE8CD92738372C96 * get_U3CU3E9__28_0_4() const { return ___U3CU3E9__28_0_4; }
	inline Action_1_t7EA3C9CDA20C4F7D638DE4ACDE8CD92738372C96 ** get_address_of_U3CU3E9__28_0_4() { return &___U3CU3E9__28_0_4; }
	inline void set_U3CU3E9__28_0_4(Action_1_t7EA3C9CDA20C4F7D638DE4ACDE8CD92738372C96 * value)
	{
		___U3CU3E9__28_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__28_0_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__28_1_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_StaticFields, ___U3CU3E9__28_1_5)); }
	inline Action_1_t7EA3C9CDA20C4F7D638DE4ACDE8CD92738372C96 * get_U3CU3E9__28_1_5() const { return ___U3CU3E9__28_1_5; }
	inline Action_1_t7EA3C9CDA20C4F7D638DE4ACDE8CD92738372C96 ** get_address_of_U3CU3E9__28_1_5() { return &___U3CU3E9__28_1_5; }
	inline void set_U3CU3E9__28_1_5(Action_1_t7EA3C9CDA20C4F7D638DE4ACDE8CD92738372C96 * value)
	{
		___U3CU3E9__28_1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__28_1_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__28_2_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_StaticFields, ___U3CU3E9__28_2_6)); }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * get_U3CU3E9__28_2_6() const { return ___U3CU3E9__28_2_6; }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 ** get_address_of_U3CU3E9__28_2_6() { return &___U3CU3E9__28_2_6; }
	inline void set_U3CU3E9__28_2_6(Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * value)
	{
		___U3CU3E9__28_2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__28_2_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__28_3_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_StaticFields, ___U3CU3E9__28_3_7)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__28_3_7() const { return ___U3CU3E9__28_3_7; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__28_3_7() { return &___U3CU3E9__28_3_7; }
	inline void set_U3CU3E9__28_3_7(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__28_3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__28_3_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__28_4_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_StaticFields, ___U3CU3E9__28_4_8)); }
	inline Action_1_t30CDCE9A41808D71965EB27032C972CD5B867AF3 * get_U3CU3E9__28_4_8() const { return ___U3CU3E9__28_4_8; }
	inline Action_1_t30CDCE9A41808D71965EB27032C972CD5B867AF3 ** get_address_of_U3CU3E9__28_4_8() { return &___U3CU3E9__28_4_8; }
	inline void set_U3CU3E9__28_4_8(Action_1_t30CDCE9A41808D71965EB27032C972CD5B867AF3 * value)
	{
		___U3CU3E9__28_4_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__28_4_8), (void*)value);
	}
};


// SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c__DisplayClass12_0
struct  U3CU3Ec__DisplayClass12_0_t259F77E81AD57B760C1ADF0FC76032345C0B9B80  : public RuntimeObject
{
public:
	// System.String SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c__DisplayClass12_0::productId
	String_t* ___productId_0;

public:
	inline static int32_t get_offset_of_productId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t259F77E81AD57B760C1ADF0FC76032345C0B9B80, ___productId_0)); }
	inline String_t* get_productId_0() const { return ___productId_0; }
	inline String_t** get_address_of_productId_0() { return &___productId_0; }
	inline void set_productId_0(String_t* value)
	{
		___productId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___productId_0), (void*)value);
	}
};


// SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c__DisplayClass13_0
struct  U3CU3Ec__DisplayClass13_0_t82A96A498716BE4B4498FFB65DC8A080E2696468  : public RuntimeObject
{
public:
	// SA.iOS.StoreKit.ISN_iSKPaymentTransaction SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c__DisplayClass13_0::transaction
	RuntimeObject* ___transaction_0;

public:
	inline static int32_t get_offset_of_transaction_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t82A96A498716BE4B4498FFB65DC8A080E2696468, ___transaction_0)); }
	inline RuntimeObject* get_transaction_0() const { return ___transaction_0; }
	inline RuntimeObject** get_address_of_transaction_0() { return &___transaction_0; }
	inline void set_transaction_0(RuntimeObject* value)
	{
		___transaction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transaction_0), (void*)value);
	}
};


// SA.iOS.Social.ISN_TextMessage/<>c
struct  U3CU3Ec_t8918F2BDA86BE8B5D96447E240E938D792AB831C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8918F2BDA86BE8B5D96447E240E938D792AB831C_StaticFields
{
public:
	// SA.iOS.Social.ISN_TextMessage/<>c SA.iOS.Social.ISN_TextMessage/<>c::<>9
	U3CU3Ec_t8918F2BDA86BE8B5D96447E240E938D792AB831C * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8918F2BDA86BE8B5D96447E240E938D792AB831C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8918F2BDA86BE8B5D96447E240E938D792AB831C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8918F2BDA86BE8B5D96447E240E938D792AB831C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8918F2BDA86BE8B5D96447E240E938D792AB831C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// SA.iOS.Social.ISN_TextMessage/Internal
struct  Internal_t0290C3ACF7BFEB712C0EFD306DDF2CA16BB82135  : public RuntimeObject
{
public:

public:
};


// SA.iOS.Social.ISN_Twitter/<>c
struct  U3CU3Ec_tB612FA6C01CF59E9410CE34DE0BF9541025AEBEE  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB612FA6C01CF59E9410CE34DE0BF9541025AEBEE_StaticFields
{
public:
	// SA.iOS.Social.ISN_Twitter/<>c SA.iOS.Social.ISN_Twitter/<>c::<>9
	U3CU3Ec_tB612FA6C01CF59E9410CE34DE0BF9541025AEBEE * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB612FA6C01CF59E9410CE34DE0BF9541025AEBEE_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB612FA6C01CF59E9410CE34DE0BF9541025AEBEE * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB612FA6C01CF59E9410CE34DE0BF9541025AEBEE ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB612FA6C01CF59E9410CE34DE0BF9541025AEBEE * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// SA.iOS.Social.ISN_Twitter/Internal
struct  Internal_tF7F9405EEF92829B64A6EAC165E060264F2F3AE3  : public RuntimeObject
{
public:

public:
};


// SA.iOS.UIKit.ISN_UIAlertUtility/<>c
struct  U3CU3Ec_tF7D107C15428F961368BCBD03604B0286EFE5F09  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF7D107C15428F961368BCBD03604B0286EFE5F09_StaticFields
{
public:
	// SA.iOS.UIKit.ISN_UIAlertUtility/<>c SA.iOS.UIKit.ISN_UIAlertUtility/<>c::<>9
	U3CU3Ec_tF7D107C15428F961368BCBD03604B0286EFE5F09 * ___U3CU3E9_0;
	// System.Action SA.iOS.UIKit.ISN_UIAlertUtility/<>c::<>9__0_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF7D107C15428F961368BCBD03604B0286EFE5F09_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF7D107C15428F961368BCBD03604B0286EFE5F09 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF7D107C15428F961368BCBD03604B0286EFE5F09 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF7D107C15428F961368BCBD03604B0286EFE5F09 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF7D107C15428F961368BCBD03604B0286EFE5F09_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// SA.iOS.UIKit.ISN_UICalendar/<>c__DisplayClass1_0
struct  U3CU3Ec__DisplayClass1_0_t4A3B3092B2CB9587C2A0B7FE317B8158B24DD870  : public RuntimeObject
{
public:
	// System.Action`1<System.DateTime> SA.iOS.UIKit.ISN_UICalendar/<>c__DisplayClass1_0::callback
	Action_1_t2B33C6C2E077C8AA0861FADB5453D90C6F9A7B97 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t4A3B3092B2CB9587C2A0B7FE317B8158B24DD870, ___callback_0)); }
	inline Action_1_t2B33C6C2E077C8AA0861FADB5453D90C6F9A7B97 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t2B33C6C2E077C8AA0861FADB5453D90C6F9A7B97 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t2B33C6C2E077C8AA0861FADB5453D90C6F9A7B97 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// SA.iOS.UIKit.ISN_UIDateTimePicker/<>c__DisplayClass7_0
struct  U3CU3Ec__DisplayClass7_0_t9D2F0D64014A32ECD9FFE2F7484A3359B85DD882  : public RuntimeObject
{
public:
	// System.Action`1<System.DateTime> SA.iOS.UIKit.ISN_UIDateTimePicker/<>c__DisplayClass7_0::callback
	Action_1_t2B33C6C2E077C8AA0861FADB5453D90C6F9A7B97 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t9D2F0D64014A32ECD9FFE2F7484A3359B85DD882, ___callback_0)); }
	inline Action_1_t2B33C6C2E077C8AA0861FADB5453D90C6F9A7B97 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t2B33C6C2E077C8AA0861FADB5453D90C6F9A7B97 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t2B33C6C2E077C8AA0861FADB5453D90C6F9A7B97 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// SA.iOS.UIKit.ISN_UIImagePickerController/<>c__DisplayClass1_0
struct  U3CU3Ec__DisplayClass1_0_tB88483A12772C5E444E87F2CB6D8618AA17D4927  : public RuntimeObject
{
public:
	// SA.iOS.UIKit.ISN_UIImagePickerController SA.iOS.UIKit.ISN_UIImagePickerController/<>c__DisplayClass1_0::<>4__this
	ISN_UIImagePickerController_t5E19A899C36CEF2E58829CCD7D4EF76DCCF8E03F * ___U3CU3E4__this_0;
	// System.Action`1<SA.iOS.UIKit.ISN_UIPickerControllerResult> SA.iOS.UIKit.ISN_UIImagePickerController/<>c__DisplayClass1_0::callback
	Action_1_t33C7AA5928E86B6367AFDBF1055EB7751D2D699C * ___callback_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_tB88483A12772C5E444E87F2CB6D8618AA17D4927, ___U3CU3E4__this_0)); }
	inline ISN_UIImagePickerController_t5E19A899C36CEF2E58829CCD7D4EF76DCCF8E03F * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ISN_UIImagePickerController_t5E19A899C36CEF2E58829CCD7D4EF76DCCF8E03F ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ISN_UIImagePickerController_t5E19A899C36CEF2E58829CCD7D4EF76DCCF8E03F * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_tB88483A12772C5E444E87F2CB6D8618AA17D4927, ___callback_1)); }
	inline Action_1_t33C7AA5928E86B6367AFDBF1055EB7751D2D699C * get_callback_1() const { return ___callback_1; }
	inline Action_1_t33C7AA5928E86B6367AFDBF1055EB7751D2D699C ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_1_t33C7AA5928E86B6367AFDBF1055EB7751D2D699C * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};


// SA.iOS.UIKit.ISN_UIImagePickerController/<>c__DisplayClass26_0
struct  U3CU3Ec__DisplayClass26_0_t85E370B6792D0FF0CCE4E9C04BB7C674502D8062  : public RuntimeObject
{
public:
	// System.Action`1<SA.Foundation.Templates.SA_Result> SA.iOS.UIKit.ISN_UIImagePickerController/<>c__DisplayClass26_0::callback
	Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass26_0_t85E370B6792D0FF0CCE4E9C04BB7C674502D8062, ___callback_0)); }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * get_callback_0() const { return ___callback_0; }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// SA.iOS.UIKit.ISN_UILib/SA_PluginSettingsWindowStylesRequest
struct  SA_PluginSettingsWindowStylesRequest_t36C7BC6794AC2DF9C0DDA80B47D4FAAC21C536FE  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> SA.iOS.UIKit.ISN_UILib/SA_PluginSettingsWindowStylesRequest::ProductIdentifiers
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___ProductIdentifiers_0;

public:
	inline static int32_t get_offset_of_ProductIdentifiers_0() { return static_cast<int32_t>(offsetof(SA_PluginSettingsWindowStylesRequest_t36C7BC6794AC2DF9C0DDA80B47D4FAAC21C536FE, ___ProductIdentifiers_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_ProductIdentifiers_0() const { return ___ProductIdentifiers_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_ProductIdentifiers_0() { return &___ProductIdentifiers_0; }
	inline void set_ProductIdentifiers_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___ProductIdentifiers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProductIdentifiers_0), (void*)value);
	}
};


// SA.iOS.Social.ISN_Whatsapp/Internal
struct  Internal_tB31429A3229B523B8C93716F48912C3E2B04306B  : public RuntimeObject
{
public:

public:
};


// SA.iOS.Social.ISN_TextMessage/NativeListener/<>c
struct  U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110_StaticFields
{
public:
	// SA.iOS.Social.ISN_TextMessage/NativeListener/<>c SA.iOS.Social.ISN_TextMessage/NativeListener/<>c::<>9
	U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110 * ___U3CU3E9_0;
	// System.Action`1<SA.iOS.Social.ISN_MessageComposeResult> SA.iOS.Social.ISN_TextMessage/NativeListener/<>c::<>9__0_0
	Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498 * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<SA.iOS.StoreKit.ISN_iSKPaymentTransactionObserver>
struct  Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t5A6D69A90896741CD34AAFF072502D7844EDF7A3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5, ___list_0)); }
	inline List_1_t5A6D69A90896741CD34AAFF072502D7844EDF7A3 * get_list_0() const { return ___list_0; }
	inline List_1_t5A6D69A90896741CD34AAFF072502D7844EDF7A3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t5A6D69A90896741CD34AAFF072502D7844EDF7A3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
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


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
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

// SA.iOS.AuthenticationServices.ISN_ASAuthorizationRequest
struct  ISN_ASAuthorizationRequest_tAEE1757BCE033CB0C41F1CA0355AB7616B12CD79  : public ISN_NativeObject_tCBEFEB9640F4BE02478CE5834ABB80EB299E044F
{
public:

public:
};


// SA.iOS.Contacts.ISN_CNContactsResult
struct  ISN_CNContactsResult_tABC68FBC091A4AB69DC9872B9FC49390246A6E7D  : public SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE
{
public:
	// System.Collections.Generic.List`1<SA.iOS.Contacts.ISN_CNContact> SA.iOS.Contacts.ISN_CNContactsResult::m_Contacts
	List_1_t0F4B332F375C4FD5A1EB84B0C3A98AB8E3938395 * ___m_Contacts_2;

public:
	inline static int32_t get_offset_of_m_Contacts_2() { return static_cast<int32_t>(offsetof(ISN_CNContactsResult_tABC68FBC091A4AB69DC9872B9FC49390246A6E7D, ___m_Contacts_2)); }
	inline List_1_t0F4B332F375C4FD5A1EB84B0C3A98AB8E3938395 * get_m_Contacts_2() const { return ___m_Contacts_2; }
	inline List_1_t0F4B332F375C4FD5A1EB84B0C3A98AB8E3938395 ** get_address_of_m_Contacts_2() { return &___m_Contacts_2; }
	inline void set_m_Contacts_2(List_1_t0F4B332F375C4FD5A1EB84B0C3A98AB8E3938395 * value)
	{
		___m_Contacts_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Contacts_2), (void*)value);
	}
};


// SA.iOS.GameKit.ISN_GKPlayer
struct  ISN_GKPlayer_tC728E93D11A3D9166E012CB46705607F186DD46F  : public ISN_NativeObject_tCBEFEB9640F4BE02478CE5834ABB80EB299E044F
{
public:

public:
};


// SA.iOS.GameKit.ISN_GKSavedGameFetchResult
struct  ISN_GKSavedGameFetchResult_t429317C838E84AD0264669DC43F5C4C5D23EE715  : public SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE
{
public:
	// System.Collections.Generic.List`1<SA.iOS.GameKit.ISN_GKSavedGame> SA.iOS.GameKit.ISN_GKSavedGameFetchResult::m_SavedGames
	List_1_t6BEBFE77F805B78C9D3C9EE8B4C4E6A27B1AE641 * ___m_SavedGames_2;

public:
	inline static int32_t get_offset_of_m_SavedGames_2() { return static_cast<int32_t>(offsetof(ISN_GKSavedGameFetchResult_t429317C838E84AD0264669DC43F5C4C5D23EE715, ___m_SavedGames_2)); }
	inline List_1_t6BEBFE77F805B78C9D3C9EE8B4C4E6A27B1AE641 * get_m_SavedGames_2() const { return ___m_SavedGames_2; }
	inline List_1_t6BEBFE77F805B78C9D3C9EE8B4C4E6A27B1AE641 ** get_address_of_m_SavedGames_2() { return &___m_SavedGames_2; }
	inline void set_m_SavedGames_2(List_1_t6BEBFE77F805B78C9D3C9EE8B4C4E6A27B1AE641 * value)
	{
		___m_SavedGames_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SavedGames_2), (void*)value);
	}
};


// SA.iOS.GameKit.ISN_GKSavedGameLoadResult
struct  ISN_GKSavedGameLoadResult_t01255EF9BF3D93463A616431A95EEF5BEC728C52  : public SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE
{
public:
	// System.String SA.iOS.GameKit.ISN_GKSavedGameLoadResult::m_Data
	String_t* ___m_Data_2;

public:
	inline static int32_t get_offset_of_m_Data_2() { return static_cast<int32_t>(offsetof(ISN_GKSavedGameLoadResult_t01255EF9BF3D93463A616431A95EEF5BEC728C52, ___m_Data_2)); }
	inline String_t* get_m_Data_2() const { return ___m_Data_2; }
	inline String_t** get_address_of_m_Data_2() { return &___m_Data_2; }
	inline void set_m_Data_2(String_t* value)
	{
		___m_Data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Data_2), (void*)value);
	}
};


// SA.iOS.GameKit.ISN_GKSavedGameSaveResult
struct  ISN_GKSavedGameSaveResult_t79F7828795EB6CA14EE02D198BF136038F40F319  : public SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE
{
public:
	// SA.iOS.GameKit.ISN_GKSavedGame SA.iOS.GameKit.ISN_GKSavedGameSaveResult::m_SavedGame
	ISN_GKSavedGame_t52515D9C97E72ACC06287D9E422E4D661BF038A2 * ___m_SavedGame_2;

public:
	inline static int32_t get_offset_of_m_SavedGame_2() { return static_cast<int32_t>(offsetof(ISN_GKSavedGameSaveResult_t79F7828795EB6CA14EE02D198BF136038F40F319, ___m_SavedGame_2)); }
	inline ISN_GKSavedGame_t52515D9C97E72ACC06287D9E422E4D661BF038A2 * get_m_SavedGame_2() const { return ___m_SavedGame_2; }
	inline ISN_GKSavedGame_t52515D9C97E72ACC06287D9E422E4D661BF038A2 ** get_address_of_m_SavedGame_2() { return &___m_SavedGame_2; }
	inline void set_m_SavedGame_2(ISN_GKSavedGame_t52515D9C97E72ACC06287D9E422E4D661BF038A2 * value)
	{
		___m_SavedGame_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SavedGame_2), (void*)value);
	}
};


// SA.iOS.GameKit.ISN_GKScoreLoadResult
struct  ISN_GKScoreLoadResult_t57A8A5AEDF4143C5599DB1B6314E795F42AC5B13  : public SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE
{
public:
	// System.Collections.Generic.List`1<SA.iOS.GameKit.ISN_GKScore> SA.iOS.GameKit.ISN_GKScoreLoadResult::m_Scores
	List_1_t08BB076155DD422337809CD51D7A12C5C78F05BC * ___m_Scores_2;
	// SA.iOS.GameKit.ISN_GKLeaderboard SA.iOS.GameKit.ISN_GKScoreLoadResult::m_Leaderboard
	ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 * ___m_Leaderboard_3;

public:
	inline static int32_t get_offset_of_m_Scores_2() { return static_cast<int32_t>(offsetof(ISN_GKScoreLoadResult_t57A8A5AEDF4143C5599DB1B6314E795F42AC5B13, ___m_Scores_2)); }
	inline List_1_t08BB076155DD422337809CD51D7A12C5C78F05BC * get_m_Scores_2() const { return ___m_Scores_2; }
	inline List_1_t08BB076155DD422337809CD51D7A12C5C78F05BC ** get_address_of_m_Scores_2() { return &___m_Scores_2; }
	inline void set_m_Scores_2(List_1_t08BB076155DD422337809CD51D7A12C5C78F05BC * value)
	{
		___m_Scores_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scores_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Leaderboard_3() { return static_cast<int32_t>(offsetof(ISN_GKScoreLoadResult_t57A8A5AEDF4143C5599DB1B6314E795F42AC5B13, ___m_Leaderboard_3)); }
	inline ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 * get_m_Leaderboard_3() const { return ___m_Leaderboard_3; }
	inline ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 ** get_address_of_m_Leaderboard_3() { return &___m_Leaderboard_3; }
	inline void set_m_Leaderboard_3(ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 * value)
	{
		___m_Leaderboard_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Leaderboard_3), (void*)value);
	}
};


// SA.iOS.MediaPlayer.ISN_MPMediaItemCollection
struct  ISN_MPMediaItemCollection_tA22A8D7C54B8FD586195739E8678EFD4AD921BFE  : public ISN_NativeObject_tCBEFEB9640F4BE02478CE5834ABB80EB299E044F
{
public:

public:
};


// SA.iOS.ReplayKit.ISN_PRPreviewResult
struct  ISN_PRPreviewResult_tD9D9A58600785C4A5CAA6B5C79648FEB9D6873DE  : public SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE
{
public:
	// System.Collections.Generic.List`1<System.String> SA.iOS.ReplayKit.ISN_PRPreviewResult::m_ActivityTypes
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___m_ActivityTypes_2;

public:
	inline static int32_t get_offset_of_m_ActivityTypes_2() { return static_cast<int32_t>(offsetof(ISN_PRPreviewResult_tD9D9A58600785C4A5CAA6B5C79648FEB9D6873DE, ___m_ActivityTypes_2)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_m_ActivityTypes_2() const { return ___m_ActivityTypes_2; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_m_ActivityTypes_2() { return &___m_ActivityTypes_2; }
	inline void set_m_ActivityTypes_2(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___m_ActivityTypes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActivityTypes_2), (void*)value);
	}
};


// SA.iOS.ReplayKit.ISN_RPStopResult
struct  ISN_RPStopResult_t309EF21FB3F3CCDA08FE47353642069F0314E362  : public SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE
{
public:
	// System.Boolean SA.iOS.ReplayKit.ISN_RPStopResult::m_HasPreviewController
	bool ___m_HasPreviewController_2;
	// SA.iOS.ReplayKit.ISN_RPPreviewViewController SA.iOS.ReplayKit.ISN_RPStopResult::PreviewController
	ISN_RPPreviewViewController_t5B55610C1A19F52C2941408B1A5DD353A77DFF7E * ___PreviewController_3;

public:
	inline static int32_t get_offset_of_m_HasPreviewController_2() { return static_cast<int32_t>(offsetof(ISN_RPStopResult_t309EF21FB3F3CCDA08FE47353642069F0314E362, ___m_HasPreviewController_2)); }
	inline bool get_m_HasPreviewController_2() const { return ___m_HasPreviewController_2; }
	inline bool* get_address_of_m_HasPreviewController_2() { return &___m_HasPreviewController_2; }
	inline void set_m_HasPreviewController_2(bool value)
	{
		___m_HasPreviewController_2 = value;
	}

	inline static int32_t get_offset_of_PreviewController_3() { return static_cast<int32_t>(offsetof(ISN_RPStopResult_t309EF21FB3F3CCDA08FE47353642069F0314E362, ___PreviewController_3)); }
	inline ISN_RPPreviewViewController_t5B55610C1A19F52C2941408B1A5DD353A77DFF7E * get_PreviewController_3() const { return ___PreviewController_3; }
	inline ISN_RPPreviewViewController_t5B55610C1A19F52C2941408B1A5DD353A77DFF7E ** get_address_of_PreviewController_3() { return &___PreviewController_3; }
	inline void set_PreviewController_3(ISN_RPPreviewViewController_t5B55610C1A19F52C2941408B1A5DD353A77DFF7E * value)
	{
		___PreviewController_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PreviewController_3), (void*)value);
	}
};


// SA.iOS.StoreKit.ISN_SKInitResult
struct  ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731  : public SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE
{
public:
	// System.Collections.Generic.List`1<SA.iOS.StoreKit.ISN_SKProduct> SA.iOS.StoreKit.ISN_SKInitResult::m_Products
	List_1_t2D723F9BB968A2CB16CAEB637951A33404D5E48C * ___m_Products_2;
	// System.Collections.Generic.List`1<System.String> SA.iOS.StoreKit.ISN_SKInitResult::m_InvalidProductIdentifiers
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___m_InvalidProductIdentifiers_3;

public:
	inline static int32_t get_offset_of_m_Products_2() { return static_cast<int32_t>(offsetof(ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731, ___m_Products_2)); }
	inline List_1_t2D723F9BB968A2CB16CAEB637951A33404D5E48C * get_m_Products_2() const { return ___m_Products_2; }
	inline List_1_t2D723F9BB968A2CB16CAEB637951A33404D5E48C ** get_address_of_m_Products_2() { return &___m_Products_2; }
	inline void set_m_Products_2(List_1_t2D723F9BB968A2CB16CAEB637951A33404D5E48C * value)
	{
		___m_Products_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Products_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_InvalidProductIdentifiers_3() { return static_cast<int32_t>(offsetof(ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731, ___m_InvalidProductIdentifiers_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_m_InvalidProductIdentifiers_3() const { return ___m_InvalidProductIdentifiers_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_m_InvalidProductIdentifiers_3() { return &___m_InvalidProductIdentifiers_3; }
	inline void set_m_InvalidProductIdentifiers_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___m_InvalidProductIdentifiers_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvalidProductIdentifiers_3), (void*)value);
	}
};


// SA.iOS.UIKit.ISN_UIPickerControllerResult
struct  ISN_UIPickerControllerResult_tCA7C312FBEFBE946A75BD9E9FBBDEB77F88679CC  : public SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE
{
public:
	// System.String SA.iOS.UIKit.ISN_UIPickerControllerResult::m_EncodedImage
	String_t* ___m_EncodedImage_2;
	// System.String SA.iOS.UIKit.ISN_UIPickerControllerResult::m_MediaUrl
	String_t* ___m_MediaUrl_3;
	// System.String SA.iOS.UIKit.ISN_UIPickerControllerResult::m_ImageUrl
	String_t* ___m_ImageUrl_4;
	// System.String SA.iOS.UIKit.ISN_UIPickerControllerResult::m_MediaType
	String_t* ___m_MediaType_5;
	// UnityEngine.Texture2D SA.iOS.UIKit.ISN_UIPickerControllerResult::m_Texture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Texture_6;

public:
	inline static int32_t get_offset_of_m_EncodedImage_2() { return static_cast<int32_t>(offsetof(ISN_UIPickerControllerResult_tCA7C312FBEFBE946A75BD9E9FBBDEB77F88679CC, ___m_EncodedImage_2)); }
	inline String_t* get_m_EncodedImage_2() const { return ___m_EncodedImage_2; }
	inline String_t** get_address_of_m_EncodedImage_2() { return &___m_EncodedImage_2; }
	inline void set_m_EncodedImage_2(String_t* value)
	{
		___m_EncodedImage_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EncodedImage_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_MediaUrl_3() { return static_cast<int32_t>(offsetof(ISN_UIPickerControllerResult_tCA7C312FBEFBE946A75BD9E9FBBDEB77F88679CC, ___m_MediaUrl_3)); }
	inline String_t* get_m_MediaUrl_3() const { return ___m_MediaUrl_3; }
	inline String_t** get_address_of_m_MediaUrl_3() { return &___m_MediaUrl_3; }
	inline void set_m_MediaUrl_3(String_t* value)
	{
		___m_MediaUrl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MediaUrl_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ImageUrl_4() { return static_cast<int32_t>(offsetof(ISN_UIPickerControllerResult_tCA7C312FBEFBE946A75BD9E9FBBDEB77F88679CC, ___m_ImageUrl_4)); }
	inline String_t* get_m_ImageUrl_4() const { return ___m_ImageUrl_4; }
	inline String_t** get_address_of_m_ImageUrl_4() { return &___m_ImageUrl_4; }
	inline void set_m_ImageUrl_4(String_t* value)
	{
		___m_ImageUrl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ImageUrl_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_MediaType_5() { return static_cast<int32_t>(offsetof(ISN_UIPickerControllerResult_tCA7C312FBEFBE946A75BD9E9FBBDEB77F88679CC, ___m_MediaType_5)); }
	inline String_t* get_m_MediaType_5() const { return ___m_MediaType_5; }
	inline String_t** get_address_of_m_MediaType_5() { return &___m_MediaType_5; }
	inline void set_m_MediaType_5(String_t* value)
	{
		___m_MediaType_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MediaType_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Texture_6() { return static_cast<int32_t>(offsetof(ISN_UIPickerControllerResult_tCA7C312FBEFBE946A75BD9E9FBBDEB77F88679CC, ___m_Texture_6)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_Texture_6() const { return ___m_Texture_6; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_Texture_6() { return &___m_Texture_6; }
	inline void set_m_Texture_6(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_Texture_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_6), (void*)value);
	}
};


// SA.iOS.UIKit.ISN_UIViewController
struct  ISN_UIViewController_t4A6922C39BCAB4675D7AEDA62993C10D8853AFFE  : public ISN_NativeObject_tCBEFEB9640F4BE02478CE5834ABB80EB299E044F
{
public:

public:
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// SA.Foundation.Templates.SA_DataResult
struct  SA_DataResult_tF0A5319D09E80AE65AF389F07D60BD8DB8353144  : public SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE
{
public:
	// System.String SA.Foundation.Templates.SA_DataResult::m_Data
	String_t* ___m_Data_2;

public:
	inline static int32_t get_offset_of_m_Data_2() { return static_cast<int32_t>(offsetof(SA_DataResult_tF0A5319D09E80AE65AF389F07D60BD8DB8353144, ___m_Data_2)); }
	inline String_t* get_m_Data_2() const { return ___m_Data_2; }
	inline String_t** get_address_of_m_Data_2() { return &___m_Data_2; }
	inline void set_m_Data_2(String_t* value)
	{
		___m_Data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Data_2), (void*)value);
	}
};


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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

// SA.iOS.AuthenticationServices.ISN_ASAuthorizationScope
struct  ISN_ASAuthorizationScope_t9D27F8F9DD2FA4CEAE6D9374BCA53FFF50B5D27B 
{
public:
	// System.Int32 SA.iOS.AuthenticationServices.ISN_ASAuthorizationScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ISN_ASAuthorizationScope_t9D27F8F9DD2FA4CEAE6D9374BCA53FFF50B5D27B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SA.iOS.AVFoundation.ISN_AVAuthorizationStatus
struct  ISN_AVAuthorizationStatus_t8ACBCFFF37D014E1997F1843F7C90DD98CB4D707 
{
public:
	// System.Int32 SA.iOS.AVFoundation.ISN_AVAuthorizationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ISN_AVAuthorizationStatus_t8ACBCFFF37D014E1997F1843F7C90DD98CB4D707, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SA.iOS.GameKit.ISN_GKLeaderboardPlayerScope
struct  ISN_GKLeaderboardPlayerScope_t2832FD844937A02A47900B779FCA2A4BEED0C2B3 
{
public:
	// System.Int32 SA.iOS.GameKit.ISN_GKLeaderboardPlayerScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ISN_GKLeaderboardPlayerScope_t2832FD844937A02A47900B779FCA2A4BEED0C2B3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SA.iOS.GameKit.ISN_GKLeaderboardTimeScope
struct  ISN_GKLeaderboardTimeScope_tB0AF5DB81B281C075E6977FFC8662A7BBC124423 
{
public:
	// System.Int32 SA.iOS.GameKit.ISN_GKLeaderboardTimeScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ISN_GKLeaderboardTimeScope_tB0AF5DB81B281C075E6977FFC8662A7BBC124423, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SA.iOS.GameKit.ISN_GKLoadDefaultLeaderboardResult
struct  ISN_GKLoadDefaultLeaderboardResult_tE64A92BC175FD8A53E25F74D66B51190DC95C193  : public SA_DataResult_tF0A5319D09E80AE65AF389F07D60BD8DB8353144
{
public:

public:
};


// SA.iOS.GameKit.ISN_GKLocalPlayer
struct  ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625  : public ISN_GKPlayer_tC728E93D11A3D9166E012CB46705607F186DD46F
{
public:

public:
};

struct ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_StaticFields
{
public:
	// System.Action`1<SA.Foundation.Templates.SA_Result> SA.iOS.GameKit.ISN_GKLocalPlayer::OnAuthenticateLocalPlayerComplete
	Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * ___OnAuthenticateLocalPlayerComplete_2;
	// System.Action`1<SA.Foundation.Templates.SA_Result> SA.iOS.GameKit.ISN_GKLocalPlayer::OnDeleteSavedGameComplete
	Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * ___OnDeleteSavedGameComplete_3;
	// System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameFetchResult> SA.iOS.GameKit.ISN_GKLocalPlayer::OnFetchSavedGamesComplete
	Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * ___OnFetchSavedGamesComplete_4;
	// System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameSaveResult> SA.iOS.GameKit.ISN_GKLocalPlayer::OnSavedGameComplete
	Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 * ___OnSavedGameComplete_5;
	// System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameLoadResult> SA.iOS.GameKit.ISN_GKLocalPlayer::OnLoadGameDataComplete
	Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 * ___OnLoadGameDataComplete_6;
	// System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameFetchResult> SA.iOS.GameKit.ISN_GKLocalPlayer::OnResolveSavedGamesComplete
	Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * ___OnResolveSavedGamesComplete_7;
	// SA.iOS.GameKit.ISN_GKResolveSavedGamesRequest SA.iOS.GameKit.ISN_GKLocalPlayer::s_Request
	ISN_GKResolveSavedGamesRequest_t63F2971A42475A746601E490454A56E7EB9631AF * ___s_Request_8;
	// System.Boolean SA.iOS.GameKit.ISN_GKLocalPlayer::s_IsFetchSavedGamesInProgress
	bool ___s_IsFetchSavedGamesInProgress_9;
	// SA.iOS.GameKit.ISN_GKLocalPlayer SA.iOS.GameKit.ISN_GKLocalPlayer::s_LocalPlayer
	ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625 * ___s_LocalPlayer_10;

public:
	inline static int32_t get_offset_of_OnAuthenticateLocalPlayerComplete_2() { return static_cast<int32_t>(offsetof(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_StaticFields, ___OnAuthenticateLocalPlayerComplete_2)); }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * get_OnAuthenticateLocalPlayerComplete_2() const { return ___OnAuthenticateLocalPlayerComplete_2; }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 ** get_address_of_OnAuthenticateLocalPlayerComplete_2() { return &___OnAuthenticateLocalPlayerComplete_2; }
	inline void set_OnAuthenticateLocalPlayerComplete_2(Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * value)
	{
		___OnAuthenticateLocalPlayerComplete_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAuthenticateLocalPlayerComplete_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnDeleteSavedGameComplete_3() { return static_cast<int32_t>(offsetof(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_StaticFields, ___OnDeleteSavedGameComplete_3)); }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * get_OnDeleteSavedGameComplete_3() const { return ___OnDeleteSavedGameComplete_3; }
	inline Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 ** get_address_of_OnDeleteSavedGameComplete_3() { return &___OnDeleteSavedGameComplete_3; }
	inline void set_OnDeleteSavedGameComplete_3(Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * value)
	{
		___OnDeleteSavedGameComplete_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDeleteSavedGameComplete_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnFetchSavedGamesComplete_4() { return static_cast<int32_t>(offsetof(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_StaticFields, ___OnFetchSavedGamesComplete_4)); }
	inline Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * get_OnFetchSavedGamesComplete_4() const { return ___OnFetchSavedGamesComplete_4; }
	inline Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 ** get_address_of_OnFetchSavedGamesComplete_4() { return &___OnFetchSavedGamesComplete_4; }
	inline void set_OnFetchSavedGamesComplete_4(Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * value)
	{
		___OnFetchSavedGamesComplete_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFetchSavedGamesComplete_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnSavedGameComplete_5() { return static_cast<int32_t>(offsetof(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_StaticFields, ___OnSavedGameComplete_5)); }
	inline Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 * get_OnSavedGameComplete_5() const { return ___OnSavedGameComplete_5; }
	inline Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 ** get_address_of_OnSavedGameComplete_5() { return &___OnSavedGameComplete_5; }
	inline void set_OnSavedGameComplete_5(Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 * value)
	{
		___OnSavedGameComplete_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSavedGameComplete_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnLoadGameDataComplete_6() { return static_cast<int32_t>(offsetof(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_StaticFields, ___OnLoadGameDataComplete_6)); }
	inline Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 * get_OnLoadGameDataComplete_6() const { return ___OnLoadGameDataComplete_6; }
	inline Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 ** get_address_of_OnLoadGameDataComplete_6() { return &___OnLoadGameDataComplete_6; }
	inline void set_OnLoadGameDataComplete_6(Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 * value)
	{
		___OnLoadGameDataComplete_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLoadGameDataComplete_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnResolveSavedGamesComplete_7() { return static_cast<int32_t>(offsetof(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_StaticFields, ___OnResolveSavedGamesComplete_7)); }
	inline Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * get_OnResolveSavedGamesComplete_7() const { return ___OnResolveSavedGamesComplete_7; }
	inline Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 ** get_address_of_OnResolveSavedGamesComplete_7() { return &___OnResolveSavedGamesComplete_7; }
	inline void set_OnResolveSavedGamesComplete_7(Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * value)
	{
		___OnResolveSavedGamesComplete_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnResolveSavedGamesComplete_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Request_8() { return static_cast<int32_t>(offsetof(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_StaticFields, ___s_Request_8)); }
	inline ISN_GKResolveSavedGamesRequest_t63F2971A42475A746601E490454A56E7EB9631AF * get_s_Request_8() const { return ___s_Request_8; }
	inline ISN_GKResolveSavedGamesRequest_t63F2971A42475A746601E490454A56E7EB9631AF ** get_address_of_s_Request_8() { return &___s_Request_8; }
	inline void set_s_Request_8(ISN_GKResolveSavedGamesRequest_t63F2971A42475A746601E490454A56E7EB9631AF * value)
	{
		___s_Request_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Request_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsFetchSavedGamesInProgress_9() { return static_cast<int32_t>(offsetof(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_StaticFields, ___s_IsFetchSavedGamesInProgress_9)); }
	inline bool get_s_IsFetchSavedGamesInProgress_9() const { return ___s_IsFetchSavedGamesInProgress_9; }
	inline bool* get_address_of_s_IsFetchSavedGamesInProgress_9() { return &___s_IsFetchSavedGamesInProgress_9; }
	inline void set_s_IsFetchSavedGamesInProgress_9(bool value)
	{
		___s_IsFetchSavedGamesInProgress_9 = value;
	}

	inline static int32_t get_offset_of_s_LocalPlayer_10() { return static_cast<int32_t>(offsetof(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_StaticFields, ___s_LocalPlayer_10)); }
	inline ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625 * get_s_LocalPlayer_10() const { return ___s_LocalPlayer_10; }
	inline ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625 ** get_address_of_s_LocalPlayer_10() { return &___s_LocalPlayer_10; }
	inline void set_s_LocalPlayer_10(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625 * value)
	{
		___s_LocalPlayer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalPlayer_10), (void*)value);
	}
};


// SA.iOS.MediaPlayer.ISN_MPMediaPickerController
struct  ISN_MPMediaPickerController_tE46DF789FC1F7CE0D0D599680D85106DD8B3193B  : public ISN_UIViewController_t4A6922C39BCAB4675D7AEDA62993C10D8853AFFE
{
public:

public:
};


// SA.iOS.Social.ISN_MessageComposeResult
struct  ISN_MessageComposeResult_t760BD170DCCE454842AB0D75336C17A7A1741174 
{
public:
	// System.Int32 SA.iOS.Social.ISN_MessageComposeResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ISN_MessageComposeResult_t760BD170DCCE454842AB0D75336C17A7A1741174, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SA.iOS.StoreKit.ISN_SKPaymentTransactionState
struct  ISN_SKPaymentTransactionState_tAF78EEB32B82012F54A1A033B074E54C8D38722D 
{
public:
	// System.Int32 SA.iOS.StoreKit.ISN_SKPaymentTransactionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ISN_SKPaymentTransactionState_tAF78EEB32B82012F54A1A033B074E54C8D38722D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SA.iOS.UIKit.ISN_UIAlertControllerStyle
struct  ISN_UIAlertControllerStyle_t3B1DE3430B2F5E3DDFCE006160BB6B3B72CB075B 
{
public:
	// System.Int32 SA.iOS.UIKit.ISN_UIAlertControllerStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ISN_UIAlertControllerStyle_t3B1DE3430B2F5E3DDFCE006160BB6B3B72CB075B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// SA.iOS.Foundation.ISN_NSUrl/ISN_NSUrlType
struct  ISN_NSUrlType_tB26E8EC719C3DF640D8E177BC6FEABACC5A7DD4D 
{
public:
	// System.Int32 SA.iOS.Foundation.ISN_NSUrl/ISN_NSUrlType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ISN_NSUrlType_tB26E8EC719C3DF640D8E177BC6FEABACC5A7DD4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// SA.iOS.GameKit.ISN_GKLeaderboard
struct  ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1  : public RuntimeObject
{
public:
	// System.String SA.iOS.GameKit.ISN_GKLeaderboard::m_Identifier
	String_t* ___m_Identifier_0;
	// System.String SA.iOS.GameKit.ISN_GKLeaderboard::m_Title
	String_t* ___m_Title_1;
	// System.String SA.iOS.GameKit.ISN_GKLeaderboard::m_GroupIdentifier
	String_t* ___m_GroupIdentifier_2;
	// SA.iOS.GameKit.ISN_GKLeaderboardPlayerScope SA.iOS.GameKit.ISN_GKLeaderboard::m_PlayerScope
	int32_t ___m_PlayerScope_3;
	// SA.iOS.GameKit.ISN_GKLeaderboardTimeScope SA.iOS.GameKit.ISN_GKLeaderboard::m_TimeScope
	int32_t ___m_TimeScope_4;
	// SA.iOS.Foundation.ISN_NSRange SA.iOS.GameKit.ISN_GKLeaderboard::m_Range
	ISN_NSRange_t60353B7306C6294C931D84F824FD14F97A2F02FB * ___m_Range_5;
	// System.Int64 SA.iOS.GameKit.ISN_GKLeaderboard::m_MaxRange
	int64_t ___m_MaxRange_6;
	// System.Collections.Generic.List`1<SA.iOS.GameKit.ISN_GKScore> SA.iOS.GameKit.ISN_GKLeaderboard::m_Scores
	List_1_t08BB076155DD422337809CD51D7A12C5C78F05BC * ___m_Scores_7;
	// SA.iOS.GameKit.ISN_GKScore SA.iOS.GameKit.ISN_GKLeaderboard::m_LocalPlayerScore
	ISN_GKScore_t61C79EFDE5BD5A770466331E28E6C7D520F08139 * ___m_LocalPlayerScore_8;
	// System.Boolean SA.iOS.GameKit.ISN_GKLeaderboard::m_Loading
	bool ___m_Loading_9;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1, ___m_Identifier_0)); }
	inline String_t* get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline String_t** get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(String_t* value)
	{
		___m_Identifier_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Identifier_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Title_1() { return static_cast<int32_t>(offsetof(ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1, ___m_Title_1)); }
	inline String_t* get_m_Title_1() const { return ___m_Title_1; }
	inline String_t** get_address_of_m_Title_1() { return &___m_Title_1; }
	inline void set_m_Title_1(String_t* value)
	{
		___m_Title_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Title_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupIdentifier_2() { return static_cast<int32_t>(offsetof(ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1, ___m_GroupIdentifier_2)); }
	inline String_t* get_m_GroupIdentifier_2() const { return ___m_GroupIdentifier_2; }
	inline String_t** get_address_of_m_GroupIdentifier_2() { return &___m_GroupIdentifier_2; }
	inline void set_m_GroupIdentifier_2(String_t* value)
	{
		___m_GroupIdentifier_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GroupIdentifier_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PlayerScope_3() { return static_cast<int32_t>(offsetof(ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1, ___m_PlayerScope_3)); }
	inline int32_t get_m_PlayerScope_3() const { return ___m_PlayerScope_3; }
	inline int32_t* get_address_of_m_PlayerScope_3() { return &___m_PlayerScope_3; }
	inline void set_m_PlayerScope_3(int32_t value)
	{
		___m_PlayerScope_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeScope_4() { return static_cast<int32_t>(offsetof(ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1, ___m_TimeScope_4)); }
	inline int32_t get_m_TimeScope_4() const { return ___m_TimeScope_4; }
	inline int32_t* get_address_of_m_TimeScope_4() { return &___m_TimeScope_4; }
	inline void set_m_TimeScope_4(int32_t value)
	{
		___m_TimeScope_4 = value;
	}

	inline static int32_t get_offset_of_m_Range_5() { return static_cast<int32_t>(offsetof(ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1, ___m_Range_5)); }
	inline ISN_NSRange_t60353B7306C6294C931D84F824FD14F97A2F02FB * get_m_Range_5() const { return ___m_Range_5; }
	inline ISN_NSRange_t60353B7306C6294C931D84F824FD14F97A2F02FB ** get_address_of_m_Range_5() { return &___m_Range_5; }
	inline void set_m_Range_5(ISN_NSRange_t60353B7306C6294C931D84F824FD14F97A2F02FB * value)
	{
		___m_Range_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Range_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_MaxRange_6() { return static_cast<int32_t>(offsetof(ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1, ___m_MaxRange_6)); }
	inline int64_t get_m_MaxRange_6() const { return ___m_MaxRange_6; }
	inline int64_t* get_address_of_m_MaxRange_6() { return &___m_MaxRange_6; }
	inline void set_m_MaxRange_6(int64_t value)
	{
		___m_MaxRange_6 = value;
	}

	inline static int32_t get_offset_of_m_Scores_7() { return static_cast<int32_t>(offsetof(ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1, ___m_Scores_7)); }
	inline List_1_t08BB076155DD422337809CD51D7A12C5C78F05BC * get_m_Scores_7() const { return ___m_Scores_7; }
	inline List_1_t08BB076155DD422337809CD51D7A12C5C78F05BC ** get_address_of_m_Scores_7() { return &___m_Scores_7; }
	inline void set_m_Scores_7(List_1_t08BB076155DD422337809CD51D7A12C5C78F05BC * value)
	{
		___m_Scores_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scores_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LocalPlayerScore_8() { return static_cast<int32_t>(offsetof(ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1, ___m_LocalPlayerScore_8)); }
	inline ISN_GKScore_t61C79EFDE5BD5A770466331E28E6C7D520F08139 * get_m_LocalPlayerScore_8() const { return ___m_LocalPlayerScore_8; }
	inline ISN_GKScore_t61C79EFDE5BD5A770466331E28E6C7D520F08139 ** get_address_of_m_LocalPlayerScore_8() { return &___m_LocalPlayerScore_8; }
	inline void set_m_LocalPlayerScore_8(ISN_GKScore_t61C79EFDE5BD5A770466331E28E6C7D520F08139 * value)
	{
		___m_LocalPlayerScore_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocalPlayerScore_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Loading_9() { return static_cast<int32_t>(offsetof(ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1, ___m_Loading_9)); }
	inline bool get_m_Loading_9() const { return ___m_Loading_9; }
	inline bool* get_address_of_m_Loading_9() { return &___m_Loading_9; }
	inline void set_m_Loading_9(bool value)
	{
		___m_Loading_9 = value;
	}
};


// SA.iOS.StoreKit.ISN_SKPaymentTransaction
struct  ISN_SKPaymentTransaction_tF41BFFFB76CBCFDADBB1E5E752EA8ADB53EFF12C  : public SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE
{
public:
	// System.String SA.iOS.StoreKit.ISN_SKPaymentTransaction::m_ProductIdentifier
	String_t* ___m_ProductIdentifier_2;
	// System.String SA.iOS.StoreKit.ISN_SKPaymentTransaction::m_TransactionIdentifier
	String_t* ___m_TransactionIdentifier_3;
	// System.Int64 SA.iOS.StoreKit.ISN_SKPaymentTransaction::m_UnixDate
	int64_t ___m_UnixDate_4;
	// SA.iOS.StoreKit.ISN_SKPaymentTransactionState SA.iOS.StoreKit.ISN_SKPaymentTransaction::m_State
	int32_t ___m_State_5;
	// SA.iOS.StoreKit.ISN_SKPaymentOriginalTransaction SA.iOS.StoreKit.ISN_SKPaymentTransaction::m_OriginalTransaction
	ISN_SKPaymentOriginalTransaction_tF9300731FDFEBE9DEB1FA78AC85D7026122E0C76 * ___m_OriginalTransaction_6;

public:
	inline static int32_t get_offset_of_m_ProductIdentifier_2() { return static_cast<int32_t>(offsetof(ISN_SKPaymentTransaction_tF41BFFFB76CBCFDADBB1E5E752EA8ADB53EFF12C, ___m_ProductIdentifier_2)); }
	inline String_t* get_m_ProductIdentifier_2() const { return ___m_ProductIdentifier_2; }
	inline String_t** get_address_of_m_ProductIdentifier_2() { return &___m_ProductIdentifier_2; }
	inline void set_m_ProductIdentifier_2(String_t* value)
	{
		___m_ProductIdentifier_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProductIdentifier_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_TransactionIdentifier_3() { return static_cast<int32_t>(offsetof(ISN_SKPaymentTransaction_tF41BFFFB76CBCFDADBB1E5E752EA8ADB53EFF12C, ___m_TransactionIdentifier_3)); }
	inline String_t* get_m_TransactionIdentifier_3() const { return ___m_TransactionIdentifier_3; }
	inline String_t** get_address_of_m_TransactionIdentifier_3() { return &___m_TransactionIdentifier_3; }
	inline void set_m_TransactionIdentifier_3(String_t* value)
	{
		___m_TransactionIdentifier_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TransactionIdentifier_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_UnixDate_4() { return static_cast<int32_t>(offsetof(ISN_SKPaymentTransaction_tF41BFFFB76CBCFDADBB1E5E752EA8ADB53EFF12C, ___m_UnixDate_4)); }
	inline int64_t get_m_UnixDate_4() const { return ___m_UnixDate_4; }
	inline int64_t* get_address_of_m_UnixDate_4() { return &___m_UnixDate_4; }
	inline void set_m_UnixDate_4(int64_t value)
	{
		___m_UnixDate_4 = value;
	}

	inline static int32_t get_offset_of_m_State_5() { return static_cast<int32_t>(offsetof(ISN_SKPaymentTransaction_tF41BFFFB76CBCFDADBB1E5E752EA8ADB53EFF12C, ___m_State_5)); }
	inline int32_t get_m_State_5() const { return ___m_State_5; }
	inline int32_t* get_address_of_m_State_5() { return &___m_State_5; }
	inline void set_m_State_5(int32_t value)
	{
		___m_State_5 = value;
	}

	inline static int32_t get_offset_of_m_OriginalTransaction_6() { return static_cast<int32_t>(offsetof(ISN_SKPaymentTransaction_tF41BFFFB76CBCFDADBB1E5E752EA8ADB53EFF12C, ___m_OriginalTransaction_6)); }
	inline ISN_SKPaymentOriginalTransaction_tF9300731FDFEBE9DEB1FA78AC85D7026122E0C76 * get_m_OriginalTransaction_6() const { return ___m_OriginalTransaction_6; }
	inline ISN_SKPaymentOriginalTransaction_tF9300731FDFEBE9DEB1FA78AC85D7026122E0C76 ** get_address_of_m_OriginalTransaction_6() { return &___m_OriginalTransaction_6; }
	inline void set_m_OriginalTransaction_6(ISN_SKPaymentOriginalTransaction_tF9300731FDFEBE9DEB1FA78AC85D7026122E0C76 * value)
	{
		___m_OriginalTransaction_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalTransaction_6), (void*)value);
	}
};


// SA.iOS.UIKit.ISN_UIAlertController
struct  ISN_UIAlertController_t7E492DF004875CDD24E30821D1BE5CF460BE5B0F  : public RuntimeObject
{
public:
	// System.Int32 SA.iOS.UIKit.ISN_UIAlertController::m_Id
	int32_t ___m_Id_0;
	// System.String SA.iOS.UIKit.ISN_UIAlertController::m_Title
	String_t* ___m_Title_1;
	// System.String SA.iOS.UIKit.ISN_UIAlertController::m_Message
	String_t* ___m_Message_2;
	// SA.iOS.UIKit.ISN_UIAlertControllerStyle SA.iOS.UIKit.ISN_UIAlertController::m_PreferredStyle
	int32_t ___m_PreferredStyle_3;
	// System.Collections.Generic.List`1<SA.iOS.UIKit.ISN_UIAlertAction> SA.iOS.UIKit.ISN_UIAlertController::m_Actions
	List_1_t26E5867239E0CEE830EF38FA7A3C1898B9061037 * ___m_Actions_4;
	// SA.iOS.UIKit.ISN_UIAlertAction SA.iOS.UIKit.ISN_UIAlertController::m_PreferredAction
	ISN_UIAlertAction_t25272F021C3D4DEC1E8257EB31BBDC9855A1EB81 * ___m_PreferredAction_5;
	// SA.Foundation.Events.SA_Event SA.iOS.UIKit.ISN_UIAlertController::m_DialogDismissed
	SA_Event_t3F394B9F2E2D192A7D1476DB378EC8B1A6ABB3C0 * ___m_DialogDismissed_6;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(ISN_UIAlertController_t7E492DF004875CDD24E30821D1BE5CF460BE5B0F, ___m_Id_0)); }
	inline int32_t get_m_Id_0() const { return ___m_Id_0; }
	inline int32_t* get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(int32_t value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_Title_1() { return static_cast<int32_t>(offsetof(ISN_UIAlertController_t7E492DF004875CDD24E30821D1BE5CF460BE5B0F, ___m_Title_1)); }
	inline String_t* get_m_Title_1() const { return ___m_Title_1; }
	inline String_t** get_address_of_m_Title_1() { return &___m_Title_1; }
	inline void set_m_Title_1(String_t* value)
	{
		___m_Title_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Title_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Message_2() { return static_cast<int32_t>(offsetof(ISN_UIAlertController_t7E492DF004875CDD24E30821D1BE5CF460BE5B0F, ___m_Message_2)); }
	inline String_t* get_m_Message_2() const { return ___m_Message_2; }
	inline String_t** get_address_of_m_Message_2() { return &___m_Message_2; }
	inline void set_m_Message_2(String_t* value)
	{
		___m_Message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Message_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreferredStyle_3() { return static_cast<int32_t>(offsetof(ISN_UIAlertController_t7E492DF004875CDD24E30821D1BE5CF460BE5B0F, ___m_PreferredStyle_3)); }
	inline int32_t get_m_PreferredStyle_3() const { return ___m_PreferredStyle_3; }
	inline int32_t* get_address_of_m_PreferredStyle_3() { return &___m_PreferredStyle_3; }
	inline void set_m_PreferredStyle_3(int32_t value)
	{
		___m_PreferredStyle_3 = value;
	}

	inline static int32_t get_offset_of_m_Actions_4() { return static_cast<int32_t>(offsetof(ISN_UIAlertController_t7E492DF004875CDD24E30821D1BE5CF460BE5B0F, ___m_Actions_4)); }
	inline List_1_t26E5867239E0CEE830EF38FA7A3C1898B9061037 * get_m_Actions_4() const { return ___m_Actions_4; }
	inline List_1_t26E5867239E0CEE830EF38FA7A3C1898B9061037 ** get_address_of_m_Actions_4() { return &___m_Actions_4; }
	inline void set_m_Actions_4(List_1_t26E5867239E0CEE830EF38FA7A3C1898B9061037 * value)
	{
		___m_Actions_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Actions_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreferredAction_5() { return static_cast<int32_t>(offsetof(ISN_UIAlertController_t7E492DF004875CDD24E30821D1BE5CF460BE5B0F, ___m_PreferredAction_5)); }
	inline ISN_UIAlertAction_t25272F021C3D4DEC1E8257EB31BBDC9855A1EB81 * get_m_PreferredAction_5() const { return ___m_PreferredAction_5; }
	inline ISN_UIAlertAction_t25272F021C3D4DEC1E8257EB31BBDC9855A1EB81 ** get_address_of_m_PreferredAction_5() { return &___m_PreferredAction_5; }
	inline void set_m_PreferredAction_5(ISN_UIAlertAction_t25272F021C3D4DEC1E8257EB31BBDC9855A1EB81 * value)
	{
		___m_PreferredAction_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PreferredAction_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_DialogDismissed_6() { return static_cast<int32_t>(offsetof(ISN_UIAlertController_t7E492DF004875CDD24E30821D1BE5CF460BE5B0F, ___m_DialogDismissed_6)); }
	inline SA_Event_t3F394B9F2E2D192A7D1476DB378EC8B1A6ABB3C0 * get_m_DialogDismissed_6() const { return ___m_DialogDismissed_6; }
	inline SA_Event_t3F394B9F2E2D192A7D1476DB378EC8B1A6ABB3C0 ** get_address_of_m_DialogDismissed_6() { return &___m_DialogDismissed_6; }
	inline void set_m_DialogDismissed_6(SA_Event_t3F394B9F2E2D192A7D1476DB378EC8B1A6ABB3C0 * value)
	{
		___m_DialogDismissed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DialogDismissed_6), (void*)value);
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


// System.Action`1<System.DateTime>
struct  Action_1_t2B33C6C2E077C8AA0861FADB5453D90C6F9A7B97  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<SA.iOS.Contacts.ISN_CNContactsResult>
struct  Action_1_t93AFA1AE027C78386A3DAF5B255C378893B62690  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<SA.iOS.GameKit.ISN_GKLoadDefaultLeaderboardResult>
struct  Action_1_t297BE403C517D6F098CCAD063217CC4522C4C280  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameFetchResult>
struct  Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameLoadResult>
struct  Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameSaveResult>
struct  Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<SA.iOS.GameKit.ISN_GKScoreLoadResult>
struct  Action_1_tF3DE25E536BCA9529D0526BD696C217D9BDE1941  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<SA.iOS.Social.ISN_MessageComposeResult>
struct  Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<SA.iOS.StoreKit.ISN_SKInitResult>
struct  Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<SA.iOS.UIKit.ISN_UIPickerControllerResult>
struct  Action_1_t33C7AA5928E86B6367AFDBF1055EB7751D2D699C  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<SA.Foundation.Templates.SA_Result>
struct  Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
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


// SA.Foundation.Patterns.SA_ScriptableSettings
struct  SA_ScriptableSettings_t713FB6ED1BCD9406BD9C6B0417FF99470A1FAA06  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String SA.Foundation.Patterns.SA_ScriptableSettings::LastVersionCode
	String_t* ___LastVersionCode_5;
	// SA.Foundation.Config.PluginVersionHandler SA.Foundation.Patterns.SA_ScriptableSettings::s_pluginVersion
	PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * ___s_pluginVersion_6;

public:
	inline static int32_t get_offset_of_LastVersionCode_5() { return static_cast<int32_t>(offsetof(SA_ScriptableSettings_t713FB6ED1BCD9406BD9C6B0417FF99470A1FAA06, ___LastVersionCode_5)); }
	inline String_t* get_LastVersionCode_5() const { return ___LastVersionCode_5; }
	inline String_t** get_address_of_LastVersionCode_5() { return &___LastVersionCode_5; }
	inline void set_LastVersionCode_5(String_t* value)
	{
		___LastVersionCode_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LastVersionCode_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_pluginVersion_6() { return static_cast<int32_t>(offsetof(SA_ScriptableSettings_t713FB6ED1BCD9406BD9C6B0417FF99470A1FAA06, ___s_pluginVersion_6)); }
	inline PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * get_s_pluginVersion_6() const { return ___s_pluginVersion_6; }
	inline PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 ** get_address_of_s_pluginVersion_6() { return &___s_pluginVersion_6; }
	inline void set_s_pluginVersion_6(PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * value)
	{
		___s_pluginVersion_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_pluginVersion_6), (void*)value);
	}
};


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// SA.iOS.Utilities.ISN_MonoPCallback/MonoPCallbackDelegate
struct  MonoPCallbackDelegate_t684ECA24F90DA794192384D419435F2320168D8C  : public MulticastDelegate_t
{
public:

public:
};


// SA.Foundation.Patterns.SA_ScriptableSingleton`1<SA.iOS.ISN_Settings>
struct  SA_ScriptableSingleton_1_t08876A890E2E57E39DCC5D03C916A31673F3A8E0  : public SA_ScriptableSettings_t713FB6ED1BCD9406BD9C6B0417FF99470A1FAA06
{
public:

public:
};

struct SA_ScriptableSingleton_1_t08876A890E2E57E39DCC5D03C916A31673F3A8E0_StaticFields
{
public:
	// T SA.Foundation.Patterns.SA_ScriptableSingleton`1::s_instance
	ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3 * ___s_instance_7;

public:
	inline static int32_t get_offset_of_s_instance_7() { return static_cast<int32_t>(offsetof(SA_ScriptableSingleton_1_t08876A890E2E57E39DCC5D03C916A31673F3A8E0_StaticFields, ___s_instance_7)); }
	inline ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3 * get_s_instance_7() const { return ___s_instance_7; }
	inline ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3 ** get_address_of_s_instance_7() { return &___s_instance_7; }
	inline void set_s_instance_7(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3 * value)
	{
		___s_instance_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_instance_7), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// StansAssets.Foundation.Patterns.MonoSingleton`1<SA.iOS.Social.ISN_Facebook/NativeListener>
struct  MonoSingleton_1_t501B4FC5396E78880545ED9F22BDFEF000938BE1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct MonoSingleton_1_t501B4FC5396E78880545ED9F22BDFEF000938BE1_StaticFields
{
public:
	// T StansAssets.Foundation.Patterns.MonoSingleton`1::s_Instance
	NativeListener_t98737FF9BE7B87DF62EF58AE265C1B169902E682 * ___s_Instance_4;
	// System.Boolean StansAssets.Foundation.Patterns.MonoSingleton`1::s_ApplicationIsQuitting
	bool ___s_ApplicationIsQuitting_5;
	// System.Boolean StansAssets.Foundation.Patterns.MonoSingleton`1::s_IsDestroyed
	bool ___s_IsDestroyed_6;

public:
	inline static int32_t get_offset_of_s_Instance_4() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t501B4FC5396E78880545ED9F22BDFEF000938BE1_StaticFields, ___s_Instance_4)); }
	inline NativeListener_t98737FF9BE7B87DF62EF58AE265C1B169902E682 * get_s_Instance_4() const { return ___s_Instance_4; }
	inline NativeListener_t98737FF9BE7B87DF62EF58AE265C1B169902E682 ** get_address_of_s_Instance_4() { return &___s_Instance_4; }
	inline void set_s_Instance_4(NativeListener_t98737FF9BE7B87DF62EF58AE265C1B169902E682 * value)
	{
		___s_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_ApplicationIsQuitting_5() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t501B4FC5396E78880545ED9F22BDFEF000938BE1_StaticFields, ___s_ApplicationIsQuitting_5)); }
	inline bool get_s_ApplicationIsQuitting_5() const { return ___s_ApplicationIsQuitting_5; }
	inline bool* get_address_of_s_ApplicationIsQuitting_5() { return &___s_ApplicationIsQuitting_5; }
	inline void set_s_ApplicationIsQuitting_5(bool value)
	{
		___s_ApplicationIsQuitting_5 = value;
	}

	inline static int32_t get_offset_of_s_IsDestroyed_6() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t501B4FC5396E78880545ED9F22BDFEF000938BE1_StaticFields, ___s_IsDestroyed_6)); }
	inline bool get_s_IsDestroyed_6() const { return ___s_IsDestroyed_6; }
	inline bool* get_address_of_s_IsDestroyed_6() { return &___s_IsDestroyed_6; }
	inline void set_s_IsDestroyed_6(bool value)
	{
		___s_IsDestroyed_6 = value;
	}
};


// StansAssets.Foundation.Patterns.MonoSingleton`1<SA.iOS.Social.ISN_Instagram/NativeListener>
struct  MonoSingleton_1_t5C27C43C4095FCD7B545FBA024BD73DB17B5E813  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct MonoSingleton_1_t5C27C43C4095FCD7B545FBA024BD73DB17B5E813_StaticFields
{
public:
	// T StansAssets.Foundation.Patterns.MonoSingleton`1::s_Instance
	NativeListener_tF61FAF3BFB2428151E6987AFF17346C5ED1AA2B2 * ___s_Instance_4;
	// System.Boolean StansAssets.Foundation.Patterns.MonoSingleton`1::s_ApplicationIsQuitting
	bool ___s_ApplicationIsQuitting_5;
	// System.Boolean StansAssets.Foundation.Patterns.MonoSingleton`1::s_IsDestroyed
	bool ___s_IsDestroyed_6;

public:
	inline static int32_t get_offset_of_s_Instance_4() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t5C27C43C4095FCD7B545FBA024BD73DB17B5E813_StaticFields, ___s_Instance_4)); }
	inline NativeListener_tF61FAF3BFB2428151E6987AFF17346C5ED1AA2B2 * get_s_Instance_4() const { return ___s_Instance_4; }
	inline NativeListener_tF61FAF3BFB2428151E6987AFF17346C5ED1AA2B2 ** get_address_of_s_Instance_4() { return &___s_Instance_4; }
	inline void set_s_Instance_4(NativeListener_tF61FAF3BFB2428151E6987AFF17346C5ED1AA2B2 * value)
	{
		___s_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_ApplicationIsQuitting_5() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t5C27C43C4095FCD7B545FBA024BD73DB17B5E813_StaticFields, ___s_ApplicationIsQuitting_5)); }
	inline bool get_s_ApplicationIsQuitting_5() const { return ___s_ApplicationIsQuitting_5; }
	inline bool* get_address_of_s_ApplicationIsQuitting_5() { return &___s_ApplicationIsQuitting_5; }
	inline void set_s_ApplicationIsQuitting_5(bool value)
	{
		___s_ApplicationIsQuitting_5 = value;
	}

	inline static int32_t get_offset_of_s_IsDestroyed_6() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t5C27C43C4095FCD7B545FBA024BD73DB17B5E813_StaticFields, ___s_IsDestroyed_6)); }
	inline bool get_s_IsDestroyed_6() const { return ___s_IsDestroyed_6; }
	inline bool* get_address_of_s_IsDestroyed_6() { return &___s_IsDestroyed_6; }
	inline void set_s_IsDestroyed_6(bool value)
	{
		___s_IsDestroyed_6 = value;
	}
};


// StansAssets.Foundation.Patterns.MonoSingleton`1<SA.iOS.Social.ISN_Mail/NativeListener>
struct  MonoSingleton_1_t5F75FF3FD33E341149B48B46B2A3CA11A805761A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct MonoSingleton_1_t5F75FF3FD33E341149B48B46B2A3CA11A805761A_StaticFields
{
public:
	// T StansAssets.Foundation.Patterns.MonoSingleton`1::s_Instance
	NativeListener_tFB38CE83332FBD025D4CCE9B67A2F374C1C73CCE * ___s_Instance_4;
	// System.Boolean StansAssets.Foundation.Patterns.MonoSingleton`1::s_ApplicationIsQuitting
	bool ___s_ApplicationIsQuitting_5;
	// System.Boolean StansAssets.Foundation.Patterns.MonoSingleton`1::s_IsDestroyed
	bool ___s_IsDestroyed_6;

public:
	inline static int32_t get_offset_of_s_Instance_4() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t5F75FF3FD33E341149B48B46B2A3CA11A805761A_StaticFields, ___s_Instance_4)); }
	inline NativeListener_tFB38CE83332FBD025D4CCE9B67A2F374C1C73CCE * get_s_Instance_4() const { return ___s_Instance_4; }
	inline NativeListener_tFB38CE83332FBD025D4CCE9B67A2F374C1C73CCE ** get_address_of_s_Instance_4() { return &___s_Instance_4; }
	inline void set_s_Instance_4(NativeListener_tFB38CE83332FBD025D4CCE9B67A2F374C1C73CCE * value)
	{
		___s_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_ApplicationIsQuitting_5() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t5F75FF3FD33E341149B48B46B2A3CA11A805761A_StaticFields, ___s_ApplicationIsQuitting_5)); }
	inline bool get_s_ApplicationIsQuitting_5() const { return ___s_ApplicationIsQuitting_5; }
	inline bool* get_address_of_s_ApplicationIsQuitting_5() { return &___s_ApplicationIsQuitting_5; }
	inline void set_s_ApplicationIsQuitting_5(bool value)
	{
		___s_ApplicationIsQuitting_5 = value;
	}

	inline static int32_t get_offset_of_s_IsDestroyed_6() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t5F75FF3FD33E341149B48B46B2A3CA11A805761A_StaticFields, ___s_IsDestroyed_6)); }
	inline bool get_s_IsDestroyed_6() const { return ___s_IsDestroyed_6; }
	inline bool* get_address_of_s_IsDestroyed_6() { return &___s_IsDestroyed_6; }
	inline void set_s_IsDestroyed_6(bool value)
	{
		___s_IsDestroyed_6 = value;
	}
};


// StansAssets.Foundation.Patterns.MonoSingleton`1<SA.iOS.Social.ISN_TextMessage/NativeListener>
struct  MonoSingleton_1_t65B823DD8B1B4EF3A55B96F0F96073BF7E748EF4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct MonoSingleton_1_t65B823DD8B1B4EF3A55B96F0F96073BF7E748EF4_StaticFields
{
public:
	// T StansAssets.Foundation.Patterns.MonoSingleton`1::s_Instance
	NativeListener_t67BED7CC896E080EC5BF48CD15CD186291262B18 * ___s_Instance_4;
	// System.Boolean StansAssets.Foundation.Patterns.MonoSingleton`1::s_ApplicationIsQuitting
	bool ___s_ApplicationIsQuitting_5;
	// System.Boolean StansAssets.Foundation.Patterns.MonoSingleton`1::s_IsDestroyed
	bool ___s_IsDestroyed_6;

public:
	inline static int32_t get_offset_of_s_Instance_4() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t65B823DD8B1B4EF3A55B96F0F96073BF7E748EF4_StaticFields, ___s_Instance_4)); }
	inline NativeListener_t67BED7CC896E080EC5BF48CD15CD186291262B18 * get_s_Instance_4() const { return ___s_Instance_4; }
	inline NativeListener_t67BED7CC896E080EC5BF48CD15CD186291262B18 ** get_address_of_s_Instance_4() { return &___s_Instance_4; }
	inline void set_s_Instance_4(NativeListener_t67BED7CC896E080EC5BF48CD15CD186291262B18 * value)
	{
		___s_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_ApplicationIsQuitting_5() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t65B823DD8B1B4EF3A55B96F0F96073BF7E748EF4_StaticFields, ___s_ApplicationIsQuitting_5)); }
	inline bool get_s_ApplicationIsQuitting_5() const { return ___s_ApplicationIsQuitting_5; }
	inline bool* get_address_of_s_ApplicationIsQuitting_5() { return &___s_ApplicationIsQuitting_5; }
	inline void set_s_ApplicationIsQuitting_5(bool value)
	{
		___s_ApplicationIsQuitting_5 = value;
	}

	inline static int32_t get_offset_of_s_IsDestroyed_6() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t65B823DD8B1B4EF3A55B96F0F96073BF7E748EF4_StaticFields, ___s_IsDestroyed_6)); }
	inline bool get_s_IsDestroyed_6() const { return ___s_IsDestroyed_6; }
	inline bool* get_address_of_s_IsDestroyed_6() { return &___s_IsDestroyed_6; }
	inline void set_s_IsDestroyed_6(bool value)
	{
		___s_IsDestroyed_6 = value;
	}
};


// StansAssets.Foundation.Patterns.MonoSingleton`1<SA.iOS.Social.ISN_Twitter/NativeListener>
struct  MonoSingleton_1_t6979DC44D20A5BC359C7D3352ACAD40E866142DD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct MonoSingleton_1_t6979DC44D20A5BC359C7D3352ACAD40E866142DD_StaticFields
{
public:
	// T StansAssets.Foundation.Patterns.MonoSingleton`1::s_Instance
	NativeListener_t2AE2C1EF80322C5B5F35000779FC06E9C3FF0725 * ___s_Instance_4;
	// System.Boolean StansAssets.Foundation.Patterns.MonoSingleton`1::s_ApplicationIsQuitting
	bool ___s_ApplicationIsQuitting_5;
	// System.Boolean StansAssets.Foundation.Patterns.MonoSingleton`1::s_IsDestroyed
	bool ___s_IsDestroyed_6;

public:
	inline static int32_t get_offset_of_s_Instance_4() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t6979DC44D20A5BC359C7D3352ACAD40E866142DD_StaticFields, ___s_Instance_4)); }
	inline NativeListener_t2AE2C1EF80322C5B5F35000779FC06E9C3FF0725 * get_s_Instance_4() const { return ___s_Instance_4; }
	inline NativeListener_t2AE2C1EF80322C5B5F35000779FC06E9C3FF0725 ** get_address_of_s_Instance_4() { return &___s_Instance_4; }
	inline void set_s_Instance_4(NativeListener_t2AE2C1EF80322C5B5F35000779FC06E9C3FF0725 * value)
	{
		___s_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_ApplicationIsQuitting_5() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t6979DC44D20A5BC359C7D3352ACAD40E866142DD_StaticFields, ___s_ApplicationIsQuitting_5)); }
	inline bool get_s_ApplicationIsQuitting_5() const { return ___s_ApplicationIsQuitting_5; }
	inline bool* get_address_of_s_ApplicationIsQuitting_5() { return &___s_ApplicationIsQuitting_5; }
	inline void set_s_ApplicationIsQuitting_5(bool value)
	{
		___s_ApplicationIsQuitting_5 = value;
	}

	inline static int32_t get_offset_of_s_IsDestroyed_6() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t6979DC44D20A5BC359C7D3352ACAD40E866142DD_StaticFields, ___s_IsDestroyed_6)); }
	inline bool get_s_IsDestroyed_6() const { return ___s_IsDestroyed_6; }
	inline bool* get_address_of_s_IsDestroyed_6() { return &___s_IsDestroyed_6; }
	inline void set_s_IsDestroyed_6(bool value)
	{
		___s_IsDestroyed_6 = value;
	}
};


// SA.iOS.ISN_Settings
struct  ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3  : public SA_ScriptableSingleton_1_t08876A890E2E57E39DCC5D03C916A31673F3A8E0
{
public:
	// System.Boolean SA.iOS.ISN_Settings::Contacts
	bool ___Contacts_16;
	// System.Boolean SA.iOS.ISN_Settings::CloudKit
	bool ___CloudKit_17;
	// System.Boolean SA.iOS.ISN_Settings::Photos
	bool ___Photos_18;
	// System.Boolean SA.iOS.ISN_Settings::ReplayKit
	bool ___ReplayKit_19;
	// System.Boolean SA.iOS.ISN_Settings::Social
	bool ___Social_20;
	// System.Boolean SA.iOS.ISN_Settings::AdSupport
	bool ___AdSupport_21;
	// System.Boolean SA.iOS.ISN_Settings::AVKit
	bool ___AVKit_22;
	// System.Boolean SA.iOS.ISN_Settings::CoreLocation
	bool ___CoreLocation_23;
	// System.Boolean SA.iOS.ISN_Settings::AssetsLibrary
	bool ___AssetsLibrary_24;
	// System.Boolean SA.iOS.ISN_Settings::AppDelegate
	bool ___AppDelegate_25;
	// System.Boolean SA.iOS.ISN_Settings::UserNotifications
	bool ___UserNotifications_26;
	// System.Boolean SA.iOS.ISN_Settings::MediaPlayer
	bool ___MediaPlayer_27;
	// System.Boolean SA.iOS.ISN_Settings::EventKit
	bool ___EventKit_28;
	// SA.iOS.Utilities.ISN_LogLevel SA.iOS.ISN_Settings::LogLevel
	ISN_LogLevel_tDE6F0B554B0E8176D5C73179A916D7B514E92679 * ___LogLevel_29;
	// System.Collections.Generic.List`1<SA.iOS.StoreKit.ISN_SKProduct> SA.iOS.ISN_Settings::InAppProducts
	List_1_t2D723F9BB968A2CB16CAEB637951A33404D5E48C * ___InAppProducts_30;
	// System.Collections.Generic.List`1<SA.iOS.GameKit.ISN_GKAchievement> SA.iOS.ISN_Settings::Achievements
	List_1_t4AA71A9A2338D3E5F86C232C087F57785B25F6D5 * ___Achievements_31;
	// System.Boolean SA.iOS.ISN_Settings::SavingAGame
	bool ___SavingAGame_32;
	// System.Collections.Generic.List`1<SA.iOS.UIKit.ISN_UIApplicationShortcutItem> SA.iOS.ISN_Settings::ShortcutItems
	List_1_t6A30C5609DA0FA69B8061C339F280DF032648CD0 * ___ShortcutItems_33;
	// System.Collections.Generic.List`1<SA.iOS.UIKit.ISN_UIUrlType> SA.iOS.ISN_Settings::UrlTypes
	List_1_t2C364BC8501E2C690B34A8D0CCED091C143A09DE * ___UrlTypes_34;
	// System.Collections.Generic.List`1<SA.iOS.UIKit.ISN_UIUrlType> SA.iOS.ISN_Settings::ApplicationQueriesSchemes
	List_1_t2C364BC8501E2C690B34A8D0CCED091C143A09DE * ___ApplicationQueriesSchemes_35;
	// System.Boolean SA.iOS.ISN_Settings::CameraUsageDescriptionEnabled
	bool ___CameraUsageDescriptionEnabled_36;
	// System.Boolean SA.iOS.ISN_Settings::MediaLibraryUsageDescriptionEnabled
	bool ___MediaLibraryUsageDescriptionEnabled_37;
	// System.Boolean SA.iOS.ISN_Settings::PhotoLibraryUsageDescriptionEnabled
	bool ___PhotoLibraryUsageDescriptionEnabled_38;
	// System.Boolean SA.iOS.ISN_Settings::PhotoLibraryAddUsageDescriptionEnabled
	bool ___PhotoLibraryAddUsageDescriptionEnabled_39;
	// System.Boolean SA.iOS.ISN_Settings::MicrophoneUsageDescriptionEnabled
	bool ___MicrophoneUsageDescriptionEnabled_40;
	// System.String SA.iOS.ISN_Settings::ContactsUsageDescription
	String_t* ___ContactsUsageDescription_41;
	// System.String SA.iOS.ISN_Settings::LocationAlwaysAndWhenInUseUsageDescription
	String_t* ___LocationAlwaysAndWhenInUseUsageDescription_42;
	// System.String SA.iOS.ISN_Settings::LocationWhenInUseUsageDescription
	String_t* ___LocationWhenInUseUsageDescription_43;
	// System.String SA.iOS.ISN_Settings::NSCalendarsUsageDescription
	String_t* ___NSCalendarsUsageDescription_44;
	// System.String SA.iOS.ISN_Settings::NSRemindersUsageDescription
	String_t* ___NSRemindersUsageDescription_45;

public:
	inline static int32_t get_offset_of_Contacts_16() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___Contacts_16)); }
	inline bool get_Contacts_16() const { return ___Contacts_16; }
	inline bool* get_address_of_Contacts_16() { return &___Contacts_16; }
	inline void set_Contacts_16(bool value)
	{
		___Contacts_16 = value;
	}

	inline static int32_t get_offset_of_CloudKit_17() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___CloudKit_17)); }
	inline bool get_CloudKit_17() const { return ___CloudKit_17; }
	inline bool* get_address_of_CloudKit_17() { return &___CloudKit_17; }
	inline void set_CloudKit_17(bool value)
	{
		___CloudKit_17 = value;
	}

	inline static int32_t get_offset_of_Photos_18() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___Photos_18)); }
	inline bool get_Photos_18() const { return ___Photos_18; }
	inline bool* get_address_of_Photos_18() { return &___Photos_18; }
	inline void set_Photos_18(bool value)
	{
		___Photos_18 = value;
	}

	inline static int32_t get_offset_of_ReplayKit_19() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___ReplayKit_19)); }
	inline bool get_ReplayKit_19() const { return ___ReplayKit_19; }
	inline bool* get_address_of_ReplayKit_19() { return &___ReplayKit_19; }
	inline void set_ReplayKit_19(bool value)
	{
		___ReplayKit_19 = value;
	}

	inline static int32_t get_offset_of_Social_20() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___Social_20)); }
	inline bool get_Social_20() const { return ___Social_20; }
	inline bool* get_address_of_Social_20() { return &___Social_20; }
	inline void set_Social_20(bool value)
	{
		___Social_20 = value;
	}

	inline static int32_t get_offset_of_AdSupport_21() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___AdSupport_21)); }
	inline bool get_AdSupport_21() const { return ___AdSupport_21; }
	inline bool* get_address_of_AdSupport_21() { return &___AdSupport_21; }
	inline void set_AdSupport_21(bool value)
	{
		___AdSupport_21 = value;
	}

	inline static int32_t get_offset_of_AVKit_22() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___AVKit_22)); }
	inline bool get_AVKit_22() const { return ___AVKit_22; }
	inline bool* get_address_of_AVKit_22() { return &___AVKit_22; }
	inline void set_AVKit_22(bool value)
	{
		___AVKit_22 = value;
	}

	inline static int32_t get_offset_of_CoreLocation_23() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___CoreLocation_23)); }
	inline bool get_CoreLocation_23() const { return ___CoreLocation_23; }
	inline bool* get_address_of_CoreLocation_23() { return &___CoreLocation_23; }
	inline void set_CoreLocation_23(bool value)
	{
		___CoreLocation_23 = value;
	}

	inline static int32_t get_offset_of_AssetsLibrary_24() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___AssetsLibrary_24)); }
	inline bool get_AssetsLibrary_24() const { return ___AssetsLibrary_24; }
	inline bool* get_address_of_AssetsLibrary_24() { return &___AssetsLibrary_24; }
	inline void set_AssetsLibrary_24(bool value)
	{
		___AssetsLibrary_24 = value;
	}

	inline static int32_t get_offset_of_AppDelegate_25() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___AppDelegate_25)); }
	inline bool get_AppDelegate_25() const { return ___AppDelegate_25; }
	inline bool* get_address_of_AppDelegate_25() { return &___AppDelegate_25; }
	inline void set_AppDelegate_25(bool value)
	{
		___AppDelegate_25 = value;
	}

	inline static int32_t get_offset_of_UserNotifications_26() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___UserNotifications_26)); }
	inline bool get_UserNotifications_26() const { return ___UserNotifications_26; }
	inline bool* get_address_of_UserNotifications_26() { return &___UserNotifications_26; }
	inline void set_UserNotifications_26(bool value)
	{
		___UserNotifications_26 = value;
	}

	inline static int32_t get_offset_of_MediaPlayer_27() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___MediaPlayer_27)); }
	inline bool get_MediaPlayer_27() const { return ___MediaPlayer_27; }
	inline bool* get_address_of_MediaPlayer_27() { return &___MediaPlayer_27; }
	inline void set_MediaPlayer_27(bool value)
	{
		___MediaPlayer_27 = value;
	}

	inline static int32_t get_offset_of_EventKit_28() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___EventKit_28)); }
	inline bool get_EventKit_28() const { return ___EventKit_28; }
	inline bool* get_address_of_EventKit_28() { return &___EventKit_28; }
	inline void set_EventKit_28(bool value)
	{
		___EventKit_28 = value;
	}

	inline static int32_t get_offset_of_LogLevel_29() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___LogLevel_29)); }
	inline ISN_LogLevel_tDE6F0B554B0E8176D5C73179A916D7B514E92679 * get_LogLevel_29() const { return ___LogLevel_29; }
	inline ISN_LogLevel_tDE6F0B554B0E8176D5C73179A916D7B514E92679 ** get_address_of_LogLevel_29() { return &___LogLevel_29; }
	inline void set_LogLevel_29(ISN_LogLevel_tDE6F0B554B0E8176D5C73179A916D7B514E92679 * value)
	{
		___LogLevel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LogLevel_29), (void*)value);
	}

	inline static int32_t get_offset_of_InAppProducts_30() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___InAppProducts_30)); }
	inline List_1_t2D723F9BB968A2CB16CAEB637951A33404D5E48C * get_InAppProducts_30() const { return ___InAppProducts_30; }
	inline List_1_t2D723F9BB968A2CB16CAEB637951A33404D5E48C ** get_address_of_InAppProducts_30() { return &___InAppProducts_30; }
	inline void set_InAppProducts_30(List_1_t2D723F9BB968A2CB16CAEB637951A33404D5E48C * value)
	{
		___InAppProducts_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InAppProducts_30), (void*)value);
	}

	inline static int32_t get_offset_of_Achievements_31() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___Achievements_31)); }
	inline List_1_t4AA71A9A2338D3E5F86C232C087F57785B25F6D5 * get_Achievements_31() const { return ___Achievements_31; }
	inline List_1_t4AA71A9A2338D3E5F86C232C087F57785B25F6D5 ** get_address_of_Achievements_31() { return &___Achievements_31; }
	inline void set_Achievements_31(List_1_t4AA71A9A2338D3E5F86C232C087F57785B25F6D5 * value)
	{
		___Achievements_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Achievements_31), (void*)value);
	}

	inline static int32_t get_offset_of_SavingAGame_32() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___SavingAGame_32)); }
	inline bool get_SavingAGame_32() const { return ___SavingAGame_32; }
	inline bool* get_address_of_SavingAGame_32() { return &___SavingAGame_32; }
	inline void set_SavingAGame_32(bool value)
	{
		___SavingAGame_32 = value;
	}

	inline static int32_t get_offset_of_ShortcutItems_33() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___ShortcutItems_33)); }
	inline List_1_t6A30C5609DA0FA69B8061C339F280DF032648CD0 * get_ShortcutItems_33() const { return ___ShortcutItems_33; }
	inline List_1_t6A30C5609DA0FA69B8061C339F280DF032648CD0 ** get_address_of_ShortcutItems_33() { return &___ShortcutItems_33; }
	inline void set_ShortcutItems_33(List_1_t6A30C5609DA0FA69B8061C339F280DF032648CD0 * value)
	{
		___ShortcutItems_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShortcutItems_33), (void*)value);
	}

	inline static int32_t get_offset_of_UrlTypes_34() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___UrlTypes_34)); }
	inline List_1_t2C364BC8501E2C690B34A8D0CCED091C143A09DE * get_UrlTypes_34() const { return ___UrlTypes_34; }
	inline List_1_t2C364BC8501E2C690B34A8D0CCED091C143A09DE ** get_address_of_UrlTypes_34() { return &___UrlTypes_34; }
	inline void set_UrlTypes_34(List_1_t2C364BC8501E2C690B34A8D0CCED091C143A09DE * value)
	{
		___UrlTypes_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UrlTypes_34), (void*)value);
	}

	inline static int32_t get_offset_of_ApplicationQueriesSchemes_35() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___ApplicationQueriesSchemes_35)); }
	inline List_1_t2C364BC8501E2C690B34A8D0CCED091C143A09DE * get_ApplicationQueriesSchemes_35() const { return ___ApplicationQueriesSchemes_35; }
	inline List_1_t2C364BC8501E2C690B34A8D0CCED091C143A09DE ** get_address_of_ApplicationQueriesSchemes_35() { return &___ApplicationQueriesSchemes_35; }
	inline void set_ApplicationQueriesSchemes_35(List_1_t2C364BC8501E2C690B34A8D0CCED091C143A09DE * value)
	{
		___ApplicationQueriesSchemes_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ApplicationQueriesSchemes_35), (void*)value);
	}

	inline static int32_t get_offset_of_CameraUsageDescriptionEnabled_36() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___CameraUsageDescriptionEnabled_36)); }
	inline bool get_CameraUsageDescriptionEnabled_36() const { return ___CameraUsageDescriptionEnabled_36; }
	inline bool* get_address_of_CameraUsageDescriptionEnabled_36() { return &___CameraUsageDescriptionEnabled_36; }
	inline void set_CameraUsageDescriptionEnabled_36(bool value)
	{
		___CameraUsageDescriptionEnabled_36 = value;
	}

	inline static int32_t get_offset_of_MediaLibraryUsageDescriptionEnabled_37() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___MediaLibraryUsageDescriptionEnabled_37)); }
	inline bool get_MediaLibraryUsageDescriptionEnabled_37() const { return ___MediaLibraryUsageDescriptionEnabled_37; }
	inline bool* get_address_of_MediaLibraryUsageDescriptionEnabled_37() { return &___MediaLibraryUsageDescriptionEnabled_37; }
	inline void set_MediaLibraryUsageDescriptionEnabled_37(bool value)
	{
		___MediaLibraryUsageDescriptionEnabled_37 = value;
	}

	inline static int32_t get_offset_of_PhotoLibraryUsageDescriptionEnabled_38() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___PhotoLibraryUsageDescriptionEnabled_38)); }
	inline bool get_PhotoLibraryUsageDescriptionEnabled_38() const { return ___PhotoLibraryUsageDescriptionEnabled_38; }
	inline bool* get_address_of_PhotoLibraryUsageDescriptionEnabled_38() { return &___PhotoLibraryUsageDescriptionEnabled_38; }
	inline void set_PhotoLibraryUsageDescriptionEnabled_38(bool value)
	{
		___PhotoLibraryUsageDescriptionEnabled_38 = value;
	}

	inline static int32_t get_offset_of_PhotoLibraryAddUsageDescriptionEnabled_39() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___PhotoLibraryAddUsageDescriptionEnabled_39)); }
	inline bool get_PhotoLibraryAddUsageDescriptionEnabled_39() const { return ___PhotoLibraryAddUsageDescriptionEnabled_39; }
	inline bool* get_address_of_PhotoLibraryAddUsageDescriptionEnabled_39() { return &___PhotoLibraryAddUsageDescriptionEnabled_39; }
	inline void set_PhotoLibraryAddUsageDescriptionEnabled_39(bool value)
	{
		___PhotoLibraryAddUsageDescriptionEnabled_39 = value;
	}

	inline static int32_t get_offset_of_MicrophoneUsageDescriptionEnabled_40() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___MicrophoneUsageDescriptionEnabled_40)); }
	inline bool get_MicrophoneUsageDescriptionEnabled_40() const { return ___MicrophoneUsageDescriptionEnabled_40; }
	inline bool* get_address_of_MicrophoneUsageDescriptionEnabled_40() { return &___MicrophoneUsageDescriptionEnabled_40; }
	inline void set_MicrophoneUsageDescriptionEnabled_40(bool value)
	{
		___MicrophoneUsageDescriptionEnabled_40 = value;
	}

	inline static int32_t get_offset_of_ContactsUsageDescription_41() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___ContactsUsageDescription_41)); }
	inline String_t* get_ContactsUsageDescription_41() const { return ___ContactsUsageDescription_41; }
	inline String_t** get_address_of_ContactsUsageDescription_41() { return &___ContactsUsageDescription_41; }
	inline void set_ContactsUsageDescription_41(String_t* value)
	{
		___ContactsUsageDescription_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ContactsUsageDescription_41), (void*)value);
	}

	inline static int32_t get_offset_of_LocationAlwaysAndWhenInUseUsageDescription_42() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___LocationAlwaysAndWhenInUseUsageDescription_42)); }
	inline String_t* get_LocationAlwaysAndWhenInUseUsageDescription_42() const { return ___LocationAlwaysAndWhenInUseUsageDescription_42; }
	inline String_t** get_address_of_LocationAlwaysAndWhenInUseUsageDescription_42() { return &___LocationAlwaysAndWhenInUseUsageDescription_42; }
	inline void set_LocationAlwaysAndWhenInUseUsageDescription_42(String_t* value)
	{
		___LocationAlwaysAndWhenInUseUsageDescription_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LocationAlwaysAndWhenInUseUsageDescription_42), (void*)value);
	}

	inline static int32_t get_offset_of_LocationWhenInUseUsageDescription_43() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___LocationWhenInUseUsageDescription_43)); }
	inline String_t* get_LocationWhenInUseUsageDescription_43() const { return ___LocationWhenInUseUsageDescription_43; }
	inline String_t** get_address_of_LocationWhenInUseUsageDescription_43() { return &___LocationWhenInUseUsageDescription_43; }
	inline void set_LocationWhenInUseUsageDescription_43(String_t* value)
	{
		___LocationWhenInUseUsageDescription_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LocationWhenInUseUsageDescription_43), (void*)value);
	}

	inline static int32_t get_offset_of_NSCalendarsUsageDescription_44() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___NSCalendarsUsageDescription_44)); }
	inline String_t* get_NSCalendarsUsageDescription_44() const { return ___NSCalendarsUsageDescription_44; }
	inline String_t** get_address_of_NSCalendarsUsageDescription_44() { return &___NSCalendarsUsageDescription_44; }
	inline void set_NSCalendarsUsageDescription_44(String_t* value)
	{
		___NSCalendarsUsageDescription_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NSCalendarsUsageDescription_44), (void*)value);
	}

	inline static int32_t get_offset_of_NSRemindersUsageDescription_45() { return static_cast<int32_t>(offsetof(ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3, ___NSRemindersUsageDescription_45)); }
	inline String_t* get_NSRemindersUsageDescription_45() const { return ___NSRemindersUsageDescription_45; }
	inline String_t** get_address_of_NSRemindersUsageDescription_45() { return &___NSRemindersUsageDescription_45; }
	inline void set_NSRemindersUsageDescription_45(String_t* value)
	{
		___NSRemindersUsageDescription_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NSRemindersUsageDescription_45), (void*)value);
	}
};


// SA.iOS.Utilities.ISN_Singleton`1<SA.iOS.Social.ISN_Facebook/NativeListener>
struct  ISN_Singleton_1_t52D89AE00A37AFC230CB211D33F9D3F76FC86CD6  : public MonoSingleton_1_t501B4FC5396E78880545ED9F22BDFEF000938BE1
{
public:

public:
};


// SA.iOS.Utilities.ISN_Singleton`1<SA.iOS.Social.ISN_Instagram/NativeListener>
struct  ISN_Singleton_1_t738E8E6DAD0DD066BFFE46293306B1EEF45CB95B  : public MonoSingleton_1_t5C27C43C4095FCD7B545FBA024BD73DB17B5E813
{
public:

public:
};


// SA.iOS.Utilities.ISN_Singleton`1<SA.iOS.Social.ISN_Mail/NativeListener>
struct  ISN_Singleton_1_tA408106398E41BA8BE78F0BB1B1E3B751E40688E  : public MonoSingleton_1_t5F75FF3FD33E341149B48B46B2A3CA11A805761A
{
public:

public:
};


// SA.iOS.Utilities.ISN_Singleton`1<SA.iOS.Social.ISN_TextMessage/NativeListener>
struct  ISN_Singleton_1_t49FEC97025D75E045CA2B1EF40E9DBD04AB1F8B6  : public MonoSingleton_1_t65B823DD8B1B4EF3A55B96F0F96073BF7E748EF4
{
public:

public:
};


// SA.iOS.Utilities.ISN_Singleton`1<SA.iOS.Social.ISN_Twitter/NativeListener>
struct  ISN_Singleton_1_tAF891CCAF9214C8BFF2DDD4450764709A8F49569  : public MonoSingleton_1_t6979DC44D20A5BC359C7D3352ACAD40E866142DD
{
public:

public:
};


// SA.iOS.Social.ISN_Facebook/NativeListener
struct  NativeListener_t98737FF9BE7B87DF62EF58AE265C1B169902E682  : public ISN_Singleton_1_t52D89AE00A37AFC230CB211D33F9D3F76FC86CD6
{
public:

public:
};


// SA.iOS.Social.ISN_Instagram/NativeListener
struct  NativeListener_tF61FAF3BFB2428151E6987AFF17346C5ED1AA2B2  : public ISN_Singleton_1_t738E8E6DAD0DD066BFFE46293306B1EEF45CB95B
{
public:

public:
};


// SA.iOS.Social.ISN_Mail/NativeListener
struct  NativeListener_tFB38CE83332FBD025D4CCE9B67A2F374C1C73CCE  : public ISN_Singleton_1_tA408106398E41BA8BE78F0BB1B1E3B751E40688E
{
public:

public:
};


// SA.iOS.Social.ISN_TextMessage/NativeListener
struct  NativeListener_t67BED7CC896E080EC5BF48CD15CD186291262B18  : public ISN_Singleton_1_t49FEC97025D75E045CA2B1EF40E9DBD04AB1F8B6
{
public:

public:
};


// SA.iOS.Social.ISN_Twitter/NativeListener
struct  NativeListener_t2AE2C1EF80322C5B5F35000779FC06E9C3FF0725  : public ISN_Singleton_1_tAF891CCAF9214C8BFF2DDD4450764709A8F49569
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void SA.iOS.Utilities.ISN_Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISN_Singleton_1__ctor_m4D564A6D613A27B2E2658145D7AF5D17A3B9B9C5_gshared (ISN_Singleton_1_tCFF7CF4983BE62DA9FD5684ECF2E5D2A5D5CF507 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !0 SA.Foundation.Patterns.SA_ScriptableSingleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SA_ScriptableSingleton_1_get_Instance_m181EBB414BB26842A610166FD4E572326E2D186E_gshared (const RuntimeMethod* method);
// System.Void SA.Foundation.Events.SA_Event`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_Event_1_Invoke_m5ABA0CCC3D12E26EFDFFF33A101E3769A3C79384_gshared (SA_Event_1_t2B5B1F6E90D8C2FDDCCA1AF8DF56D08FE29837FB * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32Enum>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m2652E72792A278523D6D8962CBBEA84177BB4556_gshared (Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09 * __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m5A0949EFB73F1BDBEBE3CB814917A79FBF9B3DEA_gshared (Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.DateTime>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m168C30157817DF3E1710919C8C8ED31D9EEEF064_gshared (Action_1_t2B33C6C2E077C8AA0861FADB5453D90C6F9A7B97 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___obj0, const RuntimeMethod* method);

// SA.iOS.UserNotifications.ISN_iUNAPI SA.iOS.UserNotifications.ISN_UNLib::get_Api()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ISN_UNLib_get_Api_m07ADB6FAB270C5846374B312222DE16FD4782D2B (const RuntimeMethod* method);
// System.Void SA.iOS.Social.ISN_Whatsapp/Internal::ISN_WP_ShareText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_ISN_WP_ShareText_mA33D34BD1083D11C0269715A7BC5FBE47842D606 (String_t* ___message0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, const RuntimeMethod* method);
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mE6E1FE504EF1E99DB2F8B92180A82A5F1512EF6A (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inArray0, const RuntimeMethod* method);
// System.Void SA.iOS.Social.ISN_Whatsapp/Internal::ISN_WP_ShareMedia(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_ISN_WP_ShareMedia_m34C819A7CEFF6F42A94B84E7BA8001C2C8648366 (String_t* ___encodedMedia0, const RuntimeMethod* method);
// System.Void SA.iOS.AuthenticationServices.ISN_ASAuthorizationController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0AE3F178E49928B95C3C20C8AE52AE72CCBC9A3D (U3CU3Ec_tA660AB806A590C5359CA1B2CA66002F25A18A5D8 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.UInt64 SA.iOS.Utilities.ISN_NativeObject::get_NativeHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ISN_NativeObject_get_NativeHashCode_m9EE78535A1146ABB3437B476B0E9C13460337D9F_inline (ISN_NativeObject_tCBEFEB9640F4BE02478CE5834ABB80EB299E044F * __this, const RuntimeMethod* method);
// System.String System.UInt64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m3644686F0A0E32CB94D300CF891DBD7920396F37 (uint64_t* __this, const RuntimeMethod* method);
// System.Void SA.iOS.AuthenticationServices.ISN_ASAuthorizationOpenIDRequest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3B668675AAD936440DCC1B8F6279ABC8BBB888BF (U3CU3Ec_tA5F88AFDE3B0CEB4F2DC371311B5EBE0C801888B * __this, const RuntimeMethod* method);
// SA.iOS.Contacts.ISN_CNContactsResult SA.iOS.Contacts.Internal.ISN_CNEditorAPI::CreateFakeResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ISN_CNContactsResult_tABC68FBC091A4AB69DC9872B9FC49390246A6E7D * ISN_CNEditorAPI_CreateFakeResult_mD7DE84C463FFAFEAE4A9359EDC606A95533396FF (ISN_CNEditorAPI_t2397B4C523B9DEB554661F0D17CD308FF7A46AB8 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<SA.iOS.Contacts.ISN_CNContactsResult>::Invoke(!0)
inline void Action_1_Invoke_m973FFEC4ABCA3B472E04CEB5D23F6127664A1015 (Action_1_t93AFA1AE027C78386A3DAF5B255C378893B62690 * __this, ISN_CNContactsResult_tABC68FBC091A4AB69DC9872B9FC49390246A6E7D * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t93AFA1AE027C78386A3DAF5B255C378893B62690 *, ISN_CNContactsResult_tABC68FBC091A4AB69DC9872B9FC49390246A6E7D *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void SA.Foundation.Templates.SA_Result::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_Result__ctor_mA8937F170D05BBA24B5C59BB5BBB4DBCFA69D629 (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * __this, const RuntimeMethod* method);
// System.Void System.Action`1<SA.Foundation.Templates.SA_Result>::Invoke(!0)
inline void Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764 (Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * __this, SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 *, SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void SA.iOS.UIKit.ISN_DialogsStack::OnDialogDismissed(SA.iOS.UIKit.ISN_UIAlertController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISN_DialogsStack_OnDialogDismissed_m9F67BE1E1F98FE2B5671B0516B9B1AB20CBFB22D (ISN_UIAlertController_t7E492DF004875CDD24E30821D1BE5CF460BE5B0F * ___dialog0, const RuntimeMethod* method);
// System.Void SA.iOS.Social.ISN_Facebook/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m56E557D489CEB20F49564C09F41D230EB1709545 (U3CU3Ec_t991E7432CD9C5E03D22ABA90B56CEDC6F92754B6 * __this, const RuntimeMethod* method);
// System.Void SA.Foundation.Templates.SA_Error::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_Error__ctor_m631E82E9A0A7BCB5753C838CBEB2A6812131BA52 (SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * __this, int32_t ___code0, String_t* ___message1, const RuntimeMethod* method);
// System.Void SA.Foundation.Templates.SA_Result::.ctor(SA.Foundation.Templates.SA_Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_Result__ctor_m4B0C6547881AC2426679E50B73F2CFFA45D1D1D3 (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * __this, SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * ___error0, const RuntimeMethod* method);
// System.Void SA.iOS.Utilities.ISN_Singleton`1<SA.iOS.Social.ISN_Facebook/NativeListener>::.ctor()
inline void ISN_Singleton_1__ctor_mCF161A82B2F5FEE3389B73E7D9CBC02F5C4A1765 (ISN_Singleton_1_t52D89AE00A37AFC230CB211D33F9D3F76FC86CD6 * __this, const RuntimeMethod* method)
{
	((  void (*) (ISN_Singleton_1_t52D89AE00A37AFC230CB211D33F9D3F76FC86CD6 *, const RuntimeMethod*))ISN_Singleton_1__ctor_m4D564A6D613A27B2E2658145D7AF5D17A3B9B9C5_gshared)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Boolean SA.Foundation.Templates.SA_Result::get_IsSucceeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SA_Result_get_IsSucceeded_mCF559D14CD5C81FBC5C071C3F5F93A99188CAEFA (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * __this, const RuntimeMethod* method);
// SA.iOS.GameKit.ISN_GKLeaderboard SA.iOS.GameKit.ISN_GKScoreLoadResult::get_Leaderboard()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 * ISN_GKScoreLoadResult_get_Leaderboard_m4808F3CA2359C9DBEC0D66E4735ABAFD525F6ADF_inline (ISN_GKScoreLoadResult_t57A8A5AEDF4143C5599DB1B6314E795F42AC5B13 * __this, const RuntimeMethod* method);
// System.Int64 SA.iOS.GameKit.ISN_GKLeaderboard::get_MaxRange()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ISN_GKLeaderboard_get_MaxRange_m952301F52DE7B1306E8CCA8E90E22F05B96BC431_inline (ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 * __this, const RuntimeMethod* method);
// SA.iOS.GameKit.ISN_GKScore SA.iOS.GameKit.ISN_GKLeaderboard::get_LocalPlayerScore()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ISN_GKScore_t61C79EFDE5BD5A770466331E28E6C7D520F08139 * ISN_GKLeaderboard_get_LocalPlayerScore_m1C24BB9087C445EB9026820C42DE86CFA39B2836_inline (ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<SA.iOS.GameKit.ISN_GKScore> SA.iOS.GameKit.ISN_GKLeaderboard::get_Scores()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t08BB076155DD422337809CD51D7A12C5C78F05BC * ISN_GKLeaderboard_get_Scores_m7540DA208D58D6C205376E69DFD817C9862C47D9_inline (ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<SA.iOS.GameKit.ISN_GKScoreLoadResult>::Invoke(!0)
inline void Action_1_Invoke_m88465E33E49A8CA9DAE3AFF1AEB503200BF0903A (Action_1_tF3DE25E536BCA9529D0526BD696C217D9BDE1941 * __this, ISN_GKScoreLoadResult_t57A8A5AEDF4143C5599DB1B6314E795F42AC5B13 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF3DE25E536BCA9529D0526BD696C217D9BDE1941 *, ISN_GKScoreLoadResult_t57A8A5AEDF4143C5599DB1B6314E795F42AC5B13 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m33C8B344EF659F53F375D67127BCB801872A3436 (U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameFetchResult>::Invoke(!0)
inline void Action_1_Invoke_mDC5E3F9883943DC4E9A8443A068DA6F3B9CD49BD (Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * __this, ISN_GKSavedGameFetchResult_t429317C838E84AD0264669DC43F5C4C5D23EE715 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 *, ISN_GKSavedGameFetchResult_t429317C838E84AD0264669DC43F5C4C5D23EE715 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameFetchResult>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m889D1F87AF98386E956F8E88C7CDB011188F5FAA (Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameSaveResult>::Invoke(!0)
inline void Action_1_Invoke_m9F479A261371548B5118A48139644FF4DEA6B350 (Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 * __this, ISN_GKSavedGameSaveResult_t79F7828795EB6CA14EE02D198BF136038F40F319 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 *, ISN_GKSavedGameSaveResult_t79F7828795EB6CA14EE02D198BF136038F40F319 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameSaveResult>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8B31B3592A076C43438A9CFB48BF1E686FD71FBD (Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<SA.Foundation.Templates.SA_Result>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mD426C1BAD069EC21073F6473399CB74532DBFE75 (Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameLoadResult>::Invoke(!0)
inline void Action_1_Invoke_m6873CF478F7A8574B4AE415288788904629411EE (Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 * __this, ISN_GKSavedGameLoadResult_t01255EF9BF3D93463A616431A95EEF5BEC728C52 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 *, ISN_GKSavedGameLoadResult_t01255EF9BF3D93463A616431A95EEF5BEC728C52 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<SA.iOS.GameKit.ISN_GKSavedGameLoadResult>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m7A92B13F4266F93847CEE64DCA2BF57416DB1815 (Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void SA.iOS.GameKit.ISN_GKLoadDefaultLeaderboardResult::.ctor(SA.Foundation.Templates.SA_DataResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISN_GKLoadDefaultLeaderboardResult__ctor_mA6D3FAA6DCB2E66DA599E1FB7C1B251C5B7D7942 (ISN_GKLoadDefaultLeaderboardResult_tE64A92BC175FD8A53E25F74D66B51190DC95C193 * __this, SA_DataResult_tF0A5319D09E80AE65AF389F07D60BD8DB8353144 * ___dataResult0, const RuntimeMethod* method);
// System.Void System.Action`1<SA.iOS.GameKit.ISN_GKLoadDefaultLeaderboardResult>::Invoke(!0)
inline void Action_1_Invoke_m9758977374B90655D6DD83A89AB898D5F4611ED3 (Action_1_t297BE403C517D6F098CCAD063217CC4522C4C280 * __this, ISN_GKLoadDefaultLeaderboardResult_tE64A92BC175FD8A53E25F74D66B51190DC95C193 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t297BE403C517D6F098CCAD063217CC4522C4C280 *, ISN_GKLoadDefaultLeaderboardResult_tE64A92BC175FD8A53E25F74D66B51190DC95C193 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void SA.iOS.Social.ISN_Instagram/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m99F5076949E98EFD60812E5053FF51195E1D5AB9 (U3CU3Ec_t0775DC4B3F2747BD58CE3092A2638DB17C2368D1 * __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mA1C10AB2A7C95E9DCAC473D1D88C74D60FA240ED (String_t* ___value0, const RuntimeMethod* method);
// System.Void SA.iOS.Utilities.ISN_Singleton`1<SA.iOS.Social.ISN_Instagram/NativeListener>::.ctor()
inline void ISN_Singleton_1__ctor_m95D0F0CCC9F850E28667508D0BA2D1CC3B474AD1 (ISN_Singleton_1_t738E8E6DAD0DD066BFFE46293306B1EEF45CB95B * __this, const RuntimeMethod* method)
{
	((  void (*) (ISN_Singleton_1_t738E8E6DAD0DD066BFFE46293306B1EEF45CB95B *, const RuntimeMethod*))ISN_Singleton_1__ctor_m4D564A6D613A27B2E2658145D7AF5D17A3B9B9C5_gshared)(__this, method);
}
// System.Void SA.iOS.MediaPlayer.ISN_MPMediaItemCollection::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISN_MPMediaItemCollection__ctor_m55E5E37681A217C1970220AF5DBCF241BFD8A30B (ISN_MPMediaItemCollection_tA22A8D7C54B8FD586195739E8678EFD4AD921BFE * __this, uint64_t ___hasCode0, const RuntimeMethod* method);
// System.Void SA.iOS.Social.ISN_Mail/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDDBFE4272E6D925E1E1FDAA7B5AEB79266F1DA81 (U3CU3Ec_tB990CAF31D94D477325E36EB65019F184028D78E * __this, const RuntimeMethod* method);
// System.Void SA.iOS.Utilities.ISN_Singleton`1<SA.iOS.Social.ISN_Mail/NativeListener>::.ctor()
inline void ISN_Singleton_1__ctor_m8B57FEAAC7BCB8FC63BC97091BFAB0E6166E924C (ISN_Singleton_1_tA408106398E41BA8BE78F0BB1B1E3B751E40688E * __this, const RuntimeMethod* method)
{
	((  void (*) (ISN_Singleton_1_tA408106398E41BA8BE78F0BB1B1E3B751E40688E *, const RuntimeMethod*))ISN_Singleton_1__ctor_m4D564A6D613A27B2E2658145D7AF5D17A3B9B9C5_gshared)(__this, method);
}
// System.Void SA.iOS.UIKit.ISN_PhotoAlbum::UIImageWriteToSavedPhotosAlbum(UnityEngine.Texture2D,System.Action`1<SA.Foundation.Templates.SA_Result>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISN_PhotoAlbum_UIImageWriteToSavedPhotosAlbum_mF924AEF8A11127CD8FB8B5465A99220145473C89 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * ___callback1, const RuntimeMethod* method);
// System.Void SA.iOS.ReplayKit.ISN_RPNativeAPI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFD67F176B02B8D02498A401CD09505F61A265A84 (U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B * __this, const RuntimeMethod* method);
// !0 SA.Foundation.Patterns.SA_ScriptableSingleton`1<SA.iOS.ISN_Settings>::get_Instance()
inline ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3 * SA_ScriptableSingleton_1_get_Instance_m91035B08BB57A2127C7A297AEAD89A75BC37D63F (const RuntimeMethod* method)
{
	return ((  ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3 * (*) (const RuntimeMethod*))SA_ScriptableSingleton_1_get_Instance_m181EBB414BB26842A610166FD4E572326E2D186E_gshared)(method);
}
// System.Void SA.iOS.StoreKit.ISN_SKInitResult::.ctor(System.Collections.Generic.List`1<SA.iOS.StoreKit.ISN_SKProduct>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISN_SKInitResult__ctor_m484E1912EF898ADCBA9AE16327E817944050F459 (ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731 * __this, List_1_t2D723F9BB968A2CB16CAEB637951A33404D5E48C * ___products0, const RuntimeMethod* method);
// System.Void System.Action`1<SA.iOS.StoreKit.ISN_SKInitResult>::Invoke(!0)
inline void Action_1_Invoke_mC4A45C1850A7925CD1DCF8395F207CC27298AE38 (Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * __this, ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 *, ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// SA.iOS.StoreKit.ISN_SKProduct SA.iOS.StoreKit.ISN_SKPaymentQueue::GetProductById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ISN_SKProduct_tB70386270C96B57C2FB14E931332F98F0F186B15 * ISN_SKPaymentQueue_GetProductById_mB599753CA999CF4B70B4AC1C431A3A33F9EA75D3 (String_t* ___productIdentifier0, const RuntimeMethod* method);
// System.Void SA.iOS.StoreKit.ISN_SKPaymentTransaction::.ctor(SA.iOS.StoreKit.ISN_SKProduct,SA.iOS.StoreKit.ISN_SKPaymentTransactionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISN_SKPaymentTransaction__ctor_m2DFA5E1837503BB88F18A27F733137E86304E540 (ISN_SKPaymentTransaction_tF41BFFFB76CBCFDADBB1E5E752EA8ADB53EFF12C * __this, ISN_SKProduct_tB70386270C96B57C2FB14E931332F98F0F186B15 * ___product0, int32_t ___state1, const RuntimeMethod* method);
// System.Void SA.Foundation.Events.SA_Event`1<SA.iOS.StoreKit.ISN_iSKPaymentTransaction>::Invoke(!0)
inline void SA_Event_1_Invoke_m850152DA5F2F6C405D365EB12ABC12D04B1FA689 (SA_Event_1_tE849E11935AC44EFC07E16AF67D4A70BC40A422C * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (SA_Event_1_tE849E11935AC44EFC07E16AF67D4A70BC40A422C *, RuntimeObject*, const RuntimeMethod*))SA_Event_1_Invoke_m5ABA0CCC3D12E26EFDFFF33A101E3769A3C79384_gshared)(__this, ___obj0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEAE2832F597C23898447E2C1443772BC11BD9EA5 (U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198 * __this, const RuntimeMethod* method);
// System.Void SA.iOS.StoreKit.ISN_SKPaymentQueue::CacheAppStoreProducts(SA.iOS.StoreKit.ISN_SKInitResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISN_SKPaymentQueue_CacheAppStoreProducts_mA48B6D6ADC7D6B0656AE5F407E83C7BE1E6F45D6 (ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731 * ___result0, const RuntimeMethod* method);
// System.Void System.Action`1<SA.iOS.StoreKit.ISN_SKInitResult>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mD9740D4214410B812D153422F0102DD31D56BB5E (Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// SA.iOS.StoreKit.ISN_iSKAPI SA.iOS.StoreKit.ISN_SKLib::get_Api()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ISN_SKLib_get_Api_mE8A40CBE492AA5C736F187615E3192B4EB6EA603 (const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<SA.iOS.StoreKit.ISN_iSKPaymentTransactionObserver>::GetEnumerator()
inline Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5  List_1_GetEnumerator_mF1A0CFD995AD189624A4DF42F837CC7E91B9412C (List_1_t5A6D69A90896741CD34AAFF072502D7844EDF7A3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5  (*) (List_1_t5A6D69A90896741CD34AAFF072502D7844EDF7A3 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<SA.iOS.StoreKit.ISN_iSKPaymentTransactionObserver>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m256C3A016DB020EE3DADE774C8ED3B98145E40FF_inline (Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<SA.iOS.StoreKit.ISN_iSKPaymentTransactionObserver>::MoveNext()
inline bool Enumerator_MoveNext_m8B0028B35AB15EAF23FDFE22D0A1B85ECD5BA0BD (Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<SA.iOS.StoreKit.ISN_iSKPaymentTransactionObserver>::Dispose()
inline void Enumerator_Dispose_mD529F0745024A38E3ED28ABFA8D9B144060CE735 (Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.String SA.iOS.StoreKit.ISN_SKProduct::get_ProductIdentifier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ISN_SKProduct_get_ProductIdentifier_mFE9C6DB2EE1B305622269F2E8949ACEE1273A547_inline (ISN_SKProduct_tB70386270C96B57C2FB14E931332F98F0F186B15 * __this, const RuntimeMethod* method);
// System.Void SA.iOS.StoreKit.ISN_SKPaymentQueue::AddPayment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISN_SKPaymentQueue_AddPayment_m24804E1ABA6E929CE19ADB4138EF2127036FB100 (String_t* ___productId0, const RuntimeMethod* method);
// System.Void SA.iOS.Social.ISN_TextMessage/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m01478E0F30D2D103AE6E10E164B59207754351C1 (U3CU3Ec_t8918F2BDA86BE8B5D96447E240E938D792AB831C * __this, const RuntimeMethod* method);
// System.Void System.Action`1<SA.iOS.Social.ISN_MessageComposeResult>::Invoke(!0)
inline void Action_1_Invoke_m9F6378C783F6AC0EEF23F9F24A4EEB29AE73D820 (Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498 * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498 *, int32_t, const RuntimeMethod*))Action_1_Invoke_m2652E72792A278523D6D8962CBBEA84177BB4556_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<SA.iOS.Social.ISN_MessageComposeResult>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m48880B6DF302877F768269906EF27CF9980EDAC1 (Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m5A0949EFB73F1BDBEBE3CB814917A79FBF9B3DEA_gshared)(__this, ___object0, ___method1, method);
}
// System.Void SA.iOS.Utilities.ISN_Singleton`1<SA.iOS.Social.ISN_TextMessage/NativeListener>::.ctor()
inline void ISN_Singleton_1__ctor_m46E9870625A518B6682A4D39EF490D078FEF70A3 (ISN_Singleton_1_t49FEC97025D75E045CA2B1EF40E9DBD04AB1F8B6 * __this, const RuntimeMethod* method)
{
	((  void (*) (ISN_Singleton_1_t49FEC97025D75E045CA2B1EF40E9DBD04AB1F8B6 *, const RuntimeMethod*))ISN_Singleton_1__ctor_m4D564A6D613A27B2E2658145D7AF5D17A3B9B9C5_gshared)(__this, method);
}
// System.Void SA.iOS.Social.ISN_Twitter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m31908D4CB8A5A3730611887AE6986E4FD8096ADA (U3CU3Ec_tB612FA6C01CF59E9410CE34DE0BF9541025AEBEE * __this, const RuntimeMethod* method);
// System.Void SA.iOS.Utilities.ISN_Singleton`1<SA.iOS.Social.ISN_Twitter/NativeListener>::.ctor()
inline void ISN_Singleton_1__ctor_mD1375734B51A77ED086F6ED3F470035C98C99DE9 (ISN_Singleton_1_tAF891CCAF9214C8BFF2DDD4450764709A8F49569 * __this, const RuntimeMethod* method)
{
	((  void (*) (ISN_Singleton_1_tAF891CCAF9214C8BFF2DDD4450764709A8F49569 *, const RuntimeMethod*))ISN_Singleton_1__ctor_m4D564A6D613A27B2E2658145D7AF5D17A3B9B9C5_gshared)(__this, method);
}
// System.Void SA.iOS.UIKit.ISN_UIAlertUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m53EB5F83A7658E9869BC5EC2A45B4BBD037FB7CC (U3CU3Ec_tF7D107C15428F961368BCBD03604B0286EFE5F09 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.DateTime System.DateTime::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_Parse_m15F41E956747FC3E7EEBB24E45AA8733C1966989 (String_t* ___s0, const RuntimeMethod* method);
// System.Void System.Action`1<System.DateTime>::Invoke(!0)
inline void Action_1_Invoke_m168C30157817DF3E1710919C8C8ED31D9EEEF064 (Action_1_t2B33C6C2E077C8AA0861FADB5453D90C6F9A7B97 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2B33C6C2E077C8AA0861FADB5453D90C6F9A7B97 *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))Action_1_Invoke_m168C30157817DF3E1710919C8C8ED31D9EEEF064_gshared)(__this, ___obj0, method);
}
// System.Void SA.iOS.UIKit.ISN_UIImagePickerController::StartPresenting(System.Action`1<SA.iOS.UIKit.ISN_UIPickerControllerResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISN_UIImagePickerController_StartPresenting_m77671CC20CB0DB00B8679680B3D0F0FAEAEDAA0E (ISN_UIImagePickerController_t5E19A899C36CEF2E58829CCD7D4EF76DCCF8E03F * __this, Action_1_t33C7AA5928E86B6367AFDBF1055EB7751D2D699C * ___callback0, const RuntimeMethod* method);
// System.Void SA.iOS.UIKit.ISN_UIPickerControllerResult::.ctor(SA.Foundation.Templates.SA_Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISN_UIPickerControllerResult__ctor_m68E66EC229915EC656148BCE936B339877526A59 (ISN_UIPickerControllerResult_tCA7C312FBEFBE946A75BD9E9FBBDEB77F88679CC * __this, SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * ___error0, const RuntimeMethod* method);
// System.Void System.Action`1<SA.iOS.UIKit.ISN_UIPickerControllerResult>::Invoke(!0)
inline void Action_1_Invoke_mFF907E3593C3D4AD822B1F1BD5D30494CEA74412 (Action_1_t33C7AA5928E86B6367AFDBF1055EB7751D2D699C * __this, ISN_UIPickerControllerResult_tCA7C312FBEFBE946A75BD9E9FBBDEB77F88679CC * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t33C7AA5928E86B6367AFDBF1055EB7751D2D699C *, ISN_UIPickerControllerResult_tCA7C312FBEFBE946A75BD9E9FBBDEB77F88679CC *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void SA.iOS.Social.ISN_TextMessage/NativeListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m45F56A3FDCA57F31735506111FD66ACC29E4AE68 (U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SA.iOS.UserNotifications.ISN_UNUserNotificationCenterDelegate::ClearLastReceivedResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISN_UNUserNotificationCenterDelegate_ClearLastReceivedResponse_m438CB2F3249CC128258D736A2EE44A193CE5B936 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_iUNAPI_t04D4D0ADC3CE4D5F792817B48A1CE6DA095CAA2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ISN_UNLib.Api.ClearLastReceivedResponse();
		RuntimeObject* L_0;
		L_0 = ISN_UNLib_get_Api_m07ADB6FAB270C5846374B312222DE16FD4782D2B(/*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(12 /* System.Void SA.iOS.UserNotifications.ISN_iUNAPI::ClearLastReceivedResponse() */, ISN_iUNAPI_t04D4D0ADC3CE4D5F792817B48A1CE6DA095CAA2C_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// SA.Foundation.Events.SA_iEvent`1<SA.iOS.UserNotifications.ISN_UNNotification> SA.iOS.UserNotifications.ISN_UNUserNotificationCenterDelegate::get_WillPresentNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ISN_UNUserNotificationCenterDelegate_get_WillPresentNotification_m033ED7717DDFC03B82BD0E31CC9987E802B32A84 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_iUNAPI_t04D4D0ADC3CE4D5F792817B48A1CE6DA095CAA2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SA_iEvent<ISN_UNNotification> WillPresentNotification => ISN_UNLib.Api.WillPresentNotification;
		RuntimeObject* L_0;
		L_0 = ISN_UNLib_get_Api_m07ADB6FAB270C5846374B312222DE16FD4782D2B(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* SA.Foundation.Events.SA_iEvent`1<SA.iOS.UserNotifications.ISN_UNNotification> SA.iOS.UserNotifications.ISN_iUNAPI::get_WillPresentNotification() */, ISN_iUNAPI_t04D4D0ADC3CE4D5F792817B48A1CE6DA095CAA2C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// SA.Foundation.Events.SA_iEvent`1<SA.iOS.UserNotifications.ISN_UNNotificationResponse> SA.iOS.UserNotifications.ISN_UNUserNotificationCenterDelegate::get_DidReceiveNotificationResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ISN_UNUserNotificationCenterDelegate_get_DidReceiveNotificationResponse_mCFE29D03167DE55521639082503F2D575A863C1D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_iUNAPI_t04D4D0ADC3CE4D5F792817B48A1CE6DA095CAA2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SA_iEvent<ISN_UNNotificationResponse> DidReceiveNotificationResponse => ISN_UNLib.Api.DidReceiveNotificationResponse;
		RuntimeObject* L_0;
		L_0 = ISN_UNLib_get_Api_m07ADB6FAB270C5846374B312222DE16FD4782D2B(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* SA.Foundation.Events.SA_iEvent`1<SA.iOS.UserNotifications.ISN_UNNotificationResponse> SA.iOS.UserNotifications.ISN_iUNAPI::get_DidReceiveNotificationResponse() */, ISN_iUNAPI_t04D4D0ADC3CE4D5F792817B48A1CE6DA095CAA2C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// SA.iOS.UserNotifications.ISN_UNNotificationResponse SA.iOS.UserNotifications.ISN_UNUserNotificationCenterDelegate::get_LastReceivedResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ISN_UNNotificationResponse_t30FAF666EEE812D1513DABBFB08BFFD1582B80AC * ISN_UNUserNotificationCenterDelegate_get_LastReceivedResponse_m135AE3E8541E40EAA1AEFE95ADD4B3071FF864AC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_iUNAPI_t04D4D0ADC3CE4D5F792817B48A1CE6DA095CAA2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ISN_UNNotificationResponse LastReceivedResponse => ISN_UNLib.Api.LastReceivedResponse;
		RuntimeObject* L_0;
		L_0 = ISN_UNLib_get_Api_m07ADB6FAB270C5846374B312222DE16FD4782D2B(/*hidden argument*/NULL);
		NullCheck(L_0);
		ISN_UNNotificationResponse_t30FAF666EEE812D1513DABBFB08BFFD1582B80AC * L_1;
		L_1 = InterfaceFuncInvoker0< ISN_UNNotificationResponse_t30FAF666EEE812D1513DABBFB08BFFD1582B80AC * >::Invoke(2 /* SA.iOS.UserNotifications.ISN_UNNotificationResponse SA.iOS.UserNotifications.ISN_iUNAPI::get_LastReceivedResponse() */, ISN_iUNAPI_t04D4D0ADC3CE4D5F792817B48A1CE6DA095CAA2C_il2cpp_TypeInfo_var, L_0);
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
// System.Void SA.iOS.Social.ISN_Whatsapp::Post(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISN_Whatsapp_Post_m0106C12E32EEA166A1380D8F082464C49672F4DF (String_t* ___message0, const RuntimeMethod* method)
{
	{
		// Internal.ISN_WP_ShareText(message);
		String_t* L_0 = ___message0;
		Internal_ISN_WP_ShareText_mA33D34BD1083D11C0269715A7BC5FBE47842D606(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SA.iOS.Social.ISN_Whatsapp::Post(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISN_Whatsapp_Post_m432FA0995C36142C317C5E53AA34FC449378AA07 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___image0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// var val = image.EncodeToPNG();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___image0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var encodedMedia = Convert.ToBase64String(val);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Convert_ToBase64String_mE6E1FE504EF1E99DB2F8B92180A82A5F1512EF6A(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// Internal.ISN_WP_ShareMedia(encodedMedia);
		String_t* L_4 = V_1;
		Internal_ISN_WP_ShareMedia_m34C819A7CEFF6F42A94B84E7BA8001C2C8648366(L_4, /*hidden argument*/NULL);
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
// System.Void SA.iOS.AuthenticationServices.ISN_ASAuthorizationController/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD1C06868664BC8E334B4966A2195EC2935058942 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA660AB806A590C5359CA1B2CA66002F25A18A5D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA660AB806A590C5359CA1B2CA66002F25A18A5D8 * L_0 = (U3CU3Ec_tA660AB806A590C5359CA1B2CA66002F25A18A5D8 *)il2cpp_codegen_object_new(U3CU3Ec_tA660AB806A590C5359CA1B2CA66002F25A18A5D8_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0AE3F178E49928B95C3C20C8AE52AE72CCBC9A3D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tA660AB806A590C5359CA1B2CA66002F25A18A5D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA660AB806A590C5359CA1B2CA66002F25A18A5D8_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void SA.iOS.AuthenticationServices.ISN_ASAuthorizationController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0AE3F178E49928B95C3C20C8AE52AE72CCBC9A3D (U3CU3Ec_tA660AB806A590C5359CA1B2CA66002F25A18A5D8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String SA.iOS.AuthenticationServices.ISN_ASAuthorizationController/<>c::<.ctor>b__0_0(SA.iOS.AuthenticationServices.ISN_ASAuthorizationRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3C_ctorU3Eb__0_0_m8C71FE020D91BB9C92E3EEE24E68D31E12F5F116 (U3CU3Ec_tA660AB806A590C5359CA1B2CA66002F25A18A5D8 * __this, ISN_ASAuthorizationRequest_tAEE1757BCE033CB0C41F1CA0355AB7616B12CD79 * ___request0, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		// .Select(request => request.NativeHashCode.ToString()).ToArray());
		ISN_ASAuthorizationRequest_tAEE1757BCE033CB0C41F1CA0355AB7616B12CD79 * L_0 = ___request0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = ISN_NativeObject_get_NativeHashCode_m9EE78535A1146ABB3437B476B0E9C13460337D9F_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = UInt64_ToString_m3644686F0A0E32CB94D300CF891DBD7920396F37((uint64_t*)(&V_0), /*hidden argument*/NULL);
		return L_2;
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
// System.Void SA.iOS.AuthenticationServices.ISN_ASAuthorizationOpenIDRequest/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAC629D53C2A571737C0CBD2FF296507A96FC91E5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA5F88AFDE3B0CEB4F2DC371311B5EBE0C801888B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA5F88AFDE3B0CEB4F2DC371311B5EBE0C801888B * L_0 = (U3CU3Ec_tA5F88AFDE3B0CEB4F2DC371311B5EBE0C801888B *)il2cpp_codegen_object_new(U3CU3Ec_tA5F88AFDE3B0CEB4F2DC371311B5EBE0C801888B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3B668675AAD936440DCC1B8F6279ABC8BBB888BF(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tA5F88AFDE3B0CEB4F2DC371311B5EBE0C801888B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA5F88AFDE3B0CEB4F2DC371311B5EBE0C801888B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void SA.iOS.AuthenticationServices.ISN_ASAuthorizationOpenIDRequest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3B668675AAD936440DCC1B8F6279ABC8BBB888BF (U3CU3Ec_tA5F88AFDE3B0CEB4F2DC371311B5EBE0C801888B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String SA.iOS.AuthenticationServices.ISN_ASAuthorizationOpenIDRequest/<>c::<SetRequestedScopes>b__1_0(SA.iOS.AuthenticationServices.ISN_ASAuthorizationScope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CSetRequestedScopesU3Eb__1_0_m3695EE4318A84AC1D0ACE93BCE70ED560DDFD73F (U3CU3Ec_tA5F88AFDE3B0CEB4F2DC371311B5EBE0C801888B * __this, int32_t ___scope0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_ASAuthorizationScope_t9D27F8F9DD2FA4CEAE6D9374BCA53FFF50B5D27B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var scopesString = string.Join(",", scopes.Select(scope => scope.ToString()).ToArray());
		RuntimeObject * L_0 = Box(ISN_ASAuthorizationScope_t9D27F8F9DD2FA4CEAE6D9374BCA53FFF50B5D27B_il2cpp_TypeInfo_var, (&___scope0));
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___scope0 = *(int32_t*)UnBox(L_0);
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
// System.Void SA.iOS.Contacts.Internal.ISN_CNEditorAPI/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mEC2AA8BFC8CC74FA087391D7F2A81E6795E8CC63 (U3CU3Ec__DisplayClass0_0_t603E6ED61B252428003CDA6E77955FB6FB384CF4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.Contacts.Internal.ISN_CNEditorAPI/<>c__DisplayClass0_0::<RetrievePhoneContacts>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CRetrievePhoneContactsU3Eb__0_m9AE5D607ECE36DEBEE10FEAECD56EEFCCDBE0FF8 (U3CU3Ec__DisplayClass0_0_t603E6ED61B252428003CDA6E77955FB6FB384CF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m973FFEC4ABCA3B472E04CEB5D23F6127664A1015_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// callback.Invoke(CreateFakeResult());
		Action_1_t93AFA1AE027C78386A3DAF5B255C378893B62690 * L_0 = __this->get_callback_0();
		ISN_CNEditorAPI_t2397B4C523B9DEB554661F0D17CD308FF7A46AB8 * L_1 = __this->get_U3CU3E4__this_1();
		NullCheck(L_1);
		ISN_CNContactsResult_tABC68FBC091A4AB69DC9872B9FC49390246A6E7D * L_2;
		L_2 = ISN_CNEditorAPI_CreateFakeResult_mD7DE84C463FFAFEAE4A9359EDC606A95533396FF(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Action_1_Invoke_m973FFEC4ABCA3B472E04CEB5D23F6127664A1015(L_0, L_2, /*hidden argument*/Action_1_Invoke_m973FFEC4ABCA3B472E04CEB5D23F6127664A1015_RuntimeMethod_var);
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
// System.Void SA.iOS.Contacts.Internal.ISN_CNEditorAPI/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m35ED577423BD6DEDD3087E4D9899DC77B39F1BF7 (U3CU3Ec__DisplayClass1_0_tF085503B8696BCC6BC20EF9B653B5FF4FD2D3C20 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.Contacts.Internal.ISN_CNEditorAPI/<>c__DisplayClass1_0::<ShowContactsPicker>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CShowContactsPickerU3Eb__0_m2983E5C7EA4C20F966BD8905705B5DE54AC8637B (U3CU3Ec__DisplayClass1_0_tF085503B8696BCC6BC20EF9B653B5FF4FD2D3C20 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m973FFEC4ABCA3B472E04CEB5D23F6127664A1015_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// callback.Invoke(CreateFakeResult());
		Action_1_t93AFA1AE027C78386A3DAF5B255C378893B62690 * L_0 = __this->get_callback_0();
		ISN_CNEditorAPI_t2397B4C523B9DEB554661F0D17CD308FF7A46AB8 * L_1 = __this->get_U3CU3E4__this_1();
		NullCheck(L_1);
		ISN_CNContactsResult_tABC68FBC091A4AB69DC9872B9FC49390246A6E7D * L_2;
		L_2 = ISN_CNEditorAPI_CreateFakeResult_mD7DE84C463FFAFEAE4A9359EDC606A95533396FF(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Action_1_Invoke_m973FFEC4ABCA3B472E04CEB5D23F6127664A1015(L_0, L_2, /*hidden argument*/Action_1_Invoke_m973FFEC4ABCA3B472E04CEB5D23F6127664A1015_RuntimeMethod_var);
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
// System.Void SA.iOS.Contacts.Internal.ISN_CNEditorAPI/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m56F7DCEBA2B80A75F419CB38340AACA2D1F87B7D (U3CU3Ec__DisplayClass4_0_t1CA38D17431AEF9E4C50E112948192EDD123CA92 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.Contacts.Internal.ISN_CNEditorAPI/<>c__DisplayClass4_0::<RequestAccess>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CRequestAccessU3Eb__0_mFEF34F2D8DF0D5EE3806823A378EDEA99910CD67 (U3CU3Ec__DisplayClass4_0_t1CA38D17431AEF9E4C50E112948192EDD123CA92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// callback.Invoke(new SA_Result());
		Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * L_0 = __this->get_callback_0();
		SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * L_1 = (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE *)il2cpp_codegen_object_new(SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE_il2cpp_TypeInfo_var);
		SA_Result__ctor_mA8937F170D05BBA24B5C59BB5BBB4DBCFA69D629(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764(L_0, L_1, /*hidden argument*/Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
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
// System.Void SA.iOS.UIKit.ISN_DialogsStack/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mBA16ED3B4BA078E3D899397423EFBF25CA1F1210 (U3CU3Ec__DisplayClass2_0_t80B916A319B2A4EA519FB0A85408348F53C3F183 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.UIKit.ISN_DialogsStack/<>c__DisplayClass2_0::<ShowDialog>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CShowDialogU3Eb__0_mE9969ECEA01B0DE4D1635A910A77BA0B6C7A477C (U3CU3Ec__DisplayClass2_0_t80B916A319B2A4EA519FB0A85408348F53C3F183 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_DialogsStack_t62CEBBC002BA51C893161BA9017D574E277464D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dialog.OnDialogDismissed.AddListener(() => { OnDialogDismissed(dialog); });
		ISN_UIAlertController_t7E492DF004875CDD24E30821D1BE5CF460BE5B0F * L_0 = __this->get_dialog_0();
		IL2CPP_RUNTIME_CLASS_INIT(ISN_DialogsStack_t62CEBBC002BA51C893161BA9017D574E277464D6_il2cpp_TypeInfo_var);
		ISN_DialogsStack_OnDialogDismissed_m9F67BE1E1F98FE2B5671B0516B9B1AB20CBFB22D(L_0, /*hidden argument*/NULL);
		// dialog.OnDialogDismissed.AddListener(() => { OnDialogDismissed(dialog); });
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
// System.Void SA.iOS.Social.ISN_Facebook/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF21CBB5F7BFF62DD644193E36E63006EC8B28BCF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t991E7432CD9C5E03D22ABA90B56CEDC6F92754B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t991E7432CD9C5E03D22ABA90B56CEDC6F92754B6 * L_0 = (U3CU3Ec_t991E7432CD9C5E03D22ABA90B56CEDC6F92754B6 *)il2cpp_codegen_object_new(U3CU3Ec_t991E7432CD9C5E03D22ABA90B56CEDC6F92754B6_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m56E557D489CEB20F49564C09F41D230EB1709545(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t991E7432CD9C5E03D22ABA90B56CEDC6F92754B6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t991E7432CD9C5E03D22ABA90B56CEDC6F92754B6_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void SA.iOS.Social.ISN_Facebook/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m56E557D489CEB20F49564C09F41D230EB1709545 (U3CU3Ec_t991E7432CD9C5E03D22ABA90B56CEDC6F92754B6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.Social.ISN_Facebook/<>c::<.cctor>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__6_0_m0C5C6FCBC4CA91E3353DFEB76DB8C7340AC50841 (U3CU3Ec_t991E7432CD9C5E03D22ABA90B56CEDC6F92754B6 * __this, const RuntimeMethod* method)
{
	{
		// public static event Action OnPostStart = delegate { };
		return;
	}
}
// System.Void SA.iOS.Social.ISN_Facebook/<>c::<.cctor>b__6_1(SA.Foundation.Templates.SA_Result)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__6_1_mD1722F55A262E8BF60040ED20BD5174203160046 (U3CU3Ec_t991E7432CD9C5E03D22ABA90B56CEDC6F92754B6 * __this, SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public static event Action<SA_Result> OnPostResult = delegate { };
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
// System.Void SA.iOS.Social.ISN_Facebook/Internal::ISN_FbPost(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_ISN_FbPost_m8DD84C1133BC5F7374F02F534DB89DF4638AD2E0 (String_t* ___text0, String_t* ___url1, String_t* ___encodedMedia2, const RuntimeMethod* method)
{
	{
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
// System.Void SA.iOS.Social.ISN_Facebook/NativeListener::OnFacebookPostFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeListener_OnFacebookPostFailed_mD3AB71B5F6B9F6D28E58F11551B894AC8DB4AA1D (NativeListener_t98737FF9BE7B87DF62EF58AE265C1B169902E682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_Facebook_tCD136BCA11DD7D280FBBA62D9A4CE22C4EB38D9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81705C352B1918412D3A5BA7D8B7F97F3EACBC11);
		s_Il2CppMethodInitialized = true;
	}
	SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * V_0 = NULL;
	{
		// var result = new SA_Result(new SA_Error(0, "Unknown Error"));
		SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * L_0 = (SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 *)il2cpp_codegen_object_new(SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1_il2cpp_TypeInfo_var);
		SA_Error__ctor_m631E82E9A0A7BCB5753C838CBEB2A6812131BA52(L_0, 0, _stringLiteral81705C352B1918412D3A5BA7D8B7F97F3EACBC11, /*hidden argument*/NULL);
		SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * L_1 = (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE *)il2cpp_codegen_object_new(SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE_il2cpp_TypeInfo_var);
		SA_Result__ctor_m4B0C6547881AC2426679E50B73F2CFFA45D1D1D3(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// OnPostResult(result);
		IL2CPP_RUNTIME_CLASS_INIT(ISN_Facebook_tCD136BCA11DD7D280FBBA62D9A4CE22C4EB38D9F_il2cpp_TypeInfo_var);
		Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * L_2 = ((ISN_Facebook_tCD136BCA11DD7D280FBBA62D9A4CE22C4EB38D9F_StaticFields*)il2cpp_codegen_static_fields_for(ISN_Facebook_tCD136BCA11DD7D280FBBA62D9A4CE22C4EB38D9F_il2cpp_TypeInfo_var))->get_OnPostResult_1();
		SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * L_3 = V_0;
		NullCheck(L_2);
		Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764(L_2, L_3, /*hidden argument*/Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SA.iOS.Social.ISN_Facebook/NativeListener::OnFacebookPostSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeListener_OnFacebookPostSuccess_mDB45B09837243FE0A635A619B5AAFA434B2103D4 (NativeListener_t98737FF9BE7B87DF62EF58AE265C1B169902E682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_Facebook_tCD136BCA11DD7D280FBBA62D9A4CE22C4EB38D9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * V_0 = NULL;
	{
		// var result = new SA_Result();
		SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * L_0 = (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE *)il2cpp_codegen_object_new(SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE_il2cpp_TypeInfo_var);
		SA_Result__ctor_mA8937F170D05BBA24B5C59BB5BBB4DBCFA69D629(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// OnPostResult(result);
		IL2CPP_RUNTIME_CLASS_INIT(ISN_Facebook_tCD136BCA11DD7D280FBBA62D9A4CE22C4EB38D9F_il2cpp_TypeInfo_var);
		Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * L_1 = ((ISN_Facebook_tCD136BCA11DD7D280FBBA62D9A4CE22C4EB38D9F_StaticFields*)il2cpp_codegen_static_fields_for(ISN_Facebook_tCD136BCA11DD7D280FBBA62D9A4CE22C4EB38D9F_il2cpp_TypeInfo_var))->get_OnPostResult_1();
		SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * L_2 = V_0;
		NullCheck(L_1);
		Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764(L_1, L_2, /*hidden argument*/Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SA.iOS.Social.ISN_Facebook/NativeListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeListener__ctor_m2716B35218C1D3643F63975D131EA4CF417F384D (NativeListener_t98737FF9BE7B87DF62EF58AE265C1B169902E682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_Singleton_1__ctor_mCF161A82B2F5FEE3389B73E7D9CBC02F5C4A1765_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ISN_Singleton_1__ctor_mCF161A82B2F5FEE3389B73E7D9CBC02F5C4A1765(__this, /*hidden argument*/ISN_Singleton_1__ctor_mCF161A82B2F5FEE3389B73E7D9CBC02F5C4A1765_RuntimeMethod_var);
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
// System.Void SA.iOS.GameKit.ISN_GKGameCenterViewController/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m59ED52C55B60FDBBC8F76D42D2C38A54E8B8188F (U3CU3Ec__DisplayClass3_0_t8DFCCB93EAA393FDB4B787B5D29A0E62402DF3B2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.GameKit.ISN_GKGameCenterViewController/<>c__DisplayClass3_0::<Show>b__0(SA.Foundation.Templates.SA_Result)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CShowU3Eb__0_mF145F1BE3EAFC0C6D6BB8BA171AF37AB1909AAA8 (U3CU3Ec__DisplayClass3_0_t8DFCCB93EAA393FDB4B787B5D29A0E62402DF3B2 * __this, SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * ___result0, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// callback?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_callback_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
	}

IL_0013:
	{
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
// System.Void SA.iOS.GameKit.ISN_GKLeaderboard/<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_mEC1AC4EA1F52388339CE738220E67245BE4B3446 (U3CU3Ec__DisplayClass36_0_tF2C7AD25CB12CD7598AE205D4CDE8C5E582FA7BE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.GameKit.ISN_GKLeaderboard/<>c__DisplayClass36_0::<LoadScores>b__0(SA.iOS.GameKit.ISN_GKScoreLoadResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0_U3CLoadScoresU3Eb__0_m66E9D59D49EDFB5C0ACED834116D21B83EE3E1C8 (U3CU3Ec__DisplayClass36_0_tF2C7AD25CB12CD7598AE205D4CDE8C5E582FA7BE * __this, ISN_GKScoreLoadResult_t57A8A5AEDF4143C5599DB1B6314E795F42AC5B13 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m88465E33E49A8CA9DAE3AFF1AEB503200BF0903A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (result.IsSucceeded)
		ISN_GKScoreLoadResult_t57A8A5AEDF4143C5599DB1B6314E795F42AC5B13 * L_0 = ___result0;
		NullCheck(L_0);
		bool L_1;
		L_1 = SA_Result_get_IsSucceeded_mCF559D14CD5C81FBC5C071C3F5F93A99188CAEFA(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004f;
		}
	}
	{
		// m_MaxRange = result.Leaderboard.MaxRange;
		ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 * L_3 = __this->get_U3CU3E4__this_0();
		ISN_GKScoreLoadResult_t57A8A5AEDF4143C5599DB1B6314E795F42AC5B13 * L_4 = ___result0;
		NullCheck(L_4);
		ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 * L_5;
		L_5 = ISN_GKScoreLoadResult_get_Leaderboard_m4808F3CA2359C9DBEC0D66E4735ABAFD525F6ADF_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int64_t L_6;
		L_6 = ISN_GKLeaderboard_get_MaxRange_m952301F52DE7B1306E8CCA8E90E22F05B96BC431_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_m_MaxRange_6(L_6);
		// m_LocalPlayerScore = result.Leaderboard.LocalPlayerScore;
		ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 * L_7 = __this->get_U3CU3E4__this_0();
		ISN_GKScoreLoadResult_t57A8A5AEDF4143C5599DB1B6314E795F42AC5B13 * L_8 = ___result0;
		NullCheck(L_8);
		ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 * L_9;
		L_9 = ISN_GKScoreLoadResult_get_Leaderboard_m4808F3CA2359C9DBEC0D66E4735ABAFD525F6ADF_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		ISN_GKScore_t61C79EFDE5BD5A770466331E28E6C7D520F08139 * L_10;
		L_10 = ISN_GKLeaderboard_get_LocalPlayerScore_m1C24BB9087C445EB9026820C42DE86CFA39B2836_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->set_m_LocalPlayerScore_8(L_10);
		// m_Scores = result.Leaderboard.Scores;
		ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 * L_11 = __this->get_U3CU3E4__this_0();
		ISN_GKScoreLoadResult_t57A8A5AEDF4143C5599DB1B6314E795F42AC5B13 * L_12 = ___result0;
		NullCheck(L_12);
		ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 * L_13;
		L_13 = ISN_GKScoreLoadResult_get_Leaderboard_m4808F3CA2359C9DBEC0D66E4735ABAFD525F6ADF_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_t08BB076155DD422337809CD51D7A12C5C78F05BC * L_14;
		L_14 = ISN_GKLeaderboard_get_Scores_m7540DA208D58D6C205376E69DFD817C9862C47D9_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->set_m_Scores_7(L_14);
	}

IL_004f:
	{
		// m_Loading = false;
		ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 * L_15 = __this->get_U3CU3E4__this_0();
		NullCheck(L_15);
		L_15->set_m_Loading_9((bool)0);
		// callback.Invoke(result);
		Action_1_tF3DE25E536BCA9529D0526BD696C217D9BDE1941 * L_16 = __this->get_callback_1();
		ISN_GKScoreLoadResult_t57A8A5AEDF4143C5599DB1B6314E795F42AC5B13 * L_17 = ___result0;
		NullCheck(L_16);
		Action_1_Invoke_m88465E33E49A8CA9DAE3AFF1AEB503200BF0903A(L_16, L_17, /*hidden argument*/Action_1_Invoke_m88465E33E49A8CA9DAE3AFF1AEB503200BF0903A_RuntimeMethod_var);
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
// System.Void SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m265AF1D658ACA6D229856ABF012E11C48895D504 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * L_0 = (U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 *)il2cpp_codegen_object_new(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m33C8B344EF659F53F375D67127BCB801872A3436(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m33C8B344EF659F53F375D67127BCB801872A3436 (U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<SetAuthenticateHandler>b__21_0(SA.Foundation.Templates.SA_Result)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSetAuthenticateHandlerU3Eb__21_0_m9B16E3B3CAD786E6BC90DD3D0A019E7DD58BA919 (U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * __this, SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnAuthenticateLocalPlayerComplete.Invoke(result);
		IL2CPP_RUNTIME_CLASS_INIT(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var);
		Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * L_0 = ((ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_StaticFields*)il2cpp_codegen_static_fields_for(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var))->get_OnAuthenticateLocalPlayerComplete_2();
		SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * L_1 = ___result0;
		NullCheck(L_0);
		Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764(L_0, L_1, /*hidden argument*/Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
		// });
		return;
	}
}
// System.Void SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<FetchSavedGames>b__30_0(SA.iOS.GameKit.ISN_GKSavedGameFetchResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CFetchSavedGamesU3Eb__30_0_mED920C22D269778CB1A5F23C5A2809C581D5BC9A (U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * __this, ISN_GKSavedGameFetchResult_t429317C838E84AD0264669DC43F5C4C5D23EE715 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mDC5E3F9883943DC4E9A8443A068DA6F3B9CD49BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m889D1F87AF98386E956F8E88C7CDB011188F5FAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFetchSavedGamesU3Eb__30_1_m29BA0C960A4A7BFAF5961E1AFA2910CDB879790C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * G_B2_0 = NULL;
	Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * G_B1_0 = NULL;
	{
		// s_IsFetchSavedGamesInProgress = false;
		IL2CPP_RUNTIME_CLASS_INIT(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var);
		((ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_StaticFields*)il2cpp_codegen_static_fields_for(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var))->set_s_IsFetchSavedGamesInProgress_9((bool)0);
		// OnFetchSavedGamesComplete.Invoke(result);
		Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * L_0 = ((ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_StaticFields*)il2cpp_codegen_static_fields_for(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var))->get_OnFetchSavedGamesComplete_4();
		ISN_GKSavedGameFetchResult_t429317C838E84AD0264669DC43F5C4C5D23EE715 * L_1 = ___result0;
		NullCheck(L_0);
		Action_1_Invoke_mDC5E3F9883943DC4E9A8443A068DA6F3B9CD49BD(L_0, L_1, /*hidden argument*/Action_1_Invoke_mDC5E3F9883943DC4E9A8443A068DA6F3B9CD49BD_RuntimeMethod_var);
		// OnFetchSavedGamesComplete = delegate { };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var);
		Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * L_2 = ((U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var))->get_U3CU3E9__30_1_2();
		Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0032;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var);
		U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * L_4 = ((U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * L_5 = (Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 *)il2cpp_codegen_object_new(Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741_il2cpp_TypeInfo_var);
		Action_1__ctor_m889D1F87AF98386E956F8E88C7CDB011188F5FAA(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CFetchSavedGamesU3Eb__30_1_m29BA0C960A4A7BFAF5961E1AFA2910CDB879790C_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m889D1F87AF98386E956F8E88C7CDB011188F5FAA_RuntimeMethod_var);
		Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * L_6 = L_5;
		((U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var))->set_U3CU3E9__30_1_2(L_6);
		G_B2_0 = L_6;
	}

IL_0032:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var);
		((ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_StaticFields*)il2cpp_codegen_static_fields_for(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var))->set_OnFetchSavedGamesComplete_4(G_B2_0);
		// });
		return;
	}
}
// System.Void SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<FetchSavedGames>b__30_1(SA.iOS.GameKit.ISN_GKSavedGameFetchResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CFetchSavedGamesU3Eb__30_1_m29BA0C960A4A7BFAF5961E1AFA2910CDB879790C (U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * __this, ISN_GKSavedGameFetchResult_t429317C838E84AD0264669DC43F5C4C5D23EE715 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// OnFetchSavedGamesComplete = delegate { };
		return;
	}
}
// System.Void SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<SavedGame>b__31_0(SA.iOS.GameKit.ISN_GKSavedGameSaveResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSavedGameU3Eb__31_0_mBA8EDD6FDC2F9A1F581AB9CC3E470AD22B0A7259 (U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * __this, ISN_GKSavedGameSaveResult_t79F7828795EB6CA14EE02D198BF136038F40F319 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m9F479A261371548B5118A48139644FF4DEA6B350_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m8B31B3592A076C43438A9CFB48BF1E686FD71FBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSavedGameU3Eb__31_1_m904647495E7CDE611BB7AE189BB0CE5896ECA8E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 * G_B2_0 = NULL;
	Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 * G_B1_0 = NULL;
	{
		// OnSavedGameComplete.Invoke(result);
		IL2CPP_RUNTIME_CLASS_INIT(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var);
		Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 * L_0 = ((ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_StaticFields*)il2cpp_codegen_static_fields_for(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var))->get_OnSavedGameComplete_5();
		ISN_GKSavedGameSaveResult_t79F7828795EB6CA14EE02D198BF136038F40F319 * L_1 = ___result0;
		NullCheck(L_0);
		Action_1_Invoke_m9F479A261371548B5118A48139644FF4DEA6B350(L_0, L_1, /*hidden argument*/Action_1_Invoke_m9F479A261371548B5118A48139644FF4DEA6B350_RuntimeMethod_var);
		// OnSavedGameComplete = delegate { };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var);
		Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 * L_2 = ((U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var))->get_U3CU3E9__31_1_4();
		Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 * L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var);
		U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * L_4 = ((U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 * L_5 = (Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 *)il2cpp_codegen_object_new(Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33_il2cpp_TypeInfo_var);
		Action_1__ctor_m8B31B3592A076C43438A9CFB48BF1E686FD71FBD(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CSavedGameU3Eb__31_1_m904647495E7CDE611BB7AE189BB0CE5896ECA8E6_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8B31B3592A076C43438A9CFB48BF1E686FD71FBD_RuntimeMethod_var);
		Action_1_t7A41A7281087E5CB7E1A651346EF21397FB48F33 * L_6 = L_5;
		((U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var))->set_U3CU3E9__31_1_4(L_6);
		G_B2_0 = L_6;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var);
		((ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_StaticFields*)il2cpp_codegen_static_fields_for(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var))->set_OnSavedGameComplete_5(G_B2_0);
		// });
		return;
	}
}
// System.Void SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<SavedGame>b__31_1(SA.iOS.GameKit.ISN_GKSavedGameSaveResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSavedGameU3Eb__31_1_m904647495E7CDE611BB7AE189BB0CE5896ECA8E6 (U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * __this, ISN_GKSavedGameSaveResult_t79F7828795EB6CA14EE02D198BF136038F40F319 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// OnSavedGameComplete = delegate { };
		return;
	}
}
// System.Void SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<DeleteSavedGame>b__32_0(SA.Foundation.Templates.SA_Result)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CDeleteSavedGameU3Eb__32_0_m77F0870A4AD09245F8D836486B94DB5CC085EEBE (U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * __this, SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mD426C1BAD069EC21073F6473399CB74532DBFE75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CDeleteSavedGameU3Eb__32_1_m07A720E8261003C05E4CC232F815A79E0407F369_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * G_B2_0 = NULL;
	Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * G_B1_0 = NULL;
	{
		// OnDeleteSavedGameComplete.Invoke(result);
		IL2CPP_RUNTIME_CLASS_INIT(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var);
		Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * L_0 = ((ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_StaticFields*)il2cpp_codegen_static_fields_for(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var))->get_OnDeleteSavedGameComplete_3();
		SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * L_1 = ___result0;
		NullCheck(L_0);
		Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764(L_0, L_1, /*hidden argument*/Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
		// OnDeleteSavedGameComplete = delegate { };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var);
		Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * L_2 = ((U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var))->get_U3CU3E9__32_1_6();
		Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var);
		U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * L_4 = ((U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * L_5 = (Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 *)il2cpp_codegen_object_new(Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20_il2cpp_TypeInfo_var);
		Action_1__ctor_mD426C1BAD069EC21073F6473399CB74532DBFE75(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CDeleteSavedGameU3Eb__32_1_m07A720E8261003C05E4CC232F815A79E0407F369_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mD426C1BAD069EC21073F6473399CB74532DBFE75_RuntimeMethod_var);
		Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * L_6 = L_5;
		((U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var))->set_U3CU3E9__32_1_6(L_6);
		G_B2_0 = L_6;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var);
		((ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_StaticFields*)il2cpp_codegen_static_fields_for(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var))->set_OnDeleteSavedGameComplete_3(G_B2_0);
		// });
		return;
	}
}
// System.Void SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<DeleteSavedGame>b__32_1(SA.Foundation.Templates.SA_Result)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CDeleteSavedGameU3Eb__32_1_m07A720E8261003C05E4CC232F815A79E0407F369 (U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * __this, SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// OnDeleteSavedGameComplete = delegate { };
		return;
	}
}
// System.Void SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<LoadGameData>b__33_0(SA.iOS.GameKit.ISN_GKSavedGameLoadResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CLoadGameDataU3Eb__33_0_mEEB4A41F127015B13B8A7AB0366A524B6FFD7CB3 (U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * __this, ISN_GKSavedGameLoadResult_t01255EF9BF3D93463A616431A95EEF5BEC728C52 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6873CF478F7A8574B4AE415288788904629411EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m7A92B13F4266F93847CEE64DCA2BF57416DB1815_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CLoadGameDataU3Eb__33_1_m4D7782EEAE2CB182093D9EFB75E20E5BB31ACAC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 * G_B2_0 = NULL;
	Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 * G_B1_0 = NULL;
	{
		// OnLoadGameDataComplete.Invoke(result);
		IL2CPP_RUNTIME_CLASS_INIT(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var);
		Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 * L_0 = ((ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_StaticFields*)il2cpp_codegen_static_fields_for(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var))->get_OnLoadGameDataComplete_6();
		ISN_GKSavedGameLoadResult_t01255EF9BF3D93463A616431A95EEF5BEC728C52 * L_1 = ___result0;
		NullCheck(L_0);
		Action_1_Invoke_m6873CF478F7A8574B4AE415288788904629411EE(L_0, L_1, /*hidden argument*/Action_1_Invoke_m6873CF478F7A8574B4AE415288788904629411EE_RuntimeMethod_var);
		// OnLoadGameDataComplete = delegate { };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var);
		Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 * L_2 = ((U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var))->get_U3CU3E9__33_1_8();
		Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 * L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var);
		U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * L_4 = ((U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 * L_5 = (Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 *)il2cpp_codegen_object_new(Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4_il2cpp_TypeInfo_var);
		Action_1__ctor_m7A92B13F4266F93847CEE64DCA2BF57416DB1815(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CLoadGameDataU3Eb__33_1_m4D7782EEAE2CB182093D9EFB75E20E5BB31ACAC1_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m7A92B13F4266F93847CEE64DCA2BF57416DB1815_RuntimeMethod_var);
		Action_1_t4738CBDB65408E3B7D5C8F6F225A0CA721F001E4 * L_6 = L_5;
		((U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var))->set_U3CU3E9__33_1_8(L_6);
		G_B2_0 = L_6;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var);
		((ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_StaticFields*)il2cpp_codegen_static_fields_for(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var))->set_OnLoadGameDataComplete_6(G_B2_0);
		// });
		return;
	}
}
// System.Void SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<LoadGameData>b__33_1(SA.iOS.GameKit.ISN_GKSavedGameLoadResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CLoadGameDataU3Eb__33_1_m4D7782EEAE2CB182093D9EFB75E20E5BB31ACAC1 (U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * __this, ISN_GKSavedGameLoadResult_t01255EF9BF3D93463A616431A95EEF5BEC728C52 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// OnLoadGameDataComplete = delegate { };
		return;
	}
}
// System.Void SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<ResolveConflictingSavedGames>b__34_0(SA.iOS.GameKit.ISN_GKSavedGameFetchResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CResolveConflictingSavedGamesU3Eb__34_0_m3E88828906F3B22EF6E86DF46318AF8C91C00435 (U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * __this, ISN_GKSavedGameFetchResult_t429317C838E84AD0264669DC43F5C4C5D23EE715 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mDC5E3F9883943DC4E9A8443A068DA6F3B9CD49BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m889D1F87AF98386E956F8E88C7CDB011188F5FAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CResolveConflictingSavedGamesU3Eb__34_1_m6FB6B2385A03593DEFC3C1C738E2942D7F2B8460_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * G_B2_0 = NULL;
	Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * G_B1_0 = NULL;
	{
		// OnResolveSavedGamesComplete.Invoke(result);
		IL2CPP_RUNTIME_CLASS_INIT(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var);
		Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * L_0 = ((ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_StaticFields*)il2cpp_codegen_static_fields_for(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var))->get_OnResolveSavedGamesComplete_7();
		ISN_GKSavedGameFetchResult_t429317C838E84AD0264669DC43F5C4C5D23EE715 * L_1 = ___result0;
		NullCheck(L_0);
		Action_1_Invoke_mDC5E3F9883943DC4E9A8443A068DA6F3B9CD49BD(L_0, L_1, /*hidden argument*/Action_1_Invoke_mDC5E3F9883943DC4E9A8443A068DA6F3B9CD49BD_RuntimeMethod_var);
		// OnResolveSavedGamesComplete = delegate { };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var);
		Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * L_2 = ((U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var))->get_U3CU3E9__34_1_10();
		Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var);
		U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * L_4 = ((U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * L_5 = (Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 *)il2cpp_codegen_object_new(Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741_il2cpp_TypeInfo_var);
		Action_1__ctor_m889D1F87AF98386E956F8E88C7CDB011188F5FAA(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CResolveConflictingSavedGamesU3Eb__34_1_m6FB6B2385A03593DEFC3C1C738E2942D7F2B8460_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m889D1F87AF98386E956F8E88C7CDB011188F5FAA_RuntimeMethod_var);
		Action_1_tB1486C5C02CB964A21B196E51D530CA151AC0741 * L_6 = L_5;
		((U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604_il2cpp_TypeInfo_var))->set_U3CU3E9__34_1_10(L_6);
		G_B2_0 = L_6;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var);
		((ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_StaticFields*)il2cpp_codegen_static_fields_for(ISN_GKLocalPlayer_tEF250C4F23D81BEDD5465E0C71B71A2B7096D625_il2cpp_TypeInfo_var))->set_OnResolveSavedGamesComplete_7(G_B2_0);
		// });
		return;
	}
}
// System.Void SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<ResolveConflictingSavedGames>b__34_1(SA.iOS.GameKit.ISN_GKSavedGameFetchResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CResolveConflictingSavedGamesU3Eb__34_1_m6FB6B2385A03593DEFC3C1C738E2942D7F2B8460 (U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * __this, ISN_GKSavedGameFetchResult_t429317C838E84AD0264669DC43F5C4C5D23EE715 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// OnResolveSavedGamesComplete = delegate { };
		return;
	}
}
// System.Void SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<.cctor>b__37_0(SA.Foundation.Templates.SA_Result)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__37_0_m7F561BB86FBEAF030E8EDE8FF2D076A2A59AC275 (U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * __this, SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// static event Action<SA_Result> OnAuthenticateLocalPlayerComplete = delegate { };
		return;
	}
}
// System.Void SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<.cctor>b__37_1(SA.Foundation.Templates.SA_Result)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__37_1_m92A43CEF4392518315CEEEB13787AF77224604C9 (U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * __this, SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// static event Action<SA_Result> OnDeleteSavedGameComplete = delegate { };
		return;
	}
}
// System.Void SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<.cctor>b__37_2(SA.iOS.GameKit.ISN_GKSavedGameFetchResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__37_2_mF8F8C80527B4B5007A9B4ABF8FBD67831988C0A9 (U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * __this, ISN_GKSavedGameFetchResult_t429317C838E84AD0264669DC43F5C4C5D23EE715 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// static event Action<ISN_GKSavedGameFetchResult> OnFetchSavedGamesComplete = delegate { };
		return;
	}
}
// System.Void SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<.cctor>b__37_3(SA.iOS.GameKit.ISN_GKSavedGameSaveResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__37_3_mE45842FF25EF56822EC9239105F0C5B17D74F81A (U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * __this, ISN_GKSavedGameSaveResult_t79F7828795EB6CA14EE02D198BF136038F40F319 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// static event Action<ISN_GKSavedGameSaveResult> OnSavedGameComplete = delegate { };
		return;
	}
}
// System.Void SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<.cctor>b__37_4(SA.iOS.GameKit.ISN_GKSavedGameLoadResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__37_4_m64108D8A912590CC0E95EE738D2068A057E8DC1E (U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * __this, ISN_GKSavedGameLoadResult_t01255EF9BF3D93463A616431A95EEF5BEC728C52 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// static event Action<ISN_GKSavedGameLoadResult> OnLoadGameDataComplete = delegate { };
		return;
	}
}
// System.Void SA.iOS.GameKit.ISN_GKLocalPlayer/<>c::<.cctor>b__37_5(SA.iOS.GameKit.ISN_GKSavedGameFetchResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__37_5_mA0BBC3B8D8663D385D320F3744BA6BAE77369E6F (U3CU3Ec_tDA3944ADA1DF99C7728EDBF5FC70D76AE953C604 * __this, ISN_GKSavedGameFetchResult_t429317C838E84AD0264669DC43F5C4C5D23EE715 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// static event Action<ISN_GKSavedGameFetchResult> OnResolveSavedGamesComplete = delegate { };
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
// System.Void SA.iOS.GameKit.ISN_GKLocalPlayer/<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_mDDA313F9CCEEDD47C353C3DBED8DB5C94BF6939D (U3CU3Ec__DisplayClass36_0_t283A445BD13EF0495D3D95432964BDDCFD260B97 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.GameKit.ISN_GKLocalPlayer/<>c__DisplayClass36_0::<LoadDefaultLeaderboardIdentifier>b__0(SA.Foundation.Templates.SA_DataResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0_U3CLoadDefaultLeaderboardIdentifierU3Eb__0_m7FF307A93E7798788949D05F2C22CF899AFBF69D (U3CU3Ec__DisplayClass36_0_t283A445BD13EF0495D3D95432964BDDCFD260B97 * __this, SA_DataResult_tF0A5319D09E80AE65AF389F07D60BD8DB8353144 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m9758977374B90655D6DD83A89AB898D5F4611ED3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_GKLoadDefaultLeaderboardResult_tE64A92BC175FD8A53E25F74D66B51190DC95C193_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ISN_GKLoadDefaultLeaderboardResult_tE64A92BC175FD8A53E25F74D66B51190DC95C193 * V_0 = NULL;
	{
		// var loadResult = new ISN_GKLoadDefaultLeaderboardResult(result);
		SA_DataResult_tF0A5319D09E80AE65AF389F07D60BD8DB8353144 * L_0 = ___result0;
		ISN_GKLoadDefaultLeaderboardResult_tE64A92BC175FD8A53E25F74D66B51190DC95C193 * L_1 = (ISN_GKLoadDefaultLeaderboardResult_tE64A92BC175FD8A53E25F74D66B51190DC95C193 *)il2cpp_codegen_object_new(ISN_GKLoadDefaultLeaderboardResult_tE64A92BC175FD8A53E25F74D66B51190DC95C193_il2cpp_TypeInfo_var);
		ISN_GKLoadDefaultLeaderboardResult__ctor_mA6D3FAA6DCB2E66DA599E1FB7C1B251C5B7D7942(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// callback.Invoke(loadResult);
		Action_1_t297BE403C517D6F098CCAD063217CC4522C4C280 * L_2 = __this->get_callback_0();
		ISN_GKLoadDefaultLeaderboardResult_tE64A92BC175FD8A53E25F74D66B51190DC95C193 * L_3 = V_0;
		NullCheck(L_2);
		Action_1_Invoke_m9758977374B90655D6DD83A89AB898D5F4611ED3(L_2, L_3, /*hidden argument*/Action_1_Invoke_m9758977374B90655D6DD83A89AB898D5F4611ED3_RuntimeMethod_var);
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
// System.Void SA.iOS.Social.ISN_Instagram/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m338BE3DB7EB0D7E7EB4C35E6C0A8C34442053256 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0775DC4B3F2747BD58CE3092A2638DB17C2368D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0775DC4B3F2747BD58CE3092A2638DB17C2368D1 * L_0 = (U3CU3Ec_t0775DC4B3F2747BD58CE3092A2638DB17C2368D1 *)il2cpp_codegen_object_new(U3CU3Ec_t0775DC4B3F2747BD58CE3092A2638DB17C2368D1_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m99F5076949E98EFD60812E5053FF51195E1D5AB9(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t0775DC4B3F2747BD58CE3092A2638DB17C2368D1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0775DC4B3F2747BD58CE3092A2638DB17C2368D1_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void SA.iOS.Social.ISN_Instagram/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m99F5076949E98EFD60812E5053FF51195E1D5AB9 (U3CU3Ec_t0775DC4B3F2747BD58CE3092A2638DB17C2368D1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.Social.ISN_Instagram/<>c::<.cctor>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__6_0_m15F4748CFFAAEF92754303811C76607F3D88F184 (U3CU3Ec_t0775DC4B3F2747BD58CE3092A2638DB17C2368D1 * __this, const RuntimeMethod* method)
{
	{
		// public static event Action OnPostStart = delegate { };
		return;
	}
}
// System.Void SA.iOS.Social.ISN_Instagram/<>c::<.cctor>b__6_1(SA.Foundation.Templates.SA_Result)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__6_1_m1232A580D8D5F9A15E58DF04279D411B3DDA426A (U3CU3Ec_t0775DC4B3F2747BD58CE3092A2638DB17C2368D1 * __this, SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public static event Action<SA_Result> OnPostResult = delegate { };
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
// System.Void SA.iOS.Social.ISN_Instagram/Internal::ISN_InstaShare(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_ISN_InstaShare_mD3D0E237433E61A14EA9B9F9712B67913EE6C76F (String_t* ___encodedMedia0, String_t* ___message1, const RuntimeMethod* method)
{
	{
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
// System.Void SA.iOS.Social.ISN_Instagram/NativeListener::OnInstaPostSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeListener_OnInstaPostSuccess_m166E146EBF8DB7695CFCCC71F74AC51F0FA6E0EB (NativeListener_tF61FAF3BFB2428151E6987AFF17346C5ED1AA2B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_Instagram_tCB4540960CFBC1CAC928922E35A7D7F56F08DE16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * V_0 = NULL;
	{
		// var result = new SA_Result();
		SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * L_0 = (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE *)il2cpp_codegen_object_new(SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE_il2cpp_TypeInfo_var);
		SA_Result__ctor_mA8937F170D05BBA24B5C59BB5BBB4DBCFA69D629(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// OnPostResult(result);
		IL2CPP_RUNTIME_CLASS_INIT(ISN_Instagram_tCB4540960CFBC1CAC928922E35A7D7F56F08DE16_il2cpp_TypeInfo_var);
		Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * L_1 = ((ISN_Instagram_tCB4540960CFBC1CAC928922E35A7D7F56F08DE16_StaticFields*)il2cpp_codegen_static_fields_for(ISN_Instagram_tCB4540960CFBC1CAC928922E35A7D7F56F08DE16_il2cpp_TypeInfo_var))->get_OnPostResult_1();
		SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * L_2 = V_0;
		NullCheck(L_1);
		Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764(L_1, L_2, /*hidden argument*/Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SA.iOS.Social.ISN_Instagram/NativeListener::OnInstaPostFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeListener_OnInstaPostFailed_mDE57DF61938B716A0913D0505BC630297E129443 (NativeListener_tF61FAF3BFB2428151E6987AFF17346C5ED1AA2B2 * __this, String_t* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_Instagram_tCB4540960CFBC1CAC928922E35A7D7F56F08DE16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD501CE2AED06CB2FC7E25D3E411BA34FF3A76660);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * V_1 = NULL;
	SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * V_2 = NULL;
	{
		// var code = Convert.ToInt32(data);
		String_t* L_0 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Convert_ToInt32_mA1C10AB2A7C95E9DCAC473D1D88C74D60FA240ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var error = new SA_Error(code, "Posting Failed");
		int32_t L_2 = V_0;
		SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * L_3 = (SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 *)il2cpp_codegen_object_new(SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1_il2cpp_TypeInfo_var);
		SA_Error__ctor_m631E82E9A0A7BCB5753C838CBEB2A6812131BA52(L_3, L_2, _stringLiteralD501CE2AED06CB2FC7E25D3E411BA34FF3A76660, /*hidden argument*/NULL);
		V_1 = L_3;
		// var result = new SA_Result(error);
		SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * L_4 = V_1;
		SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * L_5 = (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE *)il2cpp_codegen_object_new(SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE_il2cpp_TypeInfo_var);
		SA_Result__ctor_m4B0C6547881AC2426679E50B73F2CFFA45D1D1D3(L_5, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// OnPostResult(result);
		IL2CPP_RUNTIME_CLASS_INIT(ISN_Instagram_tCB4540960CFBC1CAC928922E35A7D7F56F08DE16_il2cpp_TypeInfo_var);
		Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * L_6 = ((ISN_Instagram_tCB4540960CFBC1CAC928922E35A7D7F56F08DE16_StaticFields*)il2cpp_codegen_static_fields_for(ISN_Instagram_tCB4540960CFBC1CAC928922E35A7D7F56F08DE16_il2cpp_TypeInfo_var))->get_OnPostResult_1();
		SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * L_7 = V_2;
		NullCheck(L_6);
		Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764(L_6, L_7, /*hidden argument*/Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SA.iOS.Social.ISN_Instagram/NativeListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeListener__ctor_mA0BC5FD54967F0ACD0C07411C60DAC2DA719441E (NativeListener_tF61FAF3BFB2428151E6987AFF17346C5ED1AA2B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_Singleton_1__ctor_m95D0F0CCC9F850E28667508D0BA2D1CC3B474AD1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ISN_Singleton_1__ctor_m95D0F0CCC9F850E28667508D0BA2D1CC3B474AD1(__this, /*hidden argument*/ISN_Singleton_1__ctor_m95D0F0CCC9F850E28667508D0BA2D1CC3B474AD1_RuntimeMethod_var);
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
// System.Void SA.iOS.MediaPlayer.ISN_MPMediaPickerController/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m8D2783265AB734EE05ACA4F25C0C692810FB7113 (U3CU3Ec__DisplayClass4_0_t778F81DFA95BC843725618B8E5CCD98FBA6C5495 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.MediaPlayer.ISN_MPMediaPickerController/<>c__DisplayClass4_0::<SetDelegate>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CSetDelegateU3Eb__0_m9E66619FF2B6B6D81063EA35538214954C5B64D3 (U3CU3Ec__DisplayClass4_0_t778F81DFA95BC843725618B8E5CCD98FBA6C5495 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_IMPMediaPickerControllerDelegate_t416B5FE64904066E2206007D33732C0026F144E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// @delegate.MediaPickerDidCancel(this);
		RuntimeObject* L_0 = __this->get_delegate_0();
		ISN_MPMediaPickerController_tE46DF789FC1F7CE0D0D599680D85106DD8B3193B * L_1 = __this->get_U3CU3E4__this_1();
		NullCheck(L_0);
		InterfaceActionInvoker1< ISN_MPMediaPickerController_tE46DF789FC1F7CE0D0D599680D85106DD8B3193B * >::Invoke(1 /* System.Void SA.iOS.MediaPlayer.ISN_IMPMediaPickerControllerDelegate::MediaPickerDidCancel(SA.iOS.MediaPlayer.ISN_MPMediaPickerController) */, ISN_IMPMediaPickerControllerDelegate_t416B5FE64904066E2206007D33732C0026F144E8_il2cpp_TypeInfo_var, L_0, L_1);
		// },
		return;
	}
}
// System.Void SA.iOS.MediaPlayer.ISN_MPMediaPickerController/<>c__DisplayClass4_0::<SetDelegate>b__1(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CSetDelegateU3Eb__1_m3079D93F6341398EE92C822EC32AAB54C4C2715A (U3CU3Ec__DisplayClass4_0_t778F81DFA95BC843725618B8E5CCD98FBA6C5495 * __this, uint64_t ___collectionHash0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_IMPMediaPickerControllerDelegate_t416B5FE64904066E2206007D33732C0026F144E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_MPMediaItemCollection_tA22A8D7C54B8FD586195739E8678EFD4AD921BFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ISN_MPMediaItemCollection_tA22A8D7C54B8FD586195739E8678EFD4AD921BFE * V_0 = NULL;
	{
		// var collection = new ISN_MPMediaItemCollection(collectionHash);
		uint64_t L_0 = ___collectionHash0;
		ISN_MPMediaItemCollection_tA22A8D7C54B8FD586195739E8678EFD4AD921BFE * L_1 = (ISN_MPMediaItemCollection_tA22A8D7C54B8FD586195739E8678EFD4AD921BFE *)il2cpp_codegen_object_new(ISN_MPMediaItemCollection_tA22A8D7C54B8FD586195739E8678EFD4AD921BFE_il2cpp_TypeInfo_var);
		ISN_MPMediaItemCollection__ctor_m55E5E37681A217C1970220AF5DBCF241BFD8A30B(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// @delegate.DidPickMediaItems(this, collection);
		RuntimeObject* L_2 = __this->get_delegate_0();
		ISN_MPMediaPickerController_tE46DF789FC1F7CE0D0D599680D85106DD8B3193B * L_3 = __this->get_U3CU3E4__this_1();
		ISN_MPMediaItemCollection_tA22A8D7C54B8FD586195739E8678EFD4AD921BFE * L_4 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker2< ISN_MPMediaPickerController_tE46DF789FC1F7CE0D0D599680D85106DD8B3193B *, ISN_MPMediaItemCollection_tA22A8D7C54B8FD586195739E8678EFD4AD921BFE * >::Invoke(0 /* System.Void SA.iOS.MediaPlayer.ISN_IMPMediaPickerControllerDelegate::DidPickMediaItems(SA.iOS.MediaPlayer.ISN_MPMediaPickerController,SA.iOS.MediaPlayer.ISN_MPMediaItemCollection) */, ISN_IMPMediaPickerControllerDelegate_t416B5FE64904066E2206007D33732C0026F144E8_il2cpp_TypeInfo_var, L_2, L_3, L_4);
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
// System.Void SA.iOS.Social.ISN_Mail/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m68DBEB49B63000CB47FB3676516F58843BE22732 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB990CAF31D94D477325E36EB65019F184028D78E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB990CAF31D94D477325E36EB65019F184028D78E * L_0 = (U3CU3Ec_tB990CAF31D94D477325E36EB65019F184028D78E *)il2cpp_codegen_object_new(U3CU3Ec_tB990CAF31D94D477325E36EB65019F184028D78E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mDDBFE4272E6D925E1E1FDAA7B5AEB79266F1DA81(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB990CAF31D94D477325E36EB65019F184028D78E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB990CAF31D94D477325E36EB65019F184028D78E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void SA.iOS.Social.ISN_Mail/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDDBFE4272E6D925E1E1FDAA7B5AEB79266F1DA81 (U3CU3Ec_tB990CAF31D94D477325E36EB65019F184028D78E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.Social.ISN_Mail/<>c::<.cctor>b__0_0(SA.Foundation.Templates.SA_Result)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__0_0_mFBDAED164EBCB96C512CBEE9E4C78D72FECDAFEF (U3CU3Ec_tB990CAF31D94D477325E36EB65019F184028D78E * __this, SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public static event Action<SA_Result> OnSendMailResult = delegate { };
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
// System.Void SA.iOS.Social.ISN_Mail/Internal::ISN_SendMail(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_ISN_SendMail_m1EFDC10AF477C440B9B78D483EFF071EDDA5FE54 (String_t* ___subject0, String_t* ___body1, String_t* ___recipients2, String_t* ___encodedMedia3, const RuntimeMethod* method)
{
	{
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
// System.Void SA.iOS.Social.ISN_Mail/NativeListener::OnMailFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeListener_OnMailFailed_m45F673D0F07B7B686C367944345A3E2AD0F60452 (NativeListener_tFB38CE83332FBD025D4CCE9B67A2F374C1C73CCE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_Mail_t4B6BCF11C3D52FF3AD015BAF5A3F11376DBC946C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81705C352B1918412D3A5BA7D8B7F97F3EACBC11);
		s_Il2CppMethodInitialized = true;
	}
	SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * V_0 = NULL;
	{
		// var result = new SA_Result(new SA_Error(0, "Unknown Error"));
		SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * L_0 = (SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 *)il2cpp_codegen_object_new(SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1_il2cpp_TypeInfo_var);
		SA_Error__ctor_m631E82E9A0A7BCB5753C838CBEB2A6812131BA52(L_0, 0, _stringLiteral81705C352B1918412D3A5BA7D8B7F97F3EACBC11, /*hidden argument*/NULL);
		SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * L_1 = (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE *)il2cpp_codegen_object_new(SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE_il2cpp_TypeInfo_var);
		SA_Result__ctor_m4B0C6547881AC2426679E50B73F2CFFA45D1D1D3(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// OnSendMailResult(result);
		IL2CPP_RUNTIME_CLASS_INIT(ISN_Mail_t4B6BCF11C3D52FF3AD015BAF5A3F11376DBC946C_il2cpp_TypeInfo_var);
		Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * L_2 = ((ISN_Mail_t4B6BCF11C3D52FF3AD015BAF5A3F11376DBC946C_StaticFields*)il2cpp_codegen_static_fields_for(ISN_Mail_t4B6BCF11C3D52FF3AD015BAF5A3F11376DBC946C_il2cpp_TypeInfo_var))->get_OnSendMailResult_0();
		SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * L_3 = V_0;
		NullCheck(L_2);
		Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764(L_2, L_3, /*hidden argument*/Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SA.iOS.Social.ISN_Mail/NativeListener::OnMailSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeListener_OnMailSuccess_m97AB2C98404D448027BDE58F244DD10B58040CA8 (NativeListener_tFB38CE83332FBD025D4CCE9B67A2F374C1C73CCE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_Mail_t4B6BCF11C3D52FF3AD015BAF5A3F11376DBC946C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * V_0 = NULL;
	{
		// var result = new SA_Result();
		SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * L_0 = (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE *)il2cpp_codegen_object_new(SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE_il2cpp_TypeInfo_var);
		SA_Result__ctor_mA8937F170D05BBA24B5C59BB5BBB4DBCFA69D629(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// OnSendMailResult(result);
		IL2CPP_RUNTIME_CLASS_INIT(ISN_Mail_t4B6BCF11C3D52FF3AD015BAF5A3F11376DBC946C_il2cpp_TypeInfo_var);
		Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * L_1 = ((ISN_Mail_t4B6BCF11C3D52FF3AD015BAF5A3F11376DBC946C_StaticFields*)il2cpp_codegen_static_fields_for(ISN_Mail_t4B6BCF11C3D52FF3AD015BAF5A3F11376DBC946C_il2cpp_TypeInfo_var))->get_OnSendMailResult_0();
		SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * L_2 = V_0;
		NullCheck(L_1);
		Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764(L_1, L_2, /*hidden argument*/Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SA.iOS.Social.ISN_Mail/NativeListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeListener__ctor_m3440F527C7002ECB75FFAACDCDBA0B8B37CDF3E3 (NativeListener_tFB38CE83332FBD025D4CCE9B67A2F374C1C73CCE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_Singleton_1__ctor_m8B57FEAAC7BCB8FC63BC97091BFAB0E6166E924C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ISN_Singleton_1__ctor_m8B57FEAAC7BCB8FC63BC97091BFAB0E6166E924C(__this, /*hidden argument*/ISN_Singleton_1__ctor_m8B57FEAAC7BCB8FC63BC97091BFAB0E6166E924C_RuntimeMethod_var);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MonoPCallbackDelegate_t684ECA24F90DA794192384D419435F2320168D8C (MonoPCallbackDelegate_t684ECA24F90DA794192384D419435F2320168D8C * __this, intptr_t ___actionPtr0, String_t* ___data1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___data1' to native representation
	char* ____data1_marshaled = NULL;
	____data1_marshaled = il2cpp_codegen_marshal_string(___data1);

	// Native function invocation
	il2cppPInvokeFunc(___actionPtr0, ____data1_marshaled);

	// Marshaling cleanup of parameter '___data1' native representation
	il2cpp_codegen_marshal_free(____data1_marshaled);
	____data1_marshaled = NULL;

}
// System.Void SA.iOS.Utilities.ISN_MonoPCallback/MonoPCallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPCallbackDelegate__ctor_m8243DF992C707DA737DEC5638AF258B5BB029CDD (MonoPCallbackDelegate_t684ECA24F90DA794192384D419435F2320168D8C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SA.iOS.Utilities.ISN_MonoPCallback/MonoPCallbackDelegate::Invoke(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPCallbackDelegate_Invoke_m9CBB2C264E1F749309A3DB4C0DB750874688F923 (MonoPCallbackDelegate_t684ECA24F90DA794192384D419435F2320168D8C * __this, intptr_t ___actionPtr0, String_t* ___data1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___actionPtr0, ___data1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___actionPtr0, ___data1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___actionPtr0, ___data1);
					else
						GenericVirtActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___actionPtr0, ___data1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___actionPtr0, ___data1);
					else
						VirtActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___actionPtr0, ___data1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___actionPtr0, ___data1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SA.iOS.Utilities.ISN_MonoPCallback/MonoPCallbackDelegate::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MonoPCallbackDelegate_BeginInvoke_m21D72336ABADBE03712645158A8D720617E6EF45 (MonoPCallbackDelegate_t684ECA24F90DA794192384D419435F2320168D8C * __this, intptr_t ___actionPtr0, String_t* ___data1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___actionPtr0);
	__d_args[1] = ___data1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void SA.iOS.Utilities.ISN_MonoPCallback/MonoPCallbackDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPCallbackDelegate_EndInvoke_m2FD451F1DD36B28A90D33A4C56D8084C3D3E69DA (MonoPCallbackDelegate_t684ECA24F90DA794192384D419435F2320168D8C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
// System.Void SA.iOS.UIKit.ISN_PhotoAlbum/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m1A7FA765E98313DA65221530FDB11E0211A2C843 (U3CU3Ec__DisplayClass1_0_t12DA2EB5B6C3B2A77528B0243A14A908037AFB81 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.UIKit.ISN_PhotoAlbum/<>c__DisplayClass1_0::<SaveScreenshotToCameraRoll>b__0(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CSaveScreenshotToCameraRollU3Eb__0_m86B522DC71F9E67F5C2C32F1AE4A7A68B2A04C38 (U3CU3Ec__DisplayClass1_0_t12DA2EB5B6C3B2A77528B0243A14A908037AFB81 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, const RuntimeMethod* method)
{
	{
		// UIImageWriteToSavedPhotosAlbum(texture, callback);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___texture0;
		Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * L_1 = __this->get_callback_0();
		ISN_PhotoAlbum_UIImageWriteToSavedPhotosAlbum_mF924AEF8A11127CD8FB8B5465A99220145473C89(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void SA.iOS.ReplayKit.ISN_RPNativeAPI/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB3D1EFEBD28998FA62902F09E70B580A64049A86 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B * L_0 = (U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B *)il2cpp_codegen_object_new(U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mFD67F176B02B8D02498A401CD09505F61A265A84(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void SA.iOS.ReplayKit.ISN_RPNativeAPI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFD67F176B02B8D02498A401CD09505F61A265A84 (U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.ReplayKit.ISN_RPNativeAPI/<>c::<.ctor>b__24_0(SA.Foundation.Templates.SA_Result)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__24_0_m44B88150EFCB98BE7778D0C13F78DA00754DFE08 (U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B * __this, SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// Action<SA_Result> m_startRecordingCallback = delegate { };
		return;
	}
}
// System.Void SA.iOS.ReplayKit.ISN_RPNativeAPI/<>c::<.ctor>b__24_1(SA.iOS.ReplayKit.ISN_RPStopResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__24_1_mAFE903EB0205E206D6D087AF35442A8E91CBBF29 (U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B * __this, ISN_RPStopResult_t309EF21FB3F3CCDA08FE47353642069F0314E362 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// Action<ISN_RPStopResult> m_stopRecordingCallback = delegate { };
		return;
	}
}
// System.Void SA.iOS.ReplayKit.ISN_RPNativeAPI/<>c::<.ctor>b__24_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__24_2_m68DB6B62A02EBD0D1B2AE148829432220284533F (U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B * __this, const RuntimeMethod* method)
{
	{
		// Action m_discardRecordingCallback = delegate { };
		return;
	}
}
// System.Void SA.iOS.ReplayKit.ISN_RPNativeAPI/<>c::<.ctor>b__24_3(SA.iOS.ReplayKit.ISN_PRPreviewResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__24_3_mFD26D576B8684307AA8582E21BD6E441890ED873 (U3CU3Ec_t3ABCC94201AA04CB786D2C8FA4227023ABB19A5B * __this, ISN_PRPreviewResult_tD9D9A58600785C4A5CAA6B5C79648FEB9D6873DE * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// Action<ISN_PRPreviewResult> m_shareDialogCallback = delegate { };
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
// System.Void SA.iOS.StoreKit.ISN_SKEditorAPI/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m8808E7E825DECE81DC88B337A751A88B65BC48D1 (U3CU3Ec__DisplayClass14_0_t89A1E79CC49CA6B4F745392E404591AF1C6F476F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.StoreKit.ISN_SKEditorAPI/<>c__DisplayClass14_0::<RefreshRequest>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CRefreshRequestU3Eb__0_m416578C97D8DAA55194CBA3B7856B82B43529F86 (U3CU3Ec__DisplayClass14_0_t89A1E79CC49CA6B4F745392E404591AF1C6F476F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// callback.Invoke(new SA_Result());
		Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * L_0 = __this->get_callback_0();
		SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * L_1 = (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE *)il2cpp_codegen_object_new(SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE_il2cpp_TypeInfo_var);
		SA_Result__ctor_mA8937F170D05BBA24B5C59BB5BBB4DBCFA69D629(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764(L_0, L_1, /*hidden argument*/Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
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
// System.Void SA.iOS.StoreKit.ISN_SKEditorAPI/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m3CB8A4CA59F9A0B0051FA34D9FB0964A7741EB1F (U3CU3Ec__DisplayClass5_0_tFFE496638994CC71212A0B0521C025EACDBF79E2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.StoreKit.ISN_SKEditorAPI/<>c__DisplayClass5_0::<LoadStore>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CLoadStoreU3Eb__0_m01825ECD5CB973F7EC2C0C1F70DC2DF6206A9CC2 (U3CU3Ec__DisplayClass5_0_tFFE496638994CC71212A0B0521C025EACDBF79E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mC4A45C1850A7925CD1DCF8395F207CC27298AE38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_get_Instance_m91035B08BB57A2127C7A297AEAD89A75BC37D63F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_t08876A890E2E57E39DCC5D03C916A31673F3A8E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731 * V_0 = NULL;
	{
		// var res = new ISN_SKInitResult(ISN_Settings.Instance.InAppProducts);
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_t08876A890E2E57E39DCC5D03C916A31673F3A8E0_il2cpp_TypeInfo_var);
		ISN_Settings_t563BE961C9DAFA63FBC0BCB916AC3751F42261E3 * L_0;
		L_0 = SA_ScriptableSingleton_1_get_Instance_m91035B08BB57A2127C7A297AEAD89A75BC37D63F(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_m91035B08BB57A2127C7A297AEAD89A75BC37D63F_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_t2D723F9BB968A2CB16CAEB637951A33404D5E48C * L_1 = L_0->get_InAppProducts_30();
		ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731 * L_2 = (ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731 *)il2cpp_codegen_object_new(ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731_il2cpp_TypeInfo_var);
		ISN_SKInitResult__ctor_m484E1912EF898ADCBA9AE16327E817944050F459(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// callback.Invoke(res);
		Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * L_3 = __this->get_callback_0();
		ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731 * L_4 = V_0;
		NullCheck(L_3);
		Action_1_Invoke_mC4A45C1850A7925CD1DCF8395F207CC27298AE38(L_3, L_4, /*hidden argument*/Action_1_Invoke_mC4A45C1850A7925CD1DCF8395F207CC27298AE38_RuntimeMethod_var);
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
// System.Void SA.iOS.StoreKit.ISN_SKEditorAPI/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m598F34201BBF0A9551E39D2226251ED09C364AAC (U3CU3Ec__DisplayClass6_0_tD63406D539CA3AC8C0533EE3A00262D75F3AFD3D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.StoreKit.ISN_SKEditorAPI/<>c__DisplayClass6_0::<AddPayment>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CAddPaymentU3Eb__0_m3D2EC16F2F323E35266E8E7176A6182FFA9C27A1 (U3CU3Ec__DisplayClass6_0_tD63406D539CA3AC8C0533EE3A00262D75F3AFD3D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_SKPaymentTransaction_tF41BFFFB76CBCFDADBB1E5E752EA8ADB53EFF12C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_Event_1_Invoke_m850152DA5F2F6C405D365EB12ABC12D04B1FA689_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ISN_SKProduct_tB70386270C96B57C2FB14E931332F98F0F186B15 * V_0 = NULL;
	ISN_SKPaymentTransaction_tF41BFFFB76CBCFDADBB1E5E752EA8ADB53EFF12C * V_1 = NULL;
	{
		// var product = ISN_SKPaymentQueue.GetProductById(productIdentifier);
		String_t* L_0 = __this->get_productIdentifier_0();
		IL2CPP_RUNTIME_CLASS_INIT(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var);
		ISN_SKProduct_tB70386270C96B57C2FB14E931332F98F0F186B15 * L_1;
		L_1 = ISN_SKPaymentQueue_GetProductById_mB599753CA999CF4B70B4AC1C431A3A33F9EA75D3(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var transaction = new ISN_SKPaymentTransaction(product, ISN_SKPaymentTransactionState.Purchased);
		ISN_SKProduct_tB70386270C96B57C2FB14E931332F98F0F186B15 * L_2 = V_0;
		ISN_SKPaymentTransaction_tF41BFFFB76CBCFDADBB1E5E752EA8ADB53EFF12C * L_3 = (ISN_SKPaymentTransaction_tF41BFFFB76CBCFDADBB1E5E752EA8ADB53EFF12C *)il2cpp_codegen_object_new(ISN_SKPaymentTransaction_tF41BFFFB76CBCFDADBB1E5E752EA8ADB53EFF12C_il2cpp_TypeInfo_var);
		ISN_SKPaymentTransaction__ctor_m2DFA5E1837503BB88F18A27F733137E86304E540(L_3, L_2, 1, /*hidden argument*/NULL);
		V_1 = L_3;
		// m_TransactionUpdated.Invoke(transaction);
		ISN_SKEditorAPI_t04F1EEA2CC9A465E126DDBD91123FB3F959B1345 * L_4 = __this->get_U3CU3E4__this_1();
		NullCheck(L_4);
		SA_Event_1_tE849E11935AC44EFC07E16AF67D4A70BC40A422C * L_5 = L_4->get_m_TransactionUpdated_0();
		ISN_SKPaymentTransaction_tF41BFFFB76CBCFDADBB1E5E752EA8ADB53EFF12C * L_6 = V_1;
		NullCheck(L_5);
		SA_Event_1_Invoke_m850152DA5F2F6C405D365EB12ABC12D04B1FA689(L_5, L_6, /*hidden argument*/SA_Event_1_Invoke_m850152DA5F2F6C405D365EB12ABC12D04B1FA689_RuntimeMethod_var);
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
// System.Void SA.iOS.StoreKit.ISN_SKEditorAPI/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m8F4396C8F91A8CB215455A3C68CE647A5C7D0206 (U3CU3Ec__DisplayClass7_0_tC3A5C6CBF9B065CB81CFB0584F6F9271908A692B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.StoreKit.ISN_SKEditorAPI/<>c__DisplayClass7_0::<FinishTransaction>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CFinishTransactionU3Eb__0_m717451AC5671DA5F02F814096543821E5197D9BB (U3CU3Ec__DisplayClass7_0_tC3A5C6CBF9B065CB81CFB0584F6F9271908A692B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_Event_1_Invoke_m850152DA5F2F6C405D365EB12ABC12D04B1FA689_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TransactionRemoved.Invoke(transaction);
		ISN_SKEditorAPI_t04F1EEA2CC9A465E126DDBD91123FB3F959B1345 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		SA_Event_1_tE849E11935AC44EFC07E16AF67D4A70BC40A422C * L_1 = L_0->get_m_TransactionRemoved_1();
		RuntimeObject* L_2 = __this->get_transaction_1();
		NullCheck(L_1);
		SA_Event_1_Invoke_m850152DA5F2F6C405D365EB12ABC12D04B1FA689(L_1, L_2, /*hidden argument*/SA_Event_1_Invoke_m850152DA5F2F6C405D365EB12ABC12D04B1FA689_RuntimeMethod_var);
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
// System.Void SA.iOS.StoreKit.ISN_SKLib/ISN_LoadStoreRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISN_LoadStoreRequest__ctor_m7CF73133AEC3F4F3501DEA2D4738BBE7C19DE764 (ISN_LoadStoreRequest_t3B1D6CD566FCBC4EE16D3F4194588A17E6B3FC76 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> ProductIdentifiers = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_ProductIdentifiers_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9AFEE2FC5779460C3013939E4E32D43B66258130 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198 * L_0 = (U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198 *)il2cpp_codegen_object_new(U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mEAE2832F597C23898447E2C1443772BC11BD9EA5(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEAE2832F597C23898447E2C1443772BC11BD9EA5 (U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c::<.cctor>b__7_0(SA.iOS.StoreKit.ISN_SKInitResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__7_0_m663E250B2C76CF99E51D67AA8D9E4013AD47FAFC (U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198 * __this, ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// static event Action<ISN_SKInitResult> OnStoreKitInitComplete = delegate { };
		return;
	}
}
// System.Void SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c::<Init>b__9_0(SA.iOS.StoreKit.ISN_SKInitResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CInitU3Eb__9_0_m1EAA8F151CD83365451BF8F70A481D937DD94E80 (U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198 * __this, ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mC4A45C1850A7925CD1DCF8395F207CC27298AE38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mD9740D4214410B812D153422F0102DD31D56BB5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitU3Eb__9_1_mD1A297D3815A11D77AAC52E57383412EE21B7C94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * G_B4_0 = NULL;
	Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * G_B3_0 = NULL;
	{
		// s_IsInitializationInProgress = false;
		IL2CPP_RUNTIME_CLASS_INIT(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var);
		((ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_StaticFields*)il2cpp_codegen_static_fields_for(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var))->set_s_IsInitializationInProgress_1((bool)0);
		// if (result.IsSucceeded)
		ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731 * L_0 = ___result0;
		NullCheck(L_0);
		bool L_1;
		L_1 = SA_Result_get_IsSucceeded_mCF559D14CD5C81FBC5C071C3F5F93A99188CAEFA(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// CacheAppStoreProducts(result);
		ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731 * L_3 = ___result0;
		IL2CPP_RUNTIME_CLASS_INIT(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var);
		ISN_SKPaymentQueue_CacheAppStoreProducts_mA48B6D6ADC7D6B0656AE5F407E83C7BE1E6F45D6(L_3, /*hidden argument*/NULL);
		// s_SuccessInitResultCache = result;
		ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731 * L_4 = ___result0;
		((ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_StaticFields*)il2cpp_codegen_static_fields_for(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var))->set_s_SuccessInitResultCache_2(L_4);
	}

IL_0020:
	{
		// OnStoreKitInitComplete.Invoke(result);
		IL2CPP_RUNTIME_CLASS_INIT(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var);
		Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * L_5 = ((ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_StaticFields*)il2cpp_codegen_static_fields_for(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var))->get_OnStoreKitInitComplete_0();
		ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731 * L_6 = ___result0;
		NullCheck(L_5);
		Action_1_Invoke_mC4A45C1850A7925CD1DCF8395F207CC27298AE38(L_5, L_6, /*hidden argument*/Action_1_Invoke_mC4A45C1850A7925CD1DCF8395F207CC27298AE38_RuntimeMethod_var);
		// OnStoreKitInitComplete = delegate { };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_il2cpp_TypeInfo_var);
		Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * L_7 = ((U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_il2cpp_TypeInfo_var))->get_U3CU3E9__9_1_1();
		Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * L_8 = L_7;
		G_B3_0 = L_8;
		if (L_8)
		{
			G_B4_0 = L_8;
			goto IL_004b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_il2cpp_TypeInfo_var);
		U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198 * L_9 = ((U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * L_10 = (Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 *)il2cpp_codegen_object_new(Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189_il2cpp_TypeInfo_var);
		Action_1__ctor_mD9740D4214410B812D153422F0102DD31D56BB5E(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec_U3CInitU3Eb__9_1_mD1A297D3815A11D77AAC52E57383412EE21B7C94_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mD9740D4214410B812D153422F0102DD31D56BB5E_RuntimeMethod_var);
		Action_1_t9ADCE5C58E6B58072542192F2CCAB5F13F2F8189 * L_11 = L_10;
		((U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198_il2cpp_TypeInfo_var))->set_U3CU3E9__9_1_1(L_11);
		G_B4_0 = L_11;
	}

IL_004b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var);
		((ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_StaticFields*)il2cpp_codegen_static_fields_for(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var))->set_OnStoreKitInitComplete_0(G_B4_0);
		// });
		return;
	}
}
// System.Void SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c::<Init>b__9_1(SA.iOS.StoreKit.ISN_SKInitResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CInitU3Eb__9_1_mD1A297D3815A11D77AAC52E57383412EE21B7C94 (U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198 * __this, ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// OnStoreKitInitComplete = delegate { };
		return;
	}
}
// System.Void SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c::<RestoreCompletedTransactions>b__14_0(SA.iOS.StoreKit.ISN_SKInitResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRestoreCompletedTransactionsU3Eb__14_0_m4558D4836952DD7D4D1F27B20F0D01C530D8D599 (U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198 * __this, ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_iSKAPI_tF0DAD2993BE274EB620FC7D9129F7CEA839CD805_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ISN_SKLib.Api.RestoreCompletedTransactions();
		RuntimeObject* L_0;
		L_0 = ISN_SKLib_get_Api_mE8A40CBE492AA5C736F187615E3192B4EB6EA603(/*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void SA.iOS.StoreKit.ISN_iSKAPI::RestoreCompletedTransactions() */, ISN_iSKAPI_tF0DAD2993BE274EB620FC7D9129F7CEA839CD805_il2cpp_TypeInfo_var, L_0);
		// });
		return;
	}
}
// System.Void SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c::<SubscribeToNativeEvents>b__28_0(SA.iOS.StoreKit.ISN_iSKPaymentTransaction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSubscribeToNativeEventsU3Eb__28_0_m39C0172BEF42D6EB8ACA93F139B486DE837013E3 (U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD529F0745024A38E3ED28ABFA8D9B144060CE735_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8B0028B35AB15EAF23FDFE22D0A1B85ECD5BA0BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m256C3A016DB020EE3DADE774C8ED3B98145E40FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_iSKPaymentTransactionObserver_tFE7A1EB3AC5DC32DF138E246BC7FE622CAD99A45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF1A0CFD995AD189624A4DF42F837CC7E91B9412C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var observer in s_Observers) observer.OnTransactionUpdated(result);
		IL2CPP_RUNTIME_CLASS_INIT(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var);
		List_1_t5A6D69A90896741CD34AAFF072502D7844EDF7A3 * L_0 = ((ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_StaticFields*)il2cpp_codegen_static_fields_for(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var))->get_s_Observers_4();
		NullCheck(L_0);
		Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5  L_1;
		L_1 = List_1_GetEnumerator_mF1A0CFD995AD189624A4DF42F837CC7E91B9412C(L_0, /*hidden argument*/List_1_GetEnumerator_mF1A0CFD995AD189624A4DF42F837CC7E91B9412C_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_000f:
		{
			// foreach (var observer in s_Observers) observer.OnTransactionUpdated(result);
			RuntimeObject* L_2;
			L_2 = Enumerator_get_Current_m256C3A016DB020EE3DADE774C8ED3B98145E40FF_inline((Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m256C3A016DB020EE3DADE774C8ED3B98145E40FF_RuntimeMethod_var);
			V_1 = L_2;
			// foreach (var observer in s_Observers) observer.OnTransactionUpdated(result);
			RuntimeObject* L_3 = V_1;
			RuntimeObject* L_4 = ___result0;
			NullCheck(L_3);
			InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void SA.iOS.StoreKit.ISN_iSKPaymentTransactionObserver::OnTransactionUpdated(SA.iOS.StoreKit.ISN_iSKPaymentTransaction) */, ISN_iSKPaymentTransactionObserver_tFE7A1EB3AC5DC32DF138E246BC7FE622CAD99A45_il2cpp_TypeInfo_var, L_3, L_4);
		}

IL_001f:
		{
			// foreach (var observer in s_Observers) observer.OnTransactionUpdated(result);
			bool L_5;
			L_5 = Enumerator_MoveNext_m8B0028B35AB15EAF23FDFE22D0A1B85ECD5BA0BD((Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m8B0028B35AB15EAF23FDFE22D0A1B85ECD5BA0BD_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_000f;
			}
		}

IL_0028:
		{
			IL2CPP_LEAVE(0x39, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD529F0745024A38E3ED28ABFA8D9B144060CE735((Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mD529F0745024A38E3ED28ABFA8D9B144060CE735_RuntimeMethod_var);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		// });
		return;
	}
}
// System.Void SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c::<SubscribeToNativeEvents>b__28_1(SA.iOS.StoreKit.ISN_iSKPaymentTransaction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSubscribeToNativeEventsU3Eb__28_1_mEA056724BD52F39645AB09585B66B89A7291ABC3 (U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD529F0745024A38E3ED28ABFA8D9B144060CE735_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8B0028B35AB15EAF23FDFE22D0A1B85ECD5BA0BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m256C3A016DB020EE3DADE774C8ED3B98145E40FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_iSKPaymentTransactionObserver_tFE7A1EB3AC5DC32DF138E246BC7FE622CAD99A45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF1A0CFD995AD189624A4DF42F837CC7E91B9412C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var observer in s_Observers) observer.OnTransactionRemoved(result);
		IL2CPP_RUNTIME_CLASS_INIT(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var);
		List_1_t5A6D69A90896741CD34AAFF072502D7844EDF7A3 * L_0 = ((ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_StaticFields*)il2cpp_codegen_static_fields_for(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var))->get_s_Observers_4();
		NullCheck(L_0);
		Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5  L_1;
		L_1 = List_1_GetEnumerator_mF1A0CFD995AD189624A4DF42F837CC7E91B9412C(L_0, /*hidden argument*/List_1_GetEnumerator_mF1A0CFD995AD189624A4DF42F837CC7E91B9412C_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_000f:
		{
			// foreach (var observer in s_Observers) observer.OnTransactionRemoved(result);
			RuntimeObject* L_2;
			L_2 = Enumerator_get_Current_m256C3A016DB020EE3DADE774C8ED3B98145E40FF_inline((Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m256C3A016DB020EE3DADE774C8ED3B98145E40FF_RuntimeMethod_var);
			V_1 = L_2;
			// foreach (var observer in s_Observers) observer.OnTransactionRemoved(result);
			RuntimeObject* L_3 = V_1;
			RuntimeObject* L_4 = ___result0;
			NullCheck(L_3);
			InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void SA.iOS.StoreKit.ISN_iSKPaymentTransactionObserver::OnTransactionRemoved(SA.iOS.StoreKit.ISN_iSKPaymentTransaction) */, ISN_iSKPaymentTransactionObserver_tFE7A1EB3AC5DC32DF138E246BC7FE622CAD99A45_il2cpp_TypeInfo_var, L_3, L_4);
		}

IL_001f:
		{
			// foreach (var observer in s_Observers) observer.OnTransactionRemoved(result);
			bool L_5;
			L_5 = Enumerator_MoveNext_m8B0028B35AB15EAF23FDFE22D0A1B85ECD5BA0BD((Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m8B0028B35AB15EAF23FDFE22D0A1B85ECD5BA0BD_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_000f;
			}
		}

IL_0028:
		{
			IL2CPP_LEAVE(0x39, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD529F0745024A38E3ED28ABFA8D9B144060CE735((Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mD529F0745024A38E3ED28ABFA8D9B144060CE735_RuntimeMethod_var);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		// });
		return;
	}
}
// System.Void SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c::<SubscribeToNativeEvents>b__28_2(SA.Foundation.Templates.SA_Result)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSubscribeToNativeEventsU3Eb__28_2_m11D1370EC8666216935B733A405182DE6FB042AC (U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198 * __this, SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD529F0745024A38E3ED28ABFA8D9B144060CE735_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8B0028B35AB15EAF23FDFE22D0A1B85ECD5BA0BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m256C3A016DB020EE3DADE774C8ED3B98145E40FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_iSKPaymentTransactionObserver_tFE7A1EB3AC5DC32DF138E246BC7FE622CAD99A45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF1A0CFD995AD189624A4DF42F837CC7E91B9412C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var observer in s_Observers) observer.OnRestoreTransactionsComplete(result);
		IL2CPP_RUNTIME_CLASS_INIT(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var);
		List_1_t5A6D69A90896741CD34AAFF072502D7844EDF7A3 * L_0 = ((ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_StaticFields*)il2cpp_codegen_static_fields_for(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var))->get_s_Observers_4();
		NullCheck(L_0);
		Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5  L_1;
		L_1 = List_1_GetEnumerator_mF1A0CFD995AD189624A4DF42F837CC7E91B9412C(L_0, /*hidden argument*/List_1_GetEnumerator_mF1A0CFD995AD189624A4DF42F837CC7E91B9412C_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_000f:
		{
			// foreach (var observer in s_Observers) observer.OnRestoreTransactionsComplete(result);
			RuntimeObject* L_2;
			L_2 = Enumerator_get_Current_m256C3A016DB020EE3DADE774C8ED3B98145E40FF_inline((Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m256C3A016DB020EE3DADE774C8ED3B98145E40FF_RuntimeMethod_var);
			V_1 = L_2;
			// foreach (var observer in s_Observers) observer.OnRestoreTransactionsComplete(result);
			RuntimeObject* L_3 = V_1;
			SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * L_4 = ___result0;
			NullCheck(L_3);
			InterfaceActionInvoker1< SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * >::Invoke(3 /* System.Void SA.iOS.StoreKit.ISN_iSKPaymentTransactionObserver::OnRestoreTransactionsComplete(SA.Foundation.Templates.SA_Result) */, ISN_iSKPaymentTransactionObserver_tFE7A1EB3AC5DC32DF138E246BC7FE622CAD99A45_il2cpp_TypeInfo_var, L_3, L_4);
		}

IL_001f:
		{
			// foreach (var observer in s_Observers) observer.OnRestoreTransactionsComplete(result);
			bool L_5;
			L_5 = Enumerator_MoveNext_m8B0028B35AB15EAF23FDFE22D0A1B85ECD5BA0BD((Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m8B0028B35AB15EAF23FDFE22D0A1B85ECD5BA0BD_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_000f;
			}
		}

IL_0028:
		{
			IL2CPP_LEAVE(0x39, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD529F0745024A38E3ED28ABFA8D9B144060CE735((Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mD529F0745024A38E3ED28ABFA8D9B144060CE735_RuntimeMethod_var);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		// });
		return;
	}
}
// System.Void SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c::<SubscribeToNativeEvents>b__28_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSubscribeToNativeEventsU3Eb__28_3_mB73985AA0F26D2108B64C2A06E7575A67EE7449B (U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD529F0745024A38E3ED28ABFA8D9B144060CE735_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8B0028B35AB15EAF23FDFE22D0A1B85ECD5BA0BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m256C3A016DB020EE3DADE774C8ED3B98145E40FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_iSKPaymentTransactionObserver_tFE7A1EB3AC5DC32DF138E246BC7FE622CAD99A45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF1A0CFD995AD189624A4DF42F837CC7E91B9412C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var observer in s_Observers) observer.DidChangeStorefront();
		IL2CPP_RUNTIME_CLASS_INIT(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var);
		List_1_t5A6D69A90896741CD34AAFF072502D7844EDF7A3 * L_0 = ((ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_StaticFields*)il2cpp_codegen_static_fields_for(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var))->get_s_Observers_4();
		NullCheck(L_0);
		Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5  L_1;
		L_1 = List_1_GetEnumerator_mF1A0CFD995AD189624A4DF42F837CC7E91B9412C(L_0, /*hidden argument*/List_1_GetEnumerator_mF1A0CFD995AD189624A4DF42F837CC7E91B9412C_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001e;
		}

IL_000f:
		{
			// foreach (var observer in s_Observers) observer.DidChangeStorefront();
			RuntimeObject* L_2;
			L_2 = Enumerator_get_Current_m256C3A016DB020EE3DADE774C8ED3B98145E40FF_inline((Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m256C3A016DB020EE3DADE774C8ED3B98145E40FF_RuntimeMethod_var);
			V_1 = L_2;
			// foreach (var observer in s_Observers) observer.DidChangeStorefront();
			RuntimeObject* L_3 = V_1;
			NullCheck(L_3);
			InterfaceActionInvoker0::Invoke(4 /* System.Void SA.iOS.StoreKit.ISN_iSKPaymentTransactionObserver::DidChangeStorefront() */, ISN_iSKPaymentTransactionObserver_tFE7A1EB3AC5DC32DF138E246BC7FE622CAD99A45_il2cpp_TypeInfo_var, L_3);
		}

IL_001e:
		{
			// foreach (var observer in s_Observers) observer.DidChangeStorefront();
			bool L_4;
			L_4 = Enumerator_MoveNext_m8B0028B35AB15EAF23FDFE22D0A1B85ECD5BA0BD((Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m8B0028B35AB15EAF23FDFE22D0A1B85ECD5BA0BD_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_000f;
			}
		}

IL_0027:
		{
			IL2CPP_LEAVE(0x38, FINALLY_0029);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD529F0745024A38E3ED28ABFA8D9B144060CE735((Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mD529F0745024A38E3ED28ABFA8D9B144060CE735_RuntimeMethod_var);
		IL2CPP_END_FINALLY(41)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x38, IL_0038)
	}

IL_0038:
	{
		// });
		return;
	}
}
// System.Void SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c::<SubscribeToNativeEvents>b__28_4(SA.iOS.StoreKit.ISN_SKProduct)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSubscribeToNativeEventsU3Eb__28_4_m4132254602933342D1FEE00AE77674AECB0E2591 (U3CU3Ec_t79B24AFAB670CF13FB1BB086FD76A08B64411198 * __this, ISN_SKProduct_tB70386270C96B57C2FB14E931332F98F0F186B15 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD529F0745024A38E3ED28ABFA8D9B144060CE735_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8B0028B35AB15EAF23FDFE22D0A1B85ECD5BA0BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m256C3A016DB020EE3DADE774C8ED3B98145E40FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_iSKPaymentTransactionObserver_tFE7A1EB3AC5DC32DF138E246BC7FE622CAD99A45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF1A0CFD995AD189624A4DF42F837CC7E91B9412C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var startTransaction = false;
		V_0 = (bool)0;
		// foreach (var observer in s_Observers) startTransaction = observer.OnShouldAddStorePayment(result);
		IL2CPP_RUNTIME_CLASS_INIT(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var);
		List_1_t5A6D69A90896741CD34AAFF072502D7844EDF7A3 * L_0 = ((ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_StaticFields*)il2cpp_codegen_static_fields_for(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var))->get_s_Observers_4();
		NullCheck(L_0);
		Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5  L_1;
		L_1 = List_1_GetEnumerator_mF1A0CFD995AD189624A4DF42F837CC7E91B9412C(L_0, /*hidden argument*/List_1_GetEnumerator_mF1A0CFD995AD189624A4DF42F837CC7E91B9412C_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0021;
		}

IL_0011:
		{
			// foreach (var observer in s_Observers) startTransaction = observer.OnShouldAddStorePayment(result);
			RuntimeObject* L_2;
			L_2 = Enumerator_get_Current_m256C3A016DB020EE3DADE774C8ED3B98145E40FF_inline((Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m256C3A016DB020EE3DADE774C8ED3B98145E40FF_RuntimeMethod_var);
			V_2 = L_2;
			// foreach (var observer in s_Observers) startTransaction = observer.OnShouldAddStorePayment(result);
			RuntimeObject* L_3 = V_2;
			ISN_SKProduct_tB70386270C96B57C2FB14E931332F98F0F186B15 * L_4 = ___result0;
			NullCheck(L_3);
			bool L_5;
			L_5 = InterfaceFuncInvoker1< bool, ISN_SKProduct_tB70386270C96B57C2FB14E931332F98F0F186B15 * >::Invoke(2 /* System.Boolean SA.iOS.StoreKit.ISN_iSKPaymentTransactionObserver::OnShouldAddStorePayment(SA.iOS.StoreKit.ISN_SKProduct) */, ISN_iSKPaymentTransactionObserver_tFE7A1EB3AC5DC32DF138E246BC7FE622CAD99A45_il2cpp_TypeInfo_var, L_3, L_4);
			V_0 = L_5;
		}

IL_0021:
		{
			// foreach (var observer in s_Observers) startTransaction = observer.OnShouldAddStorePayment(result);
			bool L_6;
			L_6 = Enumerator_MoveNext_m8B0028B35AB15EAF23FDFE22D0A1B85ECD5BA0BD((Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m8B0028B35AB15EAF23FDFE22D0A1B85ECD5BA0BD_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0011;
			}
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD529F0745024A38E3ED28ABFA8D9B144060CE735((Enumerator_tD02059CD5EC66E038187C632AD3474FE19CF76B5 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mD529F0745024A38E3ED28ABFA8D9B144060CE735_RuntimeMethod_var);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
	}

IL_003b:
	{
		// if (startTransaction)
		bool L_7 = V_0;
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		// AddPayment(result.ProductIdentifier);
		ISN_SKProduct_tB70386270C96B57C2FB14E931332F98F0F186B15 * L_9 = ___result0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = ISN_SKProduct_get_ProductIdentifier_mFE9C6DB2EE1B305622269F2E8949ACEE1273A547_inline(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ISN_SKPaymentQueue_tB60D6BCC440F0D3B4D15E682B37A3579F47D230D_il2cpp_TypeInfo_var);
		ISN_SKPaymentQueue_AddPayment_m24804E1ABA6E929CE19ADB4138EF2127036FB100(L_10, /*hidden argument*/NULL);
	}

IL_004c:
	{
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
// System.Void SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mD9067460513C30B4562C32C2C209767441B56D9F (U3CU3Ec__DisplayClass12_0_t259F77E81AD57B760C1ADF0FC76032345C0B9B80 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c__DisplayClass12_0::<AddPayment>b__0(SA.iOS.StoreKit.ISN_SKInitResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CAddPaymentU3Eb__0_m50A81B967268D2F6BD67D97766E9B7DE84690DBF (U3CU3Ec__DisplayClass12_0_t259F77E81AD57B760C1ADF0FC76032345C0B9B80 * __this, ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_iSKAPI_tF0DAD2993BE274EB620FC7D9129F7CEA839CD805_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ISN_SKLib.Api.AddPayment(productId);
		RuntimeObject* L_0;
		L_0 = ISN_SKLib_get_Api_mE8A40CBE492AA5C736F187615E3192B4EB6EA603(/*hidden argument*/NULL);
		String_t* L_1 = __this->get_productId_0();
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void SA.iOS.StoreKit.ISN_iSKAPI::AddPayment(System.String) */, ISN_iSKAPI_tF0DAD2993BE274EB620FC7D9129F7CEA839CD805_il2cpp_TypeInfo_var, L_0, L_1);
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
// System.Void SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_mEFCC8D2AC08B56961C26495F7876BBD2780F3D4E (U3CU3Ec__DisplayClass13_0_t82A96A498716BE4B4498FFB65DC8A080E2696468 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.StoreKit.ISN_SKPaymentQueue/<>c__DisplayClass13_0::<FinishTransaction>b__0(SA.iOS.StoreKit.ISN_SKInitResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CFinishTransactionU3Eb__0_m3C38EF981321422E669AAFACA5CF81A612F6FA6A (U3CU3Ec__DisplayClass13_0_t82A96A498716BE4B4498FFB65DC8A080E2696468 * __this, ISN_SKInitResult_t30C37055938F813CDB1A1C668836B187D2C71731 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_iSKAPI_tF0DAD2993BE274EB620FC7D9129F7CEA839CD805_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ISN_SKLib.Api.FinishTransaction(transaction);
		RuntimeObject* L_0;
		L_0 = ISN_SKLib_get_Api_mE8A40CBE492AA5C736F187615E3192B4EB6EA603(/*hidden argument*/NULL);
		RuntimeObject* L_1 = __this->get_transaction_0();
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void SA.iOS.StoreKit.ISN_iSKAPI::FinishTransaction(SA.iOS.StoreKit.ISN_iSKPaymentTransaction) */, ISN_iSKAPI_tF0DAD2993BE274EB620FC7D9129F7CEA839CD805_il2cpp_TypeInfo_var, L_0, L_1);
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
// System.Void SA.iOS.Social.ISN_TextMessage/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA2AF5F384052D347067A0AF187A1B3BEE33569A3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8918F2BDA86BE8B5D96447E240E938D792AB831C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8918F2BDA86BE8B5D96447E240E938D792AB831C * L_0 = (U3CU3Ec_t8918F2BDA86BE8B5D96447E240E938D792AB831C *)il2cpp_codegen_object_new(U3CU3Ec_t8918F2BDA86BE8B5D96447E240E938D792AB831C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m01478E0F30D2D103AE6E10E164B59207754351C1(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8918F2BDA86BE8B5D96447E240E938D792AB831C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8918F2BDA86BE8B5D96447E240E938D792AB831C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void SA.iOS.Social.ISN_TextMessage/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m01478E0F30D2D103AE6E10E164B59207754351C1 (U3CU3Ec_t8918F2BDA86BE8B5D96447E240E938D792AB831C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.Social.ISN_TextMessage/<>c::<.cctor>b__0_0(SA.iOS.Social.ISN_MessageComposeResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__0_0_m6C662191D93521F5C81F7291CABCDF740AC2702B (U3CU3Ec_t8918F2BDA86BE8B5D96447E240E938D792AB831C * __this, int32_t ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public static event Action<ISN_MessageComposeResult> OnTextMessageResult = delegate { };
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
// System.Void SA.iOS.Social.ISN_TextMessage/Internal::ISN_SendTextMessage(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_ISN_SendTextMessage_m63E28A910A9412BB3B4AE2FDF62A9C278B3BD2C2 (String_t* ___body0, String_t* ___recipients1, String_t* ___encodedMedia2, const RuntimeMethod* method)
{
	{
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
// System.Void SA.iOS.Social.ISN_TextMessage/NativeListener::OnTextMessageComposeResult(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeListener_OnTextMessageComposeResult_mFAC97ED412D9D146279D0421EFDF1FEEC5B164AA (NativeListener_t67BED7CC896E080EC5BF48CD15CD186291262B18 * __this, String_t* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m9F6378C783F6AC0EEF23F9F24A4EEB29AE73D820_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m48880B6DF302877F768269906EF27CF9980EDAC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_TextMessage_t982F0CF25C97F72D367854A79CFC6027324EE154_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnTextMessageComposeResultU3Eb__0_0_m5D95FFC1E9CFFB151E5EF66FC218247790BF6848_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498 * G_B2_0 = NULL;
	Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498 * G_B1_0 = NULL;
	{
		// var code = Convert.ToInt32(data);
		String_t* L_0 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Convert_ToInt32_mA1C10AB2A7C95E9DCAC473D1D88C74D60FA240ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// OnTextMessageResult((ISN_MessageComposeResult)code);
		IL2CPP_RUNTIME_CLASS_INIT(ISN_TextMessage_t982F0CF25C97F72D367854A79CFC6027324EE154_il2cpp_TypeInfo_var);
		Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498 * L_2 = ((ISN_TextMessage_t982F0CF25C97F72D367854A79CFC6027324EE154_StaticFields*)il2cpp_codegen_static_fields_for(ISN_TextMessage_t982F0CF25C97F72D367854A79CFC6027324EE154_il2cpp_TypeInfo_var))->get_OnTextMessageResult_0();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Action_1_Invoke_m9F6378C783F6AC0EEF23F9F24A4EEB29AE73D820(L_2, L_3, /*hidden argument*/Action_1_Invoke_m9F6378C783F6AC0EEF23F9F24A4EEB29AE73D820_RuntimeMethod_var);
		// OnTextMessageResult = delegate { };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110_il2cpp_TypeInfo_var);
		Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498 * L_4 = ((U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498 * L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110_il2cpp_TypeInfo_var);
		U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110 * L_6 = ((U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498 * L_7 = (Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498 *)il2cpp_codegen_object_new(Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498_il2cpp_TypeInfo_var);
		Action_1__ctor_m48880B6DF302877F768269906EF27CF9980EDAC1(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec_U3COnTextMessageComposeResultU3Eb__0_0_m5D95FFC1E9CFFB151E5EF66FC218247790BF6848_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m48880B6DF302877F768269906EF27CF9980EDAC1_RuntimeMethod_var);
		Action_1_tC1DFBBCA1CFD2BB8BCF6B4E9E78BB9AC6DBEF498 * L_8 = L_7;
		((U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_8);
		G_B2_0 = L_8;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ISN_TextMessage_t982F0CF25C97F72D367854A79CFC6027324EE154_il2cpp_TypeInfo_var);
		((ISN_TextMessage_t982F0CF25C97F72D367854A79CFC6027324EE154_StaticFields*)il2cpp_codegen_static_fields_for(ISN_TextMessage_t982F0CF25C97F72D367854A79CFC6027324EE154_il2cpp_TypeInfo_var))->set_OnTextMessageResult_0(G_B2_0);
		// }
		return;
	}
}
// System.Void SA.iOS.Social.ISN_TextMessage/NativeListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeListener__ctor_m12DB3FDC50DCE45812ABF0B9E6F91B80FF994F98 (NativeListener_t67BED7CC896E080EC5BF48CD15CD186291262B18 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_Singleton_1__ctor_m46E9870625A518B6682A4D39EF490D078FEF70A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ISN_Singleton_1__ctor_m46E9870625A518B6682A4D39EF490D078FEF70A3(__this, /*hidden argument*/ISN_Singleton_1__ctor_m46E9870625A518B6682A4D39EF490D078FEF70A3_RuntimeMethod_var);
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
// System.Void SA.iOS.Social.ISN_Twitter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m648C133F9BF0B9D4D3F57D25C9C64D7309DCA8A9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB612FA6C01CF59E9410CE34DE0BF9541025AEBEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB612FA6C01CF59E9410CE34DE0BF9541025AEBEE * L_0 = (U3CU3Ec_tB612FA6C01CF59E9410CE34DE0BF9541025AEBEE *)il2cpp_codegen_object_new(U3CU3Ec_tB612FA6C01CF59E9410CE34DE0BF9541025AEBEE_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m31908D4CB8A5A3730611887AE6986E4FD8096ADA(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB612FA6C01CF59E9410CE34DE0BF9541025AEBEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB612FA6C01CF59E9410CE34DE0BF9541025AEBEE_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void SA.iOS.Social.ISN_Twitter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m31908D4CB8A5A3730611887AE6986E4FD8096ADA (U3CU3Ec_tB612FA6C01CF59E9410CE34DE0BF9541025AEBEE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.Social.ISN_Twitter/<>c::<.cctor>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__6_0_m1ED04C4A5E6AE2CE415CFC29FFCA3E00EEB32577 (U3CU3Ec_tB612FA6C01CF59E9410CE34DE0BF9541025AEBEE * __this, const RuntimeMethod* method)
{
	{
		// public static event Action OnPostStart = delegate { };
		return;
	}
}
// System.Void SA.iOS.Social.ISN_Twitter/<>c::<.cctor>b__6_1(SA.Foundation.Templates.SA_Result)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__6_1_mCF78D61F42316E2EEBE9CAD5E2F7A03893D8CA42 (U3CU3Ec_tB612FA6C01CF59E9410CE34DE0BF9541025AEBEE * __this, SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public static event Action<SA_Result> OnPostResult = delegate { };
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
// System.Void SA.iOS.Social.ISN_Twitter/Internal::ISN_TwPost(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_ISN_TwPost_m6784FF1E95B9CEA1B0C017FAEEE0F41C43C235FA (String_t* ___text0, String_t* ___url1, String_t* ___encodedMedia2, const RuntimeMethod* method)
{
	{
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
// System.Void SA.iOS.Social.ISN_Twitter/NativeListener::OnTwitterPostFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeListener_OnTwitterPostFailed_m5C690ECB4F4A968A760B23643DB85BD9598D7071 (NativeListener_t2AE2C1EF80322C5B5F35000779FC06E9C3FF0725 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_Twitter_t8A20A02412BEB51CEA787BF6907FB456CBDAFB4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81705C352B1918412D3A5BA7D8B7F97F3EACBC11);
		s_Il2CppMethodInitialized = true;
	}
	SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * V_0 = NULL;
	{
		// var result = new SA_Result(new SA_Error(0, "Unknown Error"));
		SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * L_0 = (SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 *)il2cpp_codegen_object_new(SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1_il2cpp_TypeInfo_var);
		SA_Error__ctor_m631E82E9A0A7BCB5753C838CBEB2A6812131BA52(L_0, 0, _stringLiteral81705C352B1918412D3A5BA7D8B7F97F3EACBC11, /*hidden argument*/NULL);
		SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * L_1 = (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE *)il2cpp_codegen_object_new(SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE_il2cpp_TypeInfo_var);
		SA_Result__ctor_m4B0C6547881AC2426679E50B73F2CFFA45D1D1D3(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// OnPostResult(result);
		IL2CPP_RUNTIME_CLASS_INIT(ISN_Twitter_t8A20A02412BEB51CEA787BF6907FB456CBDAFB4D_il2cpp_TypeInfo_var);
		Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * L_2 = ((ISN_Twitter_t8A20A02412BEB51CEA787BF6907FB456CBDAFB4D_StaticFields*)il2cpp_codegen_static_fields_for(ISN_Twitter_t8A20A02412BEB51CEA787BF6907FB456CBDAFB4D_il2cpp_TypeInfo_var))->get_OnPostResult_1();
		SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * L_3 = V_0;
		NullCheck(L_2);
		Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764(L_2, L_3, /*hidden argument*/Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SA.iOS.Social.ISN_Twitter/NativeListener::OnTwitterPostSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeListener_OnTwitterPostSuccess_m78583AEB1DA1BE6C5B99B3F913C75447C01515F8 (NativeListener_t2AE2C1EF80322C5B5F35000779FC06E9C3FF0725 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_Twitter_t8A20A02412BEB51CEA787BF6907FB456CBDAFB4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * V_0 = NULL;
	{
		// var result = new SA_Result();
		SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * L_0 = (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE *)il2cpp_codegen_object_new(SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE_il2cpp_TypeInfo_var);
		SA_Result__ctor_mA8937F170D05BBA24B5C59BB5BBB4DBCFA69D629(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// OnPostResult(result);
		IL2CPP_RUNTIME_CLASS_INIT(ISN_Twitter_t8A20A02412BEB51CEA787BF6907FB456CBDAFB4D_il2cpp_TypeInfo_var);
		Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * L_1 = ((ISN_Twitter_t8A20A02412BEB51CEA787BF6907FB456CBDAFB4D_StaticFields*)il2cpp_codegen_static_fields_for(ISN_Twitter_t8A20A02412BEB51CEA787BF6907FB456CBDAFB4D_il2cpp_TypeInfo_var))->get_OnPostResult_1();
		SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * L_2 = V_0;
		NullCheck(L_1);
		Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764(L_1, L_2, /*hidden argument*/Action_1_Invoke_mCF6E230647B88998EC3F0DC44042DC472789E764_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SA.iOS.Social.ISN_Twitter/NativeListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeListener__ctor_mF52DD51D223D32868F9EBC700B8C3F2383526ACB (NativeListener_t2AE2C1EF80322C5B5F35000779FC06E9C3FF0725 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_Singleton_1__ctor_mD1375734B51A77ED086F6ED3F470035C98C99DE9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ISN_Singleton_1__ctor_mD1375734B51A77ED086F6ED3F470035C98C99DE9(__this, /*hidden argument*/ISN_Singleton_1__ctor_mD1375734B51A77ED086F6ED3F470035C98C99DE9_RuntimeMethod_var);
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
// System.Void SA.iOS.UIKit.ISN_UIAlertUtility/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC336B76CBAD8A96E0D613EAE7CECADDEF9A037CC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF7D107C15428F961368BCBD03604B0286EFE5F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF7D107C15428F961368BCBD03604B0286EFE5F09 * L_0 = (U3CU3Ec_tF7D107C15428F961368BCBD03604B0286EFE5F09 *)il2cpp_codegen_object_new(U3CU3Ec_tF7D107C15428F961368BCBD03604B0286EFE5F09_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m53EB5F83A7658E9869BC5EC2A45B4BBD037FB7CC(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF7D107C15428F961368BCBD03604B0286EFE5F09_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF7D107C15428F961368BCBD03604B0286EFE5F09_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void SA.iOS.UIKit.ISN_UIAlertUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m53EB5F83A7658E9869BC5EC2A45B4BBD037FB7CC (U3CU3Ec_tF7D107C15428F961368BCBD03604B0286EFE5F09 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.UIKit.ISN_UIAlertUtility/<>c::<ShowMessage>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CShowMessageU3Eb__0_0_mAA2D505FF39C804A1C86D2D6BCDA8AC51A35668C (U3CU3Ec_tF7D107C15428F961368BCBD03604B0286EFE5F09 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void SA.iOS.UIKit.ISN_UICalendar/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mE25F19DE9A0E65BB92E6091B582DCC2A9CB54BCF (U3CU3Ec__DisplayClass1_0_t4A3B3092B2CB9587C2A0B7FE317B8158B24DD870 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.UIKit.ISN_UICalendar/<>c__DisplayClass1_0::<PickDate>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CPickDateU3Eb__0_m5AE059E1F12CB8C469707FB5143D0D45B59D3F11 (U3CU3Ec__DisplayClass1_0_t4A3B3092B2CB9587C2A0B7FE317B8158B24DD870 * __this, String_t* ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m168C30157817DF3E1710919C8C8ED31D9EEEF064_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral650CD06570745708593096FE4EF5A6CC18E33F31);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// UnityEngine.Debug.Log("here date pick: " + time);
		String_t* L_0 = ___time0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral650CD06570745708593096FE4EF5A6CC18E33F31, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// var dt = DateTime.Parse(time);
		String_t* L_2 = ___time0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3;
		L_3 = DateTime_Parse_m15F41E956747FC3E7EEBB24E45AA8733C1966989(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// callback.Invoke(dt);
		Action_1_t2B33C6C2E077C8AA0861FADB5453D90C6F9A7B97 * L_4 = __this->get_callback_0();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_5 = V_0;
		NullCheck(L_4);
		Action_1_Invoke_m168C30157817DF3E1710919C8C8ED31D9EEEF064(L_4, L_5, /*hidden argument*/Action_1_Invoke_m168C30157817DF3E1710919C8C8ED31D9EEEF064_RuntimeMethod_var);
		// }));
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
// System.Void SA.iOS.UIKit.ISN_UIDateTimePicker/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m3E8F624BA7014AF466EED5FE8E57B11BD0507327 (U3CU3Ec__DisplayClass7_0_t9D2F0D64014A32ECD9FFE2F7484A3359B85DD882 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.UIKit.ISN_UIDateTimePicker/<>c__DisplayClass7_0::<Show>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CShowU3Eb__0_mE5889902C1B452F97AD4EBB83E2DB6AF82028969 (U3CU3Ec__DisplayClass7_0_t9D2F0D64014A32ECD9FFE2F7484A3359B85DD882 * __this, String_t* ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m168C30157817DF3E1710919C8C8ED31D9EEEF064_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var dt = DateTime.Parse(time);
		String_t* L_0 = ___time0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1;
		L_1 = DateTime_Parse_m15F41E956747FC3E7EEBB24E45AA8733C1966989(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// callback.Invoke(dt);
		Action_1_t2B33C6C2E077C8AA0861FADB5453D90C6F9A7B97 * L_2 = __this->get_callback_0();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3 = V_0;
		NullCheck(L_2);
		Action_1_Invoke_m168C30157817DF3E1710919C8C8ED31D9EEEF064(L_2, L_3, /*hidden argument*/Action_1_Invoke_m168C30157817DF3E1710919C8C8ED31D9EEEF064_RuntimeMethod_var);
		// }));
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
// System.Void SA.iOS.UIKit.ISN_UIImagePickerController/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m2DA706F30BD0F05DE95BB36C724E50EC0E100F89 (U3CU3Ec__DisplayClass1_0_tB88483A12772C5E444E87F2CB6D8618AA17D4927 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.UIKit.ISN_UIImagePickerController/<>c__DisplayClass1_0::<Present>b__0(SA.iOS.AVFoundation.ISN_AVAuthorizationStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CPresentU3Eb__0_m342EFEA00FE3716AEF3D2007CFD19DEF266CA6F9 (U3CU3Ec__DisplayClass1_0_tB88483A12772C5E444E87F2CB6D8618AA17D4927 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mFF907E3593C3D4AD822B1F1BD5D30494CEA74412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISN_UIPickerControllerResult_tCA7C312FBEFBE946A75BD9E9FBBDEB77F88679CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A44311C35B6614A6996BB036577C2CF56DD05B6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * V_1 = NULL;
	ISN_UIPickerControllerResult_tCA7C312FBEFBE946A75BD9E9FBBDEB77F88679CC * V_2 = NULL;
	{
		// if (status == ISN_AVAuthorizationStatus.Authorized)
		int32_t L_0 = ___status0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)3))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// StartPresenting(callback);
		ISN_UIImagePickerController_t5E19A899C36CEF2E58829CCD7D4EF76DCCF8E03F * L_2 = __this->get_U3CU3E4__this_0();
		Action_1_t33C7AA5928E86B6367AFDBF1055EB7751D2D699C * L_3 = __this->get_callback_1();
		NullCheck(L_2);
		ISN_UIImagePickerController_StartPresenting_m77671CC20CB0DB00B8679680B3D0F0FAEAEDAA0E(L_2, L_3, /*hidden argument*/NULL);
		goto IL_0041;
	}

IL_001f:
	{
		// var error = new SA_Error(1, "AVMediaType.Video Permission is missing");
		SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * L_4 = (SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 *)il2cpp_codegen_object_new(SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1_il2cpp_TypeInfo_var);
		SA_Error__ctor_m631E82E9A0A7BCB5753C838CBEB2A6812131BA52(L_4, 1, _stringLiteral0A44311C35B6614A6996BB036577C2CF56DD05B6, /*hidden argument*/NULL);
		V_1 = L_4;
		// var result = new ISN_UIPickerControllerResult(error);
		SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * L_5 = V_1;
		ISN_UIPickerControllerResult_tCA7C312FBEFBE946A75BD9E9FBBDEB77F88679CC * L_6 = (ISN_UIPickerControllerResult_tCA7C312FBEFBE946A75BD9E9FBBDEB77F88679CC *)il2cpp_codegen_object_new(ISN_UIPickerControllerResult_tCA7C312FBEFBE946A75BD9E9FBBDEB77F88679CC_il2cpp_TypeInfo_var);
		ISN_UIPickerControllerResult__ctor_m68E66EC229915EC656148BCE936B339877526A59(L_6, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		// callback.Invoke(result);
		Action_1_t33C7AA5928E86B6367AFDBF1055EB7751D2D699C * L_7 = __this->get_callback_1();
		ISN_UIPickerControllerResult_tCA7C312FBEFBE946A75BD9E9FBBDEB77F88679CC * L_8 = V_2;
		NullCheck(L_7);
		Action_1_Invoke_mFF907E3593C3D4AD822B1F1BD5D30494CEA74412(L_7, L_8, /*hidden argument*/Action_1_Invoke_mFF907E3593C3D4AD822B1F1BD5D30494CEA74412_RuntimeMethod_var);
	}

IL_0041:
	{
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
// System.Void SA.iOS.UIKit.ISN_UIImagePickerController/<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_m721592507B5C53D5A1F815EDD66ADB40D6A39061 (U3CU3Ec__DisplayClass26_0_t85E370B6792D0FF0CCE4E9C04BB7C674502D8062 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.UIKit.ISN_UIImagePickerController/<>c__DisplayClass26_0::<SaveScreenshotToCameraRoll>b__0(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0_U3CSaveScreenshotToCameraRollU3Eb__0_m6A0C667078DBE4705C40F7B728A5A708F600F16E (U3CU3Ec__DisplayClass26_0_t85E370B6792D0FF0CCE4E9C04BB7C674502D8062 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, const RuntimeMethod* method)
{
	{
		// ISN_PhotoAlbum.UIImageWriteToSavedPhotosAlbum(texture, callback);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___texture0;
		Action_1_tEF94D56DE08951CD5CEC531E913307D210792F20 * L_1 = __this->get_callback_0();
		ISN_PhotoAlbum_UIImageWriteToSavedPhotosAlbum_mF924AEF8A11127CD8FB8B5465A99220145473C89(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void SA.iOS.UIKit.ISN_UILib/SA_PluginSettingsWindowStylesRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_PluginSettingsWindowStylesRequest__ctor_m7AFA6D1600C06C137677BDACA8144ABF2839BFB7 (SA_PluginSettingsWindowStylesRequest_t36C7BC6794AC2DF9C0DDA80B47D4FAAC21C536FE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> ProductIdentifiers = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_ProductIdentifiers_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void SA.iOS.Social.ISN_Whatsapp/Internal::ISN_WP_ShareText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_ISN_WP_ShareText_mA33D34BD1083D11C0269715A7BC5FBE47842D606 (String_t* ___message0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SA.iOS.Social.ISN_Whatsapp/Internal::ISN_WP_ShareMedia(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_ISN_WP_ShareMedia_m34C819A7CEFF6F42A94B84E7BA8001C2C8648366 (String_t* ___encodedMedia0, const RuntimeMethod* method)
{
	{
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
// System.Void SA.iOS.Social.ISN_TextMessage/NativeListener/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC106C5613E0781272EB668A84BEE6AB09E80AF47 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110 * L_0 = (U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110 *)il2cpp_codegen_object_new(U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m45F56A3FDCA57F31735506111FD66ACC29E4AE68(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void SA.iOS.Social.ISN_TextMessage/NativeListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m45F56A3FDCA57F31735506111FD66ACC29E4AE68 (U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.Social.ISN_TextMessage/NativeListener/<>c::<OnTextMessageComposeResult>b__0_0(SA.iOS.Social.ISN_MessageComposeResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnTextMessageComposeResultU3Eb__0_0_m5D95FFC1E9CFFB151E5EF66FC218247790BF6848 (U3CU3Ec_t2CDD72E27EB489167D21195ADF880A433D1D0110 * __this, int32_t ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// OnTextMessageResult = delegate { };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ISN_NativeObject_get_NativeHashCode_m9EE78535A1146ABB3437B476B0E9C13460337D9F_inline (ISN_NativeObject_tCBEFEB9640F4BE02478CE5834ABB80EB299E044F * __this, const RuntimeMethod* method)
{
	{
		// get => m_NativeHashCode;
		uint64_t L_0 = __this->get_m_NativeHashCode_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 * ISN_GKScoreLoadResult_get_Leaderboard_m4808F3CA2359C9DBEC0D66E4735ABAFD525F6ADF_inline (ISN_GKScoreLoadResult_t57A8A5AEDF4143C5599DB1B6314E795F42AC5B13 * __this, const RuntimeMethod* method)
{
	{
		// public ISN_GKLeaderboard Leaderboard => m_Leaderboard;
		ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 * L_0 = __this->get_m_Leaderboard_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ISN_GKLeaderboard_get_MaxRange_m952301F52DE7B1306E8CCA8E90E22F05B96BC431_inline (ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 * __this, const RuntimeMethod* method)
{
	{
		// public long MaxRange => m_MaxRange;
		int64_t L_0 = __this->get_m_MaxRange_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ISN_GKScore_t61C79EFDE5BD5A770466331E28E6C7D520F08139 * ISN_GKLeaderboard_get_LocalPlayerScore_m1C24BB9087C445EB9026820C42DE86CFA39B2836_inline (ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 * __this, const RuntimeMethod* method)
{
	{
		// public ISN_GKScore LocalPlayerScore => m_LocalPlayerScore;
		ISN_GKScore_t61C79EFDE5BD5A770466331E28E6C7D520F08139 * L_0 = __this->get_m_LocalPlayerScore_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t08BB076155DD422337809CD51D7A12C5C78F05BC * ISN_GKLeaderboard_get_Scores_m7540DA208D58D6C205376E69DFD817C9862C47D9_inline (ISN_GKLeaderboard_t4789FD77A7E8756AF90CB7A688BE7E8533C41DA1 * __this, const RuntimeMethod* method)
{
	{
		// public List<ISN_GKScore> Scores => m_Scores;
		List_1_t08BB076155DD422337809CD51D7A12C5C78F05BC * L_0 = __this->get_m_Scores_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ISN_SKProduct_get_ProductIdentifier_mFE9C6DB2EE1B305622269F2E8949ACEE1273A547_inline (ISN_SKProduct_tB70386270C96B57C2FB14E931332F98F0F186B15 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ProductIdentifier;
		String_t* L_0 = __this->get_m_ProductIdentifier_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
