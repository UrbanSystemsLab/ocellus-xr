using UnityEngine;
using UnityEditor;
using System.Collections.Generic;
using SA.Foundation.Editor;

namespace SA.iOS
{
    class ISN_AssetsLibraryUI : ISN_ServiceSettingsUI
    {
        public override void OnAwake()
        {
            base.OnAwake();

            AddFeatureUrl("Getting Started", "https://api.stansassets.com/ios-native/");
        }

        public override string Title => "Assets Library";

        public override string Description => "Provides access to the videos and photos that are under the control of the Photos application.";

        protected override Texture2D Icon => SA_EditorAssets.GetTextureAtPath(ISN_Skin.IconsPath + "CoreLocation_icon.png");

        public override SA_iAPIResolver Resolver => ISN_Preprocessor.GetResolver<ISN_CoreLocationResolver>();

        protected override void OnServiceUI() { }
    }
}
