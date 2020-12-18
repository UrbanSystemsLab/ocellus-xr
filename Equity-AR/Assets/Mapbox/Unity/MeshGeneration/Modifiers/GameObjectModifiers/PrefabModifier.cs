namespace Mapbox.Unity.MeshGeneration.Modifiers
{
	using UnityEngine;
	using UnityEngine.UI;
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
		List<string> treetypeList = new List<string>();
		Dictionary<string, int> treeDict = new Dictionary<string, int>();
		FileInfo fileInfo;
		FileStream file;
		StreamWriter writer;
		StreamReader reader;
		public Text treeNumInfo;

		Transform mainCam;
		int treeNum = 0;
		



		public override void Initialize()
		{
			if (_objects == null)
			{
				_objects = new Dictionary<GameObject, GameObject>();
			}
			treetypeList.Clear();

			file = new FileStream(Application.dataPath + "/CustomData/treetype.txt", FileMode.Open);

			mainCam = GameObject.Find("Main Camera").GetComponent<Transform>();
			treeNum = 0;

		}

		public override void SetProperties(ModifierProperties properties)
		{
			_options = (SpawnPrefabOptions)properties;
			_options.PropertyHasChanged += UpdateModifier;
		}

		public override void Run(VectorEntity ve, UnityTile tile)
		{
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
			//NearbyTrees(ve, mainCam);

			if (_options.AllPrefabsInstatiated != null)
			{
				_options.AllPrefabsInstatiated(_prefabList);
			}
		}

   //     public void NearbyTrees(VectorEntity ve, Transform mainCam)
   //     {
			//treeNumInfo = GameObject.Find("TreeNum").GetComponent<Text>();
   //         Vector3 camPos = mainCam.position;

   //         foreach (var point in ve.Feature.Points[0])
   //         {
   //             float dist = Vector3.Distance(camPos, point);
   //             if (dist < 10)
   //             {
   //                 treeNum++;
   //                 Debug.Log($"Number of trees in an circle of 10 m radius {treeNum}");
   //             }
   //         }

			//treeNumInfo.text = "Trees in 10 meters:" + treeNum;

   //     }

        public void PositionScaleRectTransform(VectorEntity ve, UnityTile tile, GameObject go)
		{
			
			RectTransform goRectTransform;
			Transform stemTransform;
			Transform crownTransform;
			GameObject crownType;
			IFeaturePropertySettable settable = null;
			var centroidVector = new Vector3();

			float property = 0;
			float crownR = 0;
			bool treeFound = false;
			string treeType = "";

			foreach (var point in ve.Feature.Points[0])
			{
				centroidVector += point;
			}
			centroidVector = centroidVector / ve.Feature.Points[0].Count;

			go.name = ve.Feature.Data.Id.ToString();

			//Getting tree DBH and convert it to meters from inch.
			try
			{
				float.TryParse(ve.Feature.Properties["DBH"].ToString(), out property);
				treeType = ve.Feature.Properties["GenusSpeci"].ToString();
				property = property * 0.0254f;
				crownR = 0.1f + property * 2;
				treeFound = true;

			}
			catch (Exception ex)
			{
				property = 0;
				crownR = 0;
				treeFound = false;
				Debug.Log("Temperature layer error:" + ex.Message);
			}


            //if (!treetypeList.Contains(treeType))
            //{
            //    treetypeList.Add(treeType);
            //    WriteMessage(treeType);
            //}

			//if (!treeDict.ContainsKey(treeType))
   //         {
			//	treeDict.Add(treeType, 1);
   //         }
   //         else
   //         {
			//	treeDict[treeType]++;
			//}


			//Write the tree type data into local txt file
			//file.SetLength(0);

			//foreach (KeyValuePair<string, int> kvp in treeDict)
   //         {
			//	writer = new StreamWriter(file);
			//	writer.WriteLine($"{kvp.Key} ; {kvp.Value}");
			//	writer.Flush();
   //         }

            goRectTransform = go.GetComponent<RectTransform>();
			stemTransform = go.gameObject.transform.GetChild(0);
			crownTransform = go.gameObject.transform.GetChild(1);

			if (goRectTransform == null)
			{
				 
				go.transform.localPosition = centroidVector;

				//Set tree height
				if (treeFound)
				{
					

					stemTransform.transform.localPosition = new Vector3(0, property / 2, 0);
					stemTransform.transform.localScale = new Vector3(0.1f + property / 4, property, 0.1f + property / 4);

					crownTransform.transform.localScale = new Vector3(crownR, crownR, crownR);
					crownTransform.transform.localPosition = new Vector3(0.0f, property + crownR / 2, 0.0f);

					
					switch(treeType)
                    {
						case "Gleditsia triacanthos var. inermis - Thornless honeylocust":
							crownType = crownTransform.GetChild(1).gameObject;
							break;
						case "Platanus x acerifolia - London planetree":
							crownType = crownTransform.GetChild(2).gameObject;
							break;
						case "Quercus palustris - pin oak":
							crownType = crownTransform.GetChild(3).gameObject;
							break;
						case "Pyrus calleryana - Callery pear":
							crownType = crownTransform.GetChild(4).gameObject;
							break;
						case "Zelkova serrata -Japanese zelkova":
							crownType = crownTransform.GetChild(5).gameObject;
							break;
						default:
							crownType = crownTransform.GetChild(0).gameObject;
							break;
					}
					
					crownType.SetActive(true);
					
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
