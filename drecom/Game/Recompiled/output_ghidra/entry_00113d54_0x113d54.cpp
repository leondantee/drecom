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

// Function: entry_00113d54
// Address: 0x113d54 - 0x113d70
void entry_00113d54_0x113d54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113d54_0x113d54");
#endif

    ctx->pc = 0x113d54u;

    // 0x113d54: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x113d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113d58: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x113d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x113d5c: 0x1440ff55  bnez        $v0, . + 4 + (-0xAB << 2)
    ctx->pc = 0x113D5Cu;
    {
        const bool branch_taken_0x113d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D5Cu;
        // 0x113d60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d5c) {
            ctx->pc = 0x113AB4u;
            return;
        }
    }
    ctx->pc = 0x113D64u;
    // 0x113d64: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x113d64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x113d68: 0x2a2b0000  slti        $t3, $s1, 0x0
    ctx->pc = 0x113d68u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x113d6c: 0x0  nop
    ctx->pc = 0x113d6cu;
    // NOP
    ctx->pc = 0x113d70u;
}
