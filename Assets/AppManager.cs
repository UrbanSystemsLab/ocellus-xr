 using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public enum SceneIndexes
{
    MANAGER = 0,
    MENU = 1,
    AR = 2,
    LIVE = 3
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

        LoadMenu();
    }

    public void LoadMenu()
    {
        //setup loading page
        progressBar.value = 0;
        loadingScreen.gameObject.SetActive(true);

        //list of all the loading operation that needed to perform
        List<AsyncOperation> sceneLoading = new List<AsyncOperation>();

        //check if AR/LIVE is active and unload AR/Live when coming back to Menu
        AsyncOperation unloadAR = SceneManager.UnloadSceneAsync(SceneManager.GetActiveScene().buildIndex);
        sceneLoading.Add(unloadAR);

        _currentSceneIndex = (int)SceneIndexes.MENU;

        AsyncOperation operation = SceneManager.LoadSceneAsync((int)SceneIndexes.MENU, LoadSceneMode.Additive);
        //operation.allowSceneActivation = false;
        operation.completed += ActivateTransientScene;
        sceneLoading.Add(operation);
        StartCoroutine(GetSceneLoadingProgress(sceneLoading,(int)SceneIndexes.MENU));
    }


    public void LoadAR()
    {
        progressBar.value = 0;
        loadingScreen.gameObject.SetActive(true);

        _currentSceneIndex = (int)SceneIndexes.AR;
        List<AsyncOperation> sceneLoading = new List<AsyncOperation>();
        SceneManager.UnloadSceneAsync((int)SceneIndexes.MENU);
        AsyncOperation operation = SceneManager.LoadSceneAsync((int)SceneIndexes.AR, LoadSceneMode.Additive);
        operation.completed += ActivateTransientScene;
        sceneLoading.Add(operation);
        StartCoroutine(GetSceneLoadingProgress(sceneLoading, (int)SceneIndexes.AR));
        preloadSceneAsset(SceneIndexes.AR);
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

    public void LoadLive()
    {
        progressBar.value = 0;
        loadingScreen.SetActive(true);
        _currentSceneIndex = (int)SceneIndexes.LIVE;
        List<AsyncOperation> sceneLoading = new List<AsyncOperation>();

        sceneLoading.Add(SceneManager.UnloadSceneAsync((int)SceneIndexes.MENU));

        AsyncOperation operation = SceneManager.LoadSceneAsync((int)SceneIndexes.LIVE, LoadSceneMode.Additive);
        operation.completed += ActivateTransientScene;
        sceneLoading.Add(operation);
        StartCoroutine(GetSceneLoadingProgress(sceneLoading, (int)SceneIndexes.LIVE));
        preloadSceneAsset(SceneIndexes.LIVE);
    }

    public IEnumerator GetSceneLoadingProgress(List<AsyncOperation> operations, int activeIndex)
    {
        for(int i = 0; i < operations.Count; i++)
        {
            while (!operations[i].isDone)
            {
                totalSceneProgress = 0;
                foreach(AsyncOperation operation in operations)
                {
                    totalSceneProgress += operation.progress;

                }

                totalSceneProgress = totalSceneProgress / operations.Count;
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
