using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Jump : MonoBehaviour
{
    private Rigidbody rb;
    public float DownForce;
    [SerializeField] private float Speed;

    private void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    private void Update()
    {
        if (Grounded.IsGround(transform, Grounded.GroundDistance) == false)
            return;
        if (Input.GetKeyDown(KeyCode.Space))
        {
            rb.AddForce(transform.up * Speed * Time.fixedDeltaTime, ForceMode.VelocityChange);
        }
    }

    private void FixedUpdate()
    {
        if (Grounded.IsGround(transform, Grounded.GroundDistance) == true)
            return;
        if (Grounded.OnHook == true)
            return;

        rb.AddForce(-transform.up* DownForce * Time.fixedDeltaTime, ForceMode.Impulse);
    }
}
