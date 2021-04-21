using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class RayCastInteraction : MonoBehaviour
{
    public Camera camera;
    public CanvasGroup treeInfoCanvasGroup;
    public CanvasGroup recalibrateGroup;
    public TreeInfoManager treeInfoManager;
    public Text treeDescription;
    public Text treeCN;
    RaycastHit hit;
    // Start is called before the first frame update
    void Start()
    {
        
        
    }

    // Update is called once per frame
    void Update()
    {
        Ray ray = camera.ScreenPointToRay(Input.mousePosition);

        if (Input.GetMouseButtonDown(0))
        {
            if (Physics.Raycast(ray, out hit))
            {
                Transform objectHit = hit.transform;
                if(objectHit.gameObject.tag == "Trees")
                {
                    treeInfoManager = objectHit.gameObject.GetComponent<TreeInfoManager>();
                    treeCN.text = treeInfoManager.commonName;
                    treeDescription.text = $"\nStructure of this tree: {treeInfoManager.treeStructure}" +
                                           $"\nCondition of this tree: {treeInfoManager.treeCondition}";
                    treeInfoCanvasGroup.alpha = 1;
                    treeInfoCanvasGroup.interactable = true;
                    treeInfoCanvasGroup.blocksRaycasts = true;
                    recalibrateGroup.alpha = 0;
                    recalibrateGroup.interactable = false;
                    recalibrateGroup.blocksRaycasts = false;
                }

                // Do something with the object that was hit by the raycast.
            }
        }
        
    }
}
