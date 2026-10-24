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

// Function: entry_0010d6f8
// Address: 0x10d6f8 - 0x10d71c
void entry_0010d6f8_0x10d6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d6f8_0x10d6f8");
#endif

    ctx->pc = 0x10d6f8u;

label_10d6f8:
    // 0x10d6f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10d6fc: 0x0  nop
    ctx->pc = 0x10d6fcu;
    // NOP
    // 0x10d700: 0x0  nop
    ctx->pc = 0x10d700u;
    // NOP
    // 0x10d704: 0x0  nop
    ctx->pc = 0x10d704u;
    // NOP
    // 0x10d708: 0x0  nop
    ctx->pc = 0x10d708u;
    // NOP
    // 0x10d70c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10D70Cu;
    {
        const bool branch_taken_0x10d70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10d70c) {
            ctx->pc = 0x10D6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d6f8;
        }
    }
    ctx->pc = 0x10D714u;
    // 0x10d714: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x10D714u;
    {
        const bool branch_taken_0x10d714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D714u;
        // 0x10d718: 0x26703c60  addiu       $s0, $s3, 0x3C60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 15456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d714) {
            ctx->pc = 0x10D6B8u;
            return;
        }
    }
    ctx->pc = 0x10D71Cu;
}
