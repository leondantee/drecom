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

// Function: entry_00321398
// Address: 0x321398 - 0x3213a8
void entry_00321398_0x321398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321398_0x321398");
#endif

    ctx->pc = 0x321398u;

    // 0x321398: 0x1600ffa6  bnez        $s0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x321398u;
    {
        const bool branch_taken_0x321398 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x321398) {
            ctx->pc = 0x321234u;
            return;
        }
    }
    ctx->pc = 0x3213A0u;
    // 0x3213a0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x3213A0u;
    {
        const bool branch_taken_0x3213a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3213a0) {
            ctx->pc = 0x321530u;
            return;
        }
    }
    ctx->pc = 0x3213A8u;
}
