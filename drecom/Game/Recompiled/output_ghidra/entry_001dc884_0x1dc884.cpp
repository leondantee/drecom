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

// Function: entry_001dc884
// Address: 0x1dc884 - 0x1dc8b4
void entry_001dc884_0x1dc884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc884_0x1dc884");
#endif

    ctx->pc = 0x1dc884u;

    // 0x1dc884: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x1dc884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc888: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc88c: 0x0  nop
    ctx->pc = 0x1dc88cu;
    // NOP
    // 0x1dc890: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dc890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc894: 0x0  nop
    ctx->pc = 0x1dc894u;
    // NOP
    // 0x1dc898: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DC898u;
    {
        const bool branch_taken_0x1dc898 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc898) {
            ctx->pc = 0x1DC8B4u;
            return;
        }
    }
    ctx->pc = 0x1DC8A0u;
    // 0x1dc8a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc8a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc8a4: 0x0  nop
    ctx->pc = 0x1dc8a4u;
    // NOP
    // 0x1dc8a8: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1dc8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1dc8ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC8ACu;
    {
        const bool branch_taken_0x1dc8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc8ac) {
            ctx->pc = 0x1DC8BCu;
            return;
        }
    }
    ctx->pc = 0x1DC8B4u;
}
