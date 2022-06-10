using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExplosionPosition
{
    public static Vector3 SetPosition(Transform transform, Vector3 Direction, float Length)
    {
        RaycastHit hit;
        if (Physics.Raycast(GetRay(transform.position, Direction), out hit, Length, GetLayer()))
            return new Vector3(hit.point.x, hit.point.y, hit.point.z);
        return Direction;
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
