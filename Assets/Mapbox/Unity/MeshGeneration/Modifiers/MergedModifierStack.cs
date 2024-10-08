﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using Mapbox.Map;
using Mapbox.Unity.MeshGeneration.Modifiers;
using Mapbox.Unity.MeshGeneration.Data;
using Mapbox.Unity.MeshGeneration.Components;
using System.Linq;

namespace Mapbox.Unity.MeshGeneration.Modifiers
{
	/// <summary>
	/// Merged Modifier Stack, just like regular Modifier stack, creates a game object from features. But the difference is, regular modifier stack creates a game object for each given faeture meanwhile Merged Modifier Stack merges meshes and creates one game object for all features (until the 65k vertex limit).
	/// It has extremely higher performance compared to regular modifier stack but since it merged all entities together, it also loses all individual entity data & makes it harder to interact with them.
	/// It pools and merges objects based on the tile contains them.
	/// </summary>
	[CreateAssetMenu(menuName = "Mapbox/Modifiers/Merged Modifier Stack")]
	public class MergedModifierStack : ModifierStackBase
	{
		private Dictionary<UnityTile, int> _cacheVertexCount = new Dictionary<UnityTile, int>();
		private Dictionary<UnityTile, List<MeshData>> _cached = new Dictionary<UnityTile, List<MeshData>>();
		private Dictionary<UnityTile, int> _buildingCount = new Dictionary<UnityTile, int>();

		private Dictionary<UnityTile, List<VectorEntity>> _activeObjects = new Dictionary<UnityTile, List<VectorEntity>>();
		private MeshData _tempMeshData;
		private MeshFilter _tempMeshFilter;
		private GameObject _tempGameObject;
		private VectorEntity _tempVectorEntity;
		private MeshData _temp2MeshData;
		private ObjectPool<VectorEntity> _pool;
		private ObjectPool<List<VectorEntity>> _listPool;
		private ObjectPool<List<MeshData>> _meshDataPool;

		private int _counter, _counter2;

		protected virtual void OnEnable()
		{
			//we'll use this to concat building data until it reaches 65000 verts
			_pool = new ObjectPool<VectorEntity>(() =>
			{
				_tempGameObject = new GameObject();
				_tempMeshFilter = _tempGameObject.AddComponent<MeshFilter>();
				_tempMeshFilter.sharedMesh = new Mesh();
				_tempVectorEntity = new VectorEntity()
				{
					GameObject = _tempGameObject,
					Transform = _tempGameObject.transform,
					MeshFilter = _tempMeshFilter,
					MeshRenderer = _tempGameObject.AddComponent<MeshRenderer>(),
					Mesh = _tempMeshFilter.sharedMesh
				};
				return _tempVectorEntity;
			});
			_listPool = new ObjectPool<List<VectorEntity>>(() => { return new List<VectorEntity>(); });
			_meshDataPool = new ObjectPool<List<MeshData>>(() => { return new List<MeshData>(); });
			_tempMeshData = new MeshData();
		}

		public override void OnUnregisterTile(UnityTile tile)
		{
			//removing all caches
			if (_activeObjects.ContainsKey(tile))
			{
				_counter = _activeObjects[tile].Count;
				for (int i = 0; i < _counter; i++)
				{
					if (null != _activeObjects[tile][i].GameObject)
					{
						_activeObjects[tile][i].GameObject.SetActive(false);
					}
					_pool.Put(_activeObjects[tile][i]);
				}
				_activeObjects[tile].Clear();
				//pooling these lists as they'll reused anyway, saving hundreds of list instantiations
				_listPool.Put(_activeObjects[tile]);
				_activeObjects.Remove(tile);
			}

			//reset all counters
			if (_cacheVertexCount.ContainsKey(tile))
			{
				_cacheVertexCount.Remove(tile);
			}
			if (_cached.ContainsKey(tile))
			{
				_cached[tile].Clear();
				_meshDataPool.Put(_cached[tile]);
				_cached.Remove(tile);
			}
			if (_buildingCount.ContainsKey(tile))
			{
				_buildingCount.Remove(tile);
			}
		}

		public override void Initialize()
		{
			base.Initialize();
			//init is also used for reloading map/ location change, so reseting everything here
			_cacheVertexCount.Clear();
			_cached.Clear();
			_buildingCount.Clear();
			_pool.Clear();

			_counter = MeshModifiers.Count;
			for (int i = 0; i < _counter; i++)
			{
				MeshModifiers[i].Initialize();
			}

			_counter = GoModifiers.Count;
			for (int i = 0; i < _counter; i++)
			{
				GoModifiers[i].Initialize();
			}
		}

