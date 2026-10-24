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

// Function: Md_set_prim
// Address: 0x258340 - 0x2583a4
void Md_set_prim_0x258340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_set_prim_0x258340");
#endif

    switch (ctx->pc) {
        case 0x258360u: goto label_258360;
        case 0x258374u: goto label_258374;
        default: break;
    }

    ctx->pc = 0x258340u;

    // 0x258340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258344: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x258344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x258348: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25834c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25834cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x258350: 0xffa50028  sd          $a1, 0x28($sp)
    ctx->pc = 0x258350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 5));
    // 0x258354: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x258354u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x258358: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x258358u;
    {
        const bool branch_taken_0x258358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258358) {
            ctx->pc = 0x258380u;
            goto label_258380;
        }
    }
    ctx->pc = 0x258360u;
label_258360:
    // 0x258360: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258364: 0xdfa50028  ld          $a1, 0x28($sp)
    ctx->pc = 0x258364u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x258368: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x258368u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25836c: 0xc0960ec  jal         func_2583B0
    ctx->pc = 0x25836Cu;
    SET_GPR_U32(ctx, 31, 0x258374u);
    ctx->pc = 0x2583B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2583B0u, 0x25836Cu, 0x258374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258374u;
label_258374:
    // 0x258374: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x258374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x258378: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x258378u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25837c: 0x0  nop
    ctx->pc = 0x25837cu;
    // NOP
label_258380:
    // 0x258380: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x258380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x258384: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x258384u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x258388: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x258388u;
    {
        const bool branch_taken_0x258388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x258388) {
            ctx->pc = 0x258360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258360;
        }
    }
    ctx->pc = 0x258390u;
    // 0x258390: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x258390u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258398: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x258398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25839c: 0x3e00008  jr          $ra
    ctx->pc = 0x25839Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25839Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2583A4u;
}
