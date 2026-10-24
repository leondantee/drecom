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

// Function: entry_001b46dc
// Address: 0x1b46dc - 0x1b46e8
void entry_001b46dc_0x1b46dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b46dc_0x1b46dc");
#endif

    ctx->pc = 0x1b46dcu;

    // 0x1b46dc: 0x36940005  ori         $s4, $s4, 0x5
    ctx->pc = 0x1b46dcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)5);
    // 0x1b46e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B46E0u;
    {
        const bool branch_taken_0x1b46e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b46e0) {
            ctx->pc = 0x1B4708u;
            return;
        }
    }
    ctx->pc = 0x1B46E8u;
}
