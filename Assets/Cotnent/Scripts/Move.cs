using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Move : MonoBehaviour
{
    public float Speed;
    private bool IsMove = false;
    private Rigidbody rb;

    private void Start()
    {
        rb = GetComponent<Rigidbody>();
        Condition.AddListener(Condition.Begin, GameBegin);
        Condition.AddListener(Condition.Loss, GameLoss);
    }

    private void GameBegin()
    {
        IsMove = true;
    }

    private void GameLoss()
    {
        IsMove = false;
        rb.AddForce(Vector3.zero * Speed * Time.fixedDeltaTime, ForceMode.VelocityChange);
    }

    private void FixedUpdate()
    {

        if (IsMove == false)
            return;

        if (Input.GetKey(KeyCode.D))
            rb.AddForce(transform.right * Speed * Time.fixedDeltaTime, ForceMode.VelocityChange);
        else
        if (Input.GetKey(KeyCode.A))
            rb.AddForce(-transform.right * Speed * Time.fixedDeltaTime, ForceMode.VelocityChange);
        if (Input.GetKey(KeyCode.W))
            rb.AddForce(transform.forward * Speed * Time.fixedDeltaTime, ForceMode.VelocityChange);
        else 
        if (Input.GetKey(KeyCode.S))
            rb.AddForce(-transform.forward * Speed * Time.fixedDeltaTime, ForceMode.VelocityChange);
    }
}
