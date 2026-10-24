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

// Function: entry_001f0ef0
// Address: 0x1f0ef0 - 0x1f0f88
void entry_001f0ef0_0x1f0ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0ef0_0x1f0ef0");
#endif

    ctx->pc = 0x1f0ef0u;

    // 0x1f0ef0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f0ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0ef4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f0ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0ef8: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x1f0ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f0efc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0f00: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f0f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0f04: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f0f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1f0f08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0f08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0f0c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f0f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0f10: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f0f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f0f14: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f0f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1f0f18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0f1c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f0f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0f20: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1f0f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f0f24: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x1f0f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x1f0f28: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1f0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1f0f2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0f30: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f0f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0f34: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f0f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f0f38: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1f0f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1f0f3c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1f0f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1f0f40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0f40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0f44: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f0f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0f48: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f0f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f0f4c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f0f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1f0f50: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f0f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0f54: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1f0f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0f58: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x1f0f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x1f0f5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0f5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0f60: 0x0  nop
    ctx->pc = 0x1f0f60u;
    // NOP
    // 0x1f0f64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f0f64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0f68: 0x0  nop
    ctx->pc = 0x1f0f68u;
    // NOP
    // 0x1f0f6c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0F6Cu;
    {
        const bool branch_taken_0x1f0f6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0f6c) {
            ctx->pc = 0x1F0F88u;
            return;
        }
    }
    ctx->pc = 0x1F0F74u;
    // 0x1f0f74: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1f0f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x1f0f78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0f7c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f0f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0f80: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f0f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0f84: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f0f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    ctx->pc = 0x1f0f88u;
}
