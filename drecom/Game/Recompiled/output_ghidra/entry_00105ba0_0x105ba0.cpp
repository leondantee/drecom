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

// Function: entry_00105ba0
// Address: 0x105ba0 - 0x105ba8
void entry_00105ba0_0x105ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105ba0_0x105ba0");
#endif

    ctx->pc = 0x105ba0u;

    // 0x105ba0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x105BA0u;
    {
        const bool branch_taken_0x105ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105BA0u;
        // 0x105ba4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ba0) {
            ctx->pc = 0x105BB0u;
            return;
        }
    }
    ctx->pc = 0x105BA8u;
}
