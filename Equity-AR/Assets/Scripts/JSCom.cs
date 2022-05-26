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
    public GameObject webViewObject;
    MessageClass.RecieveJSON gotData = new MessageClass.RecieveJSON();

    async void Start()
    {
        await webViewPrefab.WaitUntilInitialized();

        clickingDetection();

    }

    private void clickingDetection()
    {
        //This line of code is to insert JavaScript code into the web that is running in vulplex in unity
        webViewPrefab.WebView.PageLoadScripts.Add("document.documentElement.addEventListener('click', () => vuplex.postMessage('clicked'));");
        //Whenever there is a message get sent to Unity, this is the function to receive and handle it.
        webViewPrefab.WebView.MessageEmitted += (sender, eventArgs) => {
            if (eventArgs.Value == "clicked")
            {

                Debug.Log("The webview was clicked");
                infoText.text += eventArgs.Value;
                Debug.Log(eventArgs.Value);
                //print "clicked"
            }
            else
            {
                Debug.Log("The webview is doing something else");
                infoText.text += eventArgs.Value;
                Debug.Log(eventArgs.Value);
                // print JSON

                //testing for parsing json
                //string testing = @"{""type"":""layer"",""data"":{""layer"":""heat""}}";
                //string testing = "{\"type\": \"layer\"}";
                MessageClass.RecieveJSON gotData = new MessageClass.RecieveJSON();
                gotData = JsonUtility.FromJson<MessageClass.RecieveJSON>(eventArgs.Value);
                Debug.Log("JavaScript send layer of : " + gotData.data.layer.name + gotData.type);
                if (gotData.type == "ar" || gotData.type == "live")
                {
                    //storing the json data in WebInfoStats
                    WebInfoStats.Stats.currentLayerName = gotData.data.layer.name;
                    WebInfoStats.Stats.currentLayerID = gotData.data.layer.id;
                    WebInfoStats.Stats.selectedLat = gotData.data.location.lat;
                    WebInfoStats.Stats.selectedLon = gotData.data.location.lon;
                    WebInfoStats.Stats.sceneType = gotData.type;

                    //webViewObject.SetActive(false);
                    constructMessage();
                }

            }
            //const data = JSON.parse(message.data);
            //if (MessageType)
        };
    }

    private void constructMessage()
    {

        Debug.Log("the webview is ready in unity");
        MessageClass messageClass = new MessageClass();
        //string JSON = JsonUtility.ToJson(messageClass);
        Debug.Log("constructing JSON string now");


        // Wait for the WebViewPrefab to initialize, because the WebViewPrefab.WebView property
        // is null until the prefab has initialized.
        // Use the LoadProgressChanged event to determine when the page has loaded.
        webViewPrefab.WebView.LoadProgressChanged += (sender, eventArgs) => {
            // Send a message after the page has loaded.
            if (eventArgs.Type == ProgressChangeType.Finished)
            {
                if (!Input.location.isEnabledByUser)
                {
                    //User has not enable location service, give it a default lat&lon :Central Park
                    messageClass.message.messageContent.location.lat = 40.7812f;
                    messageClass.message.messageContent.location.lon = -73.9665f;
                    Debug.Log("post Central Park Default string from Unity to Javascript");
                }
                else
                {
                    //User enable location service,get user's location and post message
                    messageClass.message.messageContent.location.lat = AskLocation.Instance.lat;
                    messageClass.message.messageContent.location.lon = AskLocation.Instance.lon;
                    Debug.Log("post JSON string from Unity to Javascript");
                }
                messageClass.message.sentType = "testingType";
                messageClass.message.messageContent.layer.id = WebInfoStats.Stats.currentLayerID;
                messageClass.message.messageContent.layer.name = WebInfoStats.Stats.currentLayerName;

                string JSON = JsonUtility.ToJson(messageClass);
                webViewPrefab.WebView.PostMessage(JSON);
            }
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
            messageClass.message.messageContent.location.lat = AskLocation.Instance.lat;
            messageClass.message.messageContent.location.lon = AskLocation.Instance.lon;
            messageClass.message.messageContent.layer.id = WebInfoStats.Stats.currentLayerName + "heat";
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