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

// Function: entry_001c835c
// Address: 0x1c835c - 0x1c8364
void entry_001c835c_0x1c835c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c835c_0x1c835c");
#endif

    ctx->pc = 0x1c835cu;

    // 0x1c835c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1C835Cu;
    {
        const bool branch_taken_0x1c835c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c835c) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C8364u;
}
