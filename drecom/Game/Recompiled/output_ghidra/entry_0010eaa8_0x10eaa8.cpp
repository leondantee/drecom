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

// Function: entry_0010eaa8
// Address: 0x10eaa8 - 0x10eacc
void entry_0010eaa8_0x10eaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010eaa8_0x10eaa8");
#endif

    ctx->pc = 0x10eaa8u;

label_10eaa8:
    // 0x10eaa8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10eaac: 0x0  nop
    ctx->pc = 0x10eaacu;
    // NOP
    // 0x10eab0: 0x0  nop
    ctx->pc = 0x10eab0u;
    // NOP
    // 0x10eab4: 0x0  nop
    ctx->pc = 0x10eab4u;
    // NOP
    // 0x10eab8: 0x0  nop
    ctx->pc = 0x10eab8u;
    // NOP
    // 0x10eabc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10EABCu;
    {
        const bool branch_taken_0x10eabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10eabc) {
            ctx->pc = 0x10EAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10eaa8;
        }
    }
    ctx->pc = 0x10EAC4u;
    // 0x10eac4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x10EAC4u;
    {
        const bool branch_taken_0x10eac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAC4u;
        // 0x10eac8: 0x26304fe0  addiu       $s0, $s1, 0x4FE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eac4) {
            ctx->pc = 0x10EA68u;
            return;
        }
    }
    ctx->pc = 0x10EACCu;
}
