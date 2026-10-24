using UnityEngine;

// PROVISIONAL test harness. Nothing here claims to implement original DMC logic.
public sealed class DrecomBootstrap : MonoBehaviour
{
    private CharacterController controller;
    private Transform actor;
    private Transform followCamera;
    private Vector3 verticalVelocity;
    private const float Gravity = -20f;

    private void Start()
    {
        GameObject stage = Resources.Load<GameObject>("Recovered/scene");
        if (stage != null)
        {
            GameObject level = Instantiate(stage);
            level.name = "RECOVERED_SCENE_UNVERIFIED_SCALE";
            foreach (MeshFilter filter in level.GetComponentsInChildren<MeshFilter>())
            {
                if (filter.sharedMesh == null || filter.GetComponent<Collider>() != null) continue;
                filter.gameObject.AddComponent<MeshCollider>().sharedMesh = filter.sharedMesh;
            }
            Debug.LogWarning("Imported scene is UNVERIFIED: check scale, axis, mesh and collision.");
        }
        else
        {
            GameObject ground = GameObject.CreatePrimitive(PrimitiveType.Cube);
            ground.name = "PROVISIONAL_FLOOR_NOT_ORIGINAL";
            ground.transform.position = new Vector3(0f, -0.5f, 0f);
            ground.transform.localScale = new Vector3(30f, 1f, 30f);
            Debug.LogWarning("No recovered scene imported. Showing PROVISIONAL floor.");
        }

        GameObject player = new GameObject("DRECOM_PLAYER_CONTROLLER_PROVISIONAL");
        actor = player.transform;
        actor.position = new Vector3(0f, 2f, 0f);
        controller = player.AddComponent<CharacterController>();
        controller.height = 1.8f;
        controller.radius = 0.35f;
        controller.center = new Vector3(0f, 0.9f, 0f);

        GameObject originalPlayerModel = Resources.Load<GameObject>("Recovered/player");
        GameObject visible;
        if (originalPlayerModel != null)
        {
            visible = Instantiate(originalPlayerModel, actor);
            Debug.LogWarning("Recovered player mesh has not been calibrated to original animations/scale.");
        }
        else
        {
            visible = GameObject.CreatePrimitive(PrimitiveType.Capsule);
            visible.name = "PROVISIONAL_PLAYER_NOT_ORIGINAL";
            visible.transform.SetParent(actor, false);
            visible.transform.localPosition = new Vector3(0f, 0.9f, 0f);
            Collider proxyCollider = visible.GetComponent<Collider>();
            if (proxyCollider != null) Destroy(proxyCollider);
        }

        Camera cam = Camera.main;
        if (cam == null)
        {
            GameObject cameraObject = new GameObject("PROVISIONAL_FOLLOW_CAMERA");
            cam = cameraObject.AddComponent<Camera>();
            cameraObject.tag = "MainCamera";
            cameraObject.AddComponent<AudioListener>();
        }
        followCamera = cam.transform;
        followCamera.position = actor.position + new Vector3(0f, 4f, -7f);
        cam.nearClipPlane = 0.05f;
    }

    private void Update()
    {
        if (controller == null) return;
        float horizontal = Input.GetAxisRaw("Horizontal");
        float forward = Input.GetAxisRaw("Vertical");
        Vector3 move = Vector3.ClampMagnitude(new Vector3(horizontal, 0f, forward), 1f);
        if (move.sqrMagnitude > 0.001f)
        {
            actor.rotation = Quaternion.Slerp(actor.rotation, Quaternion.LookRotation(move), 12f * Time.deltaTime);
        }
        float speed = Input.GetKey(KeyCode.LeftShift) ? 6f : 3.5f; // PROVISIONAL, not reverse-engineered
        if (controller.isGrounded && verticalVelocity.y < 0f) verticalVelocity.y = -1f;
        if (controller.isGrounded && Input.GetKeyDown(KeyCode.Space)) verticalVelocity.y = 7f;
        verticalVelocity.y += Gravity * Time.deltaTime;
        controller.Move((move * speed + verticalVelocity) * Time.deltaTime);
    }

    private void LateUpdate()
    {
        if (actor == null || followCamera == null) return;
        Vector3 target = actor.position + new Vector3(0f, 3.5f, -6f);
        followCamera.position = Vector3.Lerp(followCamera.position, target, Mathf.Clamp01(7f * Time.deltaTime));
        followCamera.LookAt(actor.position + new Vector3(0f, 1f, 0f));
    }
}
