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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Single,System.Object>
struct Dictionary_2_t28D6C5A32D32B52B1D79D88E28471D4EB8BDEC88;
// System.Collections.Generic.Dictionary`2<System.Single,UnityEngine.Texture2D>
struct Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D>
struct Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<SA.Foundation.Events.SA_Event/SafeActionInfo>
struct IEnumerable_1_t01F47856FF09E44D158118C3CFA1FAEDE60CC737;
// System.Collections.Generic.IEqualityComparer`1<System.Single>
struct IEqualityComparer_1_t6150250D280935445F98D4207E3F728AB0589158;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Single,UnityEngine.Texture2D>
struct KeyCollection_tAF211D8046E9DC576EE43455C2F1E4A66EEF8F6E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.Texture2D>
struct KeyCollection_t5BF010F61696931AD604E5661D57B0C3E75F3F89;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<SA.Foundation.Localization.SA_ISOLanguage>
struct List_1_t0E869E1E4D59E7247073977786D71763115C251C;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<SA.Foundation.Events.SA_Event/SafeActionInfo>
struct List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Single,UnityEngine.Texture2D>
struct ValueCollection_t5947BDD7404873FB181A37484684C0213F5EC9C2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.Texture2D>
struct ValueCollection_tE5FE75610567CA88CAC35F1A7E298EC8ED244E01;
// System.Collections.Generic.Dictionary`2/Entry<System.Single,UnityEngine.Texture2D>[]
struct EntryU5BU5D_tE9385B45BEDE240CD8C0BEC072D764BBC19F3DA9;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.Texture2D>[]
struct EntryU5BU5D_tEBC229867AD1A3EE9B8B6A34263272DECBFE37FA;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// SA.Foundation.Localization.SA_ISOLanguage[]
struct SA_ISOLanguageU5BU5D_t3AD265E2DB92C3DC4EFE1C73D348AA25BBEAD13C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// SA.Foundation.Events.SA_Event/SafeActionInfo[]
struct SafeActionInfoU5BU5D_t8EC75E2F5FDD5854D189EACE7D6CD4F6565613C2;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD;
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// SA.Foundation.Config.PluginVersion
struct PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0;
// SA.Foundation.Config.PluginVersionHandler
struct PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// SA.Foundation.Config.SA_Config
struct SA_Config_t5F3F515AB24EAB9F334CCAEE1677EE2A7FC103F4;
// SA.Foundation.Templates.SA_DataResult
struct SA_DataResult_tF0A5319D09E80AE65AF389F07D60BD8DB8353144;
// SA.Foundation.Templates.SA_Error
struct SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1;
// SA.Foundation.Events.SA_Event
struct SA_Event_t3F394B9F2E2D192A7D1476DB378EC8B1A6ABB3C0;
// SA.Foundation.Localization.SA_ISOLanguage
struct SA_ISOLanguage_tFD4C1E2DC09F0DBA4D75D25DC4C6EF03295A032C;
// SA.Foundation.Localization.SA_ISOLanguagesList
struct SA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09;
// SA.Foundation.Utility.SA_Plugins
struct SA_Plugins_tA649CE7ECD352BBFE5003C52E1A3B674D1DCB9EB;
// SA.Foundation.Templates.SA_Result
struct SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE;
// SA.Foundation.Patterns.SA_ScriptableSettings
struct SA_ScriptableSettings_t713FB6ED1BCD9406BD9C6B0417FF99470A1FAA06;
// SA.Foundation.Templates.SA_iResult
struct SA_iResult_t0E54468822EC838F6867EF5235CCB1A2C1AD7352;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.IO.StreamWriter
struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// SA.Foundation.UtilitiesEditor.SA_AssetDatabase/SA_AssetDatabaseProxy
struct SA_AssetDatabaseProxy_t37301E4EF7263BEC105E6AA88B5917303CD51373;
// SA.Foundation.Events.SA_Event/SafeActionInfo
struct SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F;
// SA.Foundation.Utility.SA_ScreenUtil/<TakeScreenshotCoroutine>d__3
struct U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E;
// SA.Foundation.Utility.SA_ScreenUtil/CameraScreenshot
struct CameraScreenshot_t82F81A9CDEF95F8563B4738E4F233715CE72BF66;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0E869E1E4D59E7247073977786D71763115C251C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SA_Config_t5F3F515AB24EAB9F334CCAEE1677EE2A7FC103F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SA_LanguagesUtil_t34DD0C84CE4066D74D1438FF04546520E837C382_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SA_iResult_t0E54468822EC838F6867EF5235CCB1A2C1AD7352_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08668320993C3164BC22AB9D68365F41955E1415;
IL2CPP_EXTERN_C String_t* _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40;
IL2CPP_EXTERN_C String_t* _stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539;
IL2CPP_EXTERN_C String_t* _stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE;
IL2CPP_EXTERN_C String_t* _stringLiteral2740C7BF0C86A9783445718129FEACE4BE93D7A5;
IL2CPP_EXTERN_C String_t* _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C;
IL2CPP_EXTERN_C String_t* _stringLiteral5295380188F75D696383F8BDB2147F0053791372;
IL2CPP_EXTERN_C String_t* _stringLiteral53173FD24FAC7FA30EE5B3EA1354A35041D312D1;
IL2CPP_EXTERN_C String_t* _stringLiteral54D98A8023A2C580D7234DF0840448A853B4A271;
IL2CPP_EXTERN_C String_t* _stringLiteral855DC2CE49DCC1C549D22D5DB0CF5A8D5ABF0987;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteralB368C03A9B5EB3078694496B091F893CAF388FC8;
IL2CPP_EXTERN_C String_t* _stringLiteralCBA167B74ED98F3D69E3750C97949477655AB59C;
IL2CPP_EXTERN_C String_t* _stringLiteralCC9F0133B3C053AD6D50D4DB8368E98518DA0D6D;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
IL2CPP_EXTERN_C String_t* _stringLiteralFA7B3C8DA4F674814F057D49791CE6CB2B8F5DBD;
IL2CPP_EXTERN_C String_t* _stringLiteralFD2BA174423BC7FCC9FD8FA37E7008C097EE4AB2;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m48902101D8F84E0110E1EA89779FE035FC93C460_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m4064F1527445A08FFC585A12F7E58A8CECF96915_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m3A7959BCA4CA296B9C2ADA34B9C68A24D7E32C98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m86DF07C10A09ADA398C99416D217742A0183E677_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCC7857F1BA7928609857BFC242195172DA507392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF92F157D73581D456D3EB4212D3D86753E755C9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB723BCAD2AA6A847709F46A7D22872EFD9B170E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mF188136D0EFEA6D70747371218898D2BDDC06AF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mDADC44E994E162D25CFE5F9BEC44B0912A73C1E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m78D134B2270B295C6FBFA7FA700450296DE445F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD4EC0DBDC6B68468AAAFB78A4DE40BCDAF7CE380_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mEEC7896F047DCCD2779634CF8E67B457F5FBE128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF64717490940F6733B0905424AB40A31F26F8096_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m28EC4675D681115ACF4E4B66C93EF22F89D4E6B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4D4C4A59E734FCD07ECAD8D56C4980045BAF92A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCameraScreenshot_t82F81A9CDEF95F8563B4738E4F233715CE72BF66_m55E27F560B160530C644F9C1159582BD9E593549_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisPluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0_m89201ABDD87BD3FE600675DEF99CA5854CBDE13A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisSA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09_mB4C656ED0465469F661C82331499492DA1B71C1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC670366175AF1378C4DD1D00FEABA7DCFDD2C776_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mEBAAE9DC5131FCB01A11652052FA28423D6DBBE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m557DF2E2E29EA9EFBCEB0E839E4F447DF985DD51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6ABE5DC192AEE25946217AA5405E68D92675A629_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mE064FBC0F861BAD6F075070485ECFE8ADB5B400E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m264EFBE445777909A21B4652A7AA79B1E10EC874_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m32077E95ECC5A06AA379D63701FB0B563E499349_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m908B74FD954D8C65062D3955FE2B91EB0BB8488C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PluginVersionHandler_get_PluginVersion_mFA13C88082085D9C3368E7C21C16EC2609E4CD9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SA_Plugins_OnDisabledAPIUseAttempt_m86031B394E80311D3A4027D1C431F42A9DFDF4F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTakeScreenshotCoroutineU3Ed__3_System_Collections_IEnumerator_Reset_m336F489A40E72E2F998D14FEB1E51595DAE8EA24_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t7C2726FA3C0835290F88A0ACEDA4EF5458A73512 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Single,UnityEngine.Texture2D>
struct  Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE9385B45BEDE240CD8C0BEC072D764BBC19F3DA9* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tAF211D8046E9DC576EE43455C2F1E4A66EEF8F6E * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t5947BDD7404873FB181A37484684C0213F5EC9C2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9, ___entries_1)); }
	inline EntryU5BU5D_tE9385B45BEDE240CD8C0BEC072D764BBC19F3DA9* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE9385B45BEDE240CD8C0BEC072D764BBC19F3DA9** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE9385B45BEDE240CD8C0BEC072D764BBC19F3DA9* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9, ___keys_7)); }
	inline KeyCollection_tAF211D8046E9DC576EE43455C2F1E4A66EEF8F6E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tAF211D8046E9DC576EE43455C2F1E4A66EEF8F6E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tAF211D8046E9DC576EE43455C2F1E4A66EEF8F6E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9, ___values_8)); }
	inline ValueCollection_t5947BDD7404873FB181A37484684C0213F5EC9C2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t5947BDD7404873FB181A37484684C0213F5EC9C2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t5947BDD7404873FB181A37484684C0213F5EC9C2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D>
struct  Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tEBC229867AD1A3EE9B8B6A34263272DECBFE37FA* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t5BF010F61696931AD604E5661D57B0C3E75F3F89 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tE5FE75610567CA88CAC35F1A7E298EC8ED244E01 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C, ___entries_1)); }
	inline EntryU5BU5D_tEBC229867AD1A3EE9B8B6A34263272DECBFE37FA* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tEBC229867AD1A3EE9B8B6A34263272DECBFE37FA** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tEBC229867AD1A3EE9B8B6A34263272DECBFE37FA* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C, ___keys_7)); }
	inline KeyCollection_t5BF010F61696931AD604E5661D57B0C3E75F3F89 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t5BF010F61696931AD604E5661D57B0C3E75F3F89 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t5BF010F61696931AD604E5661D57B0C3E75F3F89 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C, ___values_8)); }
	inline ValueCollection_tE5FE75610567CA88CAC35F1A7E298EC8ED244E01 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tE5FE75610567CA88CAC35F1A7E298EC8ED244E01 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tE5FE75610567CA88CAC35F1A7E298EC8ED244E01 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<SA.Foundation.Localization.SA_ISOLanguage>
struct  List_1_t0E869E1E4D59E7247073977786D71763115C251C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SA_ISOLanguageU5BU5D_t3AD265E2DB92C3DC4EFE1C73D348AA25BBEAD13C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0E869E1E4D59E7247073977786D71763115C251C, ____items_1)); }
	inline SA_ISOLanguageU5BU5D_t3AD265E2DB92C3DC4EFE1C73D348AA25BBEAD13C* get__items_1() const { return ____items_1; }
	inline SA_ISOLanguageU5BU5D_t3AD265E2DB92C3DC4EFE1C73D348AA25BBEAD13C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SA_ISOLanguageU5BU5D_t3AD265E2DB92C3DC4EFE1C73D348AA25BBEAD13C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0E869E1E4D59E7247073977786D71763115C251C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0E869E1E4D59E7247073977786D71763115C251C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0E869E1E4D59E7247073977786D71763115C251C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0E869E1E4D59E7247073977786D71763115C251C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SA_ISOLanguageU5BU5D_t3AD265E2DB92C3DC4EFE1C73D348AA25BBEAD13C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0E869E1E4D59E7247073977786D71763115C251C_StaticFields, ____emptyArray_5)); }
	inline SA_ISOLanguageU5BU5D_t3AD265E2DB92C3DC4EFE1C73D348AA25BBEAD13C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SA_ISOLanguageU5BU5D_t3AD265E2DB92C3DC4EFE1C73D348AA25BBEAD13C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SA_ISOLanguageU5BU5D_t3AD265E2DB92C3DC4EFE1C73D348AA25BBEAD13C* value)
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


// System.Collections.Generic.List`1<SA.Foundation.Events.SA_Event/SafeActionInfo>
struct  List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SafeActionInfoU5BU5D_t8EC75E2F5FDD5854D189EACE7D6CD4F6565613C2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7, ____items_1)); }
	inline SafeActionInfoU5BU5D_t8EC75E2F5FDD5854D189EACE7D6CD4F6565613C2* get__items_1() const { return ____items_1; }
	inline SafeActionInfoU5BU5D_t8EC75E2F5FDD5854D189EACE7D6CD4F6565613C2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SafeActionInfoU5BU5D_t8EC75E2F5FDD5854D189EACE7D6CD4F6565613C2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SafeActionInfoU5BU5D_t8EC75E2F5FDD5854D189EACE7D6CD4F6565613C2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7_StaticFields, ____emptyArray_5)); }
	inline SafeActionInfoU5BU5D_t8EC75E2F5FDD5854D189EACE7D6CD4F6565613C2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SafeActionInfoU5BU5D_t8EC75E2F5FDD5854D189EACE7D6CD4F6565613C2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SafeActionInfoU5BU5D_t8EC75E2F5FDD5854D189EACE7D6CD4F6565613C2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// SA.Foundation.Config.PluginVersion
struct  PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0  : public RuntimeObject
{
public:
	// System.Int32 SA.Foundation.Config.PluginVersion::MajorVersion
	int32_t ___MajorVersion_0;
	// System.Int32 SA.Foundation.Config.PluginVersion::MinorVersion
	int32_t ___MinorVersion_1;
	// System.Action SA.Foundation.Config.PluginVersion::SaveDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___SaveDelegate_2;

public:
	inline static int32_t get_offset_of_MajorVersion_0() { return static_cast<int32_t>(offsetof(PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0, ___MajorVersion_0)); }
	inline int32_t get_MajorVersion_0() const { return ___MajorVersion_0; }
	inline int32_t* get_address_of_MajorVersion_0() { return &___MajorVersion_0; }
	inline void set_MajorVersion_0(int32_t value)
	{
		___MajorVersion_0 = value;
	}

	inline static int32_t get_offset_of_MinorVersion_1() { return static_cast<int32_t>(offsetof(PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0, ___MinorVersion_1)); }
	inline int32_t get_MinorVersion_1() const { return ___MinorVersion_1; }
	inline int32_t* get_address_of_MinorVersion_1() { return &___MinorVersion_1; }
	inline void set_MinorVersion_1(int32_t value)
	{
		___MinorVersion_1 = value;
	}

	inline static int32_t get_offset_of_SaveDelegate_2() { return static_cast<int32_t>(offsetof(PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0, ___SaveDelegate_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_SaveDelegate_2() const { return ___SaveDelegate_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_SaveDelegate_2() { return &___SaveDelegate_2; }
	inline void set_SaveDelegate_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___SaveDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SaveDelegate_2), (void*)value);
	}
};


// SA.Foundation.Config.PluginVersionHandler
struct  PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335  : public RuntimeObject
{
public:
	// System.String SA.Foundation.Config.PluginVersionHandler::m_filename
	String_t* ___m_filename_0;
	// SA.Foundation.Config.PluginVersion SA.Foundation.Config.PluginVersionHandler::m_pluginVersion
	PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * ___m_pluginVersion_1;

public:
	inline static int32_t get_offset_of_m_filename_0() { return static_cast<int32_t>(offsetof(PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335, ___m_filename_0)); }
	inline String_t* get_m_filename_0() const { return ___m_filename_0; }
	inline String_t** get_address_of_m_filename_0() { return &___m_filename_0; }
	inline void set_m_filename_0(String_t* value)
	{
		___m_filename_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_filename_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_pluginVersion_1() { return static_cast<int32_t>(offsetof(PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335, ___m_pluginVersion_1)); }
	inline PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * get_m_pluginVersion_1() const { return ___m_pluginVersion_1; }
	inline PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 ** get_address_of_m_pluginVersion_1() { return &___m_pluginVersion_1; }
	inline void set_m_pluginVersion_1(PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * value)
	{
		___m_pluginVersion_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_pluginVersion_1), (void*)value);
	}
};


// SA.Foundation.UtilitiesEditor.SA_AssetDatabase
struct  SA_AssetDatabase_tF95963E33A0113EE3B3313740155F947B73398BD  : public RuntimeObject
{
public:

public:
};


// SA.Foundation.Config.SA_Config
struct  SA_Config_t5F3F515AB24EAB9F334CCAEE1677EE2A7FC103F4  : public RuntimeObject
{
public:

public:
};

struct SA_Config_t5F3F515AB24EAB9F334CCAEE1677EE2A7FC103F4_StaticFields
{
public:
	// SA.Foundation.Config.PluginVersionHandler SA.Foundation.Config.SA_Config::s_FoundationVersion
	PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * ___s_FoundationVersion_36;

public:
	inline static int32_t get_offset_of_s_FoundationVersion_36() { return static_cast<int32_t>(offsetof(SA_Config_t5F3F515AB24EAB9F334CCAEE1677EE2A7FC103F4_StaticFields, ___s_FoundationVersion_36)); }
	inline PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * get_s_FoundationVersion_36() const { return ___s_FoundationVersion_36; }
	inline PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 ** get_address_of_s_FoundationVersion_36() { return &___s_FoundationVersion_36; }
	inline void set_s_FoundationVersion_36(PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * value)
	{
		___s_FoundationVersion_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_FoundationVersion_36), (void*)value);
	}
};


// SA.Foundation.UtilitiesEditor.SA_EditorUtility
struct  SA_EditorUtility_t6DE2C89B90D3D8B1408D25800931B57BBFBA069E  : public RuntimeObject
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


// SA.Foundation.Events.SA_Event
struct  SA_Event_t3F394B9F2E2D192A7D1476DB378EC8B1A6ABB3C0  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<SA.Foundation.Events.SA_Event/SafeActionInfo> SA.Foundation.Events.SA_Event::m_targetedActions
	List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * ___m_targetedActions_0;

public:
	inline static int32_t get_offset_of_m_targetedActions_0() { return static_cast<int32_t>(offsetof(SA_Event_t3F394B9F2E2D192A7D1476DB378EC8B1A6ABB3C0, ___m_targetedActions_0)); }
	inline List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * get_m_targetedActions_0() const { return ___m_targetedActions_0; }
	inline List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 ** get_address_of_m_targetedActions_0() { return &___m_targetedActions_0; }
	inline void set_m_targetedActions_0(List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * value)
	{
		___m_targetedActions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_targetedActions_0), (void*)value);
	}
};


// SA.Foundation.Utility.SA_FilesUtil
struct  SA_FilesUtil_tBB7BBAAFAB5BBFC07114CD0F834D2CBAA9766936  : public RuntimeObject
{
public:

public:
};


// SA.Foundation.Localization.SA_ISOLanguage
struct  SA_ISOLanguage_tFD4C1E2DC09F0DBA4D75D25DC4C6EF03295A032C  : public RuntimeObject
{
public:
	// System.String SA.Foundation.Localization.SA_ISOLanguage::m_code
	String_t* ___m_code_0;
	// System.String SA.Foundation.Localization.SA_ISOLanguage::m_name
	String_t* ___m_name_1;
	// System.String SA.Foundation.Localization.SA_ISOLanguage::m_nativeName
	String_t* ___m_nativeName_2;

public:
	inline static int32_t get_offset_of_m_code_0() { return static_cast<int32_t>(offsetof(SA_ISOLanguage_tFD4C1E2DC09F0DBA4D75D25DC4C6EF03295A032C, ___m_code_0)); }
	inline String_t* get_m_code_0() const { return ___m_code_0; }
	inline String_t** get_address_of_m_code_0() { return &___m_code_0; }
	inline void set_m_code_0(String_t* value)
	{
		___m_code_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_code_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_1() { return static_cast<int32_t>(offsetof(SA_ISOLanguage_tFD4C1E2DC09F0DBA4D75D25DC4C6EF03295A032C, ___m_name_1)); }
	inline String_t* get_m_name_1() const { return ___m_name_1; }
	inline String_t** get_address_of_m_name_1() { return &___m_name_1; }
	inline void set_m_name_1(String_t* value)
	{
		___m_name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_nativeName_2() { return static_cast<int32_t>(offsetof(SA_ISOLanguage_tFD4C1E2DC09F0DBA4D75D25DC4C6EF03295A032C, ___m_nativeName_2)); }
	inline String_t* get_m_nativeName_2() const { return ___m_nativeName_2; }
	inline String_t** get_address_of_m_nativeName_2() { return &___m_nativeName_2; }
	inline void set_m_nativeName_2(String_t* value)
	{
		___m_nativeName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nativeName_2), (void*)value);
	}
};


// SA.Foundation.Localization.SA_ISOLanguagesList
struct  SA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<SA.Foundation.Localization.SA_ISOLanguage> SA.Foundation.Localization.SA_ISOLanguagesList::m_lanuages
	List_1_t0E869E1E4D59E7247073977786D71763115C251C * ___m_lanuages_0;
	// System.Collections.Generic.List`1<System.String> SA.Foundation.Localization.SA_ISOLanguagesList::m_names
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___m_names_1;

public:
	inline static int32_t get_offset_of_m_lanuages_0() { return static_cast<int32_t>(offsetof(SA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09, ___m_lanuages_0)); }
	inline List_1_t0E869E1E4D59E7247073977786D71763115C251C * get_m_lanuages_0() const { return ___m_lanuages_0; }
	inline List_1_t0E869E1E4D59E7247073977786D71763115C251C ** get_address_of_m_lanuages_0() { return &___m_lanuages_0; }
	inline void set_m_lanuages_0(List_1_t0E869E1E4D59E7247073977786D71763115C251C * value)
	{
		___m_lanuages_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_lanuages_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_names_1() { return static_cast<int32_t>(offsetof(SA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09, ___m_names_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_m_names_1() const { return ___m_names_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_m_names_1() { return &___m_names_1; }
	inline void set_m_names_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___m_names_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_names_1), (void*)value);
	}
};


// SA.Foundation.Utility.SA_IconManager
struct  SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796  : public RuntimeObject
{
public:

public:
};

struct SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D> SA.Foundation.Utility.SA_IconManager::s_icons
	Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C * ___s_icons_0;
	// System.Collections.Generic.Dictionary`2<System.Single,UnityEngine.Texture2D> SA.Foundation.Utility.SA_IconManager::s_colorIcons
	Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9 * ___s_colorIcons_1;

public:
	inline static int32_t get_offset_of_s_icons_0() { return static_cast<int32_t>(offsetof(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_StaticFields, ___s_icons_0)); }
	inline Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C * get_s_icons_0() const { return ___s_icons_0; }
	inline Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C ** get_address_of_s_icons_0() { return &___s_icons_0; }
	inline void set_s_icons_0(Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C * value)
	{
		___s_icons_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_icons_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_colorIcons_1() { return static_cast<int32_t>(offsetof(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_StaticFields, ___s_colorIcons_1)); }
	inline Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9 * get_s_colorIcons_1() const { return ___s_colorIcons_1; }
	inline Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9 ** get_address_of_s_colorIcons_1() { return &___s_colorIcons_1; }
	inline void set_s_colorIcons_1(Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9 * value)
	{
		___s_colorIcons_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_colorIcons_1), (void*)value);
	}
};


// SA.Foundation.Localization.SA_LanguagesUtil
struct  SA_LanguagesUtil_t34DD0C84CE4066D74D1438FF04546520E837C382  : public RuntimeObject
{
public:

public:
};

struct SA_LanguagesUtil_t34DD0C84CE4066D74D1438FF04546520E837C382_StaticFields
{
public:
	// SA.Foundation.Localization.SA_ISOLanguagesList SA.Foundation.Localization.SA_LanguagesUtil::m_isoLanguages
	SA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09 * ___m_isoLanguages_0;

public:
	inline static int32_t get_offset_of_m_isoLanguages_0() { return static_cast<int32_t>(offsetof(SA_LanguagesUtil_t34DD0C84CE4066D74D1438FF04546520E837C382_StaticFields, ___m_isoLanguages_0)); }
	inline SA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09 * get_m_isoLanguages_0() const { return ___m_isoLanguages_0; }
	inline SA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09 ** get_address_of_m_isoLanguages_0() { return &___m_isoLanguages_0; }
	inline void set_m_isoLanguages_0(SA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09 * value)
	{
		___m_isoLanguages_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_isoLanguages_0), (void*)value);
	}
};


// SA.Foundation.Utility.SA_PathUtil
struct  SA_PathUtil_t3BA30BF82E6B144A06E234C5BEE75A1D91B61237  : public RuntimeObject
{
public:

public:
};


// SA.Foundation.Utility.SA_Plugins
struct  SA_Plugins_tA649CE7ECD352BBFE5003C52E1A3B674D1DCB9EB  : public RuntimeObject
{
public:

public:
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


// SA.Foundation.Utility.SA_ScreenUtil
struct  SA_ScreenUtil_tC4210DF42D55EAC906FC7CA46D29C0848ADADC95  : public RuntimeObject
{
public:

public:
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

// SA.Foundation.UtilitiesEditor.SA_AssetDatabase/SA_AssetDatabaseProxy
struct  SA_AssetDatabaseProxy_t37301E4EF7263BEC105E6AA88B5917303CD51373  : public RuntimeObject
{
public:

public:
};


// SA.Foundation.Events.SA_Event/SafeActionInfo
struct  SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F  : public RuntimeObject
{
public:
	// System.Action SA.Foundation.Events.SA_Event/SafeActionInfo::Action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___Action_0;
	// System.Object SA.Foundation.Events.SA_Event/SafeActionInfo::Target
	RuntimeObject * ___Target_1;

public:
	inline static int32_t get_offset_of_Action_0() { return static_cast<int32_t>(offsetof(SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F, ___Action_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_Action_0() const { return ___Action_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_Action_0() { return &___Action_0; }
	inline void set_Action_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___Action_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Action_0), (void*)value);
	}

	inline static int32_t get_offset_of_Target_1() { return static_cast<int32_t>(offsetof(SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F, ___Target_1)); }
	inline RuntimeObject * get_Target_1() const { return ___Target_1; }
	inline RuntimeObject ** get_address_of_Target_1() { return &___Target_1; }
	inline void set_Target_1(RuntimeObject * value)
	{
		___Target_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Target_1), (void*)value);
	}
};


// SA.Foundation.Utility.SA_ScreenUtil/<TakeScreenshotCoroutine>d__3
struct  U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E  : public RuntimeObject
{
public:
	// System.Int32 SA.Foundation.Utility.SA_ScreenUtil/<TakeScreenshotCoroutine>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SA.Foundation.Utility.SA_ScreenUtil/<TakeScreenshotCoroutine>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 SA.Foundation.Utility.SA_ScreenUtil/<TakeScreenshotCoroutine>d__3::maxSize
	int32_t ___maxSize_2;
	// System.Action`1<UnityEngine.Texture2D> SA.Foundation.Utility.SA_ScreenUtil/<TakeScreenshotCoroutine>d__3::callback
	Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * ___callback_3;
	// System.Int32 SA.Foundation.Utility.SA_ScreenUtil/<TakeScreenshotCoroutine>d__3::<width>5__1
	int32_t ___U3CwidthU3E5__1_4;
	// System.Int32 SA.Foundation.Utility.SA_ScreenUtil/<TakeScreenshotCoroutine>d__3::<height>5__2
	int32_t ___U3CheightU3E5__2_5;
	// UnityEngine.Texture2D SA.Foundation.Utility.SA_ScreenUtil/<TakeScreenshotCoroutine>d__3::<tex>5__3
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U3CtexU3E5__3_6;
	// System.Int32 SA.Foundation.Utility.SA_ScreenUtil/<TakeScreenshotCoroutine>d__3::<biggestSide>5__4
	int32_t ___U3CbiggestSideU3E5__4_7;
	// System.Single SA.Foundation.Utility.SA_ScreenUtil/<TakeScreenshotCoroutine>d__3::<scale>5__5
	float ___U3CscaleU3E5__5_8;
	// UnityEngine.Texture2D SA.Foundation.Utility.SA_ScreenUtil/<TakeScreenshotCoroutine>d__3::<resized>5__6
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U3CresizedU3E5__6_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_maxSize_2() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E, ___maxSize_2)); }
	inline int32_t get_maxSize_2() const { return ___maxSize_2; }
	inline int32_t* get_address_of_maxSize_2() { return &___maxSize_2; }
	inline void set_maxSize_2(int32_t value)
	{
		___maxSize_2 = value;
	}

	inline static int32_t get_offset_of_callback_3() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E, ___callback_3)); }
	inline Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * get_callback_3() const { return ___callback_3; }
	inline Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA ** get_address_of_callback_3() { return &___callback_3; }
	inline void set_callback_3(Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * value)
	{
		___callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwidthU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E, ___U3CwidthU3E5__1_4)); }
	inline int32_t get_U3CwidthU3E5__1_4() const { return ___U3CwidthU3E5__1_4; }
	inline int32_t* get_address_of_U3CwidthU3E5__1_4() { return &___U3CwidthU3E5__1_4; }
	inline void set_U3CwidthU3E5__1_4(int32_t value)
	{
		___U3CwidthU3E5__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E, ___U3CheightU3E5__2_5)); }
	inline int32_t get_U3CheightU3E5__2_5() const { return ___U3CheightU3E5__2_5; }
	inline int32_t* get_address_of_U3CheightU3E5__2_5() { return &___U3CheightU3E5__2_5; }
	inline void set_U3CheightU3E5__2_5(int32_t value)
	{
		___U3CheightU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CtexU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E, ___U3CtexU3E5__3_6)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_U3CtexU3E5__3_6() const { return ___U3CtexU3E5__3_6; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_U3CtexU3E5__3_6() { return &___U3CtexU3E5__3_6; }
	inline void set_U3CtexU3E5__3_6(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___U3CtexU3E5__3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtexU3E5__3_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbiggestSideU3E5__4_7() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E, ___U3CbiggestSideU3E5__4_7)); }
	inline int32_t get_U3CbiggestSideU3E5__4_7() const { return ___U3CbiggestSideU3E5__4_7; }
	inline int32_t* get_address_of_U3CbiggestSideU3E5__4_7() { return &___U3CbiggestSideU3E5__4_7; }
	inline void set_U3CbiggestSideU3E5__4_7(int32_t value)
	{
		___U3CbiggestSideU3E5__4_7 = value;
	}

	inline static int32_t get_offset_of_U3CscaleU3E5__5_8() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E, ___U3CscaleU3E5__5_8)); }
	inline float get_U3CscaleU3E5__5_8() const { return ___U3CscaleU3E5__5_8; }
	inline float* get_address_of_U3CscaleU3E5__5_8() { return &___U3CscaleU3E5__5_8; }
	inline void set_U3CscaleU3E5__5_8(float value)
	{
		___U3CscaleU3E5__5_8 = value;
	}

	inline static int32_t get_offset_of_U3CresizedU3E5__6_9() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E, ___U3CresizedU3E5__6_9)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_U3CresizedU3E5__6_9() const { return ___U3CresizedU3E5__6_9; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_U3CresizedU3E5__6_9() { return &___U3CresizedU3E5__6_9; }
	inline void set_U3CresizedU3E5__6_9(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___U3CresizedU3E5__6_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresizedU3E5__6_9), (void*)value);
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


