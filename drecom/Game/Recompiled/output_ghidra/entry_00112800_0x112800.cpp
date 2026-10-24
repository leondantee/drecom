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

// Function: entry_00112800
// Address: 0x112800 - 0x112814
void entry_00112800_0x112800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112800_0x112800");
#endif

    ctx->pc = 0x112800u;

    // 0x112800: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x112800u;
    {
        const bool branch_taken_0x112800 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x112804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112800u;
        // 0x112804: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112800) {
            ctx->pc = 0x1127E0u;
            return;
        }
    }
    ctx->pc = 0x112808u;
    // 0x112808: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x112808u;
    {
        const bool branch_taken_0x112808 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112808u;
        // 0x11280c: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112808) {
            ctx->pc = 0x112814u;
            return;
        }
    }
    ctx->pc = 0x112810u;
    // 0x112810: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x112810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x112814u;
}
