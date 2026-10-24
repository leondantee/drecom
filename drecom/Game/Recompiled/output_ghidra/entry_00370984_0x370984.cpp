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

// Function: entry_00370984
// Address: 0x370984 - 0x370b84
void entry_00370984_0x370984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00370984_0x370984");
#endif

    switch (ctx->pc) {
        case 0x3709e4u: goto label_3709e4;
        case 0x370a28u: goto label_370a28;
        case 0x370a6cu: goto label_370a6c;
        case 0x370ab0u: goto label_370ab0;
        case 0x370af4u: goto label_370af4;
        case 0x370b38u: goto label_370b38;
        case 0x370b7cu: goto label_370b7c;
        default: break;
    }

    ctx->pc = 0x370984u;

    // 0x370984: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370988: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x370988u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x37098c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x37098cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x370990: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x370990u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x370994: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x370994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x370998: 0x148300b1  bne         $a0, $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x370998u;
    {
        const bool branch_taken_0x370998 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x370998) {
            ctx->pc = 0x370C60u;
            return;
        }
    }
    ctx->pc = 0x3709A0u;
    // 0x3709a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3709a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3709a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3709a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3709a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3709a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3709ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3709acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3709b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3709b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3709b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3709b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3709b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3709b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3709bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3709bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3709c0: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x3709c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x3709c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3709c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3709c8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3709c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3709cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3709ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3709d0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3709d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3709d4: 0x24470780  addiu       $a3, $v0, 0x780
    ctx->pc = 0x3709d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1920));
    // 0x3709d8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3709d8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3709dc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3709DCu;
    SET_GPR_U32(ctx, 31, 0x3709E4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3709DCu, 0x3709E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3709E4u;
label_3709e4:
    // 0x3709e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3709e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3709e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3709e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3709ec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3709ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3709f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3709f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3709f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3709f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3709f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3709f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3709fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3709fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x370a00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x370a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370a04: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x370a04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x370a08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370a0c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x370a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x370a10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x370a10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370a14: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x370a14u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370a18: 0x244707c0  addiu       $a3, $v0, 0x7C0
    ctx->pc = 0x370a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1984));
    // 0x370a1c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x370a1cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370a20: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x370A20u;
    SET_GPR_U32(ctx, 31, 0x370A28u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x370A20u, 0x370A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370A28u;
label_370a28:
    // 0x370a28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370a2c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x370a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370a30: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x370a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x370a34: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x370a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x370a38: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x370a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x370a3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x370a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x370a40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x370a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x370a44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x370a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370a48: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x370a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x370a4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370a50: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x370a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x370a54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x370a54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370a58: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x370a58u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370a5c: 0x24470700  addiu       $a3, $v0, 0x700
    ctx->pc = 0x370a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x370a60: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x370a60u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370a64: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x370A64u;
    SET_GPR_U32(ctx, 31, 0x370A6Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x370A64u, 0x370A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370A6Cu;
label_370a6c:
    // 0x370a6c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370a70: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x370a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370a74: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x370a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x370a78: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x370a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x370a7c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x370a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x370a80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x370a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x370a84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x370a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x370a88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x370a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370a8c: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x370a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x370a90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370a94: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x370a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x370a98: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x370a98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370a9c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x370a9cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370aa0: 0x24470740  addiu       $a3, $v0, 0x740
    ctx->pc = 0x370aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1856));
    // 0x370aa4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x370aa4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370aa8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x370AA8u;
    SET_GPR_U32(ctx, 31, 0x370AB0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x370AA8u, 0x370AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370AB0u;
label_370ab0:
    // 0x370ab0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370ab4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x370ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370ab8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x370ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x370abc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x370abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x370ac0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x370ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x370ac4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x370ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x370ac8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x370ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x370acc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x370accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370ad0: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x370ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x370ad4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370ad8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x370ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x370adc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x370adcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370ae0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x370ae0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370ae4: 0x24470680  addiu       $a3, $v0, 0x680
    ctx->pc = 0x370ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1664));
    // 0x370ae8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x370ae8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370aec: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x370AECu;
    SET_GPR_U32(ctx, 31, 0x370AF4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x370AECu, 0x370AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370AF4u;
label_370af4:
    // 0x370af4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370af8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x370af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370afc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x370afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x370b00: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x370b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x370b04: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x370b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x370b08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x370b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x370b0c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x370b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x370b10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x370b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370b14: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x370b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x370b18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370b1c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x370b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x370b20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x370b20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370b24: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x370b24u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370b28: 0x244706c0  addiu       $a3, $v0, 0x6C0
    ctx->pc = 0x370b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x370b2c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x370b2cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370b30: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x370B30u;
    SET_GPR_U32(ctx, 31, 0x370B38u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x370B30u, 0x370B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370B38u;
label_370b38:
    // 0x370b38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370b3c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x370b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370b40: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x370b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x370b44: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x370b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x370b48: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x370b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x370b4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x370b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x370b50: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x370b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x370b54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x370b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370b58: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x370b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x370b5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370b60: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x370b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x370b64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x370b64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370b68: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x370b68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370b6c: 0x24470180  addiu       $a3, $v0, 0x180
    ctx->pc = 0x370b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x370b70: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x370b70u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370b74: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x370B74u;
    SET_GPR_U32(ctx, 31, 0x370B7Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x370B74u, 0x370B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370B7Cu;
label_370b7c:
    // 0x370b7c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x370B7Cu;
    {
        const bool branch_taken_0x370b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370b7c) {
            ctx->pc = 0x370C60u;
            return;
        }
    }
    ctx->pc = 0x370B84u;
}
