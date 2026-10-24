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

// Function: ectrl06_move00_t06
// Address: 0x2503a0 - 0x250770
void ectrl06_move00_t06_0x2503a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl06_move00_t06_0x2503a0");
#endif

    switch (ctx->pc) {
        case 0x2504f4u: goto label_2504f4;
        case 0x250518u: goto label_250518;
        case 0x250554u: goto label_250554;
        case 0x250560u: goto label_250560;
        case 0x25059cu: goto label_25059c;
        case 0x2505a8u: goto label_2505a8;
        case 0x2506a8u: goto label_2506a8;
        case 0x2506ccu: goto label_2506cc;
        case 0x250708u: goto label_250708;
        case 0x250714u: goto label_250714;
        case 0x250750u: goto label_250750;
        case 0x25075cu: goto label_25075c;
        default: break;
    }

    ctx->pc = 0x2503a0u;

    // 0x2503a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2503a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2503a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2503a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2503a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2503a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2503ac: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2503acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2503b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2503b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2503b4: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2503b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2503b8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2503b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2503bc: 0x1083007c  beq         $a0, $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x2503BCu;
    {
        const bool branch_taken_0x2503bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2503bc) {
            ctx->pc = 0x2505B0u;
            goto label_2505b0;
        }
    }
    ctx->pc = 0x2503C4u;
    // 0x2503c4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2503c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2503c8: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2503C8u;
    {
        const bool branch_taken_0x2503c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2503c8) {
            ctx->pc = 0x250410u;
            goto label_250410;
        }
    }
    ctx->pc = 0x2503D0u;
    // 0x2503d0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2503d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2503d4: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2503D4u;
    {
        const bool branch_taken_0x2503d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2503d4) {
            ctx->pc = 0x250410u;
            goto label_250410;
        }
    }
    ctx->pc = 0x2503DCu;
    // 0x2503dc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2503dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2503e0: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2503E0u;
    {
        const bool branch_taken_0x2503e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2503e0) {
            ctx->pc = 0x250410u;
            goto label_250410;
        }
    }
    ctx->pc = 0x2503E8u;
    // 0x2503e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2503e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2503ec: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2503ECu;
    {
        const bool branch_taken_0x2503ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2503ec) {
            ctx->pc = 0x250410u;
            goto label_250410;
        }
    }
    ctx->pc = 0x2503F4u;
    // 0x2503f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2503f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2503f8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2503F8u;
    {
        const bool branch_taken_0x2503f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2503f8) {
            ctx->pc = 0x250410u;
            goto label_250410;
        }
    }
    ctx->pc = 0x250400u;
    // 0x250400: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x250400u;
    {
        const bool branch_taken_0x250400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x250400) {
            ctx->pc = 0x250410u;
            goto label_250410;
        }
    }
    ctx->pc = 0x250408u;
    // 0x250408: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x250408u;
    {
        const bool branch_taken_0x250408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250408) {
            ctx->pc = 0x25075Cu;
            goto label_25075c;
        }
    }
    ctx->pc = 0x250410u;
label_250410:
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
            goto label_25075c;
        }
    }
    ctx->pc = 0x2505B0u;
label_2505b0:
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
label_25075c:
    // 0x25075c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x25075cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x250760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250764: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x250764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x250768: 0x3e00008  jr          $ra
    ctx->pc = 0x250768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250770u;
}
