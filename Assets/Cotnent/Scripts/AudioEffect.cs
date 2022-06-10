using UnityEngine;

public class AudioEffect
{
    private AudioSource audio;

    private AudioClip Hook;
    private AudioClip HookSound 
    {
        get 
        {
            if(Hook == null)
                Hook = Resources.Load<AudioClip>("Hook");
            return Hook;
        }
    }

    private AudioClip Rocket;
    private AudioClip RocketSound
    {
        get
        {
            if (Rocket == null)
                Rocket = Resources.Load<AudioClip>("RocketLaunch");
            return Rocket;
        }
    }

    private static bool IsMute = false;

    public AudioEffect(AudioSource audio)
    {
        this.audio = audio;
    }

    public static void Mute(bool active)
    {
        IsMute = active;
    }

    public void PlayHook() 
    {
        if (IsMute == true)
            return;
        audio.PlayOneShot(HookSound);
    }

    public void PlayRocketLaunch()
    {
        if (IsMute == true)
            return;
        audio.PlayOneShot(RocketSound);
    }
}
