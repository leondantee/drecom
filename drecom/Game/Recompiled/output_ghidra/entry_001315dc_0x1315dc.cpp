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

// Function: entry_001315dc
// Address: 0x1315dc - 0x131620
void entry_001315dc_0x1315dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001315dc_0x1315dc");
#endif

    switch (ctx->pc) {
        case 0x1315e4u: goto label_1315e4;
        default: break;
    }

    ctx->pc = 0x1315dcu;

    // 0x1315dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1315DCu;
    SET_GPR_U32(ctx, 31, 0x1315E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1315DCu, 0x1315E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1315E4u;
label_1315e4:
    // 0x1315e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1315e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1315e8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1315e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1315ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1315ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1315f0: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1315F0u;
    {
        const bool branch_taken_0x1315f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1315f0) {
            ctx->pc = 0x131698u;
            return;
        }
    }
    ctx->pc = 0x1315F8u;
    // 0x1315f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1315f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1315fc: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1315FCu;
    {
        const bool branch_taken_0x1315fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1315fc) {
            ctx->pc = 0x131670u;
            return;
        }
    }
    ctx->pc = 0x131604u;
    // 0x131604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131608: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x131608u;
    {
        const bool branch_taken_0x131608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x131608) {
            ctx->pc = 0x131648u;
            return;
        }
    }
    ctx->pc = 0x131610u;
    // 0x131610: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x131610u;
    {
        const bool branch_taken_0x131610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131610) {
            ctx->pc = 0x131620u;
            return;
        }
    }
    ctx->pc = 0x131618u;
    // 0x131618: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x131618u;
    {
        const bool branch_taken_0x131618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131618) {
            ctx->pc = 0x1316B8u;
            return;
        }
    }
    ctx->pc = 0x131620u;
}
