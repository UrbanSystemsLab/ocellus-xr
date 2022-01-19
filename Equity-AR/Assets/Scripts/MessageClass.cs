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


    [SerializeField]
    public Message message;
}