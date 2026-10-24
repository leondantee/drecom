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

// Function: entry_0033c63c
// Address: 0x33c63c - 0x33c648
void entry_0033c63c_0x33c63c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c63c_0x33c63c");
#endif

    ctx->pc = 0x33c63cu;

    // 0x33c63c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c640: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33C640u;
    {
        const bool branch_taken_0x33c640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c640) {
            ctx->pc = 0x33C64Cu;
            return;
        }
    }
    ctx->pc = 0x33C648u;
}
