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

// Function: entry_001313e8
// Address: 0x1313e8 - 0x131420
void entry_001313e8_0x1313e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001313e8_0x1313e8");
#endif

    switch (ctx->pc) {
        case 0x1313f0u: goto label_1313f0;
        default: break;
    }

    ctx->pc = 0x1313e8u;

    // 0x1313e8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1313E8u;
    SET_GPR_U32(ctx, 31, 0x1313F0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1313E8u, 0x1313F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313F0u;
label_1313f0:
    // 0x1313f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1313f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1313f4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1313f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1313f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1313f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1313fc: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1313FCu;
    {
        const bool branch_taken_0x1313fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1313fc) {
            ctx->pc = 0x131480u;
            return;
        }
    }
    ctx->pc = 0x131404u;
    // 0x131404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131408: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x131408u;
    {
        const bool branch_taken_0x131408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x131408) {
            ctx->pc = 0x131450u;
            return;
        }
    }
    ctx->pc = 0x131410u;
    // 0x131410: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x131410u;
    {
        const bool branch_taken_0x131410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131410) {
            ctx->pc = 0x131420u;
            return;
        }
    }
    ctx->pc = 0x131418u;
    // 0x131418: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x131418u;
    {
        const bool branch_taken_0x131418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131418) {
            ctx->pc = 0x131420u;
            return;
        }
    }
    ctx->pc = 0x131420u;
}
