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

// Function: entry_0024f5a0
// Address: 0x24f5a0 - 0x24f740
void entry_0024f5a0_0x24f5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024f5a0_0x24f5a0");
#endif

    switch (ctx->pc) {
        case 0x24f684u: goto label_24f684;
        case 0x24f6a8u: goto label_24f6a8;
        case 0x24f6e4u: goto label_24f6e4;
        case 0x24f6f0u: goto label_24f6f0;
        case 0x24f72cu: goto label_24f72c;
        case 0x24f738u: goto label_24f738;
        default: break;
    }

    ctx->pc = 0x24f5a0u;

    // 0x24f5a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f5a4: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24f5a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f5ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f5b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f5b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f5b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f5bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f5c0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24f5c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f5c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f5c8: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24f5cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f5d0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f5d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f5d8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f5dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f5e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f5e4: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24f5e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24f5e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f5ec: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24f5f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f5f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f5f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f5fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f600: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f604: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f608: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24f608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f60c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f610: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24f610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24f614: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f618: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f61c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f620: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f624: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f628: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f62c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x24f62cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24f630: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f634: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f638: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f63c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f640: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f644: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f648: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f64c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f650: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24f650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f654: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f658: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f65c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f660: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f664: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f668: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f66c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f670: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f674: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24f674u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24f678: 0x24040703  addiu       $a0, $zero, 0x703
    ctx->pc = 0x24f678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1795));
    // 0x24f67c: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24F67Cu;
    SET_GPR_U32(ctx, 31, 0x24F684u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24F67Cu, 0x24F684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F684u;
label_24f684:
    // 0x24f684: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x24f684u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24f688: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f68c: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x24f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x24f690: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24f690u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f694: 0x26020310  addiu       $v0, $s0, 0x310
    ctx->pc = 0x24f694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x24f698: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24f698u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24f69c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24f69cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24f6a0: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24F6A0u;
    SET_GPR_U32(ctx, 31, 0x24F6A8u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24F6A0u, 0x24F6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F6A8u;
label_24f6a8:
    // 0x24f6a8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x24f6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f6ac: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x24f6acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f6b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f6b4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f6b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f6bc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f6c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f6c4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f6c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f6cc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24f6ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f6d0: 0x24041603  addiu       $a0, $zero, 0x1603
    ctx->pc = 0x24f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5635));
    // 0x24f6d4: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x24f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x24f6d8: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24f6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24f6dc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24F6DCu;
    SET_GPR_U32(ctx, 31, 0x24F6E4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24F6DCu, 0x24F6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F6E4u;
label_24f6e4:
    // 0x24f6e4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24f6e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24f6e8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24F6E8u;
    SET_GPR_U32(ctx, 31, 0x24F6F0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24F6E8u, 0x24F6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F6F0u;
label_24f6f0:
    // 0x24f6f0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x24f6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f6f4: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x24f6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f6f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f6fc: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f700: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f704: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f708: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f70c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f710: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f714: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24f714u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f718: 0x24042805  addiu       $a0, $zero, 0x2805
    ctx->pc = 0x24f718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10245));
    // 0x24f71c: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x24f71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x24f720: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24f720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24f724: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24F724u;
    SET_GPR_U32(ctx, 31, 0x24F72Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24F724u, 0x24F72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F72Cu;
label_24f72c:
    // 0x24f72c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24f72cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24f730: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24F730u;
    SET_GPR_U32(ctx, 31, 0x24F738u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24F730u, 0x24F738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F738u;
label_24f738:
    // 0x24f738: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x24F738u;
    {
        const bool branch_taken_0x24f738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f738) {
            ctx->pc = 0x24F8F4u;
            return;
        }
    }
    ctx->pc = 0x24F740u;
}
