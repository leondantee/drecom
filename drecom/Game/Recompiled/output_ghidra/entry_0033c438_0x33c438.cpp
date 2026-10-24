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

// Function: entry_0033c438
// Address: 0x33c438 - 0x33c444
void entry_0033c438_0x33c438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c438_0x33c438");
#endif

    ctx->pc = 0x33c438u;

    // 0x33c438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c43c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x33C43Cu;
    {
        const bool branch_taken_0x33c43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c43c) {
            ctx->pc = 0x33C4A8u;
            return;
        }
    }
    ctx->pc = 0x33C444u;
}
