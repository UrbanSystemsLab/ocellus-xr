using System;
using UnityEngine;

public class MessageClass : MonoBehaviour
{
    //Create a custom struct and apply [Serializable] attribute to it
    //Data structure for sending web message
    [Serializable]
    public struct Message
    {
        public string sentType;
        public DataContent messageContent;
    }

    //Data structure for recieving JSON from web
    [Serializable]
    public struct RecieveJSON
    {
        public string type;
        public DataContent data;

    }

    //Data structure for recieving url link
    [Serializable]
    public struct RecieveLink
    {
        public string type;
        public Content data;

    }

    [Serializable]
    public struct Content
    {
        public Link link;
        public bool webview;

    }

    [Serializable]
    public struct Link
    {
        public string url;

    }


    [Serializable]
    public struct DataContent
    {
        public Layer layer;
        public Location location;
        public bool webviewIsOpen;
    }

    [Serializable]
    public struct Layer
    {
        public string id;
        public string name;
        public string mapKey;
        public int[] slideIndex;
    }

    [Serializable]
    public struct IndexNumber
    {
        public int index;
    }

    [Serializable]
    public struct Location
    {
        public float lat;
        public float lon;
    }


    [SerializeField]
    public Message message;


    //data structure for module and slides


    //[SerializeField]
    //public ModuleSlide callback;

    //[Serializable]
    //public struct ModuleSlide
    //{
    //    public string type;
    //    public int module;
    //    public int slide;
    //}
}