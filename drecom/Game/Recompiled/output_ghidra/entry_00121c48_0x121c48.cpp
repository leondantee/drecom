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

// Function: entry_00121c48
// Address: 0x121c48 - 0x121c50
void entry_00121c48_0x121c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121c48_0x121c48");
#endif

    ctx->pc = 0x121c48u;

    // 0x121c48: 0x10000439  b           . + 4 + (0x439 << 2)
    ctx->pc = 0x121C48u;
    {
        const bool branch_taken_0x121c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121c48) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x121C50u;
}
