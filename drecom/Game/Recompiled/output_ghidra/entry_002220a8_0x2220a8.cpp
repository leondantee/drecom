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

// Function: entry_002220a8
// Address: 0x2220a8 - 0x2220b0
void entry_002220a8_0x2220a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002220a8_0x2220a8");
#endif

    ctx->pc = 0x2220a8u;

    // 0x2220a8: 0x1620ffe6  bnez        $s1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2220A8u;
    {
        const bool branch_taken_0x2220a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2220a8) {
            ctx->pc = 0x222044u;
            return;
        }
    }
    ctx->pc = 0x2220B0u;
}
