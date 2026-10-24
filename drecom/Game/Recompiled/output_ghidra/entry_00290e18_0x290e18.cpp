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

// Function: entry_00290e18
// Address: 0x290e18 - 0x290e30
void entry_00290e18_0x290e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00290e18_0x290e18");
#endif

    ctx->pc = 0x290e18u;

    // 0x290e18: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x290e18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x290e1c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x290E1Cu;
    {
        const bool branch_taken_0x290e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290e1c) {
            ctx->pc = 0x290DD8u;
            return;
        }
    }
    ctx->pc = 0x290E24u;
    // 0x290e24: 0x1a000002  blez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x290E24u;
    {
        const bool branch_taken_0x290e24 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x290e24) {
            ctx->pc = 0x290E30u;
            return;
        }
    }
    ctx->pc = 0x290E2Cu;
    // 0x290e2c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x290e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x290e30u;
}
