using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class RayCastInteraction : MonoBehaviour
{
    //We need the main camera in the scene, which will be the start point of a detection ray cast
    public Camera camera;

    //Canvas Group is a way to set 2D panels that don't involve with GameObject.SetActive
    //tree info canvas group holds the info fields for tree info
    public CanvasGroup treeInfoCanvasGroup;
    //we need to hide the recalibrate group so we need to refer to it
    public CanvasGroup recalibrateGroup;

    //this be filled with the TreeInfoManager attached to the tree we clicked
    public TreeInfoManager treeInfoManager;

    //the two Text fields display the tree info
    //You can find these two objects under the TreeInfoDetails panel under the Main Canvas
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
        //a ray is casted every frame from the mouse (finger) position
        Ray ray = camera.ScreenPointToRay(Input.mousePosition);

        //button 0 is the left button on a mouse and also the one-finger tap on a screen
        //when the user taps on the screen the codes below will run
        if (Input.GetMouseButtonDown(0))
        {
            //if the ray hits something, run the codes below
            if (Physics.Raycast(ray, out hit))
            {
                Transform objectHit = hit.transform;

                //if the item hit by the ray is tagged "Trees", run the codes below
                //you need to set the tree prefab to the tag "Trees"
                if(objectHit.gameObject.tag == "Trees")
                {
                    //Fill the blank info fields
                    treeInfoManager = objectHit.gameObject.GetComponent<TreeInfoManager>();
                    treeCN.text = "\n"+treeInfoManager.commonName.ToUpper();
                    treeDescription.text = $"\n{treeInfoManager.treeStructure} Structure" +
                                           $"\n{treeInfoManager.treeCondition} Condition" +
                                           "\n";

                    //Make the info panel on screen visible and interactable
                    treeInfoCanvasGroup.alpha = 1;
                    treeInfoCanvasGroup.interactable = true;
                    treeInfoCanvasGroup.blocksRaycasts = true;

                    //Hide the recalibrate group so the canvas is not too crowded
                    recalibrateGroup.alpha = 0;
                    recalibrateGroup.interactable = false;
                    recalibrateGroup.blocksRaycasts = false;
                }
            }
        }
        
    }
}
