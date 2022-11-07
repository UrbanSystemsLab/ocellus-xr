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
        progressBar.value = 0;
        loadingScreen.gameObject.SetActive(true);

        //TODO unload AR or Live when coming back to Menu
        _currentSceneIndex = (int)SceneIndexes.MENU;
        List<AsyncOperation> sceneLoading = new List<AsyncOperation>();

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
        Debug.Log("11111");
        AsyncOperation operation = SceneManager.LoadSceneAsync((int)SceneIndexes.AR, LoadSceneMode.Additive);
        //operation.allowSceneActivation = false;
        operation.completed += ActivateTransientScene;
        Debug.Log("22222");
        sceneLoading.Add(operation);
        StartCoroutine(GetSceneLoadingProgress(sceneLoading, (int)SceneIndexes.AR));
    }

    public void LoadLive()
    {
        progressBar.value = 0;
        loadingScreen.SetActive(true);
        List<AsyncOperation> sceneLoading = new List<AsyncOperation>();

        sceneLoading.Add(SceneManager.UnloadSceneAsync((int)SceneIndexes.MENU));
        sceneLoading.Add(SceneManager.LoadSceneAsync((int)SceneIndexes.LIVE, LoadSceneMode.Additive));
        //SceneManager.SetActiveScene(SceneManager.GetSceneAt((int)SceneIndexes.LIVE));
        StartCoroutine(GetSceneLoadingProgress(sceneLoading, (int)SceneIndexes.LIVE));
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
                    totalSceneProgress += Mathf.Clamp01(operation.progress / 0.9f);

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

    private void ActivateTransientScene(AsyncOperation op)
    {
        Scene scene = SceneManager.GetSceneByBuildIndex(_currentSceneIndex);
        SceneManager.SetActiveScene(scene);
        //okToLoad = true;
        Debug.Log("ACTIVE SCENE IS:" + SceneManager.GetActiveScene().name);

    }
}
