#!/usr/bin/env python3
"""Local-only DMC static geometry -> Unity OBJ bridge.

Requires the user's DMC Viewer modules (dmc_fsd_room.py, dmc_emd_model.py,
dmc_blender_export.py, dmc_texture.py). No original assets are committed.
Materials are explicitly PLACEHOLDERS until texture mapping is validated.
"""
import argparse
import json
import sys
from pathlib import Path


def convert(source: Path, viewer_dir: Path, destination: Path, name: str, scale: float):
    if name not in {"scene", "player"}:
        raise ValueError("Output name must be scene or player")
    if not source.is_file():
        raise FileNotFoundError(source)
    if not viewer_dir.is_dir():
        raise FileNotFoundError(viewer_dir)
    sys.path.insert(0, str(viewer_dir.resolve()))
    from dmc_fsd_room import parse_fsd_room
    from dmc_emd_model import parse_emd_model
    from dmc_blender_export import BlenderExportOptions, export_model_for_blender

    extension = source.suffix.upper()
    data = source.read_bytes()
    if extension == ".FSD":
        room = parse_fsd_room(data)
        model = room.model
    elif extension == ".EMD":
        model = parse_emd_model(data)
    else:
        raise ValueError("Only validated FSD/EMD parser paths supported; PLD requires its own parser")
    if model is None or not model.mesh_parts:
        raise ValueError("No reconstructible geometry: export aborted")
    options = BlenderExportOptions(
        topology="flagged_strip", scale=scale, axis_mode="native",
        export_obj=True, export_gltf=False
    )
    result = export_model_for_blender(
        model, {}, destination, name=name, options=options,
        source=source.name, extra_metadata={"texture_status": "PROVISIONAL"}
    )
    if result["stats"]["triangles"] <= 0:
        raise ValueError("Export contained zero triangles")
    info = {
        "source_filename": source.name,
        "model_status": "static geometry decoded by user viewer parser",
        "textures": "PROVISIONAL (generated checkerboards, not original)",
        "scale": scale,
        "axis_mode": "native (PS2 viewer Y-up; calibration still required)",
        "stats": result["stats"],
    }
    (destination / f"{name}_provenance.json").write_text(
        json.dumps(info, indent=2) + "\n", encoding="utf-8"
    )
    return info


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("source", type=Path, help="Local original R104.FSD or EMxx.EMD")
    p.add_argument("--viewer-dir", required=True, type=Path, help="Directory containing viewer .py modules")
    p.add_argument("--output", type=Path, default=Path("unity/Assets/Resources/Recovered"))
    p.add_argument("--name", choices=["scene", "player"], default="scene")
    p.add_argument("--scale", type=float, default=0.001)
    args = p.parse_args()
    print(json.dumps(convert(args.source, args.viewer_dir, args.output, args.name, args.scale), indent=2))


if __name__ == "__main__":
    main()
