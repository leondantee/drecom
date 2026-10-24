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

// Function: entry_0011f750
// Address: 0x11f750 - 0x11f77c
void entry_0011f750_0x11f750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f750_0x11f750");
#endif

    ctx->pc = 0x11f750u;

label_11f750:
    // 0x11f750: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x11f750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x11f754: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x11f754u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x11f758: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x11f758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x11f75c: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x11f75cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x11f760: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11f760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11f764: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x11f764u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11f768: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x11f768u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x11f76c: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11F76Cu;
    {
        const bool branch_taken_0x11f76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F76Cu;
        // 0x11f770: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f76c) {
            ctx->pc = 0x11F750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f750;
        }
    }
    ctx->pc = 0x11F774u;
    // 0x11f774: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11F774u;
    {
        const bool branch_taken_0x11f774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F774u;
        // 0x11f778: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f774) {
            ctx->pc = 0x11F78Cu;
            return;
        }
    }
    ctx->pc = 0x11F77Cu;
}
