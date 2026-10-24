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

// Function: Get_em04
// Address: 0x33f170 - 0x33f1f8
void Get_em04_0x33f170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_em04_0x33f170");
#endif

    switch (ctx->pc) {
        case 0x33f190u: goto label_33f190;
        default: break;
    }

    ctx->pc = 0x33f170u;

    // 0x33f170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33f170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33f174: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33f174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33f178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33f178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33f17c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x33f17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x33f180: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x33f180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33f184: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x33f184u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33f188: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x33F188u;
    {
        const bool branch_taken_0x33f188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f188) {
            ctx->pc = 0x33F1C8u;
            goto label_33f1c8;
        }
    }
    ctx->pc = 0x33F190u;
label_33f190:
    // 0x33f190: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x33f190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x33f194: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33f194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33f198: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x33f198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x33f19c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33f1a0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x33f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x33f1a4: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x33f1a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x33f1a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33f1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33f1ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x33f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33f1b0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33F1B0u;
    {
        const bool branch_taken_0x33f1b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33f1b0) {
            ctx->pc = 0x33F1C4u;
            goto label_33f1c4;
        }
    }
    ctx->pc = 0x33F1B8u;
    // 0x33f1b8: 0x72008e28  paddub      $s1, $s0, $zero
    ctx->pc = 0x33f1b8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33f1bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33F1BCu;
    {
        const bool branch_taken_0x33f1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f1bc) {
            ctx->pc = 0x33F1E0u;
            goto label_33f1e0;
        }
    }
    ctx->pc = 0x33F1C4u;
label_33f1c4:
    // 0x33f1c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33f1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_33f1c8:
    // 0x33f1c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33f1cc: 0x944210a4  lhu         $v0, 0x10A4($v0)
    ctx->pc = 0x33f1ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4260)));
    // 0x33f1d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33f1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33f1d4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x33f1d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33f1d8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x33F1D8u;
    {
        const bool branch_taken_0x33f1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f1d8) {
            ctx->pc = 0x33F190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f190;
        }
    }
    ctx->pc = 0x33F1E0u;
label_33f1e0:
    // 0x33f1e0: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x33f1e0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x33f1e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33f1e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f1e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33f1e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f1ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x33f1ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33f1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x33F1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F1F8u;
}
