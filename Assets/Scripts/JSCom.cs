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
    public GameObject webViewObject;
    //public GameObject map;
    private GameObject preloadMap;
    public Database database;

    async void Start()
    {
        //wait for webview to be initialized
        await webViewPrefab.WaitUntilInitialized();
        RecieveMessageFromWeb();
        if (database.curTuple[0] != -1 || database.curTuple[1] != -1)
        {
            constructMessage();
        }
    }

    /// <summary>
    /// action taken when getting message from webview(JavaScript)
    /// </summary>
    private void RecieveMessageFromWeb()
    {

        //Whenever there is a message get sent to Unity, this is the function to receive and handle it.
        webViewPrefab.WebView.MessageEmitted += (sender, eventArgs) => {
            Debug.Log("The webview is getting the data!");
            Debug.Log(eventArgs.Value);


            if (eventArgs.Value.StartsWith("http"))
            {
                Application.OpenURL(eventArgs.Value);
                return;
             }

            //Parsing json
            //testing for parsing json
            //string testing = @"{""type"":""layer"",""data"":{""layer"":""heat""}}";
            //string testing = "{\"type\": \"layer\"}";
            MessageClass.RecieveJSON gotData = new MessageClass.RecieveJSON();
            gotData = JsonUtility.FromJson<MessageClass.RecieveJSON>(eventArgs.Value);
            Debug.Log("JavaScript send layer of : " + gotData.data.layer.name + " "+ gotData.type);

            if (!gotData.data.webviewIsOpen)
            {
                webViewObject.SetActive(false);
            }

            if (eventArgs.Value.StartsWith("http"))
            {
                Debug.Log("is http~~");
                Application.OpenURL(eventArgs.Value);
            }

            if (gotData.type == "ar" || gotData.type == "live")
            {
                //storing the json data in WebInfoStats
                storeData(gotData);
                //constructMessage();


                //Start Loading Content Scene
                if (database.type == "ar")
                {
                    Debug.Log("start to load AR scene.....");
                    AppManager.instance.LoadScene(SceneIndexes.AR);
                    Debug.Log("Finish!! loading ar");
                }

                if (database.type == "live")
                {
                    Debug.Log("start to load live scene.....");
                    AppManager.instance.LoadScene(SceneIndexes.LIVE);
                    Debug.Log("Finish!! loading live");
                }
            }

        };
    }

    /// <summary>
    /// Store incoming JSON data into WebInfoStats
    /// </summary>
    /// <param name="gotData"></param>
    private void storeData(MessageClass.RecieveJSON gotData)
    {
        //WebInfoStats.Stats.currentLayerName = gotData.data.layer.name;
        //WebInfoStats.Stats.currentLayerID = gotData.data.layer.id;
        //WebInfoStats.Stats.selectedLat = gotData.data.location.lat;
        //WebInfoStats.Stats.selectedLon = gotData.data.location.lon;
        //WebInfoStats.Stats.type = gotData.type;
        //WebInfoStats.Stats.webviewIsOpen = gotData.data.webviewIsOpen;
        //WebInfoStats.Stats.legendMapKey = gotData.data.layer.mapId;

        //WebInfoStats.Stats.curTuple[0] = gotData.data.layer.slideIndex[0];
        //WebInfoStats.Stats.curTuple[1] = gotData.data.layer.slideIndex[1];

        database.currentLayerName = gotData.data.layer.name;
        database.currentLayerID = gotData.data.layer.id;
        database.selectedLat = gotData.data.location.lat;
        database.selectedLon = gotData.data.location.lon;
        database.type = gotData.type;
        database.webviewIsOpen = gotData.data.webviewIsOpen;
        database.legendMapKey = gotData.data.layer.mapKey;

        //if(gotData.data.layer.)
        database.curTuple = (int[])(gotData.data.layer.slideIndex).Clone();
        database.printAllStats();
        Debug.Log("storing slides id in Unity: " + gotData.data.layer.slideIndex[0]);
        Debug.Log("storing curtuple in Unity: " + database.curTuple[0]);
        Debug.Log("storing map id in Unity: " + database.legendMapKey);
    }

    /// <summary>
    /// used for testing purpose, linked with testing loading button, to stimulate choosing a layer
    /// </summary>
    public void RecieveMessageFromWebTest()
    {
        Debug.Log("The webview is getting the data!");

        if (database.type == "ar")
        {

            //preloadMap.SetActive(true);
            //Debug.Log("MAP HASSSSS ITTTT");
            //bool preloadIsFinished = Switcher.instance.ActivateLayer(WebInfoStats.Stats.currentLayerID);
            bool preloadIsFinished = Switcher.instance.ActivateLayer(database.currentLayerID);
            //preloadMap.SetActive(false);

            //if (TapToPlaceObject.mapIsLoaded)//WebStatus.isReady?
            if (preloadIsFinished)
            {
                //preloadMap.SetActive(false);
                constructMessage();
            }
        }
    }

    /// <summary>
    /// Construct a JSON data and send it back to JavaScript(webview), acting as a callback
    /// </summary>
    public void constructMessage()
    {

        Debug.Log("the webview is ready in unity");
        MessageClass messageClass = new MessageClass();
        //string JSON = JsonUtility.ToJson(messageClass);
        Debug.Log("constructing JSON string now");

        // Wait for the WebViewPrefab to initialize, because the WebViewPrefab.WebView property
        // is null until the prefab has initialized.
        // Use the LoadProgressChanged event to determine when the page has loaded.
        webViewPrefab.WebView.LoadProgressChanged += (sender, eventArgs) =>
        {
            // Send a message after the page has loaded.
            if (eventArgs.Type == ProgressChangeType.Finished)
            {
                if (!Input.location.isEnabledByUser)
                {
                    //User has not enable location service, give it a default lat&lon : Claremont Park
                    messageClass.message.messageContent.location.lat = 40.840244f;
                    messageClass.message.messageContent.location.lon = -73.907231f;
                    Debug.Log("post Central Park Default string from Unity to Javascript");
                }
                else
                {
                    //User enable location service,get user's location and post message
                    messageClass.message.messageContent.location.lat = database.selectedLat;
                    messageClass.message.messageContent.location.lon = database.selectedLon;
                    Debug.Log("User current location is: " + database.selectedLat + ", " + database.selectedLon);
                    Debug.Log("post JSON string from Unity to Javascript");
                }
                //messageClass.message.sentType = WebInfoStats.Stats.type;
                //messageClass.message.messageContent.layer.id = WebInfoStats.Stats.currentLayerID;
                //messageClass.message.messageContent.layer.name = WebInfoStats.Stats.currentLayerName;
                //messageClass.message.messageContent.layer.slideIndex = (int[])(WebInfoStats.Stats.curTuple).Clone();

                //Debug.Log("sending slides id cur tuple in Unity: " + WebInfoStats.Stats.curTuple[0]);

                messageClass.message.sentType = database.type;
                messageClass.message.messageContent.layer.id = database.currentLayerID;
                messageClass.message.messageContent.layer.name = database.currentLayerName;
                messageClass.message.messageContent.layer.slideIndex = (int[])(database.curTuple).Clone();

                Debug.Log("sending slides id cur tuple in Unity: " + database.curTuple);
                string JSON = JsonUtility.ToJson(messageClass.message);
                webViewPrefab.WebView.PostMessage(JSON);
                Debug.Log("Sending JSON: " + JSON);
                Debug.Log("finish sending message from Unity!");
            }
        };

    }

    /// <summary>
    /// Sending module and slide where user left off, back to webview, so that user can restore previous pages.
    /// </summary>
    /// <param name="module"></param>
    /// <param name="slide"></param>
    //public void sendModuleSlides(int module, int slide)
    //{
    //    MessageClass messageClass = new MessageClass();
    //    //string JSON = JsonUtility.ToJson(messageClass);
    //    Debug.Log("constructing Modules/Slides now");
    //    messageClass.message.messageContent.layer.isReady = true;

    //    messageClass.callback.type = "Module/Slide";
    //    messageClass.callback.module = WebInfoStats.Stats.module;
    //    messageClass.callback.slide = WebInfoStats.Stats.slide;

    //    string JSON = JsonUtility.ToJson(messageClass.callback);
    //    webViewPrefab.WebView.PostMessage(JSON);
    //    Debug.Log("finish sending module/slide from Unity!");
    //}

    //Send Json
    //void WebView_LoadProgressChanged(object sender, ProgressChangedEventArgs eventArgs)
    //{
    //    // Send a message after the page has loaded.
    //    if (eventArgs.Type == ProgressChangeType.Finished)
    //    {
    //        MessageClass messageClass = new MessageClass();
    //        messageClass.message.messageContent.location.lat = AskLocation.Instance.lat;
    //        messageClass.message.messageContent.location.lon = AskLocation.Instance.lon;
    //        messageClass.message.messageContent.layer.id = WebInfoStats.Stats.currentLayerName + "heat";
    //        string JSON = JsonUtility.ToJson(messageClass);
    //        //Debug.Log(JSON);

    //        webViewPrefab.WebView.PostMessage(JSON);
    //    }
    //}


}