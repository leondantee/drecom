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

// Function: entry_0022aa44
// Address: 0x22aa44 - 0x22aa80
void entry_0022aa44_0x22aa44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022aa44_0x22aa44");
#endif

    ctx->pc = 0x22aa44u;

    // 0x22aa44: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22aa48: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x22aa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22aa4c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22aa4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22aa50: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22aa50u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22aa54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22aa54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22aa58: 0x0  nop
    ctx->pc = 0x22aa58u;
    // NOP
    // 0x22aa5c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x22AA5Cu;
    {
        const bool branch_taken_0x22aa5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22aa5c) {
            ctx->pc = 0x22AA80u;
            return;
        }
    }
    ctx->pc = 0x22AA64u;
    // 0x22aa64: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22aa64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22aa68: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x22aa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22aa6c: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x22aa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
    // 0x22aa70: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x22aa70u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22aa74: 0x0  nop
    ctx->pc = 0x22aa74u;
    // NOP
    // 0x22aa78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22aa78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22aa7c: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x22aa7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x22aa80u;
}
