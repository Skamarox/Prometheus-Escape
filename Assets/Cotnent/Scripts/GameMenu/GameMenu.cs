using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameMenu : MonoBehaviour
{
    public GameObject MenuWindow;
    [SerializeField] private CameraRotate mouse;
    [SerializeField] private Hook hook;
    [SerializeField] private Shoot shoot;
    [SerializeField] private Slider slider;
    [SerializeField] private Toggle musicToggle;
    [SerializeField] private Toggle soundToggle;
    [SerializeField] private AudioSource audioSource;
    private bool active = false;

    private void Start()
    {
        mouse.SetMouseSensetivity(slider.value);
    }

    void Update()
    {
        if(Input.GetKeyDown(KeyCode.P))
        {
            active = !active;
            Activator(active);
        }
    }

    public void OnMouseValueChange() 
    {
        mouse.SetMouseSensetivity(slider.value);
    }

    public void MusicToggle()
    { 
        audioSource.enabled = musicToggle.isOn;
    }

    public void SoundToggle() 
    {
        AudioEffect.Mute(!soundToggle.isOn);
    }

    public void Return()
    {
        active = false;
        Activator(active);
    }

    public void Exit()
    {
        Application.Quit();
    }

    private void Activator(bool active)
    {
        if (active == false)
        {
            Cursor.visible = false;
            Cursor.lockState = CursorLockMode.Locked;
            mouse.enabled = true;
            hook.enabled = true;
            shoot.enabled = true;
        }
        else
        {
            Cursor.visible = true;
            Cursor.lockState = CursorLockMode.None;
            mouse.enabled = false;
            hook.enabled = false;
            shoot.enabled = false;
        }
        MenuWindow.SetActive(active);
    }
}
