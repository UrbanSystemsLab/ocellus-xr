using UnityEngine;
using UnityEditor;
using SA.Foundation.Config;

namespace SA.Foundation.Editor
{
    /// <summary>
    /// Contains common styles and images for Stan's Assets Editor UIs
    /// </summary>
    public static class SA_Skin
    {
        public const string k_AboutIconsPath = SA_Config.StansAssetsEditorIcons + "About/";
        public const string k_GeneticIconsPath = SA_Config.StansAssetsEditorIcons + "Generic/";
        public const string k_SocialIconsPath = SA_Config.StansAssetsEditorIcons + "Social/";

        public static Texture2D GetAboutIcon(string iconName)
        {
            return SA_EditorAssets.GetTextureAtPath(k_AboutIconsPath + iconName);
        }

        public static Texture2D GetGenericIcon(string iconName)
        {
            return SA_EditorAssets.GetTextureAtPath(k_GeneticIconsPath + iconName);
        }

        public static Texture2D GetSocialIcon(string iconName)
        {
            return SA_EditorAssets.GetTextureAtPath(k_SocialIconsPath + iconName);
        }

        static GUIStyle s_BoxStyle = null;
        public static GUIStyle BoxStyle => s_BoxStyle ?? (s_BoxStyle = new GUIStyle(GUI.skin.box));

        static GUIStyle s_LabelBold = null;

        public static GUIStyle LabelBold
        {
            get
            {
                if (s_LabelBold == null)
                {
                    s_LabelBold = new GUIStyle(EditorStyles.label);
                    s_LabelBold.fontStyle = FontStyle.Bold;
                }

                return s_LabelBold;
            }
        }

        static GUIStyle s_MiniLabel = null;

        public static GUIStyle MiniLabelWordWrap
        {
            get
            {
                if (s_MiniLabel == null)
                {
                    s_MiniLabel = new GUIStyle(EditorStyles.miniLabel);
                    s_MiniLabel.wordWrap = true;
                }

                return s_MiniLabel;
            }
        }
    }
}
