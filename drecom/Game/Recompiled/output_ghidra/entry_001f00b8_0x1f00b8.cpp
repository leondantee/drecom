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

// Function: entry_001f00b8
// Address: 0x1f00b8 - 0x1f0150
void entry_001f00b8_0x1f00b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f00b8_0x1f00b8");
#endif

    ctx->pc = 0x1f00b8u;

    // 0x1f00b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f00b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f00bc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f00bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f00c0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f00c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f00c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f00c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f00c8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f00c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f00cc: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1f00ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x1f00d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f00d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f00d4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f00d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f00d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f00d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f00dc: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f00dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1f00e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f00e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f00e4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f00e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f00e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f00e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f00ec: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f00ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f00f0: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x1f00f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x1f00f4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1f00f4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f00f8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f00f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f00fc: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f00fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f0100: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1f0100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1f0104: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x1f0104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x1f0108: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f0108u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f010c: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x1f010cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0110: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x1f0110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x1f0114: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x1f0114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
    // 0x1f0118: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f011c: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x1f011cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0120: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x1f0120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x1f0124: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0124u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0128: 0x0  nop
    ctx->pc = 0x1f0128u;
    // NOP
    // 0x1f012c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f012cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0130: 0x0  nop
    ctx->pc = 0x1f0130u;
    // NOP
    // 0x1f0134: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0134u;
    {
        const bool branch_taken_0x1f0134 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0134) {
            ctx->pc = 0x1F0150u;
            return;
        }
    }
    ctx->pc = 0x1F013Cu;
    // 0x1f013c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1f013cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1f0140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0144: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0148: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1f0148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f014c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1f014cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->pc = 0x1f0150u;
}
