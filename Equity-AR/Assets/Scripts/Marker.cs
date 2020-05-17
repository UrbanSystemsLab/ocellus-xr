using System.Collections;
using System.Collections.Generic;
using Mapbox.Unity.Map;
using UnityEngine;

public class Marker : MonoBehaviour
{
    public float minHeight;
    public float maxHeight;

    public float minScale;
    public float maxScale;

    private AbstractMap _map;
    private float height;
    private float scale;

    // Start is called before the first frame update
    void Start()
    {
        _map = FindObjectOfType<AbstractMap>();
    }

    // Update is called once per frame
    void Update()
    {
        height = maxHeight - ((_map.Zoom-15) / 5 * (maxHeight - minHeight));
        transform.localPosition = new Vector3(transform.position.x, height, transform.position.z);

        scale = maxScale - ((_map.Zoom-15) / 5 * (maxScale - minScale));
        transform.localScale = new Vector3(scale, scale, scale);
    }
}
