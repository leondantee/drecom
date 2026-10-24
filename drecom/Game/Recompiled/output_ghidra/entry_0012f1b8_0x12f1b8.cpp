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

// Function: entry_0012f1b8
// Address: 0x12f1b8 - 0x12f1f0
void entry_0012f1b8_0x12f1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f1b8_0x12f1b8");
#endif

    switch (ctx->pc) {
        case 0x12f1c0u: goto label_12f1c0;
        default: break;
    }

    ctx->pc = 0x12f1b8u;

    // 0x12f1b8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x12F1B8u;
    SET_GPR_U32(ctx, 31, 0x12F1C0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12F1B8u, 0x12F1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F1C0u;
label_12f1c0:
    // 0x12f1c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12f1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12f1c4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x12f1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x12f1c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f1cc: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x12F1CCu;
    {
        const bool branch_taken_0x12f1cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12f1cc) {
            ctx->pc = 0x12F250u;
            return;
        }
    }
    ctx->pc = 0x12F1D4u;
    // 0x12f1d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f1d8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12F1D8u;
    {
        const bool branch_taken_0x12f1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12f1d8) {
            ctx->pc = 0x12F220u;
            return;
        }
    }
    ctx->pc = 0x12F1E0u;
    // 0x12f1e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F1E0u;
    {
        const bool branch_taken_0x12f1e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f1e0) {
            ctx->pc = 0x12F1F0u;
            return;
        }
    }
    ctx->pc = 0x12F1E8u;
    // 0x12f1e8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x12F1E8u;
    {
        const bool branch_taken_0x12f1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f1e8) {
            ctx->pc = 0x12F278u;
            return;
        }
    }
    ctx->pc = 0x12F1F0u;
}
