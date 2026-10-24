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

// Function: get_ectrl_work
// Address: 0x18bce0 - 0x18bd64
void get_ectrl_work_0x18bce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get_ectrl_work_0x18bce0");
#endif

    ctx->pc = 0x18bce0u;

    // 0x18bce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18bce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18bce4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18bce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18bce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18bce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18bcec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18bcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18bcf0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x18bcf0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18bcf4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18bcf8: 0x2450a630  addiu       $s0, $v0, -0x59D0
    ctx->pc = 0x18bcf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x18bcfc: 0x8e110084  lw          $s1, 0x84($s0)
    ctx->pc = 0x18bcfcu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x53A6B4u));
    // 0x18bd00: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BD00u;
    {
        const bool branch_taken_0x18bd00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bd00) {
            ctx->pc = 0x18BD18u;
            goto label_18bd18;
        }
    }
    ctx->pc = 0x18BD08u;
    // 0x18bd08: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18bd0c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18bd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18bd10: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18BD10u;
    {
        const bool branch_taken_0x18bd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bd10) {
            ctx->pc = 0x18BD4Cu;
            goto label_18bd4c;
        }
    }
    ctx->pc = 0x18BD18u;
label_18bd18:
    // 0x18bd18: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x18bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x18bd1c: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x18bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x18bd20: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BD20u;
    {
        const bool branch_taken_0x18bd20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18bd20) {
            ctx->pc = 0x18BD38u;
            goto label_18bd38;
        }
    }
    ctx->pc = 0x18BD28u;
    // 0x18bd28: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x18bd28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x18bd2c: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x18bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x18bd30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18BD30u;
    {
        const bool branch_taken_0x18bd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bd30) {
            ctx->pc = 0x18BD48u;
            goto label_18bd48;
        }
    }
    ctx->pc = 0x18BD38u;
label_18bd38:
    // 0x18bd38: 0x8e2200ec  lw          $v0, 0xEC($s1)
    ctx->pc = 0x18bd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
    // 0x18bd3c: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x18bd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x18bd40: 0x8e2200ec  lw          $v0, 0xEC($s1)
    ctx->pc = 0x18bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
    // 0x18bd44: 0xac4000f0  sw          $zero, 0xF0($v0)
    ctx->pc = 0x18bd44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 0));
label_18bd48:
    // 0x18bd48: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x18bd48u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_18bd4c:
    // 0x18bd4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18bd4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18bd50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18bd50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bd54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18bd54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bd58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18bd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18bd5c: 0x3e00008  jr          $ra
    ctx->pc = 0x18BD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BD5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BD64u;
}
