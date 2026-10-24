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

// Function: entry_001b277c
// Address: 0x1b277c - 0x1b27a0
void entry_001b277c_0x1b277c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b277c_0x1b277c");
#endif

    ctx->pc = 0x1b277cu;

    // 0x1b277c: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x1b277cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2780: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x1b2780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2784: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b2784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2788: 0x0  nop
    ctx->pc = 0x1b2788u;
    // NOP
    // 0x1b278c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B278Cu;
    {
        const bool branch_taken_0x1b278c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b278c) {
            ctx->pc = 0x1B27A0u;
            return;
        }
    }
    ctx->pc = 0x1B2794u;
    // 0x1b2794: 0x7280f628  paddub      $fp, $s4, $zero
    ctx->pc = 0x1b2794u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1b2798: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1b2798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b279c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1b279cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    ctx->pc = 0x1b27a0u;
}
