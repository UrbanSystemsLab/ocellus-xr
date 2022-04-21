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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Collections.Generic.IEnumerable`1<SA.iOS.XCode.ISD_PlistKeyId>
struct IEnumerable_1_t942C3385C3679B53662DE5DF901FF1A08072682F;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_AssetFile>
struct List_1_t9511BE61AEA93705100DA49C8230927A022DE41D;
// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_BuildProperty>
struct List_1_t47A12984B966945E7304EE778A8FB82169C91100;
// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_EmbedFramework>
struct List_1_t0F62678D2CE34F21E5785211C71C04056EA9E405;
// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Flag>
struct List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E;
// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Framework>
struct List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC;
// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Library>
struct List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5;
// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_PlistKey>
struct List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD;
// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_PlistKeyId>
struct List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705;
// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_ShellScript>
struct List_1_tF2AAE2EA9B0B2F3C3A81DD7001BBBD10CD72E00A;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<SA.Foundation.Localization.SA_ISOLanguage>
struct List_1_t0E869E1E4D59E7247073977786D71763115C251C;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_CapabilitySettings/BackgroundModesCapability/BackgroundModesOptions>
struct List_1_t36B10EDDB61D61D7E69D51E2F3F59664B130AA56;
// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_CapabilitySettings/MapsCapability/MapsOptions>
struct List_1_tA782C52F01BC52A405B52D42803A3177410C6394;
// SA.Foundation.Patterns.SA_ScriptableSingleton`1<SA.iOS.XCode.ISD_Settings>
struct SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C;
// SA.Foundation.Patterns.SA_ScriptableSingleton`1<System.Object>
struct SA_ScriptableSingleton_1_t53D5A04A6AFE2F45D8D2A3553EDBA5F7914A6F5E;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// SA.iOS.XCode.ISD_AssetFile[]
struct ISD_AssetFileU5BU5D_t0347E41BC68618463C03309B643B4B929C931B9F;
// SA.iOS.XCode.ISD_BuildProperty[]
struct ISD_BuildPropertyU5BU5D_tBC334BFAED6BB82EE7D34D1DDB0FA23E4549CCE7;
// SA.iOS.XCode.ISD_EmbedFramework[]
struct ISD_EmbedFrameworkU5BU5D_tE263F3BDB58F7FBCA23FF2C56E67446078BB25E1;
// SA.iOS.XCode.ISD_Flag[]
struct ISD_FlagU5BU5D_t560581D72DC6260E4EBAE66A3B933D5FE6125F96;
// SA.iOS.XCode.ISD_Framework[]
struct ISD_FrameworkU5BU5D_t713FC8E927513EC5D0ED9B19CE8F5665D15CDA6B;
// SA.iOS.XCode.ISD_Library[]
struct ISD_LibraryU5BU5D_t8658E2DE2836D061C0589CBDB958EC8D61357945;
// SA.iOS.XCode.ISD_PlistKey[]
struct ISD_PlistKeyU5BU5D_t983955E9D2904D2A34FCE3CDE02C9BAC2678AD1D;
// SA.iOS.XCode.ISD_PlistKeyId[]
struct ISD_PlistKeyIdU5BU5D_t47EB83BAA0D11052F849F0234398A9E138048FCD;
// SA.iOS.XCode.ISD_ShellScript[]
struct ISD_ShellScriptU5BU5D_t6F88194370F588B3E1C96113891A5878CDCA559F;
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
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// SA.iOS.XCode.ISD_CapabilitySettings/BackgroundModesCapability/BackgroundModesOptions[]
struct BackgroundModesOptionsU5BU5D_tAE89EC7741F99D9330F4B6A6DE96D8B763D5242D;
// SA.iOS.XCode.ISD_CapabilitySettings/MapsCapability/MapsOptions[]
struct MapsOptionsU5BU5D_t1098AECAF36D754A06869B86BD2ACB53D2662EBF;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.ComponentModel.DescriptionAttribute
struct DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// SA.iOS.XCode.ISD_AssetFile
struct ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8;
// SA.iOS.XCode.ISD_BuildProperty
struct ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F;
// SA.iOS.XCode.ISD_CapabilitySettings
struct ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494;
// SA.iOS.XCode.ISD_EmbedFramework
struct ISD_EmbedFramework_t7BF386C600EFF993346BF39090B1B7A69773ACE0;
// SA.iOS.XCode.ISD_Flag
struct ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927;
// SA.iOS.XCode.ISD_Framework
struct ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33;
// SA.iOS.XCode.ISD_FrameworkHandler
struct ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69;
// SA.iOS.XCode.ISD_LibHandler
struct ISD_LibHandler_t22BB005239E6F37A9B2ECAE7EE903645A2F94497;
// SA.iOS.XCode.ISD_Library
struct ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8;
// SA.iOS.XCode.ISD_PlistKey
struct ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC;
// SA.iOS.XCode.ISD_PlistKeyId
struct ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE;
// SA.iOS.XCode.ISD_Settings
struct ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF;
// SA.iOS.XCode.ISD_ShellScript
struct ISD_ShellScript_t7BFF36378410648446102EECD99CFE87DBF751E0;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// SA.Foundation.Config.PluginVersionHandler
struct PluginVersionHandler_tB8EE5B82021B421151E64DFD8F3B15BB58F7F335;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// SA.iOS.XCode.ISD_CapabilitySettings/AppGroupsCapability
struct AppGroupsCapability_tD9E42DF113B62E0A6438CC48C156C21D21C0B7BE;
// SA.iOS.XCode.ISD_CapabilitySettings/ApplePayCapability
struct ApplePayCapability_t8006036C3FABF39E040353EC648A79DA790CEB03;
// SA.iOS.XCode.ISD_CapabilitySettings/AssociatedDomainsCapability
struct AssociatedDomainsCapability_t693B11E62E17C6609C3F79C3A2E63779570FFB27;
// SA.iOS.XCode.ISD_CapabilitySettings/BackgroundModesCapability
struct BackgroundModesCapability_tEC48C548936457ED233CD3BACE3DA008CDCEB6D2;
// SA.iOS.XCode.ISD_CapabilitySettings/Capability
struct Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8;
// SA.iOS.XCode.ISD_CapabilitySettings/KeychainSharingCapability
struct KeychainSharingCapability_t81BC5A01F4AD5A9D00BA956731CF3BC636D5FDE3;
// SA.iOS.XCode.ISD_CapabilitySettings/MapsCapability
struct MapsCapability_tB3B5DB6D42952FBFF0D298E2B53ADF96E70C986F;
// SA.iOS.XCode.ISD_CapabilitySettings/PushNotificationsCapability
struct PushNotificationsCapability_tA3F0ED1F949FCD420D665B366053B9EA3B8A9B09;
// SA.iOS.XCode.ISD_CapabilitySettings/WalletCapability
struct WalletCapability_t2A652861CD399823A3527B05AD810692827091DC;
// SA.iOS.XCode.ISD_CapabilitySettings/iCloudCapability
struct iCloudCapability_t623E461BD2CEC236034D4DF6E94ED7065A9758EC;

IL2CPP_EXTERN_C RuntimeClass* AppGroupsCapability_tD9E42DF113B62E0A6438CC48C156C21D21C0B7BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplePayCapability_t8006036C3FABF39E040353EC648A79DA790CEB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssociatedDomainsCapability_t693B11E62E17C6609C3F79C3A2E63779570FFB27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BackgroundModesCapability_tEC48C548936457ED233CD3BACE3DA008CDCEB6D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DescriptionAttributeU5BU5D_tAF6E91F4743A9147A5794EE096DCDFD27B30B84F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISD_PlistKeyType_t40722374D1603A0E78C691C4C2DE382839165789_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISD_iOSFramework_tB5D22C8FFBD69FD6511AC3464CD39A1F280C8A4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISD_iOSLibrary_t1C5F1155F874ABBF397418090DF5406E1E3CD904_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeychainSharingCapability_t81BC5A01F4AD5A9D00BA956731CF3BC636D5FDE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0E869E1E4D59E7247073977786D71763115C251C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0F62678D2CE34F21E5785211C71C04056EA9E405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t36B10EDDB61D61D7E69D51E2F3F59664B130AA56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t47A12984B966945E7304EE778A8FB82169C91100_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9511BE61AEA93705100DA49C8230927A022DE41D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA782C52F01BC52A405B52D42803A3177410C6394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF2AAE2EA9B0B2F3C3A81DD7001BBBD10CD72E00A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MapsCapability_tB3B5DB6D42952FBFF0D298E2B53ADF96E70C986F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PushNotificationsCapability_tA3F0ED1F949FCD420D665B366053B9EA3B8A9B09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WalletCapability_t2A652861CD399823A3527B05AD810692827091DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iCloudCapability_t623E461BD2CEC236034D4DF6E94ED7065A9758EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0814ADF87C34FB2468F29C4913E98D818F62D006;
IL2CPP_EXTERN_C String_t* _stringLiteral0BD6474CDFDC20B414D400DFCCBD4199FBC3721A;
IL2CPP_EXTERN_C String_t* _stringLiteral0F1A1313ACE9184F384D0C3DAC70E43F1782CE1C;
IL2CPP_EXTERN_C String_t* _stringLiteral1924DB465BC02D201D9D19DABC69287268593655;
IL2CPP_EXTERN_C String_t* _stringLiteral3DFD2CF0F937F940B30BF491D4D5F3D7BBBA27BB;
IL2CPP_EXTERN_C String_t* _stringLiteral5793982FDD767F3327DF4B45368BD5E059DEDD7A;
IL2CPP_EXTERN_C String_t* _stringLiteral73C5ED74B47ADA89E87D0C79D8EF8507BFD67B4D;
IL2CPP_EXTERN_C String_t* _stringLiteral7471FC92FC1AA570D64A46C83CB352615E0781C2;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteralA1AA8E5210FF989B29E3F8470C138F3194E47858;
IL2CPP_EXTERN_C String_t* _stringLiteralA9EC953B2E6BB97F5E5365FFE80D441F875FCC39;
IL2CPP_EXTERN_C String_t* _stringLiteralD8F50872454B1DDA643F3A29398B40D5880A7DDA;
IL2CPP_EXTERN_C String_t* _stringLiteralECC9B327D96E7A823960D2F1598D5DDF83AC640E;
IL2CPP_EXTERN_C String_t* _stringLiteralF6292C214A95EB850F6BAC140CFEE9C933982E02;
IL2CPP_EXTERN_C String_t* _stringLiteralF65278F7177375087952EBBED9F0F65965C98C96;
IL2CPP_EXTERN_C const RuntimeMethod* EnumUtility_ParseEnum_TisISD_iOSFramework_tB5D22C8FFBD69FD6511AC3464CD39A1F280C8A4B_m81B43426214714A54C1D1148F5725622DA966096_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07CC916E7AF35B1CE3718405F5000B52E2C800DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1E799A697C36F18B32398BF590D4B8A376E1CB41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2EB0FD67A9375FBEAA386C5A624EA294F22670C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m71F58DCD9FC7E613D8328ADBC7CF0151F9E9449F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD2435E96BA430088CD4CE935459860EAE3C4B46E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD63DC05063EAF9C72529A72FDB846946E329186D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE970889E8AFFAF3D1BE8106F7B5E40DB16CC9D84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m36FF018DBC00E12586A26A1FE93ADCF6AD3B64F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m746AA0A0C30015E425278C681F6DF79149236637_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m78EC677492EE0EC7A1500B4144AFE82BAB39EA1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7A4467D8767DE31A96E02F234DC94BF1B7C4B84B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7F4085B53D03998236876EFB300595BC15692141_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB73179B10A46C06813A3C51C333D2F444F4809AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC5A8248129604DAFB2E325BB372AF0B86B0394B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m045817AE13DC4B574A64CDE27EFA6482872DC781_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m12ED87C144D46A37CD32E78BAE645456C46B468D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m77BFB9F5DD0316790B9819CABDAF0C6E9182A3F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8862D97DCFC1C05AA111F2D3D088CB7B21E39BE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9304A2A8B29BC07690255B5D99CE89DDCCF8A73B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAF883A195EBF34B6BFD37F9EDC4378A1D3D3E673_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCF5305BFEC169FB4593B64DD6728586C9068198E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISD_LibHandler_enumValueOf_m92C9D3DBA3BCBD76657BA68DD8D78EB622482279_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m04B351E6612EAB1DFE9BF8BF35718F3D148E48B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m214B76557CA516EA4496E4116427CA67A7AAB9F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2B0E88607A2AB7DED813894B140462936144CE6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3344388DD1FE1FD92F4413F258715C4C2DBA2BEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4A69F19BB193BE8DCFC3D164BD771BDA8DEB1950_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4D8D81DDC48F45BE8C7A8DD0AF0A5A0F48821D98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mAF4F95A9B1BDC392BD9D70291B06CDE490015D69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m12BD500EB547991D76DE40B87CF55EC476F4D7CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m515880F3EDD3946F9D2863F6BE89AF8B04B2766C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5F818B409F00C6EA664FB9B864A1C3C8369C83C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m61E0EE51B4C8119A2D1957039180AAFD7C4AA6DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m814F4B14E6D0F015A8D3350C2A5EA23A190E4FCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m93D332F097ED9A125378B8E0EE00713FEED9D32D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mDE9818098C1E91FCF8CA0CDCEB76BDC6679BA308_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m1B398F0099068E5152FD59EDADCD434EAE277E13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m1BC58C47AFB0B8E0825557E43F131D79FFA39D0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m2F77D73B7864C17332B95E13D138DBF2F5526AF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m51290C4CD148C51D89B29699197DFD8BB56CD879_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m684FA1158260011AB6320B5614F7C7732A5401FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mB20ADAB4D82D0190F36153414F063BF5D64BABFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mF92A6C63668A1088AF5451E79AC404608A5009AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0FE8B9CFF87754AE2B2F4351AF0ADA6485CDF702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m22D56072E4E0F3BF53DCFACAF0EF7CDD6803D765_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m32077E95ECC5A06AA379D63701FB0B563E499349_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4361369C7CDB42F8F8CF6866A2CDAC69682EFC15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6A4E01FFD35605876DCC5B7AC2F03B6049367A28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9121FE25989D0160C00484BB0D796F964D908C5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA954EB648524D9D6AA4A79B212886082247F10E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC0B1E4466908183C7560FA7AF7E2431CCB026DD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD2087DF7203D2CC322E744AF09FC9281E27C55CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD3DEC8AFAD295AC8C8326C997CCECC66600EFE71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD728A8013E758BEF77948CB8EA704120464F7439_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD9CF71F579DEC474A9A578CFAFDB0D5AF5344186_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF9889B680570F6684E4D9705D245DB20524D6F82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_m21A235617409E19E513B1F887A77DDA9B1EE6896_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_mC57DD8EC8F6BBF1491CDDC374A9E11168E38E20A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m95B4E880156FF461CCC8F7B1C00F72A13566085A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SA_ScriptableSingleton_1__ctor_m64F9AC80322D1C1A2EA4C6D6BB3E1ADB5A40FCB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ISD_iOSFramework_tB5D22C8FFBD69FD6511AC3464CD39A1F280C8A4B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ISD_iOSLibrary_t1C5F1155F874ABBF397418090DF5406E1E3CD904_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DescriptionAttributeU5BU5D_tAF6E91F4743A9147A5794EE096DCDFD27B30B84F;
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
struct  U3CModuleU3E_t2F8A3D75A33702685698753DE298587C4229B941 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_AssetFile>
struct  List_1_t9511BE61AEA93705100DA49C8230927A022DE41D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ISD_AssetFileU5BU5D_t0347E41BC68618463C03309B643B4B929C931B9F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9511BE61AEA93705100DA49C8230927A022DE41D, ____items_1)); }
	inline ISD_AssetFileU5BU5D_t0347E41BC68618463C03309B643B4B929C931B9F* get__items_1() const { return ____items_1; }
	inline ISD_AssetFileU5BU5D_t0347E41BC68618463C03309B643B4B929C931B9F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ISD_AssetFileU5BU5D_t0347E41BC68618463C03309B643B4B929C931B9F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9511BE61AEA93705100DA49C8230927A022DE41D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9511BE61AEA93705100DA49C8230927A022DE41D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9511BE61AEA93705100DA49C8230927A022DE41D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9511BE61AEA93705100DA49C8230927A022DE41D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ISD_AssetFileU5BU5D_t0347E41BC68618463C03309B643B4B929C931B9F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9511BE61AEA93705100DA49C8230927A022DE41D_StaticFields, ____emptyArray_5)); }
	inline ISD_AssetFileU5BU5D_t0347E41BC68618463C03309B643B4B929C931B9F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ISD_AssetFileU5BU5D_t0347E41BC68618463C03309B643B4B929C931B9F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ISD_AssetFileU5BU5D_t0347E41BC68618463C03309B643B4B929C931B9F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_BuildProperty>
struct  List_1_t47A12984B966945E7304EE778A8FB82169C91100  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ISD_BuildPropertyU5BU5D_tBC334BFAED6BB82EE7D34D1DDB0FA23E4549CCE7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t47A12984B966945E7304EE778A8FB82169C91100, ____items_1)); }
	inline ISD_BuildPropertyU5BU5D_tBC334BFAED6BB82EE7D34D1DDB0FA23E4549CCE7* get__items_1() const { return ____items_1; }
	inline ISD_BuildPropertyU5BU5D_tBC334BFAED6BB82EE7D34D1DDB0FA23E4549CCE7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ISD_BuildPropertyU5BU5D_tBC334BFAED6BB82EE7D34D1DDB0FA23E4549CCE7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t47A12984B966945E7304EE778A8FB82169C91100, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t47A12984B966945E7304EE778A8FB82169C91100, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t47A12984B966945E7304EE778A8FB82169C91100, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t47A12984B966945E7304EE778A8FB82169C91100_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ISD_BuildPropertyU5BU5D_tBC334BFAED6BB82EE7D34D1DDB0FA23E4549CCE7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t47A12984B966945E7304EE778A8FB82169C91100_StaticFields, ____emptyArray_5)); }
	inline ISD_BuildPropertyU5BU5D_tBC334BFAED6BB82EE7D34D1DDB0FA23E4549CCE7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ISD_BuildPropertyU5BU5D_tBC334BFAED6BB82EE7D34D1DDB0FA23E4549CCE7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ISD_BuildPropertyU5BU5D_tBC334BFAED6BB82EE7D34D1DDB0FA23E4549CCE7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_EmbedFramework>
struct  List_1_t0F62678D2CE34F21E5785211C71C04056EA9E405  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ISD_EmbedFrameworkU5BU5D_tE263F3BDB58F7FBCA23FF2C56E67446078BB25E1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0F62678D2CE34F21E5785211C71C04056EA9E405, ____items_1)); }
	inline ISD_EmbedFrameworkU5BU5D_tE263F3BDB58F7FBCA23FF2C56E67446078BB25E1* get__items_1() const { return ____items_1; }
	inline ISD_EmbedFrameworkU5BU5D_tE263F3BDB58F7FBCA23FF2C56E67446078BB25E1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ISD_EmbedFrameworkU5BU5D_tE263F3BDB58F7FBCA23FF2C56E67446078BB25E1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0F62678D2CE34F21E5785211C71C04056EA9E405, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0F62678D2CE34F21E5785211C71C04056EA9E405, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0F62678D2CE34F21E5785211C71C04056EA9E405, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0F62678D2CE34F21E5785211C71C04056EA9E405_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ISD_EmbedFrameworkU5BU5D_tE263F3BDB58F7FBCA23FF2C56E67446078BB25E1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0F62678D2CE34F21E5785211C71C04056EA9E405_StaticFields, ____emptyArray_5)); }
	inline ISD_EmbedFrameworkU5BU5D_tE263F3BDB58F7FBCA23FF2C56E67446078BB25E1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ISD_EmbedFrameworkU5BU5D_tE263F3BDB58F7FBCA23FF2C56E67446078BB25E1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ISD_EmbedFrameworkU5BU5D_tE263F3BDB58F7FBCA23FF2C56E67446078BB25E1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Flag>
struct  List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ISD_FlagU5BU5D_t560581D72DC6260E4EBAE66A3B933D5FE6125F96* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E, ____items_1)); }
	inline ISD_FlagU5BU5D_t560581D72DC6260E4EBAE66A3B933D5FE6125F96* get__items_1() const { return ____items_1; }
	inline ISD_FlagU5BU5D_t560581D72DC6260E4EBAE66A3B933D5FE6125F96** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ISD_FlagU5BU5D_t560581D72DC6260E4EBAE66A3B933D5FE6125F96* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ISD_FlagU5BU5D_t560581D72DC6260E4EBAE66A3B933D5FE6125F96* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E_StaticFields, ____emptyArray_5)); }
	inline ISD_FlagU5BU5D_t560581D72DC6260E4EBAE66A3B933D5FE6125F96* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ISD_FlagU5BU5D_t560581D72DC6260E4EBAE66A3B933D5FE6125F96** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ISD_FlagU5BU5D_t560581D72DC6260E4EBAE66A3B933D5FE6125F96* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Framework>
struct  List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ISD_FrameworkU5BU5D_t713FC8E927513EC5D0ED9B19CE8F5665D15CDA6B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC, ____items_1)); }
	inline ISD_FrameworkU5BU5D_t713FC8E927513EC5D0ED9B19CE8F5665D15CDA6B* get__items_1() const { return ____items_1; }
	inline ISD_FrameworkU5BU5D_t713FC8E927513EC5D0ED9B19CE8F5665D15CDA6B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ISD_FrameworkU5BU5D_t713FC8E927513EC5D0ED9B19CE8F5665D15CDA6B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ISD_FrameworkU5BU5D_t713FC8E927513EC5D0ED9B19CE8F5665D15CDA6B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC_StaticFields, ____emptyArray_5)); }
	inline ISD_FrameworkU5BU5D_t713FC8E927513EC5D0ED9B19CE8F5665D15CDA6B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ISD_FrameworkU5BU5D_t713FC8E927513EC5D0ED9B19CE8F5665D15CDA6B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ISD_FrameworkU5BU5D_t713FC8E927513EC5D0ED9B19CE8F5665D15CDA6B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Library>
struct  List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ISD_LibraryU5BU5D_t8658E2DE2836D061C0589CBDB958EC8D61357945* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5, ____items_1)); }
	inline ISD_LibraryU5BU5D_t8658E2DE2836D061C0589CBDB958EC8D61357945* get__items_1() const { return ____items_1; }
	inline ISD_LibraryU5BU5D_t8658E2DE2836D061C0589CBDB958EC8D61357945** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ISD_LibraryU5BU5D_t8658E2DE2836D061C0589CBDB958EC8D61357945* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ISD_LibraryU5BU5D_t8658E2DE2836D061C0589CBDB958EC8D61357945* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5_StaticFields, ____emptyArray_5)); }
	inline ISD_LibraryU5BU5D_t8658E2DE2836D061C0589CBDB958EC8D61357945* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ISD_LibraryU5BU5D_t8658E2DE2836D061C0589CBDB958EC8D61357945** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ISD_LibraryU5BU5D_t8658E2DE2836D061C0589CBDB958EC8D61357945* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_PlistKey>
struct  List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ISD_PlistKeyU5BU5D_t983955E9D2904D2A34FCE3CDE02C9BAC2678AD1D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD, ____items_1)); }
	inline ISD_PlistKeyU5BU5D_t983955E9D2904D2A34FCE3CDE02C9BAC2678AD1D* get__items_1() const { return ____items_1; }
	inline ISD_PlistKeyU5BU5D_t983955E9D2904D2A34FCE3CDE02C9BAC2678AD1D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ISD_PlistKeyU5BU5D_t983955E9D2904D2A34FCE3CDE02C9BAC2678AD1D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ISD_PlistKeyU5BU5D_t983955E9D2904D2A34FCE3CDE02C9BAC2678AD1D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD_StaticFields, ____emptyArray_5)); }
	inline ISD_PlistKeyU5BU5D_t983955E9D2904D2A34FCE3CDE02C9BAC2678AD1D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ISD_PlistKeyU5BU5D_t983955E9D2904D2A34FCE3CDE02C9BAC2678AD1D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ISD_PlistKeyU5BU5D_t983955E9D2904D2A34FCE3CDE02C9BAC2678AD1D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_PlistKeyId>
struct  List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ISD_PlistKeyIdU5BU5D_t47EB83BAA0D11052F849F0234398A9E138048FCD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705, ____items_1)); }
	inline ISD_PlistKeyIdU5BU5D_t47EB83BAA0D11052F849F0234398A9E138048FCD* get__items_1() const { return ____items_1; }
	inline ISD_PlistKeyIdU5BU5D_t47EB83BAA0D11052F849F0234398A9E138048FCD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ISD_PlistKeyIdU5BU5D_t47EB83BAA0D11052F849F0234398A9E138048FCD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ISD_PlistKeyIdU5BU5D_t47EB83BAA0D11052F849F0234398A9E138048FCD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705_StaticFields, ____emptyArray_5)); }
	inline ISD_PlistKeyIdU5BU5D_t47EB83BAA0D11052F849F0234398A9E138048FCD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ISD_PlistKeyIdU5BU5D_t47EB83BAA0D11052F849F0234398A9E138048FCD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ISD_PlistKeyIdU5BU5D_t47EB83BAA0D11052F849F0234398A9E138048FCD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_ShellScript>
struct  List_1_tF2AAE2EA9B0B2F3C3A81DD7001BBBD10CD72E00A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ISD_ShellScriptU5BU5D_t6F88194370F588B3E1C96113891A5878CDCA559F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF2AAE2EA9B0B2F3C3A81DD7001BBBD10CD72E00A, ____items_1)); }
	inline ISD_ShellScriptU5BU5D_t6F88194370F588B3E1C96113891A5878CDCA559F* get__items_1() const { return ____items_1; }
	inline ISD_ShellScriptU5BU5D_t6F88194370F588B3E1C96113891A5878CDCA559F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ISD_ShellScriptU5BU5D_t6F88194370F588B3E1C96113891A5878CDCA559F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF2AAE2EA9B0B2F3C3A81DD7001BBBD10CD72E00A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF2AAE2EA9B0B2F3C3A81DD7001BBBD10CD72E00A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF2AAE2EA9B0B2F3C3A81DD7001BBBD10CD72E00A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF2AAE2EA9B0B2F3C3A81DD7001BBBD10CD72E00A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ISD_ShellScriptU5BU5D_t6F88194370F588B3E1C96113891A5878CDCA559F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF2AAE2EA9B0B2F3C3A81DD7001BBBD10CD72E00A_StaticFields, ____emptyArray_5)); }
	inline ISD_ShellScriptU5BU5D_t6F88194370F588B3E1C96113891A5878CDCA559F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ISD_ShellScriptU5BU5D_t6F88194370F588B3E1C96113891A5878CDCA559F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ISD_ShellScriptU5BU5D_t6F88194370F588B3E1C96113891A5878CDCA559F* value)
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


// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_CapabilitySettings/BackgroundModesCapability/BackgroundModesOptions>
struct  List_1_t36B10EDDB61D61D7E69D51E2F3F59664B130AA56  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BackgroundModesOptionsU5BU5D_tAE89EC7741F99D9330F4B6A6DE96D8B763D5242D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t36B10EDDB61D61D7E69D51E2F3F59664B130AA56, ____items_1)); }
	inline BackgroundModesOptionsU5BU5D_tAE89EC7741F99D9330F4B6A6DE96D8B763D5242D* get__items_1() const { return ____items_1; }
	inline BackgroundModesOptionsU5BU5D_tAE89EC7741F99D9330F4B6A6DE96D8B763D5242D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BackgroundModesOptionsU5BU5D_tAE89EC7741F99D9330F4B6A6DE96D8B763D5242D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t36B10EDDB61D61D7E69D51E2F3F59664B130AA56, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t36B10EDDB61D61D7E69D51E2F3F59664B130AA56, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t36B10EDDB61D61D7E69D51E2F3F59664B130AA56, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t36B10EDDB61D61D7E69D51E2F3F59664B130AA56_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BackgroundModesOptionsU5BU5D_tAE89EC7741F99D9330F4B6A6DE96D8B763D5242D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t36B10EDDB61D61D7E69D51E2F3F59664B130AA56_StaticFields, ____emptyArray_5)); }
	inline BackgroundModesOptionsU5BU5D_tAE89EC7741F99D9330F4B6A6DE96D8B763D5242D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BackgroundModesOptionsU5BU5D_tAE89EC7741F99D9330F4B6A6DE96D8B763D5242D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BackgroundModesOptionsU5BU5D_tAE89EC7741F99D9330F4B6A6DE96D8B763D5242D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_CapabilitySettings/MapsCapability/MapsOptions>
struct  List_1_tA782C52F01BC52A405B52D42803A3177410C6394  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MapsOptionsU5BU5D_t1098AECAF36D754A06869B86BD2ACB53D2662EBF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA782C52F01BC52A405B52D42803A3177410C6394, ____items_1)); }
	inline MapsOptionsU5BU5D_t1098AECAF36D754A06869B86BD2ACB53D2662EBF* get__items_1() const { return ____items_1; }
	inline MapsOptionsU5BU5D_t1098AECAF36D754A06869B86BD2ACB53D2662EBF** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MapsOptionsU5BU5D_t1098AECAF36D754A06869B86BD2ACB53D2662EBF* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA782C52F01BC52A405B52D42803A3177410C6394, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA782C52F01BC52A405B52D42803A3177410C6394, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA782C52F01BC52A405B52D42803A3177410C6394, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA782C52F01BC52A405B52D42803A3177410C6394_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MapsOptionsU5BU5D_t1098AECAF36D754A06869B86BD2ACB53D2662EBF* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA782C52F01BC52A405B52D42803A3177410C6394_StaticFields, ____emptyArray_5)); }
	inline MapsOptionsU5BU5D_t1098AECAF36D754A06869B86BD2ACB53D2662EBF* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MapsOptionsU5BU5D_t1098AECAF36D754A06869B86BD2ACB53D2662EBF** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MapsOptionsU5BU5D_t1098AECAF36D754A06869B86BD2ACB53D2662EBF* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// SA.iOS.XCode.ISD_API
struct  ISD_API_t99A05A62AC53167D473806F8D49CBA0ED28C25EA  : public RuntimeObject
{
public:

public:
};


// SA.iOS.XCode.ISD_AssetFile
struct  ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8  : public RuntimeObject
{
public:
	// System.String SA.iOS.XCode.ISD_AssetFile::XCodePath
	String_t* ___XCodePath_0;
	// UnityEngine.Object SA.iOS.XCode.ISD_AssetFile::Asset
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___Asset_1;

public:
	inline static int32_t get_offset_of_XCodePath_0() { return static_cast<int32_t>(offsetof(ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8, ___XCodePath_0)); }
	inline String_t* get_XCodePath_0() const { return ___XCodePath_0; }
	inline String_t** get_address_of_XCodePath_0() { return &___XCodePath_0; }
	inline void set_XCodePath_0(String_t* value)
	{
		___XCodePath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XCodePath_0), (void*)value);
	}

	inline static int32_t get_offset_of_Asset_1() { return static_cast<int32_t>(offsetof(ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8, ___Asset_1)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_Asset_1() const { return ___Asset_1; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_Asset_1() { return &___Asset_1; }
	inline void set_Asset_1(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___Asset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Asset_1), (void*)value);
	}
};