// System.Collections.Generic.List`1/Enumerator<SA.Foundation.Localization.SA_ISOLanguage>
struct  Enumerator_t16F4A3C49349146DA18AAF19E3A54D5A7FB89AFF 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t0E869E1E4D59E7247073977786D71763115C251C * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	SA_ISOLanguage_tFD4C1E2DC09F0DBA4D75D25DC4C6EF03295A032C * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t16F4A3C49349146DA18AAF19E3A54D5A7FB89AFF, ___list_0)); }
	inline List_1_t0E869E1E4D59E7247073977786D71763115C251C * get_list_0() const { return ___list_0; }
	inline List_1_t0E869E1E4D59E7247073977786D71763115C251C ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t0E869E1E4D59E7247073977786D71763115C251C * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t16F4A3C49349146DA18AAF19E3A54D5A7FB89AFF, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t16F4A3C49349146DA18AAF19E3A54D5A7FB89AFF, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t16F4A3C49349146DA18AAF19E3A54D5A7FB89AFF, ___current_3)); }
	inline SA_ISOLanguage_tFD4C1E2DC09F0DBA4D75D25DC4C6EF03295A032C * get_current_3() const { return ___current_3; }
	inline SA_ISOLanguage_tFD4C1E2DC09F0DBA4D75D25DC4C6EF03295A032C ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SA_ISOLanguage_tFD4C1E2DC09F0DBA4D75D25DC4C6EF03295A032C * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.String>
struct  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___list_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_list_0() const { return ___list_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<SA.Foundation.Events.SA_Event/SafeActionInfo>
struct  Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD, ___list_0)); }
	inline List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * get_list_0() const { return ___list_0; }
	inline List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD, ___current_3)); }
	inline SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * get_current_3() const { return ___current_3; }
	inline SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * value)
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


// System.IO.Stream
struct  Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.IO.TextWriter
struct  TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
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


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.IO.FileAccess
struct  FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileAttributes
struct  FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.FilterMode
struct  FilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19, ___value___2)); }
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

// System.IO.SearchOption
struct  SearchOption_tD088231E1E225D39BB408AEF566091138555C261 
{
public:
	// System.Int32 System.IO.SearchOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SearchOption_tD088231E1E225D39BB408AEF566091138555C261, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StreamWriter
struct  StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.IO.Stream System.IO.StreamWriter::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_12;
	// System.Text.Encoding System.IO.StreamWriter::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_13;
	// System.Text.Encoder System.IO.StreamWriter::encoder
	Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * ___encoder_14;
	// System.Byte[] System.IO.StreamWriter::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_15;
	// System.Char[] System.IO.StreamWriter::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_16;
	// System.Int32 System.IO.StreamWriter::charPos
	int32_t ___charPos_17;
	// System.Int32 System.IO.StreamWriter::charLen
	int32_t ___charLen_18;
	// System.Boolean System.IO.StreamWriter::autoFlush
	bool ___autoFlush_19;
	// System.Boolean System.IO.StreamWriter::haveWrittenPreamble
	bool ___haveWrittenPreamble_20;
	// System.Boolean System.IO.StreamWriter::closable
	bool ___closable_21;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_asyncWriteTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncWriteTask_22;

public:
	inline static int32_t get_offset_of_stream_12() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___stream_12)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_12() const { return ___stream_12; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_12() { return &___stream_12; }
	inline void set_stream_12(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_12), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_13() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___encoding_13)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_13() const { return ___encoding_13; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_13() { return &___encoding_13; }
	inline void set_encoding_13(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_13), (void*)value);
	}

	inline static int32_t get_offset_of_encoder_14() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___encoder_14)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get_encoder_14() const { return ___encoder_14; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of_encoder_14() { return &___encoder_14; }
	inline void set_encoder_14(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		___encoder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_14), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_15() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___byteBuffer_15)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_15() const { return ___byteBuffer_15; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_15() { return &___byteBuffer_15; }
	inline void set_byteBuffer_15(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_15), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_16() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charBuffer_16)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_16() const { return ___charBuffer_16; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_16() { return &___charBuffer_16; }
	inline void set_charBuffer_16(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_16), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_17() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charPos_17)); }
	inline int32_t get_charPos_17() const { return ___charPos_17; }
	inline int32_t* get_address_of_charPos_17() { return &___charPos_17; }
	inline void set_charPos_17(int32_t value)
	{
		___charPos_17 = value;
	}

	inline static int32_t get_offset_of_charLen_18() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charLen_18)); }
	inline int32_t get_charLen_18() const { return ___charLen_18; }
	inline int32_t* get_address_of_charLen_18() { return &___charLen_18; }
	inline void set_charLen_18(int32_t value)
	{
		___charLen_18 = value;
	}

	inline static int32_t get_offset_of_autoFlush_19() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___autoFlush_19)); }
	inline bool get_autoFlush_19() const { return ___autoFlush_19; }
	inline bool* get_address_of_autoFlush_19() { return &___autoFlush_19; }
	inline void set_autoFlush_19(bool value)
	{
		___autoFlush_19 = value;
	}

	inline static int32_t get_offset_of_haveWrittenPreamble_20() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___haveWrittenPreamble_20)); }
	inline bool get_haveWrittenPreamble_20() const { return ___haveWrittenPreamble_20; }
	inline bool* get_address_of_haveWrittenPreamble_20() { return &___haveWrittenPreamble_20; }
	inline void set_haveWrittenPreamble_20(bool value)
	{
		___haveWrittenPreamble_20 = value;
	}

	inline static int32_t get_offset_of_closable_21() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___closable_21)); }
	inline bool get_closable_21() const { return ___closable_21; }
	inline bool* get_address_of_closable_21() { return &___closable_21; }
	inline void set_closable_21(bool value)
	{
		___closable_21 = value;
	}

	inline static int32_t get_offset_of__asyncWriteTask_22() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ____asyncWriteTask_22)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncWriteTask_22() const { return ____asyncWriteTask_22; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncWriteTask_22() { return &____asyncWriteTask_22; }
	inline void set__asyncWriteTask_22(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncWriteTask_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncWriteTask_22), (void*)value);
	}
};

struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * ___Null_11;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_UTF8NoBOM
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____UTF8NoBOM_23;

public:
	inline static int32_t get_offset_of_Null_11() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields, ___Null_11)); }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * get_Null_11() const { return ___Null_11; }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 ** get_address_of_Null_11() { return &___Null_11; }
	inline void set_Null_11(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * value)
	{
		___Null_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_11), (void*)value);
	}

	inline static int32_t get_offset_of__UTF8NoBOM_23() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields, ____UTF8NoBOM_23)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__UTF8NoBOM_23() const { return ____UTF8NoBOM_23; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__UTF8NoBOM_23() { return &____UTF8NoBOM_23; }
	inline void set__UTF8NoBOM_23(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____UTF8NoBOM_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____UTF8NoBOM_23), (void*)value);
	}
};


// System.StringComparison
struct  StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct  TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SA.Foundation.Utility.SA_IconManager/ImageFilterMode
struct  ImageFilterMode_t4306F56A104045F7962089C86AB066FCE22AA5B5 
{
public:
	// System.Int32 SA.Foundation.Utility.SA_IconManager/ImageFilterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImageFilterMode_t4306F56A104045F7962089C86AB066FCE22AA5B5, ___value___2)); }
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


// System.IO.FileStream
struct  FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_8;
	// System.String System.IO.FileStream::name
	String_t* ___name_9;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * ___safeHandle_10;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_11;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_12;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_13;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_14;
	// System.Boolean System.IO.FileStream::async
	bool ___async_15;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_16;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_17;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_18;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_19;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_20;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_21;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_22;

public:
	inline static int32_t get_offset_of_buf_8() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_8() const { return ___buf_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_8() { return &___buf_8; }
	inline void set_buf_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_8), (void*)value);
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_9), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_10() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___safeHandle_10)); }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * get_safeHandle_10() const { return ___safeHandle_10; }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 ** get_address_of_safeHandle_10() { return &___safeHandle_10; }
	inline void set_safeHandle_10(SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * value)
	{
		___safeHandle_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_10), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_11() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___isExposed_11)); }
	inline bool get_isExposed_11() const { return ___isExposed_11; }
	inline bool* get_address_of_isExposed_11() { return &___isExposed_11; }
	inline void set_isExposed_11(bool value)
	{
		___isExposed_11 = value;
	}

	inline static int32_t get_offset_of_append_startpos_12() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___append_startpos_12)); }
	inline int64_t get_append_startpos_12() const { return ___append_startpos_12; }
	inline int64_t* get_address_of_append_startpos_12() { return &___append_startpos_12; }
	inline void set_append_startpos_12(int64_t value)
	{
		___append_startpos_12 = value;
	}

	inline static int32_t get_offset_of_access_13() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___access_13)); }
	inline int32_t get_access_13() const { return ___access_13; }
	inline int32_t* get_address_of_access_13() { return &___access_13; }
	inline void set_access_13(int32_t value)
	{
		___access_13 = value;
	}

	inline static int32_t get_offset_of_owner_14() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___owner_14)); }
	inline bool get_owner_14() const { return ___owner_14; }
	inline bool* get_address_of_owner_14() { return &___owner_14; }
	inline void set_owner_14(bool value)
	{
		___owner_14 = value;
	}

	inline static int32_t get_offset_of_async_15() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___async_15)); }
	inline bool get_async_15() const { return ___async_15; }
	inline bool* get_address_of_async_15() { return &___async_15; }
	inline void set_async_15(bool value)
	{
		___async_15 = value;
	}

	inline static int32_t get_offset_of_canseek_16() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___canseek_16)); }
	inline bool get_canseek_16() const { return ___canseek_16; }
	inline bool* get_address_of_canseek_16() { return &___canseek_16; }
	inline void set_canseek_16(bool value)
	{
		___canseek_16 = value;
	}

	inline static int32_t get_offset_of_anonymous_17() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___anonymous_17)); }
	inline bool get_anonymous_17() const { return ___anonymous_17; }
	inline bool* get_address_of_anonymous_17() { return &___anonymous_17; }
	inline void set_anonymous_17(bool value)
	{
		___anonymous_17 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_18() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_dirty_18)); }
	inline bool get_buf_dirty_18() const { return ___buf_dirty_18; }
	inline bool* get_address_of_buf_dirty_18() { return &___buf_dirty_18; }
	inline void set_buf_dirty_18(bool value)
	{
		___buf_dirty_18 = value;
	}

	inline static int32_t get_offset_of_buf_size_19() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_size_19)); }
	inline int32_t get_buf_size_19() const { return ___buf_size_19; }
	inline int32_t* get_address_of_buf_size_19() { return &___buf_size_19; }
	inline void set_buf_size_19(int32_t value)
	{
		___buf_size_19 = value;
	}

	inline static int32_t get_offset_of_buf_length_20() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_length_20)); }
	inline int32_t get_buf_length_20() const { return ___buf_length_20; }
	inline int32_t* get_address_of_buf_length_20() { return &___buf_length_20; }
	inline void set_buf_length_20(int32_t value)
	{
		___buf_length_20 = value;
	}

	inline static int32_t get_offset_of_buf_offset_21() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_offset_21)); }
	inline int32_t get_buf_offset_21() const { return ___buf_offset_21; }
	inline int32_t* get_address_of_buf_offset_21() { return &___buf_offset_21; }
	inline void set_buf_offset_21(int32_t value)
	{
		___buf_offset_21 = value;
	}

	inline static int32_t get_offset_of_buf_start_22() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_start_22)); }
	inline int64_t get_buf_start_22() const { return ___buf_start_22; }
	inline int64_t* get_address_of_buf_start_22() { return &___buf_start_22; }
	inline void set_buf_start_22(int64_t value)
	{
		___buf_start_22 = value;
	}
};

struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_recycle_6;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_7;

public:
	inline static int32_t get_offset_of_buf_recycle_6() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_recycle_6() const { return ___buf_recycle_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_recycle_6() { return &___buf_recycle_6; }
	inline void set_buf_recycle_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_recycle_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_6), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_7() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_lock_7)); }
	inline RuntimeObject * get_buf_recycle_lock_7() const { return ___buf_recycle_lock_7; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_7() { return &___buf_recycle_lock_7; }
	inline void set_buf_recycle_lock_7(RuntimeObject * value)
	{
		___buf_recycle_lock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_7), (void*)value);
	}
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.IO.MonoIOStat
struct  MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
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

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.TextAsset
struct  TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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


// System.Action`1<UnityEngine.Texture2D>
struct  Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA  : public MulticastDelegate_t
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


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.IO.FileSystemInfo
struct  FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____data_1)); }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
};


// System.InvalidOperationException
struct  InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// UnityEngine.RenderTexture
struct  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
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


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
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


// System.IO.DirectoryInfo
struct  DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD  : public FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// SA.Foundation.Utility.SA_ScreenUtil/CameraScreenshot
struct  CameraScreenshot_t82F81A9CDEF95F8563B4738E4F233715CE72BF66  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera SA.Foundation.Utility.SA_ScreenUtil/CameraScreenshot::m_camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_camera_4;
	// System.Action`1<UnityEngine.Texture2D> SA.Foundation.Utility.SA_ScreenUtil/CameraScreenshot::m_callback
	Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * ___m_callback_5;
	// System.Int32 SA.Foundation.Utility.SA_ScreenUtil/CameraScreenshot::resWidth
	int32_t ___resWidth_6;
	// System.Int32 SA.Foundation.Utility.SA_ScreenUtil/CameraScreenshot::resHeight
	int32_t ___resHeight_7;

