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

// Function: entry_00117910
// Address: 0x117910 - 0x117934
void entry_00117910_0x117910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117910_0x117910");
#endif

    ctx->pc = 0x117910u;

label_117910:
    // 0x117910: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x117910u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x117914: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x117914u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x117918: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x117918u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x11791c: 0x0  nop
    ctx->pc = 0x11791cu;
    // NOP
    // 0x117920: 0x0  nop
    ctx->pc = 0x117920u;
    // NOP
    // 0x117924: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x117924u;
    {
        const bool branch_taken_0x117924 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x117924) {
            ctx->pc = 0x117910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117910;
        }
    }
    ctx->pc = 0x11792Cu;
    // 0x11792c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11792Cu;
    {
        const bool branch_taken_0x11792c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11792Cu;
        // 0x117930: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11792c) {
            ctx->pc = 0x117938u;
            return;
        }
    }
    ctx->pc = 0x117934u;
}
