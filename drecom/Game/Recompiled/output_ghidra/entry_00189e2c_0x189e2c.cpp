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

// Function: entry_00189e2c
// Address: 0x189e2c - 0x189e44
void entry_00189e2c_0x189e2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189e2c_0x189e2c");
#endif

    ctx->pc = 0x189e2cu;

    // 0x189e2c: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x189e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189e30: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x189e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189e34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189e34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189e38: 0x0  nop
    ctx->pc = 0x189e38u;
    // NOP
    // 0x189e3c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x189E3Cu;
    {
        const bool branch_taken_0x189e3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189e3c) {
            ctx->pc = 0x189E4Cu;
            return;
        }
    }
    ctx->pc = 0x189E44u;
}