		public override GameObject Execute(UnityTile tile, VectorFeatureUnity feature, MeshData meshData, GameObject parent = null, string type = "")
		{
			base.Execute(tile, feature, meshData, parent, type);

			float tempValue =0;
			float incomeValue=0;
			float sixtyFiveValue=0;
            string redlining = "";
			float PEJA_Non_WhiteValue = 0;
			float PEJA_Bel_PovValue = 0;
			string PEJA_Urban_Rura = "";
			int Flooding = 0;

			//Debug.Log(feature.Properties["area_description_data"].ToString());

			//try
			//{
			//    redlining = feature.Properties["holc_grade"].ToString();
			//    Debug.Log("Data Get: " + redlining);
			//}
			//catch (Exception ex)
			//{
			//    redlining = "";
			//    Debug.Log("Redlining layer error:" + ex.Message);
			//}



			//check what the incoming data belongs to
			if (feature.Properties.ContainsKey("risk"))
			{
				string temp = feature.Properties["risk"].ToString();
				tempValue = float.Parse(temp);
				//Debug.Log(tempValue);
            }
			else if (feature.Properties.ContainsKey("income"))
			{
				string income = feature.Properties["income"].ToString();
				incomeValue = float.Parse(income);
				//Debug.Log(incomeValue);
			}
			else if (feature.Properties.ContainsKey("P_Abv65_e_"))
			{
				string sixtyFive = feature.Properties["P_Abv65_e_"].ToString();
				sixtyFiveValue = float.Parse(sixtyFive);
				//Debug.Log(sixtyFiveValue);
			}
			else if (feature.Properties.ContainsKey("holc_grade"))
			{
				redlining = feature.Properties["holc_grade"].ToString();
				//Debug.Log(redlining);
			}
			else if (feature.Properties.ContainsKey("Non_White"))
			{
				string PEJA_Non_White = feature.Properties["Non_White"].ToString();
				PEJA_Non_WhiteValue = float.Parse(PEJA_Non_White);
				//Debug.Log(PEJA_Non_WhiteValue);

				string PEJA_Bel_Pov = feature.Properties["PCT_BelPov"].ToString();
				PEJA_Bel_PovValue = float.Parse(PEJA_Bel_Pov);

				//List<string> keys = feature.Properties.Keys.ToList();
				//keys.ToList().ForEach(i => Debug.Log(i.ToString()));

                if (feature.Properties.ContainsKey("Urban_Rura"))
                {
					PEJA_Urban_Rura = feature.Properties["Urban_Rura"].ToString();
					//Debug.Log(PEJA_Urban_Rura);
                }

			}else if (feature.Properties.ContainsKey("Flooding_Category"))
            {
				String FloodingValue = feature.Properties["Flooding_Category"].ToString();
				Flooding = Int32.Parse(FloodingValue);
				Debug.Log("Flooding" + Flooding);
            }
			//else if (feature.Properties.ContainsKey("Urban_Rura"))
			//         {
			//	//PEJA_Urban_Rura = feature.Properties["Urban_Rura"].ToString();
			//	//Debug.Log(PEJA_Urban_Rura);
			//}


			if (!_cacheVertexCount.ContainsKey(tile))
			{
				_cacheVertexCount.Add(tile, 0);
				_cached.Add(tile, _meshDataPool.GetObject());
				_buildingCount.Add(tile, 0);
			}

			_buildingCount[tile]++;
			_counter = MeshModifiers.Count;
			for (int i = 0; i < _counter; i++)
			{
				if (MeshModifiers[i] != null && MeshModifiers[i].Active)
				{
					MeshModifiers[i].Run(feature, meshData, tile);
				}
			}


			//add colors to buildings
			Color baseColor = new Color(1f,1f,1f);

			if(PEJA_Non_WhiteValue > 511)
            {
				baseColor = new Color(1f, 0f, 0f);
			}

			if(PEJA_Bel_PovValue > 50.0f)
            {
				baseColor = new Color(0f, 1f, 0f);
			}

			if (PEJA_Bel_PovValue > 50.0f && PEJA_Non_WhiteValue > 511)
            {
				baseColor = new Color(0f, 0f, 1f);
			}

            if (PEJA_Urban_Rura.Equals("U"))
            {

                baseColor = new Color(1f, 0.72f, 0.09f);
            }
            else if (PEJA_Urban_Rura.Equals("R"))
            {
                baseColor = new Color(0.33f, 0.69f, 0.13f);
            }


            if (redlining.Equals("A"))
            {
                baseColor = new Color(0.50f, 0.70f, 0.50f);
                Debug.Log("Colorget");
            }
            else if (redlining == "B")
            {
                baseColor = new Color(0.20f, 0.20f, 0.90f);
                Debug.Log("Colorget");
            }
            else if (redlining.Equals("C"))
            {
                baseColor = new Color(0.50f, 0.70f, 0.70f);
                Debug.Log("Colorget");
            }
            else if (redlining.Equals("D"))
            {
                baseColor = new Color(0.70f, 0.50f, 0.50f);
                Debug.Log("Colorget");
            }

            //if (tempValue > 168)
            //         {
            //	//baseColor = new Color(0f, 0.9f, 0f);
            //	baseColor = Color.red;
            //         }
            //         else if (tempValue > 147)
            //         {
            //	//baseColor = new Color(0.8f, 0.36f, 0.32f);
            //	baseColor = Color.black;
            //}
            //         else if (tempValue > 126)
            //         {
            //	//baseColor = new Color(0.9f, 0.7f, 0.66f);
            //	baseColor = Color.green;
            //}
            //         else if (tempValue > 104)
            //         {
            //	//baseColor = new Color(0.95f, 0.84f, 0.83f);
            //	baseColor = Color.blue;
            //             Debug.Log("less than104");
            //         }
            if (tempValue > 0.0008)
            {
				baseColor = new Color(0.9f, 0f, 0f);
			}
			else if (tempValue > 0.0006)
			{
				baseColor = new Color(1f, 0.2f, 0.2f);
                //baseColor = Color.red;
            }
			else if (tempValue > 0.0004)
			{
				baseColor = new Color(1f, 0.42f, 0.09f);
                //baseColor = Color.black;
			}
			else if (tempValue > 0.0002)
			{
				baseColor = new Color(0.96f, 0.55f, 0.19f);
                //baseColor = Color.green;
			}
			else if (tempValue >0)
			{
				baseColor = new Color(1f, 0.77f, 0.42f);
                //baseColor = Color.blue;
			}

			if (incomeValue > 2000)
			{
				baseColor = new Color(0.5f, 0.5f, 0f);
                //baseColor = Color.blue;
			}
            else if (incomeValue > 1500)
            {
				baseColor = new Color(0.5f, 0.6f, 0.25f);
                //baseColor = Color.yellow;
			}
            else if (incomeValue > 1000)
            {
                baseColor = new Color(0.5f, 0.7f, 0.49f);
                //baseColor = Color.red;
			}
            else if (incomeValue > 500)
            {
				baseColor = new Color(0.5f, 0.8f, 0.66f);
                //baseColor = Color.grey;
			}
            else if (incomeValue >0)
			{
				baseColor = new Color(0.5f, 0.9f, 0.83f);
                //baseColor = Color.black;
			}


			if (sixtyFiveValue > 75)
			{
				baseColor = new Color(1f, 1f, 1f);
				//Debug.Log("bigger than 75");
			}
			else if (sixtyFiveValue > 50)
			{
				baseColor = new Color(1f, 0.65f, 1f);
				//Debug.Log("bigger than 50");
			}
			else if (sixtyFiveValue > 25)
			{
				baseColor = new Color(1f, 0.25f, 1f);
			}
			else if (sixtyFiveValue > 0)
			{
				baseColor = new Color(1f, 0.1f, 1f);
			}

			if(Flooding == 1)
            {
				baseColor = new Color(0.14f, 0.63f, 1f);
			}
			else if(Flooding == 2)
            {
				baseColor = new Color(0.14f, 0.29f, 1f);
			}
			else if(Flooding == 3)
            {
				baseColor = new Color(0.96f, 0.51f, 0.15f);
			}

			

			meshData.Colors = Enumerable.Repeat(baseColor, meshData.Vertices.Count).ToList();

			GameObject go = null;
			//65000 is the vertex limit for meshes, keep stashing it until that
			_counter = meshData.Vertices.Count;
			if (_cacheVertexCount[tile] + _counter < 65000)
			{
				_cacheVertexCount[tile] += _counter;
				_cached[tile].Add(meshData);
			}
			else
			{
				go = End(tile, parent, type);
			}

			return go;
		}


