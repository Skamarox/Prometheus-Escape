using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LootLocker.Requests;

public class PlayerManager : MonoBehaviour
{
    public LeaderBoard leaderBoard;

    private void Start()
    {
        Grounded.OnAir = false;
        Grounded.OnHook = false;
        StartCoroutine(SetupCoroutine());
    }

    private IEnumerator SetupCoroutine()
    {
        yield return StartSession();
        yield return leaderBoard.ShowHighScorePlayers();
    }

    private IEnumerator StartSession()
    {
        bool done = false;
        LootLockerSDKManager.StartGuestSession((response) =>
        {
            if(response.success)
            {
                done = true;
                PlayerPrefs.SetString("PlayerID", response.player_id.ToString());
            }
            else 
            {
                done = true;
            }
        });
        yield return new WaitWhile(() => done = false);
    }
}
