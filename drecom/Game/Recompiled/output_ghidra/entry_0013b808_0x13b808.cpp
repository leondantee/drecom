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

// Function: entry_0013b808
// Address: 0x13b808 - 0x13b8c8
void entry_0013b808_0x13b808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b808_0x13b808");
#endif

    switch (ctx->pc) {
        case 0x13b878u: goto label_13b878;
        case 0x13b884u: goto label_13b884;
        case 0x13b890u: goto label_13b890;
        case 0x13b89cu: goto label_13b89c;
        case 0x13b8a8u: goto label_13b8a8;
        default: break;
    }

    ctx->pc = 0x13b808u;

label_13b808:
    // 0x13b808: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13b808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13b80c: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x13b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x13b810: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13b810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13b814: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13b814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13b818: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x13b818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13b81c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x13b81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13b820: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x13b820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x13b824: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13b824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13b828: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x13b828u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x13b82c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13b82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13b830: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13b830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13b834: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x13b834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13b838: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x13b838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13b83c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x13b83cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x13b840: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13b840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13b844: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x13b844u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x13b848: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13b848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13b84c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13b850: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x13b850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13b854: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x13b854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x13b858: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x13b858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x13b85c: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x13b85cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x13b860: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x13b860u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x13b864: 0x1640ffe8  bnez        $s2, . + 4 + (-0x18 << 2)
    ctx->pc = 0x13B864u;
    {
        const bool branch_taken_0x13b864 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b864) {
            ctx->pc = 0x13B808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b808;
        }
    }
    ctx->pc = 0x13B86Cu;
    // 0x13b86c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x13b86cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13b870: 0xc04ee34  jal         func_13B8D0
    ctx->pc = 0x13B870u;
    SET_GPR_U32(ctx, 31, 0x13B878u);
    ctx->pc = 0x13B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B8D0u, 0x13B870u, 0x13B878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B878u;
label_13b878:
    // 0x13b878: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x13b878u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13b87c: 0xc04ef58  jal         func_13BD60
    ctx->pc = 0x13B87Cu;
    SET_GPR_U32(ctx, 31, 0x13B884u);
    ctx->pc = 0x13BD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BD60u, 0x13B87Cu, 0x13B884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B884u;
label_13b884:
    // 0x13b884: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x13b884u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13b888: 0xc04efd8  jal         func_13BF60
    ctx->pc = 0x13B888u;
    SET_GPR_U32(ctx, 31, 0x13B890u);
    ctx->pc = 0x13BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BF60u, 0x13B888u, 0x13B890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B890u;
label_13b890:
    // 0x13b890: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x13b890u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13b894: 0xc0793e4  jal         func_1E4F90
    ctx->pc = 0x13B894u;
    SET_GPR_U32(ctx, 31, 0x13B89Cu);
    ctx->pc = 0x1E4F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4F90u, 0x13B894u, 0x13B89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B89Cu;
label_13b89c:
    // 0x13b89c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x13b89cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13b8a0: 0xc04f898  jal         func_13E260
    ctx->pc = 0x13B8A0u;
    SET_GPR_U32(ctx, 31, 0x13B8A8u);
    ctx->pc = 0x13E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E260u, 0x13B8A0u, 0x13B8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B8A8u;
label_13b8a8:
    // 0x13b8a8: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x13b8a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b8ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13b8acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b8b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13b8b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b8b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b8b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b8b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b8b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b8bc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x13b8bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13b8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x13B8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B8C8u;
}
