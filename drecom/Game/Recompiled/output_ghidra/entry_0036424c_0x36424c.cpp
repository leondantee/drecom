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

// Function: entry_0036424c
// Address: 0x36424c - 0x364254
void entry_0036424c_0x36424c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036424c_0x36424c");
#endif

    ctx->pc = 0x36424cu;

    // 0x36424c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x36424Cu;
    {
        const bool branch_taken_0x36424c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36424c) {
            ctx->pc = 0x364360u;
            return;
        }
    }
    ctx->pc = 0x364254u;
}
