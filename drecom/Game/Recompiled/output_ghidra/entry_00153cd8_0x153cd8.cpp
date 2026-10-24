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

// Function: entry_00153cd8
// Address: 0x153cd8 - 0x153ed0
void entry_00153cd8_0x153cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153cd8_0x153cd8");
#endif

    ctx->pc = 0x153cd8u;

    // 0x153cd8: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x153cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x153cdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153cdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153ce0: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x153ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153ce4: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x153ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x153ce8: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x153ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x153cec: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x153cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x153cf0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x153cf4: 0x2484bd00  addiu       $a0, $a0, -0x4300
    ctx->pc = 0x153cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x153cf8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x153cfc: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x153cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x153d00: 0x3c044366  lui         $a0, 0x4366
    ctx->pc = 0x153d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17254 << 16));
    // 0x153d04: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153d04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153d08: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x153d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153d0c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x153d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x153d10: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x153d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x153d14: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x153d14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x153d18: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x153d18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x153d1c: 0x24c4bd00  addiu       $a0, $a2, -0x4300
    ctx->pc = 0x153d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
    // 0x153d20: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x153d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x153d24: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x153d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x153d28: 0x3c024310  lui         $v0, 0x4310
    ctx->pc = 0x153d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17168 << 16));
    // 0x153d2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153d30: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x153d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153d34: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x153d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x153d38: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x153d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x153d3c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x153d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x153d40: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x153d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x153d44: 0x24a4bd00  addiu       $a0, $a1, -0x4300
    ctx->pc = 0x153d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x153d48: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x153d4c: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x153d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x153d50: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x153d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x153d54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153d54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153d58: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x153d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153d5c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x153d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153d60: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x153d64: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x153d64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x153d68: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x153d6c: 0x2466bd00  addiu       $a2, $v1, -0x4300
    ctx->pc = 0x153d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x153d70: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x153d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x153d74: 0xe4a00080  swc1        $f0, 0x80($a1)
    ctx->pc = 0x153d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 128), bits); }
    // 0x153d78: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x153d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
    // 0x153d7c: 0x3483e6e7  ori         $v1, $a0, 0xE6E7
    ctx->pc = 0x153d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)59111);
    // 0x153d80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153d80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153d84: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x153d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153d88: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x153d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153d8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x153d90: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x153d90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x153d94: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x153d98: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x153d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x153d9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x153d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x153da0: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x153da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x153da4: 0x3c043f10  lui         $a0, 0x3F10
    ctx->pc = 0x153da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16144 << 16));
    // 0x153da8: 0x34839091  ori         $v1, $a0, 0x9091
    ctx->pc = 0x153da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37009);
    // 0x153dac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153dacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153db0: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x153db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153db4: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x153db4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x153db8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x153db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x153dbc: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x153dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x153dc0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x153dc4: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x153dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x153dc8: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x153dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x153dcc: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x153dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x153dd0: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x153dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x153dd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153dd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153dd8: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153ddc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x153de0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x153de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153de4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x153de4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x153de8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x153dec: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x153decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x153df0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x153df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x153df4: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x153df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x153df8: 0x3c044366  lui         $a0, 0x4366
    ctx->pc = 0x153df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17254 << 16));
    // 0x153dfc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153dfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153e00: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x153e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153e04: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x153e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153e08: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x153e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x153e0c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x153e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x153e10: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x153e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x153e14: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x153e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x153e18: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x153e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153e1c: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x153e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x153e20: 0x3c044310  lui         $a0, 0x4310
    ctx->pc = 0x153e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17168 << 16));
    // 0x153e24: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153e24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153e28: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x153e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153e2c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x153e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153e30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x153e34: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x153e34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x153e38: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x153e3c: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x153e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x153e40: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x153e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x153e44: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x153e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x153e48: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x153e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x153e4c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153e4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153e50: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x153e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153e54: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x153e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x153e58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x153e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x153e5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x153e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x153e60: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x153e64: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x153e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x153e68: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x153e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x153e6c: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x153e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x153e70: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x153e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
    // 0x153e74: 0x3483e6e7  ori         $v1, $a0, 0xE6E7
    ctx->pc = 0x153e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)59111);
    // 0x153e78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153e78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153e7c: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x153e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153e80: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x153e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x153e84: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x153e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x153e88: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x153e88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x153e8c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x153e90: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x153e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x153e94: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x153e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x153e98: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x153e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x153e9c: 0x3c053f10  lui         $a1, 0x3F10
    ctx->pc = 0x153e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16144 << 16));
    // 0x153ea0: 0x34a49091  ori         $a0, $a1, 0x9091
    ctx->pc = 0x153ea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37009);
    // 0x153ea4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153ea4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153ea8: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x153ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153eac: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x153eacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153eb0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x153eb4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x153eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x153eb8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x153ebc: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x153ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x153ec0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x153ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x153ec4: 0xe4a00088  swc1        $f0, 0x88($a1)
    ctx->pc = 0x153ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 136), bits); }
    // 0x153ec8: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x153EC8u;
    {
        const bool branch_taken_0x153ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153ec8) {
            ctx->pc = 0x154468u;
            return;
        }
    }
    ctx->pc = 0x153ED0u;
}
