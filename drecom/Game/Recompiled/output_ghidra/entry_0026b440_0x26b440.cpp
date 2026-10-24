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

// Function: entry_0026b440
// Address: 0x26b440 - 0x26b468
void entry_0026b440_0x26b440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026b440_0x26b440");
#endif

    ctx->pc = 0x26b440u;

    // 0x26b440: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x26b440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b444: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26b444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b448: 0x0  nop
    ctx->pc = 0x26b448u;
    // NOP
    // 0x26b44c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26b44cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26b450: 0x0  nop
    ctx->pc = 0x26b450u;
    // NOP
    // 0x26b454: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26B454u;
    {
        const bool branch_taken_0x26b454 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26b454) {
            ctx->pc = 0x26B468u;
            return;
        }
    }
    ctx->pc = 0x26B45Cu;
    // 0x26b45c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26b45cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b460: 0x0  nop
    ctx->pc = 0x26b460u;
    // NOP
    // 0x26b464: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x26b464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->pc = 0x26b468u;
}
