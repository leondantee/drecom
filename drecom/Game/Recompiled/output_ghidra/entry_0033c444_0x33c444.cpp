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

// Function: entry_0033c444
// Address: 0x33c444 - 0x33c450
void entry_0033c444_0x33c444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c444_0x33c444");
#endif

    ctx->pc = 0x33c444u;

    // 0x33c444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c448: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x33C448u;
    {
        const bool branch_taken_0x33c448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c448) {
            ctx->pc = 0x33C4A8u;
            return;
        }
    }
    ctx->pc = 0x33C450u;
}
