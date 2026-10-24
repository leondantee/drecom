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

// Function: entry_00126820
// Address: 0x126820 - 0x126870
void entry_00126820_0x126820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126820_0x126820");
#endif

    switch (ctx->pc) {
        case 0x126828u: goto label_126828;
        default: break;
    }

    ctx->pc = 0x126820u;

    // 0x126820: 0xc067694  jal         func_19DA50
    ctx->pc = 0x126820u;
    SET_GPR_U32(ctx, 31, 0x126828u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x126820u, 0x126828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126828u;
label_126828:
    // 0x126828: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x126828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12682c: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x12682cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x126830: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x126830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x126834: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x126834u;
    {
        const bool branch_taken_0x126834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x126834) {
            ctx->pc = 0x12691Cu;
            return;
        }
    }
    ctx->pc = 0x12683Cu;
    // 0x12683c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12683cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x126840: 0x10830036  beq         $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x126840u;
    {
        const bool branch_taken_0x126840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x126840) {
            ctx->pc = 0x12691Cu;
            return;
        }
    }
    ctx->pc = 0x126848u;
    // 0x126848: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x126848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12684c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12684Cu;
    {
        const bool branch_taken_0x12684c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12684c) {
            ctx->pc = 0x126870u;
            return;
        }
    }
    ctx->pc = 0x126854u;
    // 0x126854: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x126854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126858: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x126858u;
    {
        const bool branch_taken_0x126858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x126858) {
            ctx->pc = 0x126870u;
            return;
        }
    }
    ctx->pc = 0x126860u;
    // 0x126860: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x126860u;
    {
        const bool branch_taken_0x126860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x126860) {
            ctx->pc = 0x126870u;
            return;
        }
    }
    ctx->pc = 0x126868u;
    // 0x126868: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x126868u;
    {
        const bool branch_taken_0x126868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126868) {
            ctx->pc = 0x126950u;
            return;
        }
    }
    ctx->pc = 0x126870u;
}
