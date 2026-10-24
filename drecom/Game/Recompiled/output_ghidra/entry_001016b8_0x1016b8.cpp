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

// Function: entry_001016b8
// Address: 0x1016b8 - 0x1016d8
void entry_001016b8_0x1016b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001016b8_0x1016b8");
#endif

    ctx->pc = 0x1016b8u;

label_1016b8:
    // 0x1016b8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1016b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1016bc: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x1016BCu;
    {
        const bool branch_taken_0x1016bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1016C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016BCu;
        // 0x1016c0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1016bc) {
            ctx->pc = 0x101560u;
            return;
        }
    }
    ctx->pc = 0x1016C4u;
    // 0x1016c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1016c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1016c8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1016c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1016cc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1016CCu;
    {
        const bool branch_taken_0x1016cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1016D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016CCu;
        // 0x1016d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1016cc) {
            ctx->pc = 0x1016B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1016b8;
        }
    }
    ctx->pc = 0x1016D4u;
    // 0x1016d4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1016d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x1016d8u;
}
