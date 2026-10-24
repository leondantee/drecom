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

// Function: entry_0012939c
// Address: 0x12939c - 0x1293a4
void entry_0012939c_0x12939c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012939c_0x12939c");
#endif

    ctx->pc = 0x12939cu;

    // 0x12939c: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x12939Cu;
    {
        const bool branch_taken_0x12939c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12939c) {
            ctx->pc = 0x1295B0u;
            return;
        }
    }
    ctx->pc = 0x1293A4u;
}
