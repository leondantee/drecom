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

// Function: entry_00341524
// Address: 0x341524 - 0x34152c
void entry_00341524_0x341524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00341524_0x341524");
#endif

    ctx->pc = 0x341524u;

    // 0x341524: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x341524u;
    {
        const bool branch_taken_0x341524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341524) {
            ctx->pc = 0x341BE0u;
            return;
        }
    }
    ctx->pc = 0x34152Cu;
}
