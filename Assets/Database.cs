using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Web Stats", menuName ="Web Stats")]
public class Database : ScriptableObject
{
    public string currentLayerName;
    public string currentLayerID;
    public string type;

    public float selectedLat;
    public float selectedLon;

    public bool layerIsReady;
    public bool webviewIsOpen;

    public string legendMapKey;
    public int[] curTuple = { -1, -1 };

    public void printAllStats()
    {
        Debug.Log("currentLayerName: " + currentLayerName + "\n"
            + "currentLayerID:" + currentLayerID + "\n"
            + "type:" + type + "\n"
            + "selectedLat:" + selectedLat + "\n"
            + "selectedLon:" + selectedLon + "\n"
            + "layerIsReady:" + layerIsReady + "\n"
            + "webviewIsOpen:" + webviewIsOpen + "\n"
            + "lengendMapKey:" + legendMapKey + "\n"
            + "curTuple:" + curTuple + "\n"
            );
    }
}
