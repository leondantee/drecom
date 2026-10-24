#!/usr/bin/env python3
"""Read-only inventory of original disc files; do not export copyrighted assets."""
import argparse
import json
import hashlib
from pathlib import Path

KNOWN = {".FSD": "room candidate (unverified)", ".PLD": "player candidate (unverified)",
         ".PWS": "weapon candidate (unverified)", ".EMD": "enemy candidate (unverified)",
         ".TM2": "TIM2 candidate", ".ANM": "animation candidate (unverified)",
         ".XAG": "audio candidate", ".PSS": "PS2 video candidate",
         ".IRX": "IOP module", ".IMG": "IOP image"}

def inspect(root):
    root = Path(root)
    if not root.is_dir():
        raise ValueError(f"missing directory: {root}")
    items = []
    for path in sorted(p for p in root.rglob("*") if p.is_file()):
        relative = path.relative_to(root).as_posix()
        with path.open("rb") as source:
            magic = source.read(4)
        item = {"path": relative, "bytes": path.stat().st_size,
                "type_guess": KNOWN.get(path.suffix.upper(), "unclassified")}
        if path.suffix.upper() == ".TM2":
            item["tim2_magic_verified"] = magic == b"TIM2"
        items.append(item)
    return {"root": str(root), "files": items, "count": len(items),
            "warning": "names and extension guesses do NOT prove meshes or animations were decoded"}

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("root", type=Path)
    parser.add_argument("--output", type=Path)
    args = parser.parse_args()
    result = inspect(args.root)
    serialized = json.dumps(result, indent=2, ensure_ascii=False)
    if args.output:
        args.output.write_text(serialized + "\n", encoding="utf-8")
    else:
        print(serialized)

if __name__ == "__main__":
    main()
