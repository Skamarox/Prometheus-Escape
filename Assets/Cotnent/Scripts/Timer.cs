using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Timer : MonoBehaviour
{
    private int second = 0;
    [SerializeField] private TMP_Text timerText;
    private static int scoreTime = 0;
    private static readonly int SecondInMillisecondForLoss = 90000;
    private static int millisecond = 0;
    private readonly int SecondInMillicecond = 60;
    private readonly int SecondForLoss = 90;
    public static bool End = false;

    private void Awake()
    {
        Condition.AddListener(Condition.Begin, GameBegin);
        Condition.AddListener(Condition.Loss, GameLoss);
    }

    private void GameBegin() 
    {
        scoreTime = 0;
        millisecond = 0;
        second = 0;
        StartCoroutine(startTimer());
    }

    private void GameLoss()
    {
        StopAllCoroutines();
    }

    public static int GetTimer() 
    {
        return SecondInMillisecondForLoss - scoreTime;
    }

    private IEnumerator startTimer() 
    {
        while(second < SecondForLoss) 
        {
            if (millisecond < SecondInMillicecond)
            {
                millisecond += 1;
            }
            else
            {
                millisecond = 0;
                second++;
            }
            scoreTime++;
            timerText.text = $"Time: 90 / {second},{millisecond}";
            yield return new WaitForSeconds(0.01f);
        }
        Player.Loss(true);
    }
}
