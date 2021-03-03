using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Mapbox.Unity.Location;
using Mapbox.Unity.Map;

public class UIManager : MonoBehaviour
{
    public Text currentLocation;

    ILocationProvider _locationProvider;

    // Start is called before the first frame update
    IEnumerator Start()
    {
        yield return null;
        _locationProvider = LocationProviderFactory.Instance.DefaultLocationProvider;
        _locationProvider.OnLocationUpdated += CurrentLocation;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void CurrentLocation(Mapbox.Unity.Location.Location location)
    {
        currentLocation.text = location.LatitudeLongitude.ToString();
        _locationProvider.OnLocationUpdated -= CurrentLocation;
    }
}
