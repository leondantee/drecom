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

// Function: entry_00364a74
// Address: 0x364a74 - 0x364a7c
void entry_00364a74_0x364a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364a74_0x364a74");
#endif

    ctx->pc = 0x364a74u;

    // 0x364a74: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x364A74u;
    {
        const bool branch_taken_0x364a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364a74) {
            ctx->pc = 0x364A7Cu;
            return;
        }
    }
    ctx->pc = 0x364A7Cu;
}
