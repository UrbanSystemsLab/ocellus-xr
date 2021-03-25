using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Mapbox.Unity.Location;
using Mapbox.Unity.Map;
using Mapbox.Unity.MeshGeneration.Data;

public class Interactions : MonoBehaviour
{
    public List<VectorEntity> nearbyTrees;
    public GameObject treeInfoPrefab;
    public Text currentLocation;
    ILocationProvider _locationProvider;
    public Transform ARRoot;
    public Text treeNum;
    public bool treeNumInstantiated = false;

    IEnumerator Start()
    {
        yield return null;
        _locationProvider = LocationProviderFactory.Instance.DefaultLocationProvider;
        _locationProvider.OnLocationUpdated += CurrentLocation;
        nearbyTrees = new List<VectorEntity>();
    }

    
    void CurrentLocation(Mapbox.Unity.Location.Location location)
    {
        currentLocation.text = location.LatitudeLongitude.ToString();
        _locationProvider.OnLocationUpdated -= CurrentLocation;
    }

    void Awake()
    {
        if (nearbyTrees != null && treeNumInstantiated == false)
        {
            TreeNumUpdate();
            treeNumInstantiated = true;
        }
    }

    public void TreeNumUpdate()
    {

        int treeCount = 0;
        foreach (var tree in nearbyTrees)
        {
            float dist = Vector3.Distance(ARRoot.position, tree.Feature.Points[0][0]);
            if (dist < 10)
            {
                treeCount += 1;
                GameObject treeInfo = Instaintiate(treeInfoPrefab, tree.Feature.Points[0][0]);
                treeInfo.transfrom.GetChile(0).text = tree.Feature.Properties["GunesSpi"]
            }
        }
        Debug.Log(nearbyTrees.Count);
        treeNum.text = treeCount.ToString();
    }

    //public void
}
