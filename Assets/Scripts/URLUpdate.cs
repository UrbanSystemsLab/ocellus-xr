using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuplex.WebView;
using UnityEngine.UI;

public class URLUpdate : MonoBehaviour
{
    //private bool unclicked = true;

    public CanvasWebViewPrefab webCanvas;

    public InputField inputField;
    

    public void LoadNewPage ()
    {
        webCanvas.WebView.LoadUrl($"{inputField.text}");
        webCanvas.InitialUrl = $"{inputField.text}";
    }
}
