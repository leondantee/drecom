#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00153f54
// Address: 0x153f54 - 0x15414c
void entry_00153f54_0x153f54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153f54_0x153f54");
#endif

    ctx->pc = 0x153f54u;

    // 0x153f54: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x153f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x153f58: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153f58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153f5c: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x153f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153f60: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x153f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153f64: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x153f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x153f68: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x153f68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x153f6c: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x153f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x153f70: 0x24c2bd00  addiu       $v0, $a2, -0x4300
    ctx->pc = 0x153f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
    // 0x153f74: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x153f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x153f78: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x153f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x153f7c: 0x3c054348  lui         $a1, 0x4348
    ctx->pc = 0x153f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17224 << 16));
    // 0x153f80: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153f80u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153f84: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x153f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153f88: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x153f88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153f8c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x153f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x153f90: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x153f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x153f94: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x153f98: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x153f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x153f9c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x153f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x153fa0: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x153fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x153fa4: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x153fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
    // 0x153fa8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153fa8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153fac: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x153facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153fb0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x153fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x153fb4: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x153fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x153fb8: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x153fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x153fbc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x153fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x153fc0: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x153fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x153fc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x153fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x153fc8: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x153fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x153fcc: 0x3c053f48  lui         $a1, 0x3F48
    ctx->pc = 0x153fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16200 << 16));
    // 0x153fd0: 0x34a4c8c9  ori         $a0, $a1, 0xC8C9
    ctx->pc = 0x153fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51401);
    // 0x153fd4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153fd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153fd8: 0x8e0615b0  lw          $a2, 0x15B0($s0)
    ctx->pc = 0x153fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153fdc: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x153fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x153fe0: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x153fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x153fe4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x153fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x153fe8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x153fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x153fec: 0x24a4bd00  addiu       $a0, $a1, -0x4300
    ctx->pc = 0x153fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x153ff0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x153ff4: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x153ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x153ff8: 0x3c043f48  lui         $a0, 0x3F48
    ctx->pc = 0x153ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16200 << 16));
    // 0x153ffc: 0x3486c8c9  ori         $a2, $a0, 0xC8C9
    ctx->pc = 0x153ffcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51401);
    // 0x154000: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x154000u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154004: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x154004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154008: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x154008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x15400c: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x15400cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x154010: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x154010u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x154014: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x154018: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x154018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x15401c: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x15401cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x154020: 0xe4c00084  swc1        $f0, 0x84($a2)
    ctx->pc = 0x154020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 132), bits); }
    // 0x154024: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x154024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x154028: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15402c: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x15402cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154030: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x154030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x154034: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x154034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x154038: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x154038u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x15403c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x15403cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x154040: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x154040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x154044: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x154044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x154048: 0xe4a00088  swc1        $f0, 0x88($a1)
    ctx->pc = 0x154048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 136), bits); }
    // 0x15404c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x15404cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x154050: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154054: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154058: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15405c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x15405cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154060: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x154060u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x154064: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x154068: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x154068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x15406c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x15406cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154070: 0xe4a00070  swc1        $f0, 0x70($a1)
    ctx->pc = 0x154070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
    // 0x154074: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x154074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x154078: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x154078u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15407c: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x15407cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154080: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x154080u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x154084: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x154084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x154088: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x154088u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15408c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x15408cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x154090: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x154090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x154094: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x154094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x154098: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x154098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x15409c: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x15409cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
    // 0x1540a0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1540a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1540a4: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1540a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1540a8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1540a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1540ac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1540acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1540b0: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1540b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1540b4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1540b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1540b8: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x1540b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1540bc: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1540bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1540c0: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x1540c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x1540c4: 0x3c053f48  lui         $a1, 0x3F48
    ctx->pc = 0x1540c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16200 << 16));
    // 0x1540c8: 0x34a3c8c9  ori         $v1, $a1, 0xC8C9
    ctx->pc = 0x1540c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51401);
    // 0x1540cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1540ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1540d0: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1540d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1540d4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1540d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1540d8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1540d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1540dc: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1540dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1540e0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1540e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1540e4: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x1540e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1540e8: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1540e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1540ec: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x1540ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x1540f0: 0x3c033f48  lui         $v1, 0x3F48
    ctx->pc = 0x1540f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16200 << 16));
    // 0x1540f4: 0x3464c8c9  ori         $a0, $v1, 0xC8C9
    ctx->pc = 0x1540f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51401);
    // 0x1540f8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1540f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1540fc: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x1540fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154100: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x154100u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x154104: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x154104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x154108: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x154108u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15410c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x15410cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x154110: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x154110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x154114: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x154114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x154118: 0xe4a00084  swc1        $f0, 0x84($a1)
    ctx->pc = 0x154118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 132), bits); }
    // 0x15411c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15411cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x154120: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154120u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154124: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154128: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15412c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x15412cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154130: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x154130u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x154134: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x154138: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x154138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x15413c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x15413cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154140: 0xe4a00088  swc1        $f0, 0x88($a1)
    ctx->pc = 0x154140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 136), bits); }
    // 0x154144: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x154144u;
    {
        const bool branch_taken_0x154144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154144) {
            ctx->pc = 0x154468u;
            return;
        }
    }
    ctx->pc = 0x15414Cu;
}
