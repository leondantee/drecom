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

// Function: caseD_30
// Address: 0x11b674 - 0x11b680
void caseD_30_0x11b674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_30_0x11b674");
#endif

    ctx->pc = 0x11b674u;

    // 0x11b674: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x11b674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b678: 0x1000ffb3  b           . + 4 + (-0x4D << 2)
    ctx->pc = 0x11B678u;
    {
        const bool branch_taken_0x11b678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B678u;
        // 0x11b67c: 0x37de0080  ori         $fp, $fp, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b678) {
            ctx->pc = 0x11B548u;
            return;
        }
    }
    ctx->pc = 0x11B680u;
}
