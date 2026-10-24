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

// Function: entry_001ce8a8
// Address: 0x1ce8a8 - 0x1ce8b0
void entry_001ce8a8_0x1ce8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce8a8_0x1ce8a8");
#endif

    ctx->pc = 0x1ce8a8u;

    // 0x1ce8a8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1CE8A8u;
    {
        const bool branch_taken_0x1ce8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce8a8) {
            ctx->pc = 0x1CE8B0u;
            return;
        }
    }
    ctx->pc = 0x1CE8B0u;
}
