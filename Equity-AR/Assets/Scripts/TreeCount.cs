using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TreeCount : MonoBehaviour
{
    public int treeCount;
    // Start is called before the first frame update
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Trees")
        {
            Debug.Log("A tree ENTER detection of a the Cam");
            treeCount++;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Trees")
        {
            Debug.Log("A tree LEFT detection of a the Cam");
            treeCount--;
        }
    }
   
}
