using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grounded
{
    public static bool Ground = false;
    public static bool OnAir = false;
    public static bool OnHook = false;
    public static float GroundDistance = 2f;

    public static bool IsGround(Transform transform, float Length)
    {
        RaycastHit hit;
        if (Physics.Raycast(GetRay(transform.position, -transform.up), out hit, Length, GetLayer()))
        {
            OnAir = false;
            OnHook = false;
            return true;
        }
        return false;
    }

    private static Ray GetRay(Vector3 position, Vector3 Direction)
    {
        Ray ray = new Ray(position, Direction);
        return ray;
    }

    private static int GetLayer()
    {
        int LayerMask = 1 << 6;
        return ~LayerMask;
    }
}
