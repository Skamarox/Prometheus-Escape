using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

public class Shoot : MonoBehaviour
{
    private Rigidbody player;
    private float ReflectSpeed = 65f;
    private float Coef = 2.5f;
    private float Length = 4f;
    [SerializeField] private ParticleSystem ExplosionEffect;
    [SerializeField] private new CustomAnimation animation;
    private new AudioEffect audio;

    private void Start()
    {
        audio = new AudioEffect(GetComponent<AudioSource>());
        player = Player.GetPlayer().GetComponent<Rigidbody>();
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(1))
        {

            Vector3 Direction = transform.TransformDirection(Vector3.forward);
            if (ShootCheck.IsShoot(transform, Direction, Length) == false)
                return;

            animation.SetTrigger("Shoot");
            player.AddForce(Vector3.Reflect(Angle.AngleDirection(transform, Direction, Length, Coef), Angle.AngleNormal(transform, Direction, Length)) * ReflectSpeed, ForceMode.VelocityChange);
            ExplosionEffect.transform.position = ExplosionPosition.SetPosition(transform, Direction, Length);
            ExplosionEffect.Play();
            audio.PlayRocketLaunch();
            animation.SetTrigger("Idle");
        }
    }
}
