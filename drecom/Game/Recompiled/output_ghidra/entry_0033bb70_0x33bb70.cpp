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

// Function: entry_0033bb70
// Address: 0x33bb70 - 0x33bb90
void entry_0033bb70_0x33bb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033bb70_0x33bb70");
#endif

    ctx->pc = 0x33bb70u;

    // 0x33bb70: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x33bb74: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33bb78: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x33bb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x33bb7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33bb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33bb80: 0x1483ff6e  bne         $a0, $v1, . + 4 + (-0x92 << 2)
    ctx->pc = 0x33BB80u;
    {
        const bool branch_taken_0x33bb80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33bb80) {
            ctx->pc = 0x33B93Cu;
            return;
        }
    }
    ctx->pc = 0x33BB88u;
    // 0x33bb88: 0x100001b8  b           . + 4 + (0x1B8 << 2)
    ctx->pc = 0x33BB88u;
    {
        const bool branch_taken_0x33bb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bb88) {
            ctx->pc = 0x33C26Cu;
            return;
        }
    }
    ctx->pc = 0x33BB90u;
}
