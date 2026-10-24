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

// Function: entry_00247dd0
// Address: 0x247dd0 - 0x247e88
void entry_00247dd0_0x247dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247dd0_0x247dd0");
#endif

    switch (ctx->pc) {
        case 0x247dfcu: goto label_247dfc;
        default: break;
    }

    ctx->pc = 0x247dd0u;

    // 0x247dd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x247dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247dd4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247dd8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x247dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x247ddc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247de0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x247de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247de4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x247de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x247de8: 0x2406501f  addiu       $a2, $zero, 0x501F
    ctx->pc = 0x247de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20511));
    // 0x247dec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x247decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247df0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x247df0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x247df4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x247DF4u;
    SET_GPR_U32(ctx, 31, 0x247DFCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x247DF4u, 0x247DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247DFCu;
label_247dfc:
    // 0x247dfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x247dfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247e00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247e04: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247e08: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x247e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x247e0c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x247e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x247e10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247e10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247e14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247e18: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247e1c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x247e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x247e20: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x247e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x247e24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247e28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247e2c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247e30: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x247e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x247e34: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x247e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x247e38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247e3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247e40: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247e44: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x247e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x247e48: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247e4c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x247e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247e50: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x247e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x247e54: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x247e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x247e58: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x247e58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x247e5c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247e60: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x247e60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x247e64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x247e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247e68: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247e6c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x247e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x247e70: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247e74: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x247e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247e78: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x247e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x247e7c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x247e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x247e80: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x247e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x247e84: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x247e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x247e88u;
}
