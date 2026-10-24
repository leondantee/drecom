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

// Function: entry_0030ad60
// Address: 0x30ad60 - 0x30adfc
void entry_0030ad60_0x30ad60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030ad60_0x30ad60");
#endif

    switch (ctx->pc) {
        case 0x30adacu: goto label_30adac;
        case 0x30ade4u: goto label_30ade4;
        case 0x30adf0u: goto label_30adf0;
        default: break;
    }

    ctx->pc = 0x30ad60u;

    // 0x30ad60: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30ad64: 0x8c431368  lw          $v1, 0x1368($v0)
    ctx->pc = 0x30ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4968)));
    // 0x30ad68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x30ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x30ad6c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30ad6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30ad70: 0x1440007b  bnez        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x30AD70u;
    {
        const bool branch_taken_0x30ad70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ad70) {
            ctx->pc = 0x30AF60u;
            return;
        }
    }
    ctx->pc = 0x30AD78u;
    // 0x30ad78: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30ad7c: 0x8c431338  lw          $v1, 0x1338($v0)
    ctx->pc = 0x30ad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x30ad80: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x30ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x30ad84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30ad84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30ad88: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x30AD88u;
    {
        const bool branch_taken_0x30ad88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ad88) {
            ctx->pc = 0x30AEB8u;
            return;
        }
    }
    ctx->pc = 0x30AD90u;
    // 0x30ad90: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30ad94: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30ad98: 0x24511680  addiu       $s1, $v0, 0x1680
    ctx->pc = 0x30ad98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5760));
    // 0x30ad9c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30ad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30ada0: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x30ada0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x30ada4: 0xc079140  jal         func_1E4500
    ctx->pc = 0x30ADA4u;
    SET_GPR_U32(ctx, 31, 0x30ADACu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x30ADA4u, 0x30ADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ADACu;
label_30adac:
    // 0x30adac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30adacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30adb0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30adb4: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x30adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x30adb8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30adb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30adbc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30adbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30adc0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30adc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30adc4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30adc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30adc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30adc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30adcc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30adccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30add0: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x30add0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
    // 0x30add4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30add4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30add8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x30add8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30addc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30ADDCu;
    SET_GPR_U32(ctx, 31, 0x30ADE4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30ADDCu, 0x30ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ADE4u;
label_30ade4:
    // 0x30ade4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30ade4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30ade8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30ADE8u;
    SET_GPR_U32(ctx, 31, 0x30ADF0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30ADE8u, 0x30ADF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ADF0u;
label_30adf0:
    // 0x30adf0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x30adf0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30adf4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x30ADF4u;
    {
        const bool branch_taken_0x30adf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30adf4) {
            ctx->pc = 0x30AEA8u;
            return;
        }
    }
    ctx->pc = 0x30ADFCu;
}
