using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VerticalFullScreenUI : MonoBehaviour
{
    public RectTransform web;
    
    // Update is called once per frame
    void Update()
    {
        if (Screen.orientation == ScreenOrientation.Landscape)
        {
            //setting the top to 0 so that it is full screen.
            web.offsetMax = new Vector2(web.offsetMax.x, 0);

        }
    }
}