		public GameObject End(UnityTile tile, GameObject parent, string name = "")
		{
			var c2 = 0;
			if (_cached.ContainsKey(tile))
			{
				_tempMeshData.Clear();

				//concat mesh data into _tempMeshData
				_counter = _cached[tile].Count;
				for (int i = 0; i < _counter; i++)
				{
					_temp2MeshData = _cached[tile][i];
					if (_temp2MeshData.Vertices.Count <= 3)
						continue;

					var st = _tempMeshData.Vertices.Count;
					_tempMeshData.Vertices.AddRange(_temp2MeshData.Vertices);
					_tempMeshData.Normals.AddRange(_temp2MeshData.Normals);
                    //Custom code
					_tempMeshData.Colors.AddRange(_temp2MeshData.Colors);

					c2 = _temp2MeshData.UV.Count;
					for (int j = 0; j < c2; j++)
					{
						if (_tempMeshData.UV.Count <= j)
						{
							_tempMeshData.UV.Add(new List<Vector2>(_temp2MeshData.UV[j].Count));
						}
					}

					c2 = _temp2MeshData.UV.Count;
					for (int j = 0; j < c2; j++)
					{
						_tempMeshData.UV[j].AddRange(_temp2MeshData.UV[j]);
					}

					c2 = _temp2MeshData.Triangles.Count;
					for (int j = 0; j < c2; j++)
					{
						if (_tempMeshData.Triangles.Count <= j)
						{
							_tempMeshData.Triangles.Add(new List<int>(_temp2MeshData.Triangles[j].Count));
						}
					}

					for (int j = 0; j < c2; j++)
					{
						for (int k = 0; k < _temp2MeshData.Triangles[j].Count; k++)
						{
							_tempMeshData.Triangles[j].Add(_temp2MeshData.Triangles[j][k] + st);
						}
					}
				}

				//update pooled vector entity with new data
				if (_tempMeshData.Vertices.Count > 3)
				{
					_cached[tile].Clear();
					_cacheVertexCount[tile] = 0;
					_tempVectorEntity = null;
					_tempVectorEntity = _pool.GetObject();
					_tempVectorEntity.GameObject.SetActive(true);
					_tempVectorEntity.Mesh.Clear();

					_tempVectorEntity.GameObject.name = name;
					_tempVectorEntity.Mesh.subMeshCount = _tempMeshData.Triangles.Count;
					_tempVectorEntity.Mesh.SetVertices(_tempMeshData.Vertices);
					_tempVectorEntity.Mesh.SetNormals(_tempMeshData.Normals);

					_counter = _tempMeshData.Triangles.Count;
					for (int i = 0; i < _counter; i++)
					{
						_tempVectorEntity.Mesh.SetTriangles(_tempMeshData.Triangles[i], i);
					}

					_counter = _tempMeshData.UV.Count;
					for (int i = 0; i < _counter; i++)
					{
						_tempVectorEntity.Mesh.SetUVs(i, _tempMeshData.UV[i]);
					}

                    //Custom code
					_tempVectorEntity.Mesh.SetColors(_tempMeshData.Colors);
                    _tempVectorEntity.MeshRenderer.material = new Material(Shader.Find("Custom/VertexColoredDiffuse"));
					_tempVectorEntity.GameObject.transform.SetParent(tile.transform, false);

					if (!_activeObjects.ContainsKey(tile))
					{
						_activeObjects.Add(tile, _listPool.GetObject());
					}
					_activeObjects[tile].Add(_tempVectorEntity);

					_counter = GoModifiers.Count;
					for (int i = 0; i < _counter; i++)
					{
						if (GoModifiers[i].Active)
						{
							GoModifiers[i].Run(_tempVectorEntity, tile);
						}
					}

					return _tempVectorEntity.GameObject;
				}
			}
			return null;
		}

		public override void Clear()
		{
			foreach (var vectorEntity in _pool.GetQueue())
			{
				if (vectorEntity.Mesh != null)
				{
					vectorEntity.Mesh.Destroy(true);
				}

				vectorEntity.GameObject.Destroy();
			}

			foreach (var tileTuple in _activeObjects)
			{
				foreach (var vectorEntity in tileTuple.Value)
				{
					if (vectorEntity.Mesh != null)
					{
						vectorEntity.Mesh.Destroy(true);

					}
					vectorEntity.GameObject.Destroy();
				}
			}
			_pool.Clear();
			_activeObjects.Clear();
			_pool.Clear();
		}
	}
}
