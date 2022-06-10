using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeghtViewer : MonoBehaviour
{

    void Update()
    {
        if(transform.position.y < -20f)
        {
            Player.Loss(true);
        }
    }
}
