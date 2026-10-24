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

// Function: entry_00101750
// Address: 0x101750 - 0x10176c
void entry_00101750_0x101750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101750_0x101750");
#endif

    ctx->pc = 0x101750u;

label_101750:
    // 0x101750: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x101750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x101754: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x101754u;
    {
        const bool branch_taken_0x101754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101754u;
        // 0x101758: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101754) {
            ctx->pc = 0x101560u;
            return;
        }
    }
    ctx->pc = 0x10175Cu;
    // 0x10175c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10175cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101760: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x101760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x101764: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x101764u;
    {
        const bool branch_taken_0x101764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101764u;
        // 0x101768: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101764) {
            ctx->pc = 0x101750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101750;
        }
    }
    ctx->pc = 0x10176Cu;
}
