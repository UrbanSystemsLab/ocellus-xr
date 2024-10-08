using UnityEditor;
using UnityEngine;
using SA.Foundation.Config;

namespace SA.Foundation.Editor
{
    public static class SA_CompanyGUILayout
    {
        static Texture2D s_logo = null;

        public static Texture2D Logo
        {
            get
            {
                if (s_logo == null)
                {
                    var path = SA_Config.StansAssetsFoundationPath + "EditorContent/SAGraphic/";
                    if (EditorGUIUtility.isProSkin)
                        path = path + "sa_logo_small.png";
                    else
                        path = path + "sa_logo_small_light.png";
                    s_logo = SA_EditorAssets.GetTextureAtPath(path);
                }

                return s_logo;
            }
        }

        public static void DrawLogo()
        {
            var s = new GUIStyle();
            var content = new GUIContent(Logo, "Visit our website");

            var click = GUILayout.Button(content, s);
            if (click) Application.OpenURL(SA_Config.StansAssetsWebsiteRootUrl);
        }

        public static void ContactSupportWithSubject(string subject)
        {
            var url = "mailto:support@stansassets.com?subject=" + EscapeURL(subject);
            Application.OpenURL(url);
        }

        static string EscapeURL(string url)
        {
#if UNITY_2018_3_OR_NEWER
            return UnityEngine.Networking.UnityWebRequest.EscapeURL(url).Replace("+", "%20");
#else
            return WWW.EscapeURL(url).Replace("+", "%20");
#endif
        }

        static readonly GUIContent SupportEmail = new GUIContent("Support [?]", "If you have any technical questions, feel free to drop us an e-mail");

        public static void SupportMail()
        {
            SA_EditorGUILayout.SelectableLabel(SupportEmail, SA_Config.StansAssetsSupportEmail);
        }
    }
}
