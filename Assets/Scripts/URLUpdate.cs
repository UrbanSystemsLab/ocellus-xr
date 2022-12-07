using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuplex.WebView;
using UnityEngine.UI;

public class URLUpdate : MonoBehaviour
{
    private bool unclicked = true;

    public CanvasWebViewPrefab webCanvas;

    public InputField inputField;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    //private void OnGUI()
    //{
    //    if (unclicked)
    //    {
    //        GUI.BeginGroup(new Rect(20, 20, 500, 200), "");

    //        GUI.Label(new Rect(10, 10, 400, 30), "URLUpdateTest");

    //        if (GUI.Button(new Rect(10, 50, 150, 30), "GetData"))
    //        {
    //            webCanvas.WebView.LoadUrl("https://usl-tilequery-api-test.glitch.me/");
    //            webCanvas.InitialUrl = "https://usl-tilequery-api-test.glitch.me/";
    //            unclicked = false;
    //        }

    //        GUI.EndGroup();
    //    }
    //    //GUI.BeginGroup(new Rect(Screen.width * 0.5f - 100, Screen.height * 0.5f - 100, 500, 200), "");

    //}

    public void LoadNewPage ()
    {
        webCanvas.WebView.LoadUrl($"{inputField.text}");
        webCanvas.InitialUrl = $"{inputField.text}";
    }
}
