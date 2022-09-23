using System;
using UnityEngine;

public class MessageClass : MonoBehaviour
{
    //Create a custom struct and apply [Serializable] attribute to it
    [Serializable]
    public struct Message
    {
        public string sentType;
        public DataContent messageContent;
    }

    [Serializable]
    public struct RecieveJSON
    {
        public string type;
        public DataContent data;
        

    }

    [Serializable]
    public struct DataContent
    {
        public Layer layer;
        public Location location;
    }

    [Serializable]
    public struct Layer
    {
        public string id;
        public string name;
        public string description;
        public bool isReady;
    }

    [Serializable]
    public struct Location
    {
        public float lat;
        public float lon;
    }


    [SerializeField]
    public Message message;
}