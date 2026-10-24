using System.IO;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;

public static class DrecomSceneTools
{
    [MenuItem("DRECOM/Create Test Scene")]
    public static void CreateScene()
    {
        if (!Directory.Exists("Assets/Scenes")) Directory.CreateDirectory("Assets/Scenes");
        var scene = EditorSceneManager.NewScene(NewSceneSetup.EmptyScene, NewSceneMode.Single);
        var bootstrap = new GameObject("DRECOM_BOOTSTRAP_PROVISIONAL");
        bootstrap.AddComponent<DrecomBootstrap>();
        var lightObject = new GameObject("PROVISIONAL_DIRECTIONAL_LIGHT");
        var light = lightObject.AddComponent<Light>();
        light.type = LightType.Directional;
        lightObject.transform.rotation = Quaternion.Euler(48f, -25f, 0f);
        EditorSceneManager.SaveScene(scene, "Assets/Scenes/Bootstrap.unity");
        EditorBuildSettings.scenes = new[] { new EditorBuildSettingsScene("Assets/Scenes/Bootstrap.unity", true) };
        Debug.Log("Created provisional bootstrap scene. No original stage has been decoded.");
    }

    [MenuItem("DRECOM/Build Windows x64")]
    public static void BuildWindows()
    {
        if (!File.Exists("Assets/Scenes/Bootstrap.unity"))
        {
            Debug.LogError("Create test scene before building.");
            return;
        }
        Directory.CreateDirectory("Builds/Windows");
        BuildPipeline.BuildPlayer(
            new[] { "Assets/Scenes/Bootstrap.unity" },
            "Builds/Windows/DrecomTest.exe",
            BuildTarget.StandaloneWindows64,
            BuildOptions.None);
    }
}
