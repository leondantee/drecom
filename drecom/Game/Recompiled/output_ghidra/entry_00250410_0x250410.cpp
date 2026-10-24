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

// Function: entry_00250410
// Address: 0x250410 - 0x2505b0
void entry_00250410_0x250410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00250410_0x250410");
#endif

    switch (ctx->pc) {
        case 0x2504f4u: goto label_2504f4;
        case 0x250518u: goto label_250518;
        case 0x250554u: goto label_250554;
        case 0x250560u: goto label_250560;
        case 0x25059cu: goto label_25059c;
        case 0x2505a8u: goto label_2505a8;
        default: break;
    }

    ctx->pc = 0x250410u;

    // 0x250410: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250414: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x250414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x250418: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25041c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x25041cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250420: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250424: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250428: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25042c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x25042cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250430: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x250430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250434: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250438: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x250438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x25043c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x25043cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250440: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250444: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250448: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x25044c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25044cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250450: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250454: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x250454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x250458: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25045c: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x25045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x250460: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250464: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250468: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x25046c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x25046cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250470: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250474: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250478: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x250478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25047c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x25047cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250480: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x250480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x250484: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250488: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x25048c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x25048cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250490: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250494: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250498: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25049c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x25049cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2504a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2504a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2504a4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2504a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2504a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2504a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2504ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2504acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2504b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2504b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2504b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2504b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2504b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2504b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2504bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2504bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2504c0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2504c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2504c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2504c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2504c8: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2504c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2504cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2504ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2504d0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2504d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2504d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2504d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2504d8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2504d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2504dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2504dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2504e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2504e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2504e4: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x2504e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2504e8: 0x24040705  addiu       $a0, $zero, 0x705
    ctx->pc = 0x2504e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1797));
    // 0x2504ec: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2504ECu;
    SET_GPR_U32(ctx, 31, 0x2504F4u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2504ECu, 0x2504F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2504F4u;
label_2504f4:
    // 0x2504f4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2504f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2504f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2504f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2504fc: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x2504fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x250500: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x250500u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250504: 0x26020310  addiu       $v0, $s0, 0x310
    ctx->pc = 0x250504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x250508: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x250508u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x25050c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25050cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x250510: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x250510u;
    SET_GPR_U32(ctx, 31, 0x250518u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x250510u, 0x250518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250518u;
label_250518:
    // 0x250518: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x250518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25051c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x25051cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250520: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250524: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x250524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x250528: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25052c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x25052cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250530: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250534: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250538: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25053c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x25053cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250540: 0x24041603  addiu       $a0, $zero, 0x1603
    ctx->pc = 0x250540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5635));
    // 0x250544: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x250544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x250548: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x250548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x25054c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x25054Cu;
    SET_GPR_U32(ctx, 31, 0x250554u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x25054Cu, 0x250554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250554u;
label_250554:
    // 0x250554: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x250554u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x250558: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x250558u;
    SET_GPR_U32(ctx, 31, 0x250560u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x250558u, 0x250560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250560u;
label_250560:
    // 0x250560: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x250560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250564: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x250564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250568: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25056c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x25056cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x250570: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250574: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250578: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x25057c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x25057cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250580: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250584: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x250584u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250588: 0x24042804  addiu       $a0, $zero, 0x2804
    ctx->pc = 0x250588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10244));
    // 0x25058c: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x25058cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x250590: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x250590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x250594: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x250594u;
    SET_GPR_U32(ctx, 31, 0x25059Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x250594u, 0x25059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25059Cu;
label_25059c:
    // 0x25059c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25059cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2505a0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2505A0u;
    SET_GPR_U32(ctx, 31, 0x2505A8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2505A0u, 0x2505A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2505A8u;
label_2505a8:
    // 0x2505a8: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2505A8u;
    {
        const bool branch_taken_0x2505a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2505a8) {
            ctx->pc = 0x25075Cu;
            return;
        }
    }
    ctx->pc = 0x2505B0u;
}
