using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CustomAnimation : MonoBehaviour
{
    private Animator animator;

    private void Start()
    {
        animator = GetComponent<Animator>();
    }

    public void SetBool(string AnmationName, bool active)
    {
        animator.SetBool(AnmationName, active);
    }

    public void SetTrigger(string AnimationName)
    {
        animator.SetTrigger(AnimationName);
    }
}
