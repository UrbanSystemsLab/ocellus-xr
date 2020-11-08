////////////////////////////////////////////////////////////////////////////////
//
// @module IOS Native Plugin
// @author Koretsky Konstantin (Stan's Assets)
// @support support@stansassets.com
// @website https://stansassets.com
//
////////////////////////////////////////////////////////////////////////////////

using UnityEngine;
using SA.Foundation.Utility;
using SA.iOS.XCode;

namespace SA.iOS.GameKit
{
    /// <summary>
    /// This class is for plugin internal use only
    /// </summary>
    static class ISN_GKLib
    {
        static ISN_iGKAPI s_Api;

        public static ISN_iGKAPI Api
        {
            get
            {
                if (!ISD_API.Capability.GameCenter.Enabled)
                    SA_Plugins.OnDisabledAPIUseAttempt(ISN_Settings.PluginTittle, "Game Kit");

                if (s_Api == null)
                {
                    if (Application.isEditor)
                        s_Api = new ISN_GKEditorAPI();
                    else
                        s_Api = ISN_GKNativeAPI.Instance;
                }

                return s_Api;
            }
        }
    }
}
