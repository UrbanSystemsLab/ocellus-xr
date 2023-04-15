using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LegendUIStretchPositionHandler : MonoBehaviour
{
    public UIData data;
    public RectTransform UIComponent;
    public int from;
    public int to;

    public UIData og;

    public enum orientation // your custom enumeration
    {
        Landscape = ScreenOrientation.Landscape,
        Portrait = ScreenOrientation.Portrait
    };

    public orientation direction;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        //if (Screen.orientation == (ScreenOrientation)direction)
        //{
        if (Screen.width > from && Screen.width < to)
        {
            ///*Left*/
            //UIComponent.offsetMin.x 
            ///*Right*/
            //UIComponent.offsetMax.x
            ///*Top*/
            //UIComponent.offsetMax.y
            ///*Bottom*/
            //UIComponent.offsetMin.y

            /*Left*/
            UIComponent.offsetMin = new Vector2(data.posX, UIComponent.offsetMin.y);
            /*Right*/
            UIComponent.offsetMax = new Vector2(data.posY, UIComponent.offsetMax.y);
            //UIComponent.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, data.width);

            UIComponent.offsetMax = new Vector2(data.posX + data.width / 2, data.posY + data.height / 2);

            UIComponent.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, data.height);
            //UIComponent.localScale = new Vector3(data.scaleX, data.scaleY, 1);

            

        }
        else
        {
            UIComponent.offsetMin = new Vector2(og.posX, UIComponent.offsetMin.y);
            /*Right*/
            UIComponent.offsetMax = new Vector2(og.posY, UIComponent.offsetMax.y);

            UIComponent.offsetMax = new Vector2(og.posX + og.width / 2, og.posY + og.height / 2);

            //UIComponent.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, og.width);
            UIComponent.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, og.height);
        }
        //}
    }
}
