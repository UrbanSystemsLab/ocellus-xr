using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuplex.WebView; 

public class ConstructSVG : MonoBehaviour
{
    public CanvasWebViewPrefab webCanvas;
    public Database database;
    // Start is called before the first frame update
    void Start()
    {
        if (database.legendMapKey != null)
        {
            Debug.Log("Loading Legend URL: " + webCanvas.InitialUrl);
            webCanvas.InitialUrl =
                "http://ocellus.urbansystemslab.com/?legendExport=true&locationKey=%22-L6yAJF2pGYdw-yyPp6t%22&mapKey=%22" + database.legendMapKey + "%22";
            //webCanvas.InitialUrl =
            //    "http://ocellus.urbansystemslab.com/?legendExport=true&locationKey=\"-L6yAJF2pGYdw-yyPp6t%22&mapKey=\"" + WebInfoStats.Stats.legendMapKey + "\"";

            //Debug.Log("Loading Legend URL: " + webCanvas.InitialUrl);
            //webCanvas.InitialUrl =
            //    "http://urex-dataviz-dev-elb-1883551979.us-east-1.elb.amazonaws.com/?mapKey=%22-L7WBUHZzHxessuwlhl0%22&legendExport#";

            Debug.Log("Loading Legend URL: " + webCanvas.InitialUrl);
        }
    }
}
