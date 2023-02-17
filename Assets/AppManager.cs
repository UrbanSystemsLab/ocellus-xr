 using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public enum SceneIndexes
{
    MANAGER = 1,
    MENU = 2,
    AR = 3,
    LIVE = 4
}

public class AppManager : MonoBehaviour
{
    public static AppManager instance;
    public GameObject loadingScreen;
    public Slider progressBar;
    private float totalSceneProgress;
    private int _currentSceneIndex;
    //private bool okToLoad = false;
    private void Start()
    {
        instance = this;

        //StartCoroutine(MenuSetUp());
        SceneManager.LoadSceneAsync((int)SceneIndexes.MENU, LoadSceneMode.Additive);
        //LoadScene(SceneIndexes.MENU);
    }
    public IEnumerator MenuSetUp()
    {
        LoadScene(SceneIndexes.MENU);
        yield return null;
    }

    public void LoadScene(SceneIndexes scene)
    {

        if (scene != SceneIndexes.MENU)
        {
            SceneManager.UnloadSceneAsync((int)SceneIndexes.MENU);
        }
        else
        {
            //check if AR/LIVE is active and unload AR/Live when coming back to Menu
            SceneManager.UnloadSceneAsync(SceneManager.GetActiveScene().buildIndex);
        }

        //set current scene to main scene
        _currentSceneIndex = (int)scene;

        //load the scene
        AsyncOperation operation = SceneManager.LoadSceneAsync((int)scene, LoadSceneMode.Additive);

        //change the active scene to current scene
        operation.completed += ActivateTransientScene;

        //get the loading progress
        StartCoroutine(GetSceneLoadingProgress(operation));

        //setup the preload scene asset for AR and Live
        if (scene != SceneIndexes.MENU)
        {
            preloadSceneAsset(scene);
        }
    }

    public void preloadSceneAsset(SceneIndexes scene)
    {
        if (scene == SceneIndexes.AR)
        {
            //see if there is active LIVE map
            GameObject preloadMap = GameObject.FindGameObjectWithTag("Live");
            if (preloadMap != null)
            {
                preloadMap.SetActive(false);
            }
            else
            {
                //if there is no active live map, turn on the ar section

                Switcher.instance.ToggleMap(true);
            }

        }
        else if(scene == SceneIndexes.LIVE)
        {
            //see if there is active AR map
            GameObject preloadMap = GameObject.FindGameObjectWithTag("Map");
            //if there is active map, turn it off
            if(preloadMap != null)
            {
                preloadMap.SetActive(false);
            }
            else
            {
                //if there is no active map, turn on the live section
                ToggleManager.instance.toggleLiveMap(true);
            }
        }
    }

    /*
     * for testing purposes, loadScene wrapper
     */
    public void loadAR()
    {
        LoadScene(SceneIndexes.AR);
    }

    /*
     * for testing purposes, loadScene wrapper
     */
    public void loadLive()
    {
        LoadScene(SceneIndexes.LIVE);
    }

    public IEnumerator GetSceneLoadingProgress(AsyncOperation operation)
    {

        progressBar.value = 0;
        if (operation != null)
        {
            while (operation.progress < 1)
            {
                if (!loadingScreen.activeSelf)
                {
                    loadingScreen.gameObject.SetActive(true);
                }
                totalSceneProgress += operation.progress;
                Debug.Log(totalSceneProgress);
                progressBar.value = totalSceneProgress;

                yield return null;
            }

        }

        ////reset async operation list
        //sceneLoading = null;

        //turn the loading screen off
        Debug.Log("loading screen should be false");
        loadingScreen.gameObject.SetActive(false);
        Debug.Log("turnning it off");
    }

    //transfer active scene to current scene index
    private void ActivateTransientScene(AsyncOperation op)
    {
        Scene scene = SceneManager.GetSceneByBuildIndex(_currentSceneIndex);
        SceneManager.SetActiveScene(scene);
        //okToLoad = true;
        Debug.Log("ACTIVE SCENE IS:" + SceneManager.GetActiveScene().name);

    }
}
