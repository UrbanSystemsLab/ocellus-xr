using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainPage : MonoBehaviour
{

    public GameObject information;

    public void ShowInformation()
    {
        if (!information.activeSelf)
        {
            information.SetActive(true);
        }
        else
        {
            information.SetActive(false);
        }
    }
}
