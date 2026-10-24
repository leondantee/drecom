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

// Function: entry_001e2648
// Address: 0x1e2648 - 0x1e2668
void entry_001e2648_0x1e2648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2648_0x1e2648");
#endif

    ctx->pc = 0x1e2648u;

    // 0x1e2648: 0xc60100fc  lwc1        $f1, 0xFC($s0)
    ctx->pc = 0x1e2648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e264c: 0xc7a0025c  lwc1        $f0, 0x25C($sp)
    ctx->pc = 0x1e264cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2650: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e2650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2654: 0x0  nop
    ctx->pc = 0x1e2654u;
    // NOP
    // 0x1e2658: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2658u;
    {
        const bool branch_taken_0x1e2658 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2658) {
            ctx->pc = 0x1E2668u;
            return;
        }
    }
    ctx->pc = 0x1E2660u;
    // 0x1e2660: 0xa6000102  sh          $zero, 0x102($s0)
    ctx->pc = 0x1e2660u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 258), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e2664: 0x0  nop
    ctx->pc = 0x1e2664u;
    // NOP
    ctx->pc = 0x1e2668u;
}
