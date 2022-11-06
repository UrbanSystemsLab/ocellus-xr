using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class AppManager : MonoBehaviour
{
    public static AppManager instance;
    public GameObject loadingScreen;
    public Slider progressBar;
    private float totalSceneProgress;
    private List<AsyncOperation> sceneLoading = new List<AsyncOperation>();

    private void Awake()
    {
        instance = this;

        sceneLoading.Add(SceneManager.LoadSceneAsync((int)SceneIndexes.MENU, LoadSceneMode.Additive));
    }

    public void LoadAR()
    {
        loadingScreen.gameObject.SetActive(true);


        sceneLoading.Add(SceneManager.UnloadSceneAsync((int)SceneIndexes.MENU));
        sceneLoading.Add(SceneManager.LoadSceneAsync((int)SceneIndexes.AR, LoadSceneMode.Additive));

        StartCoroutine(GetSceneLoadingProgress());
    }

    public void LoadLive()
    {
        loadingScreen.SetActive(true);


        sceneLoading.Add(SceneManager.UnloadSceneAsync((int)SceneIndexes.MENU));
        sceneLoading.Add(SceneManager.LoadSceneAsync((int)SceneIndexes.LIVE, LoadSceneMode.Additive));

        StartCoroutine(GetSceneLoadingProgress());
    }

    public IEnumerator GetSceneLoadingProgress()
    {
        for(int i = 0; i < sceneLoading.Count; i++)
        {
            while (!sceneLoading[i].isDone)
            {
                totalSceneProgress = 0;
                foreach(AsyncOperation operation in sceneLoading)
                {
                    totalSceneProgress += operation.progress;
                }

                totalSceneProgress = totalSceneProgress / sceneLoading.Count;
                Debug.Log(totalSceneProgress);
                progressBar.value = totalSceneProgress;
                yield return null;
            }
        }

        //reset async operation list
        sceneLoading = null;

        //turn the loading screen off
        Debug.Log("loading screen should be false");
        loadingScreen.gameObject.SetActive(false);
        Debug.Log("turnning it off");
    }
}
