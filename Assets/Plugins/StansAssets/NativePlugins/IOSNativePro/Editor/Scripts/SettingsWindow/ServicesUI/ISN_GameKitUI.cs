using UnityEngine;
using UnityEditor;
using SA.Foundation.Editor;
using SA.iOS.GameKit;

namespace SA.iOS
{
    class ISN_GameKitUI : ISN_ServiceSettingsUI
    {
        public override void OnAwake()
        {
            base.OnAwake();

            AddFeatureUrl("Getting Started", "https://github.com/StansAssets/com.stansassets.ios-native/wiki/Getting-Started");
            AddFeatureUrl("Authentication", "https://github.com/StansAssets/com.stansassets.ios-native/wiki/Authentication");
            AddFeatureUrl("Player Photo", "https://github.com/StansAssets/com.stansassets.ios-native/wiki/Authentication#player-photo");
            AddFeatureUrl("Server-side Auth", "https://github.com/StansAssets/com.stansassets.ios-native/wiki/Authentication#third-party-server-authentication");
            AddFeatureUrl("Game Center UI", "https://github.com/StansAssets/com.stansassets.ios-native/wiki/Game-Center-UI");
            AddFeatureUrl("Leaderboards", "https://github.com/StansAssets/com.stansassets.ios-native/wiki/Leaderboards");
            AddFeatureUrl("Default Leaderboard", "https://github.com/StansAssets/com.stansassets.ios-native/wiki/Leaderboards#one-leaderboard-is-the-default-leaderboard");
            AddFeatureUrl("Achievements", "https://github.com/StansAssets/com.stansassets.ios-native/wiki/Achievements");
            AddFeatureUrl("Saving A Game", "https://github.com/StansAssets/com.stansassets.ios-native/wiki/Saving-A-Game");
        }

        public override string Title => "Game Kit";

        public override string Description => "GameKit offers features that you can use to create great social games.";

        protected override Texture2D Icon => SA_EditorAssets.GetTextureAtPath(ISN_Skin.IconsPath + "GameKit_icon.png");

        public override SA_iAPIResolver Resolver => ISN_Preprocessor.GetResolver<ISN_GameKitResolver>();

        protected override void OnServiceUI()
        {
            using (new SA_WindowBlockWithSpace(new GUIContent("Achievement")))
            {
                if (ISN_Settings.Instance.Achievements.Count == 0)
                    EditorGUILayout.HelpBox("Use this menu to list your game achievements. " +
                        "This step is not required, and only designed for your" +
                        "convinience, in case you are making custom in-game achievements view.", MessageType.Info);
                DrawAchievementsList();
            }

            using (new SA_WindowBlockWithSpace(new GUIContent("Saving A Game")))
            {
                EditorGUILayout.HelpBox("The saves API will allow you to provide your player an ability to save & load " +
                    "game progress at any time.", MessageType.Info);

                ISN_Settings.Instance.SavingAGame = SA_EditorGUILayout.ToggleFiled("API State", ISN_Settings.Instance.SavingAGame, SA_StyledToggle.ToggleType.EnabledDisabled);
            }
        }

        static readonly GUIContent AchievementIdDLabel = new GUIContent("Achievement Id[?]:", "A unique identifier that will be used for reporting. It can be composed of letters and numbers.");
        static readonly GUIContent AchievementNameLabel = new GUIContent("Achievement Name[?]:", "The name of the achievement. This is the editor only field.");

        public static void DrawAchievementsList()
        {
            SA_EditorGUILayout.ReorderablList(ISN_Settings.Instance.Achievements, GetAchievementDisplayName, DrawAchievementContent, () =>
            {
                ISN_Settings.Instance.Achievements.Add(new ISN_GKAchievement("my.new.achievement.id"));
            });
        }

        static string GetAchievementDisplayName(ISN_GKAchievement achievement)
        {
            return achievement.Name + "(" + achievement.Identifier + ")";
        }

        static void DrawAchievementContent(ISN_GKAchievement achievement)
        {
            achievement.Identifier = SA_EditorGUILayout.TextField(AchievementIdDLabel, achievement.Identifier);
            achievement.Name = SA_EditorGUILayout.TextField(AchievementNameLabel, achievement.Name);
        }
    }
}
