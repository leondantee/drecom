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

// Function: entry_001bef64
// Address: 0x1bef64 - 0x1bef6c
void entry_001bef64_0x1bef64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bef64_0x1bef64");
#endif

    ctx->pc = 0x1bef64u;

    // 0x1bef64: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1BEF64u;
    {
        const bool branch_taken_0x1bef64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bef64) {
            ctx->pc = 0x1BEF6Cu;
            return;
        }
    }
    ctx->pc = 0x1BEF6Cu;
}
