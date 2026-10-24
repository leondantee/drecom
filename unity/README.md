# DRECOM Unity bridge (independent of PS2Recomp)

**State:** first executable test scaffold, NOT a playable reconstruction of Devil May Cry. No proprietary model/scene has been decoded yet.

## Evidence from main (2026-10-24)
- Original disc data: `drecom/Game/Extracted/DATA/FSD/R100.FSD` (room-package candidate), `PLD/PL00.PLD` (player-package candidate), `EMD/EM00.EMD` (enemy-package candidate). Roles are hypotheses based on directory names, NOT decoded geometry.
- TIM2 candidates: `DATA/ETC/*.TM2`; individual header signatures must be verified.
- Recompiled source references: `drecom/Game/Recompiled/output/Camera_init_0x17df90.cpp`, `Check_walk_run_0x15eb30.cpp`. These are PS2 runtime state-machine translations, not direct C#.
- Other types: `XAG` audio, `PSS` movies, `ANM` animation candidates, `IRX` IOP modules.
- The source tree contains the original files; **do not redistribute them with publicly built artifacts**.

## Unity bootstrap
1. Open this `unity` folder as a Unity 6 project (Editor installation required).
2. Let scripts compile; from the menu select **DRECOM > Create Test Scene**.
3. Open `Assets/Scenes/Bootstrap.unity` and press Play. WASD/arrows move; Shift runs; Space jumps.
4. The gray capsule and gray floor are **provisional** test objects, not recovered assets.
5. After a locally verified extraction converts an original room into a Unity-importable OBJ/FBX, put it at `Assets/Resources/Recovered/scene.obj` (or .fbx) and repeat. Unity will replace the provisional floor with the imported model; an actual collider is generated if meshes exist. This does **not** validate scale, materials, scene or collision fidelity automatically.
6. Likewise import a verified original player model to `Assets/Resources/Recovered/player.fbx` or .obj to replace the visible capsule.
7. **DRECOM > Build Windows x64** builds only on Windows with a licensed/installed compatible Unity Editor and Windows build support.

## Read-only evidence inspection
Run `python unity/Tools/inspect_disc.py drecom/Game/Extracted --output local-inventory.json` from repository root. This only inventories and checks TIM2 magic: it does not pretend to decode FSD/PLD/EMD. Never commit exported proprietary content. Use `python -m unittest discover -s unity/Tools/tests` for standard-library tests.

## Fidelity / provenance
| Subsystem | State | Source |
| --- | --- | --- |
| Disc archive paths | Original files present | `drecom/Game/Extracted` |
| Camera algorithms | Recompiled reference only | `Camera_init_0x17df90.cpp` |
| Walk/run algorithms | Recompiled reference only | `Check_walk_run_0x15eb30.cpp` |
| Room mesh/texture/animation | Unknown until decoder verified | `R100.FSD`, etc |
| Camera, controls, gravity, collider | Provisional C# | `DrecomBootstrap.cs` |
| Executable/scene runtime | Not tested in Unity CI yet | Unity Editor required |

Do not add original files to the new Unity tree; maintain original source in existing path, and process the user's own local copy into ignored folders. Existing PS2Recomp files are untouched.
