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

// Function: ectrl0c_init00_t00
// Address: 0x250970 - 0x250b10
void ectrl0c_init00_t00_0x250970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl0c_init00_t00_0x250970");
#endif

    switch (ctx->pc) {
        case 0x250a68u: goto label_250a68;
        case 0x250a74u: goto label_250a74;
        case 0x250aacu: goto label_250aac;
        case 0x250ab8u: goto label_250ab8;
        case 0x250af0u: goto label_250af0;
        case 0x250afcu: goto label_250afc;
        default: break;
    }

    ctx->pc = 0x250970u;

    // 0x250970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x250970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x250974: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x250974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x250978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x250978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25097c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x25097cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x250980: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x250980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250984: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250988: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x250988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x25098c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x25098cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250990: 0x8c5000c4  lw          $s0, 0xC4($v0)
    ctx->pc = 0x250990u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x250994: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250998: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x250998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x25099c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x25099cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2509a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2509a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2509a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2509a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2509a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2509a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2509ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2509acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2509b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2509b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2509b4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2509b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2509b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2509b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2509bc: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x2509bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2509c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2509c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2509c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2509c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2509c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2509c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2509cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2509ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2509d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2509d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2509d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2509d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2509d8: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x2509d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2509dc: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x2509dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2509e0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2509e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2509e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2509e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2509e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2509e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2509ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2509ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2509f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2509f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2509f4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2509f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2509f8: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x2509f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2509fc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2509fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250a00: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250a04: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250a08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250a0c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250a10: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x250a10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x250a14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250a18: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x250a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x250a1c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250a20: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250a24: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250a28: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250a2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250a30: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250a34: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x250a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250a38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250a3c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x250a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x250a40: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250a44: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250a48: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250a4c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250a50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250a54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250a58: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x250a58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x250a5c: 0x24041400  addiu       $a0, $zero, 0x1400
    ctx->pc = 0x250a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x250a60: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x250A60u;
    SET_GPR_U32(ctx, 31, 0x250A68u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x250A60u, 0x250A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250A68u;
label_250a68:
    // 0x250a68: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x250a68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x250a6c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x250A6Cu;
    SET_GPR_U32(ctx, 31, 0x250A74u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x250A6Cu, 0x250A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250A74u;
label_250a74:
    // 0x250a74: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x250a74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250a78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250a7c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x250a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x250a80: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250a84: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250a88: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250a8c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250a90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250a94: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x250a94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250a98: 0x24041602  addiu       $a0, $zero, 0x1602
    ctx->pc = 0x250a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5634));
    // 0x250a9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x250a9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x250aa0: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x250aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x250aa4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x250AA4u;
    SET_GPR_U32(ctx, 31, 0x250AACu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x250AA4u, 0x250AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250AACu;
label_250aac:
    // 0x250aac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x250aacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x250ab0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x250AB0u;
    SET_GPR_U32(ctx, 31, 0x250AB8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x250AB0u, 0x250AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250AB8u;
label_250ab8:
    // 0x250ab8: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x250ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250abc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250ac0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x250ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x250ac4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250ac8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250acc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250ad0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250ad4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250ad8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x250ad8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250adc: 0x24041602  addiu       $a0, $zero, 0x1602
    ctx->pc = 0x250adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5634));
    // 0x250ae0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x250ae0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x250ae4: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x250ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x250ae8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x250AE8u;
    SET_GPR_U32(ctx, 31, 0x250AF0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x250AE8u, 0x250AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250AF0u;
label_250af0:
    // 0x250af0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x250af0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x250af4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x250AF4u;
    SET_GPR_U32(ctx, 31, 0x250AFCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x250AF4u, 0x250AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250AFCu;
label_250afc:
    // 0x250afc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x250afcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250b00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x250b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250b04: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x250b04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x250b08: 0x3e00008  jr          $ra
    ctx->pc = 0x250B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250B10u;
}
