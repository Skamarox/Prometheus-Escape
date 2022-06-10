using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Hook : MonoBehaviour
{
    private bool IsHook = false;
    private float HookLength = 45f;
    [SerializeField] private LineRenderer Line;
    [SerializeField] private new CustomAnimation animation;
    private new AudioEffect audio;

    private void Start()
    {
        audio = new AudioEffect(GetComponent<AudioSource>());
        Condition.AddListener(Condition.Begin, GameBegin);
        Condition.AddListener(Condition.Loss, GameLoss);
    }

    private void GameBegin()
    {
        IsHook = true;
    }

    private void GameLoss()
    {
        IsHook = false;
    }

    private void Update()
    {
        if (IsHook == false)
            return;
        if(Input.GetMouseButtonDown(0))
        {
            Vector3 Direction = transform.TransformDirection(Vector3.forward);
            if (HookCheck.IsRoof(transform, Direction, HookLength))
            {
                animation.SetBool("Idle", false);
                animation.SetBool("Shoot",true);
                Line.SetPosition(0, HookCheck.RoofPosition(transform, Direction));
                Line.SetPosition(1, transform.parent.position);
                Grounded.OnHook = true;
                animation.SetBool("Shooting", true);
                audio.PlayHook();
            }
        }
        if (Input.GetMouseButtonUp(0))
        {
            Line.SetPosition(0, Vector3.zero);
            Grounded.OnHook = false;
            animation.SetBool("Shoot", false);
            animation.SetBool("Shooting", false);
            animation.SetBool("Idle", true);
        }
    }
}
