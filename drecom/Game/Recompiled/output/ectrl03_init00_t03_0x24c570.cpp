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

// Function: ectrl03_init00_t03
// Address: 0x24c570 - 0x24c714
void ectrl03_init00_t03_0x24c570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl03_init00_t03_0x24c570");
#endif

    switch (ctx->pc) {
        case 0x24c618u: goto label_24c618;
        case 0x24c624u: goto label_24c624;
        case 0x24c668u: goto label_24c668;
        case 0x24c67cu: goto label_24c67c;
        case 0x24c6ecu: goto label_24c6ec;
        case 0x24c6f8u: goto label_24c6f8;
        default: break;
    }

    ctx->pc = 0x24c570u;

    // 0x24c570: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x24c570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x24c574: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x24c574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x24c578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24c578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24c57c: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x24c57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x24c580: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24c580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x24c584: 0x2442b630  addiu       $v0, $v0, -0x49D0
    ctx->pc = 0x24c584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948400));
    // 0x24c588: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x24c588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24c58c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x24c58cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38B630u));
    // 0x24c590: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x24c590u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x24c594: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24c594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x24c598: 0x2442b640  addiu       $v0, $v0, -0x49C0
    ctx->pc = 0x24c598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948416));
    // 0x24c59c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x24c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24c5a0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x24c5a0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38B640u));
    // 0x24c5a4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x24c5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x24c5a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24c5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c5ac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x24c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c5b0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x24c5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x24c5b4: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x24c5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c5b8: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x24c5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c5bc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x24c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c5c0: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24c5c4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24c5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24c5c8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24c5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24c5cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24c5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24c5d0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24c5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24c5d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24c5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24c5d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24c5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24c5dc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24c5dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24c5e0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x24c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c5e4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24c5e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24c5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24c5ec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24c5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24c5f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24c5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24c5f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24c5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24c5f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24c5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24c5fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24c5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24c600: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24c600u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24c604: 0x3404a702  ori         $a0, $zero, 0xA702
    ctx->pc = 0x24c604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42754);
    // 0x24c608: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x24c608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x24c60c: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24c60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24c610: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24C610u;
    SET_GPR_U32(ctx, 31, 0x24C618u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24C610u, 0x24C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C618u;
label_24c618:
    // 0x24c618: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24c618u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24c61c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24C61Cu;
    SET_GPR_U32(ctx, 31, 0x24C624u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24C61Cu, 0x24C624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C624u;
label_24c624:
    // 0x24c624: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x24c624u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24c628: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c62c: 0xac700100  sw          $s0, 0x100($v1)
    ctx->pc = 0x24c62cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 16));
    // 0x24c630: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24c630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24c634: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24c634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24c638: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24C638u;
    {
        const bool branch_taken_0x24c638 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x24c638) {
            ctx->pc = 0x24C65Cu;
            goto label_24c65c;
        }
    }
    ctx->pc = 0x24C640u;
    // 0x24c640: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c644: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24c644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24c648: 0x34640010  ori         $a0, $v1, 0x10
    ctx->pc = 0x24c648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24c64c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c650: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x24c650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x24c654: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x24C654u;
    {
        const bool branch_taken_0x24c654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c654) {
            ctx->pc = 0x24C700u;
            goto label_24c700;
        }
    }
    ctx->pc = 0x24C65Cu;
label_24c65c:
    // 0x24c65c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x24c65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24c660: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24C660u;
    SET_GPR_U32(ctx, 31, 0x24C668u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24C668u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24C668u) { return; }
    ctx->pc = 0x24C668u;
label_24c668:
    // 0x24c668: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x24c668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x24c66c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x24c66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24c670: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x24c670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x24c674: 0xc040c92  jal         func_103248
    ctx->pc = 0x24C674u;
    SET_GPR_U32(ctx, 31, 0x24C67Cu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x24C67Cu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24C67Cu) { return; }
    ctx->pc = 0x24C67Cu;
label_24c67c:
    // 0x24c67c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24c680: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24c680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24c684: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24c684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24c688: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24c688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24c68c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24c68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24c690: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24c690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24c694: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24c694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24c698: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24c698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24c69c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24c6a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24c6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24c6a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24c6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24c6a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24c6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24c6ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24c6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24c6b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24c6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24c6b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24c6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24c6b8: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24c6b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24c6bc: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x24c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x24c6c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24c6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24c6c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24c6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24c6c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24c6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24c6cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24c6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24c6d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24c6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24c6d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24c6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24c6d8: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x24c6d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24c6dc: 0x24042400  addiu       $a0, $zero, 0x2400
    ctx->pc = 0x24c6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9216));
    // 0x24c6e0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24c6e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c6e4: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24C6E4u;
    SET_GPR_U32(ctx, 31, 0x24C6ECu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24C6E4u, 0x24C6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C6ECu;
label_24c6ec:
    // 0x24c6ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24c6ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24c6f0: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24C6F0u;
    SET_GPR_U32(ctx, 31, 0x24C6F8u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24C6F0u, 0x24C6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C6F8u;
label_24c6f8:
    // 0x24c6f8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c6fc: 0xac620104  sw          $v0, 0x104($v1)
    ctx->pc = 0x24c6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 2));
label_24c700:
    // 0x24c700: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x24c700u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24c704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c708: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x24c708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24c70c: 0x3e00008  jr          $ra
    ctx->pc = 0x24C70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C714u;
}
