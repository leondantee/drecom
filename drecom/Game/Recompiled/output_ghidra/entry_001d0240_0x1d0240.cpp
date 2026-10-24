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

// Function: entry_001d0240
// Address: 0x1d0240 - 0x1d0274
void entry_001d0240_0x1d0240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0240_0x1d0240");
#endif

    ctx->pc = 0x1d0240u;

    // 0x1d0240: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0244: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x1d0244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0248: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x1d0248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
    // 0x1d024c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d024cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0250: 0x0  nop
    ctx->pc = 0x1d0250u;
    // NOP
    // 0x1d0254: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d0254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0258: 0x0  nop
    ctx->pc = 0x1d0258u;
    // NOP
    // 0x1d025c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D025Cu;
    {
        const bool branch_taken_0x1d025c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d025c) {
            ctx->pc = 0x1D0274u;
            return;
        }
    }
    ctx->pc = 0x1D0264u;
    // 0x1d0264: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x1d0264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
    // 0x1d0268: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d0268u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d026c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d026cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0270: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1d0270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x1d0274u;
}
