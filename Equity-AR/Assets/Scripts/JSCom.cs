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
    //public string myJS;
    public Text infoText;

    // Start is called before the first frame update
    void Start()
    {
        //Old communication function that change innerHTML of the webpage
        //Debug.Log(myJS);
        //ExcuteJavaScript(myJS);

        SendJsonButton();

        webViewPrefab.Clicked += (sender, e) =>
        {
            //Receiving Json function
            webViewPrefab.WebView.MessageEmitted += WebView_MessageEmitted;
            Debug.Log("JSON IS HERE!!!");
        };
    }

    public void ReceiveJsonButton()
    {
        webViewPrefab.Initialized += (sender, e) =>
        {
            //Receiving Json function
            webViewPrefab.WebView.MessageEmitted += WebView_MessageEmitted;
        };
        Debug.Log("receive Button is working");
    }

    public void SendJsonButton()
    {

        webViewPrefab.Initialized += (sender, e) =>
        {
            webViewPrefab.WebView.LoadProgressChanged += WebView_LoadProgressChanged;
        };
        Debug.Log("Successfully send a JSON message");
    }

    //Receive Json
    void WebView_MessageEmitted(object sender, EventArgs<string> eventArgs)
    {
        var json = eventArgs.Value;
        Debug.Log("JSON received: " + json);
        infoText.text += json;
    }

    //Send Json
    void WebView_LoadProgressChanged(object sender, ProgressChangedEventArgs eventArgs)
    {
        // Send a message after the page has loaded.
        if (eventArgs.Type == ProgressChangeType.Finished)
        {
            MessageClass messageClass = new MessageClass();
            messageClass.message.latitude = AskLocation.Instance.lat;
            messageClass.message.longtitude = AskLocation.Instance.lon;
            messageClass.message.id = Random.Range(0, 10);
            messageClass.message.sent = true;
            string JSON = JsonUtility.ToJson(messageClass);
            //Debug.Log(JSON);

            webViewPrefab.WebView.PostMessage(JSON);
        }
    }


    async Task ExcuteJavaScript(string myJS)
    {
        infoText.text += "Async function is running\n";
        await webViewPrefab.WaitUntilInitialized();
        webViewPrefab.WebView.LoadProgressChanged += async (sender, eventArgs) => {
            if (eventArgs.Type == ProgressChangeType.Finished)
            {
                var headerText = await webViewPrefab.WebView.ExecuteJavaScript(myJS);
                infoText.text += headerText;
                Debug.Log("my text is " + headerText);
            }
        };
    }


}
