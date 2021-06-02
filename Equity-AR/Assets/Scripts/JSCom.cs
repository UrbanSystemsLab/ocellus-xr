using System.Collections;
using System.Collections.Generic;
using Vuplex.WebView;
using UnityEngine;
using System.Threading.Tasks;
using System.Threading;
using UnityEngine.UI;

public class JSCom : MonoBehaviour
{
    public CanvasWebViewPrefab webViewPrefab;
    public string myJS;
    public Text debugText;

    // Start is called before the first frame update
    void Start()
    {
        ExcuteJavaScript(myJS);
    }

    // Update is called once per frame

    async Task ExcuteJavaScript(string myJS)
    {
        debugText.text += "Async function is running\n";
        await webViewPrefab.WaitUntilInitialized();
        webViewPrefab.WebView.LoadProgressChanged += async (sender, eventArgs) => {
            if (eventArgs.Type == ProgressChangeType.Finished)
            {
                var headerText = await webViewPrefab.WebView.ExecuteJavaScript(myJS);
                debugText.text += headerText.ToString();
            }
        };
    }

    
}
