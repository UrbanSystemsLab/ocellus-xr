using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Mapbox.Unity.Location;
using Mapbox.Unity.Map;
using Mapbox.Unity.MeshGeneration.Data;

public class UIManager : MonoBehaviour
{
    public Text currentLocation;
    ILocationProvider _locationProvider;

    public VectorEntity treeVE;
    public Transform ARRoot;
    public Text treeNum;
    public Button refreshButton;
    public bool treeNumInstantiated = false;



    IEnumerator Start()
    {
        yield return null;
        _locationProvider = LocationProviderFactory.Instance.DefaultLocationProvider;
        _locationProvider.OnLocationUpdated += CurrentLocation;
    }

    
    void CurrentLocation(Mapbox.Unity.Location.Location location)
    {
        currentLocation.text = location.LatitudeLongitude.ToString();
        _locationProvider.OnLocationUpdated -= CurrentLocation;
    }

    void Update()
    {
        if (treeVE != null && treeNumInstantiated == false)
        {
            TreeNumUpdate();
            treeNumInstantiated = true;
        }
    }

    public void TreeNumUpdate()
    {

        int treeCount = 0;
        foreach (var point in treeVE.Feature.Points[0])
        {
            float dist = Vector3.Distance(ARRoot.position, point);
            if (dist > 10)
            {
                treeCount += 1;
            }
        }

        treeNum.text = treeCount.ToString();
    }

}
