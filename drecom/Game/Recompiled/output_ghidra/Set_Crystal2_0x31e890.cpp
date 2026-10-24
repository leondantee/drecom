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

// Function: Set_Crystal2
// Address: 0x31e890 - 0x31e914
void Set_Crystal2_0x31e890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_Crystal2_0x31e890");
#endif

    switch (ctx->pc) {
        case 0x31e8f8u: goto label_31e8f8;
        default: break;
    }

    ctx->pc = 0x31e890u;

    // 0x31e890: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31e890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31e894: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x31e894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x31e898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31e898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31e89c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31e89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31e8a0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x31e8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x31e8a4: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x31e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x31e8a8: 0xa7a60040  sh          $a2, 0x40($sp)
    ctx->pc = 0x31e8a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 6));
    // 0x31e8ac: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x31e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x31e8b0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x31e8b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31e8b4: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x31e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x31e8b8: 0x2451af60  addiu       $s1, $v0, -0x50A0
    ctx->pc = 0x31e8b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946656));
    // 0x31e8bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31e8c0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x31e8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x31e8c4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x31e8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x31e8c8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x31e8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31e8cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x31e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31e8d0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x31e8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x31e8d4: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x31e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x31e8d8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x31e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31e8dc: 0x97a20040  lhu         $v0, 0x40($sp)
    ctx->pc = 0x31e8dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31e8e0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x31e8e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31e8e4: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x31e8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x31e8e8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x31e8e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31e8ec: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x31e8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31e8f0: 0xc0c7a84  jal         func_31EA10
    ctx->pc = 0x31E8F0u;
    SET_GPR_U32(ctx, 31, 0x31E8F8u);
    ctx->pc = 0x31EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EA10u, 0x31E8F0u, 0x31E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E8F8u;
label_31e8f8:
    // 0x31e8f8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x31e8f8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31e8fc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x31e8fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31e900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31e900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31e904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e908: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x31e908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31e90c: 0x3e00008  jr          $ra
    ctx->pc = 0x31E90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E914u;
}
