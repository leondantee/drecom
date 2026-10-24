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

// Function: entry_001292a8
// Address: 0x1292a8 - 0x1292b0
void entry_001292a8_0x1292a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001292a8_0x1292a8");
#endif

    ctx->pc = 0x1292a8u;

    // 0x1292a8: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x1292A8u;
    {
        const bool branch_taken_0x1292a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1292a8) {
            ctx->pc = 0x1295B0u;
            return;
        }
    }
    ctx->pc = 0x1292B0u;
}
