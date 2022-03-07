using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class VerticalLayoutUI : MonoBehaviour
{
    public Image panel;
    public Slider slider;
    public GameObject zoom;
    public Button menu;

    private RectTransform p;
    private RectTransform s;
    private RectTransform z;
    private RectTransform m;
    // Start is called before the first frame update
    void Start()
    {
        p = panel.GetComponent<RectTransform>();
        s = slider.GetComponent<RectTransform>();
        z = zoom.GetComponent<RectTransform>();
        m = menu.GetComponent<RectTransform>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Screen.orientation == ScreenOrientation.Landscape || Screen.height < 1500)
        {
            //shorten the height of the slider and its parent
            s.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, 120);
            z.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, 200);

            
            //seting panel's "right" to -400 (left side of the screen) top to -20 (upper than previous) and adjust the height
            p.offsetMax = new Vector2(-400, -20);
            p.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, 50);


            //setting menu botton to align with panel
            //m.offsetMax = new Vector2(m.offsetMax.x, -45);
            m.SetInsetAndSizeFromParentEdge(RectTransform.Edge.Top, 30, 30);

            
        Debug.Log(Screen.height);
        }
        else
        {
            //reset back to original place
            s.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, 200);
            z.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, 250);
            p.offsetMax = new Vector2(-20, -35);
            p.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, 50);
            m.SetInsetAndSizeFromParentEdge(RectTransform.Edge.Top, 45, 30);
        }
    }
}
