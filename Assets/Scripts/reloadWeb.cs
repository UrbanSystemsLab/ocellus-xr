using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuplex.WebView;
using System.Threading.Tasks;
using System.Threading;
using UnityEngine.UI;

public class reloadWeb : MonoBehaviour
{
    public CanvasWebViewPrefab webViewPrefab;
    private string url;
    // Start is called before the first frame update

    private void Start()
    {
        //if(WebInfoStats.Stats.)
    }

    public void readInputField(string link)
    {
        url = link.ToString();
        //Debug.Log(url);
    }

    public void loadingUserPage()
    {
        //await webViewPrefab.WaitUntilInitialized();
        webViewPrefab.WebView.LoadUrl(url);
        Debug.Log("load url: " + url);

        
    }
}
