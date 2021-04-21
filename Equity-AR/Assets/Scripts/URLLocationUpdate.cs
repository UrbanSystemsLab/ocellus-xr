using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Mapbox.Unity.Location;
using Mapbox.Unity.Map;
using Mapbox.Unity.MeshGeneration.Data;
using Vuplex.WebView;

public class URLLocationUpdate : MonoBehaviour
{
    //public Text currentLocation;
    ILocationProvider _locationProvider;

    private bool unclicked = true;
    public CanvasWebViewPrefab webCanvas;
    public string url = ""; 


    IEnumerator Start()
    {
        yield return null;
        _locationProvider = LocationProviderFactory.Instance.DefaultLocationProvider;
        _locationProvider.OnLocationUpdated += CurrentLocation;
    }

    public void UpdateURL()
    {
        webCanvas.WebView.LoadUrl(url);
        webCanvas.InitialUrl = url;
    }

    void CurrentLocation(Mapbox.Unity.Location.Location location)
    {
        string[] latlon = location.LatitudeLongitude.ToString().Split(',');
        url = $"http://http://nyc.urbansystemslab.com/?mapKey=%22-LgdI9lPwGFXTSfwwjiz%22&mapPosition=%7B%22" +
            $"longitude%22%3A%22{latlon[0]}%22%2C%22" +
            $"latitude%22%3A%22{latlon[1]}%22%2C%22" +
            $"pitch%22%3A%2250.00%22%2C%22bearing%22%3A%220.00%22%2C%22zoom%22%3A%2212.94%22%7D&locationKey=%22-L6-k2TKsF3Wz2SM_Ph1%22";
    }
}


