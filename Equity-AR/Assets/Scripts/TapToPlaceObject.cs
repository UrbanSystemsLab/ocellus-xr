using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.Experimental.XR;
using System;

public class TapToPlaceObject : MonoBehaviour
{

    
    public GameObject objectToPlace;
    public GameObject placementIndicator;
    public bool isPlaced;
    public GameObject canvas;
    public GameObject TapToPlaceMap;

    private ARRaycastManager raycastManager;
    private Pose placementPose;
    private bool placementPoseIsValid = false;

    // Start is called before the first frame update
    void Start()
    {
        isPlaced = false;
        raycastManager = GetComponent<ARRaycastManager>();
        canvas.SetActive(false);
        TapToPlaceMap.SetActive(true);
    }

    // Update is called once per frame
    void Update()
    {
        


        if (placementPoseIsValid && Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began && !isPlaced)
        {
            PlaceObject();
        }

        if (!isPlaced)
        {
            UpdatePlacementPose();
            UpdatePlacementIndicator();
        } else
        {
            placementIndicator.Destroy();
        }
    }

    private void PlaceObject()
    {
        Instantiate(objectToPlace, placementPose.position, placementPose.rotation);
        isPlaced = true;
        canvas.SetActive(true);
        TapToPlaceMap.SetActive(false);
    }

    private void UpdatePlacementIndicator()
    {
        if (placementPoseIsValid)
        {
            placementIndicator.SetActive(true);
            placementIndicator.transform.SetPositionAndRotation(placementPose.position, placementPose.rotation);
        }
        else
        {
            placementIndicator.SetActive(false);
        }

    }

    private void UpdatePlacementPose()
    {
        var screenCenter = Camera.current.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
        var hits = new List<ARRaycastHit>();
        raycastManager.Raycast(screenCenter, hits, UnityEngine.XR.ARSubsystems.TrackableType.Planes);

        placementPoseIsValid = hits.Count > 0;

        if (placementPoseIsValid)
        {
            Debug.Log(1);
            placementPose = hits[0].pose;

            var cameraForward = Camera.current.transform.forward;
            var cameraBearing = new Vector3(cameraForward.x, 0, cameraForward.z).normalized;
            placementPose.rotation = Quaternion.LookRotation(cameraBearing);
        }
    }
}
