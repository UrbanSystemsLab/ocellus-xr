// Copyright (c) Rotorz Limited. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root.

using System;
using System.Collections.Generic;
using System.Reflection;
using UnityEditor;
using UnityEngine;

namespace TypeReferences
{
    /// <summary>
    /// Custom property drawer for <see cref="ClassTypeReference"/> properties.
    /// </summary>
    [CustomPropertyDrawer(typeof(ClassTypeReference))]
    [CustomPropertyDrawer(typeof(ClassTypeConstraintAttribute), true)]
    public sealed class ClassTypeReferencePropertyDrawer : PropertyDrawer
    {
        #region Type Filtering

        /// <summary>
        /// Gets or sets a function that returns a collection of types that are
        /// to be excluded from drop-down. A value of <c>null</c> specifies that
        /// no types are to be excluded.
        /// </summary>
        /// <remarks>
        /// <para>This property must be set immediately before presenting a class
        /// type reference property field using <see cref="EditorGUI.PropertyField"/>
        /// or <see cref="EditorGUILayout.PropertyField"/> since the value of this
        /// property is reset to <c>null</c> each time the control is drawn.</para>
        /// <para>Since filtering makes extensive use of <see cref="ICollection{Type}.Contains"/>
        /// it is recommended to use a collection that is optimized for fast
        /// lookups such as <see cref="HashSet{Type}"/> for better performance.</para>
        /// </remarks>
        /// <example>
        /// <para>Exclude a specific type from being selected:</para>
        /// <code language="csharp"><![CDATA[
        /// private SerializedProperty _someClassTypeReferenceProperty;
        /// 
        /// public override void OnInspectorGUI() {
        ///     serializedObject.Update();
        /// 
        ///     ClassTypeReferencePropertyDrawer.ExcludedTypeCollectionGetter = GetExcludedTypeCollection;
        ///     EditorGUILayout.PropertyField(_someClassTypeReferenceProperty);
        /// 
        ///     serializedObject.ApplyModifiedProperties();
        /// }
        /// 
        /// private ICollection<Type> GetExcludedTypeCollection() {
        ///     var set = new HashSet<Type>();
        ///     set.Add(typeof(SpecialClassToHideInDropdown));
        ///     return set;
        /// }
        /// ]]></code>
        /// </example>
        public static Func<ICollection<Type>> ExcludedTypeCollectionGetter { get; set; }

        static List<Type> GetFilteredTypes(ClassTypeConstraintAttribute filter)
        {
            var types = new List<Type>();

            var excludedTypes = ExcludedTypeCollectionGetter != null ? ExcludedTypeCollectionGetter() : null;

            var assembly = Assembly.GetExecutingAssembly();
            FilterTypes(assembly, filter, excludedTypes, types);

            foreach (var referencedAssembly in assembly.GetReferencedAssemblies())
                FilterTypes(Assembly.Load(referencedAssembly), filter, excludedTypes, types);

            types.Sort((a, b) => a.FullName.CompareTo(b.FullName));

            return types;
        }

        static void FilterTypes(Assembly assembly, ClassTypeConstraintAttribute filter, ICollection<Type> excludedTypes, List<Type> output)
        {
            foreach (var type in assembly.GetTypes())
            {
                if (!type.IsVisible || !type.IsClass)
                    continue;

                if (filter != null && !filter.IsConstraintSatisfied(type))
                    continue;

                if (excludedTypes != null && excludedTypes.Contains(type))
                    continue;

                output.Add(type);
            }
        }

        #endregion

        #region Type Utility

        static readonly Dictionary<string, Type> s_TypeMap = new Dictionary<string, Type>();

        static Type ResolveType(string classRef)
        {
            Type type;
            if (!s_TypeMap.TryGetValue(classRef, out type))
            {
                type = !string.IsNullOrEmpty(classRef) ? Type.GetType(classRef) : null;
                s_TypeMap[classRef] = type;
            }

            return type;
        }

        #endregion

        #region Control Drawing / Event Handling

        static readonly int s_ControlHint = typeof(ClassTypeReferencePropertyDrawer).GetHashCode();
        static readonly GUIContent s_TempContent = new GUIContent();

        /*
        public static string DrawTypeSelectionControl(Rect position, GUIContent label, string classRef, ClassTypeConstraintAttribute filter) {

        }*/

