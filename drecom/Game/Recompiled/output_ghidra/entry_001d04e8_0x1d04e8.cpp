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

// Function: entry_001d04e8
// Address: 0x1d04e8 - 0x1d04f0
void entry_001d04e8_0x1d04e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d04e8_0x1d04e8");
#endif

    ctx->pc = 0x1d04e8u;

    // 0x1d04e8: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x1D04E8u;
    {
        const bool branch_taken_0x1d04e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d04e8) {
            ctx->pc = 0x1D0A20u;
            return;
        }
    }
    ctx->pc = 0x1D04F0u;
}
