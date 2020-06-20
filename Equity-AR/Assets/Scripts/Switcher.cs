using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Mapbox.Unity.Map;
using System;

public class Switcher : MonoBehaviour
{

    [SerializeField] private Button heatmapButton;
    [SerializeField] private Button greenroofButton;
    [SerializeField] private Button floodButton;
    [SerializeField] private Button incomeButton;
    [SerializeField] private Button openSpaceButton;
    [SerializeField] private Button sixtyFivePlusButton;

    [SerializeField] private Sprite heatmap0;
    [SerializeField] private Sprite heatmap1;
    [SerializeField] private Sprite greenroof0;
    [SerializeField] private Sprite greenroof1;
    [SerializeField] private Sprite floodplane0;
    [SerializeField] private Sprite floodplane1;
    [SerializeField] private Sprite income0;
    [SerializeField] private Sprite income1;
    [SerializeField] private Sprite openSpace0;
    [SerializeField] private Sprite openSpace1;
    [SerializeField] private Sprite sixtyFivePlus0;
    [SerializeField] private Sprite sixtyFivePlus1;


    private bool heatmapisActive;
    private bool greenroofisActive;
    private bool floodisActive;
    private bool incomeisActive;
    private bool openSpaceisActive;
    private bool sixtyFivePlusisActive;

    private AbstractMap _abstractMap;

    public TapToPlaceObject MapState;

    private void Start()
    {
        heatmapisActive = false;
        greenroofisActive = false;
        floodisActive = false;
        incomeisActive = false;
        openSpaceisActive = false;
        sixtyFivePlusisActive = false;
    }

    private void Update()
    {
        if (MapState.isPlaced)
        {
            _abstractMap = FindObjectOfType<AbstractMap>();
        }
    }

    //Create a button click function to switch between heatmap and normal NY_buildings layers.
    public void Temperature()
    {
        var tempLayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("Temperature");
        var NY_buildings = _abstractMap.VectorData.FindFeatureSubLayerWithName("NYC_Buildings");
        var incomeLayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("Income");
        var sixtyFivePlusLayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("65+");

        if (tempLayer != null)
        {
            if (heatmapisActive)
            {
                NY_buildings.SetActive(true);

                tempLayer.SetActive(false);
                incomeLayer.SetActive(false);
                sixtyFivePlusLayer.SetActive(false);

                heatmapisActive = false;
                incomeisActive = false;
                sixtyFivePlusisActive = false;

                //Update button UI
                heatmapButton.GetComponent<Image>().sprite = heatmap0;
                incomeButton.GetComponent<Image>().sprite = income0;
                sixtyFivePlusButton.GetComponent<Image>().sprite = sixtyFivePlus0;
            }
            else
            {
                tempLayer.SetActive(true);

                NY_buildings.SetActive(false);
                incomeLayer.SetActive(false);
                sixtyFivePlusLayer.SetActive(false);

                heatmapisActive = true;
                incomeisActive = false;
                sixtyFivePlusisActive = false;

                //Update button UI
                heatmapButton.GetComponent<Image>().sprite = heatmap1;

                incomeButton.GetComponent<Image>().sprite = income0;
                sixtyFivePlusButton.GetComponent<Image>().sprite = sixtyFivePlus1;
            }

        }
        else
        {
            Debug.Log("Temperature Layer not found");
        }
    }

