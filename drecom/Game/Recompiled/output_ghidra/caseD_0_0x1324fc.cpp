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
// Address: 0x1324fc - 0x132534
void caseD_0_0x1324fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1324fc");
#endif

    switch (ctx->pc) {
        case 0x132504u: goto label_132504;
        default: break;
    }

    ctx->pc = 0x1324fcu;

    // 0x1324fc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1324FCu;
    SET_GPR_U32(ctx, 31, 0x132504u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1324FCu, 0x132504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132504u;
label_132504:
    // 0x132504: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x132504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x132508: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x132508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x13250c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13250cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x132510: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x132510u;
    {
        const bool branch_taken_0x132510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x132510) {
            ctx->pc = 0x132594u;
            return;
        }
    }
    ctx->pc = 0x132518u;
    // 0x132518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13251c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13251Cu;
    {
        const bool branch_taken_0x13251c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13251c) {
            ctx->pc = 0x132564u;
            return;
        }
    }
    ctx->pc = 0x132524u;
    // 0x132524: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x132524u;
    {
        const bool branch_taken_0x132524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132524) {
            ctx->pc = 0x132534u;
            return;
        }
    }
    ctx->pc = 0x13252Cu;
    // 0x13252c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x13252Cu;
    {
        const bool branch_taken_0x13252c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13252c) {
            ctx->pc = 0x132534u;
            return;
        }
    }
    ctx->pc = 0x132534u;
}
