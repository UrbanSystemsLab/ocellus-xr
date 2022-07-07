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
    public GameObject mainPage;
    public GameObject TapToPlaceMap;
    public GameObject calibrationPage;
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
        map = Instantiate(objectToPlace, new Vector3(0,-1,0), Quaternion.identity);
        map.SetActive(false);
        isPlaced = false;
        raycastManager = GetComponent<ARRaycastManager>();
        mainPage.SetActive(false);
        calibrationPage.SetActive(false);
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
            placementIndicator.SetActive(true);
            UpdatePlacementPose();
            UpdatePlacementIndicator();
        } else
        {
            placementIndicator.SetActive(false);
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
        //calibrationPage.SetActive(true);
        TapToPlaceMap.SetActive(false);
        //map.GetComponent<LeanPinchScale>().enabled = true;
        //map.GetComponent<LeanTwistRotateAxis>().enabled = true;
        isCalibrating = true;
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
        var screenCenter = newCamera.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
        var hits = new List<ARRaycastHit>();
        raycastManager.Raycast(screenCenter, hits, UnityEngine.XR.ARSubsystems.TrackableType.Planes);

        placementPoseIsValid = hits.Count > 0;

        if (placementPoseIsValid)
        {
            //Debug.Log(1);
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
            mainPage.SetActive(true);
            reloadMapCanvas.SetActive(true);
            calibrationPage.SetActive(false);
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
            calibrationPage.SetActive(false);
            mainPage.SetActive(false);
            reloadMapCanvas.SetActive(false);
            TapToPlaceMap.SetActive(true);
            isPlaced = false;
            isCalibrating = false;
        }
        
    }
}
