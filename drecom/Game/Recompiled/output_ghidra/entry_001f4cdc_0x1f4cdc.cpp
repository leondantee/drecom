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

// Function: entry_001f4cdc
// Address: 0x1f4cdc - 0x1f4dd0
void entry_001f4cdc_0x1f4cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4cdc_0x1f4cdc");
#endif

    switch (ctx->pc) {
        case 0x1f4d50u: goto label_1f4d50;
        case 0x1f4d74u: goto label_1f4d74;
        default: break;
    }

    ctx->pc = 0x1f4cdcu;

    // 0x1f4cdc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4ce0: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f4ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f4ce4: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f4ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f4ce8: 0x2402dfe7  addiu       $v0, $zero, -0x2019
    ctx->pc = 0x1f4ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959079));
    // 0x1f4cec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f4cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f4cf0: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f4cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1f4cf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f4cf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4cf8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4cfc: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1f4cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x1f4d00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f4d00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4d04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4d08: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1f4d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x1f4d0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f4d0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4d10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4d14: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1f4d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x1f4d18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f4d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4d1c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4d20: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f4d20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f4d24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f4d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4d28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4d2c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f4d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f4d30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4d34: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f4d34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f4d38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4d3c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f4d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f4d40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4d44: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f4d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f4d48: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F4D48u;
    SET_GPR_U32(ctx, 31, 0x1F4D50u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F4D48u, 0x1F4D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4D50u;
label_1f4d50:
    // 0x1f4d50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f4d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f4d54: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f4d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f4d58: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f4d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f4d5c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f4d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f4d60: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f4d60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f4d64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4d68: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f4d68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f4d6c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F4D6Cu;
    SET_GPR_U32(ctx, 31, 0x1F4D74u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F4D6Cu, 0x1F4D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4D74u;
label_1f4d74:
    // 0x1f4d74: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f4d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f4d78: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1f4d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1f4d7c: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1f4d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1f4d80: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f4d80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f4d84: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f4d84u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f4d88: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f4d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4d8c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f4d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f4d90: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x1f4d90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f4d94: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f4d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4d98: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x1f4d98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1f4d9c: 0x3063f8ff  andi        $v1, $v1, 0xF8FF
    ctx->pc = 0x1f4d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63743);
    // 0x1f4da0: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x1f4da0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f4da4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f4da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4da8: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1f4da8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f4dac: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1f4dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4db0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f4db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f4db4: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1f4db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1f4db8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f4db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f4dbc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1f4dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1f4dc0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f4dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4dc4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f4dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f4dc8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1f4dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1f4dcc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1f4dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1f4dd0u;
}
