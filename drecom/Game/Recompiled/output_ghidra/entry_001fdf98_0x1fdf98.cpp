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

// Function: entry_001fdf98
// Address: 0x1fdf98 - 0x1fdfa8
void entry_001fdf98_0x1fdf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdf98_0x1fdf98");
#endif

    ctx->pc = 0x1fdf98u;

    // 0x1fdf98: 0x1600ffe9  bnez        $s0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1FDF98u;
    {
        const bool branch_taken_0x1fdf98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf98) {
            ctx->pc = 0x1FDF40u;
            return;
        }
    }
    ctx->pc = 0x1FDFA0u;
    // 0x1fdfa0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1FDFA0u;
    {
        const bool branch_taken_0x1fdfa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdfa0) {
            ctx->pc = 0x1FE058u;
            return;
        }
    }
    ctx->pc = 0x1FDFA8u;
}
