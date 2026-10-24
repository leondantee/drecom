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

// Function: entry_001e2e18
// Address: 0x1e2e18 - 0x1e2e38
void entry_001e2e18_0x1e2e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2e18_0x1e2e18");
#endif

    ctx->pc = 0x1e2e18u;

    // 0x1e2e18: 0xc60100fc  lwc1        $f1, 0xFC($s0)
    ctx->pc = 0x1e2e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2e1c: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x1e2e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2e20: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e2e20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2e24: 0x0  nop
    ctx->pc = 0x1e2e24u;
    // NOP
    // 0x1e2e28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2E28u;
    {
        const bool branch_taken_0x1e2e28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2e28) {
            ctx->pc = 0x1E2E38u;
            return;
        }
    }
    ctx->pc = 0x1E2E30u;
    // 0x1e2e30: 0xa6000102  sh          $zero, 0x102($s0)
    ctx->pc = 0x1e2e30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 258), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e2e34: 0x0  nop
    ctx->pc = 0x1e2e34u;
    // NOP
    ctx->pc = 0x1e2e38u;
}
