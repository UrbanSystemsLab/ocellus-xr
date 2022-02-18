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

    public string currentLayer;
    //public int pageIndex;
    public float selectedLat;
    public float selectedLon;

    // Start is called before the first frame update
    void Start()
    {
        Stats = this;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
