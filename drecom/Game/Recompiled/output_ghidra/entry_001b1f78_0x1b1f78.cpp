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

// Function: entry_001b1f78
// Address: 0x1b1f78 - 0x1b1fb0
void entry_001b1f78_0x1b1f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1f78_0x1b1f78");
#endif

    switch (ctx->pc) {
        case 0x1b1facu: goto label_1b1fac;
        default: break;
    }

    ctx->pc = 0x1b1f78u;

    // 0x1b1f78: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x1b1f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1f7c: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x1b1f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1f80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b1f80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1f84: 0x0  nop
    ctx->pc = 0x1b1f84u;
    // NOP
    // 0x1b1f88: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1B1F88u;
    {
        const bool branch_taken_0x1b1f88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1f88) {
            ctx->pc = 0x1B1FB0u;
            return;
        }
    }
    ctx->pc = 0x1B1F90u;
    // 0x1b1f90: 0xafb40158  sw          $s4, 0x158($sp)
    ctx->pc = 0x1b1f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 20));
    // 0x1b1f94: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x1b1f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1f98: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1b1f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x1b1f9c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1b1f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1b1fa0: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1b1fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1b1fa4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B1FA4u;
    SET_GPR_U32(ctx, 31, 0x1B1FACu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B1FACu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B1FACu) { return; }
    ctx->pc = 0x1B1FACu;
label_1b1fac:
    // 0x1b1fac: 0x0  nop
    ctx->pc = 0x1b1facu;
    // NOP
    ctx->pc = 0x1b1fb0u;
}
