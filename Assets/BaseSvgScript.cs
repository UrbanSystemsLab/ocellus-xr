using Unity.VectorGraphics;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class BaseSvgScript : MonoBehaviour
{
    [Multiline()]
    private string svg = "...";
    public int pixelsPerUnit;
    public bool flipYAxis;

    private void Start()
    {
        svg = WebInfoStats.Stats.legendXML;
    }

    protected List<VectorUtils.Geometry> GetGeometries()
    {
        if(svg == null)
        {
            Debug.Log("svg does not exist!");
            return null;
        }

        using var textReader = new StringReader(svg);
        var sceneInfo = SVGParser.ImportSVG(textReader);

        return VectorUtils.TessellateScene(sceneInfo.Scene, new VectorUtils.TessellationOptions
        {
            StepDistance = 10,
            SamplingStepSize = 100,
            MaxCordDeviation = 0.5f,
            MaxTanAngleDeviation = 0.1f
        });
    }
    protected List<Color> GetColors()
    {
        return null;
    }
}