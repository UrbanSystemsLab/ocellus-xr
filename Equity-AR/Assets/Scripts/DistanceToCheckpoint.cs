using UnityEngine;
using UnityEngine.UI;     

public class DistanceToCheckpoint : MonoBehaviour {

   

    // Reference to checkpoint position
    [SerializeField]
    private Transform checkpoint;

    // Reference to UI text that shows the distance value
    [SerializeField]
    private Text Location1;
    private Text Location2;

    // Calculated distance value
    public float FirstDistance;
    public float SecondDistance;
    public GameObject FirstMarker;
    public GameObject SecondMarker;


    void Start()
    {
       
    }

    // Update is called once per frame
    private void Update()
    {
        // Calculate distance value between character and checkpoint
        FirstDistance = (checkpoint.transform.position - FirstMarker.transform.position).magnitude;
        SecondDistance = (checkpoint.transform.position - SecondMarker.transform.position).magnitude;

        // Display distance value via UI text
        // distance.ToString("F1") shows value with 1 digit after period
        // so 12.234 will be shown as 12.2 for example
        // distance.ToString("F2") will show 12.23 in this case
        Location1.text = "Location 1: " + FirstDistance.ToString("F1") + " meters";
       


        if (FirstDistance < 0.5)
        {
            Location1.text=("There is one more tree around : " + SecondDistance.ToString("F1") + " meters");
        }

        else
        {
            Location1.text = ("Location 1: " + FirstDistance.ToString("F1") + " meters");
        }

    }

}