    //Create a button click function to switch between income and normal NY_buildings layers.
    public void Income()
    {
        var incomeLayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("Income");
        var NY_buildings = _abstractMap.VectorData.FindFeatureSubLayerWithName("NYC_Buildings");
        var temperatureLayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("Temperature");
        var sixtyFivePlusLayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("65+");

        if (incomeLayer != null)
        {
            if (incomeisActive)
            {
                NY_buildings.SetActive(true);

                temperatureLayer.SetActive(false);
                incomeLayer.SetActive(false);
                sixtyFivePlusLayer.SetActive(false);

                incomeisActive = false;
                heatmapisActive = false;
                sixtyFivePlusisActive = false;

                //Update button UI
                incomeButton.GetComponent<Image>().sprite = income0;
                heatmapButton.GetComponent<Image>().sprite = heatmap0;
                sixtyFivePlusButton.GetComponent<Image>().sprite = sixtyFivePlus0;
            }
            else
            {
                incomeLayer.SetActive(true);

                temperatureLayer.SetActive(false);
                sixtyFivePlusLayer.SetActive(false);
                NY_buildings.SetActive(false);

                incomeisActive = true;
                heatmapisActive = false;
                sixtyFivePlusisActive = false;

                //Update button UI
                incomeButton.GetComponent<Image>().sprite = income1;

                heatmapButton.GetComponent<Image>().sprite = heatmap0;
                sixtyFivePlusButton.GetComponent<Image>().sprite = sixtyFivePlus0;
            }

        }
        else
        {
            Debug.Log("Income Layer not found");
        }
    }

    //Create a button click function to switch between 65+ and normal NY_buildings layers.
    public void SixtyFivePlus()
    {
        var incomeLayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("Income");
        var NY_buildings = _abstractMap.VectorData.FindFeatureSubLayerWithName("NYC_Buildings");
        var temperatureLayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("Temperature");
        var sixtyFivePlusLayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("65+");



        if (sixtyFivePlusLayer != null)
        {
            if (sixtyFivePlusisActive)
            {
                NY_buildings.SetActive(true);

                temperatureLayer.SetActive(false);
                incomeLayer.SetActive(false);
                sixtyFivePlusLayer.SetActive(false);

                incomeisActive = false;
                heatmapisActive = false;
                sixtyFivePlusisActive = false;

                //Update button UI
                incomeButton.GetComponent<Image>().sprite = income0;
                heatmapButton.GetComponent<Image>().sprite = heatmap0;
                sixtyFivePlusButton.GetComponent<Image>().sprite = sixtyFivePlus0;
            }
            else
            {
                sixtyFivePlusLayer.SetActive(true);

                temperatureLayer.SetActive(false);
                incomeLayer.SetActive(false);
                NY_buildings.SetActive(false);

                sixtyFivePlusisActive = true;
                incomeisActive = false;
                heatmapisActive = false;

                //Update button UI
                sixtyFivePlusButton.GetComponent<Image>().sprite = sixtyFivePlus1;

                incomeButton.GetComponent<Image>().sprite = income0;
                heatmapButton.GetComponent<Image>().sprite = heatmap0;
            }

        }
        else
        {
            Debug.Log("65+ Layer not found");
        }
    }

    //Create a button click function to turn on or off greenroof datalayer.
    public void Greenroof()
    {
        var greenroofLayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("GreenRoof");

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
            Debug.Log("Greenroof Layer not found");
        }
    }

    //Create a button click function to turn on or off floodplane datalayer.
    public void FloodPlane()
    {
        var floodLayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("FloodPlane");
        if (floodLayer != null)
        {
            Debug.Log(floodisActive);
            if (floodisActive)
            {
                floodLayer.SetActive(false);
                floodisActive = false;

                //Update button UI
                floodButton.GetComponent<Image>().sprite = floodplane0;
            }
            else
            {
                floodLayer.SetActive(true);
                floodisActive = true;

                //Update button UI
                floodButton.GetComponent<Image>().sprite = floodplane1;
            }

        }
        else
        {
            Debug.Log("Floodplane Layer not found");
        }
    }

    //Create a button click function to turn on or off 65+ datalayer.
    public void OpenSpace()
    {
        var openSpaceLayer = _abstractMap.VectorData.FindFeatureSubLayerWithName("OpenSpace");

        if (openSpaceLayer != null)
        {
            if (openSpaceisActive)
            {
                openSpaceLayer.SetActive(false);
                openSpaceisActive = false;

                //Update button UI
                openSpaceButton.GetComponent<Image>().sprite = openSpace0;
            }
            else
            {
                openSpaceLayer.SetActive(true);
                openSpaceisActive = true;

                //Update button UI
                openSpaceButton.GetComponent<Image>().sprite = openSpace1;
            }

        }
        else
        {
            Debug.Log("Open Space Layer not found");
        }
    }
}

