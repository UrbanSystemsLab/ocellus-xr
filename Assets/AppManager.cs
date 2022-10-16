using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class AppManager : MonoBehaviour
{
    public static AppManager instance;
    public GameObject loadingScreen;

    private void Awake()
    {
        instance = this;

        SceneManager.LoadSceneAsync((int)SceneIndexes.MENU, LoadSceneMode.Additive);
    }

    public void LoadApp()
    {
        loadingScreen.SetActive(true);
        SceneManager.UnloadSceneAsync((int)SceneIndexes.MENU);
        SceneManager.LoadSceneAsync((int)SceneIndexes.AR, LoadSceneMode.Additive);
        SceneManager.LoadSceneAsync((int)SceneIndexes.LIVE, LoadSceneMode.Additive);
    }
}
