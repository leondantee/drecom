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

// Function: entry_00126bb8
// Address: 0x126bb8 - 0x126bf0
void entry_00126bb8_0x126bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126bb8_0x126bb8");
#endif

    switch (ctx->pc) {
        case 0x126bc0u: goto label_126bc0;
        default: break;
    }

    ctx->pc = 0x126bb8u;

label_126bb8:
    // 0x126bb8: 0xc067694  jal         func_19DA50
label_126bbc:
    if (ctx->pc == 0x126BBCu) {
        ctx->pc = 0x126BC0u;
        goto label_126bc0;
    }
    ctx->pc = 0x126BB8u;
    SET_GPR_U32(ctx, 31, 0x126BC0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x126BB8u, 0x126BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126BC0u;
label_126bc0:
    // 0x126bc0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x126bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_126bc4:
    // 0x126bc4: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x126bc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_126bc8:
    // 0x126bc8: 0x2ca1000c  sltiu       $at, $a1, 0xC
    ctx->pc = 0x126bc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_126bcc:
    // 0x126bcc: 0x10200073  beqz        $at, . + 4 + (0x73 << 2)
label_126bd0:
    if (ctx->pc == 0x126BD0u) {
        ctx->pc = 0x126BD4u;
        goto label_126bd4;
    }
    ctx->pc = 0x126BCCu;
    {
        const bool branch_taken_0x126bcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x126bcc) {
            ctx->pc = 0x126D9Cu;
            return;
        }
    }
    ctx->pc = 0x126BD4u;
label_126bd4:
    // 0x126bd4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x126bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_126bd8:
    // 0x126bd8: 0x2464e230  addiu       $a0, $v1, -0x1DD0
    ctx->pc = 0x126bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959664));
label_126bdc:
    // 0x126bdc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x126bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_126be0:
    // 0x126be0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x126be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_126be4:
    // 0x126be4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x126be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_126be8:
    // 0x126be8: 0x600008  jr          $v1
label_126bec:
    if (ctx->pc == 0x126BECu) {
        ctx->pc = 0x126BF0u;
        goto label_fallthrough_0x126be8;
    }
    ctx->pc = 0x126BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126BE8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x126be8:
    ctx->pc = 0x126BF0u;
}
