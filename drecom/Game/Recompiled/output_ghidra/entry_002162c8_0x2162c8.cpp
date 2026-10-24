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

// Function: entry_002162c8
// Address: 0x2162c8 - 0x2162d4
void entry_002162c8_0x2162c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002162c8_0x2162c8");
#endif

    ctx->pc = 0x2162c8u;

    // 0x2162c8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2162c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2162cc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2162CCu;
    {
        const bool branch_taken_0x2162cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2162cc) {
            ctx->pc = 0x2162D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2162CCu;
            // 0x2162d0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2162B0u;
            return;
        }
    }
    ctx->pc = 0x2162D4u;
}