// SA.iOS.XCode.ISD_BuildProperty
struct  ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F  : public RuntimeObject
{
public:
	// System.String SA.iOS.XCode.ISD_BuildProperty::m_name
	String_t* ___m_name_0;
	// System.String SA.iOS.XCode.ISD_BuildProperty::m_value
	String_t* ___m_value_1;
	// System.String[] SA.iOS.XCode.ISD_BuildProperty::m_options
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_options_2;

public:
	inline static int32_t get_offset_of_m_name_0() { return static_cast<int32_t>(offsetof(ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F, ___m_name_0)); }
	inline String_t* get_m_name_0() const { return ___m_name_0; }
	inline String_t** get_address_of_m_name_0() { return &___m_name_0; }
	inline void set_m_name_0(String_t* value)
	{
		___m_name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_value_1() { return static_cast<int32_t>(offsetof(ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F, ___m_value_1)); }
	inline String_t* get_m_value_1() const { return ___m_value_1; }
	inline String_t** get_address_of_m_value_1() { return &___m_value_1; }
	inline void set_m_value_1(String_t* value)
	{
		___m_value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_value_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_options_2() { return static_cast<int32_t>(offsetof(ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F, ___m_options_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_options_2() const { return ___m_options_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_options_2() { return &___m_options_2; }
	inline void set_m_options_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_options_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_options_2), (void*)value);
	}
};


// SA.iOS.XCode.ISD_CapabilitySettings
struct  ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494  : public RuntimeObject
{
public:
	// SA.iOS.XCode.ISD_CapabilitySettings/iCloudCapability SA.iOS.XCode.ISD_CapabilitySettings::iCloud
	iCloudCapability_t623E461BD2CEC236034D4DF6E94ED7065A9758EC * ___iCloud_0;
	// SA.iOS.XCode.ISD_CapabilitySettings/PushNotificationsCapability SA.iOS.XCode.ISD_CapabilitySettings::PushNotifications
	PushNotificationsCapability_tA3F0ED1F949FCD420D665B366053B9EA3B8A9B09 * ___PushNotifications_1;
	// SA.iOS.XCode.ISD_CapabilitySettings/Capability SA.iOS.XCode.ISD_CapabilitySettings::GameCenter
	Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * ___GameCenter_2;
	// SA.iOS.XCode.ISD_CapabilitySettings/Capability SA.iOS.XCode.ISD_CapabilitySettings::SignInWithApple
	Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * ___SignInWithApple_3;
	// SA.iOS.XCode.ISD_CapabilitySettings/WalletCapability SA.iOS.XCode.ISD_CapabilitySettings::Wallet
	WalletCapability_t2A652861CD399823A3527B05AD810692827091DC * ___Wallet_4;
	// SA.iOS.XCode.ISD_CapabilitySettings/Capability SA.iOS.XCode.ISD_CapabilitySettings::Siri
	Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * ___Siri_5;
	// SA.iOS.XCode.ISD_CapabilitySettings/ApplePayCapability SA.iOS.XCode.ISD_CapabilitySettings::ApplePay
	ApplePayCapability_t8006036C3FABF39E040353EC648A79DA790CEB03 * ___ApplePay_6;
	// SA.iOS.XCode.ISD_CapabilitySettings/Capability SA.iOS.XCode.ISD_CapabilitySettings::InAppPurchase
	Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * ___InAppPurchase_7;
	// SA.iOS.XCode.ISD_CapabilitySettings/MapsCapability SA.iOS.XCode.ISD_CapabilitySettings::Maps
	MapsCapability_tB3B5DB6D42952FBFF0D298E2B53ADF96E70C986F * ___Maps_8;
	// SA.iOS.XCode.ISD_CapabilitySettings/Capability SA.iOS.XCode.ISD_CapabilitySettings::PersonalVPN
	Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * ___PersonalVPN_9;
	// SA.iOS.XCode.ISD_CapabilitySettings/BackgroundModesCapability SA.iOS.XCode.ISD_CapabilitySettings::BackgroundModes
	BackgroundModesCapability_tEC48C548936457ED233CD3BACE3DA008CDCEB6D2 * ___BackgroundModes_10;
	// SA.iOS.XCode.ISD_CapabilitySettings/Capability SA.iOS.XCode.ISD_CapabilitySettings::InterAppAudio
	Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * ___InterAppAudio_11;
	// SA.iOS.XCode.ISD_CapabilitySettings/KeychainSharingCapability SA.iOS.XCode.ISD_CapabilitySettings::KeychainSharing
	KeychainSharingCapability_t81BC5A01F4AD5A9D00BA956731CF3BC636D5FDE3 * ___KeychainSharing_12;
	// SA.iOS.XCode.ISD_CapabilitySettings/AssociatedDomainsCapability SA.iOS.XCode.ISD_CapabilitySettings::AssociatedDomains
	AssociatedDomainsCapability_t693B11E62E17C6609C3F79C3A2E63779570FFB27 * ___AssociatedDomains_13;
	// SA.iOS.XCode.ISD_CapabilitySettings/AppGroupsCapability SA.iOS.XCode.ISD_CapabilitySettings::AppGroups
	AppGroupsCapability_tD9E42DF113B62E0A6438CC48C156C21D21C0B7BE * ___AppGroups_14;
	// SA.iOS.XCode.ISD_CapabilitySettings/Capability SA.iOS.XCode.ISD_CapabilitySettings::DataProtection
	Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * ___DataProtection_15;
	// SA.iOS.XCode.ISD_CapabilitySettings/Capability SA.iOS.XCode.ISD_CapabilitySettings::HomeKit
	Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * ___HomeKit_16;
	// SA.iOS.XCode.ISD_CapabilitySettings/Capability SA.iOS.XCode.ISD_CapabilitySettings::HealthKit
	Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * ___HealthKit_17;
	// SA.iOS.XCode.ISD_CapabilitySettings/Capability SA.iOS.XCode.ISD_CapabilitySettings::WirelessAccessoryConfiguration
	Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * ___WirelessAccessoryConfiguration_18;

public:
	inline static int32_t get_offset_of_iCloud_0() { return static_cast<int32_t>(offsetof(ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494, ___iCloud_0)); }
	inline iCloudCapability_t623E461BD2CEC236034D4DF6E94ED7065A9758EC * get_iCloud_0() const { return ___iCloud_0; }
	inline iCloudCapability_t623E461BD2CEC236034D4DF6E94ED7065A9758EC ** get_address_of_iCloud_0() { return &___iCloud_0; }
	inline void set_iCloud_0(iCloudCapability_t623E461BD2CEC236034D4DF6E94ED7065A9758EC * value)
	{
		___iCloud_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iCloud_0), (void*)value);
	}

	inline static int32_t get_offset_of_PushNotifications_1() { return static_cast<int32_t>(offsetof(ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494, ___PushNotifications_1)); }
	inline PushNotificationsCapability_tA3F0ED1F949FCD420D665B366053B9EA3B8A9B09 * get_PushNotifications_1() const { return ___PushNotifications_1; }
	inline PushNotificationsCapability_tA3F0ED1F949FCD420D665B366053B9EA3B8A9B09 ** get_address_of_PushNotifications_1() { return &___PushNotifications_1; }
	inline void set_PushNotifications_1(PushNotificationsCapability_tA3F0ED1F949FCD420D665B366053B9EA3B8A9B09 * value)
	{
		___PushNotifications_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PushNotifications_1), (void*)value);
	}

	inline static int32_t get_offset_of_GameCenter_2() { return static_cast<int32_t>(offsetof(ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494, ___GameCenter_2)); }
	inline Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * get_GameCenter_2() const { return ___GameCenter_2; }
	inline Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 ** get_address_of_GameCenter_2() { return &___GameCenter_2; }
	inline void set_GameCenter_2(Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * value)
	{
		___GameCenter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameCenter_2), (void*)value);
	}

	inline static int32_t get_offset_of_SignInWithApple_3() { return static_cast<int32_t>(offsetof(ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494, ___SignInWithApple_3)); }
	inline Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * get_SignInWithApple_3() const { return ___SignInWithApple_3; }
	inline Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 ** get_address_of_SignInWithApple_3() { return &___SignInWithApple_3; }
	inline void set_SignInWithApple_3(Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * value)
	{
		___SignInWithApple_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SignInWithApple_3), (void*)value);
	}

	inline static int32_t get_offset_of_Wallet_4() { return static_cast<int32_t>(offsetof(ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494, ___Wallet_4)); }
	inline WalletCapability_t2A652861CD399823A3527B05AD810692827091DC * get_Wallet_4() const { return ___Wallet_4; }
	inline WalletCapability_t2A652861CD399823A3527B05AD810692827091DC ** get_address_of_Wallet_4() { return &___Wallet_4; }
	inline void set_Wallet_4(WalletCapability_t2A652861CD399823A3527B05AD810692827091DC * value)
	{
		___Wallet_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Wallet_4), (void*)value);
	}

	inline static int32_t get_offset_of_Siri_5() { return static_cast<int32_t>(offsetof(ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494, ___Siri_5)); }
	inline Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * get_Siri_5() const { return ___Siri_5; }
	inline Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 ** get_address_of_Siri_5() { return &___Siri_5; }
	inline void set_Siri_5(Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * value)
	{
		___Siri_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Siri_5), (void*)value);
	}

	inline static int32_t get_offset_of_ApplePay_6() { return static_cast<int32_t>(offsetof(ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494, ___ApplePay_6)); }
	inline ApplePayCapability_t8006036C3FABF39E040353EC648A79DA790CEB03 * get_ApplePay_6() const { return ___ApplePay_6; }
	inline ApplePayCapability_t8006036C3FABF39E040353EC648A79DA790CEB03 ** get_address_of_ApplePay_6() { return &___ApplePay_6; }
	inline void set_ApplePay_6(ApplePayCapability_t8006036C3FABF39E040353EC648A79DA790CEB03 * value)
	{
		___ApplePay_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ApplePay_6), (void*)value);
	}

	inline static int32_t get_offset_of_InAppPurchase_7() { return static_cast<int32_t>(offsetof(ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494, ___InAppPurchase_7)); }
	inline Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * get_InAppPurchase_7() const { return ___InAppPurchase_7; }
	inline Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 ** get_address_of_InAppPurchase_7() { return &___InAppPurchase_7; }
	inline void set_InAppPurchase_7(Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * value)
	{
		___InAppPurchase_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InAppPurchase_7), (void*)value);
	}

	inline static int32_t get_offset_of_Maps_8() { return static_cast<int32_t>(offsetof(ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494, ___Maps_8)); }
	inline MapsCapability_tB3B5DB6D42952FBFF0D298E2B53ADF96E70C986F * get_Maps_8() const { return ___Maps_8; }
	inline MapsCapability_tB3B5DB6D42952FBFF0D298E2B53ADF96E70C986F ** get_address_of_Maps_8() { return &___Maps_8; }
	inline void set_Maps_8(MapsCapability_tB3B5DB6D42952FBFF0D298E2B53ADF96E70C986F * value)
	{
		___Maps_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Maps_8), (void*)value);
	}

	inline static int32_t get_offset_of_PersonalVPN_9() { return static_cast<int32_t>(offsetof(ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494, ___PersonalVPN_9)); }
	inline Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * get_PersonalVPN_9() const { return ___PersonalVPN_9; }
	inline Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 ** get_address_of_PersonalVPN_9() { return &___PersonalVPN_9; }
	inline void set_PersonalVPN_9(Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * value)
	{
		___PersonalVPN_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PersonalVPN_9), (void*)value);
	}

	inline static int32_t get_offset_of_BackgroundModes_10() { return static_cast<int32_t>(offsetof(ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494, ___BackgroundModes_10)); }
	inline BackgroundModesCapability_tEC48C548936457ED233CD3BACE3DA008CDCEB6D2 * get_BackgroundModes_10() const { return ___BackgroundModes_10; }
	inline BackgroundModesCapability_tEC48C548936457ED233CD3BACE3DA008CDCEB6D2 ** get_address_of_BackgroundModes_10() { return &___BackgroundModes_10; }
	inline void set_BackgroundModes_10(BackgroundModesCapability_tEC48C548936457ED233CD3BACE3DA008CDCEB6D2 * value)
	{
		___BackgroundModes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BackgroundModes_10), (void*)value);
	}

	inline static int32_t get_offset_of_InterAppAudio_11() { return static_cast<int32_t>(offsetof(ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494, ___InterAppAudio_11)); }
	inline Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * get_InterAppAudio_11() const { return ___InterAppAudio_11; }
	inline Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 ** get_address_of_InterAppAudio_11() { return &___InterAppAudio_11; }
	inline void set_InterAppAudio_11(Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * value)
	{
		___InterAppAudio_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InterAppAudio_11), (void*)value);
	}

	inline static int32_t get_offset_of_KeychainSharing_12() { return static_cast<int32_t>(offsetof(ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494, ___KeychainSharing_12)); }
	inline KeychainSharingCapability_t81BC5A01F4AD5A9D00BA956731CF3BC636D5FDE3 * get_KeychainSharing_12() const { return ___KeychainSharing_12; }
	inline KeychainSharingCapability_t81BC5A01F4AD5A9D00BA956731CF3BC636D5FDE3 ** get_address_of_KeychainSharing_12() { return &___KeychainSharing_12; }
	inline void set_KeychainSharing_12(KeychainSharingCapability_t81BC5A01F4AD5A9D00BA956731CF3BC636D5FDE3 * value)
	{
		___KeychainSharing_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeychainSharing_12), (void*)value);
	}

	inline static int32_t get_offset_of_AssociatedDomains_13() { return static_cast<int32_t>(offsetof(ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494, ___AssociatedDomains_13)); }
	inline AssociatedDomainsCapability_t693B11E62E17C6609C3F79C3A2E63779570FFB27 * get_AssociatedDomains_13() const { return ___AssociatedDomains_13; }
	inline AssociatedDomainsCapability_t693B11E62E17C6609C3F79C3A2E63779570FFB27 ** get_address_of_AssociatedDomains_13() { return &___AssociatedDomains_13; }
	inline void set_AssociatedDomains_13(AssociatedDomainsCapability_t693B11E62E17C6609C3F79C3A2E63779570FFB27 * value)
	{
		___AssociatedDomains_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssociatedDomains_13), (void*)value);
	}

	inline static int32_t get_offset_of_AppGroups_14() { return static_cast<int32_t>(offsetof(ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494, ___AppGroups_14)); }
	inline AppGroupsCapability_tD9E42DF113B62E0A6438CC48C156C21D21C0B7BE * get_AppGroups_14() const { return ___AppGroups_14; }
	inline AppGroupsCapability_tD9E42DF113B62E0A6438CC48C156C21D21C0B7BE ** get_address_of_AppGroups_14() { return &___AppGroups_14; }
	inline void set_AppGroups_14(AppGroupsCapability_tD9E42DF113B62E0A6438CC48C156C21D21C0B7BE * value)
	{
		___AppGroups_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppGroups_14), (void*)value);
	}

	inline static int32_t get_offset_of_DataProtection_15() { return static_cast<int32_t>(offsetof(ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494, ___DataProtection_15)); }
	inline Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * get_DataProtection_15() const { return ___DataProtection_15; }
	inline Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 ** get_address_of_DataProtection_15() { return &___DataProtection_15; }
	inline void set_DataProtection_15(Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * value)
	{
		___DataProtection_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DataProtection_15), (void*)value);
	}

	inline static int32_t get_offset_of_HomeKit_16() { return static_cast<int32_t>(offsetof(ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494, ___HomeKit_16)); }
	inline Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * get_HomeKit_16() const { return ___HomeKit_16; }
	inline Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 ** get_address_of_HomeKit_16() { return &___HomeKit_16; }
	inline void set_HomeKit_16(Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * value)
	{
		___HomeKit_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HomeKit_16), (void*)value);
	}

	inline static int32_t get_offset_of_HealthKit_17() { return static_cast<int32_t>(offsetof(ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494, ___HealthKit_17)); }
	inline Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * get_HealthKit_17() const { return ___HealthKit_17; }
	inline Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 ** get_address_of_HealthKit_17() { return &___HealthKit_17; }
	inline void set_HealthKit_17(Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * value)
	{
		___HealthKit_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HealthKit_17), (void*)value);
	}

	inline static int32_t get_offset_of_WirelessAccessoryConfiguration_18() { return static_cast<int32_t>(offsetof(ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494, ___WirelessAccessoryConfiguration_18)); }
	inline Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * get_WirelessAccessoryConfiguration_18() const { return ___WirelessAccessoryConfiguration_18; }
	inline Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 ** get_address_of_WirelessAccessoryConfiguration_18() { return &___WirelessAccessoryConfiguration_18; }
	inline void set_WirelessAccessoryConfiguration_18(Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * value)
	{
		___WirelessAccessoryConfiguration_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WirelessAccessoryConfiguration_18), (void*)value);
	}
};


// SA.iOS.XCode.ISD_PlistKeyId
struct  ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE  : public RuntimeObject
{
public:
	// SA.iOS.XCode.ISD_PlistKey SA.iOS.XCode.ISD_PlistKeyId::VariableValue
	ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * ___VariableValue_0;
	// System.String SA.iOS.XCode.ISD_PlistKeyId::uniqueIdKey
	String_t* ___uniqueIdKey_1;

public:
	inline static int32_t get_offset_of_VariableValue_0() { return static_cast<int32_t>(offsetof(ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE, ___VariableValue_0)); }
	inline ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * get_VariableValue_0() const { return ___VariableValue_0; }
	inline ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC ** get_address_of_VariableValue_0() { return &___VariableValue_0; }
	inline void set_VariableValue_0(ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * value)
	{
		___VariableValue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VariableValue_0), (void*)value);
	}

	inline static int32_t get_offset_of_uniqueIdKey_1() { return static_cast<int32_t>(offsetof(ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE, ___uniqueIdKey_1)); }
	inline String_t* get_uniqueIdKey_1() const { return ___uniqueIdKey_1; }
	inline String_t** get_address_of_uniqueIdKey_1() { return &___uniqueIdKey_1; }
	inline void set_uniqueIdKey_1(String_t* value)
	{
		___uniqueIdKey_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uniqueIdKey_1), (void*)value);
	}
};


// SA.iOS.XCode.ISD_ShellScript
struct  ISD_ShellScript_t7BFF36378410648446102EECD99CFE87DBF751E0  : public RuntimeObject
{
public:
	// System.String SA.iOS.XCode.ISD_ShellScript::Name
	String_t* ___Name_0;
	// System.String SA.iOS.XCode.ISD_ShellScript::Shell
	String_t* ___Shell_1;
	// System.String SA.iOS.XCode.ISD_ShellScript::Script
	String_t* ___Script_2;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ISD_ShellScript_t7BFF36378410648446102EECD99CFE87DBF751E0, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Shell_1() { return static_cast<int32_t>(offsetof(ISD_ShellScript_t7BFF36378410648446102EECD99CFE87DBF751E0, ___Shell_1)); }
	inline String_t* get_Shell_1() const { return ___Shell_1; }
	inline String_t** get_address_of_Shell_1() { return &___Shell_1; }
	inline void set_Shell_1(String_t* value)
	{
		___Shell_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Shell_1), (void*)value);
	}

	inline static int32_t get_offset_of_Script_2() { return static_cast<int32_t>(offsetof(ISD_ShellScript_t7BFF36378410648446102EECD99CFE87DBF751E0, ___Script_2)); }
	inline String_t* get_Script_2() const { return ___Script_2; }
	inline String_t** get_address_of_Script_2() { return &___Script_2; }
	inline void set_Script_2(String_t* value)
	{
		___Script_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Script_2), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
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

// SA.iOS.XCode.ISD_CapabilitySettings/Capability
struct  Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8  : public RuntimeObject
{
public:
	// System.Boolean SA.iOS.XCode.ISD_CapabilitySettings/Capability::Enabled
	bool ___Enabled_0;

public:
	inline static int32_t get_offset_of_Enabled_0() { return static_cast<int32_t>(offsetof(Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8, ___Enabled_0)); }
	inline bool get_Enabled_0() const { return ___Enabled_0; }
	inline bool* get_address_of_Enabled_0() { return &___Enabled_0; }
	inline void set_Enabled_0(bool value)
	{
		___Enabled_0 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_AssetFile>
struct  Enumerator_tAA96ED9ADD4A3236942EDF90E25AEB9325A459CF 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t9511BE61AEA93705100DA49C8230927A022DE41D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tAA96ED9ADD4A3236942EDF90E25AEB9325A459CF, ___list_0)); }
	inline List_1_t9511BE61AEA93705100DA49C8230927A022DE41D * get_list_0() const { return ___list_0; }
	inline List_1_t9511BE61AEA93705100DA49C8230927A022DE41D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t9511BE61AEA93705100DA49C8230927A022DE41D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tAA96ED9ADD4A3236942EDF90E25AEB9325A459CF, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tAA96ED9ADD4A3236942EDF90E25AEB9325A459CF, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tAA96ED9ADD4A3236942EDF90E25AEB9325A459CF, ___current_3)); }
	inline ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * get_current_3() const { return ___current_3; }
	inline ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_BuildProperty>
struct  Enumerator_t145DB7D552ECAAA1C0D57CD34DC747DB06473501 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t47A12984B966945E7304EE778A8FB82169C91100 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t145DB7D552ECAAA1C0D57CD34DC747DB06473501, ___list_0)); }
	inline List_1_t47A12984B966945E7304EE778A8FB82169C91100 * get_list_0() const { return ___list_0; }
	inline List_1_t47A12984B966945E7304EE778A8FB82169C91100 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t47A12984B966945E7304EE778A8FB82169C91100 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t145DB7D552ECAAA1C0D57CD34DC747DB06473501, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t145DB7D552ECAAA1C0D57CD34DC747DB06473501, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t145DB7D552ECAAA1C0D57CD34DC747DB06473501, ___current_3)); }
	inline ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * get_current_3() const { return ___current_3; }
	inline ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_Flag>
struct  Enumerator_t009175C7178178AB6E98DED5881426F2322C7307 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t009175C7178178AB6E98DED5881426F2322C7307, ___list_0)); }
	inline List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E * get_list_0() const { return ___list_0; }
	inline List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t009175C7178178AB6E98DED5881426F2322C7307, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t009175C7178178AB6E98DED5881426F2322C7307, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t009175C7178178AB6E98DED5881426F2322C7307, ___current_3)); }
	inline ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 * get_current_3() const { return ___current_3; }
	inline ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_Framework>
struct  Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509, ___list_0)); }
	inline List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * get_list_0() const { return ___list_0; }
	inline List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509, ___current_3)); }
	inline ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * get_current_3() const { return ___current_3; }
	inline ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_Library>
struct  Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A, ___list_0)); }
	inline List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * get_list_0() const { return ___list_0; }
	inline List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A, ___current_3)); }
	inline ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * get_current_3() const { return ___current_3; }
	inline ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_PlistKey>
struct  Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079, ___list_0)); }
	inline List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * get_list_0() const { return ___list_0; }
	inline List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079, ___current_3)); }
	inline ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * get_current_3() const { return ___current_3; }
	inline ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_PlistKeyId>
struct  Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B, ___list_0)); }
	inline List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 * get_list_0() const { return ___list_0; }
	inline List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B, ___current_3)); }
	inline ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * get_current_3() const { return ___current_3; }
	inline ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * value)
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


// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::description
	String_t* ___description_1;

public:
	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_1), (void*)value);
	}
};

struct DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA_StaticFields, ___Default_0)); }
	inline DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * get_Default_0() const { return ___Default_0; }
	inline DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
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

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// SA.iOS.XCode.ISD_EmbedFramework
struct  ISD_EmbedFramework_t7BF386C600EFF993346BF39090B1B7A69773ACE0  : public ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8
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


// SA.iOS.XCode.ISD_CapabilitySettings/AppGroupsCapability
struct  AppGroupsCapability_tD9E42DF113B62E0A6438CC48C156C21D21C0B7BE  : public Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8
{
public:
	// System.Collections.Generic.List`1<System.String> SA.iOS.XCode.ISD_CapabilitySettings/AppGroupsCapability::groups
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___groups_1;

public:
	inline static int32_t get_offset_of_groups_1() { return static_cast<int32_t>(offsetof(AppGroupsCapability_tD9E42DF113B62E0A6438CC48C156C21D21C0B7BE, ___groups_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_groups_1() const { return ___groups_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_groups_1() { return &___groups_1; }
	inline void set_groups_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___groups_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groups_1), (void*)value);
	}
};


// SA.iOS.XCode.ISD_CapabilitySettings/ApplePayCapability
struct  ApplePayCapability_t8006036C3FABF39E040353EC648A79DA790CEB03  : public Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8
{
public:
	// System.Collections.Generic.List`1<System.String> SA.iOS.XCode.ISD_CapabilitySettings/ApplePayCapability::merchants
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___merchants_1;

public:
	inline static int32_t get_offset_of_merchants_1() { return static_cast<int32_t>(offsetof(ApplePayCapability_t8006036C3FABF39E040353EC648A79DA790CEB03, ___merchants_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_merchants_1() const { return ___merchants_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_merchants_1() { return &___merchants_1; }
	inline void set_merchants_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___merchants_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___merchants_1), (void*)value);
	}
};


// SA.iOS.XCode.ISD_CapabilitySettings/AssociatedDomainsCapability
struct  AssociatedDomainsCapability_t693B11E62E17C6609C3F79C3A2E63779570FFB27  : public Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8
{
public:
	// System.Collections.Generic.List`1<System.String> SA.iOS.XCode.ISD_CapabilitySettings/AssociatedDomainsCapability::domains
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___domains_1;

public:
	inline static int32_t get_offset_of_domains_1() { return static_cast<int32_t>(offsetof(AssociatedDomainsCapability_t693B11E62E17C6609C3F79C3A2E63779570FFB27, ___domains_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_domains_1() const { return ___domains_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_domains_1() { return &___domains_1; }
	inline void set_domains_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___domains_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___domains_1), (void*)value);
	}
};


// SA.iOS.XCode.ISD_CapabilitySettings/BackgroundModesCapability
struct  BackgroundModesCapability_tEC48C548936457ED233CD3BACE3DA008CDCEB6D2  : public Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8
{
public:
	// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_CapabilitySettings/BackgroundModesCapability/BackgroundModesOptions> SA.iOS.XCode.ISD_CapabilitySettings/BackgroundModesCapability::options
	List_1_t36B10EDDB61D61D7E69D51E2F3F59664B130AA56 * ___options_1;

public:
	inline static int32_t get_offset_of_options_1() { return static_cast<int32_t>(offsetof(BackgroundModesCapability_tEC48C548936457ED233CD3BACE3DA008CDCEB6D2, ___options_1)); }
	inline List_1_t36B10EDDB61D61D7E69D51E2F3F59664B130AA56 * get_options_1() const { return ___options_1; }
	inline List_1_t36B10EDDB61D61D7E69D51E2F3F59664B130AA56 ** get_address_of_options_1() { return &___options_1; }
	inline void set_options_1(List_1_t36B10EDDB61D61D7E69D51E2F3F59664B130AA56 * value)
	{
		___options_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___options_1), (void*)value);
	}
};


// SA.iOS.XCode.ISD_CapabilitySettings/KeychainSharingCapability
struct  KeychainSharingCapability_t81BC5A01F4AD5A9D00BA956731CF3BC636D5FDE3  : public Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8
{
public:
	// System.Collections.Generic.List`1<System.String> SA.iOS.XCode.ISD_CapabilitySettings/KeychainSharingCapability::accessGroups
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___accessGroups_1;

public:
	inline static int32_t get_offset_of_accessGroups_1() { return static_cast<int32_t>(offsetof(KeychainSharingCapability_t81BC5A01F4AD5A9D00BA956731CF3BC636D5FDE3, ___accessGroups_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_accessGroups_1() const { return ___accessGroups_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_accessGroups_1() { return &___accessGroups_1; }
	inline void set_accessGroups_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___accessGroups_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___accessGroups_1), (void*)value);
	}
};


// SA.iOS.XCode.ISD_CapabilitySettings/MapsCapability
struct  MapsCapability_tB3B5DB6D42952FBFF0D298E2B53ADF96E70C986F  : public Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8
{
public:
	// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_CapabilitySettings/MapsCapability/MapsOptions> SA.iOS.XCode.ISD_CapabilitySettings/MapsCapability::options
	List_1_tA782C52F01BC52A405B52D42803A3177410C6394 * ___options_1;

public:
	inline static int32_t get_offset_of_options_1() { return static_cast<int32_t>(offsetof(MapsCapability_tB3B5DB6D42952FBFF0D298E2B53ADF96E70C986F, ___options_1)); }
	inline List_1_tA782C52F01BC52A405B52D42803A3177410C6394 * get_options_1() const { return ___options_1; }
	inline List_1_tA782C52F01BC52A405B52D42803A3177410C6394 ** get_address_of_options_1() { return &___options_1; }
	inline void set_options_1(List_1_tA782C52F01BC52A405B52D42803A3177410C6394 * value)
	{
		___options_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___options_1), (void*)value);
	}
};


// SA.iOS.XCode.ISD_CapabilitySettings/PushNotificationsCapability
struct  PushNotificationsCapability_tA3F0ED1F949FCD420D665B366053B9EA3B8A9B09  : public Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8
{
public:
	// System.Boolean SA.iOS.XCode.ISD_CapabilitySettings/PushNotificationsCapability::development
	bool ___development_1;

public:
	inline static int32_t get_offset_of_development_1() { return static_cast<int32_t>(offsetof(PushNotificationsCapability_tA3F0ED1F949FCD420D665B366053B9EA3B8A9B09, ___development_1)); }
	inline bool get_development_1() const { return ___development_1; }
	inline bool* get_address_of_development_1() { return &___development_1; }
	inline void set_development_1(bool value)
	{
		___development_1 = value;
	}
};


// SA.iOS.XCode.ISD_CapabilitySettings/WalletCapability
struct  WalletCapability_t2A652861CD399823A3527B05AD810692827091DC  : public Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8
{
public:
	// System.Collections.Generic.List`1<System.String> SA.iOS.XCode.ISD_CapabilitySettings/WalletCapability::passSubset
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___passSubset_1;

public:
	inline static int32_t get_offset_of_passSubset_1() { return static_cast<int32_t>(offsetof(WalletCapability_t2A652861CD399823A3527B05AD810692827091DC, ___passSubset_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_passSubset_1() const { return ___passSubset_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_passSubset_1() { return &___passSubset_1; }
	inline void set_passSubset_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___passSubset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___passSubset_1), (void*)value);
	}
};


// SA.iOS.XCode.ISD_CapabilitySettings/iCloudCapability
struct  iCloudCapability_t623E461BD2CEC236034D4DF6E94ED7065A9758EC  : public Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8
{
public:
	// System.Boolean SA.iOS.XCode.ISD_CapabilitySettings/iCloudCapability::keyValueStorage
	bool ___keyValueStorage_1;
	// System.Boolean SA.iOS.XCode.ISD_CapabilitySettings/iCloudCapability::iCloudDocument
	bool ___iCloudDocument_2;
	// System.Collections.Generic.List`1<System.String> SA.iOS.XCode.ISD_CapabilitySettings/iCloudCapability::customContainers
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___customContainers_3;

public:
	inline static int32_t get_offset_of_keyValueStorage_1() { return static_cast<int32_t>(offsetof(iCloudCapability_t623E461BD2CEC236034D4DF6E94ED7065A9758EC, ___keyValueStorage_1)); }
	inline bool get_keyValueStorage_1() const { return ___keyValueStorage_1; }
	inline bool* get_address_of_keyValueStorage_1() { return &___keyValueStorage_1; }
	inline void set_keyValueStorage_1(bool value)
	{
		___keyValueStorage_1 = value;
	}

	inline static int32_t get_offset_of_iCloudDocument_2() { return static_cast<int32_t>(offsetof(iCloudCapability_t623E461BD2CEC236034D4DF6E94ED7065A9758EC, ___iCloudDocument_2)); }
	inline bool get_iCloudDocument_2() const { return ___iCloudDocument_2; }
	inline bool* get_address_of_iCloudDocument_2() { return &___iCloudDocument_2; }
	inline void set_iCloudDocument_2(bool value)
	{
		___iCloudDocument_2 = value;
	}

