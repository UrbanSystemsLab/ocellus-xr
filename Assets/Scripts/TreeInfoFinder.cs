using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TreeInfoFinder : MonoBehaviour
{
    //private List<GameObject> treeType = new List<GameObject>();

    public int treeType;
    public GameObject TreeInfoPanel;
    public Text TreeInfo;

    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.tag == "Trees")
        {
            for (int i=0; i<6; i++)
            {
                if (other.gameObject.transform.GetChild(1).GetChild(i).gameObject.activeInHierarchy)
                {
                    treeType = i;
                }
            }
        }

        switch (treeType)
        {
            case 0:
                break;
            case 1:
                TreeInfoPanel.SetActive(true);
                TreeInfo.text = "Gleditsia triacanthos var. inermis - Thornless honeylocust";
                break;
            case 2:
                TreeInfoPanel.SetActive(true);
                TreeInfo.text = "Platanus x acerifolia - London planetree";
                break;
            case 3:
                TreeInfoPanel.SetActive(true);
                TreeInfo.text = "Quercus palustris - pin oak";
                break;
            case 4:
                TreeInfoPanel.SetActive(true);
                TreeInfo.text = "Pyrus calleryana - Callery pear";
                break;
            case 5:
                TreeInfoPanel.SetActive(true);
                TreeInfo.text = "Zelkova serrata -Japanese zelkova";
                break;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Trees")
        {
            TreeInfoPanel.SetActive(false);
        }
    }
}
