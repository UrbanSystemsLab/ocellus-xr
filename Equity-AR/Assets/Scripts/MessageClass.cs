using System;
using UnityEngine;

public class MessageClass : MonoBehaviour
{
    //Create a custom struct and apply [Serializable] attribute to it
    [Serializable]
    public struct Message
    {
        public float latitude;
        public float longtitude;
        public int id;
        public bool sent;
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
        public string layer;
        public float lat;
        public float lon;
    }


    [SerializeField]
    public Message message;
    public DataContent data;
    public RecieveJSON recievedJSON;
}