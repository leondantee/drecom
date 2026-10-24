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

// Function: entry_0010d898
// Address: 0x10d898 - 0x10d8bc
void entry_0010d898_0x10d898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d898_0x10d898");
#endif

    ctx->pc = 0x10d898u;

label_10d898:
    // 0x10d898: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10d898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10d89c: 0x0  nop
    ctx->pc = 0x10d89cu;
    // NOP
    // 0x10d8a0: 0x0  nop
    ctx->pc = 0x10d8a0u;
    // NOP
    // 0x10d8a4: 0x0  nop
    ctx->pc = 0x10d8a4u;
    // NOP
    // 0x10d8a8: 0x0  nop
    ctx->pc = 0x10d8a8u;
    // NOP
    // 0x10d8ac: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10D8ACu;
    {
        const bool branch_taken_0x10d8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10d8ac) {
            ctx->pc = 0x10D898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d898;
        }
    }
    ctx->pc = 0x10D8B4u;
    // 0x10d8b4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x10D8B4u;
    {
        const bool branch_taken_0x10d8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8B4u;
        // 0x10d8b8: 0x26f03ea8  addiu       $s0, $s7, 0x3EA8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 16040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d8b4) {
            ctx->pc = 0x10D858u;
            return;
        }
    }
    ctx->pc = 0x10D8BCu;
}
