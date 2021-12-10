using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UpdateLocation : MonoBehaviour
{
    public Text locationText;
    // Update is called once per frame
    private void Start()
    {
        
    }
    void Update()
    {
        locationText.text = "Lat:"+ AskLocation.Instance.lat.ToString() + "   Long:" + AskLocation.Instance.lon.ToString();
    }
}
