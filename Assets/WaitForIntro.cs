using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class WaitForIntro : MonoBehaviour
{
    public float videoTime = 3f;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(waitForIntro());
    }

    IEnumerator waitForIntro()
    {
        yield return new WaitForSeconds(videoTime);
        SceneManager.LoadScene((int)SceneIndexes.MANAGER);
    }

}
