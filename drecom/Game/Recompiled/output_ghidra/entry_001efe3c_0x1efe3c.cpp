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

// Function: entry_001efe3c
// Address: 0x1efe3c - 0x1efe84
void entry_001efe3c_0x1efe3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efe3c_0x1efe3c");
#endif

    ctx->pc = 0x1efe3cu;

    // 0x1efe3c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efe40: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1efe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efe44: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x1efe44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x1efe48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1efe48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1efe4c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1efe4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1efe50: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1efe50u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efe54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1efe54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1efe58: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1efe58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efe5c: 0x0  nop
    ctx->pc = 0x1efe5cu;
    // NOP
    // 0x1efe60: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFE60u;
    {
        const bool branch_taken_0x1efe60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efe60) {
            ctx->pc = 0x1EFE84u;
            return;
        }
    }
    ctx->pc = 0x1EFE68u;
    // 0x1efe68: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1efe68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efe6c: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1efe6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efe70: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1efe70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1efe74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1efe74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efe78: 0x0  nop
    ctx->pc = 0x1efe78u;
    // NOP
    // 0x1efe7c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1efe7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1efe80: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1efe80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x1efe84u;
}
