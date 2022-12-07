using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using Mapbox.Json.Linq;
using Proyecto26;
using Mapbox.Utils;
using Mapbox.Unity.Map;
using System;

public class WebHandler : MonoBehaviour
{
    #region Variable Declaration

    private string baseUrl = "https://usl-nyc-portal-prod.firebaseio.com/";
    private JObject map;
    public string shortLinkCode = "gcl6xc";
    private string longLink;
    private AbstractMap _abstractMap;

    User user = new User();

    #endregion

    #region Initialization

    // Start is called before the first frame update
    void Start()
    {
        //OnSubmit();
        //GetRequest();
        _abstractMap = FindObjectOfType<AbstractMap>();
    }

    private void OnSubmit()
    {
        PostToDatabase();
    }

    private void PostToDatabase()
    {
        User user = new User();
        RestClient.Put(baseUrl + "shortlink.json", user);
    }

    public void GetRequest()
    {
        //_abstractMap.UpdateMap(new Vector2d(-73.991124, 40.735797), 15f);
        RestClient.Get(baseUrl + "shortLinks/" + shortLinkCode + ".json").Then((System.Action<ResponseHelper>)(response =>
        {
            if (response != null)
            {
                this.longLink = response.Text;
                GetMapLocation();
            }
            else
            {
                Debug.LogError("No response link");
            }

        }));
    }

    private void GetMapLocation()
    {
        map = DecodeURL(longLink);
        
        
        string lat = map.Property("longitude").Value.ToString();
        string lon = map.Property("latitude").Value.ToString();
        float zoom = float.Parse(map.Property("zoom").Value.ToString());

        //lon = lon.Substring(0, lon.Length - 2);
        //lat = lat.Substring(0, lat.Length - 2);

        double x = Convert.ToDouble(lon);
        double y = Convert.ToDouble(lat);

        _abstractMap.UpdateMap(new Vector2d(x, y), zoom);
        Debug.Log(x + "#" + y + "#" + zoom);
    }

    private JObject DecodeURL(string url)
    {
        string decodedText = UnityWebRequest.UnEscapeURL(url);
        string location;
        string[] info;
        JObject json = null;

        int i = decodedText.IndexOf('?');
        Debug.Log(i);
        if (i > 0)
        {
            decodedText = decodedText.Substring(i + 1);
            info = decodedText.Split('&');
            for (int j = 0; j < info.Length; j++)
            {
                if (info[j].Contains("mapPosition"))
                {
                    int k = info[j].IndexOf('=');
                    location = info[j].Substring(k + 1);
                    location = location.Replace("\"", "'");
                    json = JObject.Parse(location);
                }
            }
            return json;
        }
        else
        {
            Debug.LogError("Invalid url");
            return null;
        }
    }

    #endregion



}
