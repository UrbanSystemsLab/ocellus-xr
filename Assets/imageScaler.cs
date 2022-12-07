using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class imageScaler : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        //if(Screen.orientation == ScreenOrientation.Landscape)
        if (Screen.width > 1300)
        {
            if(Screen.width > 1500 && Screen.height > 1300)
            {
                this.transform.localScale = new Vector3(0.8f, 0.8f, 1);
            }
            else
            {
                this.transform.localScale = new Vector3(0.5f, 1, 1);
            }

        }
        else if (Screen.width <= 1300)
        {
            this.transform.localScale = new Vector3(1, 0.5f, 1);
        }
    }
}
