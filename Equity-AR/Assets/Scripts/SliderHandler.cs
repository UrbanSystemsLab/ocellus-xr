using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SliderHandler : MonoBehaviour
{
    public Slider zoomSlider;
    public void addZoomLevel()
    {
        zoomSlider.value++;
    }
    public void minusZoomLevel()
    {
        zoomSlider.value--;
    }
}
