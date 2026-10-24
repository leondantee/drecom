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

// Function: entry_0024f740
// Address: 0x24f740 - 0x24f8f4
void entry_0024f740_0x24f740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024f740_0x24f740");
#endif

    switch (ctx->pc) {
        case 0x24f838u: goto label_24f838;
        case 0x24f864u: goto label_24f864;
        case 0x24f8a0u: goto label_24f8a0;
        case 0x24f8acu: goto label_24f8ac;
        case 0x24f8e8u: goto label_24f8e8;
        default: break;
    }

    ctx->pc = 0x24f740u;

    // 0x24f740: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f744: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24f744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f748: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x24f748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x24f74c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f750: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24f750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24f754: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f758: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24f758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24f75c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f760: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f764: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f768: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f76c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f770: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f774: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24f774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f778: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f77c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24f780: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f784: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f788: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f78c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f790: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f794: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f798: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24f798u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24f79c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f7a0: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24f7a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f7a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f7ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f7b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f7b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f7b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f7bc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24f7bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f7c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f7c4: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24f7c8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f7cc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f7d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f7d4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f7d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f7dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f7e0: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x24f7e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24f7e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f7e8: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f7ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f7f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f7f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f7f8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f7fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f800: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f804: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24f804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f808: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f80c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f810: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f814: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f818: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f81c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f820: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f824: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f828: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24f828u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24f82c: 0x24040703  addiu       $a0, $zero, 0x703
    ctx->pc = 0x24f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1795));
    // 0x24f830: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24F830u;
    SET_GPR_U32(ctx, 31, 0x24F838u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24F830u, 0x24F838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F838u;
label_24f838:
    // 0x24f838: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x24f838u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24f83c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f840: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x24f840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x24f844: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24f844u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f848: 0x26020310  addiu       $v0, $s0, 0x310
    ctx->pc = 0x24f848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x24f84c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24f84cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24f850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24f850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f854: 0xa2020270  sb          $v0, 0x270($s0)
    ctx->pc = 0x24f854u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 624), (uint8_t)GPR_U32(ctx, 2));
    // 0x24f858: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24f858u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24f85c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24F85Cu;
    SET_GPR_U32(ctx, 31, 0x24F864u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24F85Cu, 0x24F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F864u;
label_24f864:
    // 0x24f864: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x24f864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f868: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x24f868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f86c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f870: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f874: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f878: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f87c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f880: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f884: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f888: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24f888u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f88c: 0x24041603  addiu       $a0, $zero, 0x1603
    ctx->pc = 0x24f88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5635));
    // 0x24f890: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x24f890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x24f894: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24f894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24f898: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24F898u;
    SET_GPR_U32(ctx, 31, 0x24F8A0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24F898u, 0x24F8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F8A0u;
label_24f8a0:
    // 0x24f8a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24f8a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24f8a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24F8A4u;
    SET_GPR_U32(ctx, 31, 0x24F8ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24F8A4u, 0x24F8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F8ACu;
label_24f8ac:
    // 0x24f8ac: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x24f8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f8b0: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x24f8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f8b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f8b8: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f8bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f8c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f8c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f8c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f8cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f8d0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24f8d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f8d4: 0x24042805  addiu       $a0, $zero, 0x2805
    ctx->pc = 0x24f8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10245));
    // 0x24f8d8: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x24f8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x24f8dc: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24f8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24f8e0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24F8E0u;
    SET_GPR_U32(ctx, 31, 0x24F8E8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24F8E0u, 0x24F8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F8E8u;
label_24f8e8:
    // 0x24f8e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24f8e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24f8ec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24F8ECu;
    SET_GPR_U32(ctx, 31, 0x24F8F4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24F8ECu, 0x24F8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F8F4u;
}
