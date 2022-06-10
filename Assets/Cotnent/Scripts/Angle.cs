using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Angle
{
    public static Vector3 AngleNormal(Transform transform, Vector3 Direction, float Length) 
    {
        RaycastHit hit;
        if (Physics.Raycast(GetRay(transform.position, Direction), out hit, Length, GetLayer()))
            return hit.normal;
        return Direction;
    }

    public static Vector3 AngleDirection(Transform transform, Vector3 Direction, float Length, float Coef) 
    {
        RaycastHit hit;
        if (Physics.Raycast(GetRay(transform.position, Direction), out hit, Length, GetLayer()))
        {
            float angle = transform.localEulerAngles.x;
            if (angle > 74f)
                return Vector3.down;
            else if (angle < 35f)
                return Vector3.zero;
            else
            return -transform.up * Coef;
        }
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
