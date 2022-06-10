using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    private static GameObject player;
    private Vector3 StartPosition = Vector3.zero;
    private static bool loss = false;

    private void Awake()
    {
        loss = false;
        StartPosition = transform.position;
        player = gameObject;
        Condition.AddListener(Condition.Loss, GameLoss);
    }

    private void GameLoss() 
    {
        transform.position = StartPosition;
    }

    public static GameObject GetPlayer()
    {
        return player;
    }

    public static Rigidbody GetRigidbody() 
    {
        return player.GetComponent<Rigidbody>();
    }

    public static bool Loss()
    {
        return loss;
    }

    public static void Loss(bool value) 
    {
        loss = value;
    }
}
