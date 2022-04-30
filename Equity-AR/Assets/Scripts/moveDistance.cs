﻿using UnityEngine;

public class moveDistance : MonoBehaviour
{

    private Rigidbody rb;
    private float dirX, dirZ, moveSpeed = 5f;

    // Use this for initialization
    void Start()
    {
        rb = this.GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        dirX = Input.GetAxisRaw("Horizontal") * moveSpeed;
        dirZ = Input.GetAxisRaw("Vertical") * moveSpeed;

    }

    private void FixedUpdate()
    {
        rb.velocity = new Vector3(dirX, rb.velocity.y, dirZ);
    }
}
