using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class WinEvent : MonoBehaviour
{
    [SerializeField] private GameObject WinWindow;
    [SerializeField] private Button Restart;
    [SerializeField] private TextMeshProUGUI PlayerNames;
    [SerializeField] private TextMeshProUGUI PlayerScores;
    [SerializeField] private LeaderBoard leaderBoard;
    [SerializeField] private GameObject timer;
    [SerializeField] private Restart restart;
    [SerializeField] private GameMenu gameMenu;
    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Player")
        {
            StartCoroutine(ShowLeaderboard());
        }
    }

    public IEnumerator ShowLeaderboard() 
    {
        WinWindow.SetActive(true);
        Restart.onClick.AddListener(RestartClick);
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        restart.enabled = false;
        timer.SetActive(false);
        gameMenu.enabled = false;
        yield return leaderBoard.SubmitScoreRoutine(Timer.GetTimer());
        yield return leaderBoard.ShowHighScorePlayers(PlayerNames, PlayerScores);
    }

    private void RestartClick()
    {
        WinWindow.SetActive(false);
        timer.SetActive(true);
        restart.enabled = true;
        gameMenu.enabled = true;
        Player.Loss(true);
    }
}
