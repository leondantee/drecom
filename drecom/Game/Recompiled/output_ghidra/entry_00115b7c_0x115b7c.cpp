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

// Function: entry_00115b7c
// Address: 0x115b7c - 0x115b98
void entry_00115b7c_0x115b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115b7c_0x115b7c");
#endif

    ctx->pc = 0x115b7cu;

    // 0x115b7c: 0xa812  mflo        $s5
    ctx->pc = 0x115b7cu;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x115b80: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x115b80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b84: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x115B84u;
    {
        const bool branch_taken_0x115b84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x115B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B84u;
        // 0x115b88: 0x160b02d  daddu       $s6, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b84) {
            ctx->pc = 0x115C30u;
            return;
        }
    }
    ctx->pc = 0x115B8Cu;
    // 0x115b8c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x115b8cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x115b90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b94: 0x0  nop
    ctx->pc = 0x115b94u;
    // NOP
    ctx->pc = 0x115b98u;
}
