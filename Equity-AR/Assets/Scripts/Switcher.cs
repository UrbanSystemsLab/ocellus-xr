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
    //private VectorSubLayerProperties tempLayer;
    //private VectorSubLayerProperties floodLayer;
    //private VectorSubLayerProperties incomeLayer;
    //private VectorSubLayerProperties sixtyFivePlusLayer;
    //private VectorSubLayerProperties greenroofLayer;
    //private VectorSubLayerProperties openSpaceLayer;
    //private VectorSubLayerProperties PEJALayer;
    //private VectorSubLayerProperties coolingLayer;
    //private VectorSubLayerProperties redliningLayer;

    private void Start()
    {
        allLayer = _abstractMap.VectorData.GetAllFeatureSubLayers();

        NY_buildings = _abstractMap.VectorData.FindFeatureSubLayerWithName("NYC_Buildings");
        //tempLayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("Heat Risk");
        //floodLayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("Flood Zone");
        //incomeLayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("Income");
        //sixtyFivePlusLayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("Elderly Population");
        //greenroofLayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("Green Roofs");
        //openSpaceLayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("Open Space");
        //PEJALayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("PEJA");
        //coolingLayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("Cooling Stations");
        //redliningLayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("Redlining");
    }

    private void Update()
    {

        if (!String.IsNullOrEmpty(WebInfoStats.Stats.currentLayerName))
        {
            //Debug.Log("WebInfo has something!" + WebInfoStats.Stats.currentLayerName);
            ActivateLayer(WebInfoStats.Stats.currentLayerName);
        }
        else
        {
            NY_buildings.SetActive(true);
            //Debug.Log("WebInfo does not have any stats!!!");
        }
    }

    private void ActivateLayer(string LayerName)
    {
        deactivateAllLayer();
        if (LayerName == "Flood Zones")
        {
            NY_buildings.SetActive(true);
        }
        layer = _abstractMap.VectorData.FindFeatureSubLayerWithName(LayerName);
        layer.SetActive(true);
        //Debug.Log("activate" + layer);
    }

    private void FindLayerSourceId(string LayerId)
    {
        string[] layerId = _abstractMap.VectorData.LayerSourceId.Split(',');
        foreach (string id in layerId)
        {
            Debug.Log(id);

        }
    }

    private void deactivateAllLayer()
    {
        foreach (VectorSubLayerProperties layer in allLayer)
        {
            layer.SetActive(false);
        }
    }
}

