using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TMPro;
using UnityEngine;

public class TreeInfoManager : MonoBehaviour
{
    public string commonName = "Unknown";
    public string treeStructure = "Unknown";
    public string treeCondition = "Unknown";
    public Transform mainCam;
    public Text treeNum;
    private float dist;
    private bool inCircle = false;
    private bool numAdded = false;
    public GameObject infocard;
    public TextMeshPro treeName;
    private Transform mytransform;

    //public Transform infoTrans;


    // Start is called before the first frame update
    void Start()
    {
        mainCam = GameObject.FindWithTag("MainCamera").GetComponent<Transform>();
        //treeNum = GameObject.Find("TreeNum").GetComponent<Text>();
        mytransform = GetComponent<Transform>();
    }

    // Update is called once per frame
    void Update()
    {
        dist = Vector3.Distance(mytransform.position, mainCam.position);
        
        if (dist < 20.0f)
        {
            inCircle = true;
        }
        else
        {
            inCircle = false;
        }

        if (inCircle == true && numAdded == false)
        {

            infocard.SetActive(true);
            treeName.text = commonName;
            //add 1 to the treenum
            numAdded = true;
            int newNum = -2;
            try
            {
                int.TryParse(treeNum.text, out newNum);
            }
            catch { }
            newNum += 1;
            //treeNum.text = $"{newNum}";
        }

        if (inCircle == false && numAdded == true)
        {
            infocard.SetActive(false);
            //minus 1 to the treenum
            numAdded = false;
            int newNum = -1;
            try
            {
                int.TryParse(treeNum.text, out newNum);
            }
            catch { }
            newNum -= 1;
            treeNum.text = $"{newNum}";
        }
    }
}
