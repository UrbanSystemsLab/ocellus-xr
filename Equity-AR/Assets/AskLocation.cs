﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AskLocation : MonoBehaviour
{
    public float lat;
    public float lon;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(StartLocationService());
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private IEnumerator StartLocationService()
    {
        if (!Input.location.isEnabledByUser)
        {
            Debug.Log("User has not enable location service.");
            yield break;
        }

        Input.location.Start();
        int maxWait = 20;
        while(Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds(1);
            maxWait--;
        }

        if(maxWait <=0)
        {
            Debug.Log("Time out");
            yield break;
        }

        if(Input.location.status == LocationServiceStatus.Failed)
        {
            Debug.Log("Unable to determine device location");
            yield break;
        }

        lat = Input.location.lastData.latitude;
        lon = Input.location.lastData.longitude;

        yield break;
    }
}
