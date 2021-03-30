using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InfoCard : MonoBehaviour
{
    public Transform mainCam;

    public GameObject treeInfo;
    private float dist;
    //public Transform infoTrans;


    // Start is called before the first frame update
    void Start()
    {
        mainCam = GameObject.Find("Main Camera").GetComponent<Transform>();
    }

    // Update is called once per frame
    void Update()
    {
        treeInfo.transform.LookAt(mainCam);
        dist = Vector3.Distance(transform.position, mainCam.position);
        if (dist < 10.0f)
        {
            treeInfo.SetActive(true);
        }
        else
        {
            treeInfo.SetActive(false);
        }
    }

    //Debug on UI
    //void OnGUI()
    //{
    //    if(mainCam != null && dist < 10.0f)
    //    {
    //        GUI.Box(new Rect(10, 10, 100, 90), "MainCam Found");

    //    }
        
    //}

}
