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

// Function: entry_001d12c0
// Address: 0x1d12c0 - 0x1d12c8
void entry_001d12c0_0x1d12c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d12c0_0x1d12c0");
#endif

    ctx->pc = 0x1d12c0u;

    // 0x1d12c0: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x1D12C0u;
    {
        const bool branch_taken_0x1d12c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d12c0) {
            ctx->pc = 0x1D1930u;
            return;
        }
    }
    ctx->pc = 0x1D12C8u;
}
