import tempfile
import unittest
from pathlib import Path
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from inspect_disc import inspect

class InventoryTests(unittest.TestCase):
    def test_magic_not_extension(self):
        with tempfile.TemporaryDirectory() as folder:
            root = Path(folder)
            (root / "good.TM2").write_bytes(b"TIM2" + bytes(20))
            (root / "bad.TM2").write_bytes(b"NOPE")
            (root / "R100.FSD").write_bytes(b"???")
            found = {item["path"]: item for item in inspect(root)["files"]}
            self.assertTrue(found["good.TM2"]["tim2_magic_verified"])
            self.assertFalse(found["bad.TM2"]["tim2_magic_verified"])
            self.assertIn("unverified", found["R100.FSD"]["type_guess"])

if __name__ == "__main__":
    unittest.main()
