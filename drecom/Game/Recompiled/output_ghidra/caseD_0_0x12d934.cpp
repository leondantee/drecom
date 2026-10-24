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
// Address: 0x12d934 - 0x12d96c
void caseD_0_0x12d934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x12d934");
#endif

    switch (ctx->pc) {
        case 0x12d93cu: goto label_12d93c;
        default: break;
    }

    ctx->pc = 0x12d934u;

    // 0x12d934: 0xc067694  jal         func_19DA50
    ctx->pc = 0x12D934u;
    SET_GPR_U32(ctx, 31, 0x12D93Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12D934u, 0x12D93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D93Cu;
label_12d93c:
    // 0x12d93c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x12d93cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12d940: 0x30e80003  andi        $t0, $a3, 0x3
    ctx->pc = 0x12d940u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x12d944: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12d944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12d948: 0x11020021  beq         $t0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x12D948u;
    {
        const bool branch_taken_0x12d948 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x12d948) {
            ctx->pc = 0x12D9D0u;
            return;
        }
    }
    ctx->pc = 0x12D950u;
    // 0x12d950: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12d950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d954: 0x11040012  beq         $t0, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12D954u;
    {
        const bool branch_taken_0x12d954 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        if (branch_taken_0x12d954) {
            ctx->pc = 0x12D9A0u;
            return;
        }
    }
    ctx->pc = 0x12D95Cu;
    // 0x12d95c: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D95Cu;
    {
        const bool branch_taken_0x12d95c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d95c) {
            ctx->pc = 0x12D96Cu;
            return;
        }
    }
    ctx->pc = 0x12D964u;
    // 0x12d964: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12D964u;
    {
        const bool branch_taken_0x12d964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d964) {
            ctx->pc = 0x12D96Cu;
            return;
        }
    }
    ctx->pc = 0x12D96Cu;
}
