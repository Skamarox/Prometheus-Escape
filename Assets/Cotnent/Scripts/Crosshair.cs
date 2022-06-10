using UnityEngine;

public class Crosshair : MonoBehaviour
{
    private Transform player;

    private float ScreenX;
    private float ScreenY;

    private Texture2D crosshair;
    private Texture2D SimpleCrosshair;
    private Texture2D HookCrosshair;
    private Texture2D RocketLouncherCrosshair;

    private float CrosshairWidth;
    private float CrosshairHeight;

    private float SimpleCrosshairWidth = 35;
    private float SimpleCrosshairHeight = 35;

    private float HookCrosshairWidth = 100;
    private float HookCrosshairHeight = 100;

    private float RocketLouncherCrosshairWidth = 100;
    private float RocketLouncherCrosshairHeight = 100;

    private float RocketLauncherLength = 4f;
    private float HookLength = 45f;

    private void Start()
    {
        player = Camera.main.transform;
        ScreenX = Screen.width / 2;
        ScreenY = Screen.height / 2;
        SimpleCrosshair = Resources.Load<Texture2D>("Crosshair");
        HookCrosshair = Resources.Load<Texture2D>("HookCrosshair");
        RocketLouncherCrosshair = Resources.Load<Texture2D>("RocketLounchCrosshair");
        crosshair = SimpleCrosshair;
        CrosshairWidth = SimpleCrosshairWidth;
        CrosshairHeight = SimpleCrosshairHeight;
    }

    private void SetHook()
    {
        crosshair = HookCrosshair;
        CrosshairWidth = HookCrosshairWidth;
        CrosshairHeight = HookCrosshairHeight;
    }

    private void SetSimple()
    {
        crosshair = SimpleCrosshair;
        CrosshairWidth = SimpleCrosshairWidth;
        CrosshairHeight = SimpleCrosshairHeight;
    }

    private void SetRocketLaunch()
    {
        crosshair = RocketLouncherCrosshair;
        CrosshairWidth = RocketLouncherCrosshairWidth;
        CrosshairHeight = RocketLouncherCrosshairHeight;
    }

    private void OnGUI()
    {
        GUI.Label(new Rect(ScreenX - CrosshairWidth / 2, ScreenY - CrosshairHeight / 2, CrosshairWidth, CrosshairHeight), crosshair);
    }

    private void FixedUpdate()
    {
        ScreenX = Screen.width / 2;
        ScreenY = Screen.height / 2;
        SetCrosshair();
    }

    private void SetCrosshair()
    {
        RaycastHit hit;
        Vector3 Direction = player.TransformDirection(Vector3.forward);
        Ray ray = new Ray(player.position, Direction);
        int LayerMask = 1 << 6;
        LayerMask = ~LayerMask;
        if (Physics.Raycast(ray, out hit, Mathf.Infinity, LayerMask))
        {
            if (hit.distance <= RocketLauncherLength)
            {
                SetRocketLaunch();
            }
            else if(hit.distance <= HookLength)
            {
                SetHook();
            }
            else
                SetSimple();
        }
    }
}
