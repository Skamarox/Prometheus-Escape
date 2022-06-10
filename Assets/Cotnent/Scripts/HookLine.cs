using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HookLine : MonoBehaviour
{
    private Rigidbody player;
    [SerializeField] private Transform HookPosition;
    [SerializeField] private Material LineMaterial;
    private float OffsetSpeed = 0.25f;
    private float Coefficent = 0.1f;
    private float OffsetX = 1;
    private float Speed = 2f;
    private LineRenderer Line;

    private void Start()
    {
        player = Player.GetPlayer().GetComponent<Rigidbody>();
        Line = GetComponent<LineRenderer>();
        Condition.AddListener(Condition.Loss, GameLoss);
    }

    private void GameLoss()
    {
        Line.SetPosition(0, Vector3.zero);
    }

    void Update()
    {
        if (Line.GetPosition(0) != Vector3.zero)
        {
            Line.SetPosition(1, HookPosition.position);
            OffsetX -= Coefficent;
            Vector3 V3 = Line.GetPosition(0) - Line.GetPosition(1);
            player.AddForce(V3 * Speed * Time.deltaTime, ForceMode.VelocityChange);
            LineMaterial.mainTextureOffset = new Vector2(OffsetX * OffsetSpeed, 1);
            Grounded.OnAir = true;
        }
        else
        {
            Line.SetPosition(1, Vector3.zero);
            OffsetX = 1;
            LineMaterial.mainTextureOffset = new Vector2(1, 1);
        }
    }
}
