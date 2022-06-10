using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using LootLocker.Requests;

public class UserName : MonoBehaviour
{
    public TMP_InputField inputField;

    public void InputNameField() 
    {
        LootLockerSDKManager.SetPlayerName(inputField.text, (response) => 
        {
            if (response.success)
            {
                Debug.Log($"Username is {inputField.text}");
            }
            else
            {
                Debug.Log("Error " + response.Error);
            }
        });
    }
}
