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

// Function: entry_001cff90
// Address: 0x1cff90 - 0x1cff98
void entry_001cff90_0x1cff90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cff90_0x1cff90");
#endif

    ctx->pc = 0x1cff90u;

    // 0x1cff90: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1CFF90u;
    {
        const bool branch_taken_0x1cff90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cff90) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CFF98u;
}
