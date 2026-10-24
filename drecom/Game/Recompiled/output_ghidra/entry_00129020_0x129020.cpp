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

// Function: entry_00129020
// Address: 0x129020 - 0x129064
void entry_00129020_0x129020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129020_0x129020");
#endif

    switch (ctx->pc) {
        case 0x129028u: goto label_129028;
        default: break;
    }

    ctx->pc = 0x129020u;

    // 0x129020: 0xc067694  jal         func_19DA50
    ctx->pc = 0x129020u;
    SET_GPR_U32(ctx, 31, 0x129028u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x129020u, 0x129028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129028u;
label_129028:
    // 0x129028: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x129028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12902c: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x12902cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x129030: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x129030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x129034: 0x10830036  beq         $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x129034u;
    {
        const bool branch_taken_0x129034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x129034) {
            ctx->pc = 0x129110u;
            return;
        }
    }
    ctx->pc = 0x12903Cu;
    // 0x12903c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12903cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x129040: 0x10830033  beq         $a0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x129040u;
    {
        const bool branch_taken_0x129040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x129040) {
            ctx->pc = 0x129110u;
            return;
        }
    }
    ctx->pc = 0x129048u;
    // 0x129048: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x129048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12904c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12904Cu;
    {
        const bool branch_taken_0x12904c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12904c) {
            ctx->pc = 0x129064u;
            return;
        }
    }
    ctx->pc = 0x129054u;
    // 0x129054: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x129054u;
    {
        const bool branch_taken_0x129054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x129054) {
            ctx->pc = 0x129064u;
            return;
        }
    }
    ctx->pc = 0x12905Cu;
    // 0x12905c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x12905Cu;
    {
        const bool branch_taken_0x12905c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12905c) {
            ctx->pc = 0x129178u;
            return;
        }
    }
    ctx->pc = 0x129064u;
}