	inline static int32_t get_offset_of_customContainers_3() { return static_cast<int32_t>(offsetof(iCloudCapability_t623E461BD2CEC236034D4DF6E94ED7065A9758EC, ___customContainers_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_customContainers_3() const { return ___customContainers_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_customContainers_3() { return &___customContainers_3; }
	inline void set_customContainers_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___customContainers_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customContainers_3), (void*)value);
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
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


// SA.iOS.XCode.ISD_EntitlementsGenerationMode
struct  ISD_EntitlementsGenerationMode_t7E7DD0B816D8DDF29351C41743F04505A4CABE91 
{
public:
	// System.Int32 SA.iOS.XCode.ISD_EntitlementsGenerationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ISD_EntitlementsGenerationMode_t7E7DD0B816D8DDF29351C41743F04505A4CABE91, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SA.iOS.XCode.ISD_FlagType
struct  ISD_FlagType_tC2B9F015FA8B663CA4975AA086DD1FF15C6E85E2 
{
public:
	// System.Int32 SA.iOS.XCode.ISD_FlagType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ISD_FlagType_tC2B9F015FA8B663CA4975AA086DD1FF15C6E85E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SA.iOS.XCode.ISD_PlistKeyType
struct  ISD_PlistKeyType_t40722374D1603A0E78C691C4C2DE382839165789 
{
public:
	// System.Int32 SA.iOS.XCode.ISD_PlistKeyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ISD_PlistKeyType_t40722374D1603A0E78C691C4C2DE382839165789, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SA.iOS.XCode.ISD_iOSFramework
struct  ISD_iOSFramework_tB5D22C8FFBD69FD6511AC3464CD39A1F280C8A4B 
{
public:
	// System.Int32 SA.iOS.XCode.ISD_iOSFramework::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ISD_iOSFramework_tB5D22C8FFBD69FD6511AC3464CD39A1F280C8A4B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SA.iOS.XCode.ISD_iOSLibrary
struct  ISD_iOSLibrary_t1C5F1155F874ABBF397418090DF5406E1E3CD904 
{
public:
	// System.Int32 SA.iOS.XCode.ISD_iOSLibrary::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ISD_iOSLibrary_t1C5F1155F874ABBF397418090DF5406E1E3CD904, ___value___2)); }
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

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// SA.iOS.XCode.ISD_CapabilitySettings/BackgroundModesCapability/BackgroundModesOptions
struct  BackgroundModesOptions_tBFCA38D666410B0A9A9830577C15ABFC625AB4D0 
{
public:
	// System.Int32 SA.iOS.XCode.ISD_CapabilitySettings/BackgroundModesCapability/BackgroundModesOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BackgroundModesOptions_tBFCA38D666410B0A9A9830577C15ABFC625AB4D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SA.iOS.XCode.ISD_CapabilitySettings/MapsCapability/MapsOptions
struct  MapsOptions_t43C8D6E7EA4229CA1411853D8F44D074C95619CB 
{
public:
	// System.Int32 SA.iOS.XCode.ISD_CapabilitySettings/MapsCapability/MapsOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MapsOptions_t43C8D6E7EA4229CA1411853D8F44D074C95619CB, ___value___2)); }
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


// SA.iOS.XCode.ISD_Flag
struct  ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927  : public RuntimeObject
{
public:
	// System.String SA.iOS.XCode.ISD_Flag::Name
	String_t* ___Name_0;
	// SA.iOS.XCode.ISD_FlagType SA.iOS.XCode.ISD_Flag::Type
	int32_t ___Type_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}
};


// SA.iOS.XCode.ISD_Framework
struct  ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33  : public RuntimeObject
{
public:
	// System.Boolean SA.iOS.XCode.ISD_Framework::IsOptional
	bool ___IsOptional_0;
	// System.Boolean SA.iOS.XCode.ISD_Framework::IsEmbeded
	bool ___IsEmbeded_1;
	// SA.iOS.XCode.ISD_iOSFramework SA.iOS.XCode.ISD_Framework::Type
	int32_t ___Type_2;

public:
	inline static int32_t get_offset_of_IsOptional_0() { return static_cast<int32_t>(offsetof(ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33, ___IsOptional_0)); }
	inline bool get_IsOptional_0() const { return ___IsOptional_0; }
	inline bool* get_address_of_IsOptional_0() { return &___IsOptional_0; }
	inline void set_IsOptional_0(bool value)
	{
		___IsOptional_0 = value;
	}

	inline static int32_t get_offset_of_IsEmbeded_1() { return static_cast<int32_t>(offsetof(ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33, ___IsEmbeded_1)); }
	inline bool get_IsEmbeded_1() const { return ___IsEmbeded_1; }
	inline bool* get_address_of_IsEmbeded_1() { return &___IsEmbeded_1; }
	inline void set_IsEmbeded_1(bool value)
	{
		___IsEmbeded_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33, ___Type_2)); }
	inline int32_t get_Type_2() const { return ___Type_2; }
	inline int32_t* get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(int32_t value)
	{
		___Type_2 = value;
	}
};


// SA.iOS.XCode.ISD_Library
struct  ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8  : public RuntimeObject
{
public:
	// SA.iOS.XCode.ISD_iOSLibrary SA.iOS.XCode.ISD_Library::Type
	int32_t ___Type_0;
	// System.Boolean SA.iOS.XCode.ISD_Library::IsOptional
	bool ___IsOptional_1;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8, ___Type_0)); }
	inline int32_t get_Type_0() const { return ___Type_0; }
	inline int32_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int32_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_IsOptional_1() { return static_cast<int32_t>(offsetof(ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8, ___IsOptional_1)); }
	inline bool get_IsOptional_1() const { return ___IsOptional_1; }
	inline bool* get_address_of_IsOptional_1() { return &___IsOptional_1; }
	inline void set_IsOptional_1(bool value)
	{
		___IsOptional_1 = value;
	}
};


// SA.iOS.XCode.ISD_PlistKey
struct  ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC  : public RuntimeObject
{
public:
	// System.Boolean SA.iOS.XCode.ISD_PlistKey::IsOpen
	bool ___IsOpen_0;
	// System.Boolean SA.iOS.XCode.ISD_PlistKey::IsListOpen
	bool ___IsListOpen_1;
	// System.String SA.iOS.XCode.ISD_PlistKey::Name
	String_t* ___Name_2;
	// SA.iOS.XCode.ISD_PlistKeyType SA.iOS.XCode.ISD_PlistKey::Type
	int32_t ___Type_3;
	// System.String SA.iOS.XCode.ISD_PlistKey::StringValue
	String_t* ___StringValue_4;
	// System.Int32 SA.iOS.XCode.ISD_PlistKey::IntegerValue
	int32_t ___IntegerValue_5;
	// System.Single SA.iOS.XCode.ISD_PlistKey::FloatValue
	float ___FloatValue_6;
	// System.Boolean SA.iOS.XCode.ISD_PlistKey::BooleanValue
	bool ___BooleanValue_7;
	// System.Collections.Generic.List`1<System.String> SA.iOS.XCode.ISD_PlistKey::ChildrensIds
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___ChildrensIds_8;

public:
	inline static int32_t get_offset_of_IsOpen_0() { return static_cast<int32_t>(offsetof(ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC, ___IsOpen_0)); }
	inline bool get_IsOpen_0() const { return ___IsOpen_0; }
	inline bool* get_address_of_IsOpen_0() { return &___IsOpen_0; }
	inline void set_IsOpen_0(bool value)
	{
		___IsOpen_0 = value;
	}

	inline static int32_t get_offset_of_IsListOpen_1() { return static_cast<int32_t>(offsetof(ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC, ___IsListOpen_1)); }
	inline bool get_IsListOpen_1() const { return ___IsListOpen_1; }
	inline bool* get_address_of_IsListOpen_1() { return &___IsListOpen_1; }
	inline void set_IsListOpen_1(bool value)
	{
		___IsListOpen_1 = value;
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_Type_3() { return static_cast<int32_t>(offsetof(ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC, ___Type_3)); }
	inline int32_t get_Type_3() const { return ___Type_3; }
	inline int32_t* get_address_of_Type_3() { return &___Type_3; }
	inline void set_Type_3(int32_t value)
	{
		___Type_3 = value;
	}

	inline static int32_t get_offset_of_StringValue_4() { return static_cast<int32_t>(offsetof(ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC, ___StringValue_4)); }
	inline String_t* get_StringValue_4() const { return ___StringValue_4; }
	inline String_t** get_address_of_StringValue_4() { return &___StringValue_4; }
	inline void set_StringValue_4(String_t* value)
	{
		___StringValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringValue_4), (void*)value);
	}

	inline static int32_t get_offset_of_IntegerValue_5() { return static_cast<int32_t>(offsetof(ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC, ___IntegerValue_5)); }
	inline int32_t get_IntegerValue_5() const { return ___IntegerValue_5; }
	inline int32_t* get_address_of_IntegerValue_5() { return &___IntegerValue_5; }
	inline void set_IntegerValue_5(int32_t value)
	{
		___IntegerValue_5 = value;
	}

	inline static int32_t get_offset_of_FloatValue_6() { return static_cast<int32_t>(offsetof(ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC, ___FloatValue_6)); }
	inline float get_FloatValue_6() const { return ___FloatValue_6; }
	inline float* get_address_of_FloatValue_6() { return &___FloatValue_6; }
	inline void set_FloatValue_6(float value)
	{
		___FloatValue_6 = value;
	}

	inline static int32_t get_offset_of_BooleanValue_7() { return static_cast<int32_t>(offsetof(ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC, ___BooleanValue_7)); }
	inline bool get_BooleanValue_7() const { return ___BooleanValue_7; }
	inline bool* get_address_of_BooleanValue_7() { return &___BooleanValue_7; }
	inline void set_BooleanValue_7(bool value)
	{
		___BooleanValue_7 = value;
	}

	inline static int32_t get_offset_of_ChildrensIds_8() { return static_cast<int32_t>(offsetof(ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC, ___ChildrensIds_8)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_ChildrensIds_8() const { return ___ChildrensIds_8; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_ChildrensIds_8() { return &___ChildrensIds_8; }
	inline void set_ChildrensIds_8(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___ChildrensIds_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChildrensIds_8), (void*)value);
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


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
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


// SA.Foundation.Patterns.SA_ScriptableSingleton`1<SA.iOS.XCode.ISD_Settings>
struct  SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C  : public SA_ScriptableSettings_t713FB6ED1BCD9406BD9C6B0417FF99470A1FAA06
{
public:

public:
};

struct SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_StaticFields
{
public:
	// T SA.Foundation.Patterns.SA_ScriptableSingleton`1::s_instance
	ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * ___s_instance_7;

public:
	inline static int32_t get_offset_of_s_instance_7() { return static_cast<int32_t>(offsetof(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_StaticFields, ___s_instance_7)); }
	inline ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * get_s_instance_7() const { return ___s_instance_7; }
	inline ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF ** get_address_of_s_instance_7() { return &___s_instance_7; }
	inline void set_s_instance_7(ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * value)
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


// SA.iOS.XCode.ISD_FrameworkHandler
struct  ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_StaticFields
{
public:
	// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Framework> SA.iOS.XCode.ISD_FrameworkHandler::_DefaultFrameworks
	List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * ____DefaultFrameworks_4;

public:
	inline static int32_t get_offset_of__DefaultFrameworks_4() { return static_cast<int32_t>(offsetof(ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_StaticFields, ____DefaultFrameworks_4)); }
	inline List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * get__DefaultFrameworks_4() const { return ____DefaultFrameworks_4; }
	inline List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC ** get_address_of__DefaultFrameworks_4() { return &____DefaultFrameworks_4; }
	inline void set__DefaultFrameworks_4(List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * value)
	{
		____DefaultFrameworks_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____DefaultFrameworks_4), (void*)value);
	}
};


// SA.iOS.XCode.ISD_LibHandler
struct  ISD_LibHandler_t22BB005239E6F37A9B2ECAE7EE903645A2F94497  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// SA.iOS.XCode.ISD_Settings
struct  ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF  : public SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C
{
public:
	// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Framework> SA.iOS.XCode.ISD_Settings::Frameworks
	List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * ___Frameworks_12;
	// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_EmbedFramework> SA.iOS.XCode.ISD_Settings::EmbededFrameworks
	List_1_t0F62678D2CE34F21E5785211C71C04056EA9E405 * ___EmbededFrameworks_13;
	// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Library> SA.iOS.XCode.ISD_Settings::Libraries
	List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * ___Libraries_14;
	// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Flag> SA.iOS.XCode.ISD_Settings::Flags
	List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E * ___Flags_15;
	// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_PlistKey> SA.iOS.XCode.ISD_Settings::PlistVariables
	List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * ___PlistVariables_16;
	// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_PlistKeyId> SA.iOS.XCode.ISD_Settings::VariableDictionary
	List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 * ___VariableDictionary_17;
	// System.Collections.Generic.List`1<SA.Foundation.Localization.SA_ISOLanguage> SA.iOS.XCode.ISD_Settings::Languages
	List_1_t0E869E1E4D59E7247073977786D71763115C251C * ___Languages_18;
	// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_ShellScript> SA.iOS.XCode.ISD_Settings::ShellScripts
	List_1_tF2AAE2EA9B0B2F3C3A81DD7001BBBD10CD72E00A * ___ShellScripts_19;
	// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_BuildProperty> SA.iOS.XCode.ISD_Settings::m_buildProperties
	List_1_t47A12984B966945E7304EE778A8FB82169C91100 * ___m_buildProperties_20;
	// SA.iOS.XCode.ISD_CapabilitySettings SA.iOS.XCode.ISD_Settings::Capability
	ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494 * ___Capability_22;
	// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_AssetFile> SA.iOS.XCode.ISD_Settings::Files
	List_1_t9511BE61AEA93705100DA49C8230927A022DE41D * ___Files_23;
	// SA.iOS.XCode.ISD_EntitlementsGenerationMode SA.iOS.XCode.ISD_Settings::EntitlementsMode
	int32_t ___EntitlementsMode_24;
	// UnityEngine.Object SA.iOS.XCode.ISD_Settings::EntitlementsFile
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___EntitlementsFile_25;

public:
	inline static int32_t get_offset_of_Frameworks_12() { return static_cast<int32_t>(offsetof(ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF, ___Frameworks_12)); }
	inline List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * get_Frameworks_12() const { return ___Frameworks_12; }
	inline List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC ** get_address_of_Frameworks_12() { return &___Frameworks_12; }
	inline void set_Frameworks_12(List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * value)
	{
		___Frameworks_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Frameworks_12), (void*)value);
	}

	inline static int32_t get_offset_of_EmbededFrameworks_13() { return static_cast<int32_t>(offsetof(ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF, ___EmbededFrameworks_13)); }
	inline List_1_t0F62678D2CE34F21E5785211C71C04056EA9E405 * get_EmbededFrameworks_13() const { return ___EmbededFrameworks_13; }
	inline List_1_t0F62678D2CE34F21E5785211C71C04056EA9E405 ** get_address_of_EmbededFrameworks_13() { return &___EmbededFrameworks_13; }
	inline void set_EmbededFrameworks_13(List_1_t0F62678D2CE34F21E5785211C71C04056EA9E405 * value)
	{
		___EmbededFrameworks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmbededFrameworks_13), (void*)value);
	}

	inline static int32_t get_offset_of_Libraries_14() { return static_cast<int32_t>(offsetof(ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF, ___Libraries_14)); }
	inline List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * get_Libraries_14() const { return ___Libraries_14; }
	inline List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 ** get_address_of_Libraries_14() { return &___Libraries_14; }
	inline void set_Libraries_14(List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * value)
	{
		___Libraries_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Libraries_14), (void*)value);
	}

