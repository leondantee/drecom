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

// Function: entry_00181fa0
// Address: 0x181fa0 - 0x181fa8
void entry_00181fa0_0x181fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181fa0_0x181fa0");
#endif

    ctx->pc = 0x181fa0u;

    // 0x181fa0: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x181FA0u;
    {
        const bool branch_taken_0x181fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181fa0) {
            ctx->pc = 0x18241Cu;
            return;
        }
    }
    ctx->pc = 0x181FA8u;
}
