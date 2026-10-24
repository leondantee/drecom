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

// Function: entry_0037173c
// Address: 0x37173c - 0x3717b0
void entry_0037173c_0x37173c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037173c_0x37173c");
#endif

    switch (ctx->pc) {
        case 0x371760u: goto label_371760;
        case 0x3717a4u: goto label_3717a4;
        default: break;
    }

    ctx->pc = 0x37173cu;

    // 0x37173c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37173cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371740: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x371740u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x371744: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x371744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x371748: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x371748u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37174c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x37174cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x371750: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x371750u;
    {
        const bool branch_taken_0x371750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x371750) {
            ctx->pc = 0x3717B0u;
            return;
        }
    }
    ctx->pc = 0x371758u;
    // 0x371758: 0xc067694  jal         func_19DA50
    ctx->pc = 0x371758u;
    SET_GPR_U32(ctx, 31, 0x371760u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x371758u, 0x371760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371760u;
label_371760:
    // 0x371760: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x371760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x371764: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x371764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x371768: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x371768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x37176c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37176cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371770: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x371770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x371774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x371774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x371778: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x371778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37177c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x37177cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x371780: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x371780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x371784: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x371784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x371788: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x371788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x37178c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x37178cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x371790: 0x3404a506  ori         $a0, $zero, 0xA506
    ctx->pc = 0x371790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42246);
    // 0x371794: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x371794u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x371798: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x371798u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37179c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x37179Cu;
    SET_GPR_U32(ctx, 31, 0x3717A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x37179Cu, 0x3717A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3717A4u;
label_3717a4:
    // 0x3717a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3717a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3717a8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3717A8u;
    SET_GPR_U32(ctx, 31, 0x3717B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3717A8u, 0x3717B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3717B0u;
}
