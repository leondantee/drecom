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

// Function: entry_001a1778
// Address: 0x1a1778 - 0x1a17bc
void entry_001a1778_0x1a1778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1778_0x1a1778");
#endif

    switch (ctx->pc) {
        case 0x1a17a8u: goto label_1a17a8;
        case 0x1a17b4u: goto label_1a17b4;
        default: break;
    }

    ctx->pc = 0x1a1778u;

label_1a1778:
    // 0x1a1778: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a1778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1a177c:
    // 0x1a177c: 0x24442880  addiu       $a0, $v0, 0x2880
    ctx->pc = 0x1a177cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10368));
label_1a1780:
    // 0x1a1780: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a1780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1a1784:
    // 0x1a1784: 0x90222880  lbu         $v0, 0x2880($at)
    ctx->pc = 0x1a1784u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 10368)));
label_1a1788:
    // 0x1a1788: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a1788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1a178c:
    // 0x1a178c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a178cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a1790:
    // 0x1a1790: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1a1790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1a1794:
    // 0x1a1794: 0x244280e0  addiu       $v0, $v0, -0x7F20
    ctx->pc = 0x1a1794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934752));
label_1a1798:
    // 0x1a1798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a179c:
    // 0x1a179c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a179cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a17a0:
    // 0x1a17a0: 0x40f809  jalr        $v0
label_1a17a4:
    if (ctx->pc == 0x1A17A4u) {
        ctx->pc = 0x1A17A8u;
        goto label_1a17a8;
    }
    ctx->pc = 0x1A17A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A17A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A17A0u, 0x1A17A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A17A8u;
label_1a17a8:
    // 0x1a17a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a17a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a17ac:
    // 0x1a17ac: 0xc06750c  jal         func_19D430
label_1a17b0:
    if (ctx->pc == 0x1A17B0u) {
        ctx->pc = 0x1A17B4u;
        goto label_1a17b4;
    }
    ctx->pc = 0x1A17ACu;
    SET_GPR_U32(ctx, 31, 0x1A17B4u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1A17ACu, 0x1A17B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A17B4u;
label_1a17b4:
    // 0x1a17b4: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_1a17b8:
    if (ctx->pc == 0x1A17B8u) {
        ctx->pc = 0x1A17BCu;
        goto label_fallthrough_0x1a17b4;
    }
    ctx->pc = 0x1A17B4u;
    {
        const bool branch_taken_0x1a17b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a17b4) {
            ctx->pc = 0x1A1778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1778;
        }
    }
label_fallthrough_0x1a17b4:
    ctx->pc = 0x1A17BCu;
}
