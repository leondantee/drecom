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

// Function: entry_002e0168
// Address: 0x2e0168 - 0x2e0170
void entry_002e0168_0x2e0168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e0168_0x2e0168");
#endif

    ctx->pc = 0x2e0168u;

    // 0x2e0168: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2E0168u;
    {
        const bool branch_taken_0x2e0168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0168) {
            ctx->pc = 0x2E0208u;
            return;
        }
    }
    ctx->pc = 0x2E0170u;
}
