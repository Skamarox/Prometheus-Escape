using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootCheck : MonoBehaviour
{
    public static bool IsShoot(Transform transform, Vector3 Direction, float Length)
    {
        RaycastHit hit;
        Ray ray = new Ray(transform.position, Direction);
        int LayerMask = 1 << 6;
        LayerMask = ~LayerMask;
        if (Physics.Raycast(ray, out hit, Length, LayerMask))
            return true;
        return false;
    }
}
