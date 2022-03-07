using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneController : MonoBehaviour
{

    public void LoadWorldScaleAR()
    {
        SceneManager.LoadScene(1);
    }

    public void LoadPlaneAR()
    {
        SceneManager.LoadScene(0);
    }

    private void Update()
    {
        if(WebInfoStats.Stats.currentLayer == "explore")
        {
            LoadWorldScaleAR();
        }
    }
}
