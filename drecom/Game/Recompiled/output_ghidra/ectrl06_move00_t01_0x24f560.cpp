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

// Function: ectrl06_move00_t01
// Address: 0x24f560 - 0x24f908
void ectrl06_move00_t01_0x24f560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl06_move00_t01_0x24f560");
#endif

    switch (ctx->pc) {
        case 0x24f684u: goto label_24f684;
        case 0x24f6a8u: goto label_24f6a8;
        case 0x24f6e4u: goto label_24f6e4;
        case 0x24f6f0u: goto label_24f6f0;
        case 0x24f72cu: goto label_24f72c;
        case 0x24f738u: goto label_24f738;
        case 0x24f838u: goto label_24f838;
        case 0x24f864u: goto label_24f864;
        case 0x24f8a0u: goto label_24f8a0;
        case 0x24f8acu: goto label_24f8ac;
        case 0x24f8e8u: goto label_24f8e8;
        case 0x24f8f4u: goto label_24f8f4;
        default: break;
    }

    ctx->pc = 0x24f560u;

    // 0x24f560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24f560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24f564: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x24f564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x24f568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24f568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24f56c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x24f56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x24f570: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24f570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f574: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x24f574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x24f578: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x24f578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24f57c: 0x10830070  beq         $a0, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x24F57Cu;
    {
        const bool branch_taken_0x24f57c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24f57c) {
            ctx->pc = 0x24F740u;
            goto label_24f740;
        }
    }
    ctx->pc = 0x24F584u;
    // 0x24f584: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24f584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24f588: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F588u;
    {
        const bool branch_taken_0x24f588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24f588) {
            ctx->pc = 0x24F5A0u;
            goto label_24f5a0;
        }
    }
    ctx->pc = 0x24F590u;
    // 0x24f590: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F590u;
    {
        const bool branch_taken_0x24f590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f590) {
            ctx->pc = 0x24F5A0u;
            goto label_24f5a0;
        }
    }
    ctx->pc = 0x24F598u;
    // 0x24f598: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x24F598u;
    {
        const bool branch_taken_0x24f598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f598) {
            ctx->pc = 0x24F8F4u;
            goto label_24f8f4;
        }
    }
    ctx->pc = 0x24F5A0u;
label_24f5a0:
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
            goto label_24f8f4;
        }
    }
    ctx->pc = 0x24F740u;
label_24f740:
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
label_24f8f4:
    // 0x24f8f4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x24f8f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f8f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24f8f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f8fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x24f8fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24f900: 0x3e00008  jr          $ra
    ctx->pc = 0x24F900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F908u;
}
