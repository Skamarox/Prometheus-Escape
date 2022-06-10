using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HookCheck
{
    public static bool IsRoof(Transform transform, Vector3 Direction, float Length)
    {
        RaycastHit hit;
        if (Physics.Raycast(GetRay(transform.position, Direction), out hit, Length, GetLayer()))
            return true;
        return false;
    }

    public static Vector3 RoofPosition(Transform transform, Vector3 Direction)
    {
        RaycastHit hit;
        if (Physics.Raycast(GetRay(transform.position, Direction), out hit, Mathf.Infinity, GetLayer()))
                return hit.point;
        return Vector3.zero;
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
