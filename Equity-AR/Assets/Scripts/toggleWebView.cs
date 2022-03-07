using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuplex.WebView;
using UnityEngine.UI;

public class toggleWebView : MonoBehaviour
{

    public GameObject webViewPrefab;

    public TapToPlaceObject PlaceObjectFunction;
    public GameObject taptoplacetext;
    public GameObject caliPage;
    public GameObject mainPage;
    public GameObject fullBnt;

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

    public void openPlaceObject()
    {
        PlaceObjectFunction.enabled = true;
    }

    private void Update()
    {
        if (!webViewPrefab.activeSelf)
        {
            openPlaceObject();
            //taptoplacetext.SetActive(true);
            //caliPage.SetActive(true);
            //mainPage.SetActive(true);
            fullBnt.SetActive(true);
        }
    }

}
