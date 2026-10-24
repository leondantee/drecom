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

// Function: entry_0012a11c
// Address: 0x12a11c - 0x12a124
void entry_0012a11c_0x12a11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a11c_0x12a11c");
#endif

    ctx->pc = 0x12a11cu;

    // 0x12a11c: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x12A11Cu;
    {
        const bool branch_taken_0x12a11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a11c) {
            ctx->pc = 0x12A534u;
            return;
        }
    }
    ctx->pc = 0x12A124u;
}
