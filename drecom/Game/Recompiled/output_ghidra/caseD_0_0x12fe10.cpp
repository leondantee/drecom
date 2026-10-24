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

// Function: caseD_0
// Address: 0x12fe10 - 0x12fe48
void caseD_0_0x12fe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x12fe10");
#endif

    switch (ctx->pc) {
        case 0x12fe18u: goto label_12fe18;
        default: break;
    }

    ctx->pc = 0x12fe10u;

    // 0x12fe10: 0xc067694  jal         func_19DA50
    ctx->pc = 0x12FE10u;
    SET_GPR_U32(ctx, 31, 0x12FE18u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12FE10u, 0x12FE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE18u;
label_12fe18:
    // 0x12fe18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12fe18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12fe1c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x12fe1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x12fe20: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12fe20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fe24: 0x10640022  beq         $v1, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x12FE24u;
    {
        const bool branch_taken_0x12fe24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x12fe24) {
            ctx->pc = 0x12FEB0u;
            return;
        }
    }
    ctx->pc = 0x12FE2Cu;
    // 0x12fe2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fe30: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x12FE30u;
    {
        const bool branch_taken_0x12fe30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12fe30) {
            ctx->pc = 0x12FE80u;
            return;
        }
    }
    ctx->pc = 0x12FE38u;
    // 0x12fe38: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FE38u;
    {
        const bool branch_taken_0x12fe38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fe38) {
            ctx->pc = 0x12FE48u;
            return;
        }
    }
    ctx->pc = 0x12FE40u;
    // 0x12fe40: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12FE40u;
    {
        const bool branch_taken_0x12fe40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fe40) {
            ctx->pc = 0x12FE48u;
            return;
        }
    }
    ctx->pc = 0x12FE48u;
}
