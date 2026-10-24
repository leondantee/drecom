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

// Function: entry_0013a0e0
// Address: 0x13a0e0 - 0x13a0e8
void entry_0013a0e0_0x13a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a0e0_0x13a0e0");
#endif

    ctx->pc = 0x13a0e0u;

    // 0x13a0e0: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x13A0E0u;
    {
        const bool branch_taken_0x13a0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a0e0) {
            ctx->pc = 0x13A2D0u;
            return;
        }
    }
    ctx->pc = 0x13A0E8u;
}
