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

// Function: caseD_a
// Address: 0x296440 - 0x296450
void caseD_a_0x296440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x296440");
#endif

    ctx->pc = 0x296440u;

    // 0x296440: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x296440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x296444: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x296444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x296448: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x296448u;
    {
        const bool branch_taken_0x296448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296448) {
            ctx->pc = 0x296530u;
            return;
        }
    }
    ctx->pc = 0x296450u;
}
