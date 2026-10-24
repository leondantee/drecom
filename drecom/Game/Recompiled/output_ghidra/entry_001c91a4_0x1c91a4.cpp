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

// Function: entry_001c91a4
// Address: 0x1c91a4 - 0x1c91d8
void entry_001c91a4_0x1c91a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c91a4_0x1c91a4");
#endif

    ctx->pc = 0x1c91a4u;

    // 0x1c91a4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c91a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c91a8: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x1c91a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c91ac: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x1c91acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x1c91b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c91b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c91b4: 0x0  nop
    ctx->pc = 0x1c91b4u;
    // NOP
    // 0x1c91b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c91b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c91bc: 0x0  nop
    ctx->pc = 0x1c91bcu;
    // NOP
    // 0x1c91c0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C91C0u;
    {
        const bool branch_taken_0x1c91c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c91c0) {
            ctx->pc = 0x1C91D8u;
            return;
        }
    }
    ctx->pc = 0x1C91C8u;
    // 0x1c91c8: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x1c91c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x1c91cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c91ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c91d0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c91d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c91d4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1c91d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x1c91d8u;
}
