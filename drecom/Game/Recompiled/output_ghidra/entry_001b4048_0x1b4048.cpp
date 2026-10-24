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

// Function: entry_001b4048
// Address: 0x1b4048 - 0x1b4054
void entry_001b4048_0x1b4048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4048_0x1b4048");
#endif

    ctx->pc = 0x1b4048u;

    // 0x1b4048: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b404c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B404Cu;
    {
        const bool branch_taken_0x1b404c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b404c) {
            ctx->pc = 0x1B4074u;
            return;
        }
    }
    ctx->pc = 0x1B4054u;
}
