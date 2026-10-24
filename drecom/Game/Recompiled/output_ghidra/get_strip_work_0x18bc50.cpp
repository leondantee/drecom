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

// Function: get_strip_work
// Address: 0x18bc50 - 0x18bcd4
void get_strip_work_0x18bc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get_strip_work_0x18bc50");
#endif

    ctx->pc = 0x18bc50u;

    // 0x18bc50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18bc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18bc54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18bc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18bc58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18bc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18bc5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18bc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18bc60: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x18bc60u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18bc64: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18bc68: 0x2450a630  addiu       $s0, $v0, -0x59D0
    ctx->pc = 0x18bc68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x18bc6c: 0x8e110074  lw          $s1, 0x74($s0)
    ctx->pc = 0x18bc6cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x53A6A4u));
    // 0x18bc70: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BC70u;
    {
        const bool branch_taken_0x18bc70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bc70) {
            ctx->pc = 0x18BC88u;
            goto label_18bc88;
        }
    }
    ctx->pc = 0x18BC78u;
    // 0x18bc78: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18bc7c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18bc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18bc80: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18BC80u;
    {
        const bool branch_taken_0x18bc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bc80) {
            ctx->pc = 0x18BCBCu;
            goto label_18bcbc;
        }
    }
    ctx->pc = 0x18BC88u;
label_18bc88:
    // 0x18bc88: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x18bc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x18bc8c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x18bc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x18bc90: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BC90u;
    {
        const bool branch_taken_0x18bc90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18bc90) {
            ctx->pc = 0x18BCA8u;
            goto label_18bca8;
        }
    }
    ctx->pc = 0x18BC98u;
    // 0x18bc98: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x18bc98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x18bc9c: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x18bc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x18bca0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18BCA0u;
    {
        const bool branch_taken_0x18bca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bca0) {
            ctx->pc = 0x18BCB8u;
            goto label_18bcb8;
        }
    }
    ctx->pc = 0x18BCA8u;
label_18bca8:
    // 0x18bca8: 0x8e220b28  lw          $v0, 0xB28($s1)
    ctx->pc = 0x18bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2856)));
    // 0x18bcac: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x18bcacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x18bcb0: 0x8e220b28  lw          $v0, 0xB28($s1)
    ctx->pc = 0x18bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2856)));
    // 0x18bcb4: 0xac400b2c  sw          $zero, 0xB2C($v0)
    ctx->pc = 0x18bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2860), GPR_U32(ctx, 0));
label_18bcb8:
    // 0x18bcb8: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x18bcb8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_18bcbc:
    // 0x18bcbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18bcbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18bcc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18bcc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bcc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18bcc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bcc8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18bcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18bccc: 0x3e00008  jr          $ra
    ctx->pc = 0x18BCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BCD4u;
}
