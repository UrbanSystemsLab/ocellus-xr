using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.Experimental.XR;
using System;
using UnityEngine.UI;
using Lean.Touch;

public class TapToPlaceObject : MonoBehaviour
{
    [SerializeField]
    public static bool mapIsLoaded = false;
    
    public GameObject objectToPlace;
    public GameObject placementIndicator;
    public bool isPlaced;
    public GameObject TapToPlaceMap;
    public Camera newCamera;
    public GameObject reloadMapCanvas;

    private ARRaycastManager raycastManager;
    private Pose placementPose;
    private bool placementPoseIsValid = false;
    private bool isCalibrating;
    private GameObject map = null;

    private void Awake()
    {
        reloadMapCanvas.SetActive(false);
    }

    // Start is called before the first frame update
    void Start()
    {
        //create a map to load first and set it invisible, so we can later activate it and change its position for faster loading time.
        map = Instantiate(objectToPlace, new Vector3(0,-1,0), Quaternion.identity);
        map.SetActive(false);


        isPlaced = false;
        raycastManager = GetComponent<ARRaycastManager>();

        TapToPlaceMap.SetActive(true);
        isCalibrating = false;
        mapIsLoaded = true;
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
        }
    }

    private void PlaceObject()
    {
        if(map!= null)
        {
            map.SetActive(true);
            map.transform.position = placementPose.position;
            map.transform.rotation = placementPose.rotation;
        }
        else
        {
            map = Instantiate(objectToPlace, placementPose.position, placementPose.rotation);
            map.SetActive(true);
        }

        isPlaced = true;
        TapToPlaceMap.SetActive(false);
        //map.GetComponent<LeanPinchScale>().enabled = true;
        //map.GetComponent<LeanTwistRotateAxis>().enabled = true;
        isCalibrating = true;
    }

    private void UpdatePlacementIndicator()
    {
        Debug.Log(placementIndicator.transform.position);
        if (placementPoseIsValid)
        {
            placementIndicator.transform.SetPositionAndRotation(placementPose.position, placementPose.rotation);
        }
    }

    private void UpdatePlacementPose()
    {
        var screenCenter = newCamera.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
        var hits = new List<ARRaycastHit>();
        raycastManager.Raycast(screenCenter, hits, UnityEngine.XR.ARSubsystems.TrackableType.Planes);

        placementPoseIsValid = hits.Count > 0;

        if (placementPoseIsValid)
        {
            placementPose = hits[0].pose;

            var cameraForward = newCamera.transform.forward;
            var cameraBearing = new Vector3(cameraForward.x, 0, cameraForward.z).normalized;
            placementPose.rotation = Quaternion.LookRotation(cameraBearing);
        }
    }

    public void Calibration()
    {
        if (isCalibrating)
        {
            reloadMapCanvas.SetActive(true);
            isCalibrating = false;
            //map.GetComponent<LeanPinchScale>().enabled = false;
            //map.GetComponent<LeanTwistRotateAxis>().enabled = false;
        }
        else
        {
            if(map != null)
            {
                Destroy(map);
            }
            reloadMapCanvas.SetActive(false);
            TapToPlaceMap.SetActive(true);
            isPlaced = false;
            isCalibrating = false;
        }
        
    }
}
