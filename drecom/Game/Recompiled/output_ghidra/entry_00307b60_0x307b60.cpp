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

// Function: entry_00307b60
// Address: 0x307b60 - 0x307bc0
void entry_00307b60_0x307b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00307b60_0x307b60");
#endif

    switch (ctx->pc) {
        case 0x307bacu: goto label_307bac;
        case 0x307bb8u: goto label_307bb8;
        default: break;
    }

    ctx->pc = 0x307b60u;

    // 0x307b60: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307b64: 0x8c421338  lw          $v0, 0x1338($v0)
    ctx->pc = 0x307b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x307b68: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x307b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x307b6c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x307B6Cu;
    {
        const bool branch_taken_0x307b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307b6c) {
            ctx->pc = 0x307BC0u;
            return;
        }
    }
    ctx->pc = 0x307B74u;
    // 0x307b74: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307b78: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x307b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x307b7c: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x307b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x307b80: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x307b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x307b84: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x307b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x307b88: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x307b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x307b8c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x307b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x307b90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x307b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x307b94: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x307b94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x307b98: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x307b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x307b9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x307b9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x307ba0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x307ba0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x307ba4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x307BA4u;
    SET_GPR_U32(ctx, 31, 0x307BACu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x307BA4u, 0x307BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307BACu;
label_307bac:
    // 0x307bac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x307bacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x307bb0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x307BB0u;
    SET_GPR_U32(ctx, 31, 0x307BB8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x307BB0u, 0x307BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307BB8u;
label_307bb8:
    // 0x307bb8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x307BB8u;
    {
        const bool branch_taken_0x307bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307bb8) {
            ctx->pc = 0x307C18u;
            return;
        }
    }
    ctx->pc = 0x307BC0u;
}
