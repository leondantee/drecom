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

// Function: caseD_2d
// Address: 0x11b5c8 - 0x11b5d4
void caseD_2d_0x11b5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2d_0x11b5c8");
#endif

    ctx->pc = 0x11b5c8u;

    // 0x11b5c8: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x11b5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b5cc: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x11B5CCu;
    {
        const bool branch_taken_0x11b5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5CCu;
        // 0x11b5d0: 0x37de0004  ori         $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5cc) {
            ctx->pc = 0x11B548u;
            return;
        }
    }
    ctx->pc = 0x11B5D4u;
}
