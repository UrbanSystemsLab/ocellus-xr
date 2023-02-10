using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ToggleButtonScript : MonoBehaviour
{
    public Button button;
    public GameObject target;

    public void toggleButton()
    {
        if (target.activeSelf)
        {
            target.SetActive(false);
        } 
        else
        {
            target.SetActive(true);
        }
    }
}