        static string DrawTypeSelectionControl(Rect position, GUIContent label, string classRef, ClassTypeConstraintAttribute filter)
        {
            if (label != null && label != GUIContent.none)
                position = EditorGUI.PrefixLabel(position, label);

            var controlID = GUIUtility.GetControlID(s_ControlHint, FocusType.Keyboard, position);

            var triggerDropDown = false;

            switch (Event.current.GetTypeForControl(controlID))
            {
                case EventType.ExecuteCommand:
                    if (Event.current.commandName == "TypeReferenceUpdated")
                        if (s_SelectionControlID == controlID)
                        {
                            if (classRef != s_SelectedClassRef)
                            {
                                classRef = s_SelectedClassRef;
                                GUI.changed = true;
                            }

                            s_SelectionControlID = 0;
                            s_SelectedClassRef = null;
                        }

                    break;

                case EventType.MouseDown:
                    if (GUI.enabled && position.Contains(Event.current.mousePosition))
                    {
                        GUIUtility.keyboardControl = controlID;
                        triggerDropDown = true;
                        Event.current.Use();
                    }

                    break;

                case EventType.KeyDown:
                    if (GUI.enabled && GUIUtility.keyboardControl == controlID)
                        if (Event.current.keyCode == KeyCode.Return || Event.current.keyCode == KeyCode.Space)
                        {
                            triggerDropDown = true;
                            Event.current.Use();
                        }

                    break;

                case EventType.Repaint:
                    // Remove assembly name from content of popup control.
                    var classRefParts = classRef.Split(',');

                    var guiColor = GUI.color;
                    var renderColor = GUI.color;

                    //TODO display class name
                    s_TempContent.text = classRefParts[0].Trim();
                    if (s_TempContent.text == "")
                    {
                        s_TempContent.text = "(None)";
                    }
                    else if (ResolveType(classRef) == null)
                    {
                        s_TempContent.text += " {Missing}";
                        renderColor = Color.red;
                    }
                    else
                    {
                        s_TempContent.text = ResolveType(classRef).Name;
                    }

                    // s_TempContent.text = "wtf??";
                    GUI.color = renderColor;
                    EditorStyles.popup.Draw(position, s_TempContent, controlID);
                    GUI.color = guiColor;

                    break;
            }

            if (triggerDropDown)
            {
                s_SelectionControlID = controlID;
                s_SelectedClassRef = classRef;

                var filteredTypes = GetFilteredTypes(filter);
                DisplayDropDown(position, filteredTypes, ResolveType(classRef), filter.Grouping);
            }

            return classRef;
        }

        static void DrawTypeSelectionControl(Rect position, SerializedProperty property, GUIContent label, ClassTypeConstraintAttribute filter)
        {
            try
            {
                var restoreShowMixedValue = EditorGUI.showMixedValue;
                EditorGUI.showMixedValue = property.hasMultipleDifferentValues;

                property.stringValue = DrawTypeSelectionControl(position, label, property.stringValue, filter);

                EditorGUI.showMixedValue = restoreShowMixedValue;
            }
            finally
            {
                ExcludedTypeCollectionGetter = null;
            }
        }

        static void DisplayDropDown(Rect position, List<Type> types, Type selectedType, ClassGrouping grouping)
        {
            var menu = new GenericMenu();

            menu.AddItem(new GUIContent("(None)"), selectedType == null, s_OnSelectedTypeName, null);
            menu.AddSeparator("");

            for (var i = 0; i < types.Count; ++i)
            {
                var type = types[i];

                var menuLabel = FormatGroupedTypeName(type, grouping);
                if (string.IsNullOrEmpty(menuLabel))
                    continue;

                var content = new GUIContent(menuLabel);
                menu.AddItem(content, type == selectedType, s_OnSelectedTypeName, type);
            }

            menu.DropDown(position);
        }

        static string FormatGroupedTypeName(Type type, ClassGrouping grouping)
        {
            var name = type.FullName;

            switch (grouping)
            {
                default:
                case ClassGrouping.None:
                    return name;

                case ClassGrouping.ByNamespace:
                    return name.Replace('.', '/');

                case ClassGrouping.ByNamespaceFlat:
                    var lastPeriodIndex = name.LastIndexOf('.');
                    if (lastPeriodIndex != -1)
                        name = name.Substring(0, lastPeriodIndex) + "/" + name.Substring(lastPeriodIndex + 1);

                    return name;

                case ClassGrouping.ByAddComponentMenu:
                    var addComponentMenuAttributes = type.GetCustomAttributes(typeof(AddComponentMenu), false);
                    if (addComponentMenuAttributes.Length == 1)
                        return ((AddComponentMenu)addComponentMenuAttributes[0]).componentMenu;

                    return "Scripts/" + type.FullName.Replace('.', '/');
            }
        }

        static int s_SelectionControlID;
        static string s_SelectedClassRef;

        static readonly GenericMenu.MenuFunction2 s_OnSelectedTypeName = OnSelectedTypeName;

        static void OnSelectedTypeName(object userData)
        {
            var selectedType = userData as Type;

            s_SelectedClassRef = ClassTypeReference.GetClassRef(selectedType);

            var typeReferenceUpdatedEvent = EditorGUIUtility.CommandEvent("TypeReferenceUpdated");
            EditorWindow.focusedWindow.SendEvent(typeReferenceUpdatedEvent);
        }

        #endregion

        public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
        {
            return EditorStyles.popup.CalcHeight(GUIContent.none, 0);
        }

        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            var btnWidth = 50;
            var selectionRect = new Rect(position);
            selectionRect.width -= btnWidth;

            var buttonRect = new Rect(position);
            buttonRect.x = position.x + position.width - btnWidth;
            buttonRect.width = btnWidth;
            var click = GUI.Button(buttonRect, "Select", EditorStyles.miniButton);
            if (click)
            {
                var classRef = property.FindPropertyRelative("_classRef").stringValue;
                var type = ResolveType(classRef);

                if (type != null)
                {
                    var assets = AssetDatabase.FindAssets(type.Name + " t:script");
                    foreach (var asset in assets)
                    {
                        var asetPath = AssetDatabase.GUIDToAssetPath(asset);
                        var script = AssetDatabase.LoadAssetAtPath(asetPath, typeof(MonoScript)) as MonoScript;

                        EditorGUIUtility.PingObject(script);
                    }
                }
            }

            DrawTypeSelectionControl(selectionRect, property.FindPropertyRelative("_classRef"), label, attribute as ClassTypeConstraintAttribute);
        }
    }
}
