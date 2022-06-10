using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LootLocker.Requests;
using TMPro;

public class LeaderBoard : MonoBehaviour
{
    private int LeaderBoardID = 3444;
    public TextMeshProUGUI PlayerNames;
    public TextMeshProUGUI PlayerScores;

    public IEnumerator SubmitScoreRoutine(int scoreToUpLoad)
    {
        bool done = false;
        string PlayerId = PlayerPrefs.GetString("PlayerId");
        LootLockerSDKManager.SubmitScore(PlayerId, scoreToUpLoad, LeaderBoardID, (response) =>
        {
            if (response.success)
            {
                done = true;
            }
            else
            {
                done = true;
            }
        });

        yield return new WaitWhile(() => done == false);
    }

    public IEnumerator ShowHighScorePlayers(TextMeshProUGUI Names = null, TextMeshProUGUI Scores= null)
    {
        Names = Names == null ? PlayerNames : Names;
        Scores = Scores == null ? PlayerScores : Scores;
        bool done = false;
        LootLockerSDKManager.GetScoreListMain(LeaderBoardID, 10, 0, (response) =>
        {
            if(response.success)
            {
                string tempPlayerName = "Name\n";
                string tempPlayerScore = "Score\n";
                LootLockerLeaderboardMember[] members = response.items;

                for(int i = 0; i < members.Length; i++)
                {
                    tempPlayerName += members[i].rank + ". ";
                    if(members[i].player.name != "")
                    {
                        tempPlayerName += members[i].player.name;
                    }
                    else
                    {
                        tempPlayerName += members[i].player.id;
                    }
                    tempPlayerScore += GetPlayerTime(members[i].score) + "\n";
                    tempPlayerName += "\n";
                }
                done = true;
                Names.text = tempPlayerName;
                Scores.text = tempPlayerScore;
            }
            else
            {
                done = true;
            }
        });
        yield return new WaitWhile(() => done == false);
    }

    private string GetPlayerTime(int score)
    {
        bool Calculate = false;
        int CalculateScore = 90000 - score;
        int CalculateSecond = 0;
        int CalculateMillisecond = 0;
        while (Calculate == false)
        {
            if ((CalculateScore - 60) > 0)
            {
                CalculateSecond++;
            }
            else if ((CalculateScore - 60) == 0)
            {
                CalculateMillisecond = 0;
                Calculate = true;
            }
            else if (((CalculateScore - 60) < 60))
            {
                CalculateMillisecond = CalculateScore;
                Calculate = true;
            }
            CalculateScore -= 60;
        }

        return $"{CalculateSecond},{CalculateMillisecond}";
    }

}
