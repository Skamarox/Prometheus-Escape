using System.Collections;
using UnityEngine;
using UnityEngine.Events;

public class Condition : MonoBehaviour
{
    public static UnityEvent Loss = new UnityEvent();
    public static UnityEvent Begin = new UnityEvent();
    public LeaderBoard leaderBoard;

    public static void AddListener(UnityEvent GameEvent, UnityAction Action)
    {
        GameEvent.AddListener(Action);
    }

    private void Start()
    {
        StartCoroutine(StartGame());
    }

    private IEnumerator StartGame()
    {
        Time.timeScale = 1f;
        Condition.Begin?.Invoke();

        yield return new WaitWhile(() => Player.Loss() == false);

        Player.GetRigidbody().Sleep();
        Loss?.Invoke();
        Time.timeScale = 0f;

        Player.Loss(false);
        StartCoroutine(StartGame());
    } 
}
