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

// Function: entry_001e8f98
// Address: 0x1e8f98 - 0x1e8fa0
void entry_001e8f98_0x1e8f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8f98_0x1e8f98");
#endif

    ctx->pc = 0x1e8f98u;

    // 0x1e8f98: 0x10000325  b           . + 4 + (0x325 << 2)
    ctx->pc = 0x1E8F98u;
    {
        const bool branch_taken_0x1e8f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8f98) {
            ctx->pc = 0x1E9C30u;
            return;
        }
    }
    ctx->pc = 0x1E8FA0u;
}
