using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Mapbox.Unity.Map;
using System;

public class Switcher : MonoBehaviour
{
    //This script is in Map Manager inside Map Prefab.

    public AbstractMap _abstractMap;
    private IEnumerable<VectorSubLayerProperties> allLayer;
    private VectorSubLayerProperties layer;
    private VectorSubLayerProperties NY_buildings;

    private string currentMapLayerID = "";
    //private VectorSubLayerProperties tempLayer;
    private VectorSubLayerProperties floodLayer1;
    private VectorSubLayerProperties floodLayer2;
    private VectorSubLayerProperties floodLayer3;

    private void Start()
    {
        allLayer = _abstractMap.VectorData.GetAllFeatureSubLayers();

        NY_buildings = _abstractMap.VectorData.FindFeatureSubLayerWithName("NYC_Buildings");
        NY_buildings.SetActive(true);


    }


    
    private void Update()
    {
        
            if(WebInfoStats.Stats.currentLayerID != currentMapLayerID)
            {
                ActivateLayer(WebInfoStats.Stats.currentLayerID);
                //Debug.Log("WebInfo has something!" + WebInfoStats.Stats.currentLayerName);
                currentMapLayerID = WebInfoStats.Stats.currentLayerName;
            }
 
    }

    private void ActivateLayer(string LayerID)
    {
        deactivateAllLayer();
        if (LayerID == "equity.dmmqh0kw")//the floodplains data is split into 4 different layers
        {
            NY_buildings.SetActive(true);
            for(int i = 0; i < 4; i++)
            {
                LayerID += i;
                layer = _abstractMap.VectorData.FindFeatureSubLayerWithName(LayerID);
            }
        }
        else
        {
            layer = _abstractMap.VectorData.FindFeatureSubLayerWithName(LayerID);
            layer.SetActive(true);
        }
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
            layer.SetActive(false);
        }
    }
}

