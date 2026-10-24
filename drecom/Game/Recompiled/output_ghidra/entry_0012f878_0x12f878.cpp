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

// Function: entry_0012f878
// Address: 0x12f878 - 0x12f8b0
void entry_0012f878_0x12f878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f878_0x12f878");
#endif

    switch (ctx->pc) {
        case 0x12f880u: goto label_12f880;
        default: break;
    }

    ctx->pc = 0x12f878u;

    // 0x12f878: 0xc067694  jal         func_19DA50
    ctx->pc = 0x12F878u;
    SET_GPR_U32(ctx, 31, 0x12F880u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12F878u, 0x12F880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F880u;
label_12f880:
    // 0x12f880: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12f880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12f884: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x12f884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x12f888: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12f888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f88c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x12F88Cu;
    {
        const bool branch_taken_0x12f88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12f88c) {
            ctx->pc = 0x12F910u;
            return;
        }
    }
    ctx->pc = 0x12F894u;
    // 0x12f894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12f894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f898: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12F898u;
    {
        const bool branch_taken_0x12f898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12f898) {
            ctx->pc = 0x12F8E0u;
            return;
        }
    }
    ctx->pc = 0x12F8A0u;
    // 0x12f8a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F8A0u;
    {
        const bool branch_taken_0x12f8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f8a0) {
            ctx->pc = 0x12F8B0u;
            return;
        }
    }
    ctx->pc = 0x12F8A8u;
    // 0x12f8a8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12F8A8u;
    {
        const bool branch_taken_0x12f8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f8a8) {
            ctx->pc = 0x12F8B0u;
            return;
        }
    }
    ctx->pc = 0x12F8B0u;
}
