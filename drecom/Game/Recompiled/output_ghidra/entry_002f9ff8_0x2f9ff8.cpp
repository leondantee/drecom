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

// Function: entry_002f9ff8
// Address: 0x2f9ff8 - 0x2fa074
void entry_002f9ff8_0x2f9ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f9ff8_0x2f9ff8");
#endif

    switch (ctx->pc) {
        case 0x2fa060u: goto label_2fa060;
        case 0x2fa070u: goto label_2fa070;
        default: break;
    }

    ctx->pc = 0x2f9ff8u;

    // 0x2f9ff8: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x2f9ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9ffc: 0x8ce70010  lw          $a3, 0x10($a3)
    ctx->pc = 0x2f9ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2fa000: 0x24e9000a  addiu       $t1, $a3, 0xA
    ctx->pc = 0x2fa000u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 10));
    // 0x2fa004: 0x9383c  dsll32      $a3, $t1, 0
    ctx->pc = 0x2fa004u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2fa008: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2fa008u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2fa00c: 0x30ea00ff  andi        $t2, $a3, 0xFF
    ctx->pc = 0x2fa00cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2fa010: 0x35470300  ori         $a3, $t2, 0x300
    ctx->pc = 0x2fa010u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)768);
    // 0x2fa014: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2fa014u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2fa018: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2fa018u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2fa01c: 0x30e9ffff  andi        $t1, $a3, 0xFFFF
    ctx->pc = 0x2fa01cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2fa020: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa024: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fa024u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa028: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x2fa028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2fa02c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fa02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa030: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa034: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa038: 0x23c38  dsll        $a3, $v0, 16
    ctx->pc = 0x2fa038u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 16);
    // 0x2fa03c: 0x34e2ffff  ori         $v0, $a3, 0xFFFF
    ctx->pc = 0x2fa03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2fa040: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fa040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa044: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2fa044u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2fa048: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fa048u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fa04c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2fa04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2fa050: 0x24668ff0  addiu       $a2, $v1, -0x7010
    ctx->pc = 0x2fa050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938608));
    // 0x2fa054: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2fa054u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa058: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FA058u;
    SET_GPR_U32(ctx, 31, 0x2FA060u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FA058u, 0x2FA060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA060u;
label_2fa060:
    // 0x2fa060: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2fa060u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa064: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2fa064u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fa068: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FA068u;
    SET_GPR_U32(ctx, 31, 0x2FA070u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FA068u, 0x2FA070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA070u;
label_2fa070:
    // 0x2fa070: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fa070u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2fa074u;
}
