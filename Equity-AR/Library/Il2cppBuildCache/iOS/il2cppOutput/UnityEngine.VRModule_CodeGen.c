#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Boolean UnityEngine.XR.XRSettings::get_enabled()
extern void XRSettings_get_enabled_m970BB98BF899D943776BE6EB66FE40AA9C12A902 (void);
// 0x00000002 UnityEngine.RenderTextureDescriptor UnityEngine.XR.XRSettings::get_eyeTextureDesc()
extern void XRSettings_get_eyeTextureDesc_m58F62EE4C7F46984BDC58081AF2E40DE625AC582 (void);
// 0x00000003 System.String UnityEngine.XR.XRSettings::get_loadedDeviceName()
extern void XRSettings_get_loadedDeviceName_m1E091DB259635ACAE9C3B77980CDB00AC06B6D4C (void);
// 0x00000004 System.String[] UnityEngine.XR.XRSettings::get_supportedDevices()
extern void XRSettings_get_supportedDevices_m48F7F0CC911EB45AD210523FA957A4E8412AE93F (void);
// 0x00000005 System.Void UnityEngine.XR.XRSettings::get_eyeTextureDesc_Injected(UnityEngine.RenderTextureDescriptor&)
extern void XRSettings_get_eyeTextureDesc_Injected_m639509084F5EC222779474C77EF7586989C4F856 (void);
// 0x00000006 System.Void UnityEngine.XR.XRDevice::DisableAutoXRCameraTracking(UnityEngine.Camera,System.Boolean)
extern void XRDevice_DisableAutoXRCameraTracking_mC203FE6788C85285EDD5822689A4B10EA720D268 (void);
// 0x00000007 System.Void UnityEngine.XR.XRDevice::InvokeDeviceLoaded(System.String)
extern void XRDevice_InvokeDeviceLoaded_m3BDF6825A2A56E4923D4E6593C7BA2949B6A3581 (void);
// 0x00000008 System.Void UnityEngine.XR.XRDevice::.cctor()
extern void XRDevice__cctor_mC83C1293819B81E68EC72D01A5CC107DFE29B98C (void);
static Il2CppMethodPointer s_methodPointers[8] = 
{
	XRSettings_get_enabled_m970BB98BF899D943776BE6EB66FE40AA9C12A902,
	XRSettings_get_eyeTextureDesc_m58F62EE4C7F46984BDC58081AF2E40DE625AC582,
	XRSettings_get_loadedDeviceName_m1E091DB259635ACAE9C3B77980CDB00AC06B6D4C,
	XRSettings_get_supportedDevices_m48F7F0CC911EB45AD210523FA957A4E8412AE93F,
	XRSettings_get_eyeTextureDesc_Injected_m639509084F5EC222779474C77EF7586989C4F856,
	XRDevice_DisableAutoXRCameraTracking_mC203FE6788C85285EDD5822689A4B10EA720D268,
	XRDevice_InvokeDeviceLoaded_m3BDF6825A2A56E4923D4E6593C7BA2949B6A3581,
	XRDevice__cctor_mC83C1293819B81E68EC72D01A5CC107DFE29B98C,
};
static const int32_t s_InvokerIndices[8] = 
{
	8172,
	8168,
	8152,
	8152,
	8029,
	7366,
	8042,
	8185,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_VRModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_VRModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_VRModule_CodeGenModule = 
{
	"UnityEngine.VRModule.dll",
	8,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_UnityEngine_VRModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
