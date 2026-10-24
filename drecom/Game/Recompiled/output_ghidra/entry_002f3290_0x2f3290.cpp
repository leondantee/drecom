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

// Function: entry_002f3290
// Address: 0x2f3290 - 0x2f3298
void entry_002f3290_0x2f3290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f3290_0x2f3290");
#endif

    ctx->pc = 0x2f3290u;

    // 0x2f3290: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2F3290u;
    {
        const bool branch_taken_0x2f3290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3290) {
            ctx->pc = 0x2F3298u;
            return;
        }
    }
    ctx->pc = 0x2F3298u;
}
