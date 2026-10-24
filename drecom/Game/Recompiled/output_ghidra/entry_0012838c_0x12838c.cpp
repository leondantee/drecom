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

// Function: entry_0012838c
// Address: 0x12838c - 0x128394
void entry_0012838c_0x12838c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012838c_0x12838c");
#endif

    ctx->pc = 0x12838cu;

    // 0x12838c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x12838Cu;
    {
        const bool branch_taken_0x12838c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12838c) {
            ctx->pc = 0x1283D4u;
            return;
        }
    }
    ctx->pc = 0x128394u;
}
