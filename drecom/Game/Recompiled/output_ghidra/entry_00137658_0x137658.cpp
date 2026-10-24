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

// Function: entry_00137658
// Address: 0x137658 - 0x13769c
void entry_00137658_0x137658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137658_0x137658");
#endif

    switch (ctx->pc) {
        case 0x137660u: goto label_137660;
        default: break;
    }

    ctx->pc = 0x137658u;

    // 0x137658: 0xc067694  jal         func_19DA50
    ctx->pc = 0x137658u;
    SET_GPR_U32(ctx, 31, 0x137660u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x137658u, 0x137660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137660u;
label_137660:
    // 0x137660: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x137660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x137664: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x137664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x137668: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x137668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13766c: 0x1083004f  beq         $a0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x13766Cu;
    {
        const bool branch_taken_0x13766c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13766c) {
            ctx->pc = 0x1377ACu;
            return;
        }
    }
    ctx->pc = 0x137674u;
    // 0x137674: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x137674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x137678: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x137678u;
    {
        const bool branch_taken_0x137678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x137678) {
            ctx->pc = 0x13774Cu;
            return;
        }
    }
    ctx->pc = 0x137680u;
    // 0x137680: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x137680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137684: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x137684u;
    {
        const bool branch_taken_0x137684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x137684) {
            ctx->pc = 0x1376ECu;
            return;
        }
    }
    ctx->pc = 0x13768Cu;
    // 0x13768c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13768Cu;
    {
        const bool branch_taken_0x13768c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13768c) {
            ctx->pc = 0x13769Cu;
            return;
        }
    }
    ctx->pc = 0x137694u;
    // 0x137694: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x137694u;
    {
        const bool branch_taken_0x137694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137694) {
            ctx->pc = 0x137804u;
            return;
        }
    }
    ctx->pc = 0x13769Cu;
}
