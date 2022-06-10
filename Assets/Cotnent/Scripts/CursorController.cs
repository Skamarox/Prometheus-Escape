using UnityEngine;

public class CursorController : MonoBehaviour
{
    private void Start()
    {
        Condition.AddListener(Condition.Begin, GameBegin);
        Condition.AddListener(Condition.Loss, GameLoss);
    }

    private void GameBegin()
    {
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
    }

    private void GameLoss()
    {
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
    }
}
