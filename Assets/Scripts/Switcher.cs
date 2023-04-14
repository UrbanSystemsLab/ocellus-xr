using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Mapbox.Unity.Map;
using System;

public class Switcher : MonoBehaviour
{
    //This script is in Map Manager inside Map Prefab.
    public static Switcher instance;
    public AbstractMap _abstractMap;
    private IEnumerable<VectorSubLayerProperties> allLayer;
    private VectorSubLayerProperties layer;
    private VectorSubLayerProperties NY_buildings;
    public GameObject map;
    public Database database;

    private void Start()
    {
        instance = this;
        allLayer = _abstractMap.VectorData.GetAllFeatureSubLayers();

        NY_buildings = _abstractMap.VectorData.FindFeatureSubLayerWithName("NYC_Buildings");
        //NY_buildings.SetActive(true);
        //Debug.Log(WebInfoStats.Stats.currentLayerID);
        if(database.currentLayerID != null) ActivateLayer(database.currentLayerID);
        //deactive map after loading the expected layer
        //this.gameObject.transform.parent.gameObject.SetActive(false);
        //map.SetActive(false);
    }

    public void ToggleMap(bool input)
    {
        map.SetActive(input);
    }

    /// <summary>
    /// Activate layer by map id
    /// </summary>
    /// <param name="LayerID"></param>
    /// <returns></returns>
    public bool ActivateLayer(string LayerID)
    {
        if(LayerID == null)
        {
            deactivateAllLayer();
            Debug.Log("Layer ID in database is NULL");
        }
        else
        {
            deactivateAllLayer();
            if (LayerID == "equity.dmmqh0kw")//the floodplains data is split into 4 different layers
            {
                _abstractMap.Terrain.SetElevationType(ElevationLayerType.TerrainWithElevation);
                //NY_buildings.SetActive(true);
                for (int i = 0; i < 4; i++)
                {
                    string tempid = LayerID + i;
                    Debug.Log("4 DIFFERENT FLOOD" + tempid);
                    layer = _abstractMap.VectorData.FindFeatureSubLayerWithName(tempid);

                    layer.SetActive(true);

                }
            }
            //}else if(LayerID == "equity.3t4w37ok" || LayerID == "equity.c7f9efui")
            //{
            //    layer = _abstractMap.VectorData.FindFeatureSubLayerWithName(LayerID);
            //    _abstractMap.Terrain.SetElevationType(ElevationLayerType.FlatTerrain);
            //    layer.SetActive(true);
            //}
            else
            {
                layer = _abstractMap.VectorData.FindFeatureSubLayerWithName(LayerID);
                _abstractMap.Terrain.SetElevationType(ElevationLayerType.TerrainWithElevation);
                layer.SetActive(true);
            }
        }
        return true;
    }

    //private void FindLayerSourceId(string LayerId)
    //{
    //    string[] layerId = _abstractMap.VectorData.LayerSourceId.Split(',');
    //    foreach (string id in layerId)
    //    {
    //        Debug.Log(id);

    //    }
    //}

    private void deactivateAllLayer()
    {
        foreach (VectorSubLayerProperties layer in allLayer)
        {
            if (!layer.SubLayerNameContains("Tree"))
            {
                layer.SetActive(false);
            }
        }
    }


}

