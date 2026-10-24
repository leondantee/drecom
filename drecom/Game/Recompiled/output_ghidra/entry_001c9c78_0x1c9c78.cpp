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

// Function: entry_001c9c78
// Address: 0x1c9c78 - 0x1c9cb8
void entry_001c9c78_0x1c9c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9c78_0x1c9c78");
#endif

    switch (ctx->pc) {
        case 0x1c9c88u: goto label_1c9c88;
        case 0x1c9cb0u: goto label_1c9cb0;
        default: break;
    }

    ctx->pc = 0x1c9c78u;

    // 0x1c9c78: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9c7c: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x1c9c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1c9c80: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x1C9C80u;
    SET_GPR_U32(ctx, 31, 0x1C9C88u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x1C9C80u, 0x1C9C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9C88u;
label_1c9c88:
    // 0x1c9c88: 0x144000a1  bnez        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1C9C88u;
    {
        const bool branch_taken_0x1c9c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9c88) {
            ctx->pc = 0x1C9F10u;
            return;
        }
    }
    ctx->pc = 0x1C9C90u;
    // 0x1c9c90: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9c94: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x1c9c94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1c9c98: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1c9c98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1c9c9c: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x1c9c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x1c9ca0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9CA0u;
    {
        const bool branch_taken_0x1c9ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ca0) {
            ctx->pc = 0x1C9CB8u;
            return;
        }
    }
    ctx->pc = 0x1C9CA8u;
    // 0x1c9ca8: 0xc058608  jal         func_161820
    ctx->pc = 0x1C9CA8u;
    SET_GPR_U32(ctx, 31, 0x1C9CB0u);
    ctx->pc = 0x161820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161820u, 0x1C9CA8u, 0x1C9CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9CB0u;
label_1c9cb0:
    // 0x1c9cb0: 0xc0586b0  jal         func_161AC0
    ctx->pc = 0x1C9CB0u;
    SET_GPR_U32(ctx, 31, 0x1C9CB8u);
    ctx->pc = 0x161AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161AC0u, 0x1C9CB0u, 0x1C9CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9CB8u;
}
