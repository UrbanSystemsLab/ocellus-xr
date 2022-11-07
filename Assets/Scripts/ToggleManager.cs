using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using Vuplex.WebView;
using UnityEngine.UI;

public class ToggleManager : MonoBehaviour
{

    public GameObject webViewPrefab;

    public TapToPlaceObject PlaceObjectFunction;
    public GameObject fullBnt;
    public GameObject LiveSection;
    //public GameObject PlaceARMapUI;

    private UnityEvent statsIsActive;

    private string currentStatus = "";

    private GameObject preloadMap;

    private void Start()
    {
        if (statsIsActive == null)
            statsIsActive = new UnityEvent();

        preloadMap = GameObject.FindGameObjectWithTag("Map");
    }


    public void turnOffWeb()
    {
        if (webViewPrefab.activeSelf)
        {
            //webViewPrefab.SetActive(false);
            AppManager.instance.LoadAR();
        }
        else
        {
            //webViewPrefab.SetActive(true);
            AppManager.instance.LoadMenu();
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
        if (preloadMap)
        {
            Destroy(preloadMap.gameObject);
        }
    }

    private void Update()
    {
        //change the check to data-driven, when user press enter ar button, it will open place Object. 
        //if (!string.IsNullOrEmpty(WebInfoStats.Stats.type))
        //{
        //    return;
        //}
        //Debug.Log("helllooooooooo");
        if (WebInfoStats.Stats.type != null)
        {
            if (WebInfoStats.Stats.type != currentStatus)
            {
                if (WebInfoStats.Stats.type == "ar")
                {
                    fullBnt.SetActive(true);
                    togglePlaceObject(true);
                    //toggleLiveMap(false);
                }
                else if (WebInfoStats.Stats.type == "live")
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
