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

// Function: entry_001106d4
// Address: 0x1106d4 - 0x1106ec
void entry_001106d4_0x1106d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001106d4_0x1106d4");
#endif

    ctx->pc = 0x1106d4u;

    // 0x1106d4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1106d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1106d8: 0x8c43522c  lw          $v1, 0x522C($v0)
    ctx->pc = 0x1106d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B522Cu));
    // 0x1106dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1106DCu;
    {
        const bool branch_taken_0x1106dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1106E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106DCu;
        // 0x1106e0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1106dc) {
            ctx->pc = 0x1106F0u;
            return;
        }
    }
    ctx->pc = 0x1106E4u;
    // 0x1106e4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1106e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1106e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1106e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1106ecu;
}
