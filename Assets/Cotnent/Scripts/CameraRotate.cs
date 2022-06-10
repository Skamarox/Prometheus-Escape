using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraRotate : MonoBehaviour
{
    private bool Rotate = false;
    private Quaternion rotation;
    private float Speed = 5f;
    private float MinY = -90f;
    private float MaxY = 80f;
    private float RotY = 0f;

    private void Start()
    {
        rotation = transform.rotation;
        Condition.AddListener(Condition.Begin, GameBegin);
        Condition.AddListener(Condition.Loss, GameLoss);
    }

    private void GameBegin() 
    {
        Rotate = true;
    }

    private void GameLoss() 
    {
        Rotate = false;
        transform.rotation = rotation;
    }

    private void Update()
    {
        if (Rotate == false)
            return;

        float rotationX = transform.localEulerAngles.y + Input.GetAxis("Mouse X") * Speed;

        RotY += Input.GetAxis("Mouse Y") * Speed;
        RotY = Mathf.Clamp(RotY, MinY, MaxY);

        transform.localEulerAngles = new Vector3(-RotY, 0, 0);
        transform.parent.Rotate(0, rotationX, 0);
    }

    public void SetMouseSensetivity(float Speed) 
    {
        this.Speed = Speed;
    }
}
