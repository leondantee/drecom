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

// Function: entry_002fa5d0
// Address: 0x2fa5d0 - 0x2fa8f0
void entry_002fa5d0_0x2fa5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fa5d0_0x2fa5d0");
#endif

    switch (ctx->pc) {
        case 0x2fa6ccu: goto label_2fa6cc;
        case 0x2fa6d8u: goto label_2fa6d8;
        case 0x2fa7d0u: goto label_2fa7d0;
        case 0x2fa7dcu: goto label_2fa7dc;
        case 0x2fa8e0u: goto label_2fa8e0;
        case 0x2fa8ecu: goto label_2fa8ec;
        default: break;
    }

    ctx->pc = 0x2fa5d0u;

    // 0x2fa5d0: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x2fa5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa5d4: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2fa5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2fa5d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fa5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa5dc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fa5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fa5e0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2fa5e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fa5e4: 0x34a41d00  ori         $a0, $a1, 0x1D00
    ctx->pc = 0x2fa5e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7424);
    // 0x2fa5e8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2fa5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa5ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fa5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa5f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa5f4: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x2fa5f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa5f8: 0x73438  dsll        $a2, $a3, 16
    ctx->pc = 0x2fa5f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << 16);
    // 0x2fa5fc: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x2fa5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2fa600: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fa600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa604: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2fa604u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa608: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2fa608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa60c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2fa60cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fa610: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2fa610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2fa614: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fa614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa618: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2fa618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2fa61c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2fa61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fa620: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2fa620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2fa624: 0xc32825  or          $a1, $a2, $v1
    ctx->pc = 0x2fa624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2fa628: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2fa628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2fa62c: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x2fa62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2fa630: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fa630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa634: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa638: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa63c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa640: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa644: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fa644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa648: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x2fa648u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa64c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2fa64cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2fa650: 0x24e2dbc0  addiu       $v0, $a3, -0x2440
    ctx->pc = 0x2fa650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958016));
    // 0x2fa654: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2fa654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa658: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2fa658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2fa65c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fa65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa660: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x2fa660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x2fa664: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa668: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2fa668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2fa66c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x2fa66cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x2fa670: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa674: 0x8c26dcf0  lw          $a2, -0x2310($at)
    ctx->pc = 0x2fa674u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa678: 0x24c20540  addiu       $v0, $a2, 0x540
    ctx->pc = 0x2fa678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1344));
    // 0x2fa67c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fa67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa680: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fa680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fa684: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fa684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa688: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2fa688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2fa68c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2fa68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fa690: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fa690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2fa694: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2fa694u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa698: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa69c: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fa69cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa6a0: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x2fa6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x2fa6a4: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2fa6a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa6a8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2fa6a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2fa6ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa6b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa6b4: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x2fa6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa6b8: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x2fa6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2fa6bc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2fa6bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2fa6c0: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2fa6c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fa6c4: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FA6C4u;
    SET_GPR_U32(ctx, 31, 0x2FA6CCu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FA6C4u, 0x2FA6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA6CCu;
label_2fa6cc:
    // 0x2fa6cc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fa6ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa6d0: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FA6D0u;
    SET_GPR_U32(ctx, 31, 0x2FA6D8u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FA6D0u, 0x2FA6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA6D8u;
label_2fa6d8:
    // 0x2fa6d8: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x2fa6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa6dc: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2fa6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2fa6e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fa6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa6e4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fa6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fa6e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2fa6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fa6ec: 0x34641d00  ori         $a0, $v1, 0x1D00
    ctx->pc = 0x2fa6ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7424);
    // 0x2fa6f0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2fa6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa6f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2fa6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fa6f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa6fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa700: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa704: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa708: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fa708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa70c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2fa70cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa710: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2fa710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa714: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fa714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa718: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa71c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa720: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa724: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa728: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fa728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa72c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2fa72cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2fa730: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2fa730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2fa734: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x2fa734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2fa738: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fa738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa73c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa740: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa744: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa748: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa74c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fa74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa750: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2fa750u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa754: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2fa754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2fa758: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x2fa758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2fa75c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fa75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa760: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa764: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa768: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa76c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa770: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fa770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa774: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2fa774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2fa778: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa77c: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fa77cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa780: 0x24420580  addiu       $v0, $v0, 0x580
    ctx->pc = 0x2fa780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x2fa784: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fa784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa788: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa78c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa790: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa794: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa798: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fa798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa79c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2fa79cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa7a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa7a4: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fa7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa7a8: 0x24420580  addiu       $v0, $v0, 0x580
    ctx->pc = 0x2fa7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x2fa7ac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fa7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa7b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa7b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa7b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa7bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa7c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fa7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa7c4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2fa7c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2fa7c8: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FA7C8u;
    SET_GPR_U32(ctx, 31, 0x2FA7D0u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FA7C8u, 0x2FA7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA7D0u;
label_2fa7d0:
    // 0x2fa7d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fa7d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa7d4: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FA7D4u;
    SET_GPR_U32(ctx, 31, 0x2FA7DCu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FA7D4u, 0x2FA7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA7DCu;
label_2fa7dc:
    // 0x2fa7dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2fa7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa7e0: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2fa7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2fa7e4: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2fa7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fa7e8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa7ec: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x2fa7ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2fa7f0: 0x34e91d00  ori         $t1, $a3, 0x1D00
    ctx->pc = 0x2fa7f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)7424);
    // 0x2fa7f4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2fa7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa7f8: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x2fa7f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fa7fc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2fa7fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2fa800: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa804: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa808: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x2fa808u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa80c: 0xc72024  and         $a0, $a2, $a3
    ctx->pc = 0x2fa80cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x2fa810: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2fa810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fa814: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2fa814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa818: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x2fa818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2fa81c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2fa81cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2fa820: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa824: 0x23c38  dsll        $a3, $v0, 16
    ctx->pc = 0x2fa824u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 16);
    // 0x2fa828: 0x34e2ffff  ori         $v0, $a3, 0xFFFF
    ctx->pc = 0x2fa828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2fa82c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2fa82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2fa830: 0xa24025  or          $t0, $a1, $v0
    ctx->pc = 0x2fa830u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2fa834: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2fa834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2fa838: 0x244bdbc0  addiu       $t3, $v0, -0x2440
    ctx->pc = 0x2fa838u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2fa83c: 0xb383c  dsll32      $a3, $t3, 0
    ctx->pc = 0x2fa83cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) << (32 + 0));
    // 0x2fa840: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2fa840u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2fa844: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fa844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa848: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x2fa848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x2fa84c: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x2fa84cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2fa850: 0xe61024  and         $v0, $a3, $a2
    ctx->pc = 0x2fa850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x2fa854: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x2fa854u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa858: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2fa858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2fa85c: 0x2462dbc0  addiu       $v0, $v1, -0x2440
    ctx->pc = 0x2fa85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x2fa860: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2fa860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa864: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2fa864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2fa868: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2fa868u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa86c: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x2fa86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x2fa870: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa874: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x2fa874u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2fa878: 0x1475825  or          $t3, $t2, $a3
    ctx->pc = 0x2fa878u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x2fa87c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa880: 0x8c25dcf0  lw          $a1, -0x2310($at)
    ctx->pc = 0x2fa880u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa884: 0x24a605c0  addiu       $a2, $a1, 0x5C0
    ctx->pc = 0x2fa884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1472));
    // 0x2fa888: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2fa888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2fa88c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fa88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fa890: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x2fa890u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa894: 0x73438  dsll        $a2, $a3, 16
    ctx->pc = 0x2fa894u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << 16);
    // 0x2fa898: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2fa898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2fa89c: 0x463024  and         $a2, $v0, $a2
    ctx->pc = 0x2fa89cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2fa8a0: 0x6503c  dsll32      $t2, $a2, 0
    ctx->pc = 0x2fa8a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2fa8a4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa8a8: 0x8c26dcf0  lw          $a2, -0x2310($at)
    ctx->pc = 0x2fa8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa8ac: 0x24c505c0  addiu       $a1, $a2, 0x5C0
    ctx->pc = 0x2fa8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1472));
    // 0x2fa8b0: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x2fa8b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fa8b4: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2fa8b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2fa8b8: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2fa8b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa8bc: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x2fa8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
    // 0x2fa8c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa8c4: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2fa8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2fa8c8: 0x1423825  or          $a3, $t2, $v0
    ctx->pc = 0x2fa8c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x2fa8cc: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2fa8ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2fa8d0: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2fa8d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fa8d4: 0x71603628  paddub      $a2, $t3, $zero
    ctx->pc = 0x2fa8d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x2fa8d8: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FA8D8u;
    SET_GPR_U32(ctx, 31, 0x2FA8E0u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FA8D8u, 0x2FA8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA8E0u;
label_2fa8e0:
    // 0x2fa8e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fa8e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa8e4: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FA8E4u;
    SET_GPR_U32(ctx, 31, 0x2FA8ECu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FA8E4u, 0x2FA8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA8ECu;
label_2fa8ec:
    // 0x2fa8ec: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2fa8ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2fa8f0u;
}
