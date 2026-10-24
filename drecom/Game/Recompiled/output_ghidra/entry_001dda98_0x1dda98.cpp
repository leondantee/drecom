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

// Function: entry_001dda98
// Address: 0x1dda98 - 0x1ddac8
void entry_001dda98_0x1dda98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dda98_0x1dda98");
#endif

    ctx->pc = 0x1dda98u;

    // 0x1dda98: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x1dda98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dda9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dda9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddaa0: 0x0  nop
    ctx->pc = 0x1ddaa0u;
    // NOP
    // 0x1ddaa4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ddaa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ddaa8: 0x0  nop
    ctx->pc = 0x1ddaa8u;
    // NOP
    // 0x1ddaac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DDAACu;
    {
        const bool branch_taken_0x1ddaac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ddaac) {
            ctx->pc = 0x1DDAC8u;
            return;
        }
    }
    ctx->pc = 0x1DDAB4u;
    // 0x1ddab4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ddab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddab8: 0x0  nop
    ctx->pc = 0x1ddab8u;
    // NOP
    // 0x1ddabc: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1ddabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1ddac0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDAC0u;
    {
        const bool branch_taken_0x1ddac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddac0) {
            ctx->pc = 0x1DDAD0u;
            return;
        }
    }
    ctx->pc = 0x1DDAC8u;
}
