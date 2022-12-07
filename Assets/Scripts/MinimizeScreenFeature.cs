using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MinimizeScreenFeature : MonoBehaviour
{
    public Sprite[] icon;
    public Image bntImg;
    public GameObject UIFeature;
    //public GameObject caliPage;
    public RectTransform rectTransform;
    // Start is called before the first frame update
    private void Start()
    {
        changeIcon();
    }
    // Update is called once per frame
    void Update()
    {
        //if(Screen.orientation == ScreenOrientation.Landscape)
        if(Screen.width > 1200)
        {
            rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, 100);
            rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, 100);
            rectTransform.position = new Vector3(100,100,0);
        }
        else if(Screen.width <= 1200)
        {
            rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, 150);
            rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, 150);
            rectTransform.position = new Vector3(80, 80, 0);
        }
    }
    public void changeIcon()
    {

        if(bntImg.sprite == icon[1])
        {
            bntImg.sprite = icon[0];
            UIFeature.SetActive(true);
            //caliPage.SetActive(true);
        }
        else
        {
            bntImg.sprite = icon[1];
            UIFeature.SetActive(false);
            //caliPage.SetActive(false);
        }
    }
}
