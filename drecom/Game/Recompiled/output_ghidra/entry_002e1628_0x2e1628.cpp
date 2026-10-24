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

// Function: entry_002e1628
// Address: 0x2e1628 - 0x2e166c
void entry_002e1628_0x2e1628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1628_0x2e1628");
#endif

    switch (ctx->pc) {
        case 0x2e1630u: goto label_2e1630;
        default: break;
    }

    ctx->pc = 0x2e1628u;

    // 0x2e1628: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E1628u;
    SET_GPR_U32(ctx, 31, 0x2E1630u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E1628u, 0x2E1630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1630u;
label_2e1630:
    // 0x2e1630: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e1630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e1634: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2e1634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2e1638: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e1638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e163c: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E163Cu;
    {
        const bool branch_taken_0x2e163c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e163c) {
            ctx->pc = 0x2E16B4u;
            return;
        }
    }
    ctx->pc = 0x2E1644u;
    // 0x2e1644: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e1644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e1648: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E1648u;
    {
        const bool branch_taken_0x2e1648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1648) {
            ctx->pc = 0x2E169Cu;
            return;
        }
    }
    ctx->pc = 0x2E1650u;
    // 0x2e1650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e1650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1654: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E1654u;
    {
        const bool branch_taken_0x2e1654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1654) {
            ctx->pc = 0x2E1684u;
            return;
        }
    }
    ctx->pc = 0x2E165Cu;
    // 0x2e165c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E165Cu;
    {
        const bool branch_taken_0x2e165c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e165c) {
            ctx->pc = 0x2E166Cu;
            return;
        }
    }
    ctx->pc = 0x2E1664u;
    // 0x2e1664: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E1664u;
    {
        const bool branch_taken_0x2e1664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1664) {
            ctx->pc = 0x2E16C4u;
            return;
        }
    }
    ctx->pc = 0x2E166Cu;
}
