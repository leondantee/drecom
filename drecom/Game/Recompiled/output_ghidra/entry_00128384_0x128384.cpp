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

// Function: entry_00128384
// Address: 0x128384 - 0x12838c
void entry_00128384_0x128384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128384_0x128384");
#endif

    ctx->pc = 0x128384u;

    // 0x128384: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x128384u;
    {
        const bool branch_taken_0x128384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128384) {
            ctx->pc = 0x1283D4u;
            return;
        }
    }
    ctx->pc = 0x12838Cu;
}
