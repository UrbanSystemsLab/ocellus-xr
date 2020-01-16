using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mapbox.Unity.Map;

public class Switcher : MonoBehaviour
{
    [SerializeField]private AbstractMap _abstractMap;


    public void heatmapDisable()
    {
        var heatmap = _abstractMap.VectorData.FindFeatureSubLayerWithName("heatmap");
        var NY_buildings = _abstractMap.VectorData.FindFeatureSubLayerWithName("NY-buildings");
        if (heatmap != null)
        {
            
            heatmap.SetActive(false);
            NY_buildings.SetActive(true);
        }
        else
        {
            Debug.Log("Layer not found");
        }
    }

    public void heatmapEnable()
    {
        var heatmap = _abstractMap.VectorData.FindFeatureSubLayerWithName("heatmap");
        var NY_buildings = _abstractMap.VectorData.FindFeatureSubLayerWithName("NY-buildings");
        if (heatmap != null)
        {
            heatmap.SetActive(true);
            NY_buildings.SetActive(false);
        }
        else
        {
            Debug.Log("Layer not found");
        }
    }

    public void greenroofDisable()
    {
        var greenroof = _abstractMap.VectorData.FindFeatureSubLayerWithName("greenroof");
        
        if (greenroof != null)
        {

            greenroof.SetActive(false);


        }
        else
        {
            Debug.Log("Layer not found");
        }
    }

    public void greenroofEnable()
    {
        var greenroof = _abstractMap.VectorData.FindFeatureSubLayerWithName("greenroof");
        if (greenroof != null)
        {
            greenroof.SetActive(true);
        }
        else
        {
            Debug.Log("Layer not found");
        }
    }
}

