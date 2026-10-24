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

// Function: entry_002e35fc
// Address: 0x2e35fc - 0x2e3640
void entry_002e35fc_0x2e35fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e35fc_0x2e35fc");
#endif

    switch (ctx->pc) {
        case 0x2e3604u: goto label_2e3604;
        default: break;
    }

    ctx->pc = 0x2e35fcu;

    // 0x2e35fc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E35FCu;
    SET_GPR_U32(ctx, 31, 0x2E3604u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E35FCu, 0x2E3604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3604u;
label_2e3604:
    // 0x2e3604: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e3604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e3608: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2e3608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2e360c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e3610: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E3610u;
    {
        const bool branch_taken_0x2e3610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e3610) {
            ctx->pc = 0x2E3688u;
            return;
        }
    }
    ctx->pc = 0x2E3618u;
    // 0x2e3618: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e3618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e361c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E361Cu;
    {
        const bool branch_taken_0x2e361c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e361c) {
            ctx->pc = 0x2E3670u;
            return;
        }
    }
    ctx->pc = 0x2E3624u;
    // 0x2e3624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3628: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E3628u;
    {
        const bool branch_taken_0x2e3628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e3628) {
            ctx->pc = 0x2E3658u;
            return;
        }
    }
    ctx->pc = 0x2E3630u;
    // 0x2e3630: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3630u;
    {
        const bool branch_taken_0x2e3630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3630) {
            ctx->pc = 0x2E3640u;
            return;
        }
    }
    ctx->pc = 0x2E3638u;
    // 0x2e3638: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E3638u;
    {
        const bool branch_taken_0x2e3638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3638) {
            ctx->pc = 0x2E3698u;
            return;
        }
    }
    ctx->pc = 0x2E3640u;
}
