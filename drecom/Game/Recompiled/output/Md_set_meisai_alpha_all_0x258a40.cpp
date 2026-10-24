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

// Function: Md_set_meisai_alpha_all
// Address: 0x258a40 - 0x258a98
void Md_set_meisai_alpha_all_0x258a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_set_meisai_alpha_all_0x258a40");
#endif

    switch (ctx->pc) {
        case 0x258a60u: goto label_258a60;
        case 0x258a74u: goto label_258a74;
        default: break;
    }

    ctx->pc = 0x258a40u;

    // 0x258a40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258a44: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x258a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x258a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258a4c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x258a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x258a50: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x258a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x258a54: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x258a54u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x258a58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x258A58u;
    {
        const bool branch_taken_0x258a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258a58) {
            ctx->pc = 0x258A78u;
            goto label_258a78;
        }
    }
    ctx->pc = 0x258A60u;
label_258a60:
    // 0x258a60: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258a64: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x258a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x258a68: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x258a68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x258a6c: 0xc0962a8  jal         func_258AA0
    ctx->pc = 0x258A6Cu;
    SET_GPR_U32(ctx, 31, 0x258A74u);
    ctx->pc = 0x258AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258AA0u, 0x258A6Cu, 0x258A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258A74u;
label_258a74:
    // 0x258a74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x258a74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_258a78:
    // 0x258a78: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x258a78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x258a7c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x258A7Cu;
    {
        const bool branch_taken_0x258a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x258a7c) {
            ctx->pc = 0x258A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258a60;
        }
    }
    ctx->pc = 0x258A84u;
    // 0x258a84: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x258a84u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258a88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258a8c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x258a8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x258a90: 0x3e00008  jr          $ra
    ctx->pc = 0x258A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258A98u;
}
