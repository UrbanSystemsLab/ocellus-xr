using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using Vuplex.WebView;
using UnityEngine.UI;

public class ToggleManager : MonoBehaviour
{

    public GameObject webViewPrefab;
    public static ToggleManager instance;
    public TapToPlaceObject PlaceObjectFunction;
    public GameObject fullBnt;
    public GameObject LiveSection;

    private GameObject preloadMap;

    private void Start()
    {
        instance = this;

        preloadMap = GameObject.FindGameObjectWithTag("Map");
    }


    public void turnOffWeb()
    {
        //if (webViewPrefab.activeSelf)
        //{
        //    //webViewPrefab.SetActive(false);
        //    AppManager.instance.LoadAR();
        //}
        //else
        //{
        //    //webViewPrefab.SetActive(true);
        //    AppManager.instance.LoadMenu();
        //}
        toggleLiveMap(false);
        AppManager.instance.LoadScene(SceneIndexes.MENU);
        
    }

    public void togglePlaceObject(bool input)
    {
        PlaceObjectFunction.enabled = input;
        //PlaceARMapUI.SetActive(input);
    }

    public void toggleLiveMap(bool input)
    {
        if (!input)
        {
            DestroyARMap();
        }
        LiveSection.SetActive(input);
    }

    public void DestroyARMap()
    {
        preloadMap = GameObject.FindGameObjectWithTag("Map");
        if (preloadMap)
        {
            Destroy(preloadMap.gameObject);
        }
    }

}
