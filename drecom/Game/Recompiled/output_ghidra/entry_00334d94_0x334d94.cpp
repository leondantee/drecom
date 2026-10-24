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

// Function: entry_00334d94
// Address: 0x334d94 - 0x334dcc
void entry_00334d94_0x334d94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00334d94_0x334d94");
#endif

    ctx->pc = 0x334d94u;

    // 0x334d94: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x334d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x334d98: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x334d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x334d9c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x334d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x334da0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x334da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x334da4: 0x24429740  addiu       $v0, $v0, -0x68C0
    ctx->pc = 0x334da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940480));
    // 0x334da8: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x334da8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x334dac: 0x8e035dd0  lw          $v1, 0x5DD0($s0)
    ctx->pc = 0x334dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x334db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x334db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334db4: 0x1062005c  beq         $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x334DB4u;
    {
        const bool branch_taken_0x334db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x334db4) {
            ctx->pc = 0x334F28u;
            return;
        }
    }
    ctx->pc = 0x334DBCu;
    // 0x334dbc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x334DBCu;
    {
        const bool branch_taken_0x334dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x334dbc) {
            ctx->pc = 0x334DCCu;
            return;
        }
    }
    ctx->pc = 0x334DC4u;
    // 0x334dc4: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x334DC4u;
    {
        const bool branch_taken_0x334dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334dc4) {
            ctx->pc = 0x335020u;
            return;
        }
    }
    ctx->pc = 0x334DCCu;
}
