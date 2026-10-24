#!/usr/bin/env python3
"""Evidence-based, read-only probe of PS2 disc extraction.

No reverse-engineered geometry is claimed. No copyrighted bytes are exported.
Usage: python unity/Tools/probe_original_assets.py drecom/Game/Extracted --output local-probe.json
"""
import argparse
import hashlib
import json
from collections import Counter
from pathlib import Path

LABELS = {
    ".FSD": "room container candidate",
    ".PLD": "player container candidate",
    ".EMD": "enemy container candidate",
    ".PWS": "weapon container candidate",
    ".TM2": "TIM2 image candidate",
    ".ANM": "animation candidate",
    ".XAG": "audio candidate",
    ".PSS": "PS2 movie candidate",
    ".IRX": "IOP executable candidate",
    ".ELF": "ELF executable candidate",
}


def probe(root, hash_files=False):
    root = Path(root)
    if not root.is_dir():
        raise ValueError("Extraction directory not found: " + str(root))
    files = []
    kinds = Counter()
    for path in sorted(p for p in root.rglob("*") if p.is_file()):
        with path.open("rb") as handle:
            signature = handle.read(16)
            digest = None
            if hash_files:
                sha = hashlib.sha256()
                sha.update(signature)
                for block in iter(lambda: handle.read(1024 * 1024), b""):
                    sha.update(block)
                digest = sha.hexdigest()
        ext = path.suffix.upper()
        evidence = []
        if signature[:4] == b"TIM2":
            evidence.append("TIM2 magic")
        if signature[:4] == b"\\x7fELF":
            evidence.append("ELF magic")
        # Extension-only matches are NEVER treated as decoded resources.
        entry = {
            "path": path.relative_to(root).as_posix(),
            "bytes": path.stat().st_size,
            "extension": ext,
            "candidate_role": LABELS.get(ext, "unknown"),
            "verified_signatures": evidence,
            "decoded_mesh": False,
            "decoded_animation": False,
        }
        if digest is not None:
            entry["sha256"] = digest
        files.append(entry)
        kinds[ext or "(none)"] += 1
    return {
        "schema_version": 1,
        "file_count": len(files),
        "extensions": dict(sorted(kinds.items())),
        "files": files,
        "limitations": [
            "Names and extensions do not establish contents.",
            "TIM2/ELF magic does not prove any Unity-compatible asset exists.",
            "No extraction, conversion or redistribution is performed.",
        ],
    }


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("root", type=Path)
    parser.add_argument("--output", type=Path)
    parser.add_argument("--sha256", action="store_true", help="Hash each complete input file")
    args = parser.parse_args()
    result = probe(args.root, args.sha256)
    data = json.dumps(result, indent=2, ensure_ascii=False) + "\n"
    if args.output:
        args.output.parent.mkdir(parents=True, exist_ok=True)
        args.output.write_text(data, encoding="utf-8")
        print("Local inventory written to", args.output)
    else:
        print(data)


if __name__ == "__main__":
    main()
