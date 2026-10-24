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
// Address: 0x131e5c - 0x131e94
void caseD_0_0x131e5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x131e5c");
#endif

    switch (ctx->pc) {
        case 0x131e64u: goto label_131e64;
        default: break;
    }

    ctx->pc = 0x131e5cu;

    // 0x131e5c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x131E5Cu;
    SET_GPR_U32(ctx, 31, 0x131E64u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x131E5Cu, 0x131E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131E64u;
label_131e64:
    // 0x131e64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x131e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x131e68: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x131e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x131e6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x131e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x131e70: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x131E70u;
    {
        const bool branch_taken_0x131e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x131e70) {
            ctx->pc = 0x131EF4u;
            return;
        }
    }
    ctx->pc = 0x131E78u;
    // 0x131e78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131e7c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x131E7Cu;
    {
        const bool branch_taken_0x131e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x131e7c) {
            ctx->pc = 0x131EC4u;
            return;
        }
    }
    ctx->pc = 0x131E84u;
    // 0x131e84: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x131E84u;
    {
        const bool branch_taken_0x131e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131e84) {
            ctx->pc = 0x131E94u;
            return;
        }
    }
    ctx->pc = 0x131E8Cu;
    // 0x131e8c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x131E8Cu;
    {
        const bool branch_taken_0x131e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131e8c) {
            ctx->pc = 0x131E94u;
            return;
        }
    }
    ctx->pc = 0x131E94u;
}
