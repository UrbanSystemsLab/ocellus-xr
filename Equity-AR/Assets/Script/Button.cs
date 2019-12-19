using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Button : MonoBehaviour
{
    [SerializeField] private GameObject map1;
    [SerializeField] private GameObject map2;

    // Start is called before the first frame update
    void Start()
    {
        map1.SetActive(true);
        map2.SetActive(false);
    }

    public void changeData()
    {
        if(map1.activeSelf == true)
        {
            map1.SetActive(false);
        } else
        {
            map1.SetActive(true);
        }

        if(map2.activeSelf == true)
        {
            map2.SetActive(false);
        }
        else
        {
            map2.SetActive(true);
        }
    }
}
