using Unity.VectorGraphics;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(SpriteRenderer))]
public class SpriteSvgScript : BaseSvgScript
{
    void Start()
    {
        List<VectorUtils.Geometry> geometries = GetGeometries();

        if(geometries != null)
        {
            Sprite sprite = VectorUtils.BuildSprite(geometries, pixelsPerUnit, VectorUtils.Alignment.Center, Vector2.zero, 128, flipYAxis);
            GetComponent<SpriteRenderer>().sprite = sprite;
            GetComponent<SVGImage>().sprite = sprite;

        }
    }
}