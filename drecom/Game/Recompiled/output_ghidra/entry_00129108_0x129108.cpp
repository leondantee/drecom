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

// Function: entry_00129108
// Address: 0x129108 - 0x129110
void entry_00129108_0x129108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129108_0x129108");
#endif

    ctx->pc = 0x129108u;

    // 0x129108: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x129108u;
    {
        const bool branch_taken_0x129108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129108) {
            ctx->pc = 0x1295B0u;
            return;
        }
    }
    ctx->pc = 0x129110u;
}
