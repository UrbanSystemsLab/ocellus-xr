using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WebInfoStats : MonoBehaviour
{
    public static WebInfoStats Stats
    {
        get;
        set;
    }

    public string currentLayerName;
    public string currentLayerID;
    public string type;
    //public int pageIndex;
    public float selectedLat;
    public float selectedLon;
    public bool layerIsReady;
    public bool webviewIsOpen;
    public string legendMapKey;
    public int[] curSlides;

    // Start is called before the first frame update
    void Awake()
    {
        Stats = this;
    }
}
