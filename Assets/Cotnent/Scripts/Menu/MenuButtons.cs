using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuButtons : MonoBehaviour
{
    public GameObject NextWindow;

    public void Next(GameObject thisWindow) 
    {
        thisWindow.SetActive(false);
        NextWindow.SetActive(true);
    }

    public void Game() 
    {
        SceneManager.LoadScene(1);
    }
}
