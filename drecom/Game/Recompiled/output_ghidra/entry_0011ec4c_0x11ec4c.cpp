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

// Function: entry_0011ec4c
// Address: 0x11ec4c - 0x11ec5c
void entry_0011ec4c_0x11ec4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ec4c_0x11ec4c");
#endif

    ctx->pc = 0x11ec4cu;

    // 0x11ec4c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11EC4Cu;
    {
        const bool branch_taken_0x11ec4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC4Cu;
        // 0x11ec50: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec4c) {
            ctx->pc = 0x11EC68u;
            return;
        }
    }
    ctx->pc = 0x11EC54u;
    // 0x11ec54: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11EC54u;
    {
        const bool branch_taken_0x11ec54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC54u;
        // 0x11ec58: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec54) {
            ctx->pc = 0x11EC98u;
            return;
        }
    }
    ctx->pc = 0x11EC5Cu;
}
