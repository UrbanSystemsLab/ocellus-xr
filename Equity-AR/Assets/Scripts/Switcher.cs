using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Mapbox.Unity.Map;

public class Switcher : MonoBehaviour
{
    [SerializeField] private AbstractMap _abstractMap;
    [SerializeField] private Button heatmapButton;
    [SerializeField] private Button greenroofButton;

    [SerializeField] private Sprite heatmap0;
    [SerializeField] private Sprite heatmap1;
    [SerializeField] private Sprite greenroof0;
    [SerializeField] private Sprite greenroof1;

    private bool heatmapisActive;
    private bool greenroofisActive;

    private void Start()
    {
        heatmapisActive = false;
        greenroofisActive = false;
    }

    public void heatmap()
    {
        var heatmapLayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("heatmap");
        var NY_buildings = _abstractMap.VectorData.FindFeatureSubLayerWithName("NY-buildings");
        if (heatmapLayer != null)
        {
            Debug.Log(heatmapisActive);
            if (heatmapisActive)
            {
                heatmapLayer.SetActive(false);
                NY_buildings.SetActive(true);
                heatmapisActive = false;
                heatmapButton.GetComponent<Image>().sprite = heatmap0;
            }
            else
            {
                heatmapLayer.SetActive(true);
                NY_buildings.SetActive(false);
                heatmapisActive = true;
                heatmapButton.GetComponent<Image>().sprite = heatmap1;
            }
            
        }
        else
        {
            Debug.Log("Layer not found");
        }
    }

    public void greenroof()
    {
        var greenroofLayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("greenroof");

        if (greenroofLayer != null)
        {
            if (greenroofisActive)
            {
                greenroofLayer.SetActive(false);
                greenroofisActive = false;
                greenroofButton.GetComponent<Image>().sprite = greenroof0;
            }
            else
            {
                greenroofLayer.SetActive(true);
                greenroofisActive = true;
                greenroofButton.GetComponent<Image>().sprite = greenroof1;
            }
            
        }
        else
        {
            Debug.Log("Layer not found");
        }
    }
}

