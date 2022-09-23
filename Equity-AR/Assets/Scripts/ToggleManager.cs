using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuplex.WebView;
using UnityEngine.UI;

public class ToggleManager : MonoBehaviour
{

    public GameObject webViewPrefab;

    public TapToPlaceObject PlaceObjectFunction;
    public GameObject fullBnt;
    public GameObject LiveSection;
    //public GameObject PlaceARMapUI;


    private string currentStatus = "";
    public void turnOffWeb()
    {
        if (webViewPrefab.activeSelf)
        {
            webViewPrefab.SetActive(false);
        }
        else
        {
            webViewPrefab.SetActive(true);
        }
        
    }

    public void togglePlaceObject(bool input)
    {
        PlaceObjectFunction.enabled = input;
        //PlaceARMapUI.SetActive(input);
    }

    public void toggleLiveMap(bool input)
    {
        LiveSection.SetActive(input);
    }

    public void DestroyARMap()
    {
        GameObject MapIsActive = GameObject.FindWithTag("Map");
        if (MapIsActive)
        {
            Destroy(MapIsActive.gameObject);
        }
    }

    private void Update()
    {
        //change the check to data-driven, when user press enter ar button, it will open place Object. 
        if (!string.IsNullOrEmpty(WebInfoStats.Stats.type))
        {

            if (WebInfoStats.Stats.type != currentStatus)
            {
                if (WebInfoStats.Stats.type == "ar")
                {
                    fullBnt.SetActive(true);
                    togglePlaceObject(true);
                    //toggleLiveMap(false);
                }
                else if(WebInfoStats.Stats.type == "live")
                {
                    fullBnt.SetActive(true);
                    togglePlaceObject(false);
                    DestroyARMap();
                    toggleLiveMap(true);
                }

                currentStatus = WebInfoStats.Stats.type;
            }
            
        }
    }

}
