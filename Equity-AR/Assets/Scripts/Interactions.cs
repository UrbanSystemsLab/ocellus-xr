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
        if (currentLocation != null)
        {
            currentLocation.text = location.LatitudeLongitude.ToString();
        }
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

            Vector3 centroidVector = Vector3.zero;
            foreach (var point in tree.Feature.Points[0])
            {
                centroidVector += point;
            }
            centroidVector = centroidVector / tree.Feature.Points[0].Count;

            float dist = Vector3.Distance(ARRoot.position, centroidVector);
            if (dist < 10)
            {
                treeCount += 1;
                GameObject treeInfo = Instantiate(treeInfoPrefab, centroidVector, Quaternion.identity);
                //treeInfo.transform.GetChild(0).text = tree.Feature.Properties["GunesSpi"].ToString();
            }
        }
        Debug.Log(nearbyTrees.Count);
        treeNum.text = treeCount.ToString();
    }

    //public void
}
