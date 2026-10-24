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

// Function: entry_0037155c
// Address: 0x37155c - 0x3715d0
void entry_0037155c_0x37155c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037155c_0x37155c");
#endif

    switch (ctx->pc) {
        case 0x371580u: goto label_371580;
        case 0x3715c4u: goto label_3715c4;
        default: break;
    }

    ctx->pc = 0x37155cu;

    // 0x37155c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37155cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371560: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x371560u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x371564: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x371564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x371568: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x371568u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37156c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x37156cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x371570: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x371570u;
    {
        const bool branch_taken_0x371570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x371570) {
            ctx->pc = 0x3715D0u;
            return;
        }
    }
    ctx->pc = 0x371578u;
    // 0x371578: 0xc067694  jal         func_19DA50
    ctx->pc = 0x371578u;
    SET_GPR_U32(ctx, 31, 0x371580u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x371578u, 0x371580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371580u;
label_371580:
    // 0x371580: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x371580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x371584: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x371584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x371588: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x371588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x37158c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37158cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371590: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x371590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x371594: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x371594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x371598: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x371598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37159c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x37159cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3715a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3715a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3715a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3715a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3715a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3715a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3715ac: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x3715acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3715b0: 0x3404a506  ori         $a0, $zero, 0xA506
    ctx->pc = 0x3715b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42246);
    // 0x3715b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3715b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3715b8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3715b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3715bc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3715BCu;
    SET_GPR_U32(ctx, 31, 0x3715C4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3715BCu, 0x3715C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3715C4u;
label_3715c4:
    // 0x3715c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3715c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3715c8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3715C8u;
    SET_GPR_U32(ctx, 31, 0x3715D0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3715C8u, 0x3715D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3715D0u;
}