public:
	inline static int32_t get_offset_of_m_camera_4() { return static_cast<int32_t>(offsetof(CameraScreenshot_t82F81A9CDEF95F8563B4738E4F233715CE72BF66, ___m_camera_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_camera_4() const { return ___m_camera_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_camera_4() { return &___m_camera_4; }
	inline void set_m_camera_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_camera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_camera_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_callback_5() { return static_cast<int32_t>(offsetof(CameraScreenshot_t82F81A9CDEF95F8563B4738E4F233715CE72BF66, ___m_callback_5)); }
	inline Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * get_m_callback_5() const { return ___m_callback_5; }
	inline Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA ** get_address_of_m_callback_5() { return &___m_callback_5; }
	inline void set_m_callback_5(Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * value)
	{
		___m_callback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callback_5), (void*)value);
	}

	inline static int32_t get_offset_of_resWidth_6() { return static_cast<int32_t>(offsetof(CameraScreenshot_t82F81A9CDEF95F8563B4738E4F233715CE72BF66, ___resWidth_6)); }
	inline int32_t get_resWidth_6() const { return ___resWidth_6; }
	inline int32_t* get_address_of_resWidth_6() { return &___resWidth_6; }
	inline void set_resWidth_6(int32_t value)
	{
		___resWidth_6 = value;
	}

	inline static int32_t get_offset_of_resHeight_7() { return static_cast<int32_t>(offsetof(CameraScreenshot_t82F81A9CDEF95F8563B4738E4F233715CE72BF66, ___resHeight_7)); }
	inline int32_t get_resHeight_7() const { return ___resHeight_7; }
	inline int32_t* get_address_of_resHeight_7() { return &___resHeight_7; }
	inline void set_resHeight_7(int32_t value)
	{
		___resHeight_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		m_Items[index] = value;
	}
};
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


// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
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
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Single,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD5A3997B896491EDE26BF3BABF88264E240B6BA4_gshared (Dictionary_2_t28D6C5A32D32B52B1D79D88E28471D4EB8BDEC88 * __this, float ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Single,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB82A49E3A535EEAA4E3610B4F42F3700D5323E11_gshared (Dictionary_2_t28D6C5A32D32B52B1D79D88E28471D4EB8BDEC88 * __this, float ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Single,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1F4607FB1226DB66934531B127DABC62AE9E3F1B_gshared (Dictionary_2_t28D6C5A32D32B52B1D79D88E28471D4EB8BDEC88 * __this, float ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Single,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF610D5B0D3D1D10414D434A3E09629B35E95E014_gshared (Dictionary_2_t28D6C5A32D32B52B1D79D88E28471D4EB8BDEC88 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// SA.Foundation.Config.PluginVersion SA.Foundation.Config.PluginVersionHandler::get_PluginVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * PluginVersionHandler_get_PluginVersion_mFA13C88082085D9C3368E7C21C16EC2609E4CD9E (PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * __this, const RuntimeMethod* method);
// System.Void SA.Foundation.Config.PluginVersion::UpgradeMinorVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PluginVersion_UpgradeMinorVersion_m98DFDCA87E509A845D5D2C3162DBA2E7C53AA00D (PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * __this, const RuntimeMethod* method);
// System.Void SA.Foundation.Config.PluginVersionHandler::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PluginVersionHandler_Save_m87B93142AF9C7B6A9528B632057BCBB7264B4379 (PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * __this, const RuntimeMethod* method);
// System.Void SA.Foundation.Config.PluginVersion::UpgradeMajorVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PluginVersion_UpgradeMajorVersion_m8DC4DF1A0AEED3D91D2B51BE525B43F00629157D (PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * __this, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B (String_t* ___path0, const RuntimeMethod* method);
// System.String System.IO.File::ReadAllText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_m8C621C34562CAE1435A2221B3E369BEF1D0ED8BC (String_t* ___path0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<SA.Foundation.Config.PluginVersion>(System.String)
inline PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * JsonUtility_FromJson_TisPluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0_m89201ABDD87BD3FE600675DEF99CA5854CBDE13A (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void SA.Foundation.Config.PluginVersion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PluginVersion__ctor_m71E3D9504BB654B2994826CE6706D3309A279823 (PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * __this, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllText_mA0528ED8C0C9B94864772B9036FC4B206682EE9C (String_t* ___path0, String_t* ___contents1, const RuntimeMethod* method);
// System.String SA.Foundation.UtilitiesEditor.SA_AssetDatabase::FixRelativePath(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_AssetDatabase_FixRelativePath_mC710465E4A6C927A23848977E8D7CAB3B6C9600C (String_t* ___path0, bool ___validateFoldersPath1, const RuntimeMethod* method);
// System.Void SA.Foundation.UtilitiesEditor.SA_AssetDatabase/SA_AssetDatabaseProxy::Create(UnityEngine.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_AssetDatabaseProxy_Create_mB723B59442DF97EE8E10EFC76CC267B1C6036A98 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___asset0, String_t* ___path1, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mB6E4F554EB12AF5BB822050E738AB867AF5C9864 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Void SA.Foundation.UtilitiesEditor.SA_AssetDatabase::ValidateFoldersPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_AssetDatabase_ValidateFoldersPath_mFA1326263CCDB6AEDC5E83FF511BE2E9BA935D28 (String_t* ___path0, const RuntimeMethod* method);
// System.String SA.Foundation.UtilitiesEditor.SA_AssetDatabase/SA_AssetDatabaseProxy::GetAssetPath(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_AssetDatabaseProxy_GetAssetPath_m15FF5409B46945EC7A8CC65F816AEA7AB0AB6486 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___assetObject0, const RuntimeMethod* method);
// System.String SA.Foundation.UtilitiesEditor.SA_AssetDatabase::GetAssetPath(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_AssetDatabase_GetAssetPath_m2AA2700917B5AF11E73615AE5BDE0F53C3CB38FD (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___assetObject0, const RuntimeMethod* method);
// System.String SA.Foundation.Utility.SA_PathUtil::ConvertRelativeToAbsolutePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_PathUtil_ConvertRelativeToAbsolutePath_mBACF72992DCF7D770500264B7F632F8A42F01736 (String_t* ___relativePath0, const RuntimeMethod* method);
// System.String SA.Foundation.Utility.SA_PathUtil::GetExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_PathUtil_GetExtension_mED31EFD6B77927418073B6583E5EEC8EB7935578 (String_t* ___filePath0, const RuntimeMethod* method);
// System.String SA.Foundation.Utility.SA_PathUtil::GetDirectoryPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_PathUtil_GetDirectoryPath_m2372219812152AABE1CC4657DA5FC8316E163E2C (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String SA.Foundation.Utility.SA_PathUtil::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_PathUtil_GetFileName_mD1BA82994AE80C69303B81C2FBEF9BB3A4A3A14A (String_t* ___filePath0, const RuntimeMethod* method);
// System.String System.IO.Path::GetFileNameWithoutExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileNameWithoutExtension_m52BA8E84FC8949E8A9F60D024742189907B997D2 (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean SA.Foundation.UtilitiesEditor.SA_AssetDatabase/SA_AssetDatabaseProxy::CopyAsset(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SA_AssetDatabaseProxy_CopyAsset_m4D1EA5D731D4C65FEBD436A9A3FB66BC36CBF695 (String_t* ___path0, String_t* ___newPath1, const RuntimeMethod* method);
// System.String SA.Foundation.UtilitiesEditor.SA_AssetDatabase/SA_AssetDatabaseProxy::Move(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_AssetDatabaseProxy_Move_m6C8CB5839D04EC2990BD4746537EA5BEB6CE8DF2 (String_t* ___oldPath0, String_t* ___newPath1, const RuntimeMethod* method);
// System.Boolean SA.Foundation.UtilitiesEditor.SA_AssetDatabase/SA_AssetDatabaseProxy::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SA_AssetDatabaseProxy_Delete_m72963960A3C1F9732B8BDCB8D1850001ED83D95A (String_t* ___path0, const RuntimeMethod* method);
// System.String SA.Foundation.UtilitiesEditor.SA_AssetDatabase/SA_AssetDatabaseProxy::RenameAsset(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_AssetDatabaseProxy_RenameAsset_m70E5128A29C28AD6FDA7AEAF8AF015E15B9A53E1 (String_t* ___pathName0, String_t* ___newName1, const RuntimeMethod* method);
// System.Boolean SA.Foundation.Utility.SA_PathUtil::IsDirectoryExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SA_PathUtil_IsDirectoryExists_mF86028518A63F771B0A704F81112AD32CFA7A228 (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean SA.Foundation.Utility.SA_PathUtil::IsFileExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SA_PathUtil_IsFileExists_m6DA5111A81D5056FD841E88BD8E7C93CB00607CF (String_t* ___path0, const RuntimeMethod* method);
// System.String[] SA.Foundation.Utility.SA_FilesUtil::GetDirectories(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* SA_FilesUtil_GetDirectories_mBCA3362D6B9D731E68CC35DB4A3F67431813D642 (String_t* ___folderPath0, const RuntimeMethod* method);
// System.Boolean SA.Foundation.UtilitiesEditor.SA_AssetDatabase::IsDirectoryExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SA_AssetDatabase_IsDirectoryExists_m4EF142FB5A7C440FE1BD7144E8CD61046A9B0A22 (String_t* ___path0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.String>()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Collections.Generic.List`1<System.String> SA.Foundation.UtilitiesEditor.SA_AssetDatabase::FindAssetsWithExtentions(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * SA_AssetDatabase_FindAssetsWithExtentions_mE05BF4B441A218328CE366137487213D15F96389 (String_t* ___pathToDirectory0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___extentions1, const RuntimeMethod* method);
// System.Boolean SA.Foundation.UtilitiesEditor.SA_AssetDatabase::IsValidFolder(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SA_AssetDatabase_IsValidFolder_m73A135E3E556963BA0BB439A9316ED97CE8E62A1 (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.List`1<System.String> SA.Foundation.UtilitiesEditor.SA_AssetDatabase/SA_AssetDatabaseProxy::FindAssets(System.String,System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * SA_AssetDatabaseProxy_FindAssets_m9103E8D781515A80E312A99AF12F925964EB9053 (String_t* ___path0, String_t* ___filter1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___extentions2, const RuntimeMethod* method);
// System.Void SA.Foundation.UtilitiesEditor.SA_AssetDatabase/SA_AssetDatabaseProxy::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_AssetDatabaseProxy_Refresh_m2FE5BA3710744966784EF9834D61FA2F4EB57A84 (const RuntimeMethod* method);
// System.Void SA.Foundation.UtilitiesEditor.SA_AssetDatabase/SA_AssetDatabaseProxy::ImportAsset(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_AssetDatabaseProxy_ImportAsset_mB3B8FAB3245C583ECB5B399144160D6EE38DD0F1 (String_t* ___path0, const RuntimeMethod* method);
// System.String SA.Foundation.Utility.SA_PathUtil::FixRelativePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_PathUtil_FixRelativePath_mEE8FEA3A5B646D3D7B1066CA788BA6D8BCEBAA0F (String_t* ___path0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.String> SA.Foundation.Utility.SA_PathUtil::GetDirectoriesOutOfPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * SA_PathUtil_GetDirectoriesOutOfPath_m6B31A18D51B87437C4F130BF4BC7DEB34E8A7054 (String_t* ___path0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.String SA.Foundation.Utility.SA_PathUtil::GetPathDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_PathUtil_GetPathDirectoryName_mECE3A966D0DCD646937B03BBA142FD9F3CA4B40A (String_t* ___folderPath0, const RuntimeMethod* method);
// System.Void SA.Foundation.UtilitiesEditor.SA_AssetDatabase/SA_AssetDatabaseProxy::CreateFolder(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_AssetDatabaseProxy_CreateFolder_m1F6D25FD6D13F0BF2D85CA239754E28329478F89 (String_t* ___parentFolder0, String_t* ___newFolderName1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void SA.Foundation.Config.PluginVersionHandler::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PluginVersionHandler__ctor_m9EC9E7236AB3CAE2281016DACDCD22F08BBE8796 (PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * __this, String_t* ___basePath0, const RuntimeMethod* method);
// System.Void SA.Foundation.Templates.SA_Result::.ctor(SA.Foundation.Templates.SA_iResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_Result__ctor_m48ABC3B9F10115B2E9912FFE8235ECCC059D343C (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * __this, RuntimeObject* ___result0, const RuntimeMethod* method);
// System.String SA.Foundation.Templates.SA_Error::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SA_Error_get_Message_m519EA465FD7A239E17E95B6D8A049DC8D34550C1_inline (SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * __this, const RuntimeMethod* method);
// System.Int32 SA.Foundation.Templates.SA_Error::get_Code()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SA_Error_get_Code_m8309D2C635C8E37CE5FEBA26E59769F578C47509_inline (SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * __this, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void SA.Foundation.Events.SA_Event/SafeActionInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeActionInfo__ctor_m3724A216E8D37BD03BC754579621D70B1928C51E (SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<SA.Foundation.Events.SA_Event/SafeActionInfo>::Add(!0)
inline void List_1_Add_mC670366175AF1378C4DD1D00FEABA7DCFDD2C776 (List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * __this, SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 *, SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<SA.Foundation.Events.SA_Event/SafeActionInfo>::.ctor()
inline void List_1__ctor_m264EFBE445777909A21B4652A7AA79B1E10EC874 (List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<SA.Foundation.Events.SA_Event/SafeActionInfo>::GetEnumerator()
inline Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD  List_1_GetEnumerator_m6ABE5DC192AEE25946217AA5405E68D92675A629 (List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD  (*) (List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<SA.Foundation.Events.SA_Event/SafeActionInfo>::get_Current()
inline SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * Enumerator_get_Current_m28EC4675D681115ACF4E4B66C93EF22F89D4E6B9_inline (Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD * __this, const RuntimeMethod* method)
{
	return ((  SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * (*) (Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<SA.Foundation.Events.SA_Event/SafeActionInfo>::MoveNext()
inline bool Enumerator_MoveNext_mEEC7896F047DCCD2779634CF8E67B457F5FBE128 (Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<SA.Foundation.Events.SA_Event/SafeActionInfo>::Dispose()
inline void Enumerator_Dispose_m78D134B2270B295C6FBFA7FA700450296DE445F0 (Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SA.Foundation.Events.SA_Event/SafeActionInfo>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m908B74FD954D8C65062D3955FE2B91EB0BB8488C (List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<SA.Foundation.Events.SA_Event/SafeActionInfo>::Remove(!0)
inline bool List_1_Remove_mE064FBC0F861BAD6F075070485ECFE8ADB5B400E (List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * __this, SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 *, SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<SA.Foundation.Events.SA_Event/SafeActionInfo>::Clear()
inline void List_1_Clear_mEBAAE9DC5131FCB01A11652052FA28423D6DBBE5 (List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.String SA.Foundation.Utility.SA_FilesUtil::FixRelativePath(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_FilesUtil_FixRelativePath_m2A36C77C6DAC9CA3EC3F59C02878A1D5821096DB (String_t* ___path0, bool ___createFolders1, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * File_Create_m2C278C920C8B40322EB632EC620A83B021C90725 (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77 (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.IO.StreamWriter::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_m6A81CE9EDAB3AAB4270E88539EA83D945954CD0E (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * __this, String_t* ___path0, bool ___append1, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllLines(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllLines_m1E190B6600536918D07A37AFB1936521AC24E6B6 (String_t* ___path0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___contents1, const RuntimeMethod* method);
// System.String[] System.IO.File::ReadAllLines(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* File_ReadAllLines_m705F4709C4562B0E24E95613867A32232DB42633 (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.IO.File::Copy(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Copy_m1CB9B28EA63AA6D9E36B50AABABE81CA8C22C794 (String_t* ___sourceFileName0, String_t* ___destFileName1, bool ___overwrite2, const RuntimeMethod* method);
// System.String[] System.IO.Directory::GetDirectories(System.String,System.String,System.IO.SearchOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Directory_GetDirectories_m8385078468AAF8D3BC3F71DD405B4ABB0DF91781 (String_t* ___path0, String_t* ___searchPattern1, int32_t ___searchOption2, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A (String_t* ___path0, const RuntimeMethod* method);
// System.String[] System.IO.Directory::GetFiles(System.String,System.String,System.IO.SearchOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Directory_GetFiles_mC4A2C9164B682F1152396A36996712E255D98BCC (String_t* ___path0, String_t* ___searchPattern1, int32_t ___searchOption2, const RuntimeMethod* method);
// System.Void System.IO.Directory::Delete(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Directory_Delete_m06FEE269B5B5425033C931B3F4742933F50D7ACE (String_t* ___path0, bool ___recursive1, const RuntimeMethod* method);
// System.String[] System.IO.Directory::GetDirectories(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Directory_GetDirectories_mACD36932126E03B5983AE0AE438B516B1CDDD7B7 (String_t* ___path0, const RuntimeMethod* method);
// System.Void SA.Foundation.Utility.SA_FilesUtil::CreatePathFolders(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_FilesUtil_CreatePathFolders_m05006FF2C81A2CFB1DDF04433F6DB44FE1DEC34E (String_t* ___path0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<SA.Foundation.Localization.SA_ISOLanguage>::GetEnumerator()
inline Enumerator_t16F4A3C49349146DA18AAF19E3A54D5A7FB89AFF  List_1_GetEnumerator_m557DF2E2E29EA9EFBCEB0E839E4F447DF985DD51 (List_1_t0E869E1E4D59E7247073977786D71763115C251C * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t16F4A3C49349146DA18AAF19E3A54D5A7FB89AFF  (*) (List_1_t0E869E1E4D59E7247073977786D71763115C251C *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<SA.Foundation.Localization.SA_ISOLanguage>::get_Current()
inline SA_ISOLanguage_tFD4C1E2DC09F0DBA4D75D25DC4C6EF03295A032C * Enumerator_get_Current_m4D4C4A59E734FCD07ECAD8D56C4980045BAF92A5_inline (Enumerator_t16F4A3C49349146DA18AAF19E3A54D5A7FB89AFF * __this, const RuntimeMethod* method)
{
	return ((  SA_ISOLanguage_tFD4C1E2DC09F0DBA4D75D25DC4C6EF03295A032C * (*) (Enumerator_t16F4A3C49349146DA18AAF19E3A54D5A7FB89AFF *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.String SA.Foundation.Localization.SA_ISOLanguage::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SA_ISOLanguage_get_Name_mB72F10C350F65A35453D03BA4234E13BA2FA24A9_inline (SA_ISOLanguage_tFD4C1E2DC09F0DBA4D75D25DC4C6EF03295A032C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<SA.Foundation.Localization.SA_ISOLanguage>::MoveNext()
inline bool Enumerator_MoveNext_mF64717490940F6733B0905424AB40A31F26F8096 (Enumerator_t16F4A3C49349146DA18AAF19E3A54D5A7FB89AFF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t16F4A3C49349146DA18AAF19E3A54D5A7FB89AFF *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<SA.Foundation.Localization.SA_ISOLanguage>::Dispose()
inline void Enumerator_Dispose_mD4EC0DBDC6B68468AAAFB78A4DE40BCDAF7CE380 (Enumerator_t16F4A3C49349146DA18AAF19E3A54D5A7FB89AFF * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t16F4A3C49349146DA18AAF19E3A54D5A7FB89AFF *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SA.Foundation.Localization.SA_ISOLanguage>::.ctor()
inline void List_1__ctor_m32077E95ECC5A06AA379D63701FB0B563E499349 (List_1_t0E869E1E4D59E7247073977786D71763115C251C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0E869E1E4D59E7247073977786D71763115C251C *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// UnityEngine.Texture2D SA.Foundation.Utility.SA_IconManager::GetIconFromHtmlColorString(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * SA_IconManager_GetIconFromHtmlColorString_m967AC7A8E4AF17A100E452AC5FCC1041D23AF4E7 (String_t* ___htmlString0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___fallback1, const RuntimeMethod* method);
// System.Boolean UnityEngine.ColorUtility::TryParseHtmlString(System.String,UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorUtility_TryParseHtmlString_m69BEFAF655920930399471B79CF668FC3BAD4069 (String_t* ___htmlString0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * ___color1, const RuntimeMethod* method);
// UnityEngine.Texture2D SA.Foundation.Utility.SA_IconManager::GetIcon(UnityEngine.Color,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * SA_IconManager_GetIcon_m1FAF708FB536115C708EAB90F2DEF8FBD7EDA0A8 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Single,UnityEngine.Texture2D>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m86DF07C10A09ADA398C99416D217742A0183E677 (Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9 * __this, float ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9 *, float, const RuntimeMethod*))Dictionary_2_ContainsKey_mD5A3997B896491EDE26BF3BABF88264E240B6BA4_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Single,UnityEngine.Texture2D>::get_Item(!0)
inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * Dictionary_2_get_Item_mB723BCAD2AA6A847709F46A7D22872EFD9B170E2 (Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9 * __this, float ___key0, const RuntimeMethod* method)
{
	return ((  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * (*) (Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9 *, float, const RuntimeMethod*))Dictionary_2_get_Item_mB82A49E3A535EEAA4E3610B4F42F3700D5323E11_gshared)(__this, ___key0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___x0, int32_t ___y1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Single,UnityEngine.Texture2D>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mDADC44E994E162D25CFE5F9BEC44B0912A73C1E6 (Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9 * __this, float ___key0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9 *, float, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, const RuntimeMethod*))Dictionary_2_set_Item_m1F4607FB1226DB66934531B127DABC62AE9E3F1B_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m3A7959BCA4CA296B9C2ADA34B9C68A24D7E32C98 (Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D>::get_Item(!0)
inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * Dictionary_2_get_Item_mF188136D0EFEA6D70747371218898D2BDDC06AF9 (Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * (*) (Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120 (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D>::Add(!0,!1)
inline void Dictionary_2_Add_m4064F1527445A08FFC585A12F7E58A8CECF96915 (Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C * __this, String_t* ___key0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C *, String_t*, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Texture2D SA.Foundation.Utility.SA_IconManager::GetIconAtPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * SA_IconManager_GetIconAtPath_m0E4F408EE7D61D7A193749606315650C4A5DC22B (String_t* ___path0, const RuntimeMethod* method);
// System.Single SA.Foundation.Utility.SA_IconManager::rot_x(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SA_IconManager_rot_x_m403D1C685CC4879BF573C86CA76B5BB1A43FC239 (float ___angle0, float ___x1, float ___y2, const RuntimeMethod* method);
// System.Single SA.Foundation.Utility.SA_IconManager::rot_y(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SA_IconManager_rot_y_m7BB508DC9B165ED1604F9696AC4D5A4A74809DF9 (float ___angle0, float ___x1, float ___y2, const RuntimeMethod* method);
// UnityEngine.Color SA.Foundation.Utility.SA_IconManager::getPixel(UnityEngine.Texture2D,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SA_IconManager_getPixel_m38C522FEC8C501DB7A8334CDCA440DD3049A5D0F (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, float ___x1, float ___y2, const RuntimeMethod* method);
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* Texture2D_GetPixels_mDBE68956E50997CB02CB0419318E0D19493288A6 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___miplevel0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD (float ___f0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, float ___t2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Addition(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_op_Addition_m791A7C77B17D4A49301A7D275E8E4D8B117415A8 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Division(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_op_Division_m3C9BBA6FEC1CBB84B0536599BA974AA963FAE094 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, float ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___colors0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_GetTemporary_mF71FD5106250F2CD0309BBBA2CD74D3D6D94EFB8 (int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest1, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___source0, int32_t ___destX1, int32_t ___destY2, const RuntimeMethod* method);
// UnityEngine.Color SA.Foundation.Utility.SA_IconManager::GetColorFromHtml(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SA_IconManager_GetColorFromHtml_mDD4BBEDAA8F70A2A7053B44354AE5765C6CA02C0 (String_t* ___htmlString0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___fallback1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_clear_m9F8076CEFE7B8119A9903212DCBF2BFED114E97F (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Texture2D::GetPixel(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D>::.ctor()
inline void Dictionary_2__ctor_mCC7857F1BA7928609857BFC242195172DA507392 (Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Single,UnityEngine.Texture2D>::.ctor()
inline void Dictionary_2__ctor_mF92F157D73581D456D3EB4212D3D86753E755C9A (Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9 *, const RuntimeMethod*))Dictionary_2__ctor_mF610D5B0D3D1D10414D434A3E09629B35E95E014_gshared)(__this, method);
}
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218 (TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<SA.Foundation.Localization.SA_ISOLanguagesList>(System.String)
inline SA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09 * JsonUtility_FromJson_TisSA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09_mB4C656ED0465469F661C82331499492DA1B71C1F (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  SA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mEA750A0572C706249CDD826681741B7DD733381E (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.String System.String::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Remove_mA7DE3D6FE3344FD65108B33BD1DE8020D22ADAC0 (String_t* __this, int32_t ___startIndex0, int32_t ___count1, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921 (const RuntimeMethod* method);
// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_m026509C15A1E58FC6461EE7EC336EC18C9C2271E (const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE (String_t* ___path0, const RuntimeMethod* method);
// System.String System.IO.Path::GetExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD (String_t* ___path0, const RuntimeMethod* method);
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A (String_t* ___path0, const RuntimeMethod* method);
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE (String_t* ___path0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mD99F5378A4220A0DA0D5097007417E777722ABDA (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m010D788B0081D6BB2EF5E0D2D60486A0668872C5 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void SA.Foundation.Templates.SA_Result::SetError(SA.Foundation.Templates.SA_Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_Result_SetError_mA2B879E612935F5D5D8C775A489770CA5D06DDB9 (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * __this, SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * ___error0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// SA.Foundation.Templates.SA_Error SA.Foundation.Templates.SA_Result::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * SA_Result_get_Error_m351134373999CB0552FC83E68DB2F905DA32F98B_inline (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * __this, const RuntimeMethod* method);
// System.Boolean SA.Foundation.Templates.SA_Result::get_HasError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SA_Result_get_HasError_mCED6F67C0BBD2F9AEAB22C5E14ACD7D5165D5F5C (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator SA.Foundation.Utility.SA_ScreenUtil::TakeScreenshotCoroutine(System.Int32,System.Action`1<UnityEngine.Texture2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SA_ScreenUtil_TakeScreenshotCoroutine_m0E3F7BBFBF5722D39BEC76102CE0D49565DCB813 (int32_t ___maxSize0, Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * ___callback1, const RuntimeMethod* method);
// UnityEngine.Coroutine StansAssets.Foundation.Async.CoroutineUtility::Start(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * CoroutineUtility_Start_m5A711CC2BAC66C837B292E17CD70B7FBF8B1BF65 (RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<SA.Foundation.Utility.SA_ScreenUtil/CameraScreenshot>()
inline CameraScreenshot_t82F81A9CDEF95F8563B4738E4F233715CE72BF66 * GameObject_AddComponent_TisCameraScreenshot_t82F81A9CDEF95F8563B4738E4F233715CE72BF66_m55E27F560B160530C644F9C1159582BD9E593549 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CameraScreenshot_t82F81A9CDEF95F8563B4738E4F233715CE72BF66 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void SA.Foundation.Utility.SA_ScreenUtil/<TakeScreenshotCoroutine>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotCoroutineU3Ed__3__ctor_mA392EDCC04E3FF8CD0EA4714DC83256AB042CF9E (U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// SA.Foundation.Config.PluginVersionHandler SA.Foundation.Patterns.SA_ScriptableSettings::GetPluginVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * SA_ScriptableSettings_GetPluginVersion_m3CDD88CD163DEC9B8FD83027FFB4829151E2A62F (SA_ScriptableSettings_t713FB6ED1BCD9406BD9C6B0417FF99470A1FAA06 * __this, const RuntimeMethod* method);
// System.String SA.Foundation.Config.PluginVersionHandler::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PluginVersionHandler_GetVersion_mCDCA8CA062F01E375065ABF7B74F55C49AF06BEC (PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D SA.Foundation.Utility.SA_IconManager::ResizeTexture(UnityEngine.Texture2D,SA.Foundation.Utility.SA_IconManager/ImageFilterMode,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * SA_IconManager_ResizeTexture_mB673F8DD31F47168C4D1C27DD66D9F62838978B4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___pSource0, int32_t ___pFilterMode1, float ___pScale2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Texture2D>::Invoke(!0)
inline void Action_1_Invoke_m48902101D8F84E0110E1EA89779FE035FC93C460 (Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA *, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m5D8D36B284951F95A048C6B9ACA24FC7509564FF (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::Render()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Render_m2D9749799AAC91A3725044A6CF5594E1F5D68D61 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
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
// System.String SA.Foundation.Config.PluginVersion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PluginVersion_ToString_m0FC2D0A6FAA6614D4A76CFD4A2061233C12B6224 (PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// var minorVersionString = MinorVersion > 0 ? "b" + MinorVersion : string.Empty;
		int32_t L_0 = __this->get_MinorVersion_1();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B3_0 = L_1;
		goto IL_0026;
	}

IL_0011:
	{
		int32_t* L_2 = __this->get_address_of_MinorVersion_1();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0026:
	{
		V_0 = G_B3_0;
		// return string.Format("{0}{1}", MajorVersion, minorVersionString);
		int32_t L_5 = __this->get_MajorVersion_0();
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = V_0;
		String_t* L_9;
		L_9 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		String_t* L_10 = V_1;
		return L_10;
	}
}
// System.Void SA.Foundation.Config.PluginVersion::UpgradeMinorVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PluginVersion_UpgradeMinorVersion_m98DFDCA87E509A845D5D2C3162DBA2E7C53AA00D (PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (MinorVersion == 0)
		int32_t L_0 = __this->get_MinorVersion_1();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// MajorVersion++;
		int32_t L_2 = __this->get_MajorVersion_0();
		__this->set_MajorVersion_0(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
	}

IL_001c:
	{
		// MinorVersion++;
		int32_t L_3 = __this->get_MinorVersion_1();
		__this->set_MinorVersion_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		// }
		return;
	}
}
// System.Void SA.Foundation.Config.PluginVersion::UpgradeMajorVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PluginVersion_UpgradeMajorVersion_m8DC4DF1A0AEED3D91D2B51BE525B43F00629157D (PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (MinorVersion == 0)
		int32_t L_0 = __this->get_MinorVersion_1();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// MajorVersion++;
		int32_t L_2 = __this->get_MajorVersion_0();
		__this->set_MajorVersion_0(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
	}

IL_001c:
	{
		// MinorVersion = 0;
		__this->set_MinorVersion_1(0);
		// }
		return;
	}
}
// System.Void SA.Foundation.Config.PluginVersion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PluginVersion__ctor_m71E3D9504BB654B2994826CE6706D3309A279823 (PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void SA.Foundation.Config.PluginVersionHandler::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PluginVersionHandler__ctor_m9EC9E7236AB3CAE2281016DACDCD22F08BBE8796 (PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * __this, String_t* ___basePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD2BA174423BC7FCC9FD8FA37E7008C097EE4AB2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PluginVersionHandler(string basePath)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_filename = basePath + "/pluginVersion.json";
		String_t* L_0 = ___basePath0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteralFD2BA174423BC7FCC9FD8FA37E7008C097EE4AB2, /*hidden argument*/NULL);
		__this->set_m_filename_0(L_1);
		// }
		return;
	}
}
// System.String SA.Foundation.Config.PluginVersionHandler::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PluginVersionHandler_GetVersion_mCDCA8CA062F01E375065ABF7B74F55C49AF06BEC (PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return PluginVersion.ToString();
		PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * L_0;
		L_0 = PluginVersionHandler_get_PluginVersion_mFA13C88082085D9C3368E7C21C16EC2609E4CD9E(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void SA.Foundation.Config.PluginVersionHandler::UpgrageMinorVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PluginVersionHandler_UpgrageMinorVersion_m08F358F369808AEF1E6831EE32FDFA34B0D9BCC7 (PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * __this, const RuntimeMethod* method)
{
	{
		// PluginVersion.UpgradeMinorVersion();
		PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * L_0;
		L_0 = PluginVersionHandler_get_PluginVersion_mFA13C88082085D9C3368E7C21C16EC2609E4CD9E(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		PluginVersion_UpgradeMinorVersion_m98DFDCA87E509A845D5D2C3162DBA2E7C53AA00D(L_0, /*hidden argument*/NULL);
		// Save();
		PluginVersionHandler_Save_m87B93142AF9C7B6A9528B632057BCBB7264B4379(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SA.Foundation.Config.PluginVersionHandler::UpgrageMajorVersionIfNeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PluginVersionHandler_UpgrageMajorVersionIfNeed_mFAB5C0FDC6605AB6895DE6352343A7E10B280642 (PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * __this, const RuntimeMethod* method)
{
	{
		// PluginVersion.UpgradeMajorVersion();
		PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * L_0;
		L_0 = PluginVersionHandler_get_PluginVersion_mFA13C88082085D9C3368E7C21C16EC2609E4CD9E(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		PluginVersion_UpgradeMajorVersion_m8DC4DF1A0AEED3D91D2B51BE525B43F00629157D(L_0, /*hidden argument*/NULL);
		// Save();
		PluginVersionHandler_Save_m87B93142AF9C7B6A9528B632057BCBB7264B4379(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// SA.Foundation.Config.PluginVersion SA.Foundation.Config.PluginVersionHandler::get_PluginVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * PluginVersionHandler_get_PluginVersion_mFA13C88082085D9C3368E7C21C16EC2609E4CD9E (PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisPluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0_m89201ABDD87BD3FE600675DEF99CA5854CBDE13A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	String_t* V_2 = NULL;
	Exception_t * V_3 = NULL;
	PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (m_pluginVersion == null)
		PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * L_0 = __this->get_m_pluginVersion_1();
		V_0 = (bool)((((RuntimeObject*)(PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0089;
		}
	}
	{
		// if (File.Exists(m_filename))
		String_t* L_2 = __this->get_m_filename_0();
		bool L_3;
		L_3 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_007b;
		}
	}
	{
		// var json = string.Empty;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_2 = L_5;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		// json = File.ReadAllText(m_filename);
		String_t* L_6 = __this->get_m_filename_0();
		String_t* L_7;
		L_7 = File_ReadAllText_m8C621C34562CAE1435A2221B3E369BEF1D0ED8BC(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// m_pluginVersion = JsonUtility.FromJson<PluginVersion>(json);
		String_t* L_8 = V_2;
		PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * L_9;
		L_9 = JsonUtility_FromJson_TisPluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0_m89201ABDD87BD3FE600675DEF99CA5854CBDE13A(L_8, /*hidden argument*/JsonUtility_FromJson_TisPluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0_m89201ABDD87BD3FE600675DEF99CA5854CBDE13A_RuntimeMethod_var);
		__this->set_m_pluginVersion_1(L_9);
		goto IL_0078;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// Debug.LogError(e.Message);
		Exception_t * L_10 = V_3;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_10);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_11, /*hidden argument*/NULL);
		// Debug.LogError("Failed to red from: " + m_filename + " JSON: " + json);
		String_t* L_12 = __this->get_m_filename_0();
		String_t* L_13 = V_2;
		String_t* L_14;
		L_14 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFA7B3C8DA4F674814F057D49791CE6CB2B8F5DBD)), L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2740C7BF0C86A9783445718129FEACE4BE93D7A5)), L_13, /*hidden argument*/NULL);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_14, /*hidden argument*/NULL);
		// m_pluginVersion = new PluginVersion();
		PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * L_15 = (PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0_il2cpp_TypeInfo_var)));
		PluginVersion__ctor_m71E3D9504BB654B2994826CE6706D3309A279823(L_15, /*hidden argument*/NULL);
		__this->set_m_pluginVersion_1(L_15);
		// throw;
		IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PluginVersionHandler_get_PluginVersion_mFA13C88082085D9C3368E7C21C16EC2609E4CD9E_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0078:
	{
		goto IL_0088;
	}

IL_007b:
	{
		// m_pluginVersion = new PluginVersion();
		PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * L_16 = (PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 *)il2cpp_codegen_object_new(PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0_il2cpp_TypeInfo_var);
		PluginVersion__ctor_m71E3D9504BB654B2994826CE6706D3309A279823(L_16, /*hidden argument*/NULL);
		__this->set_m_pluginVersion_1(L_16);
	}

IL_0088:
	{
	}

IL_0089:
	{
		// return m_pluginVersion;
		PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * L_17 = __this->get_m_pluginVersion_1();
		V_4 = L_17;
		goto IL_0093;
	}

IL_0093:
	{
		// }
		PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * L_18 = V_4;
		return L_18;
	}
}
// System.Void SA.Foundation.Config.PluginVersionHandler::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PluginVersionHandler_Save_m87B93142AF9C7B6A9528B632057BCBB7264B4379 (PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * __this, const RuntimeMethod* method)
{
	{
		// File.WriteAllText(m_filename, JsonUtility.ToJson(PluginVersion));
		String_t* L_0 = __this->get_m_filename_0();
		PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * L_1;
		L_1 = PluginVersionHandler_get_PluginVersion_mFA13C88082085D9C3368E7C21C16EC2609E4CD9E(__this, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_1, /*hidden argument*/NULL);
		File_WriteAllText_mA0528ED8C0C9B94864772B9036FC4B206682EE9C(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean SA.Foundation.Config.PluginVersionHandler::HasChanges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PluginVersionHandler_HasChanges_mB97B1567BCAE81F59717E41F11B7103A641BBF5D (PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return PluginVersion.MinorVersion > 0;
		PluginVersion_t5BC11C636202D6CF573ECA672AEEB45CEDC85EA0 * L_0;
		L_0 = PluginVersionHandler_get_PluginVersion_mFA13C88082085D9C3368E7C21C16EC2609E4CD9E(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = L_0->get_MinorVersion_1();
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		// }
		bool L_2 = V_0;
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
// System.Void SA.Foundation.UtilitiesEditor.SA_AssetDatabase::CreateAsset(UnityEngine.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_AssetDatabase_CreateAsset_mA5739DBCA19A26411B61F720C23E3A1B2C1A0711 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___asset0, String_t* ___path1, const RuntimeMethod* method)
{
	{
		// path = FixRelativePath(path);
		String_t* L_0 = ___path1;
		String_t* L_1;
		L_1 = SA_AssetDatabase_FixRelativePath_mC710465E4A6C927A23848977E8D7CAB3B6C9600C(L_0, (bool)1, /*hidden argument*/NULL);
		___path1 = L_1;
		// SA_AssetDatabaseProxy.Create(asset, path);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2 = ___asset0;
		String_t* L_3 = ___path1;
		SA_AssetDatabaseProxy_Create_mB723B59442DF97EE8E10EFC76CC267B1C6036A98(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SA.Foundation.UtilitiesEditor.SA_AssetDatabase::CreateFolder(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_AssetDatabase_CreateFolder_m9AB309AA199F49AE072FF3BF7DD4B012CC1A7A52 (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!path.EndsWith(SA_PathUtil.FOLDER_SEPARATOR, System.StringComparison.CurrentCulture)) path = path + SA_PathUtil.FOLDER_SEPARATOR;
		String_t* L_0 = ___path0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_EndsWith_mB6E4F554EB12AF5BB822050E738AB867AF5C9864(L_0, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, 0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// if (!path.EndsWith(SA_PathUtil.FOLDER_SEPARATOR, System.StringComparison.CurrentCulture)) path = path + SA_PathUtil.FOLDER_SEPARATOR;
		String_t* L_3 = ___path0;
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_3, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, /*hidden argument*/NULL);
		___path0 = L_4;
	}

IL_0021:
	{
		// ValidateFoldersPath(path);
		String_t* L_5 = ___path0;
		SA_AssetDatabase_ValidateFoldersPath_mFA1326263CCDB6AEDC5E83FF511BE2E9BA935D28(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String SA.Foundation.UtilitiesEditor.SA_AssetDatabase::GetAssetPath(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_AssetDatabase_GetAssetPath_m2AA2700917B5AF11E73615AE5BDE0F53C3CB38FD (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___assetObject0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return FixRelativePath(SA_AssetDatabaseProxy.GetAssetPath(assetObject), false);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = ___assetObject0;
		String_t* L_1;
		L_1 = SA_AssetDatabaseProxy_GetAssetPath_m15FF5409B46945EC7A8CC65F816AEA7AB0AB6486(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = SA_AssetDatabase_FixRelativePath_mC710465E4A6C927A23848977E8D7CAB3B6C9600C(L_1, (bool)0, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String SA.Foundation.UtilitiesEditor.SA_AssetDatabase::GetAbsoluteAssetPath(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_AssetDatabase_GetAbsoluteAssetPath_m6F849E97709DFDC90AC7CB98C715948C1C3EE0AD (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___assetObject0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// var relativePath = GetAssetPath(assetObject);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = ___assetObject0;
		String_t* L_1;
		L_1 = SA_AssetDatabase_GetAssetPath_m2AA2700917B5AF11E73615AE5BDE0F53C3CB38FD(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// return SA_PathUtil.ConvertRelativeToAbsolutePath(relativePath);
		String_t* L_2 = V_0;
		String_t* L_3;
		L_3 = SA_PathUtil_ConvertRelativeToAbsolutePath_mBACF72992DCF7D770500264B7F632F8A42F01736(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.String SA.Foundation.UtilitiesEditor.SA_AssetDatabase::GetExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_AssetDatabase_GetExtension_mB4DAF7E0D3A1BE28C9CEF839E72FF0B9E189FE0B (String_t* ___filePath0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return SA_PathUtil.GetExtension(filePath);
		String_t* L_0 = ___filePath0;
		String_t* L_1;
		L_1 = SA_PathUtil_GetExtension_mED31EFD6B77927418073B6583E5EEC8EB7935578(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean SA.Foundation.UtilitiesEditor.SA_AssetDatabase::IsAssetInsideFolder(UnityEngine.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SA_AssetDatabase_IsAssetInsideFolder_m9ABE9FDE53AC8B0C47421DCC027160C6EE976A16 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___assetObject0, String_t* ___folderPath1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	{
		// var assetPath = GetAssetPath(assetObject);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = ___assetObject0;
		String_t* L_1;
		L_1 = SA_AssetDatabase_GetAssetPath_m2AA2700917B5AF11E73615AE5BDE0F53C3CB38FD(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var assetFolder = SA_PathUtil.GetDirectoryPath(assetPath) + SA_PathUtil.FOLDER_SEPARATOR;
		String_t* L_2 = V_0;
		String_t* L_3;
		L_3 = SA_PathUtil_GetDirectoryPath_m2372219812152AABE1CC4657DA5FC8316E163E2C(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_3, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, /*hidden argument*/NULL);
		V_1 = L_4;
		// return folderPath.Equals(assetFolder);
		String_t* L_5 = ___folderPath1;
		String_t* L_6 = V_1;
		NullCheck(L_5);
		bool L_7;
		L_7 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		bool L_8 = V_2;
		return L_8;
	}
}
// System.String SA.Foundation.UtilitiesEditor.SA_AssetDatabase::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_AssetDatabase_GetFileName_mAA5AD3AB82DE71E6E614A0D33A9A805DD69ECBDA (String_t* ___filePath0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return SA_PathUtil.GetFileName(filePath);
		String_t* L_0 = ___filePath0;
		String_t* L_1;
		L_1 = SA_PathUtil_GetFileName_mD1BA82994AE80C69303B81C2FBEF9BB3A4A3A14A(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String SA.Foundation.UtilitiesEditor.SA_AssetDatabase::GetAssetNameWithoutExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_AssetDatabase_GetAssetNameWithoutExtension_mD25572EB4B2993D43E5E085A2970DE0AA84262EC (String_t* ___filePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return Path.GetFileNameWithoutExtension(filePath);
		String_t* L_0 = ___filePath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetFileNameWithoutExtension_m52BA8E84FC8949E8A9F60D024742189907B997D2(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean SA.Foundation.UtilitiesEditor.SA_AssetDatabase::CopyAsset(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SA_AssetDatabase_CopyAsset_mD1742726634DF60EFC7842C040D7CEC577C880D9 (String_t* ___path0, String_t* ___newPath1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// path = FixRelativePath(path);
		String_t* L_0 = ___path0;
		String_t* L_1;
		L_1 = SA_AssetDatabase_FixRelativePath_mC710465E4A6C927A23848977E8D7CAB3B6C9600C(L_0, (bool)1, /*hidden argument*/NULL);
		___path0 = L_1;
		// newPath = FixRelativePath(newPath);
		String_t* L_2 = ___newPath1;
		String_t* L_3;
		L_3 = SA_AssetDatabase_FixRelativePath_mC710465E4A6C927A23848977E8D7CAB3B6C9600C(L_2, (bool)1, /*hidden argument*/NULL);
		___newPath1 = L_3;
		// return SA_AssetDatabaseProxy.CopyAsset(path, newPath);
		String_t* L_4 = ___path0;
		String_t* L_5 = ___newPath1;
		bool L_6;
		L_6 = SA_AssetDatabaseProxy_CopyAsset_m4D1EA5D731D4C65FEBD436A9A3FB66BC36CBF695(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		bool L_7 = V_0;
		return L_7;
	}
}
// System.String SA.Foundation.UtilitiesEditor.SA_AssetDatabase::MoveAsset(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_AssetDatabase_MoveAsset_m66E9BECF2F242C5A153FFAC11674C55A6A8D46BA (String_t* ___oldPath0, String_t* ___newPath1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// oldPath = FixRelativePath(oldPath);
		String_t* L_0 = ___oldPath0;
		String_t* L_1;
		L_1 = SA_AssetDatabase_FixRelativePath_mC710465E4A6C927A23848977E8D7CAB3B6C9600C(L_0, (bool)1, /*hidden argument*/NULL);
		___oldPath0 = L_1;
		// newPath = FixRelativePath(newPath);
		String_t* L_2 = ___newPath1;
		String_t* L_3;
		L_3 = SA_AssetDatabase_FixRelativePath_mC710465E4A6C927A23848977E8D7CAB3B6C9600C(L_2, (bool)1, /*hidden argument*/NULL);
		___newPath1 = L_3;
		// return SA_AssetDatabaseProxy.Move(oldPath, newPath);
		String_t* L_4 = ___oldPath0;
		String_t* L_5 = ___newPath1;
		String_t* L_6;
		L_6 = SA_AssetDatabaseProxy_Move_m6C8CB5839D04EC2990BD4746537EA5BEB6CE8DF2(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		String_t* L_7 = V_0;
		return L_7;
	}
}
// System.Boolean SA.Foundation.UtilitiesEditor.SA_AssetDatabase::DeleteAsset(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SA_AssetDatabase_DeleteAsset_m6692957AB50522A5693D3B8CFF9D5CD01918DCBF (String_t* ___path0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// path = FixRelativePath(path);
		String_t* L_0 = ___path0;
		String_t* L_1;
		L_1 = SA_AssetDatabase_FixRelativePath_mC710465E4A6C927A23848977E8D7CAB3B6C9600C(L_0, (bool)1, /*hidden argument*/NULL);
		___path0 = L_1;
		// return SA_AssetDatabaseProxy.Delete(path);
		String_t* L_2 = ___path0;
		bool L_3;
		L_3 = SA_AssetDatabaseProxy_Delete_m72963960A3C1F9732B8BDCB8D1850001ED83D95A(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.String SA.Foundation.UtilitiesEditor.SA_AssetDatabase::RenameAsset(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_AssetDatabase_RenameAsset_m8A51FF0F52C49146A24403435AEA9656E7996B31 (String_t* ___pathName0, String_t* ___newName1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// pathName = FixRelativePath(pathName);
		String_t* L_0 = ___pathName0;
		String_t* L_1;
		L_1 = SA_AssetDatabase_FixRelativePath_mC710465E4A6C927A23848977E8D7CAB3B6C9600C(L_0, (bool)1, /*hidden argument*/NULL);
		___pathName0 = L_1;
		// return SA_AssetDatabaseProxy.RenameAsset(pathName, newName);
		String_t* L_2 = ___pathName0;
		String_t* L_3 = ___newName1;
		String_t* L_4;
		L_4 = SA_AssetDatabaseProxy_RenameAsset_m70E5128A29C28AD6FDA7AEAF8AF015E15B9A53E1(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.Boolean SA.Foundation.UtilitiesEditor.SA_AssetDatabase::IsDirectoryExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SA_AssetDatabase_IsDirectoryExists_m4EF142FB5A7C440FE1BD7144E8CD61046A9B0A22 (String_t* ___path0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return SA_PathUtil.IsDirectoryExists(path);
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = SA_PathUtil_IsDirectoryExists_mF86028518A63F771B0A704F81112AD32CFA7A228(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean SA.Foundation.UtilitiesEditor.SA_AssetDatabase::IsFileExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SA_AssetDatabase_IsFileExists_m545D788E3C3038C18BDF9076B9C800DC431D4284 (String_t* ___path0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return SA_PathUtil.IsFileExists(path);
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = SA_PathUtil_IsFileExists_m6DA5111A81D5056FD841E88BD8E7C93CB00607CF(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.String[] SA.Foundation.UtilitiesEditor.SA_AssetDatabase::GetDirectories(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* SA_AssetDatabase_GetDirectories_m3BF9C49372696A9E2A8607980F097D355BCE0799 (String_t* ___folderPath0, const RuntimeMethod* method)
{
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	{
		// folderPath = FixRelativePath(folderPath);
		String_t* L_0 = ___folderPath0;
		String_t* L_1;
		L_1 = SA_AssetDatabase_FixRelativePath_mC710465E4A6C927A23848977E8D7CAB3B6C9600C(L_0, (bool)1, /*hidden argument*/NULL);
		___folderPath0 = L_1;
		// return SA_FilesUtil.GetDirectories(folderPath);
		String_t* L_2 = ___folderPath0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = SA_FilesUtil_GetDirectories_mBCA3362D6B9D731E68CC35DB4A3F67431813D642(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean SA.Foundation.UtilitiesEditor.SA_AssetDatabase::IsValidFolder(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SA_AssetDatabase_IsValidFolder_m73A135E3E556963BA0BB439A9316ED97CE8E62A1 (String_t* ___path0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return IsDirectoryExists(path);
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = SA_AssetDatabase_IsDirectoryExists_m4EF142FB5A7C440FE1BD7144E8CD61046A9B0A22(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.List`1<System.String> SA.Foundation.UtilitiesEditor.SA_AssetDatabase::FindAssets(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * SA_AssetDatabase_FindAssets_mC9FDA77D39CA11A0411F42F2D33C14F5ABA9231E (String_t* ___pathToDirectory0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	{
		// return FindAssetsWithExtentions(pathToDirectory);
		String_t* L_0 = ___pathToDirectory0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1;
		L_1 = Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_inline(/*hidden argument*/Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2;
		L_2 = SA_AssetDatabase_FindAssetsWithExtentions_mE05BF4B441A218328CE366137487213D15F96389(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = V_0;
		return L_3;
	}
}
// System.Collections.Generic.List`1<System.String> SA.Foundation.UtilitiesEditor.SA_AssetDatabase::FindAssetsWithExtentions(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * SA_AssetDatabase_FindAssetsWithExtentions_mE05BF4B441A218328CE366137487213D15F96389 (String_t* ___pathToDirectory0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___extentions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_1 = NULL;
	{
		// pathToDirectory = FixRelativePath(pathToDirectory, false);
		String_t* L_0 = ___pathToDirectory0;
		String_t* L_1;
		L_1 = SA_AssetDatabase_FixRelativePath_mC710465E4A6C927A23848977E8D7CAB3B6C9600C(L_0, (bool)0, /*hidden argument*/NULL);
		___pathToDirectory0 = L_1;
		// if (!IsValidFolder(pathToDirectory)) return new List<string>();
		String_t* L_2 = ___pathToDirectory0;
		bool L_3;
		L_3 = SA_AssetDatabase_IsValidFolder_m73A135E3E556963BA0BB439A9316ED97CE8E62A1(L_2, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		// if (!IsValidFolder(pathToDirectory)) return new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_5, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_1 = L_5;
		goto IL_002e;
	}

IL_001f:
	{
		// return SA_AssetDatabaseProxy.FindAssets(pathToDirectory, string.Empty, extentions);
		String_t* L_6 = ___pathToDirectory0;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = ___extentions1;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_9;
		L_9 = SA_AssetDatabaseProxy_FindAssets_m9103E8D781515A80E312A99AF12F925964EB9053(L_6, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10 = V_1;
		return L_10;
	}
}
// System.Void SA.Foundation.UtilitiesEditor.SA_AssetDatabase::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_AssetDatabase_Refresh_m3751550C9C52078D922AF630F2D9BD331000E8F7 (const RuntimeMethod* method)
{
	{
		// SA_AssetDatabaseProxy.Refresh();
		SA_AssetDatabaseProxy_Refresh_m2FE5BA3710744966784EF9834D61FA2F4EB57A84(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SA.Foundation.UtilitiesEditor.SA_AssetDatabase::ImportAsset(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_AssetDatabase_ImportAsset_m06352900206C7C4FA4517568B5C07B68B01AEDCE (String_t* ___path0, const RuntimeMethod* method)
{
	{
		// path = FixRelativePath(path);
		String_t* L_0 = ___path0;
		String_t* L_1;
		L_1 = SA_AssetDatabase_FixRelativePath_mC710465E4A6C927A23848977E8D7CAB3B6C9600C(L_0, (bool)1, /*hidden argument*/NULL);
		___path0 = L_1;
		// SA_AssetDatabaseProxy.ImportAsset(path);
		String_t* L_2 = ___path0;
		SA_AssetDatabaseProxy_ImportAsset_mB3B8FAB3245C583ECB5B399144160D6EE38DD0F1(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 SA.Foundation.UtilitiesEditor.SA_AssetDatabase::GetLocalIdentifierInFile(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SA_AssetDatabase_GetLocalIdentifierInFile_mA98297CAF17DD343C54C5ACEB48C8F7DA25B3EE9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return 0;
		V_0 = 0;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Int32 SA.Foundation.UtilitiesEditor.SA_AssetDatabase::GetLocalIdentifierInFile(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SA_AssetDatabase_GetLocalIdentifierInFile_mF1C5C000263402C9B02E0AEAE266DE9BDB887F2B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___component0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return 0;
		V_0 = 0;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.String SA.Foundation.UtilitiesEditor.SA_AssetDatabase::FixRelativePath(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_AssetDatabase_FixRelativePath_mC710465E4A6C927A23848977E8D7CAB3B6C9600C (String_t* ___path0, bool ___validateFoldersPath1, const RuntimeMethod* method)
{
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		// path = SA_PathUtil.FixRelativePath(path);
		String_t* L_0 = ___path0;
		String_t* L_1;
		L_1 = SA_PathUtil_FixRelativePath_mEE8FEA3A5B646D3D7B1066CA788BA6D8BCEBAA0F(L_0, /*hidden argument*/NULL);
		___path0 = L_1;
		// if (validateFoldersPath) ValidateFoldersPath(path);
		bool L_2 = ___validateFoldersPath1;
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		// if (validateFoldersPath) ValidateFoldersPath(path);
		String_t* L_4 = ___path0;
		SA_AssetDatabase_ValidateFoldersPath_mFA1326263CCDB6AEDC5E83FF511BE2E9BA935D28(L_4, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// return path;
		String_t* L_5 = ___path0;
		V_1 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.Void SA.Foundation.UtilitiesEditor.SA_AssetDatabase::ValidateFoldersPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_AssetDatabase_ValidateFoldersPath_mFA1326263CCDB6AEDC5E83FF511BE2E9BA935D28 (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	bool V_3 = false;
	String_t* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var parentDir = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		// foreach (var dir in SA_PathUtil.GetDirectoriesOutOfPath(path))
		String_t* L_1 = ___path0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2;
		L_2 = SA_PathUtil_GetDirectoriesOutOfPath_m6B31A18D51B87437C4F130BF4BC7DEB34E8A7054(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_3;
		L_3 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_2, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_0016:
		{
			// foreach (var dir in SA_PathUtil.GetDirectoriesOutOfPath(path))
			String_t* L_4;
			L_4 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_1), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
			V_2 = L_4;
			// if (!IsDirectoryExists(dir))
			String_t* L_5 = V_2;
			bool L_6;
			L_6 = SA_AssetDatabase_IsDirectoryExists_m4EF142FB5A7C440FE1BD7144E8CD61046A9B0A22(L_5, /*hidden argument*/NULL);
			V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
			bool L_7 = V_3;
			if (!L_7)
			{
				goto IL_003f;
			}
		}

IL_002c:
		{
			// var dirName = SA_PathUtil.GetPathDirectoryName(dir);
			String_t* L_8 = V_2;
			String_t* L_9;
			L_9 = SA_PathUtil_GetPathDirectoryName_mECE3A966D0DCD646937B03BBA142FD9F3CA4B40A(L_8, /*hidden argument*/NULL);
			V_4 = L_9;
			// SA_AssetDatabaseProxy.CreateFolder(parentDir, dirName);
			String_t* L_10 = V_0;
			String_t* L_11 = V_4;
			SA_AssetDatabaseProxy_CreateFolder_m1F6D25FD6D13F0BF2D85CA239754E28329478F89(L_10, L_11, /*hidden argument*/NULL);
		}

IL_003f:
		{
			// parentDir = dir;
			String_t* L_12 = V_2;
			V_0 = L_12;
		}

IL_0042:
		{
			// foreach (var dir in SA_PathUtil.GetDirectoriesOutOfPath(path))
			bool L_13;
			L_13 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0016;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_004d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004d;
	}

FINALLY_004d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_1), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(77)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(77)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
	}

IL_005c:
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
// SA.Foundation.Config.PluginVersionHandler SA.Foundation.Config.SA_Config::get_FoundationVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * SA_Config_get_FoundationVersion_mAEFD6189145F481557E4555BF0C82E6FD9DD0C80 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_Config_t5F3F515AB24EAB9F334CCAEE1677EE2A7FC103F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC9F0133B3C053AD6D50D4DB8368E98518DA0D6D);
		s_Il2CppMethodInitialized = true;
	}
	PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * G_B2_0 = NULL;
	PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * G_B1_0 = NULL;
	{
		// public static PluginVersionHandler FoundationVersion => s_FoundationVersion ?? (s_FoundationVersion = new PluginVersionHandler(StansAssetsFoundationPath));
		PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * L_0 = ((SA_Config_t5F3F515AB24EAB9F334CCAEE1677EE2A7FC103F4_StaticFields*)il2cpp_codegen_static_fields_for(SA_Config_t5F3F515AB24EAB9F334CCAEE1677EE2A7FC103F4_il2cpp_TypeInfo_var))->get_s_FoundationVersion_36();
		PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
	}
	{
		PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * L_2 = (PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 *)il2cpp_codegen_object_new(PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335_il2cpp_TypeInfo_var);
		PluginVersionHandler__ctor_m9EC9E7236AB3CAE2281016DACDCD22F08BBE8796(L_2, _stringLiteralCC9F0133B3C053AD6D50D4DB8368E98518DA0D6D, /*hidden argument*/NULL);
		PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * L_3 = L_2;
		((SA_Config_t5F3F515AB24EAB9F334CCAEE1677EE2A7FC103F4_StaticFields*)il2cpp_codegen_static_fields_for(SA_Config_t5F3F515AB24EAB9F334CCAEE1677EE2A7FC103F4_il2cpp_TypeInfo_var))->set_s_FoundationVersion_36(L_3);
		G_B2_0 = L_3;
	}

IL_0019:
	{
		return G_B2_0;
	}
}
// System.Void SA.Foundation.Config.SA_Config::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_Config__ctor_m7FB8755B0564217A041D6DF7FCF626BF15B66F2E (SA_Config_t5F3F515AB24EAB9F334CCAEE1677EE2A7FC103F4 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void SA.Foundation.Templates.SA_DataResult::.ctor(SA.Foundation.Templates.SA_iResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_DataResult__ctor_mEAAAC92C52775094909E37D2D98E2CA6B0D78A2B (SA_DataResult_tF0A5319D09E80AE65AF389F07D60BD8DB8353144 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected string m_Data = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_Data_2(L_0);
		// : base(result) { }
		RuntimeObject* L_1 = ___result0;
		SA_Result__ctor_m48ABC3B9F10115B2E9912FFE8235ECCC059D343C(__this, L_1, /*hidden argument*/NULL);
		// : base(result) { }
		return;
	}
}
// System.String SA.Foundation.Templates.SA_DataResult::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_DataResult_get_Data_mDD5B9C7631C9FDE34EFFFE1747F61DCDDC026DCB (SA_DataResult_tF0A5319D09E80AE65AF389F07D60BD8DB8353144 * __this, const RuntimeMethod* method)
{
	{
		// internal string Data => m_Data;
		String_t* L_0 = __this->get_m_Data_2();
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
// System.Void SA.Foundation.UtilitiesEditor.SA_EditorUtility::SetDirty(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_EditorUtility_SetDirty_m679AD6EA87AF936CED5F7BBE0FB35523BD7D0128 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SA.Foundation.UtilitiesEditor.SA_EditorUtility::OpenScript(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_EditorUtility_OpenScript_m3714E15B7C72B9BE5A961B89C97C92CA418B407E (String_t* ___pathToScript0, int32_t ___lineNumber1, const RuntimeMethod* method)
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
// System.Void SA.Foundation.Templates.SA_Error::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_Error__ctor_m631E82E9A0A7BCB5753C838CBEB2A6812131BA52 (SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * __this, int32_t ___code0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string m_message = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_message_1(L_0);
		// public SA_Error(int code, string message = "")
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_code = code;
		int32_t L_1 = ___code0;
		__this->set_m_code_0(L_1);
		// m_message = message;
		String_t* L_2 = ___message1;
		__this->set_m_message_1(L_2);
		// }
		return;
	}
}
// System.Int32 SA.Foundation.Templates.SA_Error::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SA_Error_get_Code_m8309D2C635C8E37CE5FEBA26E59769F578C47509 (SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * __this, const RuntimeMethod* method)
{
	{
		// public int Code => m_code;
		int32_t L_0 = __this->get_m_code_0();
		return L_0;
	}
}
// System.String SA.Foundation.Templates.SA_Error::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_Error_get_Message_m519EA465FD7A239E17E95B6D8A049DC8D34550C1 (SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * __this, const RuntimeMethod* method)
{
	{
		// public string Message => m_message;
		String_t* L_0 = __this->get_m_message_1();
		return L_0;
	}
}
// System.String SA.Foundation.Templates.SA_Error::get_FullMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_Error_get_FullMessage_mC276DE8F6D837B266DDF43345B039F83DB3D3108 (SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5295380188F75D696383F8BDB2147F0053791372);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// if (Message.StartsWith(Code.ToString()))
		String_t* L_0;
		L_0 = SA_Error_get_Message_m519EA465FD7A239E17E95B6D8A049DC8D34550C1_inline(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = SA_Error_get_Code_m8309D2C635C8E37CE5FEBA26E59769F578C47509_inline(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// return Message;
		String_t* L_5;
		L_5 = SA_Error_get_Message_m519EA465FD7A239E17E95B6D8A049DC8D34550C1_inline(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0048;
	}

IL_0027:
	{
		// return Code + "::" + Message;
		int32_t L_6;
		L_6 = SA_Error_get_Code_m8309D2C635C8E37CE5FEBA26E59769F578C47509_inline(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = SA_Error_get_Message_m519EA465FD7A239E17E95B6D8A049DC8D34550C1_inline(__this, /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_7, _stringLiteral5295380188F75D696383F8BDB2147F0053791372, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		goto IL_0048;
	}

IL_0048:
	{
		// }
		String_t* L_10 = V_2;
		return L_10;
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
// System.Void SA.Foundation.Events.SA_Event::AddListener(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_Event_AddListener_m30FCD0C70872DF2BBAC94ED2E7E6F33F77FD89C6 (SA_Event_t3F394B9F2E2D192A7D1476DB378EC8B1A6ABB3C0 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___listner0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC670366175AF1378C4DD1D00FEABA7DCFDD2C776_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * V_0 = NULL;
	bool V_1 = false;
	{
		// if (listner == null) return;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___listner0;
		V_1 = (bool)((((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// if (listner == null) return;
		goto IL_002c;
	}

IL_000b:
	{
		// var info = new SafeActionInfo();
		SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * L_2 = (SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F *)il2cpp_codegen_object_new(SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F_il2cpp_TypeInfo_var);
		SafeActionInfo__ctor_m3724A216E8D37BD03BC754579621D70B1928C51E(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		// info.Target = this;
		SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_Target_1(__this);
		// info.Action = listner;
		SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * L_4 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = ___listner0;
		NullCheck(L_4);
		L_4->set_Action_0(L_5);
		// m_targetedActions.Add(info);
		List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * L_6 = __this->get_m_targetedActions_0();
		SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mC670366175AF1378C4DD1D00FEABA7DCFDD2C776(L_6, L_7, /*hidden argument*/List_1_Add_mC670366175AF1378C4DD1D00FEABA7DCFDD2C776_RuntimeMethod_var);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void SA.Foundation.Events.SA_Event::AddSafeListener(System.Object,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_Event_AddSafeListener_m8B4F0E4D941E0CC3E04261A022DB6BDCFCBF9C92 (SA_Event_t3F394B9F2E2D192A7D1476DB378EC8B1A6ABB3C0 * __this, RuntimeObject * ___callbackTarget0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___listner1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC670366175AF1378C4DD1D00FEABA7DCFDD2C776_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * V_0 = NULL;
	bool V_1 = false;
	{
		// if (listner == null) return;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___listner1;
		V_1 = (bool)((((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// if (listner == null) return;
		goto IL_002c;
	}

IL_000b:
	{
		// var info = new SafeActionInfo();
		SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * L_2 = (SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F *)il2cpp_codegen_object_new(SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F_il2cpp_TypeInfo_var);
		SafeActionInfo__ctor_m3724A216E8D37BD03BC754579621D70B1928C51E(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		// info.Target = callbackTarget;
		SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * L_3 = V_0;
		RuntimeObject * L_4 = ___callbackTarget0;
		NullCheck(L_3);
		L_3->set_Target_1(L_4);
		// info.Action = listner;
		SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = ___listner1;
		NullCheck(L_5);
		L_5->set_Action_0(L_6);
		// m_targetedActions.Add(info);
		List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * L_7 = __this->get_m_targetedActions_0();
		SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * L_8 = V_0;
		NullCheck(L_7);
		List_1_Add_mC670366175AF1378C4DD1D00FEABA7DCFDD2C776(L_7, L_8, /*hidden argument*/List_1_Add_mC670366175AF1378C4DD1D00FEABA7DCFDD2C776_RuntimeMethod_var);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void SA.Foundation.Events.SA_Event::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_Event_Invoke_m3006A3F845187EC1F480B7360040E54DAF155765 (SA_Event_t3F394B9F2E2D192A7D1476DB378EC8B1A6ABB3C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m78D134B2270B295C6FBFA7FA700450296DE445F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEEC7896F047DCCD2779634CF8E67B457F5FBE128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m28EC4675D681115ACF4E4B66C93EF22F89D4E6B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC670366175AF1378C4DD1D00FEABA7DCFDD2C776_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6ABE5DC192AEE25946217AA5405E68D92675A629_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m264EFBE445777909A21B4652A7AA79B1E10EC874_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m908B74FD954D8C65062D3955FE2B91EB0BB8488C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * V_0 = NULL;
	List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * V_1 = NULL;
	Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD  V_2;
	memset((&V_2), 0, sizeof(V_2));
	SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * V_3 = NULL;
	bool V_4 = false;
	Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD  V_5;
	memset((&V_5), 0, sizeof(V_5));
	SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	int32_t G_B5_0 = 0;
	{
		// var validList = new List<SafeActionInfo>();
		List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * L_0 = (List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 *)il2cpp_codegen_object_new(List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7_il2cpp_TypeInfo_var);
		List_1__ctor_m264EFBE445777909A21B4652A7AA79B1E10EC874(L_0, /*hidden argument*/List_1__ctor_m264EFBE445777909A21B4652A7AA79B1E10EC874_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var info in m_targetedActions)
		List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * L_1 = __this->get_m_targetedActions_0();
		NullCheck(L_1);
		Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD  L_2;
		L_2 = List_1_GetEnumerator_m6ABE5DC192AEE25946217AA5405E68D92675A629(L_1, /*hidden argument*/List_1_GetEnumerator_m6ABE5DC192AEE25946217AA5405E68D92675A629_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0046;
		}

IL_0016:
		{
			// foreach (var info in m_targetedActions)
			SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * L_3;
			L_3 = Enumerator_get_Current_m28EC4675D681115ACF4E4B66C93EF22F89D4E6B9_inline((Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD *)(&V_2), /*hidden argument*/Enumerator_get_Current_m28EC4675D681115ACF4E4B66C93EF22F89D4E6B9_RuntimeMethod_var);
			V_3 = L_3;
			// if (info.Target != null && !info.Target.Equals(null))
			SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * L_4 = V_3;
			NullCheck(L_4);
			RuntimeObject * L_5 = L_4->get_Target_1();
			if (!L_5)
			{
				goto IL_0037;
			}
		}

IL_0026:
		{
			SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * L_6 = V_3;
			NullCheck(L_6);
			RuntimeObject * L_7 = L_6->get_Target_1();
			NullCheck(L_7);
			bool L_8;
			L_8 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_7, NULL);
			G_B5_0 = ((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
			goto IL_0038;
		}

IL_0037:
		{
			G_B5_0 = 0;
		}

IL_0038:
		{
			V_4 = (bool)G_B5_0;
			bool L_9 = V_4;
			if (!L_9)
			{
				goto IL_0046;
			}
		}

IL_003e:
		{
			// validList.Add(info);
			List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * L_10 = V_0;
			SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * L_11 = V_3;
			NullCheck(L_10);
			List_1_Add_mC670366175AF1378C4DD1D00FEABA7DCFDD2C776(L_10, L_11, /*hidden argument*/List_1_Add_mC670366175AF1378C4DD1D00FEABA7DCFDD2C776_RuntimeMethod_var);
		}

IL_0046:
		{
			// foreach (var info in m_targetedActions)
			bool L_12;
			L_12 = Enumerator_MoveNext_mEEC7896F047DCCD2779634CF8E67B457F5FBE128((Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mEEC7896F047DCCD2779634CF8E67B457F5FBE128_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0016;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x60, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m78D134B2270B295C6FBFA7FA700450296DE445F0((Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD *)(&V_2), /*hidden argument*/Enumerator_Dispose_m78D134B2270B295C6FBFA7FA700450296DE445F0_RuntimeMethod_var);
		IL2CPP_END_FINALLY(81)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x60, IL_0060)
	}

IL_0060:
	{
		// m_targetedActions = validList;
		List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * L_13 = V_0;
		__this->set_m_targetedActions_0(L_13);
		// var invocationList = new List<SafeActionInfo>(m_targetedActions);
		List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * L_14 = __this->get_m_targetedActions_0();
		List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * L_15 = (List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 *)il2cpp_codegen_object_new(List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7_il2cpp_TypeInfo_var);
		List_1__ctor_m908B74FD954D8C65062D3955FE2B91EB0BB8488C(L_15, L_14, /*hidden argument*/List_1__ctor_m908B74FD954D8C65062D3955FE2B91EB0BB8488C_RuntimeMethod_var);
		V_1 = L_15;
		// foreach (var info in invocationList) info.Action.Invoke();
		List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * L_16 = V_1;
		NullCheck(L_16);
		Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD  L_17;
		L_17 = List_1_GetEnumerator_m6ABE5DC192AEE25946217AA5405E68D92675A629(L_16, /*hidden argument*/List_1_GetEnumerator_m6ABE5DC192AEE25946217AA5405E68D92675A629_RuntimeMethod_var);
		V_5 = L_17;
	}

IL_007c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0094;
		}

IL_007e:
		{
			// foreach (var info in invocationList) info.Action.Invoke();
			SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * L_18;
			L_18 = Enumerator_get_Current_m28EC4675D681115ACF4E4B66C93EF22F89D4E6B9_inline((Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD *)(&V_5), /*hidden argument*/Enumerator_get_Current_m28EC4675D681115ACF4E4B66C93EF22F89D4E6B9_RuntimeMethod_var);
			V_6 = L_18;
			// foreach (var info in invocationList) info.Action.Invoke();
			SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * L_19 = V_6;
			NullCheck(L_19);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_20 = L_19->get_Action_0();
			NullCheck(L_20);
			Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_20, /*hidden argument*/NULL);
		}

IL_0094:
		{
			// foreach (var info in invocationList) info.Action.Invoke();
			bool L_21;
			L_21 = Enumerator_MoveNext_mEEC7896F047DCCD2779634CF8E67B457F5FBE128((Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD *)(&V_5), /*hidden argument*/Enumerator_MoveNext_mEEC7896F047DCCD2779634CF8E67B457F5FBE128_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_007e;
			}
		}

IL_009d:
		{
			IL2CPP_LEAVE(0xAE, FINALLY_009f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009f;
	}

FINALLY_009f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m78D134B2270B295C6FBFA7FA700450296DE445F0((Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD *)(&V_5), /*hidden argument*/Enumerator_Dispose_m78D134B2270B295C6FBFA7FA700450296DE445F0_RuntimeMethod_var);
		IL2CPP_END_FINALLY(159)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(159)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAE, IL_00ae)
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void SA.Foundation.Events.SA_Event::RemoveListener(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_Event_RemoveListener_m1B1DB3BF1EAC5E430F6B08AB6922C691808111D6 (SA_Event_t3F394B9F2E2D192A7D1476DB378EC8B1A6ABB3C0 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___listner0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m78D134B2270B295C6FBFA7FA700450296DE445F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEEC7896F047DCCD2779634CF8E67B457F5FBE128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m28EC4675D681115ACF4E4B66C93EF22F89D4E6B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6ABE5DC192AEE25946217AA5405E68D92675A629_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mE064FBC0F861BAD6F075070485ECFE8ADB5B400E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var info in m_targetedActions)
		List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * L_0 = __this->get_m_targetedActions_0();
		NullCheck(L_0);
		Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD  L_1;
		L_1 = List_1_GetEnumerator_m6ABE5DC192AEE25946217AA5405E68D92675A629(L_0, /*hidden argument*/List_1_GetEnumerator_m6ABE5DC192AEE25946217AA5405E68D92675A629_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0038;
		}

IL_0010:
		{
			// foreach (var info in m_targetedActions)
			SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * L_2;
			L_2 = Enumerator_get_Current_m28EC4675D681115ACF4E4B66C93EF22F89D4E6B9_inline((Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD *)(&V_0), /*hidden argument*/Enumerator_get_Current_m28EC4675D681115ACF4E4B66C93EF22F89D4E6B9_RuntimeMethod_var);
			V_1 = L_2;
			// if (listner.Equals(info.Action))
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___listner0;
			SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * L_4 = V_1;
			NullCheck(L_4);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = L_4->get_Action_0();
			NullCheck(L_3);
			bool L_6;
			L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_5);
			V_2 = L_6;
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0038;
			}
		}

IL_0028:
		{
			// m_targetedActions.Remove(info);
			List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * L_8 = __this->get_m_targetedActions_0();
			SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * L_9 = V_1;
			NullCheck(L_8);
			bool L_10;
			L_10 = List_1_Remove_mE064FBC0F861BAD6F075070485ECFE8ADB5B400E(L_8, L_9, /*hidden argument*/List_1_Remove_mE064FBC0F861BAD6F075070485ECFE8ADB5B400E_RuntimeMethod_var);
			// return;
			IL2CPP_LEAVE(0x52, FINALLY_0043);
		}

IL_0038:
		{
			// foreach (var info in m_targetedActions)
			bool L_11;
			L_11 = Enumerator_MoveNext_mEEC7896F047DCCD2779634CF8E67B457F5FBE128((Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mEEC7896F047DCCD2779634CF8E67B457F5FBE128_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0010;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m78D134B2270B295C6FBFA7FA700450296DE445F0((Enumerator_t9126F90D057D90763F524B44386F9A10E9AE1CDD *)(&V_0), /*hidden argument*/Enumerator_Dispose_m78D134B2270B295C6FBFA7FA700450296DE445F0_RuntimeMethod_var);
		IL2CPP_END_FINALLY(67)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void SA.Foundation.Events.SA_Event::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_Event_RemoveAllListeners_m4702C829F30CA3491E4DEAB6F24B7370F523D613 (SA_Event_t3F394B9F2E2D192A7D1476DB378EC8B1A6ABB3C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mEBAAE9DC5131FCB01A11652052FA28423D6DBBE5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_targetedActions.Clear();
		List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * L_0 = __this->get_m_targetedActions_0();
		NullCheck(L_0);
		List_1_Clear_mEBAAE9DC5131FCB01A11652052FA28423D6DBBE5(L_0, /*hidden argument*/List_1_Clear_mEBAAE9DC5131FCB01A11652052FA28423D6DBBE5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SA.Foundation.Events.SA_Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_Event__ctor_m73D4C8FAB267F337EEE93C1A78FFFB0CFEE89F94 (SA_Event_t3F394B9F2E2D192A7D1476DB378EC8B1A6ABB3C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m264EFBE445777909A21B4652A7AA79B1E10EC874_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<SafeActionInfo> m_targetedActions = new List<SafeActionInfo>();
		List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 * L_0 = (List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7 *)il2cpp_codegen_object_new(List_1_tD4B48B2215BD61CAB41E0BAEE26124A42424F0A7_il2cpp_TypeInfo_var);
		List_1__ctor_m264EFBE445777909A21B4652A7AA79B1E10EC874(L_0, /*hidden argument*/List_1__ctor_m264EFBE445777909A21B4652A7AA79B1E10EC874_RuntimeMethod_var);
		__this->set_m_targetedActions_0(L_0);
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
// System.Void SA.Foundation.Utility.SA_FilesUtil::CreateFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_FilesUtil_CreateFile_mE8E24E573C6E0643EA1C91C5118252182B7C2219 (String_t* ___path0, const RuntimeMethod* method)
{
	{
		// path = FixRelativePath(path);
		String_t* L_0 = ___path0;
		String_t* L_1;
		L_1 = SA_FilesUtil_FixRelativePath_m2A36C77C6DAC9CA3EC3F59C02878A1D5821096DB(L_0, (bool)1, /*hidden argument*/NULL);
		___path0 = L_1;
		// File.Create(SA_PathUtil.ConvertRelativeToAbsolutePath(path));
		String_t* L_2 = ___path0;
		String_t* L_3;
		L_3 = SA_PathUtil_ConvertRelativeToAbsolutePath_mBACF72992DCF7D770500264B7F632F8A42F01736(L_2, /*hidden argument*/NULL);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_4;
		L_4 = File_Create_m2C278C920C8B40322EB632EC620A83B021C90725(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SA.Foundation.Utility.SA_FilesUtil::DeleteFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_FilesUtil_DeleteFile_m0A4845CF3E5841EE08DDB12CBE4544D09A3F58CF (String_t* ___path0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (SA_PathUtil.IsFileExists(path))
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = SA_PathUtil_IsFileExists_m6DA5111A81D5056FD841E88BD8E7C93CB00607CF(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// path = SA_PathUtil.ConvertRelativeToAbsolutePath(path);
		String_t* L_3 = ___path0;
		String_t* L_4;
		L_4 = SA_PathUtil_ConvertRelativeToAbsolutePath_mBACF72992DCF7D770500264B7F632F8A42F01736(L_3, /*hidden argument*/NULL);
		___path0 = L_4;
		// File.Delete(path);
		String_t* L_5 = ___path0;
		File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77(L_5, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Boolean SA.Foundation.Utility.SA_FilesUtil::IsDirectoryExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SA_FilesUtil_IsDirectoryExists_mE532FD69F36E5207BC9980FA5BE93F9D0899436E (String_t* ___path0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return SA_PathUtil.IsDirectoryExists(path);
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = SA_PathUtil_IsDirectoryExists_mF86028518A63F771B0A704F81112AD32CFA7A228(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean SA.Foundation.Utility.SA_FilesUtil::IsFileExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SA_FilesUtil_IsFileExists_mA7B4233839883F77914110DCE371796D5FEA155C (String_t* ___path0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return SA_PathUtil.IsFileExists(path);
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = SA_PathUtil_IsFileExists_m6DA5111A81D5056FD841E88BD8E7C93CB00607CF(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void SA.Foundation.Utility.SA_FilesUtil::Write(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_FilesUtil_Write_m866CCCE05AA669608AE3590235F4EA9B0F34FEF5 (String_t* ___path0, String_t* ___contents1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * V_1 = NULL;
	{
		// path = FixRelativePath(path);
		String_t* L_0 = ___path0;
		String_t* L_1;
		L_1 = SA_FilesUtil_FixRelativePath_m2A36C77C6DAC9CA3EC3F59C02878A1D5821096DB(L_0, (bool)1, /*hidden argument*/NULL);
		___path0 = L_1;
		// var absolutePath = SA_PathUtil.ConvertRelativeToAbsolutePath(path);
		String_t* L_2 = ___path0;
		String_t* L_3;
		L_3 = SA_PathUtil_ConvertRelativeToAbsolutePath_mBACF72992DCF7D770500264B7F632F8A42F01736(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// TextWriter tw = new StreamWriter(absolutePath, false);
		String_t* L_4 = V_0;
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_5 = (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 *)il2cpp_codegen_object_new(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
		StreamWriter__ctor_m6A81CE9EDAB3AAB4270E88539EA83D945954CD0E(L_5, L_4, (bool)0, /*hidden argument*/NULL);
		V_1 = L_5;
		// tw.Write(contents);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_6 = V_1;
		String_t* L_7 = ___contents1;
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_6, L_7);
		// tw.Close();
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(8 /* System.Void System.IO.TextWriter::Close() */, L_8);
		// }
		return;
	}
}
// System.Void SA.Foundation.Utility.SA_FilesUtil::WriteAllLines(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_FilesUtil_WriteAllLines_m688DA6DE14C321E043F8A38F0C80D6F61E4ECD46 (String_t* ___path0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___contents1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// path = FixRelativePath(path);
		String_t* L_0 = ___path0;
		String_t* L_1;
		L_1 = SA_FilesUtil_FixRelativePath_m2A36C77C6DAC9CA3EC3F59C02878A1D5821096DB(L_0, (bool)1, /*hidden argument*/NULL);
		___path0 = L_1;
		// var absolutePath = SA_PathUtil.ConvertRelativeToAbsolutePath(path);
		String_t* L_2 = ___path0;
		String_t* L_3;
		L_3 = SA_PathUtil_ConvertRelativeToAbsolutePath_mBACF72992DCF7D770500264B7F632F8A42F01736(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// File.WriteAllLines(absolutePath, contents);
		String_t* L_4 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = ___contents1;
		File_WriteAllLines_m1E190B6600536918D07A37AFB1936521AC24E6B6(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String SA.Foundation.Utility.SA_FilesUtil::Read(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_FilesUtil_Read_mA5566F17D8772A37691FDBC6F1F8323A17830B9C (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// if (SA_PathUtil.IsFileExists(path))
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = SA_PathUtil_IsFileExists_m6DA5111A81D5056FD841E88BD8E7C93CB00607CF(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// path = SA_PathUtil.ConvertRelativeToAbsolutePath(path);
		String_t* L_3 = ___path0;
		String_t* L_4;
		L_4 = SA_PathUtil_ConvertRelativeToAbsolutePath_mBACF72992DCF7D770500264B7F632F8A42F01736(L_3, /*hidden argument*/NULL);
		___path0 = L_4;
		// var content = File.ReadAllText(path);
		String_t* L_5 = ___path0;
		String_t* L_6;
		L_6 = File_ReadAllText_m8C621C34562CAE1435A2221B3E369BEF1D0ED8BC(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// return content;
		String_t* L_7 = V_1;
		V_2 = L_7;
		goto IL_0028;
	}

IL_001f:
	{
		// return string.Empty;
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_2 = L_8;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		String_t* L_9 = V_2;
		return L_9;
	}
}
// System.String[] SA.Foundation.Utility.SA_FilesUtil::ReadAllLines(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* SA_FilesUtil_ReadAllLines_mF623E69019180756FD45D252A3008140E0CCAF20 (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	{
		// if (SA_PathUtil.IsFileExists(path))
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = SA_PathUtil_IsFileExists_m6DA5111A81D5056FD841E88BD8E7C93CB00607CF(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// path = SA_PathUtil.ConvertRelativeToAbsolutePath(path);
		String_t* L_3 = ___path0;
		String_t* L_4;
		L_4 = SA_PathUtil_ConvertRelativeToAbsolutePath_mBACF72992DCF7D770500264B7F632F8A42F01736(L_3, /*hidden argument*/NULL);
		___path0 = L_4;
		// return File.ReadAllLines(path);
		String_t* L_5 = ___path0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6;
		L_6 = File_ReadAllLines_m705F4709C4562B0E24E95613867A32232DB42633(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0027;
	}

IL_001d:
	{
		// return new string[] { };
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)0);
		V_1 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = V_1;
		return L_8;
	}
}
// System.Void SA.Foundation.Utility.SA_FilesUtil::CopyFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_FilesUtil_CopyFile_mC932CF6D6CDAEB0451444D432F74C35F0E75CD5F (String_t* ___srcPath0, String_t* ___destPath1, const RuntimeMethod* method)
{
	bool V_0 = false;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (SA_PathUtil.IsFileExists(srcPath) && !srcPath.Equals(destPath))
		String_t* L_0 = ___srcPath0;
		bool L_1;
		L_1 = SA_PathUtil_IsFileExists_m6DA5111A81D5056FD841E88BD8E7C93CB00607CF(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_2 = ___srcPath0;
		String_t* L_3 = ___destPath1;
		NullCheck(L_2);
		bool L_4;
		L_4 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_2, L_3, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		// srcPath = FixRelativePath(srcPath, false);
		String_t* L_6 = ___srcPath0;
		String_t* L_7;
		L_7 = SA_FilesUtil_FixRelativePath_m2A36C77C6DAC9CA3EC3F59C02878A1D5821096DB(L_6, (bool)0, /*hidden argument*/NULL);
		___srcPath0 = L_7;
		// destPath = FixRelativePath(destPath);
		String_t* L_8 = ___destPath1;
		String_t* L_9;
		L_9 = SA_FilesUtil_FixRelativePath_m2A36C77C6DAC9CA3EC3F59C02878A1D5821096DB(L_8, (bool)1, /*hidden argument*/NULL);
		___destPath1 = L_9;
		// var absoluteSrcPath = SA_PathUtil.ConvertRelativeToAbsolutePath(srcPath);
		String_t* L_10 = ___srcPath0;
		String_t* L_11;
		L_11 = SA_PathUtil_ConvertRelativeToAbsolutePath_mBACF72992DCF7D770500264B7F632F8A42F01736(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// var absoluteDestPath = SA_PathUtil.ConvertRelativeToAbsolutePath(destPath);
		String_t* L_12 = ___destPath1;
		String_t* L_13;
		L_13 = SA_PathUtil_ConvertRelativeToAbsolutePath_mBACF72992DCF7D770500264B7F632F8A42F01736(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		// File.Copy(absoluteSrcPath, absoluteDestPath, true);
		String_t* L_14 = V_1;
		String_t* L_15 = V_2;
		File_Copy_m1CB9B28EA63AA6D9E36B50AABABE81CA8C22C794(L_14, L_15, (bool)1, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void SA.Foundation.Utility.SA_FilesUtil::CopyDirectory(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_FilesUtil_CopyDirectory_m853CBC1696FCABDE39DD58A6D2C40425EB28CCDA (String_t* ___srcPath0, String_t* ___destPath1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral855DC2CE49DCC1C549D22D5DB0CF5A8D5ABF0987);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	{
		// srcPath = FixRelativePath(srcPath);
		String_t* L_0 = ___srcPath0;
		String_t* L_1;
		L_1 = SA_FilesUtil_FixRelativePath_m2A36C77C6DAC9CA3EC3F59C02878A1D5821096DB(L_0, (bool)1, /*hidden argument*/NULL);
		___srcPath0 = L_1;
		// destPath = FixRelativePath(destPath);
		String_t* L_2 = ___destPath1;
		String_t* L_3;
		L_3 = SA_FilesUtil_FixRelativePath_m2A36C77C6DAC9CA3EC3F59C02878A1D5821096DB(L_2, (bool)1, /*hidden argument*/NULL);
		___destPath1 = L_3;
		// srcPath = SA_PathUtil.ConvertRelativeToAbsolutePath(srcPath);
		String_t* L_4 = ___srcPath0;
		String_t* L_5;
		L_5 = SA_PathUtil_ConvertRelativeToAbsolutePath_mBACF72992DCF7D770500264B7F632F8A42F01736(L_4, /*hidden argument*/NULL);
		___srcPath0 = L_5;
		// destPath = SA_PathUtil.ConvertRelativeToAbsolutePath(destPath);
		String_t* L_6 = ___destPath1;
		String_t* L_7;
		L_7 = SA_PathUtil_ConvertRelativeToAbsolutePath_mBACF72992DCF7D770500264B7F632F8A42F01736(L_6, /*hidden argument*/NULL);
		___destPath1 = L_7;
		// foreach (var dirPath in Directory.GetDirectories(srcPath, "*", SearchOption.AllDirectories)) Directory.CreateDirectory(dirPath.Replace(srcPath, destPath));
		String_t* L_8 = ___srcPath0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9;
		L_9 = Directory_GetDirectories_m8385078468AAF8D3BC3F71DD405B4ABB0DF91781(L_8, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, 1, /*hidden argument*/NULL);
		V_0 = L_9;
		V_1 = 0;
		goto IL_004b;
	}

IL_0035:
	{
		// foreach (var dirPath in Directory.GetDirectories(srcPath, "*", SearchOption.AllDirectories)) Directory.CreateDirectory(dirPath.Replace(srcPath, destPath));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = L_13;
		// foreach (var dirPath in Directory.GetDirectories(srcPath, "*", SearchOption.AllDirectories)) Directory.CreateDirectory(dirPath.Replace(srcPath, destPath));
		String_t* L_14 = V_2;
		String_t* L_15 = ___srcPath0;
		String_t* L_16 = ___destPath1;
		NullCheck(L_14);
		String_t* L_17;
		L_17 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_14, L_15, L_16, /*hidden argument*/NULL);
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_18;
		L_18 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_17, /*hidden argument*/NULL);
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_004b:
	{
		// foreach (var dirPath in Directory.GetDirectories(srcPath, "*", SearchOption.AllDirectories)) Directory.CreateDirectory(dirPath.Replace(srcPath, destPath));
		int32_t L_20 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = V_0;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		// foreach (var newPath in Directory.GetFiles(srcPath, "*.*", SearchOption.AllDirectories)) File.Copy(newPath, newPath.Replace(srcPath, destPath), true);
		String_t* L_22 = ___srcPath0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23;
		L_23 = Directory_GetFiles_mC4A2C9164B682F1152396A36996712E255D98BCC(L_22, _stringLiteral855DC2CE49DCC1C549D22D5DB0CF5A8D5ABF0987, 1, /*hidden argument*/NULL);
		V_3 = L_23;
		V_4 = 0;
		goto IL_0082;
	}

IL_0064:
	{
		// foreach (var newPath in Directory.GetFiles(srcPath, "*.*", SearchOption.AllDirectories)) File.Copy(newPath, newPath.Replace(srcPath, destPath), true);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = V_3;
		int32_t L_25 = V_4;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		String_t* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_5 = L_27;
		// foreach (var newPath in Directory.GetFiles(srcPath, "*.*", SearchOption.AllDirectories)) File.Copy(newPath, newPath.Replace(srcPath, destPath), true);
		String_t* L_28 = V_5;
		String_t* L_29 = V_5;
		String_t* L_30 = ___srcPath0;
		String_t* L_31 = ___destPath1;
		NullCheck(L_29);
		String_t* L_32;
		L_32 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_29, L_30, L_31, /*hidden argument*/NULL);
		File_Copy_m1CB9B28EA63AA6D9E36B50AABABE81CA8C22C794(L_28, L_32, (bool)1, /*hidden argument*/NULL);
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_0082:
	{
		// foreach (var newPath in Directory.GetFiles(srcPath, "*.*", SearchOption.AllDirectories)) File.Copy(newPath, newPath.Replace(srcPath, destPath), true);
		int32_t L_34 = V_4;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = V_3;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_0064;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SA.Foundation.Utility.SA_FilesUtil::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_FilesUtil_CreateDirectory_mCD52B873B67B7F30EF9BD9E4EEB1E92B07A33D6C (String_t* ___path0, const RuntimeMethod* method)
{
	{
		// path = FixRelativePath(path);
		String_t* L_0 = ___path0;
		String_t* L_1;
		L_1 = SA_FilesUtil_FixRelativePath_m2A36C77C6DAC9CA3EC3F59C02878A1D5821096DB(L_0, (bool)1, /*hidden argument*/NULL);
		___path0 = L_1;
		// Directory.CreateDirectory(SA_PathUtil.ConvertRelativeToAbsolutePath(path));
		String_t* L_2 = ___path0;
		String_t* L_3;
		L_3 = SA_PathUtil_ConvertRelativeToAbsolutePath_mBACF72992DCF7D770500264B7F632F8A42F01736(L_2, /*hidden argument*/NULL);
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_4;
		L_4 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SA.Foundation.Utility.SA_FilesUtil::DeleteDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_FilesUtil_DeleteDirectory_m439BE0B58BB6768B88515882E7CAD1CB4140CA5E (String_t* ___folderPath0, const RuntimeMethod* method)
{
	{
		// folderPath = SA_PathUtil.ConvertRelativeToAbsolutePath(folderPath);
		String_t* L_0 = ___folderPath0;
		String_t* L_1;
		L_1 = SA_PathUtil_ConvertRelativeToAbsolutePath_mBACF72992DCF7D770500264B7F632F8A42F01736(L_0, /*hidden argument*/NULL);
		___folderPath0 = L_1;
		// Directory.Delete(folderPath, true);
		String_t* L_2 = ___folderPath0;
		Directory_Delete_m06FEE269B5B5425033C931B3F4742933F50D7ACE(L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String[] SA.Foundation.Utility.SA_FilesUtil::GetDirectories(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* SA_FilesUtil_GetDirectories_mBCA3362D6B9D731E68CC35DB4A3F67431813D642 (String_t* ___folderPath0, const RuntimeMethod* method)
{
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	{
		// folderPath = SA_PathUtil.ConvertRelativeToAbsolutePath(folderPath);
		String_t* L_0 = ___folderPath0;
		String_t* L_1;
		L_1 = SA_PathUtil_ConvertRelativeToAbsolutePath_mBACF72992DCF7D770500264B7F632F8A42F01736(L_0, /*hidden argument*/NULL);
		___folderPath0 = L_1;
		// return Directory.GetDirectories(folderPath);
		String_t* L_2 = ___folderPath0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = Directory_GetDirectories_mACD36932126E03B5983AE0AE438B516B1CDDD7B7(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_0;
		return L_4;
	}
}
// System.String SA.Foundation.Utility.SA_FilesUtil::FixRelativePath(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_FilesUtil_FixRelativePath_m2A36C77C6DAC9CA3EC3F59C02878A1D5821096DB (String_t* ___path0, bool ___createFolders1, const RuntimeMethod* method)
{
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		// path = SA_PathUtil.FixRelativePath(path);
		String_t* L_0 = ___path0;
		String_t* L_1;
		L_1 = SA_PathUtil_FixRelativePath_mEE8FEA3A5B646D3D7B1066CA788BA6D8BCEBAA0F(L_0, /*hidden argument*/NULL);
		___path0 = L_1;
		// if (createFolders) CreatePathFolders(path);
		bool L_2 = ___createFolders1;
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		// if (createFolders) CreatePathFolders(path);
		String_t* L_4 = ___path0;
		SA_FilesUtil_CreatePathFolders_m05006FF2C81A2CFB1DDF04433F6DB44FE1DEC34E(L_4, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// return path;
		String_t* L_5 = ___path0;
		V_1 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.Void SA.Foundation.Utility.SA_FilesUtil::CreatePathFolders(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_FilesUtil_CreatePathFolders_m05006FF2C81A2CFB1DDF04433F6DB44FE1DEC34E (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var dir in SA_PathUtil.GetDirectoriesOutOfPath(path))
		String_t* L_0 = ___path0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1;
		L_1 = SA_PathUtil_GetDirectoriesOutOfPath_m6B31A18D51B87437C4F130BF4BC7DEB34E8A7054(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_2;
		L_2 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_1, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0035;
		}

IL_0010:
		{
			// foreach (var dir in SA_PathUtil.GetDirectoriesOutOfPath(path))
			String_t* L_3;
			L_3 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_0), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
			V_1 = L_3;
			// if (!SA_PathUtil.IsDirectoryExists(dir))
			String_t* L_4 = V_1;
			bool L_5;
			L_5 = SA_PathUtil_IsDirectoryExists_mF86028518A63F771B0A704F81112AD32CFA7A228(L_4, /*hidden argument*/NULL);
			V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
			bool L_6 = V_2;
			if (!L_6)
			{
				goto IL_0035;
			}
		}

IL_0025:
		{
			// var dirAbsolutePath = SA_PathUtil.ConvertRelativeToAbsolutePath(dir);
			String_t* L_7 = V_1;
			String_t* L_8;
			L_8 = SA_PathUtil_ConvertRelativeToAbsolutePath_mBACF72992DCF7D770500264B7F632F8A42F01736(L_7, /*hidden argument*/NULL);
			V_3 = L_8;
			// Directory.CreateDirectory(dirAbsolutePath);
			String_t* L_9 = V_3;
			DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_10;
			L_10 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_9, /*hidden argument*/NULL);
		}

IL_0035:
		{
			// foreach (var dir in SA_PathUtil.GetDirectoriesOutOfPath(path))
			bool L_11;
			L_11 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0010;
			}
		}

IL_003e:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_0), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
	}

IL_004f:
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
// System.String SA.Foundation.Localization.SA_ISOLanguage::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_ISOLanguage_get_Code_m7E5EAB871F644767429FA515D3A081C035751C9E (SA_ISOLanguage_tFD4C1E2DC09F0DBA4D75D25DC4C6EF03295A032C * __this, const RuntimeMethod* method)
{
	{
		// public string Code => m_code;
		String_t* L_0 = __this->get_m_code_0();
		return L_0;
	}
}
// System.String SA.Foundation.Localization.SA_ISOLanguage::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_ISOLanguage_get_Name_mB72F10C350F65A35453D03BA4234E13BA2FA24A9 (SA_ISOLanguage_tFD4C1E2DC09F0DBA4D75D25DC4C6EF03295A032C * __this, const RuntimeMethod* method)
{
	{
		// public string Name => m_name;
		String_t* L_0 = __this->get_m_name_1();
		return L_0;
	}
}
// System.String SA.Foundation.Localization.SA_ISOLanguage::get_NativeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_ISOLanguage_get_NativeName_mE9B64C57B73F83742335114195773F4CC439DB1F (SA_ISOLanguage_tFD4C1E2DC09F0DBA4D75D25DC4C6EF03295A032C * __this, const RuntimeMethod* method)
{
	{
		// public string NativeName => m_nativeName;
		String_t* L_0 = __this->get_m_nativeName_2();
		return L_0;
	}
}
// System.Void SA.Foundation.Localization.SA_ISOLanguage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_ISOLanguage__ctor_m2EED7F02E362F7C783BD397F4485B5D70C925FD6 (SA_ISOLanguage_tFD4C1E2DC09F0DBA4D75D25DC4C6EF03295A032C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string m_code = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_code_0(L_0);
		// string m_name = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_name_1(L_1);
		// string m_nativeName = string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_nativeName_2(L_2);
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
// System.Collections.Generic.List`1<SA.Foundation.Localization.SA_ISOLanguage> SA.Foundation.Localization.SA_ISOLanguagesList::get_Languages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0E869E1E4D59E7247073977786D71763115C251C * SA_ISOLanguagesList_get_Languages_m0CFAC3E5BA0319BB06BD79503CF2473078C03C51 (SA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09 * __this, const RuntimeMethod* method)
{
	{
		// public List<SA_ISOLanguage> Languages => m_lanuages;
		List_1_t0E869E1E4D59E7247073977786D71763115C251C * L_0 = __this->get_m_lanuages_0();
		return L_0;
	}
}
// System.Collections.Generic.List`1<System.String> SA.Foundation.Localization.SA_ISOLanguagesList::get_Names()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * SA_ISOLanguagesList_get_Names_mC41E06B940A6515C9AC56709627CA949FAAE5874 (SA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD4EC0DBDC6B68468AAAFB78A4DE40BCDAF7CE380_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF64717490940F6733B0905424AB40A31F26F8096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4D4C4A59E734FCD07ECAD8D56C4980045BAF92A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m557DF2E2E29EA9EFBCEB0E839E4F447DF985DD51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t16F4A3C49349146DA18AAF19E3A54D5A7FB89AFF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	SA_ISOLanguage_tFD4C1E2DC09F0DBA4D75D25DC4C6EF03295A032C * V_2 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (m_names == null)
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_m_names_1();
		V_0 = (bool)((((RuntimeObject*)(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005e;
		}
	}
	{
		// m_names = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_2, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_m_names_1(L_2);
		// foreach (var lang in m_lanuages) m_names.Add(lang.Name);
		List_1_t0E869E1E4D59E7247073977786D71763115C251C * L_3 = __this->get_m_lanuages_0();
		NullCheck(L_3);
		Enumerator_t16F4A3C49349146DA18AAF19E3A54D5A7FB89AFF  L_4;
		L_4 = List_1_GetEnumerator_m557DF2E2E29EA9EFBCEB0E839E4F447DF985DD51(L_3, /*hidden argument*/List_1_GetEnumerator_m557DF2E2E29EA9EFBCEB0E839E4F447DF985DD51_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0027:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0043;
		}

IL_0029:
		{
			// foreach (var lang in m_lanuages) m_names.Add(lang.Name);
			SA_ISOLanguage_tFD4C1E2DC09F0DBA4D75D25DC4C6EF03295A032C * L_5;
			L_5 = Enumerator_get_Current_m4D4C4A59E734FCD07ECAD8D56C4980045BAF92A5_inline((Enumerator_t16F4A3C49349146DA18AAF19E3A54D5A7FB89AFF *)(&V_1), /*hidden argument*/Enumerator_get_Current_m4D4C4A59E734FCD07ECAD8D56C4980045BAF92A5_RuntimeMethod_var);
			V_2 = L_5;
			// foreach (var lang in m_lanuages) m_names.Add(lang.Name);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6 = __this->get_m_names_1();
			SA_ISOLanguage_tFD4C1E2DC09F0DBA4D75D25DC4C6EF03295A032C * L_7 = V_2;
			NullCheck(L_7);
			String_t* L_8;
			L_8 = SA_ISOLanguage_get_Name_mB72F10C350F65A35453D03BA4234E13BA2FA24A9_inline(L_7, /*hidden argument*/NULL);
			NullCheck(L_6);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_6, L_8, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		}

IL_0043:
		{
			// foreach (var lang in m_lanuages) m_names.Add(lang.Name);
			bool L_9;
			L_9 = Enumerator_MoveNext_mF64717490940F6733B0905424AB40A31F26F8096((Enumerator_t16F4A3C49349146DA18AAF19E3A54D5A7FB89AFF *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mF64717490940F6733B0905424AB40A31F26F8096_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0029;
			}
		}

IL_004c:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD4EC0DBDC6B68468AAAFB78A4DE40BCDAF7CE380((Enumerator_t16F4A3C49349146DA18AAF19E3A54D5A7FB89AFF *)(&V_1), /*hidden argument*/Enumerator_Dispose_mD4EC0DBDC6B68468AAAFB78A4DE40BCDAF7CE380_RuntimeMethod_var);
		IL2CPP_END_FINALLY(78)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
	}

IL_005d:
	{
	}

IL_005e:
	{
		// return m_names;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10 = __this->get_m_names_1();
		V_3 = L_10;
		goto IL_0067;
	}

IL_0067:
	{
		// }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_11 = V_3;
		return L_11;
	}
}
// System.Void SA.Foundation.Localization.SA_ISOLanguagesList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_ISOLanguagesList__ctor_m3B46D4782E5EF02A7C495470A64B17C8B6A5C142 (SA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m32077E95ECC5A06AA379D63701FB0B563E499349_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0E869E1E4D59E7247073977786D71763115C251C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<SA_ISOLanguage> m_lanuages = new List<SA_ISOLanguage>();
		List_1_t0E869E1E4D59E7247073977786D71763115C251C * L_0 = (List_1_t0E869E1E4D59E7247073977786D71763115C251C *)il2cpp_codegen_object_new(List_1_t0E869E1E4D59E7247073977786D71763115C251C_il2cpp_TypeInfo_var);
		List_1__ctor_m32077E95ECC5A06AA379D63701FB0B563E499349(L_0, /*hidden argument*/List_1__ctor_m32077E95ECC5A06AA379D63701FB0B563E499349_RuntimeMethod_var);
		__this->set_m_lanuages_0(L_0);
		// List<string> m_names = null;
		__this->set_m_names_1((List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)NULL);
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
// UnityEngine.Texture2D SA.Foundation.Utility.SA_IconManager::GetIconFromHtmlColorString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * SA_IconManager_GetIconFromHtmlColorString_mF1F57BF35FEA4C8AF93001145D7B888B999B2E64 (String_t* ___htmlString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	{
		// return GetIconFromHtmlColorString(htmlString, Color.black);
		String_t* L_0 = ___htmlString0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2;
		L_2 = SA_IconManager_GetIconFromHtmlColorString_m967AC7A8E4AF17A100E452AC5FCC1041D23AF4E7(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Texture2D SA.Foundation.Utility.SA_IconManager::GetIconFromHtmlColorString(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * SA_IconManager_GetIconFromHtmlColorString_m967AC7A8E4AF17A100E452AC5FCC1041D23AF4E7 (String_t* ___htmlString0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___fallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_1 = NULL;
	{
		// var color = fallback;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___fallback1;
		V_0 = L_0;
		// ColorUtility.TryParseHtmlString(htmlString, out color);
		String_t* L_1 = ___htmlString0;
		bool L_2;
		L_2 = ColorUtility_TryParseHtmlString_m69BEFAF655920930399471B79CF668FC3BAD4069(L_1, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_0), /*hidden argument*/NULL);
		// return GetIcon(color);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4;
		L_4 = SA_IconManager_GetIcon_m1FAF708FB536115C708EAB90F2DEF8FBD7EDA0A8(L_3, 1, 1, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.Texture2D SA.Foundation.Utility.SA_IconManager::GetIcon(UnityEngine.Color,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * SA_IconManager_GetIcon_m1FAF708FB536115C708EAB90F2DEF8FBD7EDA0A8 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m86DF07C10A09ADA398C99416D217742A0183E677_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB723BCAD2AA6A847709F46A7D22872EFD9B170E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mDADC44E994E162D25CFE5F9BEC44B0912A73C1E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_2 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	{
		// var colorId = color.r * 100000f + color.g * 10000f + color.b * 1000f + color.a * 100f + width * 10f + height;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___color0;
		float L_1 = L_0.get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___color0;
		float L_3 = L_2.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ___color0;
		float L_5 = L_4.get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = ___color0;
		float L_7 = L_6.get_a_3();
		int32_t L_8 = ___width1;
		int32_t L_9 = ___height2;
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)(100000.0f))), (float)((float)il2cpp_codegen_multiply((float)L_3, (float)(10000.0f))))), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)(1000.0f))))), (float)((float)il2cpp_codegen_multiply((float)L_7, (float)(100.0f))))), (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_8)), (float)(10.0f))))), (float)((float)((float)L_9))));
		// if (s_colorIcons.ContainsKey(colorId) && s_colorIcons[colorId] != null)
		IL2CPP_RUNTIME_CLASS_INIT(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var);
		Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9 * L_10 = ((SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_StaticFields*)il2cpp_codegen_static_fields_for(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var))->get_s_colorIcons_1();
		float L_11 = V_0;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_ContainsKey_m86DF07C10A09ADA398C99416D217742A0183E677(L_10, L_11, /*hidden argument*/Dictionary_2_ContainsKey_m86DF07C10A09ADA398C99416D217742A0183E677_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var);
		Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9 * L_13 = ((SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_StaticFields*)il2cpp_codegen_static_fields_for(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var))->get_s_colorIcons_1();
		float L_14 = V_0;
		NullCheck(L_13);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15;
		L_15 = Dictionary_2_get_Item_mB723BCAD2AA6A847709F46A7D22872EFD9B170E2(L_13, L_14, /*hidden argument*/Dictionary_2_get_Item_mB723BCAD2AA6A847709F46A7D22872EFD9B170E2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_16));
		goto IL_0062;
	}

IL_0061:
	{
		G_B3_0 = 0;
	}

IL_0062:
	{
		V_1 = (bool)G_B3_0;
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_0075;
		}
	}
	{
		// return s_colorIcons[colorId];
		IL2CPP_RUNTIME_CLASS_INIT(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var);
		Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9 * L_18 = ((SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_StaticFields*)il2cpp_codegen_static_fields_for(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var))->get_s_colorIcons_1();
		float L_19 = V_0;
		NullCheck(L_18);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_20;
		L_20 = Dictionary_2_get_Item_mB723BCAD2AA6A847709F46A7D22872EFD9B170E2(L_18, L_19, /*hidden argument*/Dictionary_2_get_Item_mB723BCAD2AA6A847709F46A7D22872EFD9B170E2_RuntimeMethod_var);
		V_2 = L_20;
		goto IL_00d5;
	}

IL_0075:
	{
		// var tex = new Texture2D(width, height);
		int32_t L_21 = ___width1;
		int32_t L_22 = ___height2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_23 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_23, L_21, L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		// for (var w = 0; w < width; w++)
		V_4 = 0;
		goto IL_00ab;
	}

IL_0083:
	{
		// for (var h = 0; h < height; h++)
		V_5 = 0;
		goto IL_009a;
	}

IL_0088:
	{
		// tex.SetPixel(w, h, color);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_24 = V_3;
		int32_t L_25 = V_4;
		int32_t L_26 = V_5;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27 = ___color0;
		NullCheck(L_24);
		Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92(L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
		// for (var h = 0; h < height; h++)
		int32_t L_28 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_009a:
	{
		// for (var h = 0; h < height; h++)
		int32_t L_29 = V_5;
		int32_t L_30 = ___height2;
		V_6 = (bool)((((int32_t)L_29) < ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_6;
		if (L_31)
		{
			goto IL_0088;
		}
	}
	{
		// for (var w = 0; w < width; w++)
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00ab:
	{
		// for (var w = 0; w < width; w++)
		int32_t L_33 = V_4;
		int32_t L_34 = ___width1;
		V_7 = (bool)((((int32_t)L_33) < ((int32_t)L_34))? 1 : 0);
		bool L_35 = V_7;
		if (L_35)
		{
			goto IL_0083;
		}
	}
	{
		// tex.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_36 = V_3;
		NullCheck(L_36);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_36, /*hidden argument*/NULL);
		// s_colorIcons[colorId] = tex;
		IL2CPP_RUNTIME_CLASS_INIT(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var);
		Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9 * L_37 = ((SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_StaticFields*)il2cpp_codegen_static_fields_for(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var))->get_s_colorIcons_1();
		float L_38 = V_0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_39 = V_3;
		NullCheck(L_37);
		Dictionary_2_set_Item_mDADC44E994E162D25CFE5F9BEC44B0912A73C1E6(L_37, L_38, L_39, /*hidden argument*/Dictionary_2_set_Item_mDADC44E994E162D25CFE5F9BEC44B0912A73C1E6_RuntimeMethod_var);
		// return GetIcon(color, width, height);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_40 = ___color0;
		int32_t L_41 = ___width1;
		int32_t L_42 = ___height2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_43;
		L_43 = SA_IconManager_GetIcon_m1FAF708FB536115C708EAB90F2DEF8FBD7EDA0A8(L_40, L_41, L_42, /*hidden argument*/NULL);
		V_2 = L_43;
		goto IL_00d5;
	}

IL_00d5:
	{
		// }
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_44 = V_2;
		return L_44;
	}
}
// UnityEngine.Texture2D SA.Foundation.Utility.SA_IconManager::GetIconAtPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * SA_IconManager_GetIconAtPath_m0E4F408EE7D61D7A193749606315650C4A5DC22B (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4064F1527445A08FFC585A12F7E58A8CECF96915_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3A7959BCA4CA296B9C2ADA34B9C68A24D7E32C98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF188136D0EFEA6D70747371218898D2BDDC06AF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_1 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_2 = NULL;
	bool V_3 = false;
	{
		// if (s_icons.ContainsKey(path))
		IL2CPP_RUNTIME_CLASS_INIT(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var);
		Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C * L_0 = ((SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_StaticFields*)il2cpp_codegen_static_fields_for(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var))->get_s_icons_0();
		String_t* L_1 = ___path0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m3A7959BCA4CA296B9C2ADA34B9C68A24D7E32C98(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3A7959BCA4CA296B9C2ADA34B9C68A24D7E32C98_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// return s_icons[path];
		IL2CPP_RUNTIME_CLASS_INIT(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var);
		Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C * L_4 = ((SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_StaticFields*)il2cpp_codegen_static_fields_for(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var))->get_s_icons_0();
		String_t* L_5 = ___path0;
		NullCheck(L_4);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6;
		L_6 = Dictionary_2_get_Item_mF188136D0EFEA6D70747371218898D2BDDC06AF9(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_mF188136D0EFEA6D70747371218898D2BDDC06AF9_RuntimeMethod_var);
		V_1 = L_6;
		goto IL_0055;
	}

IL_001f:
	{
		// var tex = Resources.Load(path) as Texture2D;
		String_t* L_7 = ___path0;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_8;
		L_8 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(L_7, /*hidden argument*/NULL);
		V_2 = ((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)IsInstSealed((RuntimeObject*)L_8, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var));
		// if (tex == null) tex = new Texture2D(1, 1);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_003f;
		}
	}
	{
		// if (tex == null) tex = new Texture2D(1, 1);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_12, 1, 1, /*hidden argument*/NULL);
		V_2 = L_12;
	}

IL_003f:
	{
		// s_icons.Add(path, tex);
		IL2CPP_RUNTIME_CLASS_INIT(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var);
		Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C * L_13 = ((SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_StaticFields*)il2cpp_codegen_static_fields_for(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var))->get_s_icons_0();
		String_t* L_14 = ___path0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = V_2;
		NullCheck(L_13);
		Dictionary_2_Add_m4064F1527445A08FFC585A12F7E58A8CECF96915(L_13, L_14, L_15, /*hidden argument*/Dictionary_2_Add_m4064F1527445A08FFC585A12F7E58A8CECF96915_RuntimeMethod_var);
		// return GetIconAtPath(path);
		String_t* L_16 = ___path0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_17;
		L_17 = SA_IconManager_GetIconAtPath_m0E4F408EE7D61D7A193749606315650C4A5DC22B(L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = V_1;
		return L_18;
	}
}
// UnityEngine.Texture2D SA.Foundation.Utility.SA_IconManager::Rotate(UnityEngine.Texture2D,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * SA_IconManager_Rotate_mB2D7B99D89BAEDB648B824A263A89F68C6B7897E (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, float ___angle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	bool V_15 = false;
	bool V_16 = false;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_17 = NULL;
	{
		// var rotImage = new Texture2D(tex.width, tex.height);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___tex0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ___tex0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_4, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// var w = tex.width;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = ___tex0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		V_7 = L_6;
		// var h = tex.height;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = ___tex0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_7);
		V_8 = L_8;
		// var x0 = rot_x(angle, -w / 2.0f, -h / 2.0f) + w / 2.0f;
		float L_9 = ___angle1;
		int32_t L_10 = V_7;
		int32_t L_11 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var);
		float L_12;
		L_12 = SA_IconManager_rot_x_m403D1C685CC4879BF573C86CA76B5BB1A43FC239(L_9, ((float)((float)((float)((float)((-L_10))))/(float)(2.0f))), ((float)((float)((float)((float)((-L_11))))/(float)(2.0f))), /*hidden argument*/NULL);
		int32_t L_13 = V_7;
		V_9 = ((float)il2cpp_codegen_add((float)L_12, (float)((float)((float)((float)((float)L_13))/(float)(2.0f)))));
		// var y0 = rot_y(angle, -w / 2.0f, -h / 2.0f) + h / 2.0f;
		float L_14 = ___angle1;
		int32_t L_15 = V_7;
		int32_t L_16 = V_8;
		float L_17;
		L_17 = SA_IconManager_rot_y_m7BB508DC9B165ED1604F9696AC4D5A4A74809DF9(L_14, ((float)((float)((float)((float)((-L_15))))/(float)(2.0f))), ((float)((float)((float)((float)((-L_16))))/(float)(2.0f))), /*hidden argument*/NULL);
		int32_t L_18 = V_8;
		V_10 = ((float)il2cpp_codegen_add((float)L_17, (float)((float)((float)((float)((float)L_18))/(float)(2.0f)))));
		// var dx_x = rot_x(angle, 1.0f, 0.0f);
		float L_19 = ___angle1;
		float L_20;
		L_20 = SA_IconManager_rot_x_m403D1C685CC4879BF573C86CA76B5BB1A43FC239(L_19, (1.0f), (0.0f), /*hidden argument*/NULL);
		V_11 = L_20;
		// var dx_y = rot_y(angle, 1.0f, 0.0f);
		float L_21 = ___angle1;
		float L_22;
		L_22 = SA_IconManager_rot_y_m7BB508DC9B165ED1604F9696AC4D5A4A74809DF9(L_21, (1.0f), (0.0f), /*hidden argument*/NULL);
		V_12 = L_22;
		// var dy_x = rot_x(angle, 0.0f, 1.0f);
		float L_23 = ___angle1;
		float L_24;
		L_24 = SA_IconManager_rot_x_m403D1C685CC4879BF573C86CA76B5BB1A43FC239(L_23, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_13 = L_24;
		// var dy_y = rot_y(angle, 0.0f, 1.0f);
		float L_25 = ___angle1;
		float L_26;
		L_26 = SA_IconManager_rot_y_m7BB508DC9B165ED1604F9696AC4D5A4A74809DF9(L_25, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_14 = L_26;
		// x1 = x0;
		float L_27 = V_9;
		V_3 = L_27;
		// y1 = y0;
		float L_28 = V_10;
		V_4 = L_28;
		// for (x = 0; x < tex.width; x++)
		V_1 = 0;
		goto IL_0123;
	}

IL_00c2:
	{
		// x2 = x1;
		float L_29 = V_3;
		V_5 = L_29;
		// y2 = y1;
		float L_30 = V_4;
		V_6 = L_30;
		// for (y = 0; y < tex.height; y++)
		V_2 = 0;
		goto IL_0103;
	}

IL_00ce:
	{
		// x2 += dx_x; //rot_x(angle, x1, y1);
		float L_31 = V_5;
		float L_32 = V_11;
		V_5 = ((float)il2cpp_codegen_add((float)L_31, (float)L_32));
		// y2 += dx_y; //rot_y(angle, x1, y1);
		float L_33 = V_6;
		float L_34 = V_12;
		V_6 = ((float)il2cpp_codegen_add((float)L_33, (float)L_34));
		// rotImage.SetPixel((int)Mathf.Floor(x), (int)Mathf.Floor(y), getPixel(tex, x2, y2));
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_35 = V_0;
		int32_t L_36 = V_1;
		float L_37;
		L_37 = floorf(((float)((float)L_36)));
		int32_t L_38 = V_2;
		float L_39;
		L_39 = floorf(((float)((float)L_38)));
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_40 = ___tex0;
		float L_41 = V_5;
		float L_42 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43;
		L_43 = SA_IconManager_getPixel_m38C522FEC8C501DB7A8334CDCA440DD3049A5D0F(L_40, L_41, L_42, /*hidden argument*/NULL);
		NullCheck(L_35);
		Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92(L_35, ((int32_t)((int32_t)L_37)), ((int32_t)((int32_t)L_39)), L_43, /*hidden argument*/NULL);
		// for (y = 0; y < tex.height; y++)
		int32_t L_44 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_0103:
	{
		// for (y = 0; y < tex.height; y++)
		int32_t L_45 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_46 = ___tex0;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_46);
		V_15 = (bool)((((int32_t)L_45) < ((int32_t)L_47))? 1 : 0);
		bool L_48 = V_15;
		if (L_48)
		{
			goto IL_00ce;
		}
	}
	{
		// x1 += dy_x;
		float L_49 = V_3;
		float L_50 = V_13;
		V_3 = ((float)il2cpp_codegen_add((float)L_49, (float)L_50));
		// y1 += dy_y;
		float L_51 = V_4;
		float L_52 = V_14;
		V_4 = ((float)il2cpp_codegen_add((float)L_51, (float)L_52));
		// for (x = 0; x < tex.width; x++)
		int32_t L_53 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_0123:
	{
		// for (x = 0; x < tex.width; x++)
		int32_t L_54 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_55 = ___tex0;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_55);
		V_16 = (bool)((((int32_t)L_54) < ((int32_t)L_56))? 1 : 0);
		bool L_57 = V_16;
		if (L_57)
		{
			goto IL_00c2;
		}
	}
	{
		// rotImage.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_58 = V_0;
		NullCheck(L_58);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_58, /*hidden argument*/NULL);
		// return rotImage;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_59 = V_0;
		V_17 = L_59;
		goto IL_013e;
	}

IL_013e:
	{
		// }
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_60 = V_17;
		return L_60;
	}
}
// UnityEngine.Texture2D SA.Foundation.Utility.SA_IconManager::ResizeTexture(UnityEngine.Texture2D,SA.Foundation.Utility.SA_IconManager/ImageFilterMode,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * SA_IconManager_ResizeTexture_mB673F8DD31F47168C4D1C27DD66D9F62838978B4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___pSource0, int32_t ___pFilterMode1, float ___pScale2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_1 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_5 = NULL;
	int32_t V_6 = 0;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_7 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_9;
	memset((&V_9), 0, sizeof(V_9));
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	bool V_21 = false;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_26;
	memset((&V_26), 0, sizeof(V_26));
	float V_27 = 0.0f;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_33 = NULL;
	{
		// var aSourceColor = pSource.GetPixels(0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___pSource0;
		NullCheck(L_0);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_1;
		L_1 = Texture2D_GetPixels_mDBE68956E50997CB02CB0419318E0D19493288A6(L_0, 0, /*hidden argument*/NULL);
		V_1 = L_1;
		// var vSourceSize = new Vector2(pSource.width, pSource.height);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ___pSource0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = ___pSource0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), ((float)((float)L_3)), ((float)((float)L_5)), /*hidden argument*/NULL);
		// float xWidth = Mathf.RoundToInt((float)pSource.width * pScale);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = ___pSource0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_6);
		float L_8 = ___pScale2;
		int32_t L_9;
		L_9 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_7)), (float)L_8)), /*hidden argument*/NULL);
		V_3 = ((float)((float)L_9));
		// float xHeight = Mathf.RoundToInt((float)pSource.height * pScale);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_10 = ___pSource0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_10);
		float L_12 = ___pScale2;
		int32_t L_13;
		L_13 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_11)), (float)L_12)), /*hidden argument*/NULL);
		V_4 = ((float)((float)L_13));
		// var oNewTex = new Texture2D((int)xWidth, (int)xHeight, TextureFormat.RGBA32, false);
		float L_14 = V_3;
		float L_15 = V_4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_16, ((int32_t)((int32_t)L_14)), ((int32_t)((int32_t)L_15)), 4, (bool)0, /*hidden argument*/NULL);
		V_5 = L_16;
		// var xLength = (int)xWidth * (int)xHeight;
		float L_17 = V_3;
		float L_18 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_17)), (int32_t)((int32_t)((int32_t)L_18))));
		// var aColor = new Color[xLength];
		int32_t L_19 = V_6;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_20 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_7 = L_20;
		// var vPixelSize = new Vector2(vSourceSize.x / xWidth, vSourceSize.y / xHeight);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = V_2;
		float L_22 = L_21.get_x_0();
		float L_23 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24 = V_2;
		float L_25 = L_24.get_y_1();
		float L_26 = V_4;
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_8), ((float)((float)L_22/(float)L_23)), ((float)((float)L_25/(float)L_26)), /*hidden argument*/NULL);
		// var vCenter = new Vector2();
		il2cpp_codegen_initobj((&V_9), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		// for (i = 0; i < xLength; i++)
		V_0 = 0;
		goto IL_0352;
	}

IL_0085:
	{
		// var xX = (float)i % xWidth;
		int32_t L_27 = V_0;
		float L_28 = V_3;
		V_10 = (fmodf(((float)((float)L_27)), L_28));
		// var xY = Mathf.Floor((float)i / xWidth);
		int32_t L_29 = V_0;
		float L_30 = V_3;
		float L_31;
		L_31 = floorf(((float)((float)((float)((float)L_29))/(float)L_30)));
		V_11 = L_31;
		// vCenter.x = xX / xWidth * vSourceSize.x;
		float L_32 = V_10;
		float L_33 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34 = V_2;
		float L_35 = L_34.get_x_0();
		(&V_9)->set_x_0(((float)il2cpp_codegen_multiply((float)((float)((float)L_32/(float)L_33)), (float)L_35)));
		// vCenter.y = xY / xHeight * vSourceSize.y;
		float L_36 = V_11;
		float L_37 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38 = V_2;
		float L_39 = L_38.get_y_1();
		(&V_9)->set_y_1(((float)il2cpp_codegen_multiply((float)((float)((float)L_36/(float)L_37)), (float)L_39)));
		// if (pFilterMode == ImageFilterMode.Nearest)
		int32_t L_40 = ___pFilterMode1;
		V_12 = (bool)((((int32_t)L_40) == ((int32_t)0))? 1 : 0);
		bool L_41 = V_12;
		if (!L_41)
		{
			goto IL_011c;
		}
	}
	{
		// vCenter.x = Mathf.Round(vCenter.x);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_42 = V_9;
		float L_43 = L_42.get_x_0();
		float L_44;
		L_44 = bankers_roundf(L_43);
		(&V_9)->set_x_0(L_44);
		// vCenter.y = Mathf.Round(vCenter.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45 = V_9;
		float L_46 = L_45.get_y_1();
		float L_47;
		L_47 = bankers_roundf(L_46);
		(&V_9)->set_y_1(L_47);
		// var xSourceIndex = (int)(vCenter.y * vSourceSize.x + vCenter.x);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_48 = V_9;
		float L_49 = L_48.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_50 = V_2;
		float L_51 = L_50.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_52 = V_9;
		float L_53 = L_52.get_x_0();
		V_13 = ((int32_t)((int32_t)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_49, (float)L_51)), (float)L_53))));
		// aColor[i] = aSourceColor[xSourceIndex];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_54 = V_7;
		int32_t L_55 = V_0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_56 = V_1;
		int32_t L_57 = V_13;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_55), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_59);
		goto IL_034d;
	}

IL_011c:
	{
		// else if (pFilterMode == ImageFilterMode.Biliner)
		int32_t L_60 = ___pFilterMode1;
		V_14 = (bool)((((int32_t)L_60) == ((int32_t)1))? 1 : 0);
		bool L_61 = V_14;
		if (!L_61)
		{
			goto IL_0225;
		}
	}
	{
		// var xRatioX = vCenter.x - Mathf.Floor(vCenter.x);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_62 = V_9;
		float L_63 = L_62.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_64 = V_9;
		float L_65 = L_64.get_x_0();
		float L_66;
		L_66 = floorf(L_65);
		V_15 = ((float)il2cpp_codegen_subtract((float)L_63, (float)L_66));
		// var xRatioY = vCenter.y - Mathf.Floor(vCenter.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_67 = V_9;
		float L_68 = L_67.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_69 = V_9;
		float L_70 = L_69.get_y_1();
		float L_71;
		L_71 = floorf(L_70);
		V_16 = ((float)il2cpp_codegen_subtract((float)L_68, (float)L_71));
		// var xIndexTL = (int)(Mathf.Floor(vCenter.y) * vSourceSize.x + Mathf.Floor(vCenter.x));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_72 = V_9;
		float L_73 = L_72.get_y_1();
		float L_74;
		L_74 = floorf(L_73);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_75 = V_2;
		float L_76 = L_75.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_77 = V_9;
		float L_78 = L_77.get_x_0();
		float L_79;
		L_79 = floorf(L_78);
		V_17 = ((int32_t)((int32_t)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_74, (float)L_76)), (float)L_79))));
		// var xIndexTR = (int)(Mathf.Floor(vCenter.y) * vSourceSize.x + Mathf.Ceil(vCenter.x));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_80 = V_9;
		float L_81 = L_80.get_y_1();
		float L_82;
		L_82 = floorf(L_81);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_83 = V_2;
		float L_84 = L_83.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_85 = V_9;
		float L_86 = L_85.get_x_0();
		float L_87;
		L_87 = ceilf(L_86);
		V_18 = ((int32_t)((int32_t)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_82, (float)L_84)), (float)L_87))));
		// var xIndexBL = (int)(Mathf.Ceil(vCenter.y) * vSourceSize.x + Mathf.Floor(vCenter.x));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_88 = V_9;
		float L_89 = L_88.get_y_1();
		float L_90;
		L_90 = ceilf(L_89);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_91 = V_2;
		float L_92 = L_91.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_93 = V_9;
		float L_94 = L_93.get_x_0();
		float L_95;
		L_95 = floorf(L_94);
		V_19 = ((int32_t)((int32_t)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_90, (float)L_92)), (float)L_95))));
		// var xIndexBR = (int)(Mathf.Ceil(vCenter.y) * vSourceSize.x + Mathf.Ceil(vCenter.x));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_96 = V_9;
		float L_97 = L_96.get_y_1();
		float L_98;
		L_98 = ceilf(L_97);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_99 = V_2;
		float L_100 = L_99.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_101 = V_9;
		float L_102 = L_101.get_x_0();
		float L_103;
		L_103 = ceilf(L_102);
		V_20 = ((int32_t)((int32_t)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_98, (float)L_100)), (float)L_103))));
		// aColor[i] = Color.Lerp(
		//     Color.Lerp(aSourceColor[xIndexTL], aSourceColor[xIndexTR], xRatioX),
		//     Color.Lerp(aSourceColor[xIndexBL], aSourceColor[xIndexBR], xRatioX),
		//     xRatioY
		// );
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_104 = V_7;
		int32_t L_105 = V_0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_106 = V_1;
		int32_t L_107 = V_17;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_110 = V_1;
		int32_t L_111 = V_18;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		float L_114 = V_15;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_115;
		L_115 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_109, L_113, L_114, /*hidden argument*/NULL);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_116 = V_1;
		int32_t L_117 = V_19;
		NullCheck(L_116);
		int32_t L_118 = L_117;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_120 = V_1;
		int32_t L_121 = V_20;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		float L_124 = V_15;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_125;
		L_125 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_119, L_123, L_124, /*hidden argument*/NULL);
		float L_126 = V_16;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_127;
		L_127 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_115, L_125, L_126, /*hidden argument*/NULL);
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(L_105), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_127);
		goto IL_034d;
	}

IL_0225:
	{
		// else if (pFilterMode == ImageFilterMode.Average)
		int32_t L_128 = ___pFilterMode1;
		V_21 = (bool)((((int32_t)L_128) == ((int32_t)2))? 1 : 0);
		bool L_129 = V_21;
		if (!L_129)
		{
			goto IL_034d;
		}
	}
	{
		// var xXFrom = (int)Mathf.Max(Mathf.Floor(vCenter.x - vPixelSize.x * 0.5f), 0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_130 = V_9;
		float L_131 = L_130.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_132 = V_8;
		float L_133 = L_132.get_x_0();
		float L_134;
		L_134 = floorf(((float)il2cpp_codegen_subtract((float)L_131, (float)((float)il2cpp_codegen_multiply((float)L_133, (float)(0.5f))))));
		float L_135;
		L_135 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_134, (0.0f), /*hidden argument*/NULL);
		V_22 = ((int32_t)((int32_t)L_135));
		// var xXTo = (int)Mathf.Min(Mathf.Ceil(vCenter.x + vPixelSize.x * 0.5f), vSourceSize.x);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_136 = V_9;
		float L_137 = L_136.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_138 = V_8;
		float L_139 = L_138.get_x_0();
		float L_140;
		L_140 = ceilf(((float)il2cpp_codegen_add((float)L_137, (float)((float)il2cpp_codegen_multiply((float)L_139, (float)(0.5f))))));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_141 = V_2;
		float L_142 = L_141.get_x_0();
		float L_143;
		L_143 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_140, L_142, /*hidden argument*/NULL);
		V_23 = ((int32_t)((int32_t)L_143));
		// var xYFrom = (int)Mathf.Max(Mathf.Floor(vCenter.y - vPixelSize.y * 0.5f), 0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_144 = V_9;
		float L_145 = L_144.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_146 = V_8;
		float L_147 = L_146.get_y_1();
		float L_148;
		L_148 = floorf(((float)il2cpp_codegen_subtract((float)L_145, (float)((float)il2cpp_codegen_multiply((float)L_147, (float)(0.5f))))));
		float L_149;
		L_149 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_148, (0.0f), /*hidden argument*/NULL);
		V_24 = ((int32_t)((int32_t)L_149));
		// var xYTo = (int)Mathf.Min(Mathf.Ceil(vCenter.y + vPixelSize.y * 0.5f), vSourceSize.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_150 = V_9;
		float L_151 = L_150.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_152 = V_8;
		float L_153 = L_152.get_y_1();
		float L_154;
		L_154 = ceilf(((float)il2cpp_codegen_add((float)L_151, (float)((float)il2cpp_codegen_multiply((float)L_153, (float)(0.5f))))));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_155 = V_2;
		float L_156 = L_155.get_y_1();
		float L_157;
		L_157 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_154, L_156, /*hidden argument*/NULL);
		V_25 = ((int32_t)((int32_t)L_157));
		// var oColorTemp = new Color();
		il2cpp_codegen_initobj((&V_26), sizeof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 ));
		// float xGridCount = 0;
		V_27 = (0.0f);
		// for (var iy = xYFrom; iy < xYTo; iy++)
		int32_t L_158 = V_24;
		V_28 = L_158;
		goto IL_032e;
	}

IL_02e6:
	{
		// for (var ix = xXFrom; ix < xXTo; ix++)
		int32_t L_159 = V_22;
		V_29 = L_159;
		goto IL_031c;
	}

IL_02ec:
	{
		// oColorTemp += aSourceColor[(int)((float)iy * vSourceSize.x + ix)];
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_160 = V_26;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_161 = V_1;
		int32_t L_162 = V_28;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_163 = V_2;
		float L_164 = L_163.get_x_0();
		int32_t L_165 = V_29;
		NullCheck(L_161);
		int32_t L_166 = ((int32_t)((int32_t)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_162)), (float)L_164)), (float)((float)((float)L_165))))));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_167 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_166));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_168;
		L_168 = Color_op_Addition_m791A7C77B17D4A49301A7D275E8E4D8B117415A8(L_160, L_167, /*hidden argument*/NULL);
		V_26 = L_168;
		// xGridCount++;
		float L_169 = V_27;
		V_27 = ((float)il2cpp_codegen_add((float)L_169, (float)(1.0f)));
		// for (var ix = xXFrom; ix < xXTo; ix++)
		int32_t L_170 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add((int32_t)L_170, (int32_t)1));
	}

IL_031c:
	{
		// for (var ix = xXFrom; ix < xXTo; ix++)
		int32_t L_171 = V_29;
		int32_t L_172 = V_23;
		V_30 = (bool)((((int32_t)L_171) < ((int32_t)L_172))? 1 : 0);
		bool L_173 = V_30;
		if (L_173)
		{
			goto IL_02ec;
		}
	}
	{
		// for (var iy = xYFrom; iy < xYTo; iy++)
		int32_t L_174 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_174, (int32_t)1));
	}

IL_032e:
	{
		// for (var iy = xYFrom; iy < xYTo; iy++)
		int32_t L_175 = V_28;
		int32_t L_176 = V_25;
		V_31 = (bool)((((int32_t)L_175) < ((int32_t)L_176))? 1 : 0);
		bool L_177 = V_31;
		if (L_177)
		{
			goto IL_02e6;
		}
	}
	{
		// aColor[i] = oColorTemp / (float)xGridCount;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_178 = V_7;
		int32_t L_179 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_180 = V_26;
		float L_181 = V_27;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_182;
		L_182 = Color_op_Division_m3C9BBA6FEC1CBB84B0536599BA974AA963FAE094(L_180, ((float)((float)L_181)), /*hidden argument*/NULL);
		NullCheck(L_178);
		(L_178)->SetAt(static_cast<il2cpp_array_size_t>(L_179), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_182);
	}

IL_034d:
	{
		// for (i = 0; i < xLength; i++)
		int32_t L_183 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_183, (int32_t)1));
	}

IL_0352:
	{
		// for (i = 0; i < xLength; i++)
		int32_t L_184 = V_0;
		int32_t L_185 = V_6;
		V_32 = (bool)((((int32_t)L_184) < ((int32_t)L_185))? 1 : 0);
		bool L_186 = V_32;
		if (L_186)
		{
			goto IL_0085;
		}
	}
	{
		// oNewTex.SetPixels(aColor);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_187 = V_5;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_188 = V_7;
		NullCheck(L_187);
		Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F(L_187, L_188, /*hidden argument*/NULL);
		// oNewTex.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_189 = V_5;
		NullCheck(L_189);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_189, /*hidden argument*/NULL);
		// return oNewTex;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_190 = V_5;
		V_33 = L_190;
		goto IL_0378;
	}

IL_0378:
	{
		// }
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_191 = V_33;
		return L_191;
	}
}
// UnityEngine.Texture2D SA.Foundation.Utility.SA_IconManager::Resize(UnityEngine.Texture2D,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * SA_IconManager_Resize_m879A75E2FFB269665E2BE325A4488353DB6BF323 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___source0, int32_t ___newWidth1, int32_t ___newHeight2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_1 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_2 = NULL;
	{
		// source.filterMode = FilterMode.Point;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___source0;
		NullCheck(L_0);
		Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0(L_0, 0, /*hidden argument*/NULL);
		// var rt = RenderTexture.GetTemporary(newWidth, newHeight);
		int32_t L_1 = ___newWidth1;
		int32_t L_2 = ___newHeight2;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3;
		L_3 = RenderTexture_GetTemporary_mF71FD5106250F2CD0309BBBA2CD74D3D6D94EFB8(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// rt.filterMode = FilterMode.Point;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4 = V_0;
		NullCheck(L_4);
		Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0(L_4, 0, /*hidden argument*/NULL);
		// RenderTexture.active = rt;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5 = V_0;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_5, /*hidden argument*/NULL);
		// Graphics.Blit(source, rt);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_6, L_7, /*hidden argument*/NULL);
		// var nTex = new Texture2D(newWidth, newHeight);
		int32_t L_8 = ___newWidth1;
		int32_t L_9 = ___newHeight2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_10 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_10, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// nTex.ReadPixels(new Rect(0, 0, newWidth, newWidth), 0, 0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11 = V_1;
		int32_t L_12 = ___newWidth1;
		int32_t L_13 = ___newWidth1;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_14), (0.0f), (0.0f), ((float)((float)L_12)), ((float)((float)L_13)), /*hidden argument*/NULL);
		NullCheck(L_11);
		Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987(L_11, L_14, 0, 0, /*hidden argument*/NULL);
		// nTex.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = V_1;
		NullCheck(L_15);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_15, /*hidden argument*/NULL);
		// RenderTexture.active = null;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)NULL, /*hidden argument*/NULL);
		// return nTex;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16 = V_1;
		V_2 = L_16;
		goto IL_005e;
	}

IL_005e:
	{
		// }
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_17 = V_2;
		return L_17;
	}
}
// UnityEngine.Color SA.Foundation.Utility.SA_IconManager::GetColorFromHtml(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SA_IconManager_GetColorFromHtml_m5C9ACA2DCF8EB53DD72495A42269699A83E3841C (String_t* ___htmlString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return GetColorFromHtml(htmlString, Color.black);
		String_t* L_0 = ___htmlString0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = SA_IconManager_GetColorFromHtml_mDD4BBEDAA8F70A2A7053B44354AE5765C6CA02C0(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Color SA.Foundation.Utility.SA_IconManager::GetColorFromHtml(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SA_IconManager_GetColorFromHtml_mDD4BBEDAA8F70A2A7053B44354AE5765C6CA02C0 (String_t* ___htmlString0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___fallback1, const RuntimeMethod* method)
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var color = fallback;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___fallback1;
		V_0 = L_0;
		// ColorUtility.TryParseHtmlString(htmlString, out color);
		String_t* L_1 = ___htmlString0;
		bool L_2;
		L_2 = ColorUtility_TryParseHtmlString_m69BEFAF655920930399471B79CF668FC3BAD4069(L_1, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_0), /*hidden argument*/NULL);
		// return color;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = V_0;
		V_1 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Color SA.Foundation.Utility.SA_IconManager::getPixel(UnityEngine.Texture2D,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SA_IconManager_getPixel_m38C522FEC8C501DB7A8334CDCA440DD3049A5D0F (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, float ___x1, float ___y2, const RuntimeMethod* method)
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B5_0 = 0;
	{
		// var x1 = (int)Mathf.Floor(x);
		float L_0 = ___x1;
		float L_1;
		L_1 = floorf(L_0);
		V_1 = ((int32_t)((int32_t)L_1));
		// var y1 = (int)Mathf.Floor(y);
		float L_2 = ___y2;
		float L_3;
		L_3 = floorf(L_2);
		V_2 = ((int32_t)((int32_t)L_3));
		// if (x1 > tex.width || x1 < 0 ||
		//     y1 > tex.height || y1 < 0)
		int32_t L_4 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = ___tex0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		if ((((int32_t)L_4) > ((int32_t)L_6)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_8 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = ___tex0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_9);
		if ((((int32_t)L_8) > ((int32_t)L_10)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_11 = V_2;
		G_B5_0 = ((((int32_t)L_11) < ((int32_t)0))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B5_0 = 1;
	}

IL_002e:
	{
		V_3 = (bool)G_B5_0;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_003a;
		}
	}
	{
		// pix = Color.clear;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = Color_get_clear_m9F8076CEFE7B8119A9903212DCBF2BFED114E97F(/*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0043;
	}

IL_003a:
	{
		// pix = tex.GetPixel(x1, y1);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14 = ___tex0;
		int32_t L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_14);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17;
		L_17 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_14, L_15, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
	}

IL_0043:
	{
		// return pix;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18 = V_0;
		V_4 = L_18;
		goto IL_0048;
	}

IL_0048:
	{
		// }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19 = V_4;
		return L_19;
	}
}
// System.Single SA.Foundation.Utility.SA_IconManager::rot_x(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SA_IconManager_rot_x_m403D1C685CC4879BF573C86CA76B5BB1A43FC239 (float ___angle0, float ___x1, float ___y2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// var cos = Mathf.Cos(angle / 180.0f * Mathf.PI);
		float L_0 = ___angle0;
		float L_1;
		L_1 = cosf(((float)il2cpp_codegen_multiply((float)((float)((float)L_0/(float)(180.0f))), (float)(3.14159274f))));
		V_0 = L_1;
		// var sin = Mathf.Sin(angle / 180.0f * Mathf.PI);
		float L_2 = ___angle0;
		float L_3;
		L_3 = sinf(((float)il2cpp_codegen_multiply((float)((float)((float)L_2/(float)(180.0f))), (float)(3.14159274f))));
		V_1 = L_3;
		// return x * cos + y * -sin;
		float L_4 = ___x1;
		float L_5 = V_0;
		float L_6 = ___y2;
		float L_7 = V_1;
		V_2 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), (float)((float)il2cpp_codegen_multiply((float)L_6, (float)((-L_7))))));
		goto IL_0032;
	}

IL_0032:
	{
		// }
		float L_8 = V_2;
		return L_8;
	}
}
// System.Single SA.Foundation.Utility.SA_IconManager::rot_y(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SA_IconManager_rot_y_m7BB508DC9B165ED1604F9696AC4D5A4A74809DF9 (float ___angle0, float ___x1, float ___y2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// var cos = Mathf.Cos(angle / 180.0f * Mathf.PI);
		float L_0 = ___angle0;
		float L_1;
		L_1 = cosf(((float)il2cpp_codegen_multiply((float)((float)((float)L_0/(float)(180.0f))), (float)(3.14159274f))));
		V_0 = L_1;
		// var sin = Mathf.Sin(angle / 180.0f * Mathf.PI);
		float L_2 = ___angle0;
		float L_3;
		L_3 = sinf(((float)il2cpp_codegen_multiply((float)((float)((float)L_2/(float)(180.0f))), (float)(3.14159274f))));
		V_1 = L_3;
		// return x * sin + y * cos;
		float L_4 = ___x1;
		float L_5 = V_1;
		float L_6 = ___y2;
		float L_7 = V_0;
		V_2 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7))));
		goto IL_0031;
	}

IL_0031:
	{
		// }
		float L_8 = V_2;
		return L_8;
	}
}
// System.Void SA.Foundation.Utility.SA_IconManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_IconManager__cctor_mB82644BFAADFB4F09A2917BC7720386FF866DB06 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCC7857F1BA7928609857BFC242195172DA507392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mF92F157D73581D456D3EB4212D3D86753E755C9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Dictionary<string, Texture2D> s_icons = new Dictionary<string, Texture2D>();
		Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C * L_0 = (Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C *)il2cpp_codegen_object_new(Dictionary_2_tEB18A32D0B180DF252D5178E45E11813020BE41C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCC7857F1BA7928609857BFC242195172DA507392(L_0, /*hidden argument*/Dictionary_2__ctor_mCC7857F1BA7928609857BFC242195172DA507392_RuntimeMethod_var);
		((SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_StaticFields*)il2cpp_codegen_static_fields_for(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var))->set_s_icons_0(L_0);
		// static readonly Dictionary<float, Texture2D> s_colorIcons = new Dictionary<float, Texture2D>();
		Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9 * L_1 = (Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9 *)il2cpp_codegen_object_new(Dictionary_2_tFD9A41EAB0125C44EA3C46D041D2437E835A57F9_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mF92F157D73581D456D3EB4212D3D86753E755C9A(L_1, /*hidden argument*/Dictionary_2__ctor_mF92F157D73581D456D3EB4212D3D86753E755C9A_RuntimeMethod_var);
		((SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_StaticFields*)il2cpp_codegen_static_fields_for(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var))->set_s_colorIcons_1(L_1);
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
// SA.Foundation.Localization.SA_ISOLanguagesList SA.Foundation.Localization.SA_LanguagesUtil::get_ISOLanguagesList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09 * SA_LanguagesUtil_get_ISOLanguagesList_m00D450300F5CBCA5B6B6D545167E770F705E6A78 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisSA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09_mB4C656ED0465469F661C82331499492DA1B71C1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_LanguagesUtil_t34DD0C84CE4066D74D1438FF04546520E837C382_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54D98A8023A2C580D7234DF0840448A853B4A271);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * V_1 = NULL;
	SA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09 * V_2 = NULL;
	{
		// if (m_isoLanguages == null)
		IL2CPP_RUNTIME_CLASS_INIT(SA_LanguagesUtil_t34DD0C84CE4066D74D1438FF04546520E837C382_il2cpp_TypeInfo_var);
		SA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09 * L_0 = ((SA_LanguagesUtil_t34DD0C84CE4066D74D1438FF04546520E837C382_StaticFields*)il2cpp_codegen_static_fields_for(SA_LanguagesUtil_t34DD0C84CE4066D74D1438FF04546520E837C382_il2cpp_TypeInfo_var))->get_m_isoLanguages_0();
		V_0 = (bool)((((RuntimeObject*)(SA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// var langs = Resources.Load("iso_languages") as TextAsset;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2;
		L_2 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral54D98A8023A2C580D7234DF0840448A853B4A271, /*hidden argument*/NULL);
		V_1 = ((TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 *)IsInstClass((RuntimeObject*)L_2, TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var));
		// m_isoLanguages = JsonUtility.FromJson<SA_ISOLanguagesList>(langs.text);
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_3 = V_1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218(L_3, /*hidden argument*/NULL);
		SA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09 * L_5;
		L_5 = JsonUtility_FromJson_TisSA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09_mB4C656ED0465469F661C82331499492DA1B71C1F(L_4, /*hidden argument*/JsonUtility_FromJson_TisSA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09_mB4C656ED0465469F661C82331499492DA1B71C1F_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SA_LanguagesUtil_t34DD0C84CE4066D74D1438FF04546520E837C382_il2cpp_TypeInfo_var);
		((SA_LanguagesUtil_t34DD0C84CE4066D74D1438FF04546520E837C382_StaticFields*)il2cpp_codegen_static_fields_for(SA_LanguagesUtil_t34DD0C84CE4066D74D1438FF04546520E837C382_il2cpp_TypeInfo_var))->set_m_isoLanguages_0(L_5);
	}

IL_002f:
	{
		// return m_isoLanguages;
		IL2CPP_RUNTIME_CLASS_INIT(SA_LanguagesUtil_t34DD0C84CE4066D74D1438FF04546520E837C382_il2cpp_TypeInfo_var);
		SA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09 * L_6 = ((SA_LanguagesUtil_t34DD0C84CE4066D74D1438FF04546520E837C382_StaticFields*)il2cpp_codegen_static_fields_for(SA_LanguagesUtil_t34DD0C84CE4066D74D1438FF04546520E837C382_il2cpp_TypeInfo_var))->get_m_isoLanguages_0();
		V_2 = L_6;
		goto IL_0037;
	}

IL_0037:
	{
		// }
		SA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09 * L_7 = V_2;
		return L_7;
	}
}
// System.Void SA.Foundation.Localization.SA_LanguagesUtil::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_LanguagesUtil__cctor_mA95E241C02CC6DC7F7CA10D6C2CB7C33AAAAD6B5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_LanguagesUtil_t34DD0C84CE4066D74D1438FF04546520E837C382_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static SA_ISOLanguagesList m_isoLanguages = null;
		((SA_LanguagesUtil_t34DD0C84CE4066D74D1438FF04546520E837C382_StaticFields*)il2cpp_codegen_static_fields_for(SA_LanguagesUtil_t34DD0C84CE4066D74D1438FF04546520E837C382_il2cpp_TypeInfo_var))->set_m_isoLanguages_0((SA_ISOLanguagesList_t4A8BE8F95A19ABEE4CDBB383006EB727D2372B09 *)NULL);
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
// System.String SA.Foundation.Utility.SA_PathUtil::FixRelativePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_PathUtil_FixRelativePath_mEE8FEA3A5B646D3D7B1066CA788BA6D8BCEBAA0F (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		// if (path.StartsWith(FOLDER_SEPARATOR, System.StringComparison.CurrentCulture)) path = path.Remove(0, 1);
		String_t* L_0 = ___path0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mEA750A0572C706249CDD826681741B7DD733381E(L_0, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// if (path.StartsWith(FOLDER_SEPARATOR, System.StringComparison.CurrentCulture)) path = path.Remove(0, 1);
		String_t* L_3 = ___path0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Remove_mA7DE3D6FE3344FD65108B33BD1DE8020D22ADAC0(L_3, 0, 1, /*hidden argument*/NULL);
		___path0 = L_4;
	}

IL_001b:
	{
		// if (path.EndsWith(FOLDER_SEPARATOR, System.StringComparison.CurrentCulture)) path = path.Substring(0, path.Length - 1);
		String_t* L_5 = ___path0;
		NullCheck(L_5);
		bool L_6;
		L_6 = String_EndsWith_mB6E4F554EB12AF5BB822050E738AB867AF5C9864(L_5, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, 0, /*hidden argument*/NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		// if (path.EndsWith(FOLDER_SEPARATOR, System.StringComparison.CurrentCulture)) path = path.Substring(0, path.Length - 1);
		String_t* L_8 = ___path0;
		String_t* L_9 = ___path0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_11;
		L_11 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_8, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)), /*hidden argument*/NULL);
		___path0 = L_11;
	}

IL_003c:
	{
		// return path;
		String_t* L_12 = ___path0;
		V_2 = L_12;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		String_t* L_13 = V_2;
		return L_13;
	}
}
// System.String SA.Foundation.Utility.SA_PathUtil::ConvertRelativeToAbsolutePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_PathUtil_ConvertRelativeToAbsolutePath_mBACF72992DCF7D770500264B7F632F8A42F01736 (String_t* ___relativePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		// relativePath = FixRelativePath(relativePath);
		String_t* L_0 = ___relativePath0;
		String_t* L_1;
		L_1 = SA_PathUtil_FixRelativePath_mEE8FEA3A5B646D3D7B1066CA788BA6D8BCEBAA0F(L_0, /*hidden argument*/NULL);
		___relativePath0 = L_1;
		// if (Application.isEditor)
		bool L_2;
		L_2 = Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921(/*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// dataPath = Application.dataPath;
		String_t* L_4;
		L_4 = Application_get_dataPath_m026509C15A1E58FC6461EE7EC336EC18C9C2271E(/*hidden argument*/NULL);
		V_0 = L_4;
		// dataPath = dataPath.Substring(0, dataPath.Length - 7);
		String_t* L_5 = V_0;
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_8;
		L_8 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_5, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0034;
	}

IL_002c:
	{
		// dataPath = Application.persistentDataPath;
		String_t* L_9;
		L_9 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_0034:
	{
		// return dataPath + FOLDER_SEPARATOR + relativePath;
		String_t* L_10 = V_0;
		String_t* L_11 = ___relativePath0;
		String_t* L_12;
		L_12 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_10, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		goto IL_0043;
	}

IL_0043:
	{
		// }
		String_t* L_13 = V_2;
		return L_13;
	}
}
// System.Boolean SA.Foundation.Utility.SA_PathUtil::IsDirectoryExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SA_PathUtil_IsDirectoryExists_mF86028518A63F771B0A704F81112AD32CFA7A228 (String_t* ___path0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return Directory.Exists(ConvertRelativeToAbsolutePath(path));
		String_t* L_0 = ___path0;
		String_t* L_1;
		L_1 = SA_PathUtil_ConvertRelativeToAbsolutePath_mBACF72992DCF7D770500264B7F632F8A42F01736(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean SA.Foundation.Utility.SA_PathUtil::IsFileExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SA_PathUtil_IsFileExists_m6DA5111A81D5056FD841E88BD8E7C93CB00607CF (String_t* ___path0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return File.Exists(ConvertRelativeToAbsolutePath(path));
		String_t* L_0 = ___path0;
		String_t* L_1;
		L_1 = SA_PathUtil_ConvertRelativeToAbsolutePath_mBACF72992DCF7D770500264B7F632F8A42F01736(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.String SA.Foundation.Utility.SA_PathUtil::GetExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_PathUtil_GetExtension_mED31EFD6B77927418073B6583E5EEC8EB7935578 (String_t* ___filePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return Path.GetExtension(ConvertRelativeToAbsolutePath(filePath));
		String_t* L_0 = ___filePath0;
		String_t* L_1;
		L_1 = SA_PathUtil_ConvertRelativeToAbsolutePath_mBACF72992DCF7D770500264B7F632F8A42F01736(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String SA.Foundation.Utility.SA_PathUtil::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_PathUtil_GetFileName_mD1BA82994AE80C69303B81C2FBEF9BB3A4A3A14A (String_t* ___filePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return Path.GetFileName(ConvertRelativeToAbsolutePath(filePath));
		String_t* L_0 = ___filePath0;
		String_t* L_1;
		L_1 = SA_PathUtil_ConvertRelativeToAbsolutePath_mBACF72992DCF7D770500264B7F632F8A42F01736(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String SA.Foundation.Utility.SA_PathUtil::GetFileNameWithoutExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_PathUtil_GetFileNameWithoutExtension_m5A2A3CDE3042F6C8605BE7A40D5CD86C02BD480B (String_t* ___filePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return Path.GetFileNameWithoutExtension(ConvertRelativeToAbsolutePath(filePath));
		String_t* L_0 = ___filePath0;
		String_t* L_1;
		L_1 = SA_PathUtil_ConvertRelativeToAbsolutePath_mBACF72992DCF7D770500264B7F632F8A42F01736(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_GetFileNameWithoutExtension_m52BA8E84FC8949E8A9F60D024742189907B997D2(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String SA.Foundation.Utility.SA_PathUtil::GetDirectoryPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_PathUtil_GetDirectoryPath_m2372219812152AABE1CC4657DA5FC8316E163E2C (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return Path.GetDirectoryName(path).Replace("\\", "/");
		String_t* L_0 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_1, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Collections.Generic.List`1<System.String> SA.Foundation.Utility.SA_PathUtil::GetDirectoriesOutOfPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * SA_PathUtil_GetDirectoriesOutOfPath_m6B31A18D51B87437C4F130BF4BC7DEB34E8A7054 (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	bool V_5 = false;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_6 = NULL;
	{
		// var directories = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_0 = L_0;
		// var parentFolder = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_1 = L_1;
		// var separatorIndex = path.IndexOf(FOLDER_SEPARATOR, System.StringComparison.CurrentCulture);
		String_t* L_2 = ___path0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_IndexOf_mD99F5378A4220A0DA0D5097007417E777722ABDA(L_2, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, 0, /*hidden argument*/NULL);
		V_2 = L_3;
		goto IL_006b;
	}

IL_001c:
	{
		// var offset = separatorIndex + 1;
		int32_t L_4 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		// var testedFolder = string.Concat(parentFolder, path.Substring(0, offset));
		String_t* L_5 = V_1;
		String_t* L_6 = ___path0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_6, 0, L_7, /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_5, L_8, /*hidden argument*/NULL);
		V_4 = L_9;
		// directories.Add(testedFolder.Substring(0, testedFolder.Length - 1));
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10 = V_0;
		String_t* L_11 = V_4;
		String_t* L_12 = V_4;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_14;
		L_14 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_11, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_10);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_10, L_14, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// path = path.Substring(offset, path.Length - offset);
		String_t* L_15 = ___path0;
		int32_t L_16 = V_3;
		String_t* L_17 = ___path0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_17, /*hidden argument*/NULL);
		int32_t L_19 = V_3;
		NullCheck(L_15);
		String_t* L_20;
		L_20 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_15, L_16, ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19)), /*hidden argument*/NULL);
		___path0 = L_20;
		// separatorIndex = path.IndexOf(FOLDER_SEPARATOR, System.StringComparison.CurrentCulture);
		String_t* L_21 = ___path0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = String_IndexOf_mD99F5378A4220A0DA0D5097007417E777722ABDA(L_21, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, 0, /*hidden argument*/NULL);
		V_2 = L_22;
		// parentFolder = testedFolder;
		String_t* L_23 = V_4;
		V_1 = L_23;
	}

IL_006b:
	{
		// while (separatorIndex != -1)
		int32_t L_24 = V_2;
		V_5 = (bool)((((int32_t)((((int32_t)L_24) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_5;
		if (L_25)
		{
			goto IL_001c;
		}
	}
	{
		// return directories;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_26 = V_0;
		V_6 = L_26;
		goto IL_007d;
	}

IL_007d:
	{
		// }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_27 = V_6;
		return L_27;
	}
}
// System.String SA.Foundation.Utility.SA_PathUtil::GetPathDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_PathUtil_GetPathDirectoryName_mECE3A966D0DCD646937B03BBA142FD9F3CA4B40A (String_t* ___folderPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// folderPath = FixRelativePath(folderPath);
		String_t* L_0 = ___folderPath0;
		String_t* L_1;
		L_1 = SA_PathUtil_FixRelativePath_mEE8FEA3A5B646D3D7B1066CA788BA6D8BCEBAA0F(L_0, /*hidden argument*/NULL);
		___folderPath0 = L_1;
		// var separatorIndex = folderPath.LastIndexOf(FOLDER_SEPARATOR, System.StringComparison.CurrentCulture);
		String_t* L_2 = ___folderPath0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_LastIndexOf_m010D788B0081D6BB2EF5E0D2D60486A0668872C5(L_2, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (separatorIndex == -1)
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		// return folderPath;
		String_t* L_6 = ___folderPath0;
		V_2 = L_6;
		goto IL_003a;
	}

IL_0023:
	{
		// var offset = separatorIndex + 1;
		int32_t L_7 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		// return folderPath.Substring(offset, folderPath.Length - offset);
		String_t* L_8 = ___folderPath0;
		int32_t L_9 = V_3;
		String_t* L_10 = ___folderPath0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_3;
		NullCheck(L_8);
		String_t* L_13;
		L_13 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_8, L_9, ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12)), /*hidden argument*/NULL);
		V_2 = L_13;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		String_t* L_14 = V_2;
		return L_14;
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
// System.Void SA.Foundation.Utility.SA_Plugins::OnDisabledAPIUseAttempt(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_Plugins_OnDisabledAPIUseAttempt_m86031B394E80311D3A4027D1C431F42A9DFDF4F2 (String_t* ___pluginName0, String_t* ___APIname1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// var message = pluginName +
		//     ": You are trying to use the " +
		//     APIname +
		//     " API without having it enabled inside plugin settings. This may cause unpredicted behaviour.";
		String_t* L_0 = ___pluginName0;
		String_t* L_1 = ___APIname1;
		String_t* L_2;
		L_2 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB368C03A9B5EB3078694496B091F893CAF388FC8)), L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBA167B74ED98F3D69E3750C97949477655AB59C)), /*hidden argument*/NULL);
		V_0 = L_2;
		// Debug.LogError(message);
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_3, /*hidden argument*/NULL);
		// throw new System.InvalidOperationException(message);
		String_t* L_4 = V_0;
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_5 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SA_Plugins_OnDisabledAPIUseAttempt_m86031B394E80311D3A4027D1C431F42A9DFDF4F2_RuntimeMethod_var)));
	}
}
// System.Void SA.Foundation.Utility.SA_Plugins::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_Plugins__ctor_m4E5388838E373B427051A50A5B9B905D7E243803 (SA_Plugins_tA649CE7ECD352BBFE5003C52E1A3B674D1DCB9EB * __this, const RuntimeMethod* method)
{
	{
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
// System.Void SA.Foundation.Templates.SA_Result::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_Result__ctor_mA8937F170D05BBA24B5C59BB5BBB4DBCFA69D629 (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected SA_Error m_error = null;
		__this->set_m_error_0((SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 *)NULL);
		// protected string m_requestId = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_requestId_1(L_0);
		// public SA_Result() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public SA_Result() { }
		return;
	}
}
// System.Void SA.Foundation.Templates.SA_Result::.ctor(SA.Foundation.Templates.SA_iResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_Result__ctor_m48ABC3B9F10115B2E9912FFE8235ECCC059D343C (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_iResult_t0E54468822EC838F6867EF5235CCB1A2C1AD7352_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected SA_Error m_error = null;
		__this->set_m_error_0((SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 *)NULL);
		// protected string m_requestId = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_requestId_1(L_0);
		// public SA_Result(SA_iResult result)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_error = result.Error;
		RuntimeObject* L_1 = ___result0;
		NullCheck(L_1);
		SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * L_2;
		L_2 = InterfaceFuncInvoker0< SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * >::Invoke(2 /* SA.Foundation.Templates.SA_Error SA.Foundation.Templates.SA_iResult::get_Error() */, SA_iResult_t0E54468822EC838F6867EF5235CCB1A2C1AD7352_il2cpp_TypeInfo_var, L_1);
		__this->set_m_error_0(L_2);
		// }
		return;
	}
}
// System.Void SA.Foundation.Templates.SA_Result::.ctor(SA.Foundation.Templates.SA_Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_Result__ctor_m4B0C6547881AC2426679E50B73F2CFFA45D1D1D3 (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * __this, SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected SA_Error m_error = null;
		__this->set_m_error_0((SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 *)NULL);
		// protected string m_requestId = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_requestId_1(L_0);
		// public SA_Result(SA_Error error)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// SetError(error);
		SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * L_1 = ___error0;
		SA_Result_SetError_mA2B879E612935F5D5D8C775A489770CA5D06DDB9(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SA.Foundation.Templates.SA_Result::SetError(SA.Foundation.Templates.SA_Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_Result_SetError_mA2B879E612935F5D5D8C775A489770CA5D06DDB9 (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * __this, SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * ___error0, const RuntimeMethod* method)
{
	{
		// m_error = error;
		SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * L_0 = ___error0;
		__this->set_m_error_0(L_0);
		// }
		return;
	}
}
// SA.Foundation.Templates.SA_Error SA.Foundation.Templates.SA_Result::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * SA_Result_get_Error_m351134373999CB0552FC83E68DB2F905DA32F98B (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * __this, const RuntimeMethod* method)
{
	{
		// public SA_Error Error => m_error;
		SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * L_0 = __this->get_m_error_0();
		return L_0;
	}
}
// System.Boolean SA.Foundation.Templates.SA_Result::get_HasError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SA_Result_get_HasError_mCED6F67C0BBD2F9AEAB22C5E14ACD7D5165D5F5C (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// if (m_error == null || string.IsNullOrEmpty(m_error.Message) && Error.Code == default(int)) return false;
		SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * L_0 = __this->get_m_error_0();
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * L_1 = __this->get_m_error_0();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = SA_Error_get_Message_m519EA465FD7A239E17E95B6D8A049DC8D34550C1_inline(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * L_4;
		L_4 = SA_Result_get_Error_m351134373999CB0552FC83E68DB2F905DA32F98B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = SA_Error_get_Code_m8309D2C635C8E37CE5FEBA26E59769F578C47509_inline(L_4, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 0;
	}

IL_002c:
	{
		G_B6_0 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 1;
	}

IL_002f:
	{
		V_0 = (bool)G_B6_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// if (m_error == null || string.IsNullOrEmpty(m_error.Message) && Error.Code == default(int)) return false;
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_0037:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_003b:
	{
		// }
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Boolean SA.Foundation.Templates.SA_Result::get_IsSucceeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SA_Result_get_IsSucceeded_mCF559D14CD5C81FBC5C071C3F5F93A99188CAEFA (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * __this, const RuntimeMethod* method)
{
	{
		// public bool IsSucceeded => !HasError;
		bool L_0;
		L_0 = SA_Result_get_HasError_mCED6F67C0BBD2F9AEAB22C5E14ACD7D5165D5F5C(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean SA.Foundation.Templates.SA_Result::get_IsFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SA_Result_get_IsFailed_m7B01C96607BBC273A462BDC06B7A9FE32D489613 (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * __this, const RuntimeMethod* method)
{
	{
		// public bool IsFailed => HasError;
		bool L_0;
		L_0 = SA_Result_get_HasError_mCED6F67C0BBD2F9AEAB22C5E14ACD7D5165D5F5C(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String SA.Foundation.Templates.SA_Result::get_RequestId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_Result_get_RequestId_mA6405B0D6F581DC2BB71842405B34214688A8098 (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * __this, const RuntimeMethod* method)
{
	{
		// get => m_requestId;
		String_t* L_0 = __this->get_m_requestId_1();
		return L_0;
	}
}
// System.Void SA.Foundation.Templates.SA_Result::set_RequestId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_Result_set_RequestId_mDA755A0B7C32285C084E3625461F345A5CE24672 (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set => m_requestId = value;
		String_t* L_0 = ___value0;
		__this->set_m_requestId_1(L_0);
		return;
	}
}
// System.String SA.Foundation.Templates.SA_Result::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_Result_ToJson_mF54E67414B853546BA9940A9D8FA3BC5F57DD3A1 (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return JsonUtility.ToJson(this);
		String_t* L_0;
		L_0 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
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
// System.Void SA.Foundation.Utility.SA_ScreenUtil::TakeScreenshot(System.Action`1<UnityEngine.Texture2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_ScreenUtil_TakeScreenshot_m433EED240E5AE0B22572ACA6DCA57B3AC6737E58 (Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * ___callback0, const RuntimeMethod* method)
{
	{
		// CoroutineUtility.Start(TakeScreenshotCoroutine(0, callback));
		Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * L_0 = ___callback0;
		RuntimeObject* L_1;
		L_1 = SA_ScreenUtil_TakeScreenshotCoroutine_m0E3F7BBFBF5722D39BEC76102CE0D49565DCB813(0, L_0, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = CoroutineUtility_Start_m5A711CC2BAC66C837B292E17CD70B7FBF8B1BF65(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SA.Foundation.Utility.SA_ScreenUtil::TakeScreenshot(System.Int32,System.Action`1<UnityEngine.Texture2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_ScreenUtil_TakeScreenshot_m8FA18916E67D39F7B2AC2B5543998A7C1E6BE18A (int32_t ___maxSize0, Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * ___callback1, const RuntimeMethod* method)
{
	{
		// CoroutineUtility.Start(TakeScreenshotCoroutine(maxSize, callback));
		int32_t L_0 = ___maxSize0;
		Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * L_1 = ___callback1;
		RuntimeObject* L_2;
		L_2 = SA_ScreenUtil_TakeScreenshotCoroutine_m0E3F7BBFBF5722D39BEC76102CE0D49565DCB813(L_0, L_1, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = CoroutineUtility_Start_m5A711CC2BAC66C837B292E17CD70B7FBF8B1BF65(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SA.Foundation.Utility.SA_ScreenUtil::TakeScreenshot(UnityEngine.Camera,System.Action`1<UnityEngine.Texture2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_ScreenUtil_TakeScreenshot_m94D591A6DC3BC459428A3ECAF8BAC8D3E0605130 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCameraScreenshot_t82F81A9CDEF95F8563B4738E4F233715CE72BF66_m55E27F560B160530C644F9C1159582BD9E593549_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53173FD24FAC7FA30EE5B3EA1354A35041D312D1);
		s_Il2CppMethodInitialized = true;
	}
	CameraScreenshot_t82F81A9CDEF95F8563B4738E4F233715CE72BF66 * V_0 = NULL;
	{
		// var capturer = new GameObject("SA_Screenshot").AddComponent<CameraScreenshot>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_0, _stringLiteral53173FD24FAC7FA30EE5B3EA1354A35041D312D1, /*hidden argument*/NULL);
		NullCheck(L_0);
		CameraScreenshot_t82F81A9CDEF95F8563B4738E4F233715CE72BF66 * L_1;
		L_1 = GameObject_AddComponent_TisCameraScreenshot_t82F81A9CDEF95F8563B4738E4F233715CE72BF66_m55E27F560B160530C644F9C1159582BD9E593549(L_0, /*hidden argument*/GameObject_AddComponent_TisCameraScreenshot_t82F81A9CDEF95F8563B4738E4F233715CE72BF66_m55E27F560B160530C644F9C1159582BD9E593549_RuntimeMethod_var);
		V_0 = L_1;
		// capturer.m_camera = camera;
		CameraScreenshot_t82F81A9CDEF95F8563B4738E4F233715CE72BF66 * L_2 = V_0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = ___camera0;
		NullCheck(L_2);
		L_2->set_m_camera_4(L_3);
		// capturer.m_callback = callback;
		CameraScreenshot_t82F81A9CDEF95F8563B4738E4F233715CE72BF66 * L_4 = V_0;
		Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * L_5 = ___callback1;
		NullCheck(L_4);
		L_4->set_m_callback_5(L_5);
		// capturer.resWidth = Screen.width;
		CameraScreenshot_t82F81A9CDEF95F8563B4738E4F233715CE72BF66 * L_6 = V_0;
		int32_t L_7;
		L_7 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_resWidth_6(L_7);
		// capturer.resHeight = Screen.height;
		CameraScreenshot_t82F81A9CDEF95F8563B4738E4F233715CE72BF66 * L_8 = V_0;
		int32_t L_9;
		L_9 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->set_resHeight_7(L_9);
		// }
		return;
	}
}
// System.Collections.IEnumerator SA.Foundation.Utility.SA_ScreenUtil::TakeScreenshotCoroutine(System.Int32,System.Action`1<UnityEngine.Texture2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SA_ScreenUtil_TakeScreenshotCoroutine_m0E3F7BBFBF5722D39BEC76102CE0D49565DCB813 (int32_t ___maxSize0, Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E * L_0 = (U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E *)il2cpp_codegen_object_new(U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E_il2cpp_TypeInfo_var);
		U3CTakeScreenshotCoroutineU3Ed__3__ctor_mA392EDCC04E3FF8CD0EA4714DC83256AB042CF9E(L_0, 0, /*hidden argument*/NULL);
		U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E * L_1 = L_0;
		int32_t L_2 = ___maxSize0;
		NullCheck(L_1);
		L_1->set_maxSize_2(L_2);
		U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E * L_3 = L_1;
		Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * L_4 = ___callback1;
		NullCheck(L_3);
		L_3->set_callback_3(L_4);
		return L_3;
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
// SA.Foundation.Config.PluginVersionHandler SA.Foundation.Patterns.SA_ScriptableSettings::GetPluginVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * SA_ScriptableSettings_GetPluginVersion_m3CDD88CD163DEC9B8FD83027FFB4829151E2A62F (SA_ScriptableSettings_t713FB6ED1BCD9406BD9C6B0417FF99470A1FAA06 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * V_1 = NULL;
	{
		// if (s_pluginVersion == null) s_pluginVersion = new PluginVersionHandler(BasePath);
		PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * L_0 = __this->get_s_pluginVersion_6();
		V_0 = (bool)((((RuntimeObject*)(PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// if (s_pluginVersion == null) s_pluginVersion = new PluginVersionHandler(BasePath);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String SA.Foundation.Patterns.SA_ScriptableSettings::get_BasePath() */, __this);
		PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * L_3 = (PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 *)il2cpp_codegen_object_new(PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335_il2cpp_TypeInfo_var);
		PluginVersionHandler__ctor_m9EC9E7236AB3CAE2281016DACDCD22F08BBE8796(L_3, L_2, /*hidden argument*/NULL);
		__this->set_s_pluginVersion_6(L_3);
	}

IL_001f:
	{
		// return s_pluginVersion;
		PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * L_4 = __this->get_s_pluginVersion_6();
		V_1 = L_4;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * L_5 = V_1;
		return L_5;
	}
}
// System.String SA.Foundation.Patterns.SA_ScriptableSettings::GetFormattedVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_ScriptableSettings_GetFormattedVersion_m2731959F675169D86A5F0681468ADB25428F028F (SA_ScriptableSettings_t713FB6ED1BCD9406BD9C6B0417FF99470A1FAA06 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("{0}.{1}", k_ReleaseYear, GetPluginVersion().GetVersion());
		int32_t L_0 = ((int32_t)2020);
		RuntimeObject * L_1 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_0);
		PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335 * L_2;
		L_2 = SA_ScriptableSettings_GetPluginVersion_m3CDD88CD163DEC9B8FD83027FFB4829151E2A62F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = PluginVersionHandler_GetVersion_mCDCA8CA062F01E375065ABF7B74F55C49AF06BEC(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.Void SA.Foundation.Patterns.SA_ScriptableSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_ScriptableSettings__ctor_m06BF1A719E161D6D1E1AD2E063AE4CF4627697A2 (SA_ScriptableSettings_t713FB6ED1BCD9406BD9C6B0417FF99470A1FAA06 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string LastVersionCode = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_LastVersionCode_5(L_0);
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
// System.Void SA.Foundation.UtilitiesEditor.SA_AssetDatabase/SA_AssetDatabaseProxy::Create(UnityEngine.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_AssetDatabaseProxy_Create_mB723B59442DF97EE8E10EFC76CC267B1C6036A98 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___asset0, String_t* ___path1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.String> SA.Foundation.UtilitiesEditor.SA_AssetDatabase/SA_AssetDatabaseProxy::FindAssets(System.String,System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * SA_AssetDatabaseProxy_FindAssets_m9103E8D781515A80E312A99AF12F925964EB9053 (String_t* ___path0, String_t* ___filter1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___extentions2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_1 = NULL;
	{
		// var assets = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_0 = L_0;
		// return assets;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = V_0;
		V_1 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = V_1;
		return L_2;
	}
}
// System.Boolean SA.Foundation.UtilitiesEditor.SA_AssetDatabase/SA_AssetDatabaseProxy::CopyAsset(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SA_AssetDatabaseProxy_CopyAsset_m4D1EA5D731D4C65FEBD436A9A3FB66BC36CBF695 (String_t* ___path0, String_t* ___newPath1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return false;
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.String SA.Foundation.UtilitiesEditor.SA_AssetDatabase/SA_AssetDatabaseProxy::RenameAsset(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_AssetDatabaseProxy_RenameAsset_m70E5128A29C28AD6FDA7AEAF8AF015E15B9A53E1 (String_t* ___pathName0, String_t* ___newName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08668320993C3164BC22AB9D68365F41955E1415);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return "AssetDatabase is only avaliable with Unity Editor environment";
		V_0 = _stringLiteral08668320993C3164BC22AB9D68365F41955E1415;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.String SA.Foundation.UtilitiesEditor.SA_AssetDatabase/SA_AssetDatabaseProxy::Move(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_AssetDatabaseProxy_Move_m6C8CB5839D04EC2990BD4746537EA5BEB6CE8DF2 (String_t* ___oldPath0, String_t* ___newPath1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Boolean SA.Foundation.UtilitiesEditor.SA_AssetDatabase/SA_AssetDatabaseProxy::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SA_AssetDatabaseProxy_Delete_m72963960A3C1F9732B8BDCB8D1850001ED83D95A (String_t* ___path0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return false;
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void SA.Foundation.UtilitiesEditor.SA_AssetDatabase/SA_AssetDatabaseProxy::CreateFolder(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_AssetDatabaseProxy_CreateFolder_m1F6D25FD6D13F0BF2D85CA239754E28329478F89 (String_t* ___parentFolder0, String_t* ___newFolderName1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SA.Foundation.UtilitiesEditor.SA_AssetDatabase/SA_AssetDatabaseProxy::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_AssetDatabaseProxy_Refresh_m2FE5BA3710744966784EF9834D61FA2F4EB57A84 (const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SA.Foundation.UtilitiesEditor.SA_AssetDatabase/SA_AssetDatabaseProxy::ImportAsset(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_AssetDatabaseProxy_ImportAsset_mB3B8FAB3245C583ECB5B399144160D6EE38DD0F1 (String_t* ___path0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.String SA.Foundation.UtilitiesEditor.SA_AssetDatabase/SA_AssetDatabaseProxy::GetAssetPath(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_AssetDatabaseProxy_GetAssetPath_m15FF5409B46945EC7A8CC65F816AEA7AB0AB6486 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___assetObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void SA.Foundation.UtilitiesEditor.SA_AssetDatabase/SA_AssetDatabaseProxy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_AssetDatabaseProxy__ctor_m3F0B8C6569F2B18F9F0125C68FC8A1A823D3CCA6 (SA_AssetDatabaseProxy_t37301E4EF7263BEC105E6AA88B5917303CD51373 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void SA.Foundation.Events.SA_Event/SafeActionInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeActionInfo__ctor_m3724A216E8D37BD03BC754579621D70B1928C51E (SafeActionInfo_tFAB0C65C1529F53FF20AA35A0549487D2E944A4F * __this, const RuntimeMethod* method)
{
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SA.Foundation.Utility.SA_ScreenUtil/<TakeScreenshotCoroutine>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotCoroutineU3Ed__3__ctor_mA392EDCC04E3FF8CD0EA4714DC83256AB042CF9E (U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SA.Foundation.Utility.SA_ScreenUtil/<TakeScreenshotCoroutine>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotCoroutineU3Ed__3_System_IDisposable_Dispose_m351AB424A822A3FE72149A485C3851EDBC2997D4 (U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SA.Foundation.Utility.SA_ScreenUtil/<TakeScreenshotCoroutine>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTakeScreenshotCoroutineU3Ed__3_MoveNext_m1692D1FC60D53BE7E73B28EFEBDCF87866C9DF23 (U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m48902101D8F84E0110E1EA89779FE035FC93C460_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
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
		goto IL_0034;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_3 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0034:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var width = Screen.width;
		int32_t L_4;
		L_4 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		__this->set_U3CwidthU3E5__1_4(L_4);
		// var height = Screen.height;
		int32_t L_5;
		L_5 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		__this->set_U3CheightU3E5__2_5(L_5);
		// var tex = new Texture2D(width, height, TextureFormat.RGB24, false);
		int32_t L_6 = __this->get_U3CwidthU3E5__1_4();
		int32_t L_7 = __this->get_U3CheightU3E5__2_5();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_8, L_6, L_7, 3, (bool)0, /*hidden argument*/NULL);
		__this->set_U3CtexU3E5__3_6(L_8);
		// tex.ReadPixels(new Rect(0, 0, width, height), 0, 0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = __this->get_U3CtexU3E5__3_6();
		int32_t L_10 = __this->get_U3CwidthU3E5__1_4();
		int32_t L_11 = __this->get_U3CheightU3E5__2_5();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_12), (0.0f), (0.0f), ((float)((float)L_10)), ((float)((float)L_11)), /*hidden argument*/NULL);
		NullCheck(L_9);
		Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987(L_9, L_12, 0, 0, /*hidden argument*/NULL);
		// tex.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_13 = __this->get_U3CtexU3E5__3_6();
		NullCheck(L_13);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_13, /*hidden argument*/NULL);
		// if (maxSize > 0)
		int32_t L_14 = __this->get_maxSize_2();
		V_1 = (bool)((((int32_t)L_14) > ((int32_t)0))? 1 : 0);
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_0131;
		}
	}
	{
		// var biggestSide = width;
		int32_t L_16 = __this->get_U3CwidthU3E5__1_4();
		__this->set_U3CbiggestSideU3E5__4_7(L_16);
		// if (height > width) biggestSide = height;
		int32_t L_17 = __this->get_U3CheightU3E5__2_5();
		int32_t L_18 = __this->get_U3CwidthU3E5__1_4();
		V_2 = (bool)((((int32_t)L_17) > ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_00dc;
		}
	}
	{
		// if (height > width) biggestSide = height;
		int32_t L_20 = __this->get_U3CheightU3E5__2_5();
		__this->set_U3CbiggestSideU3E5__4_7(L_20);
	}

IL_00dc:
	{
		// if (biggestSide > maxSize)
		int32_t L_21 = __this->get_U3CbiggestSideU3E5__4_7();
		int32_t L_22 = __this->get_maxSize_2();
		V_3 = (bool)((((int32_t)L_21) > ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_3;
		if (!L_23)
		{
			goto IL_0130;
		}
	}
	{
		// var scale = (float)maxSize / (float)biggestSide;
		int32_t L_24 = __this->get_maxSize_2();
		int32_t L_25 = __this->get_U3CbiggestSideU3E5__4_7();
		__this->set_U3CscaleU3E5__5_8(((float)((float)((float)((float)L_24))/(float)((float)((float)L_25)))));
		// var resized = SA_IconManager.ResizeTexture(tex, SA_IconManager.ImageFilterMode.Nearest, scale);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_26 = __this->get_U3CtexU3E5__3_6();
		float L_27 = __this->get_U3CscaleU3E5__5_8();
		IL2CPP_RUNTIME_CLASS_INIT(SA_IconManager_tA36B1E013494FBD7D8B94AE179002326E1381796_il2cpp_TypeInfo_var);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_28;
		L_28 = SA_IconManager_ResizeTexture_mB673F8DD31F47168C4D1C27DD66D9F62838978B4(L_26, 0, L_27, /*hidden argument*/NULL);
		__this->set_U3CresizedU3E5__6_9(L_28);
		// tex = resized;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_29 = __this->get_U3CresizedU3E5__6_9();
		__this->set_U3CtexU3E5__3_6(L_29);
		__this->set_U3CresizedU3E5__6_9((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL);
	}

IL_0130:
	{
	}

IL_0131:
	{
		// callback.Invoke(tex);
		Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * L_30 = __this->get_callback_3();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_31 = __this->get_U3CtexU3E5__3_6();
		NullCheck(L_30);
		Action_1_Invoke_m48902101D8F84E0110E1EA89779FE035FC93C460(L_30, L_31, /*hidden argument*/Action_1_Invoke_m48902101D8F84E0110E1EA89779FE035FC93C460_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object SA.Foundation.Utility.SA_ScreenUtil/<TakeScreenshotCoroutine>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTakeScreenshotCoroutineU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCA12375967EAC642FF1BBA553D5CA9A1B4721F36 (U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SA.Foundation.Utility.SA_ScreenUtil/<TakeScreenshotCoroutine>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotCoroutineU3Ed__3_System_Collections_IEnumerator_Reset_m336F489A40E72E2F998D14FEB1E51595DAE8EA24 (U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTakeScreenshotCoroutineU3Ed__3_System_Collections_IEnumerator_Reset_m336F489A40E72E2F998D14FEB1E51595DAE8EA24_RuntimeMethod_var)));
	}
}
// System.Object SA.Foundation.Utility.SA_ScreenUtil/<TakeScreenshotCoroutine>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTakeScreenshotCoroutineU3Ed__3_System_Collections_IEnumerator_get_Current_mCA01390DE897CEAF057D49AF211B1DFB35F9E3D9 (U3CTakeScreenshotCoroutineU3Ed__3_t2542F5D7EBAC992BA765B6287F27AFCDFD54684E * __this, const RuntimeMethod* method)
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
// System.Void SA.Foundation.Utility.SA_ScreenUtil/CameraScreenshot::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScreenshot_LateUpdate_m7BF4884F0EFE2A1C87181A46E892C161A5A15299 (CameraScreenshot_t82F81A9CDEF95F8563B4738E4F233715CE72BF66 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m48902101D8F84E0110E1EA89779FE035FC93C460_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_1 = NULL;
	{
		// var rt = new RenderTexture(resWidth, resHeight, 24);
		int32_t L_0 = __this->get_resWidth_6();
		int32_t L_1 = __this->get_resHeight_7();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)il2cpp_codegen_object_new(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m5D8D36B284951F95A048C6B9ACA24FC7509564FF(L_2, L_0, L_1, ((int32_t)24), /*hidden argument*/NULL);
		V_0 = L_2;
		// m_camera.targetTexture = rt;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = __this->get_m_camera_4();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4 = V_0;
		NullCheck(L_3);
		Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596(L_3, L_4, /*hidden argument*/NULL);
		// var screenShot = new Texture2D(resWidth, resHeight, TextureFormat.RGB24, false);
		int32_t L_5 = __this->get_resWidth_6();
		int32_t L_6 = __this->get_resHeight_7();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_7, L_5, L_6, 3, (bool)0, /*hidden argument*/NULL);
		V_1 = L_7;
		// m_camera.Render();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8 = __this->get_m_camera_4();
		NullCheck(L_8);
		Camera_Render_m2D9749799AAC91A3725044A6CF5594E1F5D68D61(L_8, /*hidden argument*/NULL);
		// RenderTexture.active = rt;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_9 = V_0;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_9, /*hidden argument*/NULL);
		// screenShot.ReadPixels(new Rect(0, 0, resWidth, resHeight), 0, 0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_10 = V_1;
		int32_t L_11 = __this->get_resWidth_6();
		int32_t L_12 = __this->get_resHeight_7();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_13), (0.0f), (0.0f), ((float)((float)L_11)), ((float)((float)L_12)), /*hidden argument*/NULL);
		NullCheck(L_10);
		Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987(L_10, L_13, 0, 0, /*hidden argument*/NULL);
		// screenShot.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14 = V_1;
		NullCheck(L_14);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_14, /*hidden argument*/NULL);
		// m_camera.targetTexture = null;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15 = __this->get_m_camera_4();
		NullCheck(L_15);
		Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596(L_15, (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)NULL, /*hidden argument*/NULL);
		// RenderTexture.active = null; // JC: added to avoid errors
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)NULL, /*hidden argument*/NULL);
		// Destroy(rt);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_16, /*hidden argument*/NULL);
		// m_callback.Invoke(screenShot);
		Action_1_tE3A5BFBE93A9F659C5F8CCF63BFC91FB201B90BA * L_17 = __this->get_m_callback_5();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = V_1;
		NullCheck(L_17);
		Action_1_Invoke_m48902101D8F84E0110E1EA89779FE035FC93C460(L_17, L_18, /*hidden argument*/Action_1_Invoke_m48902101D8F84E0110E1EA89779FE035FC93C460_RuntimeMethod_var);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SA.Foundation.Utility.SA_ScreenUtil/CameraScreenshot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScreenshot__ctor_m91D1DD3B39D7F49C427898DAE5D67776E0510316 (CameraScreenshot_t82F81A9CDEF95F8563B4738E4F233715CE72BF66 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SA_Error_get_Message_m519EA465FD7A239E17E95B6D8A049DC8D34550C1_inline (SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * __this, const RuntimeMethod* method)
{
	{
		// public string Message => m_message;
		String_t* L_0 = __this->get_m_message_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SA_Error_get_Code_m8309D2C635C8E37CE5FEBA26E59769F578C47509_inline (SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * __this, const RuntimeMethod* method)
{
	{
		// public int Code => m_code;
		int32_t L_0 = __this->get_m_code_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SA_ISOLanguage_get_Name_mB72F10C350F65A35453D03BA4234E13BA2FA24A9_inline (SA_ISOLanguage_tFD4C1E2DC09F0DBA4D75D25DC4C6EF03295A032C * __this, const RuntimeMethod* method)
{
	{
		// public string Name => m_name;
		String_t* L_0 = __this->get_m_name_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * SA_Result_get_Error_m351134373999CB0552FC83E68DB2F905DA32F98B_inline (SA_Result_t7B6B72F570BE8A3D37CE00AAA8479A5115A74EBE * __this, const RuntimeMethod* method)
{
	{
		// public SA_Error Error => m_error;
		SA_Error_t033D1456BE45BAB0C0C677F1FBA306E8FB918BF1 * L_0 = __this->get_m_error_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
