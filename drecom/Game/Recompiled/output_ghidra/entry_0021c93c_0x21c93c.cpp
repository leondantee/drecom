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

// Function: entry_0021c93c
// Address: 0x21c93c - 0x21c944
void entry_0021c93c_0x21c93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c93c_0x21c93c");
#endif

    ctx->pc = 0x21c93cu;

    // 0x21c93c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x21C93Cu;
    {
        const bool branch_taken_0x21c93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c93c) {
            ctx->pc = 0x21C944u;
            return;
        }
    }
    ctx->pc = 0x21C944u;
}
