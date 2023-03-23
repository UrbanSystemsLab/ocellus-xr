using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIPositionHandler : MonoBehaviour
{
    public UIData data;
    public RectTransform UIComponent;
    public int from;
    public int to;

    public UIData og;

    //public enum orientation // your custom enumeration
    //{
    //    Landscape = ScreenOrientation.Landscape,
    //    Portrait = ScreenOrientation.Portrait
    //};

    //public orientation direction;
    // Update is called once per frame
    void Update()
    {
        //if (Screen.orientation == (ScreenOrientation)direction)
        //{
            if (Screen.width > from && Screen.width < to)
            {
                UIComponent.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, data.width);
                UIComponent.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, data.height);
                UIComponent.offsetMax = new Vector2(data.posX + data.width / 2 ,data.posY + data.height / 2);
                UIComponent.localScale = new Vector3(data.scaleX, data.scaleY, 1);
            }
            else
            {
                if(og != null)
                {
                    ResetPosition();
                }
            }
        //}
        //else
        //{
        //    ResetPosition();
        //}
    }

    public void ResetPosition()
    {
        UIComponent.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, og.width);
        UIComponent.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, og.height);
        UIComponent.offsetMax = new Vector2(og.posX + og.width / 2, og.posY + og.height / 2);
        UIComponent.localScale = new Vector3(og.scaleX, og.scaleY, 1);
    }
}
