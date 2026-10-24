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

// Function: entry_002f2d80
// Address: 0x2f2d80 - 0x2f2d88
void entry_002f2d80_0x2f2d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f2d80_0x2f2d80");
#endif

    ctx->pc = 0x2f2d80u;

    // 0x2f2d80: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2F2D80u;
    {
        const bool branch_taken_0x2f2d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d80) {
            ctx->pc = 0x2F2F68u;
            return;
        }
    }
    ctx->pc = 0x2F2D88u;
}
