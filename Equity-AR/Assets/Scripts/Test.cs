using System.Collections;
using System.Collections.Generic;
using Mapbox.Unity.Map;
using UnityEngine;
using Mapbox.Utils;

public class Test : MonoBehaviour
{
    private AbstractMap abstractMap;

    // Start is called before the first frame update
    void Start()
    {
        abstractMap = FindObjectOfType<AbstractMap>();

    }

    public void UpdateLocation()
    {
        abstractMap.UpdateMap(new Vector2d(40.7748, -73.9808), 15.45f);
    }
}
