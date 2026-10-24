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

// Function: entry_00117888
// Address: 0x117888 - 0x1178ac
void entry_00117888_0x117888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117888_0x117888");
#endif

    ctx->pc = 0x117888u;

label_117888:
    // 0x117888: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x117888u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11788c: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x11788cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x117890: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x117890u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x117894: 0x0  nop
    ctx->pc = 0x117894u;
    // NOP
    // 0x117898: 0x0  nop
    ctx->pc = 0x117898u;
    // NOP
    // 0x11789c: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11789Cu;
    {
        const bool branch_taken_0x11789c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11789c) {
            ctx->pc = 0x117888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117888;
        }
    }
    ctx->pc = 0x1178A4u;
    // 0x1178a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1178A4u;
    {
        const bool branch_taken_0x1178a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1178A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178A4u;
        // 0x1178a8: 0x2e420401  sltiu       $v0, $s2, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178a4) {
            ctx->pc = 0x1178B0u;
            return;
        }
    }
    ctx->pc = 0x1178ACu;
}
