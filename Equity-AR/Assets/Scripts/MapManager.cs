using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapManager : MonoBehaviour
{
    [SerializeField] private GameObject greenroof;
    [SerializeField] private GameObject heatmap;

    private void Start()
    {
        greenroof.SetActive(true);
        heatmap.SetActive(false);
    }

    public void Switch()
    {
        greenroof.SetActive(!greenroof.activeSelf);
        heatmap.SetActive(!heatmap.activeSelf);
    }
}
