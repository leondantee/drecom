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

// Function: entry_0033c600
// Address: 0x33c600 - 0x33c60c
void entry_0033c600_0x33c600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c600_0x33c600");
#endif

    ctx->pc = 0x33c600u;

    // 0x33c600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c604: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x33C604u;
    {
        const bool branch_taken_0x33c604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c604) {
            ctx->pc = 0x33C64Cu;
            return;
        }
    }
    ctx->pc = 0x33C60Cu;
}
