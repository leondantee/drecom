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

// Function: entry_0033c630
// Address: 0x33c630 - 0x33c63c
void entry_0033c630_0x33c630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c630_0x33c630");
#endif

    ctx->pc = 0x33c630u;

    // 0x33c630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c634: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33C634u;
    {
        const bool branch_taken_0x33c634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c634) {
            ctx->pc = 0x33C64Cu;
            return;
        }
    }
    ctx->pc = 0x33C63Cu;
}
