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

// Function: entry_00107e70
// Address: 0x107e70 - 0x107e7c
void entry_00107e70_0x107e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107e70_0x107e70");
#endif

    ctx->pc = 0x107e70u;

    // 0x107e70: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x107e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x107e74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x107E74u;
    {
        const bool branch_taken_0x107e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E74u;
        // 0x107e78: 0x8c503e4c  lw          $s0, 0x3E4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e74) {
            ctx->pc = 0x107E8Cu;
            return;
        }
    }
    ctx->pc = 0x107E7Cu;
}
