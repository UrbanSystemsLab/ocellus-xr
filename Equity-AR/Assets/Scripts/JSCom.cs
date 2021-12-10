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


    async void Start()
    {
        await webViewPrefab.WaitUntilInitialized();

        Debug.Log("the webview is ready in unity");
        MessageClass messageClass = new MessageClass();
        messageClass.message.latitude = AskLocation.Instance.lat;
        messageClass.message.longtitude = AskLocation.Instance.lon;
        messageClass.message.id = Random.Range(0, 10);
        messageClass.message.sent = true;
        string JSON = JsonUtility.ToJson(messageClass);
        Debug.Log("constructing JSON string now");
        // Wait for the WebViewPrefab to initialize, because the WebViewPrefab.WebView property
        // is null until the prefab has initialized.
        // Use the LoadProgressChanged event to determine when the page has loaded.
        webViewPrefab.WebView.LoadProgressChanged += (sender, eventArgs) => {
            // Send a message after the page has loaded.
            if (eventArgs.Type == ProgressChangeType.Finished)
            {
                webViewPrefab.WebView.PostMessage(JSON);
                Debug.Log("post JSON string from Unity to Javascript");
            }
        };


        clickingDetection();

    }

    private void clickingDetection()
    {
        webViewPrefab.WebView.PageLoadScripts.Add("document.documentElement.addEventListener('click', () => vuplex.postMessage('clicked'));");
        webViewPrefab.WebView.MessageEmitted += (sender, eventArgs) => {
            if (eventArgs.Value == "clicked")
            {
                Debug.Log("The webview was clicked");
                infoText.text += eventArgs.Value;
                Debug.Log(eventArgs.Value);
            }
            else
            {
                Debug.Log("The webview is doing something else");
                Debug.Log(eventArgs.Value);
            }
            //const data = JSON.parse(message.data);
            //if (MessageType)
        };
    }


    //public void ReceiveJsonButton()
    //{
    //    webViewPrefab.Initialized += (sender, e) =>
    //    {
    //        //Receiving Json function
    //        webViewPrefab.WebView.MessageEmitted += WebView_MessageEmitted;
    //    };
    //    Debug.Log("receive Button is working");
    //}

    ////Receive Json
    //void WebView_MessageEmitted(object sender, EventArgs<string> eventArgs)
    //{
    //    var json = eventArgs.Value;
    //    Debug.Log("JSON received: " + json);
    //    infoText.text += json;
    //}

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