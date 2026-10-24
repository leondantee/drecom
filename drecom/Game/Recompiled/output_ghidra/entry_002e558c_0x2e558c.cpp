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

// Function: entry_002e558c
// Address: 0x2e558c - 0x2e5594
void entry_002e558c_0x2e558c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e558c_0x2e558c");
#endif

    ctx->pc = 0x2e558cu;

    // 0x2e558c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E558Cu;
    {
        const bool branch_taken_0x2e558c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e558c) {
            ctx->pc = 0x2E55A4u;
            return;
        }
    }
    ctx->pc = 0x2E5594u;
}
