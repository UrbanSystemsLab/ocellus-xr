using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuplex.WebView;
using UnityEngine.UI;

public class toggleWebView : MonoBehaviour
{

    public GameObject webViewPrefab;
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
}
