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

// Function: entry_00101658
// Address: 0x101658 - 0x101674
void entry_00101658_0x101658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101658_0x101658");
#endif

    ctx->pc = 0x101658u;

label_101658:
    // 0x101658: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x101658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10165c: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x10165Cu;
    {
        const bool branch_taken_0x10165c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10165Cu;
        // 0x101660: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10165c) {
            ctx->pc = 0x101560u;
            return;
        }
    }
    ctx->pc = 0x101664u;
    // 0x101664: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x101664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101668: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x101668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x10166c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10166Cu;
    {
        const bool branch_taken_0x10166c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10166Cu;
        // 0x101670: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10166c) {
            ctx->pc = 0x101658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101658;
        }
    }
    ctx->pc = 0x101674u;
}
