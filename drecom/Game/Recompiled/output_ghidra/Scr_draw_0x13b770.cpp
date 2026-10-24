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

// Function: Scr_draw
// Address: 0x13b770 - 0x13b8c8
void Scr_draw_0x13b770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_draw_0x13b770");
#endif

    switch (ctx->pc) {
        case 0x13b7e0u: goto label_13b7e0;
        case 0x13b808u: goto label_13b808;
        case 0x13b878u: goto label_13b878;
        case 0x13b884u: goto label_13b884;
        case 0x13b890u: goto label_13b890;
        case 0x13b89cu: goto label_13b89c;
        case 0x13b8a8u: goto label_13b8a8;
        default: break;
    }

    ctx->pc = 0x13b770u;

    // 0x13b770: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13b770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13b774: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x13b774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x13b778: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13b778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13b77c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13b77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13b780: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b784: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13b788: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13b788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13b78c: 0x24510b10  addiu       $s1, $v0, 0xB10
    ctx->pc = 0x13b78cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2832));
    // 0x13b790: 0x8e3002d0  lw          $s0, 0x2D0($s1)
    ctx->pc = 0x13b790u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0DE0u));
    // 0x13b794: 0x96220052  lhu         $v0, 0x52($s1)
    ctx->pc = 0x13b794u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0B62u));
    // 0x13b798: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x13b798u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13b79c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x13b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x13b7a0: 0x244350d0  addiu       $v1, $v0, 0x50D0
    ctx->pc = 0x13b7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20688));
    // 0x13b7a4: 0x27a2005c  addiu       $v0, $sp, 0x5C
    ctx->pc = 0x13b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x13b7a8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x13b7a8u;
    { uint32_t bits = FAST_READ32(0x3850D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b7ac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13b7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13b7b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13b7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13b7b4: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x13b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x13b7b8: 0x30530001  andi        $s3, $v0, 0x1
    ctx->pc = 0x13b7b8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13b7bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13b7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13b7c0: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x13b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x13b7c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13b7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13b7c8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13b7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x13b7cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13b7d0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13b7d4: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x13b7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x13b7d8: 0xc095ebc  jal         func_257AF0
    ctx->pc = 0x13B7D8u;
    SET_GPR_U32(ctx, 31, 0x13B7E0u);
    ctx->pc = 0x257AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257AF0u, 0x13B7D8u, 0x13B7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B7E0u;
label_13b7e0:
    // 0x13b7e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13b7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13b7e4: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x13b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x13b7e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13b7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13b7ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13b7f0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13b7f4: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x13b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x13b7f8: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x13b7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x13b7fc: 0x8e3002d0  lw          $s0, 0x2D0($s1)
    ctx->pc = 0x13b7fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x13b800: 0x96220052  lhu         $v0, 0x52($s1)
    ctx->pc = 0x13b800u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
    // 0x13b804: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x13b804u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
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
