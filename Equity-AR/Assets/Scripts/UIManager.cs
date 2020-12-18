using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
    public Text treeNumInfo;
    public GameObject TreeDetection;

    public GameObject TreeInfoPanel;
    public Text TreeInfo;
    public GameObject TreeInfoFinder;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        treeNumInfo.text = "Trees in 10 meters radius: " + TreeDetection.GetComponent<TreeCount>().treeCount;
    }
}
