namespace Mapbox.Unity.MeshGeneration.Modifiers
{
	using UnityEngine;
	using UnityEngine.UI;
	using TMPro;
	using Mapbox.Unity.MeshGeneration.Data;
	using Mapbox.Unity.MeshGeneration.Components;
	using Mapbox.Unity.MeshGeneration.Interfaces;
	using System.Collections.Generic;
	using Mapbox.Unity.Map;
	using System;
	using System.IO;
	using System.Text;

	[CreateAssetMenu(menuName = "Mapbox/Modifiers/Prefab Modifier")]
	public class PrefabModifier : GameObjectModifier
	{
		private Dictionary<GameObject, GameObject> _objects;
		[SerializeField]
		private SpawnPrefabOptions _options;
		private List<GameObject> _prefabList = new List<GameObject>();


		



		public override void Initialize()
		{
			if (_objects == null)
			{
				_objects = new Dictionary<GameObject, GameObject>();
			}


			//treetypeList.Clear();
			//file = new FileStream(Application.dataPath + "/CustomData/treetype.txt", FileMode.Open);


		}

		public override void SetProperties(ModifierProperties properties)
		{
			_options = (SpawnPrefabOptions)properties;
			_options.PropertyHasChanged += UpdateModifier;
		}

		public override void Run(VectorEntity ve, UnityTile tile)
		{
			//Interactions iManager = GameObject.Find("GameManager").GetComponent<Interactions>();
			//iManager.nearbyTrees.Add(ve);

			if (_options.prefab == null)
			{
				return;
			}

			GameObject go = null;

			if (_objects.ContainsKey(ve.GameObject))
			{
				go = _objects[ve.GameObject];
			}
			else
			{
				go = Instantiate(_options.prefab);
				_prefabList.Add(go);
				_objects.Add(ve.GameObject, go);
				go.transform.SetParent(ve.GameObject.transform, false);
			}

			PositionScaleRectTransform(ve, tile, go);
		

			if (_options.AllPrefabsInstatiated != null)
			{
				_options.AllPrefabsInstatiated(_prefabList);
			}
		}



        public void PositionScaleRectTransform(VectorEntity ve, UnityTile tile, GameObject go)
		{
			
			RectTransform goRectTransform;
			Transform stemTransform;
			Transform crownTransform;
			GameObject crown;
			TreeInfoManager treeInfo;

			IFeaturePropertySettable settable = null;
			var centroidVector = new Vector3();

			float property = 0;
			bool treeFound = false;
			string treeType = "test";
			string treeStructure = "test";
			string treeCondition = "test";

			foreach (var point in ve.Feature.Points[0])
			{
				centroidVector += point;
			}
			centroidVector = centroidVector / ve.Feature.Points[0].Count;
			//Debug.Log(ve.Feature.Points[0][0]);

			go.name = ve.Feature.Data.Id.ToString();
		
			try
			{
				//Getting tree DBH and convert it to meters from inch.
				float.TryParse(ve.Feature.Properties["DBH"].ToString(), out property);
				property = property * 0.0254f * 2.0f;

				//Getting tree GenusSpeci
				treeType = ve.Feature.Properties["GenusSpeci"].ToString();
				treeStructure = ve.Feature.Properties["TPStructur"].ToString();
				treeCondition = ve.Feature.Properties["TPConditio"].ToString();
				treeFound = true;

			}
			catch (Exception ex)
			{
				property = 0;
				treeType = "null";
				treeFound = false;
				Debug.Log("Temperature layer error:" + ex.Message);
			}



            goRectTransform = go.GetComponent<RectTransform>();
			stemTransform = go.transform.GetChild(0);
			crownTransform = go.transform.GetChild(1);
			crown = crownTransform.gameObject;
			treeInfo = go.GetComponent<TreeInfoManager>();

			if (goRectTransform == null)
			{
				 
				go.transform.localPosition = centroidVector;

				//Set tree height
				if (treeFound)
				{

					//make eurhythmic trees
					float crownR = 0.1f + property * 2;

					stemTransform.transform.localPosition = new Vector3(0, property / 2, 0);
					stemTransform.transform.localScale = new Vector3(0.1f + property / 4, property, 0.1f + property / 4);

					crownTransform.transform.localScale = new Vector3(crownR, crownR, crownR);
					crownTransform.transform.localPosition = new Vector3(0.0f, property + crownR / 2, 0.0f);

					Material t_material = crown.GetComponent<Renderer>().material;

					string[] commonName = treeType.Split(new string[] { " - " }, StringSplitOptions.None);
					treeInfo.commonName = commonName[1];
					treeInfo.treeStructure = treeStructure;
					treeInfo.treeCondition = treeCondition;

					switch (treeType)
                    {
						case "Gleditsia triacanthos var. inermis - Thornless honeylocust":
							t_material.color = new Color(0.0f, 0.4274f, 0.1724f);
							break;
						case "Platanus x acerifolia - London planetree":
							t_material.color = new Color(0.2352f, 0.4666f, 0.1725f);
							break;
						case "Quercus palustris - pin oak":
							t_material.color = new Color(0.4705f, 0.5058f, 0.1725f);
							break;
						case "Pyrus calleryana - Callery pear":
							t_material.color = new Color(0.7058f, 0.5450f, 0.1725f);
							break;
						case "Zelkova serrata -Japanese zelkova":
							t_material.color = new Color(0.8627f, 0.5483f, 0.1725f);
							break;
						default:
							t_material.color = Color.grey;
							break;
					}
					
				}


				if (_options.scaleDownWithWorld)
				{
					go.transform.localScale = _options.prefab.transform.localScale * (tile.TileScale);
				}

			}
			else
			{

				goRectTransform.anchoredPosition3D = centroidVector;
				if (_options.scaleDownWithWorld)
				{
					goRectTransform.localScale = _options.prefab.transform.localScale * (tile.TileScale);
				}
			}

			settable = go.GetComponent<IFeaturePropertySettable>();
			if (settable != null)
			{
				settable.Set(ve.Feature.Properties);
			}
		}

		public override void Clear()
		{
			base.Clear();
			foreach (var gameObject in _objects.Values)
			{
				gameObject.Destroy();
			}

			foreach (var gameObject in _prefabList)
			{
				gameObject.Destroy();
			}
		}
	}
}
