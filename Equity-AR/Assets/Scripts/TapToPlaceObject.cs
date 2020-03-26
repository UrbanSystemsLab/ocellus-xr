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

    
    public GameObject objectToPlace;
    public GameObject placementIndicator;
    public bool isPlaced;
    public GameObject mainPage;
    public GameObject TapToPlaceMap;
    public GameObject calibrationPage;
    

    private ARRaycastManager raycastManager;
    private Pose placementPose;
    private bool placementPoseIsValid = false;
    private bool isCalibrating;
    private GameObject map = null;

    // Start is called before the first frame update
    void Start()
    {
        isPlaced = false;
        raycastManager = GetComponent<ARRaycastManager>();
        mainPage.SetActive(false);
        calibrationPage.SetActive(false);
        TapToPlaceMap.SetActive(true);
        isCalibrating = false;
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
        map = Instantiate(objectToPlace, placementPose.position, placementPose.rotation);
        isPlaced = true;
        calibrationPage.SetActive(true);
        TapToPlaceMap.SetActive(false);
        objectToPlace.GetComponent<LeanPinchScale>().enabled = true;
        objectToPlace.GetComponent<LeanTwistRotateAxis>().enabled = true;
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

    public void Calibration()
    {
        if (isCalibrating)
        {
            mainPage.SetActive(true);
            calibrationPage.SetActive(false);
            isCalibrating = false;
            objectToPlace.GetComponent<LeanPinchScale>().enabled = false;
            objectToPlace.GetComponent<LeanTwistRotateAxis>().enabled = false;
        }
        else
        {
            if(map != null)
            {
                Destroy(map);
            }
            calibrationPage.SetActive(false);
            mainPage.SetActive(false);
            TapToPlaceMap.SetActive(true);
            isPlaced = false;
            isCalibrating = false;
        }
        
    }
}
