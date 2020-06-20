using System.Collections;
using System.Collections.Generic;
using Mapbox.Unity.Map;
using UnityEngine;

public class MapManager : MonoBehaviour
{
    public GameObject mapCamera;
    public GameObject debugCanvas;
    public GameObject mainCanvas;
    public AbstractMap arAlignedMap;

    MeshRenderer[] tileMaterials;
    Color color;

    public void CalibrationDone()
    {
        var buildings = arAlignedMap.VectorData.FindFeatureSubLayerWithName("buildings");
        mapCamera.SetActive(false);
        debugCanvas.SetActive(false);
        mainCanvas.SetActive(true);
        buildings.SetActive(false);

        tileMaterials = arAlignedMap.gameObject.GetComponentsInChildren<MeshRenderer>();
        Debug.Log(tileMaterials.Length);
        foreach (MeshRenderer m in tileMaterials)
        {
            if(m.gameObject.name != "0")
            {
                color = m.material.color;
                color.a = 0;
                m.material.color = color;
            }
            
        }
    }

    public void Calibration()
    {
        var buildings = arAlignedMap.VectorData.FindFeatureSubLayerWithName("buildings");
        mapCamera.SetActive(true);
        debugCanvas.SetActive(true);
        mainCanvas.SetActive(false);
        buildings.SetActive(true);

        Debug.Log(tileMaterials.Length);
        foreach (MeshRenderer m in tileMaterials)
        {
            if (m.gameObject.name != "0")
            {
                color.a = 1;
                m.material.color = color;
            }
            
        }
    }


}
