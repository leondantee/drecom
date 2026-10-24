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

// Function: Md_parts_set_tex0
// Address: 0x259040 - 0x259098
void Md_parts_set_tex0_0x259040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_parts_set_tex0_0x259040");
#endif

    switch (ctx->pc) {
        case 0x259060u: goto label_259060;
        case 0x259074u: goto label_259074;
        default: break;
    }

    ctx->pc = 0x259040u;

    // 0x259040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259044: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x259044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x259048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25904c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25904cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x259050: 0xffa50028  sd          $a1, 0x28($sp)
    ctx->pc = 0x259050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 5));
    // 0x259054: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x259054u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x259058: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x259058u;
    {
        const bool branch_taken_0x259058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259058) {
            ctx->pc = 0x259078u;
            goto label_259078;
        }
    }
    ctx->pc = 0x259060u;
label_259060:
    // 0x259060: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x259060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x259064: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x259064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259068: 0xdfa50028  ld          $a1, 0x28($sp)
    ctx->pc = 0x259068u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25906c: 0xc096428  jal         func_2590A0
    ctx->pc = 0x25906Cu;
    SET_GPR_U32(ctx, 31, 0x259074u);
    ctx->pc = 0x2590A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2590A0u, 0x25906Cu, 0x259074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259074u;
label_259074:
    // 0x259074: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x259074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_259078:
    // 0x259078: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x259078u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x25907c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x25907Cu;
    {
        const bool branch_taken_0x25907c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25907c) {
            ctx->pc = 0x259060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259060;
        }
    }
    ctx->pc = 0x259084u;
    // 0x259084: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x259084u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25908c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25908cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x259090: 0x3e00008  jr          $ra
    ctx->pc = 0x259090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259098u;
}
