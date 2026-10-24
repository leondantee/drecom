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

// Function: entry_00215fd0
// Address: 0x215fd0 - 0x215fec
void entry_00215fd0_0x215fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215fd0_0x215fd0");
#endif

    ctx->pc = 0x215fd0u;

label_215fd0:
    // 0x215fd0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x215fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215fd4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x215FD4u;
    {
        const bool branch_taken_0x215fd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x215fd4) {
            ctx->pc = 0x215FF0u;
            return;
        }
    }
    ctx->pc = 0x215FDCu;
    // 0x215fdc: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x215fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x215fe0: 0x1444fffb  bne         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x215FE0u;
    {
        const bool branch_taken_0x215fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x215FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215FE0u;
        // 0x215fe4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215fe0) {
            ctx->pc = 0x215FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215fd0;
        }
    }
    ctx->pc = 0x215FE8u;
    // 0x215fe8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x215fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->pc = 0x215fecu;
}