	inline static int32_t get_offset_of_Flags_15() { return static_cast<int32_t>(offsetof(ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF, ___Flags_15)); }
	inline List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E * get_Flags_15() const { return ___Flags_15; }
	inline List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E ** get_address_of_Flags_15() { return &___Flags_15; }
	inline void set_Flags_15(List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E * value)
	{
		___Flags_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Flags_15), (void*)value);
	}

	inline static int32_t get_offset_of_PlistVariables_16() { return static_cast<int32_t>(offsetof(ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF, ___PlistVariables_16)); }
	inline List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * get_PlistVariables_16() const { return ___PlistVariables_16; }
	inline List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD ** get_address_of_PlistVariables_16() { return &___PlistVariables_16; }
	inline void set_PlistVariables_16(List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * value)
	{
		___PlistVariables_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlistVariables_16), (void*)value);
	}

	inline static int32_t get_offset_of_VariableDictionary_17() { return static_cast<int32_t>(offsetof(ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF, ___VariableDictionary_17)); }
	inline List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 * get_VariableDictionary_17() const { return ___VariableDictionary_17; }
	inline List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 ** get_address_of_VariableDictionary_17() { return &___VariableDictionary_17; }
	inline void set_VariableDictionary_17(List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 * value)
	{
		___VariableDictionary_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VariableDictionary_17), (void*)value);
	}

	inline static int32_t get_offset_of_Languages_18() { return static_cast<int32_t>(offsetof(ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF, ___Languages_18)); }
	inline List_1_t0E869E1E4D59E7247073977786D71763115C251C * get_Languages_18() const { return ___Languages_18; }
	inline List_1_t0E869E1E4D59E7247073977786D71763115C251C ** get_address_of_Languages_18() { return &___Languages_18; }
	inline void set_Languages_18(List_1_t0E869E1E4D59E7247073977786D71763115C251C * value)
	{
		___Languages_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Languages_18), (void*)value);
	}

	inline static int32_t get_offset_of_ShellScripts_19() { return static_cast<int32_t>(offsetof(ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF, ___ShellScripts_19)); }
	inline List_1_tF2AAE2EA9B0B2F3C3A81DD7001BBBD10CD72E00A * get_ShellScripts_19() const { return ___ShellScripts_19; }
	inline List_1_tF2AAE2EA9B0B2F3C3A81DD7001BBBD10CD72E00A ** get_address_of_ShellScripts_19() { return &___ShellScripts_19; }
	inline void set_ShellScripts_19(List_1_tF2AAE2EA9B0B2F3C3A81DD7001BBBD10CD72E00A * value)
	{
		___ShellScripts_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShellScripts_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_buildProperties_20() { return static_cast<int32_t>(offsetof(ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF, ___m_buildProperties_20)); }
	inline List_1_t47A12984B966945E7304EE778A8FB82169C91100 * get_m_buildProperties_20() const { return ___m_buildProperties_20; }
	inline List_1_t47A12984B966945E7304EE778A8FB82169C91100 ** get_address_of_m_buildProperties_20() { return &___m_buildProperties_20; }
	inline void set_m_buildProperties_20(List_1_t47A12984B966945E7304EE778A8FB82169C91100 * value)
	{
		___m_buildProperties_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_buildProperties_20), (void*)value);
	}

	inline static int32_t get_offset_of_Capability_22() { return static_cast<int32_t>(offsetof(ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF, ___Capability_22)); }
	inline ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494 * get_Capability_22() const { return ___Capability_22; }
	inline ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494 ** get_address_of_Capability_22() { return &___Capability_22; }
	inline void set_Capability_22(ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494 * value)
	{
		___Capability_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Capability_22), (void*)value);
	}

	inline static int32_t get_offset_of_Files_23() { return static_cast<int32_t>(offsetof(ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF, ___Files_23)); }
	inline List_1_t9511BE61AEA93705100DA49C8230927A022DE41D * get_Files_23() const { return ___Files_23; }
	inline List_1_t9511BE61AEA93705100DA49C8230927A022DE41D ** get_address_of_Files_23() { return &___Files_23; }
	inline void set_Files_23(List_1_t9511BE61AEA93705100DA49C8230927A022DE41D * value)
	{
		___Files_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Files_23), (void*)value);
	}

	inline static int32_t get_offset_of_EntitlementsMode_24() { return static_cast<int32_t>(offsetof(ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF, ___EntitlementsMode_24)); }
	inline int32_t get_EntitlementsMode_24() const { return ___EntitlementsMode_24; }
	inline int32_t* get_address_of_EntitlementsMode_24() { return &___EntitlementsMode_24; }
	inline void set_EntitlementsMode_24(int32_t value)
	{
		___EntitlementsMode_24 = value;
	}

	inline static int32_t get_offset_of_EntitlementsFile_25() { return static_cast<int32_t>(offsetof(ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF, ___EntitlementsFile_25)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_EntitlementsFile_25() const { return ___EntitlementsFile_25; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_EntitlementsFile_25() { return &___EntitlementsFile_25; }
	inline void set_EntitlementsFile_25(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___EntitlementsFile_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EntitlementsFile_25), (void*)value);
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
// System.ComponentModel.DescriptionAttribute[]
struct DescriptionAttributeU5BU5D_tAF6E91F4743A9147A5794EE096DCDFD27B30B84F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * m_Items[1];

public:
	inline DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// !0 SA.Foundation.Patterns.SA_ScriptableSingleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SA_ScriptableSingleton_1_get_Instance_m181EBB414BB26842A610166FD4E572326E2D186E_gshared (const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 StansAssets.Foundation.EnumUtility::ParseEnum<System.Int32Enum>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumUtility_ParseEnum_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m074470AC66BA66A0399CF97EBCE9F084FB835251_gshared (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void SA.Foundation.Patterns.SA_ScriptableSingleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SA_ScriptableSingleton_1__ctor_m7ED75FFB0630AD8C9B877BE8765DB485A86418A4_gshared (SA_ScriptableSingleton_1_t53D5A04A6AFE2F45D8D2A3553EDBA5F7914A6F5E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF1D0377D81949B2ADB6104D9994F7CEE1A1E5040_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method);

// System.Void SA.iOS.XCode.ISD_BuildProperty::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_BuildProperty__ctor_mF252D01853011679E079B8971CAB33B1F0C55DEB (ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.Void SA.iOS.XCode.ISD_API::SetBuildProperty(SA.iOS.XCode.ISD_BuildProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_API_SetBuildProperty_m91A9F9E5AC49FC18B4EE9991A4770864F1FEAD32 (ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * ___property0, const RuntimeMethod* method);
// !0 SA.Foundation.Patterns.SA_ScriptableSingleton`1<SA.iOS.XCode.ISD_Settings>::get_Instance()
inline ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF (const RuntimeMethod* method)
{
	return ((  ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * (*) (const RuntimeMethod*))SA_ScriptableSingleton_1_get_Instance_m181EBB414BB26842A610166FD4E572326E2D186E_gshared)(method);
}
// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_BuildProperty> SA.iOS.XCode.ISD_Settings::get_BuildProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t47A12984B966945E7304EE778A8FB82169C91100 * ISD_Settings_get_BuildProperties_m574B07E71B9CFD9A060F1D58E7B781C1780AA8DE (ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<SA.iOS.XCode.ISD_BuildProperty>::GetEnumerator()
inline Enumerator_t145DB7D552ECAAA1C0D57CD34DC747DB06473501  List_1_GetEnumerator_mDE9818098C1E91FCF8CA0CDCEB76BDC6679BA308 (List_1_t47A12984B966945E7304EE778A8FB82169C91100 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t145DB7D552ECAAA1C0D57CD34DC747DB06473501  (*) (List_1_t47A12984B966945E7304EE778A8FB82169C91100 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_BuildProperty>::get_Current()
inline ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * Enumerator_get_Current_m8862D97DCFC1C05AA111F2D3D088CB7B21E39BE3_inline (Enumerator_t145DB7D552ECAAA1C0D57CD34DC747DB06473501 * __this, const RuntimeMethod* method)
{
	return ((  ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * (*) (Enumerator_t145DB7D552ECAAA1C0D57CD34DC747DB06473501 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.String SA.iOS.XCode.ISD_BuildProperty::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ISD_BuildProperty_get_Name_m530C68A0A0BC6B78DE7861E6D569C0318A1F7800_inline (ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<SA.iOS.XCode.ISD_BuildProperty>::Remove(!0)
inline bool List_1_Remove_m2F77D73B7864C17332B95E13D138DBF2F5526AF3 (List_1_t47A12984B966945E7304EE778A8FB82169C91100 * __this, ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t47A12984B966945E7304EE778A8FB82169C91100 *, ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_BuildProperty>::MoveNext()
inline bool Enumerator_MoveNext_m36FF018DBC00E12586A26A1FE93ADCF6AD3B64F4 (Enumerator_t145DB7D552ECAAA1C0D57CD34DC747DB06473501 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t145DB7D552ECAAA1C0D57CD34DC747DB06473501 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_BuildProperty>::Dispose()
inline void Enumerator_Dispose_mD63DC05063EAF9C72529A72FDB846946E329186D (Enumerator_t145DB7D552ECAAA1C0D57CD34DC747DB06473501 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t145DB7D552ECAAA1C0D57CD34DC747DB06473501 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SA.iOS.XCode.ISD_BuildProperty>::Add(!0)
inline void List_1_Add_m3344388DD1FE1FD92F4413F258715C4C2DBA2BEF (List_1_t47A12984B966945E7304EE778A8FB82169C91100 * __this, ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t47A12984B966945E7304EE778A8FB82169C91100 *, ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void SA.iOS.XCode.ISD_API::RemoveBuildProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_API_RemoveBuildProperty_m20490B6058A2160F9BBA0F130F131803979B01BA (String_t* ___name0, const RuntimeMethod* method);
// SA.iOS.XCode.ISD_PlistKey SA.iOS.XCode.ISD_API::GetInfoPlistKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * ISD_API_GetInfoPlistKey_m49749F18193E4FAF4A3922ACABFDFCB8C8DA9794 (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<SA.iOS.XCode.ISD_PlistKey>::Remove(!0)
inline bool List_1_Remove_mB20ADAB4D82D0190F36153414F063BF5D64BABFC (List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * __this, ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD *, ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<SA.iOS.XCode.ISD_PlistKey>::Add(!0)
inline void List_1_Add_m4A69F19BB193BE8DCFC3D164BD771BDA8DEB1950 (List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * __this, ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD *, ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<SA.iOS.XCode.ISD_PlistKey>::GetEnumerator()
inline Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079  List_1_GetEnumerator_m61E0EE51B4C8119A2D1957039180AAFD7C4AA6DD (List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079  (*) (List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_PlistKey>::get_Current()
inline ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * Enumerator_get_Current_m045817AE13DC4B574A64CDE27EFA6482872DC781_inline (Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079 * __this, const RuntimeMethod* method)
{
	return ((  ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * (*) (Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_PlistKey>::MoveNext()
inline bool Enumerator_MoveNext_m746AA0A0C30015E425278C681F6DF79149236637 (Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_PlistKey>::Dispose()
inline void Enumerator_Dispose_m1E799A697C36F18B32398BF590D4B8A376E1CB41 (Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void SA.iOS.XCode.ISD_API::RemoveInfoPlistKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_API_RemoveInfoPlistKey_m4378C0F8C86B9AD4FA17E024CB97980C7D42C039 (String_t* ___name0, const RuntimeMethod* method);
// System.Void SA.iOS.XCode.ISD_Settings::RemoveVariable(SA.iOS.XCode.ISD_PlistKey,System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_Settings_RemoveVariable_m93F866EEFFBF1A631CA4568195091CD354E5DCB3 (ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * __this, ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * ___v0, RuntimeObject* ___ListWithThisVariable1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Flag>::GetEnumerator()
inline Enumerator_t009175C7178178AB6E98DED5881426F2322C7307  List_1_GetEnumerator_m12BD500EB547991D76DE40B87CF55EC476F4D7CC (List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t009175C7178178AB6E98DED5881426F2322C7307  (*) (List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_Flag>::get_Current()
inline ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 * Enumerator_get_Current_mCF5305BFEC169FB4593B64DD6728586C9068198E_inline (Enumerator_t009175C7178178AB6E98DED5881426F2322C7307 * __this, const RuntimeMethod* method)
{
	return ((  ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 * (*) (Enumerator_t009175C7178178AB6E98DED5881426F2322C7307 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_Flag>::MoveNext()
inline bool Enumerator_MoveNext_mB73179B10A46C06813A3C51C333D2F444F4809AE (Enumerator_t009175C7178178AB6E98DED5881426F2322C7307 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t009175C7178178AB6E98DED5881426F2322C7307 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_Flag>::Dispose()
inline void Enumerator_Dispose_m07CC916E7AF35B1CE3718405F5000B52E2C800DE (Enumerator_t009175C7178178AB6E98DED5881426F2322C7307 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t009175C7178178AB6E98DED5881426F2322C7307 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void SA.iOS.XCode.ISD_Flag::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_Flag__ctor_m09F11A35F14C8E04B9869BE6B301C6D7E849F765 (ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Flag>::Add(!0)
inline void List_1_Add_m4D8D81DDC48F45BE8C7A8DD0AF0A5A0F48821D98 (List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E * __this, ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E *, ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Flag>::Remove(!0)
inline bool List_1_Remove_mF92A6C63668A1088AF5451E79AC404608A5009AB (List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E * __this, ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E *, ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void SA.iOS.XCode.ISD_Framework::.ctor(SA.iOS.XCode.ISD_iOSFramework,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_Framework__ctor_mE9A970533521AF6DE42FE3C26CBD4E3A872E63A0 (ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * __this, int32_t ___type0, bool ___optional1, const RuntimeMethod* method);
// System.Void SA.iOS.XCode.ISD_API::AddFramework(SA.iOS.XCode.ISD_Framework)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_API_AddFramework_m7A103F1DE716BCDD8FA7A8F4B1BA9A85587443A6 (ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * ___framework0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Framework>::GetEnumerator()
inline Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509  List_1_GetEnumerator_m5F818B409F00C6EA664FB9B864A1C3C8369C83C7 (List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509  (*) (List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_Framework>::get_Current()
inline ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * Enumerator_get_Current_mAF883A195EBF34B6BFD37F9EDC4378A1D3D3E673_inline (Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509 * __this, const RuntimeMethod* method)
{
	return ((  ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * (*) (Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Framework>::Remove(!0)
inline bool List_1_Remove_m1B398F0099068E5152FD59EDADCD434EAE277E13 (List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * __this, ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC *, ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_Framework>::MoveNext()
inline bool Enumerator_MoveNext_m7A4467D8767DE31A96E02F234DC94BF1B7C4B84B (Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_Framework>::Dispose()
inline void Enumerator_Dispose_mE970889E8AFFAF3D1BE8106F7B5E40DB16CC9D84 (Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Framework>::Add(!0)
inline void List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488 (List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * __this, ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC *, ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void SA.iOS.XCode.ISD_Library::.ctor(SA.iOS.XCode.ISD_iOSLibrary,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_Library__ctor_mCACF8A0CB254EDF6FBBCF5A4F8222758BADBF13F (ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * __this, int32_t ___lib0, bool ___optional1, const RuntimeMethod* method);
// System.Void SA.iOS.XCode.ISD_API::AddLibrary(SA.iOS.XCode.ISD_Library)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_API_AddLibrary_m5BEFB030D1E30D164274B4AC19CE5C9FD62B2B27 (ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * ___library0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Library>::GetEnumerator()
inline Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A  List_1_GetEnumerator_m814F4B14E6D0F015A8D3350C2A5EA23A190E4FCF (List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A  (*) (List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_Library>::get_Current()
inline ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * Enumerator_get_Current_m77BFB9F5DD0316790B9819CABDAF0C6E9182A3F9_inline (Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A * __this, const RuntimeMethod* method)
{
	return ((  ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * (*) (Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Library>::Remove(!0)
inline bool List_1_Remove_m684FA1158260011AB6320B5614F7C7732A5401FE (List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * __this, ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 *, ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_Library>::MoveNext()
inline bool Enumerator_MoveNext_mC5A8248129604DAFB2E325BB372AF0B86B0394B7 (Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_Library>::Dispose()
inline void Enumerator_Dispose_m71F58DCD9FC7E613D8328ADBC7CF0151F9E9449F (Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Library>::Add(!0)
inline void List_1_Add_m04B351E6612EAB1DFE9BF8BF35718F3D148E48B1 (List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * __this, ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 *, ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<SA.iOS.XCode.ISD_AssetFile>::GetEnumerator()
inline Enumerator_tAA96ED9ADD4A3236942EDF90E25AEB9325A459CF  List_1_GetEnumerator_m93D332F097ED9A125378B8E0EE00713FEED9D32D (List_1_t9511BE61AEA93705100DA49C8230927A022DE41D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAA96ED9ADD4A3236942EDF90E25AEB9325A459CF  (*) (List_1_t9511BE61AEA93705100DA49C8230927A022DE41D *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_AssetFile>::get_Current()
inline ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * Enumerator_get_Current_m12ED87C144D46A37CD32E78BAE645456C46B468D_inline (Enumerator_tAA96ED9ADD4A3236942EDF90E25AEB9325A459CF * __this, const RuntimeMethod* method)
{
	return ((  ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * (*) (Enumerator_tAA96ED9ADD4A3236942EDF90E25AEB9325A459CF *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_AssetFile>::MoveNext()
inline bool Enumerator_MoveNext_m7F4085B53D03998236876EFB300595BC15692141 (Enumerator_tAA96ED9ADD4A3236942EDF90E25AEB9325A459CF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAA96ED9ADD4A3236942EDF90E25AEB9325A459CF *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_AssetFile>::Dispose()
inline void Enumerator_Dispose_m2EB0FD67A9375FBEAA386C5A624EA294F22670C1 (Enumerator_tAA96ED9ADD4A3236942EDF90E25AEB9325A459CF * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAA96ED9ADD4A3236942EDF90E25AEB9325A459CF *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void SA.iOS.XCode.ISD_AssetFile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_AssetFile__ctor_m3C1BED498B1E15E03F1B9FE40616382AB1D6B58C (ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * __this, const RuntimeMethod* method);
// System.Void SA.iOS.XCode.ISD_API::AddFile(SA.iOS.XCode.ISD_AssetFile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_API_AddFile_mA982E94514CC1DD5D912AB6A5F16E7CDB7D3C2EA (ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * ___file0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<SA.iOS.XCode.ISD_AssetFile>::Remove(!0)
inline bool List_1_Remove_m51290C4CD148C51D89B29699197DFD8BB56CD879 (List_1_t9511BE61AEA93705100DA49C8230927A022DE41D * __this, ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t9511BE61AEA93705100DA49C8230927A022DE41D *, ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<SA.iOS.XCode.ISD_AssetFile>::Add(!0)
inline void List_1_Add_m2B0E88607A2AB7DED813894B140462936144CE6F (List_1_t9511BE61AEA93705100DA49C8230927A022DE41D * __this, ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9511BE61AEA93705100DA49C8230927A022DE41D *, ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String SA.iOS.XCode.ISD_AssetFile::get_RelativeFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISD_AssetFile_get_RelativeFilePath_m8999DDDA7516C5520FA1222B2371525C8C256E28 (ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * __this, const RuntimeMethod* method);
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A (String_t* ___path0, const RuntimeMethod* method);
// System.String SA.Foundation.UtilitiesEditor.SA_AssetDatabase::GetAssetPath(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_AssetDatabase_GetAssetPath_m2AA2700917B5AF11E73615AE5BDE0F53C3CB38FD (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___assetObject0, const RuntimeMethod* method);
// System.String SA.Foundation.UtilitiesEditor.SA_AssetDatabase::GetAbsoluteAssetPath(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SA_AssetDatabase_GetAbsoluteAssetPath_m6F849E97709DFDC90AC7CB98C715948C1C3EE0AD (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___assetObject0, const RuntimeMethod* method);
// System.String SA.iOS.XCode.ISD_AssetFile::get_FileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISD_AssetFile_get_FileName_mC376FE586364E8E37FCC62AE73688D5456CEC315 (ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.IO.FileAttributes System.IO.File::GetAttributes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t File_GetAttributes_mA80066D792280BBD379122592FB1C2E4E4C6C827 (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void SA.iOS.XCode.ISD_CapabilitySettings/iCloudCapability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iCloudCapability__ctor_m7E84F82292F97C01BB1A29817824A00F7400E218 (iCloudCapability_t623E461BD2CEC236034D4DF6E94ED7065A9758EC * __this, const RuntimeMethod* method);
// System.Void SA.iOS.XCode.ISD_CapabilitySettings/PushNotificationsCapability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushNotificationsCapability__ctor_m11BEE5BD1261B0D3A23C4E3BE9455BF67E345EF9 (PushNotificationsCapability_tA3F0ED1F949FCD420D665B366053B9EA3B8A9B09 * __this, const RuntimeMethod* method);
// System.Void SA.iOS.XCode.ISD_CapabilitySettings/Capability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Capability__ctor_mFA0B103915641E5599987ACBC6776730B0ABF2B5 (Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * __this, const RuntimeMethod* method);
// System.Void SA.iOS.XCode.ISD_CapabilitySettings/WalletCapability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WalletCapability__ctor_m5ECED46ED8D9C0B7B3169FD1013EEFEBF2FFF16B (WalletCapability_t2A652861CD399823A3527B05AD810692827091DC * __this, const RuntimeMethod* method);
// System.Void SA.iOS.XCode.ISD_CapabilitySettings/ApplePayCapability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplePayCapability__ctor_m551B20D4482430CE108D2BE0D64D4D56037A0FC4 (ApplePayCapability_t8006036C3FABF39E040353EC648A79DA790CEB03 * __this, const RuntimeMethod* method);
// System.Void SA.iOS.XCode.ISD_CapabilitySettings/MapsCapability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapsCapability__ctor_m4EA52C285861883AA716EC38CBCD6F77808AF67B (MapsCapability_tB3B5DB6D42952FBFF0D298E2B53ADF96E70C986F * __this, const RuntimeMethod* method);
// System.Void SA.iOS.XCode.ISD_CapabilitySettings/BackgroundModesCapability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundModesCapability__ctor_m416C334B84C833DFC69C8DF783BD408A36EC781C (BackgroundModesCapability_tEC48C548936457ED233CD3BACE3DA008CDCEB6D2 * __this, const RuntimeMethod* method);
// System.Void SA.iOS.XCode.ISD_CapabilitySettings/KeychainSharingCapability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeychainSharingCapability__ctor_mB983485F6D26F50F93971267AB1D341F674BACC9 (KeychainSharingCapability_t81BC5A01F4AD5A9D00BA956731CF3BC636D5FDE3 * __this, const RuntimeMethod* method);
// System.Void SA.iOS.XCode.ISD_CapabilitySettings/AssociatedDomainsCapability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssociatedDomainsCapability__ctor_m9027A92208EF95F681DC401DCEA9C097EBB594AA (AssociatedDomainsCapability_t693B11E62E17C6609C3F79C3A2E63779570FFB27 * __this, const RuntimeMethod* method);
// System.Void SA.iOS.XCode.ISD_CapabilitySettings/AppGroupsCapability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppGroupsCapability__ctor_m0D830E58DE635C95538F56CA2D7953FC8401A0FB (AppGroupsCapability_tD9E42DF113B62E0A6438CC48C156C21D21C0B7BE * __this, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// !!0 StansAssets.Foundation.EnumUtility::ParseEnum<SA.iOS.XCode.ISD_iOSFramework>(System.String)
inline int32_t EnumUtility_ParseEnum_TisISD_iOSFramework_tB5D22C8FFBD69FD6511AC3464CD39A1F280C8A4B_m81B43426214714A54C1D1148F5725622DA966096 (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (String_t*, const RuntimeMethod*))EnumUtility_ParseEnum_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m074470AC66BA66A0399CF97EBCE9F084FB835251_gshared)(___value0, method);
}
// System.Void System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Framework>::.ctor()
inline void List_1__ctor_mD9CF71F579DEC474A9A578CFAFDB0D5AF5344186 (List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.String[] System.Enum::GetNames(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8 (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(!0)
inline bool List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(!0)
inline bool List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Framework> SA.iOS.XCode.ISD_FrameworkHandler::get_DefaultFrameworks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * ISD_FrameworkHandler_get_DefaultFrameworks_m9B22CA524282B1752B056FBCB30E848C64B2E8E5 (const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Collections.IEnumerator System.Array::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Framework> SA.iOS.XCode.ISD_FrameworkHandler::get_AvailableFrameworks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * ISD_FrameworkHandler_get_AvailableFrameworks_m1A5F658A86F19C2C9DC2FDC9C14E67B463CD5A78 (const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Framework>::get_Capacity()
inline int32_t List_1_get_Capacity_mC57DD8EC8F6BBF1491CDDC374A9E11168E38E20A (List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC *, const RuntimeMethod*))List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
inline void List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Library>::.ctor()
inline void List_1__ctor_mD3DEC8AFAD295AC8C8326C997CCECC66600EFE71 (List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.String SA.iOS.XCode.ISD_Library::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISD_Library_get_Name_m00BCC82F2EFDA20606061E8087505D8CFEC23DF0 (ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Library> SA.iOS.XCode.ISD_LibHandler::get_AvailableLibraries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * ISD_LibHandler_get_AvailableLibraries_m925F12A2FF434593590288C42D753070259FD6C8 (const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Library>::get_Capacity()
inline int32_t List_1_get_Capacity_m21A235617409E19E513B1F887A77DDA9B1EE6896 (List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 *, const RuntimeMethod*))List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_gshared)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Reflection.FieldInfo System.Type::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t * Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Object System.Enum::Parse(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_Parse_m6601224637A9CF40F77358805956C2EE757EAF68 (Type_t * ___enumType0, String_t* ___value1, const RuntimeMethod* method);
// System.String SA.iOS.XCode.ISD_LibHandler::stringValueOf(SA.iOS.XCode.ISD_iOSLibrary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISD_LibHandler_stringValueOf_m4BE34B79ACBD690FED6D2763EF4216A8DEB05CCB (int32_t ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
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
// SA.iOS.XCode.ISD_PlistKey SA.iOS.XCode.ISD_Settings::getVariableById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * ISD_Settings_getVariableById_mB307B516DA6475F32713586850CED3A311CC4D15 (ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * __this, String_t* ___uniqueIdKey0, const RuntimeMethod* method);
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
// System.String StansAssets.Foundation.IdFactory::get_RandomString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdFactory_get_RandomString_mE32FF15D54A622EA3E53A3C6391CCE28626C44F5 (const RuntimeMethod* method);
// System.Void SA.iOS.XCode.ISD_Settings::AddVariableToDictionary(System.String,SA.iOS.XCode.ISD_PlistKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_Settings_AddVariableToDictionary_m8F1A8522D18538C6D0C45FE180EDD6839A0027DC (ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * __this, String_t* ___uniqueIdKey0, ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * ___var1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_PlistKey> SA.iOS.XCode.ISD_PlistKey::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * ISD_PlistKey_get_Children_m2EFDF83327311CB4CCDADBE733D5CCA5DAB1640F (ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<SA.iOS.XCode.ISD_PlistKey>::.ctor()
inline void List_1__ctor_mA954EB648524D9D6AA4A79B212886082247F10E9 (List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void SA.iOS.XCode.ISD_PlistKeyId::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_PlistKeyId__ctor_m1466AD622FC86E039101830845D59313F395DED8 (ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<SA.iOS.XCode.ISD_PlistKeyId>::Add(!0)
inline void List_1_Add_m214B76557CA516EA4496E4116427CA67A7AAB9F2 (List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 * __this, ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 *, ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<SA.iOS.XCode.ISD_PlistKey>::Contains(!0)
inline bool List_1_Contains_mAF4F95A9B1BDC392BD9D70291B06CDE490015D69 (List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * __this, ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD *, ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<SA.iOS.XCode.ISD_PlistKeyId>::GetEnumerator()
inline Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B  List_1_GetEnumerator_m515880F3EDD3946F9D2863F6BE89AF8B04B2766C (List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B  (*) (List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_PlistKeyId>::get_Current()
inline ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * Enumerator_get_Current_m9304A2A8B29BC07690255B5D99CE89DDCCF8A73B_inline (Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B * __this, const RuntimeMethod* method)
{
	return ((  ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * (*) (Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<SA.iOS.XCode.ISD_PlistKeyId>::Remove(!0)
inline bool List_1_Remove_m1BC58C47AFB0B8E0825557E43F131D79FFA39D0B (List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 * __this, ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 *, ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_PlistKeyId>::MoveNext()
inline bool Enumerator_MoveNext_m78EC677492EE0EC7A1500B4144AFE82BAB39EA1C (Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<SA.iOS.XCode.ISD_PlistKeyId>::Dispose()
inline void Enumerator_Dispose_mD2435E96BA430088CD4CE935459860EAE3C4B46E (Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SA.iOS.XCode.ISD_PlistKeyId>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m9121FE25989D0160C00484BB0D796F964D908C5F (List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Boolean SA.iOS.XCode.ISD_Settings::IsInUse(System.String,System.Collections.Generic.List`1<SA.iOS.XCode.ISD_PlistKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ISD_Settings_IsInUse_mE226E9EEFE0072AEC1B8346E799D2035CA4615F4 (ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * __this, String_t* ___id0, List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * ___list1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<SA.iOS.XCode.ISD_BuildProperty>::get_Count()
inline int32_t List_1_get_Count_m95B4E880156FF461CCC8F7B1C00F72A13566085A_inline (List_1_t47A12984B966945E7304EE778A8FB82169C91100 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t47A12984B966945E7304EE778A8FB82169C91100 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SA.iOS.XCode.ISD_EmbedFramework>::.ctor()
inline void List_1__ctor_mD2087DF7203D2CC322E744AF09FC9281E27C55CF (List_1_t0F62678D2CE34F21E5785211C71C04056EA9E405 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0F62678D2CE34F21E5785211C71C04056EA9E405 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Flag>::.ctor()
inline void List_1__ctor_m22D56072E4E0F3BF53DCFACAF0EF7CDD6803D765 (List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SA.iOS.XCode.ISD_PlistKeyId>::.ctor()
inline void List_1__ctor_mF9889B680570F6684E4D9705D245DB20524D6F82 (List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SA.Foundation.Localization.SA_ISOLanguage>::.ctor()
inline void List_1__ctor_m32077E95ECC5A06AA379D63701FB0B563E499349 (List_1_t0E869E1E4D59E7247073977786D71763115C251C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0E869E1E4D59E7247073977786D71763115C251C *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SA.iOS.XCode.ISD_ShellScript>::.ctor()
inline void List_1__ctor_mC0B1E4466908183C7560FA7AF7E2431CCB026DD3 (List_1_tF2AAE2EA9B0B2F3C3A81DD7001BBBD10CD72E00A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF2AAE2EA9B0B2F3C3A81DD7001BBBD10CD72E00A *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SA.iOS.XCode.ISD_BuildProperty>::.ctor()
inline void List_1__ctor_m4361369C7CDB42F8F8CF6866A2CDAC69682EFC15 (List_1_t47A12984B966945E7304EE778A8FB82169C91100 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t47A12984B966945E7304EE778A8FB82169C91100 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void SA.iOS.XCode.ISD_CapabilitySettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_CapabilitySettings__ctor_mE439D8DA1FFBA2852B4AD21067701A39A40886AD (ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<SA.iOS.XCode.ISD_AssetFile>::.ctor()
inline void List_1__ctor_m0FE8B9CFF87754AE2B2F4351AF0ADA6485CDF702 (List_1_t9511BE61AEA93705100DA49C8230927A022DE41D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9511BE61AEA93705100DA49C8230927A022DE41D *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void SA.Foundation.Patterns.SA_ScriptableSingleton`1<SA.iOS.XCode.ISD_Settings>::.ctor()
inline void SA_ScriptableSingleton_1__ctor_m64F9AC80322D1C1A2EA4C6D6BB3E1ADB5A40FCB1 (SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C * __this, const RuntimeMethod* method)
{
	((  void (*) (SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C *, const RuntimeMethod*))SA_ScriptableSingleton_1__ctor_m7ED75FFB0630AD8C9B877BE8765DB485A86418A4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SA.iOS.XCode.ISD_CapabilitySettings/BackgroundModesCapability/BackgroundModesOptions>::.ctor()
inline void List_1__ctor_mD728A8013E758BEF77948CB8EA704120464F7439 (List_1_t36B10EDDB61D61D7E69D51E2F3F59664B130AA56 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36B10EDDB61D61D7E69D51E2F3F59664B130AA56 *, const RuntimeMethod*))List_1__ctor_mF1D0377D81949B2ADB6104D9994F7CEE1A1E5040_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SA.iOS.XCode.ISD_CapabilitySettings/MapsCapability/MapsOptions>::.ctor()
inline void List_1__ctor_m6A4E01FFD35605876DCC5B7AC2F03B6049367A28 (List_1_tA782C52F01BC52A405B52D42803A3177410C6394 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA782C52F01BC52A405B52D42803A3177410C6394 *, const RuntimeMethod*))List_1__ctor_mF1D0377D81949B2ADB6104D9994F7CEE1A1E5040_gshared)(__this, method);
}
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
// System.Void SA.iOS.XCode.ISD_API::SetBuildProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_API_SetBuildProperty_m9C42E82F382F4ACB9E571D1396CAA6AD24CA0664 (String_t* ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetBuildProperty(new ISD_BuildProperty(name, value));
		String_t* L_0 = ___name0;
		String_t* L_1 = ___value1;
		ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * L_2 = (ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F *)il2cpp_codegen_object_new(ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F_il2cpp_TypeInfo_var);
		ISD_BuildProperty__ctor_mF252D01853011679E079B8971CAB33B1F0C55DEB(L_2, L_0, L_1, /*hidden argument*/NULL);
		ISD_API_SetBuildProperty_m91A9F9E5AC49FC18B4EE9991A4770864F1FEAD32(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SA.iOS.XCode.ISD_API::SetBuildProperty(SA.iOS.XCode.ISD_BuildProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_API_SetBuildProperty_m91A9F9E5AC49FC18B4EE9991A4770864F1FEAD32 (ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * ___property0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD63DC05063EAF9C72529A72FDB846946E329186D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m36FF018DBC00E12586A26A1FE93ADCF6AD3B64F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8862D97DCFC1C05AA111F2D3D088CB7B21E39BE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3344388DD1FE1FD92F4413F258715C4C2DBA2BEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDE9818098C1E91FCF8CA0CDCEB76BDC6679BA308_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m2F77D73B7864C17332B95E13D138DBF2F5526AF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t145DB7D552ECAAA1C0D57CD34DC747DB06473501  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var p in ISD_Settings.Instance.BuildProperties)
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_0;
		L_0 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_t47A12984B966945E7304EE778A8FB82169C91100 * L_1;
		L_1 = ISD_Settings_get_BuildProperties_m574B07E71B9CFD9A060F1D58E7B781C1780AA8DE(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Enumerator_t145DB7D552ECAAA1C0D57CD34DC747DB06473501  L_2;
		L_2 = List_1_GetEnumerator_mDE9818098C1E91FCF8CA0CDCEB76BDC6679BA308(L_1, /*hidden argument*/List_1_GetEnumerator_mDE9818098C1E91FCF8CA0CDCEB76BDC6679BA308_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_0012:
		{
			// foreach (var p in ISD_Settings.Instance.BuildProperties)
			ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * L_3;
			L_3 = Enumerator_get_Current_m8862D97DCFC1C05AA111F2D3D088CB7B21E39BE3_inline((Enumerator_t145DB7D552ECAAA1C0D57CD34DC747DB06473501 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m8862D97DCFC1C05AA111F2D3D088CB7B21E39BE3_RuntimeMethod_var);
			V_1 = L_3;
			// if (p.Name.Equals(property.Name))
			ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5;
			L_5 = ISD_BuildProperty_get_Name_m530C68A0A0BC6B78DE7861E6D569C0318A1F7800_inline(L_4, /*hidden argument*/NULL);
			ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * L_6 = ___property0;
			NullCheck(L_6);
			String_t* L_7;
			L_7 = ISD_BuildProperty_get_Name_m530C68A0A0BC6B78DE7861E6D569C0318A1F7800_inline(L_6, /*hidden argument*/NULL);
			NullCheck(L_5);
			bool L_8;
			L_8 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_5, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0040;
			}
		}

IL_002d:
		{
			// ISD_Settings.Instance.BuildProperties.Remove(p);
			IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
			ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_9;
			L_9 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
			NullCheck(L_9);
			List_1_t47A12984B966945E7304EE778A8FB82169C91100 * L_10;
			L_10 = ISD_Settings_get_BuildProperties_m574B07E71B9CFD9A060F1D58E7B781C1780AA8DE(L_9, /*hidden argument*/NULL);
			ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * L_11 = V_1;
			NullCheck(L_10);
			bool L_12;
			L_12 = List_1_Remove_m2F77D73B7864C17332B95E13D138DBF2F5526AF3(L_10, L_11, /*hidden argument*/List_1_Remove_m2F77D73B7864C17332B95E13D138DBF2F5526AF3_RuntimeMethod_var);
			// break;
			IL2CPP_LEAVE(0x59, FINALLY_004b);
		}

IL_0040:
		{
			// foreach (var p in ISD_Settings.Instance.BuildProperties)
			bool L_13;
			L_13 = Enumerator_MoveNext_m36FF018DBC00E12586A26A1FE93ADCF6AD3B64F4((Enumerator_t145DB7D552ECAAA1C0D57CD34DC747DB06473501 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m36FF018DBC00E12586A26A1FE93ADCF6AD3B64F4_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0012;
			}
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x59, FINALLY_004b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004b;
	}

FINALLY_004b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD63DC05063EAF9C72529A72FDB846946E329186D((Enumerator_t145DB7D552ECAAA1C0D57CD34DC747DB06473501 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mD63DC05063EAF9C72529A72FDB846946E329186D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(75)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x59, IL_0059)
	}

IL_0059:
	{
		// ISD_Settings.Instance.BuildProperties.Add(property);
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_14;
		L_14 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_14);
		List_1_t47A12984B966945E7304EE778A8FB82169C91100 * L_15;
		L_15 = ISD_Settings_get_BuildProperties_m574B07E71B9CFD9A060F1D58E7B781C1780AA8DE(L_14, /*hidden argument*/NULL);
		ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * L_16 = ___property0;
		NullCheck(L_15);
		List_1_Add_m3344388DD1FE1FD92F4413F258715C4C2DBA2BEF(L_15, L_16, /*hidden argument*/List_1_Add_m3344388DD1FE1FD92F4413F258715C4C2DBA2BEF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SA.iOS.XCode.ISD_API::RemoveBuildProperty(SA.iOS.XCode.ISD_BuildProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_API_RemoveBuildProperty_mA092C29CF0B254FCF5D48ED568EF59D7CADD78ED (ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * ___property0, const RuntimeMethod* method)
{
	{
		// RemoveBuildProperty(property.Name);
		ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * L_0 = ___property0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ISD_BuildProperty_get_Name_m530C68A0A0BC6B78DE7861E6D569C0318A1F7800_inline(L_0, /*hidden argument*/NULL);
		ISD_API_RemoveBuildProperty_m20490B6058A2160F9BBA0F130F131803979B01BA(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SA.iOS.XCode.ISD_API::RemoveBuildProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_API_RemoveBuildProperty_m20490B6058A2160F9BBA0F130F131803979B01BA (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD63DC05063EAF9C72529A72FDB846946E329186D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m36FF018DBC00E12586A26A1FE93ADCF6AD3B64F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8862D97DCFC1C05AA111F2D3D088CB7B21E39BE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDE9818098C1E91FCF8CA0CDCEB76BDC6679BA308_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m2F77D73B7864C17332B95E13D138DBF2F5526AF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t145DB7D552ECAAA1C0D57CD34DC747DB06473501  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var p in ISD_Settings.Instance.BuildProperties)
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_0;
		L_0 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_t47A12984B966945E7304EE778A8FB82169C91100 * L_1;
		L_1 = ISD_Settings_get_BuildProperties_m574B07E71B9CFD9A060F1D58E7B781C1780AA8DE(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Enumerator_t145DB7D552ECAAA1C0D57CD34DC747DB06473501  L_2;
		L_2 = List_1_GetEnumerator_mDE9818098C1E91FCF8CA0CDCEB76BDC6679BA308(L_1, /*hidden argument*/List_1_GetEnumerator_mDE9818098C1E91FCF8CA0CDCEB76BDC6679BA308_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_0012:
		{
			// foreach (var p in ISD_Settings.Instance.BuildProperties)
			ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * L_3;
			L_3 = Enumerator_get_Current_m8862D97DCFC1C05AA111F2D3D088CB7B21E39BE3_inline((Enumerator_t145DB7D552ECAAA1C0D57CD34DC747DB06473501 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m8862D97DCFC1C05AA111F2D3D088CB7B21E39BE3_RuntimeMethod_var);
			V_1 = L_3;
			// if (p.Name.Equals(name))
			ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5;
			L_5 = ISD_BuildProperty_get_Name_m530C68A0A0BC6B78DE7861E6D569C0318A1F7800_inline(L_4, /*hidden argument*/NULL);
			String_t* L_6 = ___name0;
			NullCheck(L_5);
			bool L_7;
			L_7 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_5, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_003b;
			}
		}

IL_0028:
		{
			// ISD_Settings.Instance.BuildProperties.Remove(p);
			IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
			ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_8;
			L_8 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
			NullCheck(L_8);
			List_1_t47A12984B966945E7304EE778A8FB82169C91100 * L_9;
			L_9 = ISD_Settings_get_BuildProperties_m574B07E71B9CFD9A060F1D58E7B781C1780AA8DE(L_8, /*hidden argument*/NULL);
			ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * L_10 = V_1;
			NullCheck(L_9);
			bool L_11;
			L_11 = List_1_Remove_m2F77D73B7864C17332B95E13D138DBF2F5526AF3(L_9, L_10, /*hidden argument*/List_1_Remove_m2F77D73B7864C17332B95E13D138DBF2F5526AF3_RuntimeMethod_var);
			// break;
			IL2CPP_LEAVE(0x54, FINALLY_0046);
		}

IL_003b:
		{
			// foreach (var p in ISD_Settings.Instance.BuildProperties)
			bool L_12;
			L_12 = Enumerator_MoveNext_m36FF018DBC00E12586A26A1FE93ADCF6AD3B64F4((Enumerator_t145DB7D552ECAAA1C0D57CD34DC747DB06473501 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m36FF018DBC00E12586A26A1FE93ADCF6AD3B64F4_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0012;
			}
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD63DC05063EAF9C72529A72FDB846946E329186D((Enumerator_t145DB7D552ECAAA1C0D57CD34DC747DB06473501 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mD63DC05063EAF9C72529A72FDB846946E329186D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x54, IL_0054)
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void SA.iOS.XCode.ISD_API::SetInfoPlistKey(SA.iOS.XCode.ISD_PlistKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_API_SetInfoPlistKey_mD0A67E3A255E69CA43F4FFFC096ED6AC0F97158B (ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4A69F19BB193BE8DCFC3D164BD771BDA8DEB1950_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mB20ADAB4D82D0190F36153414F063BF5D64BABFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * V_0 = NULL;
	{
		// var plisKey = GetInfoPlistKey(key.Name);
		ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_0 = ___key0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Name_2();
		ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_2;
		L_2 = ISD_API_GetInfoPlistKey_m49749F18193E4FAF4A3922ACABFDFCB8C8DA9794(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (plisKey != null) ISD_Settings.Instance.PlistVariables.Remove(plisKey);
		ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// if (plisKey != null) ISD_Settings.Instance.PlistVariables.Remove(plisKey);
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_4;
		L_4 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_4);
		List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * L_5 = L_4->get_PlistVariables_16();
		ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = List_1_Remove_mB20ADAB4D82D0190F36153414F063BF5D64BABFC(L_5, L_6, /*hidden argument*/List_1_Remove_mB20ADAB4D82D0190F36153414F063BF5D64BABFC_RuntimeMethod_var);
	}

IL_0020:
	{
		// ISD_Settings.Instance.PlistVariables.Add(key);
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_8;
		L_8 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_8);
		List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * L_9 = L_8->get_PlistVariables_16();
		ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_10 = ___key0;
		NullCheck(L_9);
		List_1_Add_m4A69F19BB193BE8DCFC3D164BD771BDA8DEB1950(L_9, L_10, /*hidden argument*/List_1_Add_m4A69F19BB193BE8DCFC3D164BD771BDA8DEB1950_RuntimeMethod_var);
		// }
		return;
	}
}
// SA.iOS.XCode.ISD_PlistKey SA.iOS.XCode.ISD_API::GetInfoPlistKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * ISD_API_GetInfoPlistKey_m49749F18193E4FAF4A3922ACABFDFCB8C8DA9794 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1E799A697C36F18B32398BF590D4B8A376E1CB41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m746AA0A0C30015E425278C681F6DF79149236637_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m045817AE13DC4B574A64CDE27EFA6482872DC781_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m61E0EE51B4C8119A2D1957039180AAFD7C4AA6DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * V_1 = NULL;
	ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var v in ISD_Settings.Instance.PlistVariables)
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_0;
		L_0 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * L_1 = L_0->get_PlistVariables_16();
		NullCheck(L_1);
		Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079  L_2;
		L_2 = List_1_GetEnumerator_m61E0EE51B4C8119A2D1957039180AAFD7C4AA6DD(L_1, /*hidden argument*/List_1_GetEnumerator_m61E0EE51B4C8119A2D1957039180AAFD7C4AA6DD_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_0012:
		{
			// foreach (var v in ISD_Settings.Instance.PlistVariables)
			ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_3;
			L_3 = Enumerator_get_Current_m045817AE13DC4B574A64CDE27EFA6482872DC781_inline((Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m045817AE13DC4B574A64CDE27EFA6482872DC781_RuntimeMethod_var);
			V_1 = L_3;
			// if (v.Name.Equals(name))
			ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5 = L_4->get_Name_2();
			String_t* L_6 = ___name0;
			NullCheck(L_5);
			bool L_7;
			L_7 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_5, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_002c;
			}
		}

IL_0028:
		{
			// return v;
			ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_8 = V_1;
			V_2 = L_8;
			IL2CPP_LEAVE(0x47, FINALLY_0037);
		}

IL_002c:
		{
			// foreach (var v in ISD_Settings.Instance.PlistVariables)
			bool L_9;
			L_9 = Enumerator_MoveNext_m746AA0A0C30015E425278C681F6DF79149236637((Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m746AA0A0C30015E425278C681F6DF79149236637_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0012;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x45, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1E799A697C36F18B32398BF590D4B8A376E1CB41((Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m1E799A697C36F18B32398BF590D4B8A376E1CB41_RuntimeMethod_var);
		IL2CPP_END_FINALLY(55)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
	}

IL_0045:
	{
		// return null;
		return (ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC *)NULL;
	}

IL_0047:
	{
		// }
		ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_10 = V_2;
		return L_10;
	}
}
// System.Boolean SA.iOS.XCode.ISD_API::ContainsKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ISD_API_ContainsKey_m11417E13BE8CCE7A2E93A0E2A8FC3AD0BCBCD3E8 (String_t* ___name0, const RuntimeMethod* method)
{
	{
		// return GetInfoPlistKey(name) != null;
		String_t* L_0 = ___name0;
		ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_1;
		L_1 = ISD_API_GetInfoPlistKey_m49749F18193E4FAF4A3922ACABFDFCB8C8DA9794(L_0, /*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void SA.iOS.XCode.ISD_API::RemoveInfoPlistKey(SA.iOS.XCode.ISD_PlistKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_API_RemoveInfoPlistKey_m54F0C37C6B3D089558FE1FAFAA1842CC7DD20809 (ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * ___key0, const RuntimeMethod* method)
{
	{
		// RemoveInfoPlistKey(key.Name);
		ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_0 = ___key0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Name_2();
		ISD_API_RemoveInfoPlistKey_m4378C0F8C86B9AD4FA17E024CB97980C7D42C039(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SA.iOS.XCode.ISD_API::RemoveInfoPlistKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_API_RemoveInfoPlistKey_m4378C0F8C86B9AD4FA17E024CB97980C7D42C039 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * V_0 = NULL;
	{
		// var key = GetInfoPlistKey(name);
		String_t* L_0 = ___name0;
		ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_1;
		L_1 = ISD_API_GetInfoPlistKey_m49749F18193E4FAF4A3922ACABFDFCB8C8DA9794(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (key != null) ISD_Settings.Instance.RemoveVariable(key, ISD_Settings.Instance.PlistVariables);
		ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// if (key != null) ISD_Settings.Instance.RemoveVariable(key, ISD_Settings.Instance.PlistVariables);
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_3;
		L_3 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_4 = V_0;
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_5;
		L_5 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_5);
		List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * L_6 = L_5->get_PlistVariables_16();
		NullCheck(L_3);
		ISD_Settings_RemoveVariable_m93F866EEFFBF1A631CA4568195091CD354E5DCB3(L_3, L_4, L_6, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void SA.iOS.XCode.ISD_API::AddFlag(System.String,SA.iOS.XCode.ISD_FlagType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_API_AddFlag_m3348F4947A3572F71CA4368B8A5A18CFF73F529C (String_t* ___name0, int32_t ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07CC916E7AF35B1CE3718405F5000B52E2C800DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB73179B10A46C06813A3C51C333D2F444F4809AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCF5305BFEC169FB4593B64DD6728586C9068198E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4D8D81DDC48F45BE8C7A8DD0AF0A5A0F48821D98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m12BD500EB547991D76DE40B87CF55EC476F4D7CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 * V_0 = NULL;
	Enumerator_t009175C7178178AB6E98DED5881426F2322C7307  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var flag in ISD_Settings.Instance.Flags)
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_0;
		L_0 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E * L_1 = L_0->get_Flags_15();
		NullCheck(L_1);
		Enumerator_t009175C7178178AB6E98DED5881426F2322C7307  L_2;
		L_2 = List_1_GetEnumerator_m12BD500EB547991D76DE40B87CF55EC476F4D7CC(L_1, /*hidden argument*/List_1_GetEnumerator_m12BD500EB547991D76DE40B87CF55EC476F4D7CC_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0033;
		}

IL_0012:
		{
			// foreach (var flag in ISD_Settings.Instance.Flags)
			ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 * L_3;
			L_3 = Enumerator_get_Current_mCF5305BFEC169FB4593B64DD6728586C9068198E_inline((Enumerator_t009175C7178178AB6E98DED5881426F2322C7307 *)(&V_1), /*hidden argument*/Enumerator_get_Current_mCF5305BFEC169FB4593B64DD6728586C9068198E_RuntimeMethod_var);
			V_2 = L_3;
			// if (flag.Type == type && flag.Name.Equals(name))
			ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 * L_4 = V_2;
			NullCheck(L_4);
			int32_t L_5 = L_4->get_Type_1();
			int32_t L_6 = ___type1;
			if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
			{
				goto IL_0033;
			}
		}

IL_0023:
		{
			ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 * L_7 = V_2;
			NullCheck(L_7);
			String_t* L_8 = L_7->get_Name_0();
			String_t* L_9 = ___name0;
			NullCheck(L_8);
			bool L_10;
			L_10 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_8, L_9, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_0033;
			}
		}

IL_0031:
		{
			// return;
			IL2CPP_LEAVE(0x70, FINALLY_003e);
		}

IL_0033:
		{
			// foreach (var flag in ISD_Settings.Instance.Flags)
			bool L_11;
			L_11 = Enumerator_MoveNext_mB73179B10A46C06813A3C51C333D2F444F4809AE((Enumerator_t009175C7178178AB6E98DED5881426F2322C7307 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mB73179B10A46C06813A3C51C333D2F444F4809AE_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0012;
			}
		}

IL_003c:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m07CC916E7AF35B1CE3718405F5000B52E2C800DE((Enumerator_t009175C7178178AB6E98DED5881426F2322C7307 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m07CC916E7AF35B1CE3718405F5000B52E2C800DE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(62)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x70, IL_0070)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// var newFlag = new ISD_Flag();
		ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 * L_12 = (ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 *)il2cpp_codegen_object_new(ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927_il2cpp_TypeInfo_var);
		ISD_Flag__ctor_m09F11A35F14C8E04B9869BE6B301C6D7E849F765(L_12, /*hidden argument*/NULL);
		V_0 = L_12;
		// newFlag.Name = name;
		ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 * L_13 = V_0;
		String_t* L_14 = ___name0;
		NullCheck(L_13);
		L_13->set_Name_0(L_14);
		// newFlag.Type = ISD_FlagType.LinkerFlag;
		ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 * L_15 = V_0;
		NullCheck(L_15);
		L_15->set_Type_1(1);
		// ISD_Settings.Instance.Flags.Add(newFlag);
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_16;
		L_16 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_16);
		List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E * L_17 = L_16->get_Flags_15();
		ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 * L_18 = V_0;
		NullCheck(L_17);
		List_1_Add_m4D8D81DDC48F45BE8C7A8DD0AF0A5A0F48821D98(L_17, L_18, /*hidden argument*/List_1_Add_m4D8D81DDC48F45BE8C7A8DD0AF0A5A0F48821D98_RuntimeMethod_var);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void SA.iOS.XCode.ISD_API::RemoveFlag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_API_RemoveFlag_m549660390A53484550C1F4E36CA26B0D15EA97B6 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07CC916E7AF35B1CE3718405F5000B52E2C800DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB73179B10A46C06813A3C51C333D2F444F4809AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCF5305BFEC169FB4593B64DD6728586C9068198E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m12BD500EB547991D76DE40B87CF55EC476F4D7CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mF92A6C63668A1088AF5451E79AC404608A5009AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t009175C7178178AB6E98DED5881426F2322C7307  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var flag in ISD_Settings.Instance.Flags)
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_0;
		L_0 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E * L_1 = L_0->get_Flags_15();
		NullCheck(L_1);
		Enumerator_t009175C7178178AB6E98DED5881426F2322C7307  L_2;
		L_2 = List_1_GetEnumerator_m12BD500EB547991D76DE40B87CF55EC476F4D7CC(L_1, /*hidden argument*/List_1_GetEnumerator_m12BD500EB547991D76DE40B87CF55EC476F4D7CC_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_0012:
		{
			// foreach (var flag in ISD_Settings.Instance.Flags)
			ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 * L_3;
			L_3 = Enumerator_get_Current_mCF5305BFEC169FB4593B64DD6728586C9068198E_inline((Enumerator_t009175C7178178AB6E98DED5881426F2322C7307 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mCF5305BFEC169FB4593B64DD6728586C9068198E_RuntimeMethod_var);
			V_1 = L_3;
			// if (flag.Name.Equals(name))
			ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 * L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5 = L_4->get_Name_0();
			String_t* L_6 = ___name0;
			NullCheck(L_5);
			bool L_7;
			L_7 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_5, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_003b;
			}
		}

IL_0028:
		{
			// ISD_Settings.Instance.Flags.Remove(flag);
			IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
			ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_8;
			L_8 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
			NullCheck(L_8);
			List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E * L_9 = L_8->get_Flags_15();
			ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 * L_10 = V_1;
			NullCheck(L_9);
			bool L_11;
			L_11 = List_1_Remove_mF92A6C63668A1088AF5451E79AC404608A5009AB(L_9, L_10, /*hidden argument*/List_1_Remove_mF92A6C63668A1088AF5451E79AC404608A5009AB_RuntimeMethod_var);
			// return;
			IL2CPP_LEAVE(0x54, FINALLY_0046);
		}

IL_003b:
		{
			// foreach (var flag in ISD_Settings.Instance.Flags)
			bool L_12;
			L_12 = Enumerator_MoveNext_mB73179B10A46C06813A3C51C333D2F444F4809AE((Enumerator_t009175C7178178AB6E98DED5881426F2322C7307 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mB73179B10A46C06813A3C51C333D2F444F4809AE_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0012;
			}
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m07CC916E7AF35B1CE3718405F5000B52E2C800DE((Enumerator_t009175C7178178AB6E98DED5881426F2322C7307 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m07CC916E7AF35B1CE3718405F5000B52E2C800DE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x54, IL_0054)
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void SA.iOS.XCode.ISD_API::AddFramework(SA.iOS.XCode.ISD_iOSFramework,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_API_AddFramework_m0D86E56A3984C170D79E95EB57FFFE3CF6CAA0BB (int32_t ___framework0, bool ___weak1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddFramework(new ISD_Framework(framework, weak));
		int32_t L_0 = ___framework0;
		bool L_1 = ___weak1;
		ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_2 = (ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 *)il2cpp_codegen_object_new(ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33_il2cpp_TypeInfo_var);
		ISD_Framework__ctor_mE9A970533521AF6DE42FE3C26CBD4E3A872E63A0(L_2, L_0, L_1, /*hidden argument*/NULL);
		ISD_API_AddFramework_m7A103F1DE716BCDD8FA7A8F4B1BA9A85587443A6(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SA.iOS.XCode.ISD_API::AddFramework(SA.iOS.XCode.ISD_Framework)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_API_AddFramework_m7A103F1DE716BCDD8FA7A8F4B1BA9A85587443A6 (ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * ___framework0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE970889E8AFFAF3D1BE8106F7B5E40DB16CC9D84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7A4467D8767DE31A96E02F234DC94BF1B7C4B84B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAF883A195EBF34B6BFD37F9EDC4378A1D3D3E673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5F818B409F00C6EA664FB9B864A1C3C8369C83C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m1B398F0099068E5152FD59EDADCD434EAE277E13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var item in ISD_Settings.Instance.Frameworks)
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_0;
		L_0 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_1 = L_0->get_Frameworks_12();
		NullCheck(L_1);
		Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509  L_2;
		L_2 = List_1_GetEnumerator_m5F818B409F00C6EA664FB9B864A1C3C8369C83C7(L_1, /*hidden argument*/List_1_GetEnumerator_m5F818B409F00C6EA664FB9B864A1C3C8369C83C7_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_0012:
		{
			// foreach (var item in ISD_Settings.Instance.Frameworks)
			ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_3;
			L_3 = Enumerator_get_Current_mAF883A195EBF34B6BFD37F9EDC4378A1D3D3E673_inline((Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mAF883A195EBF34B6BFD37F9EDC4378A1D3D3E673_RuntimeMethod_var);
			V_1 = L_3;
			// if (item.Type == framework.Type)
			ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_4 = V_1;
			NullCheck(L_4);
			int32_t L_5 = L_4->get_Type_2();
			ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_6 = ___framework0;
			NullCheck(L_6);
			int32_t L_7 = L_6->get_Type_2();
			if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
			{
				goto IL_003b;
			}
		}

IL_0028:
		{
			// ISD_Settings.Instance.Frameworks.Remove(item);
			IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
			ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_8;
			L_8 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
			NullCheck(L_8);
			List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_9 = L_8->get_Frameworks_12();
			ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_10 = V_1;
			NullCheck(L_9);
			bool L_11;
			L_11 = List_1_Remove_m1B398F0099068E5152FD59EDADCD434EAE277E13(L_9, L_10, /*hidden argument*/List_1_Remove_m1B398F0099068E5152FD59EDADCD434EAE277E13_RuntimeMethod_var);
			// break;
			IL2CPP_LEAVE(0x54, FINALLY_0046);
		}

IL_003b:
		{
			// foreach (var item in ISD_Settings.Instance.Frameworks)
			bool L_12;
			L_12 = Enumerator_MoveNext_m7A4467D8767DE31A96E02F234DC94BF1B7C4B84B((Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m7A4467D8767DE31A96E02F234DC94BF1B7C4B84B_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0012;
			}
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE970889E8AFFAF3D1BE8106F7B5E40DB16CC9D84((Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mE970889E8AFFAF3D1BE8106F7B5E40DB16CC9D84_RuntimeMethod_var);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x54, IL_0054)
	}

IL_0054:
	{
		// ISD_Settings.Instance.Frameworks.Add(framework);
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_13;
		L_13 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_13);
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_14 = L_13->get_Frameworks_12();
		ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_15 = ___framework0;
		NullCheck(L_14);
		List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488(L_14, L_15, /*hidden argument*/List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SA.iOS.XCode.ISD_API::RemoveFramework(SA.iOS.XCode.ISD_iOSFramework)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_API_RemoveFramework_m739CA447609372BD315575C15317675B9F2100A2 (int32_t ___framework0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE970889E8AFFAF3D1BE8106F7B5E40DB16CC9D84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7A4467D8767DE31A96E02F234DC94BF1B7C4B84B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAF883A195EBF34B6BFD37F9EDC4378A1D3D3E673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5F818B409F00C6EA664FB9B864A1C3C8369C83C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m1B398F0099068E5152FD59EDADCD434EAE277E13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var item in ISD_Settings.Instance.Frameworks)
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_0;
		L_0 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_1 = L_0->get_Frameworks_12();
		NullCheck(L_1);
		Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509  L_2;
		L_2 = List_1_GetEnumerator_m5F818B409F00C6EA664FB9B864A1C3C8369C83C7(L_1, /*hidden argument*/List_1_GetEnumerator_m5F818B409F00C6EA664FB9B864A1C3C8369C83C7_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0036;
		}

IL_0012:
		{
			// foreach (var item in ISD_Settings.Instance.Frameworks)
			ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_3;
			L_3 = Enumerator_get_Current_mAF883A195EBF34B6BFD37F9EDC4378A1D3D3E673_inline((Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mAF883A195EBF34B6BFD37F9EDC4378A1D3D3E673_RuntimeMethod_var);
			V_1 = L_3;
			// if (item.Type == framework)
			ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_4 = V_1;
			NullCheck(L_4);
			int32_t L_5 = L_4->get_Type_2();
			int32_t L_6 = ___framework0;
			if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
			{
				goto IL_0036;
			}
		}

IL_0023:
		{
			// ISD_Settings.Instance.Frameworks.Remove(item);
			IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
			ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_7;
			L_7 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
			NullCheck(L_7);
			List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_8 = L_7->get_Frameworks_12();
			ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_9 = V_1;
			NullCheck(L_8);
			bool L_10;
			L_10 = List_1_Remove_m1B398F0099068E5152FD59EDADCD434EAE277E13(L_8, L_9, /*hidden argument*/List_1_Remove_m1B398F0099068E5152FD59EDADCD434EAE277E13_RuntimeMethod_var);
			// break;
			IL2CPP_LEAVE(0x4F, FINALLY_0041);
		}

IL_0036:
		{
			// foreach (var item in ISD_Settings.Instance.Frameworks)
			bool L_11;
			L_11 = Enumerator_MoveNext_m7A4467D8767DE31A96E02F234DC94BF1B7C4B84B((Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m7A4467D8767DE31A96E02F234DC94BF1B7C4B84B_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0012;
			}
		}

IL_003f:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE970889E8AFFAF3D1BE8106F7B5E40DB16CC9D84((Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mE970889E8AFFAF3D1BE8106F7B5E40DB16CC9D84_RuntimeMethod_var);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
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
// System.Void SA.iOS.XCode.ISD_API::AddLibrary(SA.iOS.XCode.ISD_iOSLibrary,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_API_AddLibrary_m3EF7011434308658D8FAFD0631D9028CB7E32A7A (int32_t ___library0, bool ___weak1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddLibrary(new ISD_Library(library, weak));
		int32_t L_0 = ___library0;
		bool L_1 = ___weak1;
		ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * L_2 = (ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 *)il2cpp_codegen_object_new(ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8_il2cpp_TypeInfo_var);
		ISD_Library__ctor_mCACF8A0CB254EDF6FBBCF5A4F8222758BADBF13F(L_2, L_0, L_1, /*hidden argument*/NULL);
		ISD_API_AddLibrary_m5BEFB030D1E30D164274B4AC19CE5C9FD62B2B27(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SA.iOS.XCode.ISD_API::AddLibrary(SA.iOS.XCode.ISD_Library)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_API_AddLibrary_m5BEFB030D1E30D164274B4AC19CE5C9FD62B2B27 (ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * ___library0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m71F58DCD9FC7E613D8328ADBC7CF0151F9E9449F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC5A8248129604DAFB2E325BB372AF0B86B0394B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m77BFB9F5DD0316790B9819CABDAF0C6E9182A3F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m04B351E6612EAB1DFE9BF8BF35718F3D148E48B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m814F4B14E6D0F015A8D3350C2A5EA23A190E4FCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m684FA1158260011AB6320B5614F7C7732A5401FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var item in ISD_Settings.Instance.Libraries)
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_0;
		L_0 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * L_1 = L_0->get_Libraries_14();
		NullCheck(L_1);
		Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A  L_2;
		L_2 = List_1_GetEnumerator_m814F4B14E6D0F015A8D3350C2A5EA23A190E4FCF(L_1, /*hidden argument*/List_1_GetEnumerator_m814F4B14E6D0F015A8D3350C2A5EA23A190E4FCF_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_0012:
		{
			// foreach (var item in ISD_Settings.Instance.Libraries)
			ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * L_3;
			L_3 = Enumerator_get_Current_m77BFB9F5DD0316790B9819CABDAF0C6E9182A3F9_inline((Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A *)(&V_0), /*hidden argument*/Enumerator_get_Current_m77BFB9F5DD0316790B9819CABDAF0C6E9182A3F9_RuntimeMethod_var);
			V_1 = L_3;
			// if (item.Type == library.Type)
			ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * L_4 = V_1;
			NullCheck(L_4);
			int32_t L_5 = L_4->get_Type_0();
			ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * L_6 = ___library0;
			NullCheck(L_6);
			int32_t L_7 = L_6->get_Type_0();
			if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
			{
				goto IL_003b;
			}
		}

IL_0028:
		{
			// ISD_Settings.Instance.Libraries.Remove(item);
			IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
			ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_8;
			L_8 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
			NullCheck(L_8);
			List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * L_9 = L_8->get_Libraries_14();
			ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * L_10 = V_1;
			NullCheck(L_9);
			bool L_11;
			L_11 = List_1_Remove_m684FA1158260011AB6320B5614F7C7732A5401FE(L_9, L_10, /*hidden argument*/List_1_Remove_m684FA1158260011AB6320B5614F7C7732A5401FE_RuntimeMethod_var);
			// break;
			IL2CPP_LEAVE(0x54, FINALLY_0046);
		}

IL_003b:
		{
			// foreach (var item in ISD_Settings.Instance.Libraries)
			bool L_12;
			L_12 = Enumerator_MoveNext_mC5A8248129604DAFB2E325BB372AF0B86B0394B7((Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mC5A8248129604DAFB2E325BB372AF0B86B0394B7_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0012;
			}
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m71F58DCD9FC7E613D8328ADBC7CF0151F9E9449F((Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A *)(&V_0), /*hidden argument*/Enumerator_Dispose_m71F58DCD9FC7E613D8328ADBC7CF0151F9E9449F_RuntimeMethod_var);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x54, IL_0054)
	}

IL_0054:
	{
		// ISD_Settings.Instance.Libraries.Add(library);
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_13;
		L_13 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_13);
		List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * L_14 = L_13->get_Libraries_14();
		ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * L_15 = ___library0;
		NullCheck(L_14);
		List_1_Add_m04B351E6612EAB1DFE9BF8BF35718F3D148E48B1(L_14, L_15, /*hidden argument*/List_1_Add_m04B351E6612EAB1DFE9BF8BF35718F3D148E48B1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SA.iOS.XCode.ISD_API::RemoveLibrary(SA.iOS.XCode.ISD_iOSLibrary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_API_RemoveLibrary_m21E9DFE519AAC22249BA6D481AC3FD8F580DFEEB (int32_t ___library0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m71F58DCD9FC7E613D8328ADBC7CF0151F9E9449F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC5A8248129604DAFB2E325BB372AF0B86B0394B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m77BFB9F5DD0316790B9819CABDAF0C6E9182A3F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m814F4B14E6D0F015A8D3350C2A5EA23A190E4FCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m684FA1158260011AB6320B5614F7C7732A5401FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var item in ISD_Settings.Instance.Libraries)
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_0;
		L_0 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * L_1 = L_0->get_Libraries_14();
		NullCheck(L_1);
		Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A  L_2;
		L_2 = List_1_GetEnumerator_m814F4B14E6D0F015A8D3350C2A5EA23A190E4FCF(L_1, /*hidden argument*/List_1_GetEnumerator_m814F4B14E6D0F015A8D3350C2A5EA23A190E4FCF_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0036;
		}

IL_0012:
		{
			// foreach (var item in ISD_Settings.Instance.Libraries)
			ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * L_3;
			L_3 = Enumerator_get_Current_m77BFB9F5DD0316790B9819CABDAF0C6E9182A3F9_inline((Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A *)(&V_0), /*hidden argument*/Enumerator_get_Current_m77BFB9F5DD0316790B9819CABDAF0C6E9182A3F9_RuntimeMethod_var);
			V_1 = L_3;
			// if (item.Type == library)
			ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * L_4 = V_1;
			NullCheck(L_4);
			int32_t L_5 = L_4->get_Type_0();
			int32_t L_6 = ___library0;
			if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
			{
				goto IL_0036;
			}
		}

IL_0023:
		{
			// ISD_Settings.Instance.Libraries.Remove(item);
			IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
			ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_7;
			L_7 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
			NullCheck(L_7);
			List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * L_8 = L_7->get_Libraries_14();
			ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * L_9 = V_1;
			NullCheck(L_8);
			bool L_10;
			L_10 = List_1_Remove_m684FA1158260011AB6320B5614F7C7732A5401FE(L_8, L_9, /*hidden argument*/List_1_Remove_m684FA1158260011AB6320B5614F7C7732A5401FE_RuntimeMethod_var);
			// break;
			IL2CPP_LEAVE(0x4F, FINALLY_0041);
		}

IL_0036:
		{
			// foreach (var item in ISD_Settings.Instance.Libraries)
			bool L_11;
			L_11 = Enumerator_MoveNext_mC5A8248129604DAFB2E325BB372AF0B86B0394B7((Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mC5A8248129604DAFB2E325BB372AF0B86B0394B7_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0012;
			}
		}

IL_003f:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m71F58DCD9FC7E613D8328ADBC7CF0151F9E9449F((Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A *)(&V_0), /*hidden argument*/Enumerator_Dispose_m71F58DCD9FC7E613D8328ADBC7CF0151F9E9449F_RuntimeMethod_var);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
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
// SA.iOS.XCode.ISD_CapabilitySettings SA.iOS.XCode.ISD_API::get_Capability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494 * ISD_API_get_Capability_mF859DD2865ADE43BB1536E3A98CE3F09E9D57F3D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ISD_CapabilitySettings Capability => ISD_Settings.Instance.Capability;
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_0;
		L_0 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_0);
		ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494 * L_1 = L_0->get_Capability_22();
		return L_1;
	}
}
// System.Boolean SA.iOS.XCode.ISD_API::HasFile(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ISD_API_HasFile_mB886BB52258E907992194F8BB4F73CE700899921 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___asset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2EB0FD67A9375FBEAA386C5A624EA294F22670C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7F4085B53D03998236876EFB300595BC15692141_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m12ED87C144D46A37CD32E78BAE645456C46B468D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m93D332F097ED9A125378B8E0EE00713FEED9D32D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tAA96ED9ADD4A3236942EDF90E25AEB9325A459CF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var assetFile in ISD_Settings.Instance.Files)
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_0;
		L_0 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_t9511BE61AEA93705100DA49C8230927A022DE41D * L_1 = L_0->get_Files_23();
		NullCheck(L_1);
		Enumerator_tAA96ED9ADD4A3236942EDF90E25AEB9325A459CF  L_2;
		L_2 = List_1_GetEnumerator_m93D332F097ED9A125378B8E0EE00713FEED9D32D(L_1, /*hidden argument*/List_1_GetEnumerator_m93D332F097ED9A125378B8E0EE00713FEED9D32D_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002a;
		}

IL_0012:
		{
			// foreach (var assetFile in ISD_Settings.Instance.Files)
			ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * L_3;
			L_3 = Enumerator_get_Current_m12ED87C144D46A37CD32E78BAE645456C46B468D_inline((Enumerator_tAA96ED9ADD4A3236942EDF90E25AEB9325A459CF *)(&V_0), /*hidden argument*/Enumerator_get_Current_m12ED87C144D46A37CD32E78BAE645456C46B468D_RuntimeMethod_var);
			// if (assetFile.Asset.Equals(asset))
			NullCheck(L_3);
			Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_4 = L_3->get_Asset_1();
			Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_5 = ___asset0;
			NullCheck(L_4);
			bool L_6;
			L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_4, L_5);
			if (!L_6)
			{
				goto IL_002a;
			}
		}

IL_0026:
		{
			// return true;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x45, FINALLY_0035);
		}

IL_002a:
		{
			// foreach (var assetFile in ISD_Settings.Instance.Files)
			bool L_7;
			L_7 = Enumerator_MoveNext_m7F4085B53D03998236876EFB300595BC15692141((Enumerator_tAA96ED9ADD4A3236942EDF90E25AEB9325A459CF *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m7F4085B53D03998236876EFB300595BC15692141_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0012;
			}
		}

IL_0033:
		{
			IL2CPP_LEAVE(0x43, FINALLY_0035);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2EB0FD67A9375FBEAA386C5A624EA294F22670C1((Enumerator_tAA96ED9ADD4A3236942EDF90E25AEB9325A459CF *)(&V_0), /*hidden argument*/Enumerator_Dispose_m2EB0FD67A9375FBEAA386C5A624EA294F22670C1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
		IL2CPP_JUMP_TBL(0x43, IL_0043)
	}

IL_0043:
	{
		// return false;
		return (bool)0;
	}

IL_0045:
	{
		// }
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Void SA.iOS.XCode.ISD_API::AddFile(UnityEngine.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_API_AddFile_mFD7248D66FB136F74C9546FF49A211855A0289DE (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___asset0, String_t* ___xCodePath1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var file = new ISD_AssetFile();
		ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * L_0 = (ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 *)il2cpp_codegen_object_new(ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8_il2cpp_TypeInfo_var);
		ISD_AssetFile__ctor_m3C1BED498B1E15E03F1B9FE40616382AB1D6B58C(L_0, /*hidden argument*/NULL);
		// file.Asset = asset;
		ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * L_1 = L_0;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2 = ___asset0;
		NullCheck(L_1);
		L_1->set_Asset_1(L_2);
		// file.XCodePath = xCodePath;
		ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * L_3 = L_1;
		String_t* L_4 = ___xCodePath1;
		NullCheck(L_3);
		L_3->set_XCodePath_0(L_4);
		// AddFile(file);
		ISD_API_AddFile_mA982E94514CC1DD5D912AB6A5F16E7CDB7D3C2EA(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SA.iOS.XCode.ISD_API::AddFile(SA.iOS.XCode.ISD_AssetFile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_API_AddFile_mA982E94514CC1DD5D912AB6A5F16E7CDB7D3C2EA (ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * ___file0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2EB0FD67A9375FBEAA386C5A624EA294F22670C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7F4085B53D03998236876EFB300595BC15692141_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m12ED87C144D46A37CD32E78BAE645456C46B468D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2B0E88607A2AB7DED813894B140462936144CE6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m93D332F097ED9A125378B8E0EE00713FEED9D32D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m51290C4CD148C51D89B29699197DFD8BB56CD879_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tAA96ED9ADD4A3236942EDF90E25AEB9325A459CF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var assetFile in ISD_Settings.Instance.Files)
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_0;
		L_0 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_t9511BE61AEA93705100DA49C8230927A022DE41D * L_1 = L_0->get_Files_23();
		NullCheck(L_1);
		Enumerator_tAA96ED9ADD4A3236942EDF90E25AEB9325A459CF  L_2;
		L_2 = List_1_GetEnumerator_m93D332F097ED9A125378B8E0EE00713FEED9D32D(L_1, /*hidden argument*/List_1_GetEnumerator_m93D332F097ED9A125378B8E0EE00713FEED9D32D_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_0012:
		{
			// foreach (var assetFile in ISD_Settings.Instance.Files)
			ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * L_3;
			L_3 = Enumerator_get_Current_m12ED87C144D46A37CD32E78BAE645456C46B468D_inline((Enumerator_tAA96ED9ADD4A3236942EDF90E25AEB9325A459CF *)(&V_0), /*hidden argument*/Enumerator_get_Current_m12ED87C144D46A37CD32E78BAE645456C46B468D_RuntimeMethod_var);
			V_1 = L_3;
			// if (assetFile.Asset.Equals(file.Asset))
			ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * L_4 = V_1;
			NullCheck(L_4);
			Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_5 = L_4->get_Asset_1();
			ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * L_6 = ___file0;
			NullCheck(L_6);
			Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_7 = L_6->get_Asset_1();
			NullCheck(L_5);
			bool L_8;
			L_8 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_7);
			if (!L_8)
			{
				goto IL_0040;
			}
		}

IL_002d:
		{
			// ISD_Settings.Instance.Files.Remove(assetFile);
			IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
			ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_9;
			L_9 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
			NullCheck(L_9);
			List_1_t9511BE61AEA93705100DA49C8230927A022DE41D * L_10 = L_9->get_Files_23();
			ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * L_11 = V_1;
			NullCheck(L_10);
			bool L_12;
			L_12 = List_1_Remove_m51290C4CD148C51D89B29699197DFD8BB56CD879(L_10, L_11, /*hidden argument*/List_1_Remove_m51290C4CD148C51D89B29699197DFD8BB56CD879_RuntimeMethod_var);
			// break;
			IL2CPP_LEAVE(0x59, FINALLY_004b);
		}

IL_0040:
		{
			// foreach (var assetFile in ISD_Settings.Instance.Files)
			bool L_13;
			L_13 = Enumerator_MoveNext_m7F4085B53D03998236876EFB300595BC15692141((Enumerator_tAA96ED9ADD4A3236942EDF90E25AEB9325A459CF *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m7F4085B53D03998236876EFB300595BC15692141_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0012;
			}
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x59, FINALLY_004b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004b;
	}

FINALLY_004b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2EB0FD67A9375FBEAA386C5A624EA294F22670C1((Enumerator_tAA96ED9ADD4A3236942EDF90E25AEB9325A459CF *)(&V_0), /*hidden argument*/Enumerator_Dispose_m2EB0FD67A9375FBEAA386C5A624EA294F22670C1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(75)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x59, IL_0059)
	}

IL_0059:
	{
		// ISD_Settings.Instance.Files.Add(file);
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_14;
		L_14 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_14);
		List_1_t9511BE61AEA93705100DA49C8230927A022DE41D * L_15 = L_14->get_Files_23();
		ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * L_16 = ___file0;
		NullCheck(L_15);
		List_1_Add_m2B0E88607A2AB7DED813894B140462936144CE6F(L_15, L_16, /*hidden argument*/List_1_Add_m2B0E88607A2AB7DED813894B140462936144CE6F_RuntimeMethod_var);
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
// System.String SA.iOS.XCode.ISD_AssetFile::get_FileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISD_AssetFile_get_FileName_mC376FE586364E8E37FCC62AE73688D5456CEC315 (ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF65278F7177375087952EBBED9F0F65965C98C96);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Asset == null) return "No File";
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = __this->get_Asset_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (Asset == null) return "No File";
		return _stringLiteralF65278F7177375087952EBBED9F0F65965C98C96;
	}

IL_0014:
	{
		// return Path.GetFileName(RelativeFilePath);
		String_t* L_2;
		L_2 = ISD_AssetFile_get_RelativeFilePath_m8999DDDA7516C5520FA1222B2371525C8C256E28(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String SA.iOS.XCode.ISD_AssetFile::get_RelativeFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISD_AssetFile_get_RelativeFilePath_m8999DDDA7516C5520FA1222B2371525C8C256E28 (ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Asset == null) return string.Empty;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = __this->get_Asset_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (Asset == null) return string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_2;
	}

IL_0014:
	{
		// return SA_AssetDatabase.GetAssetPath(Asset);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_3 = __this->get_Asset_1();
		String_t* L_4;
		L_4 = SA_AssetDatabase_GetAssetPath_m2AA2700917B5AF11E73615AE5BDE0F53C3CB38FD(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String SA.iOS.XCode.ISD_AssetFile::get_AbsoluteFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISD_AssetFile_get_AbsoluteFilePath_mD95E15297A8B95913553560ECA45C987349305D9 (ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Asset == null) return string.Empty;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = __this->get_Asset_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (Asset == null) return string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_2;
	}

IL_0014:
	{
		// return SA_AssetDatabase.GetAbsoluteAssetPath(Asset);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_3 = __this->get_Asset_1();
		String_t* L_4;
		L_4 = SA_AssetDatabase_GetAbsoluteAssetPath_m6F849E97709DFDC90AC7CB98C715948C1C3EE0AD(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String SA.iOS.XCode.ISD_AssetFile::get_XCodeRelativePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISD_AssetFile_get_XCodeRelativePath_m9F9935170FCA9FBF681170BE33D0179300AE121F (ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * __this, const RuntimeMethod* method)
{
	{
		// public string XCodeRelativePath => XCodePath + FileName;
		String_t* L_0 = __this->get_XCodePath_0();
		String_t* L_1;
		L_1 = ISD_AssetFile_get_FileName_mC376FE586364E8E37FCC62AE73688D5456CEC315(__this, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean SA.iOS.XCode.ISD_AssetFile::get_IsDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ISD_AssetFile_get_IsDirectory_mC9E675354B2B9D1763E48A3FDD58371D0821838F (ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * __this, const RuntimeMethod* method)
{
	{
		// var attr = File.GetAttributes(RelativeFilePath);
		String_t* L_0;
		L_0 = ISD_AssetFile_get_RelativeFilePath_m8999DDDA7516C5520FA1222B2371525C8C256E28(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = File_GetAttributes_mA80066D792280BBD379122592FB1C2E4E4C6C827(L_0, /*hidden argument*/NULL);
		// if ((attr & FileAttributes.Directory) == FileAttributes.Directory)
		if ((!(((uint32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)16)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0014;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0014:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void SA.iOS.XCode.ISD_AssetFile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_AssetFile__ctor_m3C1BED498B1E15E03F1B9FE40616382AB1D6B58C (ISD_AssetFile_t9B96A83E6FE0CB81DAC0C98EAD43603C1F5283E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string XCodePath = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_XCodePath_0(L_0);
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
// System.Void SA.iOS.XCode.ISD_BuildProperty::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_BuildProperty__ctor_mF252D01853011679E079B8971CAB33B1F0C55DEB (ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7471FC92FC1AA570D64A46C83CB352615E0781C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8F50872454B1DDA643F3A29398B40D5880A7DDA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string[] m_options = new string[] { "YES", "NO" };
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD8F50872454B1DDA643F3A29398B40D5880A7DDA);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD8F50872454B1DDA643F3A29398B40D5880A7DDA);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral7471FC92FC1AA570D64A46C83CB352615E0781C2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral7471FC92FC1AA570D64A46C83CB352615E0781C2);
		__this->set_m_options_2(L_2);
		// public ISD_BuildProperty(string name, string value)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_name = name;
		String_t* L_3 = ___name0;
		__this->set_m_name_0(L_3);
		// m_value = value;
		String_t* L_4 = ___value1;
		__this->set_m_value_1(L_4);
		// }
		return;
	}
}
// System.String SA.iOS.XCode.ISD_BuildProperty::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISD_BuildProperty_get_Name_m530C68A0A0BC6B78DE7861E6D569C0318A1F7800 (ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * __this, const RuntimeMethod* method)
{
	{
		// public string Name => m_name;
		String_t* L_0 = __this->get_m_name_0();
		return L_0;
	}
}
// System.String SA.iOS.XCode.ISD_BuildProperty::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISD_BuildProperty_get_Value_mB6A6E69A53564DF62195A64E267CF6A08A577032 (ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * __this, const RuntimeMethod* method)
{
	{
		// if (string.IsNullOrEmpty(m_value)) m_value = m_options[0];
		String_t* L_0 = __this->get_m_value_1();
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// if (string.IsNullOrEmpty(m_value)) m_value = m_options[0];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = __this->get_m_options_2();
		NullCheck(L_2);
		int32_t L_3 = 0;
		String_t* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		__this->set_m_value_1(L_4);
	}

IL_001b:
	{
		// return m_value;
		String_t* L_5 = __this->get_m_value_1();
		return L_5;
	}
}
// System.Void SA.iOS.XCode.ISD_BuildProperty::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_BuildProperty_set_Value_m4B486219C24F785D40DCEAC5056584CBB1757A17 (ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set => m_value = value;
		String_t* L_0 = ___value0;
		__this->set_m_value_1(L_0);
		return;
	}
}
// System.String[] SA.iOS.XCode.ISD_BuildProperty::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ISD_BuildProperty_get_Options_mA1E1C7877841DB199AC738CC0CD862895BBEF8CE (ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * __this, const RuntimeMethod* method)
{
	{
		// public string[] Options => m_options;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_m_options_2();
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
// System.Void SA.iOS.XCode.ISD_CapabilitySettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_CapabilitySettings__ctor_mE439D8DA1FFBA2852B4AD21067701A39A40886AD (ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppGroupsCapability_tD9E42DF113B62E0A6438CC48C156C21D21C0B7BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplePayCapability_t8006036C3FABF39E040353EC648A79DA790CEB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssociatedDomainsCapability_t693B11E62E17C6609C3F79C3A2E63779570FFB27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackgroundModesCapability_tEC48C548936457ED233CD3BACE3DA008CDCEB6D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeychainSharingCapability_t81BC5A01F4AD5A9D00BA956731CF3BC636D5FDE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapsCapability_tB3B5DB6D42952FBFF0D298E2B53ADF96E70C986F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PushNotificationsCapability_tA3F0ED1F949FCD420D665B366053B9EA3B8A9B09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WalletCapability_t2A652861CD399823A3527B05AD810692827091DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iCloudCapability_t623E461BD2CEC236034D4DF6E94ED7065A9758EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public iCloudCapability iCloud = new iCloudCapability();
		iCloudCapability_t623E461BD2CEC236034D4DF6E94ED7065A9758EC * L_0 = (iCloudCapability_t623E461BD2CEC236034D4DF6E94ED7065A9758EC *)il2cpp_codegen_object_new(iCloudCapability_t623E461BD2CEC236034D4DF6E94ED7065A9758EC_il2cpp_TypeInfo_var);
		iCloudCapability__ctor_m7E84F82292F97C01BB1A29817824A00F7400E218(L_0, /*hidden argument*/NULL);
		__this->set_iCloud_0(L_0);
		// public PushNotificationsCapability PushNotifications = new PushNotificationsCapability();
		PushNotificationsCapability_tA3F0ED1F949FCD420D665B366053B9EA3B8A9B09 * L_1 = (PushNotificationsCapability_tA3F0ED1F949FCD420D665B366053B9EA3B8A9B09 *)il2cpp_codegen_object_new(PushNotificationsCapability_tA3F0ED1F949FCD420D665B366053B9EA3B8A9B09_il2cpp_TypeInfo_var);
		PushNotificationsCapability__ctor_m11BEE5BD1261B0D3A23C4E3BE9455BF67E345EF9(L_1, /*hidden argument*/NULL);
		__this->set_PushNotifications_1(L_1);
		// public Capability GameCenter = new Capability();
		Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * L_2 = (Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 *)il2cpp_codegen_object_new(Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8_il2cpp_TypeInfo_var);
		Capability__ctor_mFA0B103915641E5599987ACBC6776730B0ABF2B5(L_2, /*hidden argument*/NULL);
		__this->set_GameCenter_2(L_2);
		// public Capability SignInWithApple = new Capability();
		Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * L_3 = (Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 *)il2cpp_codegen_object_new(Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8_il2cpp_TypeInfo_var);
		Capability__ctor_mFA0B103915641E5599987ACBC6776730B0ABF2B5(L_3, /*hidden argument*/NULL);
		__this->set_SignInWithApple_3(L_3);
		// public WalletCapability Wallet = new WalletCapability();
		WalletCapability_t2A652861CD399823A3527B05AD810692827091DC * L_4 = (WalletCapability_t2A652861CD399823A3527B05AD810692827091DC *)il2cpp_codegen_object_new(WalletCapability_t2A652861CD399823A3527B05AD810692827091DC_il2cpp_TypeInfo_var);
		WalletCapability__ctor_m5ECED46ED8D9C0B7B3169FD1013EEFEBF2FFF16B(L_4, /*hidden argument*/NULL);
		__this->set_Wallet_4(L_4);
		// public Capability Siri = new Capability();
		Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * L_5 = (Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 *)il2cpp_codegen_object_new(Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8_il2cpp_TypeInfo_var);
		Capability__ctor_mFA0B103915641E5599987ACBC6776730B0ABF2B5(L_5, /*hidden argument*/NULL);
		__this->set_Siri_5(L_5);
		// public ApplePayCapability ApplePay = new ApplePayCapability();
		ApplePayCapability_t8006036C3FABF39E040353EC648A79DA790CEB03 * L_6 = (ApplePayCapability_t8006036C3FABF39E040353EC648A79DA790CEB03 *)il2cpp_codegen_object_new(ApplePayCapability_t8006036C3FABF39E040353EC648A79DA790CEB03_il2cpp_TypeInfo_var);
		ApplePayCapability__ctor_m551B20D4482430CE108D2BE0D64D4D56037A0FC4(L_6, /*hidden argument*/NULL);
		__this->set_ApplePay_6(L_6);
		// public Capability InAppPurchase = new Capability();
		Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * L_7 = (Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 *)il2cpp_codegen_object_new(Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8_il2cpp_TypeInfo_var);
		Capability__ctor_mFA0B103915641E5599987ACBC6776730B0ABF2B5(L_7, /*hidden argument*/NULL);
		__this->set_InAppPurchase_7(L_7);
		// public MapsCapability Maps = new MapsCapability();
		MapsCapability_tB3B5DB6D42952FBFF0D298E2B53ADF96E70C986F * L_8 = (MapsCapability_tB3B5DB6D42952FBFF0D298E2B53ADF96E70C986F *)il2cpp_codegen_object_new(MapsCapability_tB3B5DB6D42952FBFF0D298E2B53ADF96E70C986F_il2cpp_TypeInfo_var);
		MapsCapability__ctor_m4EA52C285861883AA716EC38CBCD6F77808AF67B(L_8, /*hidden argument*/NULL);
		__this->set_Maps_8(L_8);
		// public Capability PersonalVPN = new Capability();
		Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * L_9 = (Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 *)il2cpp_codegen_object_new(Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8_il2cpp_TypeInfo_var);
		Capability__ctor_mFA0B103915641E5599987ACBC6776730B0ABF2B5(L_9, /*hidden argument*/NULL);
		__this->set_PersonalVPN_9(L_9);
		// public BackgroundModesCapability BackgroundModes = new BackgroundModesCapability();
		BackgroundModesCapability_tEC48C548936457ED233CD3BACE3DA008CDCEB6D2 * L_10 = (BackgroundModesCapability_tEC48C548936457ED233CD3BACE3DA008CDCEB6D2 *)il2cpp_codegen_object_new(BackgroundModesCapability_tEC48C548936457ED233CD3BACE3DA008CDCEB6D2_il2cpp_TypeInfo_var);
		BackgroundModesCapability__ctor_m416C334B84C833DFC69C8DF783BD408A36EC781C(L_10, /*hidden argument*/NULL);
		__this->set_BackgroundModes_10(L_10);
		// public Capability InterAppAudio = new Capability();
		Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * L_11 = (Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 *)il2cpp_codegen_object_new(Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8_il2cpp_TypeInfo_var);
		Capability__ctor_mFA0B103915641E5599987ACBC6776730B0ABF2B5(L_11, /*hidden argument*/NULL);
		__this->set_InterAppAudio_11(L_11);
		// public KeychainSharingCapability KeychainSharing = new KeychainSharingCapability();
		KeychainSharingCapability_t81BC5A01F4AD5A9D00BA956731CF3BC636D5FDE3 * L_12 = (KeychainSharingCapability_t81BC5A01F4AD5A9D00BA956731CF3BC636D5FDE3 *)il2cpp_codegen_object_new(KeychainSharingCapability_t81BC5A01F4AD5A9D00BA956731CF3BC636D5FDE3_il2cpp_TypeInfo_var);
		KeychainSharingCapability__ctor_mB983485F6D26F50F93971267AB1D341F674BACC9(L_12, /*hidden argument*/NULL);
		__this->set_KeychainSharing_12(L_12);
		// public AssociatedDomainsCapability AssociatedDomains = new AssociatedDomainsCapability();
		AssociatedDomainsCapability_t693B11E62E17C6609C3F79C3A2E63779570FFB27 * L_13 = (AssociatedDomainsCapability_t693B11E62E17C6609C3F79C3A2E63779570FFB27 *)il2cpp_codegen_object_new(AssociatedDomainsCapability_t693B11E62E17C6609C3F79C3A2E63779570FFB27_il2cpp_TypeInfo_var);
		AssociatedDomainsCapability__ctor_m9027A92208EF95F681DC401DCEA9C097EBB594AA(L_13, /*hidden argument*/NULL);
		__this->set_AssociatedDomains_13(L_13);
		// public AppGroupsCapability AppGroups = new AppGroupsCapability();
		AppGroupsCapability_tD9E42DF113B62E0A6438CC48C156C21D21C0B7BE * L_14 = (AppGroupsCapability_tD9E42DF113B62E0A6438CC48C156C21D21C0B7BE *)il2cpp_codegen_object_new(AppGroupsCapability_tD9E42DF113B62E0A6438CC48C156C21D21C0B7BE_il2cpp_TypeInfo_var);
		AppGroupsCapability__ctor_m0D830E58DE635C95538F56CA2D7953FC8401A0FB(L_14, /*hidden argument*/NULL);
		__this->set_AppGroups_14(L_14);
		// public Capability DataProtection = new Capability();
		Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * L_15 = (Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 *)il2cpp_codegen_object_new(Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8_il2cpp_TypeInfo_var);
		Capability__ctor_mFA0B103915641E5599987ACBC6776730B0ABF2B5(L_15, /*hidden argument*/NULL);
		__this->set_DataProtection_15(L_15);
		// public Capability HomeKit = new Capability();
		Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * L_16 = (Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 *)il2cpp_codegen_object_new(Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8_il2cpp_TypeInfo_var);
		Capability__ctor_mFA0B103915641E5599987ACBC6776730B0ABF2B5(L_16, /*hidden argument*/NULL);
		__this->set_HomeKit_16(L_16);
		// public Capability HealthKit = new Capability();
		Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * L_17 = (Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 *)il2cpp_codegen_object_new(Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8_il2cpp_TypeInfo_var);
		Capability__ctor_mFA0B103915641E5599987ACBC6776730B0ABF2B5(L_17, /*hidden argument*/NULL);
		__this->set_HealthKit_17(L_17);
		// public Capability WirelessAccessoryConfiguration = new Capability();
		Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * L_18 = (Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 *)il2cpp_codegen_object_new(Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8_il2cpp_TypeInfo_var);
		Capability__ctor_mFA0B103915641E5599987ACBC6776730B0ABF2B5(L_18, /*hidden argument*/NULL);
		__this->set_WirelessAccessoryConfiguration_18(L_18);
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
// System.Void SA.iOS.XCode.ISD_EmbedFramework::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_EmbedFramework__ctor_m61953CFB61B241E59A51322C4555EAF8A772E8EF (ISD_EmbedFramework_t7BF386C600EFF993346BF39090B1B7A69773ACE0 * __this, const RuntimeMethod* method)
{
	{
		ISD_AssetFile__ctor_m3C1BED498B1E15E03F1B9FE40616382AB1D6B58C(__this, /*hidden argument*/NULL);
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
// System.Void SA.iOS.XCode.ISD_Flag::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_Flag__ctor_m09F11A35F14C8E04B9869BE6B301C6D7E849F765 (ISD_Flag_tCC44FFE7C3FBCCDFD24304E6B53532D2A9FB8927 * __this, const RuntimeMethod* method)
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
// System.Void SA.iOS.XCode.ISD_Framework::.ctor(SA.iOS.XCode.ISD_iOSFramework,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_Framework__ctor_mE9A970533521AF6DE42FE3C26CBD4E3A872E63A0 (ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * __this, int32_t ___type0, bool ___optional1, const RuntimeMethod* method)
{
	{
		// public ISD_Framework(ISD_iOSFramework type, bool optional = false)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Type = type;
		int32_t L_0 = ___type0;
		__this->set_Type_2(L_0);
		// IsOptional = optional;
		bool L_1 = ___optional1;
		__this->set_IsOptional_0(L_1);
		// }
		return;
	}
}
// System.Void SA.iOS.XCode.ISD_Framework::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_Framework__ctor_mEA4316FB94B90A3DE8583251A83B71C404B34D63 (ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * __this, String_t* ___frameworkName0, bool ___optional1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumUtility_ParseEnum_TisISD_iOSFramework_tB5D22C8FFBD69FD6511AC3464CD39A1F280C8A4B_m81B43426214714A54C1D1148F5725622DA966096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1924DB465BC02D201D9D19DABC69287268593655);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ISD_Framework(string frameworkName, bool optional = false)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// frameworkName = frameworkName.Replace(".framework", string.Empty);
		String_t* L_0 = ___frameworkName0;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_0);
		String_t* L_2;
		L_2 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_0, _stringLiteral1924DB465BC02D201D9D19DABC69287268593655, L_1, /*hidden argument*/NULL);
		___frameworkName0 = L_2;
		// Type = EnumUtility.ParseEnum<ISD_iOSFramework>(frameworkName);
		String_t* L_3 = ___frameworkName0;
		int32_t L_4;
		L_4 = EnumUtility_ParseEnum_TisISD_iOSFramework_tB5D22C8FFBD69FD6511AC3464CD39A1F280C8A4B_m81B43426214714A54C1D1148F5725622DA966096(L_3, /*hidden argument*/EnumUtility_ParseEnum_TisISD_iOSFramework_tB5D22C8FFBD69FD6511AC3464CD39A1F280C8A4B_m81B43426214714A54C1D1148F5725622DA966096_RuntimeMethod_var);
		__this->set_Type_2(L_4);
		// IsOptional = optional;
		bool L_5 = ___optional1;
		__this->set_IsOptional_0(L_5);
		// }
		return;
	}
}
// System.String SA.iOS.XCode.ISD_Framework::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISD_Framework_get_Name_m6851257135536750D5779BC928DB19726386E9EC (ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_iOSFramework_tB5D22C8FFBD69FD6511AC3464CD39A1F280C8A4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1924DB465BC02D201D9D19DABC69287268593655);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Name => Type.ToString() + ".framework";
		int32_t* L_0 = __this->get_address_of_Type_2();
		RuntimeObject * L_1 = Box(ISD_iOSFramework_tB5D22C8FFBD69FD6511AC3464CD39A1F280C8A4B_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		*L_0 = *(int32_t*)UnBox(L_1);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_2, _stringLiteral1924DB465BC02D201D9D19DABC69287268593655, /*hidden argument*/NULL);
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
// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Framework> SA.iOS.XCode.ISD_FrameworkHandler::get_AvailableFrameworks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * ISD_FrameworkHandler_get_AvailableFrameworks_m1A5F658A86F19C2C9DC2FDC9C14E67B463CD5A78 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE970889E8AFFAF3D1BE8106F7B5E40DB16CC9D84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7A4467D8767DE31A96E02F234DC94BF1B7C4B84B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAF883A195EBF34B6BFD37F9EDC4378A1D3D3E673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_iOSFramework_tB5D22C8FFBD69FD6511AC3464CD39A1F280C8A4B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_iOSFramework_tB5D22C8FFBD69FD6511AC3464CD39A1F280C8A4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5F818B409F00C6EA664FB9B864A1C3C8369C83C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD9CF71F579DEC474A9A578CFAFDB0D5AF5344186_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * V_0 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_1 = NULL;
	Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * V_3 = NULL;
	ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// var resultList = new List<ISD_Framework>();
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_0 = (List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC *)il2cpp_codegen_object_new(List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC_il2cpp_TypeInfo_var);
		List_1__ctor_mD9CF71F579DEC474A9A578CFAFDB0D5AF5344186(L_0, /*hidden argument*/List_1__ctor_mD9CF71F579DEC474A9A578CFAFDB0D5AF5344186_RuntimeMethod_var);
		V_0 = L_0;
		// var strings = new List<string>(Enum.GetNames(typeof(ISD_iOSFramework)));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (ISD_iOSFramework_tB5D22C8FFBD69FD6511AC3464CD39A1F280C8A4B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8(L_2, /*hidden argument*/NULL);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323(L_4, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var);
		V_1 = L_4;
		// foreach (var frmwrk in ISD_Settings.Instance.Frameworks)
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_5;
		L_5 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_5);
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_6 = L_5->get_Frameworks_12();
		NullCheck(L_6);
		Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509  L_7;
		L_7 = List_1_GetEnumerator_m5F818B409F00C6EA664FB9B864A1C3C8369C83C7(L_6, /*hidden argument*/List_1_GetEnumerator_m5F818B409F00C6EA664FB9B864A1C3C8369C83C7_RuntimeMethod_var);
		V_2 = L_7;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0066;
		}

IL_002d:
		{
			// foreach (var frmwrk in ISD_Settings.Instance.Frameworks)
			ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_8;
			L_8 = Enumerator_get_Current_mAF883A195EBF34B6BFD37F9EDC4378A1D3D3E673_inline((Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mAF883A195EBF34B6BFD37F9EDC4378A1D3D3E673_RuntimeMethod_var);
			V_3 = L_8;
			// if (strings.Contains(frmwrk.Type.ToString()))
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_9 = V_1;
			ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_10 = V_3;
			NullCheck(L_10);
			int32_t* L_11 = L_10->get_address_of_Type_2();
			RuntimeObject * L_12 = Box(ISD_iOSFramework_tB5D22C8FFBD69FD6511AC3464CD39A1F280C8A4B_il2cpp_TypeInfo_var, L_11);
			NullCheck(L_12);
			String_t* L_13;
			L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
			*L_11 = *(int32_t*)UnBox(L_12);
			NullCheck(L_9);
			bool L_14;
			L_14 = List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F(L_9, L_13, /*hidden argument*/List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
			if (!L_14)
			{
				goto IL_0066;
			}
		}

IL_004e:
		{
			// strings.Remove(frmwrk.Type.ToString());
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_15 = V_1;
			ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_16 = V_3;
			NullCheck(L_16);
			int32_t* L_17 = L_16->get_address_of_Type_2();
			RuntimeObject * L_18 = Box(ISD_iOSFramework_tB5D22C8FFBD69FD6511AC3464CD39A1F280C8A4B_il2cpp_TypeInfo_var, L_17);
			NullCheck(L_18);
			String_t* L_19;
			L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
			*L_17 = *(int32_t*)UnBox(L_18);
			NullCheck(L_15);
			bool L_20;
			L_20 = List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70(L_15, L_19, /*hidden argument*/List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70_RuntimeMethod_var);
		}

IL_0066:
		{
			// foreach (var frmwrk in ISD_Settings.Instance.Frameworks)
			bool L_21;
			L_21 = Enumerator_MoveNext_m7A4467D8767DE31A96E02F234DC94BF1B7C4B84B((Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m7A4467D8767DE31A96E02F234DC94BF1B7C4B84B_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_002d;
			}
		}

IL_006f:
		{
			IL2CPP_LEAVE(0x7F, FINALLY_0071);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0071;
	}

FINALLY_0071:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE970889E8AFFAF3D1BE8106F7B5E40DB16CC9D84((Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mE970889E8AFFAF3D1BE8106F7B5E40DB16CC9D84_RuntimeMethod_var);
		IL2CPP_END_FINALLY(113)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(113)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
	}

IL_007f:
	{
		// foreach (var frmwrk in DefaultFrameworks)
		IL2CPP_RUNTIME_CLASS_INIT(ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var);
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_22;
		L_22 = ISD_FrameworkHandler_get_DefaultFrameworks_m9B22CA524282B1752B056FBCB30E848C64B2E8E5(/*hidden argument*/NULL);
		NullCheck(L_22);
		Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509  L_23;
		L_23 = List_1_GetEnumerator_m5F818B409F00C6EA664FB9B864A1C3C8369C83C7(L_22, /*hidden argument*/List_1_GetEnumerator_m5F818B409F00C6EA664FB9B864A1C3C8369C83C7_RuntimeMethod_var);
		V_2 = L_23;
	}

IL_008a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c8;
		}

IL_008c:
		{
			// foreach (var frmwrk in DefaultFrameworks)
			ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_24;
			L_24 = Enumerator_get_Current_mAF883A195EBF34B6BFD37F9EDC4378A1D3D3E673_inline((Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mAF883A195EBF34B6BFD37F9EDC4378A1D3D3E673_RuntimeMethod_var);
			V_4 = L_24;
			// if (strings.Contains(frmwrk.Type.ToString()))
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_25 = V_1;
			ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_26 = V_4;
			NullCheck(L_26);
			int32_t* L_27 = L_26->get_address_of_Type_2();
			RuntimeObject * L_28 = Box(ISD_iOSFramework_tB5D22C8FFBD69FD6511AC3464CD39A1F280C8A4B_il2cpp_TypeInfo_var, L_27);
			NullCheck(L_28);
			String_t* L_29;
			L_29 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
			*L_27 = *(int32_t*)UnBox(L_28);
			NullCheck(L_25);
			bool L_30;
			L_30 = List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F(L_25, L_29, /*hidden argument*/List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
			if (!L_30)
			{
				goto IL_00c8;
			}
		}

IL_00af:
		{
			// strings.Remove(frmwrk.Type.ToString());
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_31 = V_1;
			ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_32 = V_4;
			NullCheck(L_32);
			int32_t* L_33 = L_32->get_address_of_Type_2();
			RuntimeObject * L_34 = Box(ISD_iOSFramework_tB5D22C8FFBD69FD6511AC3464CD39A1F280C8A4B_il2cpp_TypeInfo_var, L_33);
			NullCheck(L_34);
			String_t* L_35;
			L_35 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_34);
			*L_33 = *(int32_t*)UnBox(L_34);
			NullCheck(L_31);
			bool L_36;
			L_36 = List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70(L_31, L_35, /*hidden argument*/List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70_RuntimeMethod_var);
		}

IL_00c8:
		{
			// foreach (var frmwrk in DefaultFrameworks)
			bool L_37;
			L_37 = Enumerator_MoveNext_m7A4467D8767DE31A96E02F234DC94BF1B7C4B84B((Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m7A4467D8767DE31A96E02F234DC94BF1B7C4B84B_RuntimeMethod_var);
			if (L_37)
			{
				goto IL_008c;
			}
		}

IL_00d1:
		{
			IL2CPP_LEAVE(0xE1, FINALLY_00d3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d3;
	}

FINALLY_00d3:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE970889E8AFFAF3D1BE8106F7B5E40DB16CC9D84((Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mE970889E8AFFAF3D1BE8106F7B5E40DB16CC9D84_RuntimeMethod_var);
		IL2CPP_END_FINALLY(211)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(211)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xE1, IL_00e1)
	}

IL_00e1:
	{
		// foreach (ISD_iOSFramework v in Enum.GetValues(typeof(ISD_iOSFramework)))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_38 = { reinterpret_cast<intptr_t> (ISD_iOSFramework_tB5D22C8FFBD69FD6511AC3464CD39A1F280C8A4B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_39;
		L_39 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_38, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_40;
		L_40 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964(L_40, /*hidden argument*/NULL);
		V_5 = L_41;
	}

IL_00f7:
	try
	{ // begin try (depth: 1)
		{
			goto IL_012a;
		}

IL_00f9:
		{
			// foreach (ISD_iOSFramework v in Enum.GetValues(typeof(ISD_iOSFramework)))
			RuntimeObject* L_42 = V_5;
			NullCheck(L_42);
			RuntimeObject * L_43;
			L_43 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_42);
			V_6 = ((*(int32_t*)((int32_t*)UnBox(L_43, ISD_iOSFramework_tB5D22C8FFBD69FD6511AC3464CD39A1F280C8A4B_il2cpp_TypeInfo_var))));
			// if (strings.Contains(v.ToString()))
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_44 = V_1;
			RuntimeObject * L_45 = Box(ISD_iOSFramework_tB5D22C8FFBD69FD6511AC3464CD39A1F280C8A4B_il2cpp_TypeInfo_var, (&V_6));
			NullCheck(L_45);
			String_t* L_46;
			L_46 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_45);
			V_6 = *(int32_t*)UnBox(L_45);
			NullCheck(L_44);
			bool L_47;
			L_47 = List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F(L_44, L_46, /*hidden argument*/List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
			if (!L_47)
			{
				goto IL_012a;
			}
		}

IL_011c:
		{
			// resultList.Add(new ISD_Framework((ISD_iOSFramework)v));
			List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_48 = V_0;
			int32_t L_49 = V_6;
			ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_50 = (ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 *)il2cpp_codegen_object_new(ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33_il2cpp_TypeInfo_var);
			ISD_Framework__ctor_mE9A970533521AF6DE42FE3C26CBD4E3A872E63A0(L_50, L_49, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_48);
			List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488(L_48, L_50, /*hidden argument*/List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488_RuntimeMethod_var);
		}

IL_012a:
		{
			// foreach (ISD_iOSFramework v in Enum.GetValues(typeof(ISD_iOSFramework)))
			RuntimeObject* L_51 = V_5;
			NullCheck(L_51);
			bool L_52;
			L_52 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_51);
			if (L_52)
			{
				goto IL_00f9;
			}
		}

IL_0133:
		{
			IL2CPP_LEAVE(0x14A, FINALLY_0135);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0135;
	}

FINALLY_0135:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_53 = V_5;
			V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_53, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_54 = V_7;
			if (!L_54)
			{
				goto IL_0149;
			}
		}

IL_0142:
		{
			RuntimeObject* L_55 = V_7;
			NullCheck(L_55);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_55);
		}

IL_0149:
		{
			IL2CPP_END_FINALLY(309)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(309)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14A, IL_014a)
	}

IL_014a:
	{
		// return resultList;
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_56 = V_0;
		return L_56;
	}
}
// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Framework> SA.iOS.XCode.ISD_FrameworkHandler::get_DefaultFrameworks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * ISD_FrameworkHandler_get_DefaultFrameworks_m9B22CA524282B1752B056FBCB30E848C64B2E8E5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD9CF71F579DEC474A9A578CFAFDB0D5AF5344186_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_DefaultFrameworks == null)
		IL2CPP_RUNTIME_CLASS_INIT(ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var);
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_0 = ((ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_StaticFields*)il2cpp_codegen_static_fields_for(ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var))->get__DefaultFrameworks_4();
		if (L_0)
		{
			goto IL_010f;
		}
	}
	{
		// _DefaultFrameworks = new List<ISD_Framework>();
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_1 = (List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC *)il2cpp_codegen_object_new(List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC_il2cpp_TypeInfo_var);
		List_1__ctor_mD9CF71F579DEC474A9A578CFAFDB0D5AF5344186(L_1, /*hidden argument*/List_1__ctor_mD9CF71F579DEC474A9A578CFAFDB0D5AF5344186_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var);
		((ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_StaticFields*)il2cpp_codegen_static_fields_for(ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var))->set__DefaultFrameworks_4(L_1);
		// _DefaultFrameworks.Add(new ISD_Framework(ISD_iOSFramework.CoreText));
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_2 = ((ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_StaticFields*)il2cpp_codegen_static_fields_for(ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var))->get__DefaultFrameworks_4();
		ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_3 = (ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 *)il2cpp_codegen_object_new(ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33_il2cpp_TypeInfo_var);
		ISD_Framework__ctor_mE9A970533521AF6DE42FE3C26CBD4E3A872E63A0(L_3, ((int32_t)30), (bool)0, /*hidden argument*/NULL);
		NullCheck(L_2);
		List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488(L_2, L_3, /*hidden argument*/List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488_RuntimeMethod_var);
		// _DefaultFrameworks.Add(new ISD_Framework(ISD_iOSFramework.AudioToolbox));
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_4 = ((ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_StaticFields*)il2cpp_codegen_static_fields_for(ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var))->get__DefaultFrameworks_4();
		ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_5 = (ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 *)il2cpp_codegen_object_new(ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33_il2cpp_TypeInfo_var);
		ISD_Framework__ctor_mE9A970533521AF6DE42FE3C26CBD4E3A872E63A0(L_5, 7, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_4);
		List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488(L_4, L_5, /*hidden argument*/List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488_RuntimeMethod_var);
		// _DefaultFrameworks.Add(new ISD_Framework(ISD_iOSFramework.AVFoundation));
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_6 = ((ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_StaticFields*)il2cpp_codegen_static_fields_for(ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var))->get__DefaultFrameworks_4();
		ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_7 = (ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 *)il2cpp_codegen_object_new(ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33_il2cpp_TypeInfo_var);
		ISD_Framework__ctor_mE9A970533521AF6DE42FE3C26CBD4E3A872E63A0(L_7, ((int32_t)9), (bool)0, /*hidden argument*/NULL);
		NullCheck(L_6);
		List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488(L_6, L_7, /*hidden argument*/List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488_RuntimeMethod_var);
		// _DefaultFrameworks.Add(new ISD_Framework(ISD_iOSFramework.CFNetwork));
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_8 = ((ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_StaticFields*)il2cpp_codegen_static_fields_for(ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var))->get__DefaultFrameworks_4();
		ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_9 = (ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 *)il2cpp_codegen_object_new(ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33_il2cpp_TypeInfo_var);
		ISD_Framework__ctor_mE9A970533521AF6DE42FE3C26CBD4E3A872E63A0(L_9, ((int32_t)13), (bool)0, /*hidden argument*/NULL);
		NullCheck(L_8);
		List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488(L_8, L_9, /*hidden argument*/List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488_RuntimeMethod_var);
		// _DefaultFrameworks.Add(new ISD_Framework(ISD_iOSFramework.CoreGraphics));
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_10 = ((ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_StaticFields*)il2cpp_codegen_static_fields_for(ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var))->get__DefaultFrameworks_4();
		ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_11 = (ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 *)il2cpp_codegen_object_new(ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33_il2cpp_TypeInfo_var);
		ISD_Framework__ctor_mE9A970533521AF6DE42FE3C26CBD4E3A872E63A0(L_11, ((int32_t)22), (bool)0, /*hidden argument*/NULL);
		NullCheck(L_10);
		List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488(L_10, L_11, /*hidden argument*/List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488_RuntimeMethod_var);
		// _DefaultFrameworks.Add(new ISD_Framework(ISD_iOSFramework.CoreMedia));
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_12 = ((ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_StaticFields*)il2cpp_codegen_static_fields_for(ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var))->get__DefaultFrameworks_4();
		ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_13 = (ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 *)il2cpp_codegen_object_new(ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33_il2cpp_TypeInfo_var);
		ISD_Framework__ctor_mE9A970533521AF6DE42FE3C26CBD4E3A872E63A0(L_13, ((int32_t)25), (bool)0, /*hidden argument*/NULL);
		NullCheck(L_12);
		List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488(L_12, L_13, /*hidden argument*/List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488_RuntimeMethod_var);
		// _DefaultFrameworks.Add(new ISD_Framework(ISD_iOSFramework.CoreMotion));
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_14 = ((ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_StaticFields*)il2cpp_codegen_static_fields_for(ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var))->get__DefaultFrameworks_4();
		ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_15 = (ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 *)il2cpp_codegen_object_new(ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33_il2cpp_TypeInfo_var);
		ISD_Framework__ctor_mE9A970533521AF6DE42FE3C26CBD4E3A872E63A0(L_15, ((int32_t)27), (bool)0, /*hidden argument*/NULL);
		NullCheck(L_14);
		List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488(L_14, L_15, /*hidden argument*/List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488_RuntimeMethod_var);
		// _DefaultFrameworks.Add(new ISD_Framework(ISD_iOSFramework.CoreVideo));
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_16 = ((ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_StaticFields*)il2cpp_codegen_static_fields_for(ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var))->get__DefaultFrameworks_4();
		ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_17 = (ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 *)il2cpp_codegen_object_new(ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33_il2cpp_TypeInfo_var);
		ISD_Framework__ctor_mE9A970533521AF6DE42FE3C26CBD4E3A872E63A0(L_17, ((int32_t)31), (bool)0, /*hidden argument*/NULL);
		NullCheck(L_16);
		List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488(L_16, L_17, /*hidden argument*/List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488_RuntimeMethod_var);
		// _DefaultFrameworks.Add(new ISD_Framework(ISD_iOSFramework.Foundation));
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_18 = ((ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_StaticFields*)il2cpp_codegen_static_fields_for(ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var))->get__DefaultFrameworks_4();
		ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_19 = (ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 *)il2cpp_codegen_object_new(ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33_il2cpp_TypeInfo_var);
		ISD_Framework__ctor_mE9A970533521AF6DE42FE3C26CBD4E3A872E63A0(L_19, ((int32_t)35), (bool)0, /*hidden argument*/NULL);
		NullCheck(L_18);
		List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488(L_18, L_19, /*hidden argument*/List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488_RuntimeMethod_var);
		// _DefaultFrameworks.Add(new ISD_Framework(ISD_iOSFramework.OpenAL));
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_20 = ((ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_StaticFields*)il2cpp_codegen_static_fields_for(ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var))->get__DefaultFrameworks_4();
		ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_21 = (ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 *)il2cpp_codegen_object_new(ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33_il2cpp_TypeInfo_var);
		ISD_Framework__ctor_mE9A970533521AF6DE42FE3C26CBD4E3A872E63A0(L_21, ((int32_t)65), (bool)0, /*hidden argument*/NULL);
		NullCheck(L_20);
		List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488(L_20, L_21, /*hidden argument*/List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488_RuntimeMethod_var);
		// _DefaultFrameworks.Add(new ISD_Framework(ISD_iOSFramework.OpenGLES));
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_22 = ((ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_StaticFields*)il2cpp_codegen_static_fields_for(ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var))->get__DefaultFrameworks_4();
		ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_23 = (ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 *)il2cpp_codegen_object_new(ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33_il2cpp_TypeInfo_var);
		ISD_Framework__ctor_mE9A970533521AF6DE42FE3C26CBD4E3A872E63A0(L_23, ((int32_t)66), (bool)0, /*hidden argument*/NULL);
		NullCheck(L_22);
		List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488(L_22, L_23, /*hidden argument*/List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488_RuntimeMethod_var);
		// _DefaultFrameworks.Add(new ISD_Framework(ISD_iOSFramework.QuartzCore));
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_24 = ((ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_StaticFields*)il2cpp_codegen_static_fields_for(ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var))->get__DefaultFrameworks_4();
		ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_25 = (ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 *)il2cpp_codegen_object_new(ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33_il2cpp_TypeInfo_var);
		ISD_Framework__ctor_mE9A970533521AF6DE42FE3C26CBD4E3A872E63A0(L_25, ((int32_t)71), (bool)0, /*hidden argument*/NULL);
		NullCheck(L_24);
		List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488(L_24, L_25, /*hidden argument*/List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488_RuntimeMethod_var);
		// _DefaultFrameworks.Add(new ISD_Framework(ISD_iOSFramework.SystemConfiguration));
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_26 = ((ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_StaticFields*)il2cpp_codegen_static_fields_for(ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var))->get__DefaultFrameworks_4();
		ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_27 = (ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 *)il2cpp_codegen_object_new(ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33_il2cpp_TypeInfo_var);
		ISD_Framework__ctor_mE9A970533521AF6DE42FE3C26CBD4E3A872E63A0(L_27, ((int32_t)81), (bool)0, /*hidden argument*/NULL);
		NullCheck(L_26);
		List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488(L_26, L_27, /*hidden argument*/List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488_RuntimeMethod_var);
		// _DefaultFrameworks.Add(new ISD_Framework(ISD_iOSFramework.UIKit));
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_28 = ((ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_StaticFields*)il2cpp_codegen_static_fields_for(ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var))->get__DefaultFrameworks_4();
		ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_29 = (ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 *)il2cpp_codegen_object_new(ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33_il2cpp_TypeInfo_var);
		ISD_Framework__ctor_mE9A970533521AF6DE42FE3C26CBD4E3A872E63A0(L_29, ((int32_t)83), (bool)0, /*hidden argument*/NULL);
		NullCheck(L_28);
		List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488(L_28, L_29, /*hidden argument*/List_1_Add_m12F65D705D5021688AF4832AE093420A907AC488_RuntimeMethod_var);
	}

IL_010f:
	{
		// return _DefaultFrameworks;
		IL2CPP_RUNTIME_CLASS_INIT(ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var);
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_30 = ((ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_StaticFields*)il2cpp_codegen_static_fields_for(ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var))->get__DefaultFrameworks_4();
		return L_30;
	}
}
// System.String[] SA.iOS.XCode.ISD_FrameworkHandler::BaseFrameworksArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ISD_FrameworkHandler_BaseFrameworksArray_m2C5C4691EC364F42BF9205E7E578A2FE551E572A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE970889E8AFFAF3D1BE8106F7B5E40DB16CC9D84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7A4467D8767DE31A96E02F234DC94BF1B7C4B84B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAF883A195EBF34B6BFD37F9EDC4378A1D3D3E673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_iOSFramework_tB5D22C8FFBD69FD6511AC3464CD39A1F280C8A4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5F818B409F00C6EA664FB9B864A1C3C8369C83C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_mC57DD8EC8F6BBF1491CDDC374A9E11168E38E20A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var array = new List<string>(AvailableFrameworks.Capacity);
		IL2CPP_RUNTIME_CLASS_INIT(ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69_il2cpp_TypeInfo_var);
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_0;
		L_0 = ISD_FrameworkHandler_get_AvailableFrameworks_m1A5F658A86F19C2C9DC2FDC9C14E67B463CD5A78(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_mC57DD8EC8F6BBF1491CDDC374A9E11168E38E20A(L_0, /*hidden argument*/List_1_get_Capacity_mC57DD8EC8F6BBF1491CDDC374A9E11168E38E20A_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B(L_2, L_1, /*hidden argument*/List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (var framework in AvailableFrameworks) array.Add(framework.Type.ToString());
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_3;
		L_3 = ISD_FrameworkHandler_get_AvailableFrameworks_m1A5F658A86F19C2C9DC2FDC9C14E67B463CD5A78(/*hidden argument*/NULL);
		NullCheck(L_3);
		Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509  L_4;
		L_4 = List_1_GetEnumerator_m5F818B409F00C6EA664FB9B864A1C3C8369C83C7(L_3, /*hidden argument*/List_1_GetEnumerator_m5F818B409F00C6EA664FB9B864A1C3C8369C83C7_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003c;
		}

IL_001d:
		{
			// foreach (var framework in AvailableFrameworks) array.Add(framework.Type.ToString());
			ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_5;
			L_5 = Enumerator_get_Current_mAF883A195EBF34B6BFD37F9EDC4378A1D3D3E673_inline((Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509 *)(&V_1), /*hidden argument*/Enumerator_get_Current_mAF883A195EBF34B6BFD37F9EDC4378A1D3D3E673_RuntimeMethod_var);
			V_2 = L_5;
			// foreach (var framework in AvailableFrameworks) array.Add(framework.Type.ToString());
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6 = V_0;
			ISD_Framework_t1D03BC27CE0A50A5A55A5350A474499AA556AF33 * L_7 = V_2;
			NullCheck(L_7);
			int32_t* L_8 = L_7->get_address_of_Type_2();
			RuntimeObject * L_9 = Box(ISD_iOSFramework_tB5D22C8FFBD69FD6511AC3464CD39A1F280C8A4B_il2cpp_TypeInfo_var, L_8);
			NullCheck(L_9);
			String_t* L_10;
			L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
			*L_8 = *(int32_t*)UnBox(L_9);
			NullCheck(L_6);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_6, L_10, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		}

IL_003c:
		{
			// foreach (var framework in AvailableFrameworks) array.Add(framework.Type.ToString());
			bool L_11;
			L_11 = Enumerator_MoveNext_m7A4467D8767DE31A96E02F234DC94BF1B7C4B84B((Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m7A4467D8767DE31A96E02F234DC94BF1B7C4B84B_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_001d;
			}
		}

IL_0045:
		{
			IL2CPP_LEAVE(0x55, FINALLY_0047);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE970889E8AFFAF3D1BE8106F7B5E40DB16CC9D84((Enumerator_tC68B0404150EBAD586CB9ADC5FE35DE19A0C1509 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mE970889E8AFFAF3D1BE8106F7B5E40DB16CC9D84_RuntimeMethod_var);
		IL2CPP_END_FINALLY(71)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x55, IL_0055)
	}

IL_0055:
	{
		// return array.ToArray();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_12 = V_0;
		NullCheck(L_12);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13;
		L_13 = List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB(L_12, /*hidden argument*/List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		return L_13;
	}
}
// System.Void SA.iOS.XCode.ISD_FrameworkHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_FrameworkHandler__ctor_m23AD174DF68374C550ED8C5AFE9E98BBBFE1A514 (ISD_FrameworkHandler_tE988F8CF3217C185788D406E8A8B61FA03632E69 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA.iOS.XCode.ISD_FrameworkHandler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_FrameworkHandler__cctor_m9988179A23A813118E37841EE30FC13EBFB349FE (const RuntimeMethod* method)
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
// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_Library> SA.iOS.XCode.ISD_LibHandler::get_AvailableLibraries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * ISD_LibHandler_get_AvailableLibraries_m925F12A2FF434593590288C42D753070259FD6C8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m71F58DCD9FC7E613D8328ADBC7CF0151F9E9449F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC5A8248129604DAFB2E325BB372AF0B86B0394B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m77BFB9F5DD0316790B9819CABDAF0C6E9182A3F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_iOSLibrary_t1C5F1155F874ABBF397418090DF5406E1E3CD904_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_iOSLibrary_t1C5F1155F874ABBF397418090DF5406E1E3CD904_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m04B351E6612EAB1DFE9BF8BF35718F3D148E48B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m814F4B14E6D0F015A8D3350C2A5EA23A190E4FCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD3DEC8AFAD295AC8C8326C997CCECC66600EFE71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * V_0 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_1 = NULL;
	Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// var resultList = new List<ISD_Library>();
		List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * L_0 = (List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 *)il2cpp_codegen_object_new(List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5_il2cpp_TypeInfo_var);
		List_1__ctor_mD3DEC8AFAD295AC8C8326C997CCECC66600EFE71(L_0, /*hidden argument*/List_1__ctor_mD3DEC8AFAD295AC8C8326C997CCECC66600EFE71_RuntimeMethod_var);
		V_0 = L_0;
		// var strings = new List<string>(Enum.GetNames(typeof(ISD_iOSLibrary)));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (ISD_iOSLibrary_t1C5F1155F874ABBF397418090DF5406E1E3CD904_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8(L_2, /*hidden argument*/NULL);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323(L_4, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var);
		V_1 = L_4;
		// foreach (var addedLibrary in ISD_Settings.Instance.Libraries)
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_5;
		L_5 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_5);
		List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * L_6 = L_5->get_Libraries_14();
		NullCheck(L_6);
		Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A  L_7;
		L_7 = List_1_GetEnumerator_m814F4B14E6D0F015A8D3350C2A5EA23A190E4FCF(L_6, /*hidden argument*/List_1_GetEnumerator_m814F4B14E6D0F015A8D3350C2A5EA23A190E4FCF_RuntimeMethod_var);
		V_2 = L_7;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0050;
		}

IL_002d:
		{
			// foreach (var addedLibrary in ISD_Settings.Instance.Libraries)
			ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * L_8;
			L_8 = Enumerator_get_Current_m77BFB9F5DD0316790B9819CABDAF0C6E9182A3F9_inline((Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A *)(&V_2), /*hidden argument*/Enumerator_get_Current_m77BFB9F5DD0316790B9819CABDAF0C6E9182A3F9_RuntimeMethod_var);
			V_3 = L_8;
			// if (strings.Contains(addedLibrary.Name))
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_9 = V_1;
			ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * L_10 = V_3;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = ISD_Library_get_Name_m00BCC82F2EFDA20606061E8087505D8CFEC23DF0(L_10, /*hidden argument*/NULL);
			NullCheck(L_9);
			bool L_12;
			L_12 = List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F(L_9, L_11, /*hidden argument*/List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
			if (!L_12)
			{
				goto IL_0050;
			}
		}

IL_0043:
		{
			// strings.Remove(addedLibrary.Name);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_13 = V_1;
			ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * L_14 = V_3;
			NullCheck(L_14);
			String_t* L_15;
			L_15 = ISD_Library_get_Name_m00BCC82F2EFDA20606061E8087505D8CFEC23DF0(L_14, /*hidden argument*/NULL);
			NullCheck(L_13);
			bool L_16;
			L_16 = List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70(L_13, L_15, /*hidden argument*/List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70_RuntimeMethod_var);
		}

IL_0050:
		{
			// foreach (var addedLibrary in ISD_Settings.Instance.Libraries)
			bool L_17;
			L_17 = Enumerator_MoveNext_mC5A8248129604DAFB2E325BB372AF0B86B0394B7((Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mC5A8248129604DAFB2E325BB372AF0B86B0394B7_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_002d;
			}
		}

IL_0059:
		{
			IL2CPP_LEAVE(0x69, FINALLY_005b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005b;
	}

FINALLY_005b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m71F58DCD9FC7E613D8328ADBC7CF0151F9E9449F((Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A *)(&V_2), /*hidden argument*/Enumerator_Dispose_m71F58DCD9FC7E613D8328ADBC7CF0151F9E9449F_RuntimeMethod_var);
		IL2CPP_END_FINALLY(91)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(91)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x69, IL_0069)
	}

IL_0069:
	{
		// foreach (ISD_iOSLibrary v in Enum.GetValues(typeof(ISD_iOSLibrary)))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (ISD_iOSLibrary_t1C5F1155F874ABBF397418090DF5406E1E3CD904_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_20;
		L_20 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964(L_20, /*hidden argument*/NULL);
		V_4 = L_21;
	}

IL_007f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b2;
		}

IL_0081:
		{
			// foreach (ISD_iOSLibrary v in Enum.GetValues(typeof(ISD_iOSLibrary)))
			RuntimeObject* L_22 = V_4;
			NullCheck(L_22);
			RuntimeObject * L_23;
			L_23 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_22);
			V_5 = ((*(int32_t*)((int32_t*)UnBox(L_23, ISD_iOSLibrary_t1C5F1155F874ABBF397418090DF5406E1E3CD904_il2cpp_TypeInfo_var))));
			// if (strings.Contains(v.ToString()))
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_24 = V_1;
			RuntimeObject * L_25 = Box(ISD_iOSLibrary_t1C5F1155F874ABBF397418090DF5406E1E3CD904_il2cpp_TypeInfo_var, (&V_5));
			NullCheck(L_25);
			String_t* L_26;
			L_26 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
			V_5 = *(int32_t*)UnBox(L_25);
			NullCheck(L_24);
			bool L_27;
			L_27 = List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F(L_24, L_26, /*hidden argument*/List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
			if (!L_27)
			{
				goto IL_00b2;
			}
		}

IL_00a4:
		{
			// resultList.Add(new ISD_Library((ISD_iOSLibrary)v));
			List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * L_28 = V_0;
			int32_t L_29 = V_5;
			ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * L_30 = (ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 *)il2cpp_codegen_object_new(ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8_il2cpp_TypeInfo_var);
			ISD_Library__ctor_mCACF8A0CB254EDF6FBBCF5A4F8222758BADBF13F(L_30, L_29, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_28);
			List_1_Add_m04B351E6612EAB1DFE9BF8BF35718F3D148E48B1(L_28, L_30, /*hidden argument*/List_1_Add_m04B351E6612EAB1DFE9BF8BF35718F3D148E48B1_RuntimeMethod_var);
		}

IL_00b2:
		{
			// foreach (ISD_iOSLibrary v in Enum.GetValues(typeof(ISD_iOSLibrary)))
			RuntimeObject* L_31 = V_4;
			NullCheck(L_31);
			bool L_32;
			L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_31);
			if (L_32)
			{
				goto IL_0081;
			}
		}

IL_00bb:
		{
			IL2CPP_LEAVE(0xD2, FINALLY_00bd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bd;
	}

FINALLY_00bd:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_33 = V_4;
			V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_33, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_34 = V_6;
			if (!L_34)
			{
				goto IL_00d1;
			}
		}

IL_00ca:
		{
			RuntimeObject* L_35 = V_6;
			NullCheck(L_35);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_35);
		}

IL_00d1:
		{
			IL2CPP_END_FINALLY(189)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(189)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xD2, IL_00d2)
	}

IL_00d2:
	{
		// return resultList;
		List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * L_36 = V_0;
		return L_36;
	}
}
// System.String[] SA.iOS.XCode.ISD_LibHandler::BaseLibrariesArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ISD_LibHandler_BaseLibrariesArray_m46BBEA54D1B1AF49EC9E01AC82C9323135EC41D6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m71F58DCD9FC7E613D8328ADBC7CF0151F9E9449F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC5A8248129604DAFB2E325BB372AF0B86B0394B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m77BFB9F5DD0316790B9819CABDAF0C6E9182A3F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m814F4B14E6D0F015A8D3350C2A5EA23A190E4FCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_m21A235617409E19E513B1F887A77DDA9B1EE6896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var array = new List<string>(AvailableLibraries.Capacity);
		List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * L_0;
		L_0 = ISD_LibHandler_get_AvailableLibraries_m925F12A2FF434593590288C42D753070259FD6C8(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_m21A235617409E19E513B1F887A77DDA9B1EE6896(L_0, /*hidden argument*/List_1_get_Capacity_m21A235617409E19E513B1F887A77DDA9B1EE6896_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B(L_2, L_1, /*hidden argument*/List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (var library in AvailableLibraries) array.Add(library.Name);
		List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * L_3;
		L_3 = ISD_LibHandler_get_AvailableLibraries_m925F12A2FF434593590288C42D753070259FD6C8(/*hidden argument*/NULL);
		NullCheck(L_3);
		Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A  L_4;
		L_4 = List_1_GetEnumerator_m814F4B14E6D0F015A8D3350C2A5EA23A190E4FCF(L_3, /*hidden argument*/List_1_GetEnumerator_m814F4B14E6D0F015A8D3350C2A5EA23A190E4FCF_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0031;
		}

IL_001d:
		{
			// foreach (var library in AvailableLibraries) array.Add(library.Name);
			ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * L_5;
			L_5 = Enumerator_get_Current_m77BFB9F5DD0316790B9819CABDAF0C6E9182A3F9_inline((Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A *)(&V_1), /*hidden argument*/Enumerator_get_Current_m77BFB9F5DD0316790B9819CABDAF0C6E9182A3F9_RuntimeMethod_var);
			V_2 = L_5;
			// foreach (var library in AvailableLibraries) array.Add(library.Name);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6 = V_0;
			ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * L_7 = V_2;
			NullCheck(L_7);
			String_t* L_8;
			L_8 = ISD_Library_get_Name_m00BCC82F2EFDA20606061E8087505D8CFEC23DF0(L_7, /*hidden argument*/NULL);
			NullCheck(L_6);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_6, L_8, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		}

IL_0031:
		{
			// foreach (var library in AvailableLibraries) array.Add(library.Name);
			bool L_9;
			L_9 = Enumerator_MoveNext_mC5A8248129604DAFB2E325BB372AF0B86B0394B7((Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mC5A8248129604DAFB2E325BB372AF0B86B0394B7_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_001d;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4A, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m71F58DCD9FC7E613D8328ADBC7CF0151F9E9449F((Enumerator_tA5892EDE84343A6477033084ECBD95C3E426BB8A *)(&V_1), /*hidden argument*/Enumerator_Dispose_m71F58DCD9FC7E613D8328ADBC7CF0151F9E9449F_RuntimeMethod_var);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
	}

IL_004a:
	{
		// return array.ToArray();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10 = V_0;
		NullCheck(L_10);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11;
		L_11 = List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB(L_10, /*hidden argument*/List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		return L_11;
	}
}
// System.String SA.iOS.XCode.ISD_LibHandler::stringValueOf(SA.iOS.XCode.ISD_iOSLibrary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISD_LibHandler_stringValueOf_m4BE34B79ACBD690FED6D2763EF4216A8DEB05CCB (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptionAttributeU5BU5D_tAF6E91F4743A9147A5794EE096DCDFD27B30B84F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_iOSLibrary_t1C5F1155F874ABBF397418090DF5406E1E3CD904_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DescriptionAttributeU5BU5D_tAF6E91F4743A9147A5794EE096DCDFD27B30B84F* V_0 = NULL;
	{
		// var fi = value.GetType().GetField(value.ToString());
		int32_t L_0 = ___value0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(ISD_iOSLibrary_t1C5F1155F874ABBF397418090DF5406E1E3CD904_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = Box(ISD_iOSLibrary_t1C5F1155F874ABBF397418090DF5406E1E3CD904_il2cpp_TypeInfo_var, (&___value0));
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		___value0 = *(int32_t*)UnBox(L_4);
		NullCheck(L_3);
		FieldInfo_t * L_6;
		L_6 = Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C(L_3, L_5, /*hidden argument*/NULL);
		// var attributes =
		//     (DescriptionAttribute[])fi.GetCustomAttributes(typeof(DescriptionAttribute), false);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9;
		L_9 = VirtFuncInvoker2< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Type_t *, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_6, L_8, (bool)0);
		V_0 = ((DescriptionAttributeU5BU5D_tAF6E91F4743A9147A5794EE096DCDFD27B30B84F*)Castclass((RuntimeObject*)L_9, DescriptionAttributeU5BU5D_tAF6E91F4743A9147A5794EE096DCDFD27B30B84F_il2cpp_TypeInfo_var));
		// if (attributes.Length > 0)
		DescriptionAttributeU5BU5D_tAF6E91F4743A9147A5794EE096DCDFD27B30B84F* L_10 = V_0;
		NullCheck(L_10);
		if (!(((RuntimeArray*)L_10)->max_length))
		{
			goto IL_0040;
		}
	}
	{
		// return attributes[0].Description;
		DescriptionAttributeU5BU5D_tAF6E91F4743A9147A5794EE096DCDFD27B30B84F* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = 0;
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.ComponentModel.DescriptionAttribute::get_Description() */, L_13);
		return L_14;
	}

IL_0040:
	{
		// return value.ToString();
		RuntimeObject * L_15 = Box(ISD_iOSLibrary_t1C5F1155F874ABBF397418090DF5406E1E3CD904_il2cpp_TypeInfo_var, (&___value0));
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		___value0 = *(int32_t*)UnBox(L_15);
		return L_16;
	}
}
// System.Object SA.iOS.XCode.ISD_LibHandler::enumValueOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ISD_LibHandler_enumValueOf_m92C9D3DBA3BCBD76657BA68DD8D78EB622482279 (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_iOSLibrary_t1C5F1155F874ABBF397418090DF5406E1E3CD904_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_iOSLibrary_t1C5F1155F874ABBF397418090DF5406E1E3CD904_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		// var enumType = typeof(ISD_iOSLibrary);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (ISD_iOSLibrary_t1C5F1155F874ABBF397418090DF5406E1E3CD904_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var names = Enum.GetNames(enumType);
		Type_t * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8(L_2, /*hidden argument*/NULL);
		// foreach (var name in names)
		V_1 = L_3;
		V_2 = 0;
		goto IL_003f;
	}

IL_0016:
	{
		// foreach (var name in names)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		// if (stringValueOf((ISD_iOSLibrary)Enum.Parse(enumType, name)).Equals(value))
		Type_t * L_8 = V_0;
		String_t* L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_10;
		L_10 = Enum_Parse_m6601224637A9CF40F77358805956C2EE757EAF68(L_8, L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = ISD_LibHandler_stringValueOf_m4BE34B79ACBD690FED6D2763EF4216A8DEB05CCB(((*(int32_t*)((int32_t*)UnBox(L_10, ISD_iOSLibrary_t1C5F1155F874ABBF397418090DF5406E1E3CD904_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		String_t* L_12 = ___value0;
		NullCheck(L_11);
		bool L_13;
		L_13 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_003b;
		}
	}
	{
		// return Enum.Parse(enumType, name);
		Type_t * L_14 = V_0;
		String_t* L_15 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_16;
		L_16 = Enum_Parse_m6601224637A9CF40F77358805956C2EE757EAF68(L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_003b:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_003f:
	{
		// foreach (var name in names)
		int32_t L_18 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = V_1;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		// throw new ArgumentException("The string is not a description or value of the specified enum...\n " + value + " is not right enum");
		String_t* L_20 = ___value0;
		String_t* L_21;
		L_21 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73C5ED74B47ADA89E87D0C79D8EF8507BFD67B4D)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA9EC953B2E6BB97F5E5365FFE80D441F875FCC39)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_22 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_22, L_21, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISD_LibHandler_enumValueOf_m92C9D3DBA3BCBD76657BA68DD8D78EB622482279_RuntimeMethod_var)));
	}
}
// System.Void SA.iOS.XCode.ISD_LibHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_LibHandler__ctor_m67D6E211004A651E3C632BAF1E130997DE462B15 (ISD_LibHandler_t22BB005239E6F37A9B2ECAE7EE903645A2F94497 * __this, const RuntimeMethod* method)
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
// System.Void SA.iOS.XCode.ISD_Library::.ctor(SA.iOS.XCode.ISD_iOSLibrary,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_Library__ctor_mCACF8A0CB254EDF6FBBCF5A4F8222758BADBF13F (ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * __this, int32_t ___lib0, bool ___optional1, const RuntimeMethod* method)
{
	{
		// public ISD_Library(ISD_iOSLibrary lib, bool optional = false)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Type = lib;
		int32_t L_0 = ___lib0;
		__this->set_Type_0(L_0);
		// IsOptional = optional;
		bool L_1 = ___optional1;
		__this->set_IsOptional_1(L_1);
		// }
		return;
	}
}
// System.String SA.iOS.XCode.ISD_Library::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISD_Library_get_Name_m00BCC82F2EFDA20606061E8087505D8CFEC23DF0 (ISD_Library_t72FC62858534676F2C65C21610C9068A774BDBE8 * __this, const RuntimeMethod* method)
{
	{
		// public string Name => ISD_LibHandler.stringValueOf(Type);
		int32_t L_0 = __this->get_Type_0();
		String_t* L_1;
		L_1 = ISD_LibHandler_stringValueOf_m4BE34B79ACBD690FED6D2763EF4216A8DEB05CCB(L_0, /*hidden argument*/NULL);
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
// System.Void SA.iOS.XCode.ISD_PlistKey::AddChild(SA.iOS.XCode.ISD_PlistKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_PlistKey_AddChild_m19F8E37119A65D11749A145E020CF558583BE2B6 (ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * __this, ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * ___childKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_PlistKeyType_t40722374D1603A0E78C691C4C2DE382839165789_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (Type.Equals(ISD_PlistKeyType.Dictionary))
		int32_t* L_0 = __this->get_address_of_Type_3();
		int32_t L_1 = ((int32_t)4);
		RuntimeObject * L_2 = Box(ISD_PlistKeyType_t40722374D1603A0E78C691C4C2DE382839165789_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject * L_3 = Box(ISD_PlistKeyType_t40722374D1603A0E78C691C4C2DE382839165789_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_2);
		*L_0 = *(int32_t*)UnBox(L_3);
		if (!L_4)
		{
			goto IL_007a;
		}
	}
	{
		// foreach (var ChildsId in ChildrensIds)
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = __this->get_ChildrensIds_8();
		NullCheck(L_5);
		Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_6;
		L_6 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_5, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		V_1 = L_6;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0061;
		}

IL_0027:
		{
			// foreach (var ChildsId in ChildrensIds)
			String_t* L_7;
			L_7 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_1), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
			V_2 = L_7;
			// var var = ISD_Settings.Instance.getVariableById(ChildsId);
			IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
			ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_8;
			L_8 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
			String_t* L_9 = V_2;
			NullCheck(L_8);
			ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_10;
			L_10 = ISD_Settings_getVariableById_mB307B516DA6475F32713586850CED3A311CC4D15(L_8, L_9, /*hidden argument*/NULL);
			V_3 = L_10;
			// if (var.Name.Equals(childKey.Name))
			ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_11 = V_3;
			NullCheck(L_11);
			String_t* L_12 = L_11->get_Name_2();
			ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_13 = ___childKey0;
			NullCheck(L_13);
			String_t* L_14 = L_13->get_Name_2();
			NullCheck(L_12);
			bool L_15;
			L_15 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_12, L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_0061;
			}
		}

IL_004e:
		{
			// ISD_Settings.Instance.RemoveVariable(var, ChildrensIds);
			IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
			ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_16;
			L_16 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
			ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_17 = V_3;
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_18 = __this->get_ChildrensIds_8();
			NullCheck(L_16);
			ISD_Settings_RemoveVariable_m93F866EEFFBF1A631CA4568195091CD354E5DCB3(L_16, L_17, L_18, /*hidden argument*/NULL);
			// break;
			IL2CPP_LEAVE(0x7A, FINALLY_006c);
		}

IL_0061:
		{
			// foreach (var ChildsId in ChildrensIds)
			bool L_19;
			L_19 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_0027;
			}
		}

IL_006a:
		{
			IL2CPP_LEAVE(0x7A, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_1), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(108)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
	}

IL_007a:
	{
		// var keyId = IdFactory.RandomString;
		String_t* L_20;
		L_20 = IdFactory_get_RandomString_mE32FF15D54A622EA3E53A3C6391CCE28626C44F5(/*hidden argument*/NULL);
		V_0 = L_20;
		// ISD_Settings.Instance.AddVariableToDictionary(keyId, childKey);
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_21;
		L_21 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		String_t* L_22 = V_0;
		ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_23 = ___childKey0;
		NullCheck(L_21);
		ISD_Settings_AddVariableToDictionary_m8F1A8522D18538C6D0C45FE180EDD6839A0027DC(L_21, L_22, L_23, /*hidden argument*/NULL);
		// ChildrensIds.Add(keyId);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_24 = __this->get_ChildrensIds_8();
		String_t* L_25 = V_0;
		NullCheck(L_24);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_24, L_25, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SA.iOS.XCode.ISD_PlistKey::RemoveChild(SA.iOS.XCode.ISD_PlistKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_PlistKey_RemoveChild_m5EF5D4F661D5899C63AD58E0FF9EE27A82FF0790 (ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * __this, ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * ___childKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ISD_Settings.Instance.RemoveVariable(childKey, ChildrensIds);
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_0;
		L_0 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_1 = ___childKey0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = __this->get_ChildrensIds_8();
		NullCheck(L_0);
		ISD_Settings_RemoveVariable_m93F866EEFFBF1A631CA4568195091CD354E5DCB3(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// SA.iOS.XCode.ISD_PlistKey SA.iOS.XCode.ISD_PlistKey::GetChildByStringValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * ISD_PlistKey_GetChildByStringValue_m69F1B95E4458580C412BA247D71219363AD1A264 (ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * __this, String_t* ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1E799A697C36F18B32398BF590D4B8A376E1CB41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m746AA0A0C30015E425278C681F6DF79149236637_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m045817AE13DC4B574A64CDE27EFA6482872DC781_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m61E0EE51B4C8119A2D1957039180AAFD7C4AA6DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * V_1 = NULL;
	ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var child in Children)
		List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * L_0;
		L_0 = ISD_PlistKey_get_Children_m2EFDF83327311CB4CCDADBE733D5CCA5DAB1640F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079  L_1;
		L_1 = List_1_GetEnumerator_m61E0EE51B4C8119A2D1957039180AAFD7C4AA6DD(L_0, /*hidden argument*/List_1_GetEnumerator_m61E0EE51B4C8119A2D1957039180AAFD7C4AA6DD_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0028;
		}

IL_000e:
		{
			// foreach (var child in Children)
			ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_2;
			L_2 = Enumerator_get_Current_m045817AE13DC4B574A64CDE27EFA6482872DC781_inline((Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m045817AE13DC4B574A64CDE27EFA6482872DC781_RuntimeMethod_var);
			V_1 = L_2;
			// if (child.StringValue.Equals(val))
			ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_3 = V_1;
			NullCheck(L_3);
			String_t* L_4 = L_3->get_StringValue_4();
			String_t* L_5 = ___val0;
			NullCheck(L_4);
			bool L_6;
			L_6 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_4, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0028;
			}
		}

IL_0024:
		{
			// return child;
			ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_7 = V_1;
			V_2 = L_7;
			IL2CPP_LEAVE(0x43, FINALLY_0033);
		}

IL_0028:
		{
			// foreach (var child in Children)
			bool L_8;
			L_8 = Enumerator_MoveNext_m746AA0A0C30015E425278C681F6DF79149236637((Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m746AA0A0C30015E425278C681F6DF79149236637_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_000e;
			}
		}

IL_0031:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0033);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1E799A697C36F18B32398BF590D4B8A376E1CB41((Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m1E799A697C36F18B32398BF590D4B8A376E1CB41_RuntimeMethod_var);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
	}

IL_0041:
	{
		// return null;
		return (ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC *)NULL;
	}

IL_0043:
	{
		// }
		ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_9 = V_2;
		return L_9;
	}
}
// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_PlistKey> SA.iOS.XCode.ISD_PlistKey::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * ISD_PlistKey_get_Children_m2EFDF83327311CB4CCDADBE733D5CCA5DAB1640F (ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4A69F19BB193BE8DCFC3D164BD771BDA8DEB1950_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA954EB648524D9D6AA4A79B212886082247F10E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * V_0 = NULL;
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var children = new List<ISD_PlistKey>();
		List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * L_0 = (List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD *)il2cpp_codegen_object_new(List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD_il2cpp_TypeInfo_var);
		List_1__ctor_mA954EB648524D9D6AA4A79B212886082247F10E9(L_0, /*hidden argument*/List_1__ctor_mA954EB648524D9D6AA4A79B212886082247F10E9_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var keyId in ChildrensIds)
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = __this->get_ChildrensIds_8();
		NullCheck(L_1);
		Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_2;
		L_2 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_1, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002f;
		}

IL_0014:
		{
			// foreach (var keyId in ChildrensIds)
			String_t* L_3;
			L_3 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_1), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
			V_2 = L_3;
			// var key = ISD_Settings.Instance.getVariableById(keyId);
			IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
			ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_4;
			L_4 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
			String_t* L_5 = V_2;
			NullCheck(L_4);
			ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_6;
			L_6 = ISD_Settings_getVariableById_mB307B516DA6475F32713586850CED3A311CC4D15(L_4, L_5, /*hidden argument*/NULL);
			V_3 = L_6;
			// children.Add(key);
			List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * L_7 = V_0;
			ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_8 = V_3;
			NullCheck(L_7);
			List_1_Add_m4A69F19BB193BE8DCFC3D164BD771BDA8DEB1950(L_7, L_8, /*hidden argument*/List_1_Add_m4A69F19BB193BE8DCFC3D164BD771BDA8DEB1950_RuntimeMethod_var);
		}

IL_002f:
		{
			// foreach (var keyId in ChildrensIds)
			bool L_9;
			L_9 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0014;
			}
		}

IL_0038:
		{
			IL2CPP_LEAVE(0x48, FINALLY_003a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_1), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x48, IL_0048)
	}

IL_0048:
	{
		// return children;
		List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * L_10 = V_0;
		return L_10;
	}
}
// System.Void SA.iOS.XCode.ISD_PlistKey::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_PlistKey_Clear_m946C82B558E64C42C76475908078F3CF20B87F1D (ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChildrensIds.Clear();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_ChildrensIds_8();
		NullCheck(L_0);
		List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640(L_0, /*hidden argument*/List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SA.iOS.XCode.ISD_PlistKey::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_PlistKey__ctor_m673811F840CBB6047F8F230395229CAC964F76D9 (ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsOpen = true;
		__this->set_IsOpen_0((bool)1);
		// public bool IsListOpen = true;
		__this->set_IsListOpen_1((bool)1);
		// public string Name = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_Name_2(L_0);
		// public string StringValue = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_StringValue_4(L_1);
		// public bool BooleanValue = true;
		__this->set_BooleanValue_7((bool)1);
		// public List<string> ChildrensIds = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_2, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_ChildrensIds_8(L_2);
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
// System.Void SA.iOS.XCode.ISD_PlistKeyId::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_PlistKeyId__ctor_m1466AD622FC86E039101830845D59313F395DED8 (ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * __this, const RuntimeMethod* method)
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
// System.Boolean SA.iOS.XCode.ISD_Settings::get_PostProcessEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ISD_Settings_get_PostProcessEnabled_mA841A35E670434885754D662484EBCCD16DEF319 (const RuntimeMethod* method)
{
	{
		// var isEnabled = true;
		// return isEnabled;
		return (bool)1;
	}
}
// System.Void SA.iOS.XCode.ISD_Settings::AddVariableToDictionary(System.String,SA.iOS.XCode.ISD_PlistKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_Settings_AddVariableToDictionary_m8F1A8522D18538C6D0C45FE180EDD6839A0027DC (ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * __this, String_t* ___uniqueIdKey0, ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * ___var1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m214B76557CA516EA4496E4116427CA67A7AAB9F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * V_0 = NULL;
	{
		// var newVar = new ISD_PlistKeyId();
		ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * L_0 = (ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE *)il2cpp_codegen_object_new(ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE_il2cpp_TypeInfo_var);
		ISD_PlistKeyId__ctor_m1466AD622FC86E039101830845D59313F395DED8(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// newVar.uniqueIdKey = uniqueIdKey;
		ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * L_1 = V_0;
		String_t* L_2 = ___uniqueIdKey0;
		NullCheck(L_1);
		L_1->set_uniqueIdKey_1(L_2);
		// newVar.VariableValue = var;
		ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * L_3 = V_0;
		ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_4 = ___var1;
		NullCheck(L_3);
		L_3->set_VariableValue_0(L_4);
		// VariableDictionary.Add(newVar);
		List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 * L_5 = __this->get_VariableDictionary_17();
		ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * L_6 = V_0;
		NullCheck(L_5);
		List_1_Add_m214B76557CA516EA4496E4116427CA67A7AAB9F2(L_5, L_6, /*hidden argument*/List_1_Add_m214B76557CA516EA4496E4116427CA67A7AAB9F2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SA.iOS.XCode.ISD_Settings::RemoveVariable(SA.iOS.XCode.ISD_PlistKey,System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_Settings_RemoveVariable_m93F866EEFFBF1A631CA4568195091CD354E5DCB3 (ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * __this, ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * ___v0, RuntimeObject* ___ListWithThisVariable1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD2435E96BA430088CD4CE935459860EAE3C4B46E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m78EC677492EE0EC7A1500B4144AFE82BAB39EA1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9304A2A8B29BC07690255B5D99CE89DDCCF8A73B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mAF4F95A9B1BDC392BD9D70291B06CDE490015D69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m515880F3EDD3946F9D2863F6BE89AF8B04B2766C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m1BC58C47AFB0B8E0825557E43F131D79FFA39D0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mB20ADAB4D82D0190F36153414F063BF5D64BABFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9121FE25989D0160C00484BB0D796F964D908C5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 * V_0 = NULL;
	Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * V_2 = NULL;
	String_t* V_3 = NULL;
	ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// if (Instance.PlistVariables.Contains(v))
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_0;
		L_0 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * L_1 = L_0->get_PlistVariables_16();
		ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_2 = ___v0;
		NullCheck(L_1);
		bool L_3;
		L_3 = List_1_Contains_mAF4F95A9B1BDC392BD9D70291B06CDE490015D69(L_1, L_2, /*hidden argument*/List_1_Contains_mAF4F95A9B1BDC392BD9D70291B06CDE490015D69_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// Instance.PlistVariables.Remove(v);
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * L_4;
		L_4 = SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF(/*hidden argument*/SA_ScriptableSingleton_1_get_Instance_mB99945EB570196C973E74EBD9097CB32BF6CA2BF_RuntimeMethod_var);
		NullCheck(L_4);
		List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * L_5 = L_4->get_PlistVariables_16();
		ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_6 = ___v0;
		NullCheck(L_5);
		bool L_7;
		L_7 = List_1_Remove_mB20ADAB4D82D0190F36153414F063BF5D64BABFC(L_5, L_6, /*hidden argument*/List_1_Remove_mB20ADAB4D82D0190F36153414F063BF5D64BABFC_RuntimeMethod_var);
		goto IL_008d;
	}

IL_0025:
	{
		// foreach (var vid in VariableDictionary)
		List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 * L_8 = __this->get_VariableDictionary_17();
		NullCheck(L_8);
		Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B  L_9;
		L_9 = List_1_GetEnumerator_m515880F3EDD3946F9D2863F6BE89AF8B04B2766C(L_8, /*hidden argument*/List_1_GetEnumerator_m515880F3EDD3946F9D2863F6BE89AF8B04B2766C_RuntimeMethod_var);
		V_1 = L_9;
	}

IL_0031:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0074;
		}

IL_0033:
		{
			// foreach (var vid in VariableDictionary)
			ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * L_10;
			L_10 = Enumerator_get_Current_m9304A2A8B29BC07690255B5D99CE89DDCCF8A73B_inline((Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B *)(&V_1), /*hidden argument*/Enumerator_get_Current_m9304A2A8B29BC07690255B5D99CE89DDCCF8A73B_RuntimeMethod_var);
			V_2 = L_10;
			// if (vid.VariableValue.Equals(v))
			ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * L_11 = V_2;
			NullCheck(L_11);
			ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_12 = L_11->get_VariableValue_0();
			ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_13 = ___v0;
			NullCheck(L_12);
			bool L_14;
			L_14 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_12, L_13);
			if (!L_14)
			{
				goto IL_0074;
			}
		}

IL_0049:
		{
			// VariableDictionary.Remove(vid);
			List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 * L_15 = __this->get_VariableDictionary_17();
			ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * L_16 = V_2;
			NullCheck(L_15);
			bool L_17;
			L_17 = List_1_Remove_m1BC58C47AFB0B8E0825557E43F131D79FFA39D0B(L_15, L_16, /*hidden argument*/List_1_Remove_m1BC58C47AFB0B8E0825557E43F131D79FFA39D0B_RuntimeMethod_var);
			// var id = vid.uniqueIdKey;
			ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * L_18 = V_2;
			NullCheck(L_18);
			String_t* L_19 = L_18->get_uniqueIdKey_1();
			V_3 = L_19;
			// if (ListWithThisVariable.Contains(id))
			RuntimeObject* L_20 = ___ListWithThisVariable1;
			String_t* L_21 = V_3;
			NullCheck(L_20);
			bool L_22;
			L_22 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(3 /* System.Boolean System.Collections.IList::Contains(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_20, L_21);
			if (!L_22)
			{
				goto IL_007d;
			}
		}

IL_0066:
		{
			// ListWithThisVariable.Remove(vid.uniqueIdKey);
			RuntimeObject* L_23 = ___ListWithThisVariable1;
			ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * L_24 = V_2;
			NullCheck(L_24);
			String_t* L_25 = L_24->get_uniqueIdKey_1();
			NullCheck(L_23);
			InterfaceActionInvoker1< RuntimeObject * >::Invoke(9 /* System.Void System.Collections.IList::Remove(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_23, L_25);
			// break;
			IL2CPP_LEAVE(0x8D, FINALLY_007f);
		}

IL_0074:
		{
			// foreach (var vid in VariableDictionary)
			bool L_26;
			L_26 = Enumerator_MoveNext_m78EC677492EE0EC7A1500B4144AFE82BAB39EA1C((Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m78EC677492EE0EC7A1500B4144AFE82BAB39EA1C_RuntimeMethod_var);
			if (L_26)
			{
				goto IL_0033;
			}
		}

IL_007d:
		{
			IL2CPP_LEAVE(0x8D, FINALLY_007f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007f;
	}

FINALLY_007f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD2435E96BA430088CD4CE935459860EAE3C4B46E((Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B *)(&V_1), /*hidden argument*/Enumerator_Dispose_mD2435E96BA430088CD4CE935459860EAE3C4B46E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(127)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(127)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8D, IL_008d)
	}

IL_008d:
	{
		// var keysInUse = new List<ISD_PlistKeyId>(VariableDictionary);
		List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 * L_27 = __this->get_VariableDictionary_17();
		List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 * L_28 = (List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 *)il2cpp_codegen_object_new(List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705_il2cpp_TypeInfo_var);
		List_1__ctor_m9121FE25989D0160C00484BB0D796F964D908C5F(L_28, L_27, /*hidden argument*/List_1__ctor_m9121FE25989D0160C00484BB0D796F964D908C5F_RuntimeMethod_var);
		V_0 = L_28;
		// foreach (var id in VariableDictionary)
		List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 * L_29 = __this->get_VariableDictionary_17();
		NullCheck(L_29);
		Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B  L_30;
		L_30 = List_1_GetEnumerator_m515880F3EDD3946F9D2863F6BE89AF8B04B2766C(L_29, /*hidden argument*/List_1_GetEnumerator_m515880F3EDD3946F9D2863F6BE89AF8B04B2766C_RuntimeMethod_var);
		V_1 = L_30;
	}

IL_00a5:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ce;
		}

IL_00a7:
		{
			// foreach (var id in VariableDictionary)
			ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * L_31;
			L_31 = Enumerator_get_Current_m9304A2A8B29BC07690255B5D99CE89DDCCF8A73B_inline((Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B *)(&V_1), /*hidden argument*/Enumerator_get_Current_m9304A2A8B29BC07690255B5D99CE89DDCCF8A73B_RuntimeMethod_var);
			V_4 = L_31;
			// var isInUse = IsInUse(id.uniqueIdKey, PlistVariables);
			ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * L_32 = V_4;
			NullCheck(L_32);
			String_t* L_33 = L_32->get_uniqueIdKey_1();
			List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * L_34 = __this->get_PlistVariables_16();
			bool L_35;
			L_35 = ISD_Settings_IsInUse_mE226E9EEFE0072AEC1B8346E799D2035CA4615F4(__this, L_33, L_34, /*hidden argument*/NULL);
			// if (!isInUse) keysInUse.Remove(id);
			if (L_35)
			{
				goto IL_00ce;
			}
		}

IL_00c5:
		{
			// if (!isInUse) keysInUse.Remove(id);
			List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 * L_36 = V_0;
			ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * L_37 = V_4;
			NullCheck(L_36);
			bool L_38;
			L_38 = List_1_Remove_m1BC58C47AFB0B8E0825557E43F131D79FFA39D0B(L_36, L_37, /*hidden argument*/List_1_Remove_m1BC58C47AFB0B8E0825557E43F131D79FFA39D0B_RuntimeMethod_var);
		}

IL_00ce:
		{
			// foreach (var id in VariableDictionary)
			bool L_39;
			L_39 = Enumerator_MoveNext_m78EC677492EE0EC7A1500B4144AFE82BAB39EA1C((Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m78EC677492EE0EC7A1500B4144AFE82BAB39EA1C_RuntimeMethod_var);
			if (L_39)
			{
				goto IL_00a7;
			}
		}

IL_00d7:
		{
			IL2CPP_LEAVE(0xE7, FINALLY_00d9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d9;
	}

FINALLY_00d9:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD2435E96BA430088CD4CE935459860EAE3C4B46E((Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B *)(&V_1), /*hidden argument*/Enumerator_Dispose_mD2435E96BA430088CD4CE935459860EAE3C4B46E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(217)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(217)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xE7, IL_00e7)
	}

IL_00e7:
	{
		// VariableDictionary = keysInUse;
		List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 * L_40 = V_0;
		__this->set_VariableDictionary_17(L_40);
		// }
		return;
	}
}
// System.Boolean SA.iOS.XCode.ISD_Settings::IsInUse(System.String,System.Collections.Generic.List`1<SA.iOS.XCode.ISD_PlistKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ISD_Settings_IsInUse_mE226E9EEFE0072AEC1B8346E799D2035CA4615F4 (ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * __this, String_t* ___id0, List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * ___list1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1E799A697C36F18B32398BF590D4B8A376E1CB41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m746AA0A0C30015E425278C681F6DF79149236637_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m045817AE13DC4B574A64CDE27EFA6482872DC781_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m61E0EE51B4C8119A2D1957039180AAFD7C4AA6DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// foreach (var key in list)
		List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * L_0 = ___list1;
		NullCheck(L_0);
		Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079  L_1;
		L_1 = List_1_GetEnumerator_m61E0EE51B4C8119A2D1957039180AAFD7C4AA6DD(L_0, /*hidden argument*/List_1_GetEnumerator_m61E0EE51B4C8119A2D1957039180AAFD7C4AA6DD_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0036;
		}

IL_0009:
		{
			// foreach (var key in list)
			ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_2;
			L_2 = Enumerator_get_Current_m045817AE13DC4B574A64CDE27EFA6482872DC781_inline((Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m045817AE13DC4B574A64CDE27EFA6482872DC781_RuntimeMethod_var);
			V_1 = L_2;
			// if (key.ChildrensIds.Contains(id))
			ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_3 = V_1;
			NullCheck(L_3);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = L_3->get_ChildrensIds_8();
			String_t* L_5 = ___id0;
			NullCheck(L_4);
			bool L_6;
			L_6 = List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F(L_4, L_5, /*hidden argument*/List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
			if (!L_6)
			{
				goto IL_0023;
			}
		}

IL_001f:
		{
			// return true;
			V_2 = (bool)1;
			IL2CPP_LEAVE(0x51, FINALLY_0041);
		}

IL_0023:
		{
			// var inUse = IsInUse(id, key.Children);
			String_t* L_7 = ___id0;
			ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_8 = V_1;
			NullCheck(L_8);
			List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * L_9;
			L_9 = ISD_PlistKey_get_Children_m2EFDF83327311CB4CCDADBE733D5CCA5DAB1640F(L_8, /*hidden argument*/NULL);
			bool L_10;
			L_10 = ISD_Settings_IsInUse_mE226E9EEFE0072AEC1B8346E799D2035CA4615F4(__this, L_7, L_9, /*hidden argument*/NULL);
			// if (inUse) return true;
			if (!L_10)
			{
				goto IL_0036;
			}
		}

IL_0032:
		{
			// if (inUse) return true;
			V_2 = (bool)1;
			IL2CPP_LEAVE(0x51, FINALLY_0041);
		}

IL_0036:
		{
			// foreach (var key in list)
			bool L_11;
			L_11 = Enumerator_MoveNext_m746AA0A0C30015E425278C681F6DF79149236637((Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m746AA0A0C30015E425278C681F6DF79149236637_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0009;
			}
		}

IL_003f:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1E799A697C36F18B32398BF590D4B8A376E1CB41((Enumerator_tB88C0118BB263A260FF700110E3C59E651D7C079 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m1E799A697C36F18B32398BF590D4B8A376E1CB41_RuntimeMethod_var);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
	}

IL_004f:
	{
		// return false;
		return (bool)0;
	}

IL_0051:
	{
		// }
		bool L_12 = V_2;
		return L_12;
	}
}
// SA.iOS.XCode.ISD_PlistKey SA.iOS.XCode.ISD_Settings::getVariableById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * ISD_Settings_getVariableById_mB307B516DA6475F32713586850CED3A311CC4D15 (ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * __this, String_t* ___uniqueIdKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD2435E96BA430088CD4CE935459860EAE3C4B46E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m78EC677492EE0EC7A1500B4144AFE82BAB39EA1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9304A2A8B29BC07690255B5D99CE89DDCCF8A73B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m515880F3EDD3946F9D2863F6BE89AF8B04B2766C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * V_1 = NULL;
	ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var vid in VariableDictionary)
		List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 * L_0 = __this->get_VariableDictionary_17();
		NullCheck(L_0);
		Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B  L_1;
		L_1 = List_1_GetEnumerator_m515880F3EDD3946F9D2863F6BE89AF8B04B2766C(L_0, /*hidden argument*/List_1_GetEnumerator_m515880F3EDD3946F9D2863F6BE89AF8B04B2766C_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002d;
		}

IL_000e:
		{
			// foreach (var vid in VariableDictionary)
			ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * L_2;
			L_2 = Enumerator_get_Current_m9304A2A8B29BC07690255B5D99CE89DDCCF8A73B_inline((Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B *)(&V_0), /*hidden argument*/Enumerator_get_Current_m9304A2A8B29BC07690255B5D99CE89DDCCF8A73B_RuntimeMethod_var);
			V_1 = L_2;
			// if (vid.uniqueIdKey.Equals(uniqueIdKey))
			ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * L_3 = V_1;
			NullCheck(L_3);
			String_t* L_4 = L_3->get_uniqueIdKey_1();
			String_t* L_5 = ___uniqueIdKey0;
			NullCheck(L_4);
			bool L_6;
			L_6 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_4, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_002d;
			}
		}

IL_0024:
		{
			// return vid.VariableValue;
			ISD_PlistKeyId_tAFE10283ED2E044E8846E8289B3EA82B18AE52BE * L_7 = V_1;
			NullCheck(L_7);
			ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_8 = L_7->get_VariableValue_0();
			V_2 = L_8;
			IL2CPP_LEAVE(0x48, FINALLY_0038);
		}

IL_002d:
		{
			// foreach (var vid in VariableDictionary)
			bool L_9;
			L_9 = Enumerator_MoveNext_m78EC677492EE0EC7A1500B4144AFE82BAB39EA1C((Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m78EC677492EE0EC7A1500B4144AFE82BAB39EA1C_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_000e;
			}
		}

IL_0036:
		{
			IL2CPP_LEAVE(0x46, FINALLY_0038);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD2435E96BA430088CD4CE935459860EAE3C4B46E((Enumerator_tA979657E1C62E86F3AF732514A2F893938E7B74B *)(&V_0), /*hidden argument*/Enumerator_Dispose_mD2435E96BA430088CD4CE935459860EAE3C4B46E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(56)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x48, IL_0048)
		IL2CPP_JUMP_TBL(0x46, IL_0046)
	}

IL_0046:
	{
		// return null;
		return (ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC *)NULL;
	}

IL_0048:
	{
		// }
		ISD_PlistKey_tE52DEB1DACE0BC5B48E42C62A56DCB99562EECBC * L_10 = V_2;
		return L_10;
	}
}
// System.Collections.Generic.List`1<SA.iOS.XCode.ISD_BuildProperty> SA.iOS.XCode.ISD_Settings::get_BuildProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t47A12984B966945E7304EE778A8FB82169C91100 * ISD_Settings_get_BuildProperties_m574B07E71B9CFD9A060F1D58E7B781C1780AA8DE (ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3344388DD1FE1FD92F4413F258715C4C2DBA2BEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m95B4E880156FF461CCC8F7B1C00F72A13566085A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BD6474CDFDC20B414D400DFCCBD4199FBC3721A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DFD2CF0F937F940B30BF491D4D5F3D7BBBA27BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7471FC92FC1AA570D64A46C83CB352615E0781C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1AA8E5210FF989B29E3F8470C138F3194E47858);
		s_Il2CppMethodInitialized = true;
	}
	ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * V_0 = NULL;
	{
		// if (m_buildProperties.Count == 0)
		List_1_t47A12984B966945E7304EE778A8FB82169C91100 * L_0 = __this->get_m_buildProperties_20();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m95B4E880156FF461CCC8F7B1C00F72A13566085A_inline(L_0, /*hidden argument*/List_1_get_Count_m95B4E880156FF461CCC8F7B1C00F72A13566085A_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0061;
		}
	}
	{
		// var property = new ISD_BuildProperty("ENABLE_BITCODE", "NO");
		ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * L_2 = (ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F *)il2cpp_codegen_object_new(ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F_il2cpp_TypeInfo_var);
		ISD_BuildProperty__ctor_mF252D01853011679E079B8971CAB33B1F0C55DEB(L_2, _stringLiteral0BD6474CDFDC20B414D400DFCCBD4199FBC3721A, _stringLiteral7471FC92FC1AA570D64A46C83CB352615E0781C2, /*hidden argument*/NULL);
		V_0 = L_2;
		// m_buildProperties.Add(property);
		List_1_t47A12984B966945E7304EE778A8FB82169C91100 * L_3 = __this->get_m_buildProperties_20();
		ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * L_4 = V_0;
		NullCheck(L_3);
		List_1_Add_m3344388DD1FE1FD92F4413F258715C4C2DBA2BEF(L_3, L_4, /*hidden argument*/List_1_Add_m3344388DD1FE1FD92F4413F258715C4C2DBA2BEF_RuntimeMethod_var);
		// property = new ISD_BuildProperty("ENABLE_TESTABILITY", "NO");
		ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * L_5 = (ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F *)il2cpp_codegen_object_new(ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F_il2cpp_TypeInfo_var);
		ISD_BuildProperty__ctor_mF252D01853011679E079B8971CAB33B1F0C55DEB(L_5, _stringLiteral3DFD2CF0F937F940B30BF491D4D5F3D7BBBA27BB, _stringLiteral7471FC92FC1AA570D64A46C83CB352615E0781C2, /*hidden argument*/NULL);
		V_0 = L_5;
		// m_buildProperties.Add(property);
		List_1_t47A12984B966945E7304EE778A8FB82169C91100 * L_6 = __this->get_m_buildProperties_20();
		ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_m3344388DD1FE1FD92F4413F258715C4C2DBA2BEF(L_6, L_7, /*hidden argument*/List_1_Add_m3344388DD1FE1FD92F4413F258715C4C2DBA2BEF_RuntimeMethod_var);
		// property = new ISD_BuildProperty("GENERATE_PROFILING_CODE", "NO");
		ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * L_8 = (ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F *)il2cpp_codegen_object_new(ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F_il2cpp_TypeInfo_var);
		ISD_BuildProperty__ctor_mF252D01853011679E079B8971CAB33B1F0C55DEB(L_8, _stringLiteralA1AA8E5210FF989B29E3F8470C138F3194E47858, _stringLiteral7471FC92FC1AA570D64A46C83CB352615E0781C2, /*hidden argument*/NULL);
		V_0 = L_8;
		// m_buildProperties.Add(property);
		List_1_t47A12984B966945E7304EE778A8FB82169C91100 * L_9 = __this->get_m_buildProperties_20();
		ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * L_10 = V_0;
		NullCheck(L_9);
		List_1_Add_m3344388DD1FE1FD92F4413F258715C4C2DBA2BEF(L_9, L_10, /*hidden argument*/List_1_Add_m3344388DD1FE1FD92F4413F258715C4C2DBA2BEF_RuntimeMethod_var);
	}

IL_0061:
	{
		// return m_buildProperties;
		List_1_t47A12984B966945E7304EE778A8FB82169C91100 * L_11 = __this->get_m_buildProperties_20();
		return L_11;
	}
}
// System.String SA.iOS.XCode.ISD_Settings::get_BasePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISD_Settings_get_BasePath_m32DB307A97E681806008C48969DB7B894CE91F4A (ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5793982FDD767F3327DF4B45368BD5E059DEDD7A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string BasePath => IOS_DEPLOY_FOLDER;
		return _stringLiteral5793982FDD767F3327DF4B45368BD5E059DEDD7A;
	}
}
// System.String SA.iOS.XCode.ISD_Settings::get_PluginName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISD_Settings_get_PluginName_mC8FED98E2EA89C042D964C23C26162F6EAF6205F (ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0814ADF87C34FB2468F29C4913E98D818F62D006);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string PluginName => PLUGIN_NAME;
		return _stringLiteral0814ADF87C34FB2468F29C4913E98D818F62D006;
	}
}
// System.String SA.iOS.XCode.ISD_Settings::get_DocumentationURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISD_Settings_get_DocumentationURL_mCC9186932E16418090EEBB03A70E7FBC35668AAE (ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6292C214A95EB850F6BAC140CFEE9C933982E02);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string DocumentationURL => DOCUMENTATION_URL;
		return _stringLiteralF6292C214A95EB850F6BAC140CFEE9C933982E02;
	}
}
// System.String SA.iOS.XCode.ISD_Settings::get_SettingsUIMenuItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISD_Settings_get_SettingsUIMenuItem_mB0024FA915C16E5DE4E8DB3808F01F9B676BE355 (ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECC9B327D96E7A823960D2F1598D5DDF83AC640E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string SettingsUIMenuItem => SA_Config.EditorProductivityNativeUtilityMenuRoot + "IOS Deploy/Settings";
		return _stringLiteralECC9B327D96E7A823960D2F1598D5DDF83AC640E;
	}
}
// System.Void SA.iOS.XCode.ISD_Settings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_Settings__ctor_mE2EFF32941F1349A831DE7478904A5D57A0F2631 (ISD_Settings_t995AB6B05B9BA1717E0B75A9EA2067F7F7ABCCCF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0FE8B9CFF87754AE2B2F4351AF0ADA6485CDF702_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m22D56072E4E0F3BF53DCFACAF0EF7CDD6803D765_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m32077E95ECC5A06AA379D63701FB0B563E499349_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4361369C7CDB42F8F8CF6866A2CDAC69682EFC15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA954EB648524D9D6AA4A79B212886082247F10E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC0B1E4466908183C7560FA7AF7E2431CCB026DD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD2087DF7203D2CC322E744AF09FC9281E27C55CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD3DEC8AFAD295AC8C8326C997CCECC66600EFE71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD9CF71F579DEC474A9A578CFAFDB0D5AF5344186_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF9889B680570F6684E4D9705D245DB20524D6F82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0E869E1E4D59E7247073977786D71763115C251C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0F62678D2CE34F21E5785211C71C04056EA9E405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t47A12984B966945E7304EE778A8FB82169C91100_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9511BE61AEA93705100DA49C8230927A022DE41D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF2AAE2EA9B0B2F3C3A81DD7001BBBD10CD72E00A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1__ctor_m64F9AC80322D1C1A2EA4C6D6BB3E1ADB5A40FCB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ISD_Framework> Frameworks = new List<ISD_Framework>();
		List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC * L_0 = (List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC *)il2cpp_codegen_object_new(List_1_tD78F649ED6923E1C6844230C20E6545D414D38BC_il2cpp_TypeInfo_var);
		List_1__ctor_mD9CF71F579DEC474A9A578CFAFDB0D5AF5344186(L_0, /*hidden argument*/List_1__ctor_mD9CF71F579DEC474A9A578CFAFDB0D5AF5344186_RuntimeMethod_var);
		__this->set_Frameworks_12(L_0);
		// public List<ISD_EmbedFramework> EmbededFrameworks = new List<ISD_EmbedFramework>();
		List_1_t0F62678D2CE34F21E5785211C71C04056EA9E405 * L_1 = (List_1_t0F62678D2CE34F21E5785211C71C04056EA9E405 *)il2cpp_codegen_object_new(List_1_t0F62678D2CE34F21E5785211C71C04056EA9E405_il2cpp_TypeInfo_var);
		List_1__ctor_mD2087DF7203D2CC322E744AF09FC9281E27C55CF(L_1, /*hidden argument*/List_1__ctor_mD2087DF7203D2CC322E744AF09FC9281E27C55CF_RuntimeMethod_var);
		__this->set_EmbededFrameworks_13(L_1);
		// public List<ISD_Library> Libraries = new List<ISD_Library>();
		List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 * L_2 = (List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5 *)il2cpp_codegen_object_new(List_1_tDD803CB898797D8CA64AD46A1A82724ACE32D1A5_il2cpp_TypeInfo_var);
		List_1__ctor_mD3DEC8AFAD295AC8C8326C997CCECC66600EFE71(L_2, /*hidden argument*/List_1__ctor_mD3DEC8AFAD295AC8C8326C997CCECC66600EFE71_RuntimeMethod_var);
		__this->set_Libraries_14(L_2);
		// public List<ISD_Flag> Flags = new List<ISD_Flag>();
		List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E * L_3 = (List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E *)il2cpp_codegen_object_new(List_1_tD19709837C4C3E44B5FF18EDFE494E44D549624E_il2cpp_TypeInfo_var);
		List_1__ctor_m22D56072E4E0F3BF53DCFACAF0EF7CDD6803D765(L_3, /*hidden argument*/List_1__ctor_m22D56072E4E0F3BF53DCFACAF0EF7CDD6803D765_RuntimeMethod_var);
		__this->set_Flags_15(L_3);
		// public List<ISD_PlistKey> PlistVariables = new List<ISD_PlistKey>();
		List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD * L_4 = (List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD *)il2cpp_codegen_object_new(List_1_t9B745F20B800CC977197F3D66714DB46D042D5AD_il2cpp_TypeInfo_var);
		List_1__ctor_mA954EB648524D9D6AA4A79B212886082247F10E9(L_4, /*hidden argument*/List_1__ctor_mA954EB648524D9D6AA4A79B212886082247F10E9_RuntimeMethod_var);
		__this->set_PlistVariables_16(L_4);
		// public List<ISD_PlistKeyId> VariableDictionary = new List<ISD_PlistKeyId>();
		List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 * L_5 = (List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705 *)il2cpp_codegen_object_new(List_1_tA94CB8C2E08A183B42706F73F46B2B25BFFFE705_il2cpp_TypeInfo_var);
		List_1__ctor_mF9889B680570F6684E4D9705D245DB20524D6F82(L_5, /*hidden argument*/List_1__ctor_mF9889B680570F6684E4D9705D245DB20524D6F82_RuntimeMethod_var);
		__this->set_VariableDictionary_17(L_5);
		// public List<SA_ISOLanguage> Languages = new List<SA_ISOLanguage>();
		List_1_t0E869E1E4D59E7247073977786D71763115C251C * L_6 = (List_1_t0E869E1E4D59E7247073977786D71763115C251C *)il2cpp_codegen_object_new(List_1_t0E869E1E4D59E7247073977786D71763115C251C_il2cpp_TypeInfo_var);
		List_1__ctor_m32077E95ECC5A06AA379D63701FB0B563E499349(L_6, /*hidden argument*/List_1__ctor_m32077E95ECC5A06AA379D63701FB0B563E499349_RuntimeMethod_var);
		__this->set_Languages_18(L_6);
		// public List<ISD_ShellScript> ShellScripts = new List<ISD_ShellScript>();
		List_1_tF2AAE2EA9B0B2F3C3A81DD7001BBBD10CD72E00A * L_7 = (List_1_tF2AAE2EA9B0B2F3C3A81DD7001BBBD10CD72E00A *)il2cpp_codegen_object_new(List_1_tF2AAE2EA9B0B2F3C3A81DD7001BBBD10CD72E00A_il2cpp_TypeInfo_var);
		List_1__ctor_mC0B1E4466908183C7560FA7AF7E2431CCB026DD3(L_7, /*hidden argument*/List_1__ctor_mC0B1E4466908183C7560FA7AF7E2431CCB026DD3_RuntimeMethod_var);
		__this->set_ShellScripts_19(L_7);
		// List<ISD_BuildProperty> m_buildProperties = new List<ISD_BuildProperty>();
		List_1_t47A12984B966945E7304EE778A8FB82169C91100 * L_8 = (List_1_t47A12984B966945E7304EE778A8FB82169C91100 *)il2cpp_codegen_object_new(List_1_t47A12984B966945E7304EE778A8FB82169C91100_il2cpp_TypeInfo_var);
		List_1__ctor_m4361369C7CDB42F8F8CF6866A2CDAC69682EFC15(L_8, /*hidden argument*/List_1__ctor_m4361369C7CDB42F8F8CF6866A2CDAC69682EFC15_RuntimeMethod_var);
		__this->set_m_buildProperties_20(L_8);
		// public ISD_CapabilitySettings Capability = new ISD_CapabilitySettings();
		ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494 * L_9 = (ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494 *)il2cpp_codegen_object_new(ISD_CapabilitySettings_t46AAE068E69340D960617B5B1361898717D40494_il2cpp_TypeInfo_var);
		ISD_CapabilitySettings__ctor_mE439D8DA1FFBA2852B4AD21067701A39A40886AD(L_9, /*hidden argument*/NULL);
		__this->set_Capability_22(L_9);
		// public List<ISD_AssetFile> Files = new List<ISD_AssetFile>();
		List_1_t9511BE61AEA93705100DA49C8230927A022DE41D * L_10 = (List_1_t9511BE61AEA93705100DA49C8230927A022DE41D *)il2cpp_codegen_object_new(List_1_t9511BE61AEA93705100DA49C8230927A022DE41D_il2cpp_TypeInfo_var);
		List_1__ctor_m0FE8B9CFF87754AE2B2F4351AF0ADA6485CDF702(L_10, /*hidden argument*/List_1__ctor_m0FE8B9CFF87754AE2B2F4351AF0ADA6485CDF702_RuntimeMethod_var);
		__this->set_Files_23(L_10);
		IL2CPP_RUNTIME_CLASS_INIT(SA_ScriptableSingleton_1_tC0C54A93DB8695AFC82856FB9CED5DC4DB90FC2C_il2cpp_TypeInfo_var);
		SA_ScriptableSingleton_1__ctor_m64F9AC80322D1C1A2EA4C6D6BB3E1ADB5A40FCB1(__this, /*hidden argument*/SA_ScriptableSingleton_1__ctor_m64F9AC80322D1C1A2EA4C6D6BB3E1ADB5A40FCB1_RuntimeMethod_var);
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
// System.String SA.iOS.XCode.ISD_ShellScript::get_ShellScriptPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISD_ShellScript_get_ShellScriptPath_m05BBB6B1A33160716D15FB582C400DF83593E987 (ISD_ShellScript_t7BFF36378410648446102EECD99CFE87DBF751E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string ShellScriptPath => "\\\"" + Script + "\\\"";
		String_t* L_0 = __this->get_Script_2();
		String_t* L_1;
		L_1 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, L_0, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void SA.iOS.XCode.ISD_ShellScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISD_ShellScript__ctor_m9FCD1FAF5C3DAACC5DA7B8F96C0F91ABDFA0830A (ISD_ShellScript_t7BFF36378410648446102EECD99CFE87DBF751E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F1A1313ACE9184F384D0C3DAC70E43F1782CE1C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Name = "New Run Script";
		__this->set_Name_0(_stringLiteral0F1A1313ACE9184F384D0C3DAC70E43F1782CE1C);
		// public string Shell = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_Shell_1(L_0);
		// public string Script = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_Script_2(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SA.iOS.XCode.ISD_CapabilitySettings/AppGroupsCapability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppGroupsCapability__ctor_m0D830E58DE635C95538F56CA2D7953FC8401A0FB (AppGroupsCapability_tD9E42DF113B62E0A6438CC48C156C21D21C0B7BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> groups = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_groups_1(L_0);
		Capability__ctor_mFA0B103915641E5599987ACBC6776730B0ABF2B5(__this, /*hidden argument*/NULL);
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
// System.Void SA.iOS.XCode.ISD_CapabilitySettings/ApplePayCapability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplePayCapability__ctor_m551B20D4482430CE108D2BE0D64D4D56037A0FC4 (ApplePayCapability_t8006036C3FABF39E040353EC648A79DA790CEB03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> merchants = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_merchants_1(L_0);
		Capability__ctor_mFA0B103915641E5599987ACBC6776730B0ABF2B5(__this, /*hidden argument*/NULL);
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
// System.Void SA.iOS.XCode.ISD_CapabilitySettings/AssociatedDomainsCapability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssociatedDomainsCapability__ctor_m9027A92208EF95F681DC401DCEA9C097EBB594AA (AssociatedDomainsCapability_t693B11E62E17C6609C3F79C3A2E63779570FFB27 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> domains = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_domains_1(L_0);
		Capability__ctor_mFA0B103915641E5599987ACBC6776730B0ABF2B5(__this, /*hidden argument*/NULL);
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
// System.Void SA.iOS.XCode.ISD_CapabilitySettings/BackgroundModesCapability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundModesCapability__ctor_m416C334B84C833DFC69C8DF783BD408A36EC781C (BackgroundModesCapability_tEC48C548936457ED233CD3BACE3DA008CDCEB6D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD728A8013E758BEF77948CB8EA704120464F7439_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t36B10EDDB61D61D7E69D51E2F3F59664B130AA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<BackgroundModesOptions> options = new List<BackgroundModesOptions>();
		List_1_t36B10EDDB61D61D7E69D51E2F3F59664B130AA56 * L_0 = (List_1_t36B10EDDB61D61D7E69D51E2F3F59664B130AA56 *)il2cpp_codegen_object_new(List_1_t36B10EDDB61D61D7E69D51E2F3F59664B130AA56_il2cpp_TypeInfo_var);
		List_1__ctor_mD728A8013E758BEF77948CB8EA704120464F7439(L_0, /*hidden argument*/List_1__ctor_mD728A8013E758BEF77948CB8EA704120464F7439_RuntimeMethod_var);
		__this->set_options_1(L_0);
		Capability__ctor_mFA0B103915641E5599987ACBC6776730B0ABF2B5(__this, /*hidden argument*/NULL);
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
// System.Void SA.iOS.XCode.ISD_CapabilitySettings/Capability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Capability__ctor_mFA0B103915641E5599987ACBC6776730B0ABF2B5 (Capability_tF147FA4B54AA4DE6885EEF70B0137153E09172A8 * __this, const RuntimeMethod* method)
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
// System.Void SA.iOS.XCode.ISD_CapabilitySettings/KeychainSharingCapability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeychainSharingCapability__ctor_mB983485F6D26F50F93971267AB1D341F674BACC9 (KeychainSharingCapability_t81BC5A01F4AD5A9D00BA956731CF3BC636D5FDE3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> accessGroups = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_accessGroups_1(L_0);
		Capability__ctor_mFA0B103915641E5599987ACBC6776730B0ABF2B5(__this, /*hidden argument*/NULL);
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
// System.Void SA.iOS.XCode.ISD_CapabilitySettings/MapsCapability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapsCapability__ctor_m4EA52C285861883AA716EC38CBCD6F77808AF67B (MapsCapability_tB3B5DB6D42952FBFF0D298E2B53ADF96E70C986F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6A4E01FFD35605876DCC5B7AC2F03B6049367A28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA782C52F01BC52A405B52D42803A3177410C6394_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<MapsOptions> options = new List<MapsOptions>();
		List_1_tA782C52F01BC52A405B52D42803A3177410C6394 * L_0 = (List_1_tA782C52F01BC52A405B52D42803A3177410C6394 *)il2cpp_codegen_object_new(List_1_tA782C52F01BC52A405B52D42803A3177410C6394_il2cpp_TypeInfo_var);
		List_1__ctor_m6A4E01FFD35605876DCC5B7AC2F03B6049367A28(L_0, /*hidden argument*/List_1__ctor_m6A4E01FFD35605876DCC5B7AC2F03B6049367A28_RuntimeMethod_var);
		__this->set_options_1(L_0);
		Capability__ctor_mFA0B103915641E5599987ACBC6776730B0ABF2B5(__this, /*hidden argument*/NULL);
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
// System.Void SA.iOS.XCode.ISD_CapabilitySettings/PushNotificationsCapability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushNotificationsCapability__ctor_m11BEE5BD1261B0D3A23C4E3BE9455BF67E345EF9 (PushNotificationsCapability_tA3F0ED1F949FCD420D665B366053B9EA3B8A9B09 * __this, const RuntimeMethod* method)
{
	{
		// public bool development = true;
		__this->set_development_1((bool)1);
		Capability__ctor_mFA0B103915641E5599987ACBC6776730B0ABF2B5(__this, /*hidden argument*/NULL);
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
// System.Void SA.iOS.XCode.ISD_CapabilitySettings/WalletCapability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WalletCapability__ctor_m5ECED46ED8D9C0B7B3169FD1013EEFEBF2FFF16B (WalletCapability_t2A652861CD399823A3527B05AD810692827091DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> passSubset = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_passSubset_1(L_0);
		Capability__ctor_mFA0B103915641E5599987ACBC6776730B0ABF2B5(__this, /*hidden argument*/NULL);
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
// System.Void SA.iOS.XCode.ISD_CapabilitySettings/iCloudCapability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iCloudCapability__ctor_m7E84F82292F97C01BB1A29817824A00F7400E218 (iCloudCapability_t623E461BD2CEC236034D4DF6E94ED7065A9758EC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> customContainers = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_customContainers_3(L_0);
		Capability__ctor_mFA0B103915641E5599987ACBC6776730B0ABF2B5(__this, /*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ISD_BuildProperty_get_Name_m530C68A0A0BC6B78DE7861E6D569C0318A1F7800_inline (ISD_BuildProperty_t9EFE9AD8BAB7907AB436EC797E74D5658DAFBE4F * __this, const RuntimeMethod* method)
{
	{
		// public string Name => m_name;
		String_t* L_0 = __this->get_m_name_0();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
