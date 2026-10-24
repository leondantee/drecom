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

// Function: entry_001e9df8
// Address: 0x1e9df8 - 0x1e9e00
void entry_001e9df8_0x1e9df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9df8_0x1e9df8");
#endif

    ctx->pc = 0x1e9df8u;

    // 0x1e9df8: 0x1620ffdd  bnez        $s1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1E9DF8u;
    {
        const bool branch_taken_0x1e9df8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9df8) {
            ctx->pc = 0x1E9D70u;
            return;
        }
    }
    ctx->pc = 0x1E9E00u;
}
