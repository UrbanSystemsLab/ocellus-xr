using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuplex.WebView; 

public class ConstructSVG : MonoBehaviour
{
    public CanvasWebViewPrefab webCanvas;
    // Start is called before the first frame update
    void Start()
    {
        if (WebInfoStats.Stats.legendMapKey != null)
        {
            webCanvas.InitialUrl = 
                "http://ocellus.urbansystemslab.com/?legendExport=true&locationKey=%22-L6yAJF2pGYdw-yyPp6t%22&mapKey=%22" + WebInfoStats.Stats.legendMapKey + "%22" ;
        }
    }
}
