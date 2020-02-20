using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Mapbox.Unity.Map;

public class Switcher : MonoBehaviour
{
    
    [SerializeField] private Button heatmapButton;
    [SerializeField] private Button greenroofButton;

    [SerializeField] private Sprite heatmap0;
    [SerializeField] private Sprite heatmap1;
    [SerializeField] private Sprite greenroof0;
    [SerializeField] private Sprite greenroof1;

    private bool heatmapisActive;
    private bool greenroofisActive;
    private AbstractMap _abstractMap;

    public TapToPlaceObject MapState;

    private void Start()
    {
        heatmapisActive = false;
        greenroofisActive = false;
        
    }

    private void Update()
    {
        if (MapState.isPlaced)
        {
            _abstractMap = FindObjectOfType<AbstractMap>();
        }
    }

    //Create a button click function to switch between heatmap and normal NY_buildings layers.
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

                //Update button UI
                heatmapButton.GetComponent<Image>().sprite = heatmap0;
            }
            else
            {
                heatmapLayer.SetActive(true);
                NY_buildings.SetActive(false);
                heatmapisActive = true;

                //Update button UI
                heatmapButton.GetComponent<Image>().sprite = heatmap1;
            }
            
        }
        else
        {
            Debug.Log("Layer not found");
        }
    }

    //Create a button click function to turn on or off greenroof datalayer.
    public void greenroof()
    {
        var greenroofLayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("greenroof");

        if (greenroofLayer != null)
        {
            if (greenroofisActive)
            {
                greenroofLayer.SetActive(false);
                greenroofisActive = false;

                //Update button UI
                greenroofButton.GetComponent<Image>().sprite = greenroof0;
            }
            else
            {
                greenroofLayer.SetActive(true);
                greenroofisActive = true;

                //Update button UI
                greenroofButton.GetComponent<Image>().sprite = greenroof1;
            }
            
        }
        else
        {
            Debug.Log("Layer not found");
        }
    }
}

