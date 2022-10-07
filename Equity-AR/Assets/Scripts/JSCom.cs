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
    //public GameObject map;
    private GameObject preloadMap;

    async void Start()
    {
        await webViewPrefab.WaitUntilInitialized();
        RecieveMessageFromWeb();
        preloadMap = GameObject.FindGameObjectWithTag("Map");
        //Debug.Log(preloadMap);
        preloadMap.SetActive(false);
    }

    private void RecieveMessageFromWeb()
    {
        //Whenever there is a message get sent to Unity, this is the function to receive and handle it.
        webViewPrefab.WebView.MessageEmitted += (sender, eventArgs) => {
                Debug.Log("The webview is getting the data!");
                infoText.text += eventArgs.Value;
                Debug.Log(eventArgs.Value);
                
                //Parsing json
                //testing for parsing json
                //string testing = @"{""type"":""layer"",""data"":{""layer"":""heat""}}";
                //string testing = "{\"type\": \"layer\"}";
                MessageClass.RecieveJSON gotData = new MessageClass.RecieveJSON();
                gotData = JsonUtility.FromJson<MessageClass.RecieveJSON>(eventArgs.Value);
                Debug.Log("JavaScript send layer of : " + gotData.data.layer.name + gotData.type);

            if (!gotData.data.webviewIsOpen)
            {
                webViewObject.SetActive(false);
            }


            if (gotData.type == "ar" || gotData.type == "live")
            {
                //storing the json data in WebInfoStats
                WebInfoStats.Stats.currentLayerName = gotData.data.layer.name;
                WebInfoStats.Stats.currentLayerID = gotData.data.layer.id;
                WebInfoStats.Stats.selectedLat = gotData.data.location.lat;
                WebInfoStats.Stats.selectedLon = gotData.data.location.lon;
                WebInfoStats.Stats.type = gotData.type;
                Debug.Log("open has not yet data");
                WebInfoStats.Stats.webviewIsOpen = gotData.data.webviewIsOpen;
                Debug.Log("open has data");

                //TODO this map can not be find......Test it first
                preloadMap.SetActive(true);
                Debug.Log("MAP HASSSSS ITTTT");
                bool preloadIsFinished = Switcher.instance.ActivateLayer(WebInfoStats.Stats.currentLayerID);
                //preloadMap.SetActive(false);

                //if (TapToPlaceObject.mapIsLoaded)//WebStatus.isReady?
                if (preloadIsFinished)
                {
                    preloadMap.SetActive(false);
                    constructMessage();
                }
            }

            





        };
    }

    public void constructMessage()
    {

        Debug.Log("the webview is ready in unity");
        MessageClass messageClass = new MessageClass();
        //string JSON = JsonUtility.ToJson(messageClass);
        Debug.Log("constructing JSON string now");
        messageClass.message.messageContent.layer.isReady = true;

        // Wait for the WebViewPrefab to initialize, because the WebViewPrefab.WebView property
        // is null until the prefab has initialized.
        // Use the LoadProgressChanged event to determine when the page has loaded.
        //webViewPrefab.WebView.LoadProgressChanged += (sender, eventArgs) => {
        //    // Send a message after the page has loaded.
        //    if (eventArgs.Type == ProgressChangeType.Finished)
        //    {
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
                messageClass.message.sentType = WebInfoStats.Stats.type;
                messageClass.message.messageContent.layer.id = WebInfoStats.Stats.currentLayerID;
                messageClass.message.messageContent.layer.name = WebInfoStats.Stats.currentLayerName;

                string JSON = JsonUtility.ToJson(messageClass.message);
                webViewPrefab.WebView.PostMessage(JSON);
                Debug.Log("finish sending message from Unity!");

    }

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


}