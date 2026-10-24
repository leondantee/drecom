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

// Function: entry_002505b0
// Address: 0x2505b0 - 0x25075c
void entry_002505b0_0x2505b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002505b0_0x2505b0");
#endif

    switch (ctx->pc) {
        case 0x2506a8u: goto label_2506a8;
        case 0x2506ccu: goto label_2506cc;
        case 0x250708u: goto label_250708;
        case 0x250714u: goto label_250714;
        case 0x250750u: goto label_250750;
        default: break;
    }

    ctx->pc = 0x2505b0u;

    // 0x2505b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2505b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2505b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2505b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2505b8: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x2505b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2505bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2505bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2505c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2505c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2505c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2505c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2505c8: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x2505c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2505cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2505ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2505d0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2505d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2505d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2505d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2505d8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2505d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2505dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2505dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2505e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2505e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2505e4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2505e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2505e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2505e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2505ec: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x2505ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2505f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2505f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2505f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2505f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2505f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2505f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2505fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2505fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250600: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250604: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250608: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x250608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x25060c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x25060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250610: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x250610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x250614: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250618: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x25061c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x25061cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250620: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250624: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250628: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25062c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x25062cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250630: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250634: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x250634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x250638: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25063c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x25063cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250640: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250644: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250648: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25064c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x25064cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250650: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x250650u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x250654: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250658: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x250658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x25065c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x25065cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250660: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250664: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250668: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x25066c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25066cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250670: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250674: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x250674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250678: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25067c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x25067cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x250680: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250684: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250688: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x25068c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x25068cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250690: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250694: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250698: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x250698u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x25069c: 0x24040705  addiu       $a0, $zero, 0x705
    ctx->pc = 0x25069cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1797));
    // 0x2506a0: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2506A0u;
    SET_GPR_U32(ctx, 31, 0x2506A8u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2506A0u, 0x2506A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2506A8u;
label_2506a8:
    // 0x2506a8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2506a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2506ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2506acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2506b0: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x2506b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2506b4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2506b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2506b8: 0x26020310  addiu       $v0, $s0, 0x310
    ctx->pc = 0x2506b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x2506bc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2506bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2506c0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2506c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2506c4: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2506C4u;
    SET_GPR_U32(ctx, 31, 0x2506CCu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2506C4u, 0x2506CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2506CCu;
label_2506cc:
    // 0x2506cc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2506ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2506d0: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x2506d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2506d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2506d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2506d8: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2506d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2506dc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2506dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2506e0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2506e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2506e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2506e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2506e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2506e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2506ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2506ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2506f0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2506f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2506f4: 0x24041603  addiu       $a0, $zero, 0x1603
    ctx->pc = 0x2506f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5635));
    // 0x2506f8: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x2506f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x2506fc: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x2506fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x250700: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x250700u;
    SET_GPR_U32(ctx, 31, 0x250708u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x250700u, 0x250708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250708u;
label_250708:
    // 0x250708: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x250708u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25070c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x25070Cu;
    SET_GPR_U32(ctx, 31, 0x250714u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x25070Cu, 0x250714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250714u;
label_250714:
    // 0x250714: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x250714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250718: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x250718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25071c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x25071cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250720: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x250720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x250724: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250728: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x25072c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x25072cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250730: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250734: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250738: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x250738u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25073c: 0x24042804  addiu       $a0, $zero, 0x2804
    ctx->pc = 0x25073cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10244));
    // 0x250740: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x250740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x250744: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x250744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x250748: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x250748u;
    SET_GPR_U32(ctx, 31, 0x250750u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x250748u, 0x250750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250750u;
label_250750:
    // 0x250750: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x250750u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x250754: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x250754u;
    SET_GPR_U32(ctx, 31, 0x25075Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x250754u, 0x25075Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25075Cu;
}
