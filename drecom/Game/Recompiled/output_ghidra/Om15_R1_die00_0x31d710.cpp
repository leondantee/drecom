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

// Function: Om15_R1_die00
// Address: 0x31d710 - 0x31dee0
void Om15_R1_die00_0x31d710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om15_R1_die00_0x31d710");
#endif

    switch (ctx->pc) {
        case 0x31d7dcu: goto label_31d7dc;
        case 0x31d7e8u: goto label_31d7e8;
        case 0x31d81cu: goto label_31d81c;
        case 0x31d828u: goto label_31d828;
        case 0x31d864u: goto label_31d864;
        case 0x31d870u: goto label_31d870;
        case 0x31d8a4u: goto label_31d8a4;
        case 0x31d8b0u: goto label_31d8b0;
        case 0x31d904u: goto label_31d904;
        case 0x31d928u: goto label_31d928;
        case 0x31d9b8u: goto label_31d9b8;
        case 0x31d9c0u: goto label_31d9c0;
        case 0x31d9dcu: goto label_31d9dc;
        case 0x31d9f8u: goto label_31d9f8;
        case 0x31da28u: goto label_31da28;
        case 0x31da3cu: goto label_31da3c;
        case 0x31da50u: goto label_31da50;
        case 0x31da64u: goto label_31da64;
        case 0x31da78u: goto label_31da78;
        case 0x31daf8u: goto label_31daf8;
        case 0x31db3cu: goto label_31db3c;
        case 0x31db50u: goto label_31db50;
        case 0x31db64u: goto label_31db64;
        case 0x31db78u: goto label_31db78;
        case 0x31db8cu: goto label_31db8c;
        case 0x31dbccu: goto label_31dbcc;
        case 0x31dbfcu: goto label_31dbfc;
        case 0x31dc30u: goto label_31dc30;
        case 0x31ddc4u: goto label_31ddc4;
        case 0x31de30u: goto label_31de30;
        default: break;
    }

    ctx->pc = 0x31d710u;

    // 0x31d710: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x31d710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x31d714: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x31d714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x31d718: 0xafa40118  sw          $a0, 0x118($sp)
    ctx->pc = 0x31d718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 4));
    // 0x31d71c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x31d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x31d720: 0x24679d50  addiu       $a3, $v1, -0x62B0
    ctx->pc = 0x31d720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942032));
    // 0x31d724: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31d724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31d728: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x31d728u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x399D50u));
    // 0x31d72c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x31d72cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x31d730: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x31d730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d734: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x31d734u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x31d738: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x31d738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31d73c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31d73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31d740: 0x1083014a  beq         $a0, $v1, . + 4 + (0x14A << 2)
    ctx->pc = 0x31D740u;
    {
        const bool branch_taken_0x31d740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31d740) {
            ctx->pc = 0x31DC6Cu;
            goto label_31dc6c;
        }
    }
    ctx->pc = 0x31D748u;
    // 0x31d748: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31d748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31d74c: 0x10830061  beq         $a0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x31D74Cu;
    {
        const bool branch_taken_0x31d74c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31d74c) {
            ctx->pc = 0x31D8D4u;
            goto label_31d8d4;
        }
    }
    ctx->pc = 0x31D754u;
    // 0x31d754: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31d754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d758: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x31D758u;
    {
        const bool branch_taken_0x31d758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31d758) {
            ctx->pc = 0x31D780u;
            goto label_31d780;
        }
    }
    ctx->pc = 0x31D760u;
    // 0x31d760: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D760u;
    {
        const bool branch_taken_0x31d760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d760) {
            ctx->pc = 0x31D770u;
            goto label_31d770;
        }
    }
    ctx->pc = 0x31D768u;
    // 0x31d768: 0x100001d9  b           . + 4 + (0x1D9 << 2)
    ctx->pc = 0x31D768u;
    {
        const bool branch_taken_0x31d768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d768) {
            ctx->pc = 0x31DED0u;
            goto label_31ded0;
        }
    }
    ctx->pc = 0x31D770u;
label_31d770:
    // 0x31d770: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x31d770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d774: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x31d774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31d778: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31d778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31d77c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x31d77cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_31d780:
    // 0x31d780: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31d780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d784: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x31d784u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x31d788: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x31d788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31d78c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d790: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x31D790u;
    {
        const bool branch_taken_0x31d790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31d790) {
            ctx->pc = 0x31D830u;
            goto label_31d830;
        }
    }
    ctx->pc = 0x31D798u;
    // 0x31d798: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D798u;
    {
        const bool branch_taken_0x31d798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d798) {
            ctx->pc = 0x31D7A8u;
            goto label_31d7a8;
        }
    }
    ctx->pc = 0x31D7A0u;
    // 0x31d7a0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x31D7A0u;
    {
        const bool branch_taken_0x31d7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d7a0) {
            ctx->pc = 0x31D8B0u;
            goto label_31d8b0;
        }
    }
    ctx->pc = 0x31D7A8u;
label_31d7a8:
    // 0x31d7a8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31d7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d7ac: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x31d7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x31d7b0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x31d7b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31d7b4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31d7b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x31d7b8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31d7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d7bc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31d7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x31d7c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31d7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31d7c4: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x31d7c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31d7c8: 0x24046102  addiu       $a0, $zero, 0x6102
    ctx->pc = 0x31d7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24834));
    // 0x31d7cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d7ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d7d0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31d7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31d7d4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D7D4u;
    SET_GPR_U32(ctx, 31, 0x31D7DCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D7D4u, 0x31D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D7DCu;
label_31d7dc:
    // 0x31d7dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d7dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d7e0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D7E0u;
    SET_GPR_U32(ctx, 31, 0x31D7E8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D7E0u, 0x31D7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D7E8u;
label_31d7e8:
    // 0x31d7e8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d7ec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31d7f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31d7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d7f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31d7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31d7f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31d7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d7fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31d7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31d800: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31d800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31d804: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31d804u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d808: 0x24046202  addiu       $a0, $zero, 0x6202
    ctx->pc = 0x31d808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25090));
    // 0x31d80c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d80cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d810: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31d810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31d814: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D814u;
    SET_GPR_U32(ctx, 31, 0x31D81Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D814u, 0x31D81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D81Cu;
label_31d81c:
    // 0x31d81c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d81cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d820: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D820u;
    SET_GPR_U32(ctx, 31, 0x31D828u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D820u, 0x31D828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D828u;
label_31d828:
    // 0x31d828: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x31D828u;
    {
        const bool branch_taken_0x31d828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d828) {
            ctx->pc = 0x31D8B0u;
            goto label_31d8b0;
        }
    }
    ctx->pc = 0x31D830u;
label_31d830:
    // 0x31d830: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31d830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d834: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31d834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31d838: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31d838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d83c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31d83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31d840: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31d840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d844: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31d844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31d848: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31d848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31d84c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31d84cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d850: 0x24046107  addiu       $a0, $zero, 0x6107
    ctx->pc = 0x31d850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24839));
    // 0x31d854: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d854u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d858: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31d858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31d85c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D85Cu;
    SET_GPR_U32(ctx, 31, 0x31D864u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D85Cu, 0x31D864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D864u;
label_31d864:
    // 0x31d864: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d864u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d868: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D868u;
    SET_GPR_U32(ctx, 31, 0x31D870u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D868u, 0x31D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D870u;
label_31d870:
    // 0x31d870: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31d870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d874: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31d874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31d878: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31d878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d87c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31d87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31d880: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31d880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d884: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31d884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31d888: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31d888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31d88c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31d88cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d890: 0x24046207  addiu       $a0, $zero, 0x6207
    ctx->pc = 0x31d890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25095));
    // 0x31d894: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d894u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d898: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31d898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31d89c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D89Cu;
    SET_GPR_U32(ctx, 31, 0x31D8A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D89Cu, 0x31D8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D8A4u;
label_31d8a4:
    // 0x31d8a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d8a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d8a8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D8A8u;
    SET_GPR_U32(ctx, 31, 0x31D8B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D8A8u, 0x31D8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D8B0u;
label_31d8b0:
    // 0x31d8b0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d8b4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x31d8b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x31d8b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31d8bc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x31d8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x31d8c0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x31d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31d8c4: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d8c8: 0xac43128c  sw          $v1, 0x128C($v0)
    ctx->pc = 0x31d8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 3));
    // 0x31d8cc: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d8d0: 0xac40129c  sw          $zero, 0x129C($v0)
    ctx->pc = 0x31d8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4764), GPR_U32(ctx, 0));
label_31d8d4:
    // 0x31d8d4: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d8d8: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x31d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x31d8dc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31d8dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31d8e0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x31d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31d8e4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31d8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31d8e8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31d8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31d8ec: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x31d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x31d8f0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31d8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31d8f4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x31d8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31d8f8: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x31d8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x31d8fc: 0xc040c80  jal         func_103200
    ctx->pc = 0x31D8FCu;
    SET_GPR_U32(ctx, 31, 0x31D904u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x31D904u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31D904u) { return; }
    ctx->pc = 0x31D904u;
label_31d904:
    // 0x31d904: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x31d904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d908: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x31d908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d90c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x31d90cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31d910: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x31d910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d914: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x31d914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d918: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31d918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31d91c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x31d91cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31d920: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x31D920u;
    SET_GPR_U32(ctx, 31, 0x31D928u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x31D920u, 0x31D928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D928u;
label_31d928:
    // 0x31d928: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x31d928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x31d92c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d930: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x31d930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x31d934: 0x2c410005  sltiu       $at, $v0, 0x5
    ctx->pc = 0x31d934u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x31d938: 0x1020005a  beqz        $at, . + 4 + (0x5A << 2)
    ctx->pc = 0x31D938u;
    {
        const bool branch_taken_0x31d938 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d938) {
            ctx->pc = 0x31DAA4u;
            goto label_31daa4;
        }
    }
    ctx->pc = 0x31D940u;
    // 0x31d940: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31d940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d944: 0x8c43129c  lw          $v1, 0x129C($v0)
    ctx->pc = 0x31d944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4764)));
    // 0x31d948: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x31d948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x31d94c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x31d94cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x31d950: 0x0  nop
    ctx->pc = 0x31d950u;
    // NOP
    // 0x31d954: 0x0  nop
    ctx->pc = 0x31d954u;
    // NOP
    // 0x31d958: 0x1010  mfhi        $v0
    ctx->pc = 0x31d958u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x31d95c: 0x14400094  bnez        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x31D95Cu;
    {
        const bool branch_taken_0x31d95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d95c) {
            ctx->pc = 0x31DBB0u;
            goto label_31dbb0;
        }
    }
    ctx->pc = 0x31D964u;
    // 0x31d964: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31d964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31d968: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x31d968u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x31d96c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x31d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x31d970: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31d970u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31d974: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x31d974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31d978: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31d978u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31d97c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x31d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x31d980: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x31d980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x31d984: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x31d984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x31d988: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31d988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d98c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31d98cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31d990: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x31d990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31d994: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x31d994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x31d998: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x31d998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x31d99c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x31d99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x31d9a0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x31d9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x31d9a4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x31d9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31d9a8: 0x27a60108  addiu       $a2, $sp, 0x108
    ctx->pc = 0x31d9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x31d9ac: 0x27a7010c  addiu       $a3, $sp, 0x10C
    ctx->pc = 0x31d9acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x31d9b0: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x31D9B0u;
    SET_GPR_U32(ctx, 31, 0x31D9B8u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x31D9B0u, 0x31D9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D9B8u;
label_31d9b8:
    // 0x31d9b8: 0xc067654  jal         func_19D950
    ctx->pc = 0x31D9B8u;
    SET_GPR_U32(ctx, 31, 0x31D9C0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x31D9B8u, 0x31D9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D9C0u;
label_31d9c0:
    // 0x31d9c0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x31d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x31d9c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31d9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d9c8: 0x0  nop
    ctx->pc = 0x31d9c8u;
    // NOP
    // 0x31d9cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31d9ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31d9d0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x31d9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x31d9d4: 0xc067654  jal         func_19D950
    ctx->pc = 0x31D9D4u;
    SET_GPR_U32(ctx, 31, 0x31D9DCu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x31D9D4u, 0x31D9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D9DCu;
label_31d9dc:
    // 0x31d9dc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x31d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x31d9e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31d9e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d9e4: 0x0  nop
    ctx->pc = 0x31d9e4u;
    // NOP
    // 0x31d9e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31d9e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31d9ec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x31d9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x31d9f0: 0xc067648  jal         func_19D920
    ctx->pc = 0x31D9F0u;
    SET_GPR_U32(ctx, 31, 0x31D9F8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x31D9F0u, 0x31D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D9F8u;
label_31d9f8:
    // 0x31d9f8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x31d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x31d9fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31d9fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31da00: 0x0  nop
    ctx->pc = 0x31da00u;
    // NOP
    // 0x31da04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31da04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31da08: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x31da08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x31da0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31da10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31da10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31da14: 0x0  nop
    ctx->pc = 0x31da14u;
    // NOP
    // 0x31da18: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x31da18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x31da1c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31da1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31da20: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x31DA20u;
    SET_GPR_U32(ctx, 31, 0x31DA28u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x31DA28u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31DA28u) { return; }
    ctx->pc = 0x31DA28u;
label_31da28:
    // 0x31da28: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31da28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31da2c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x31da2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31da30: 0xc7ac0108  lwc1        $f12, 0x108($sp)
    ctx->pc = 0x31da30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31da34: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x31DA34u;
    SET_GPR_U32(ctx, 31, 0x31DA3Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x31DA3Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31DA3Cu) { return; }
    ctx->pc = 0x31DA3Cu;
label_31da3c:
    // 0x31da3c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x31da3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x31da40: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x31da40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31da44: 0xc7ac010c  lwc1        $f12, 0x10C($sp)
    ctx->pc = 0x31da44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31da48: 0xc040d0e  jal         func_103438
    ctx->pc = 0x31DA48u;
    SET_GPR_U32(ctx, 31, 0x31DA50u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x31DA50u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31DA50u) { return; }
    ctx->pc = 0x31DA50u;
label_31da50:
    // 0x31da50: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31da50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31da54: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x31da54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31da58: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x31da58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x31da5c: 0xc040c00  jal         func_103000
    ctx->pc = 0x31DA5Cu;
    SET_GPR_U32(ctx, 31, 0x31DA64u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x31DA64u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31DA64u) { return; }
    ctx->pc = 0x31DA64u;
label_31da64:
    // 0x31da64: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31da64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31da68: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x31da68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31da6c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31da6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31da70: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x31DA70u;
    SET_GPR_U32(ctx, 31, 0x31DA78u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x31DA78u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31DA78u) { return; }
    ctx->pc = 0x31DA78u;
label_31da78:
    // 0x31da78: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31da78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31da7c: 0x8c62128c  lw          $v0, 0x128C($v1)
    ctx->pc = 0x31da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x31da80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31da80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31da84: 0xac62128c  sw          $v0, 0x128C($v1)
    ctx->pc = 0x31da84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 2));
    // 0x31da88: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x31da88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31da8c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31da8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31da90: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31da90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31da94: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x31da94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x31da98: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31da98u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31da9c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x31DA9Cu;
    {
        const bool branch_taken_0x31da9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31da9c) {
            ctx->pc = 0x31DBB0u;
            goto label_31dbb0;
        }
    }
    ctx->pc = 0x31DAA4u;
label_31daa4:
    // 0x31daa4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31daa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31daa8: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x31daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x31daac: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x31daacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x31dab0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31dab0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31dab4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x31dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31dab8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31dab8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31dabc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x31dabcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31dac0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x31dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x31dac4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x31dac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x31dac8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x31dac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x31dacc: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31daccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31dad0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31dad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31dad4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x31dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x31dad8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x31dad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x31dadc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x31dadcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x31dae0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x31dae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x31dae4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x31dae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31dae8: 0x27a60108  addiu       $a2, $sp, 0x108
    ctx->pc = 0x31dae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x31daec: 0x27a7010c  addiu       $a3, $sp, 0x10C
    ctx->pc = 0x31daecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x31daf0: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x31DAF0u;
    SET_GPR_U32(ctx, 31, 0x31DAF8u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x31DAF0u, 0x31DAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DAF8u;
label_31daf8:
    // 0x31daf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31daf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31dafc: 0x0  nop
    ctx->pc = 0x31dafcu;
    // NOP
    // 0x31db00: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x31db00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x31db04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31db04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31db08: 0x0  nop
    ctx->pc = 0x31db08u;
    // NOP
    // 0x31db0c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x31db0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x31db10: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x31db10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x31db14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31db14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31db18: 0x0  nop
    ctx->pc = 0x31db18u;
    // NOP
    // 0x31db1c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x31db1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x31db20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31db20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31db24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31db24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31db28: 0x0  nop
    ctx->pc = 0x31db28u;
    // NOP
    // 0x31db2c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x31db2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x31db30: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31db30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31db34: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x31DB34u;
    SET_GPR_U32(ctx, 31, 0x31DB3Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x31DB3Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31DB3Cu) { return; }
    ctx->pc = 0x31DB3Cu;
label_31db3c:
    // 0x31db3c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31db3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31db40: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x31db40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31db44: 0xc7ac0108  lwc1        $f12, 0x108($sp)
    ctx->pc = 0x31db44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31db48: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x31DB48u;
    SET_GPR_U32(ctx, 31, 0x31DB50u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x31DB50u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31DB50u) { return; }
    ctx->pc = 0x31DB50u;
label_31db50:
    // 0x31db50: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x31db50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x31db54: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x31db54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31db58: 0xc7ac010c  lwc1        $f12, 0x10C($sp)
    ctx->pc = 0x31db58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31db5c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x31DB5Cu;
    SET_GPR_U32(ctx, 31, 0x31DB64u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x31DB64u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31DB64u) { return; }
    ctx->pc = 0x31DB64u;
label_31db64:
    // 0x31db64: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31db64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31db68: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x31db68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31db6c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x31db6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x31db70: 0xc040c00  jal         func_103000
    ctx->pc = 0x31DB70u;
    SET_GPR_U32(ctx, 31, 0x31DB78u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x31DB78u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31DB78u) { return; }
    ctx->pc = 0x31DB78u;
label_31db78:
    // 0x31db78: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31db78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31db7c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x31db7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31db80: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31db80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31db84: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x31DB84u;
    SET_GPR_U32(ctx, 31, 0x31DB8Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x31DB8Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31DB8Cu) { return; }
    ctx->pc = 0x31DB8Cu;
label_31db8c:
    // 0x31db8c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31db90: 0x8c62128c  lw          $v0, 0x128C($v1)
    ctx->pc = 0x31db90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x31db94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31db94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31db98: 0xac62128c  sw          $v0, 0x128C($v1)
    ctx->pc = 0x31db98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 2));
    // 0x31db9c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x31db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31dba0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31dba0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31dba4: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31dba8: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x31dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x31dbac: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31dbacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_31dbb0:
    // 0x31dbb0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31dbb4: 0x8c62129c  lw          $v0, 0x129C($v1)
    ctx->pc = 0x31dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4764)));
    // 0x31dbb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31dbbc: 0xac62129c  sw          $v0, 0x129C($v1)
    ctx->pc = 0x31dbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4764), GPR_U32(ctx, 2));
    // 0x31dbc0: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x31dbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31dbc4: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x31DBC4u;
    SET_GPR_U32(ctx, 31, 0x31DBCCu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x31DBC4u, 0x31DBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DBCCu;
label_31dbcc:
    // 0x31dbcc: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31dbd0: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x31dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x31dbd4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31dbd4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31dbd8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x31dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31dbdc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31dbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31dbe0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31dbe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31dbe4: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x31dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x31dbe8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31dbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31dbec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x31dbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31dbf0: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x31dbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x31dbf4: 0xc040c80  jal         func_103200
    ctx->pc = 0x31DBF4u;
    SET_GPR_U32(ctx, 31, 0x31DBFCu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x31DBFCu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31DBFCu) { return; }
    ctx->pc = 0x31DBFCu;
label_31dbfc:
    // 0x31dbfc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x31dbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31dc00: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x31dc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31dc04: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x31dc04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31dc08: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x31dc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31dc0c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x31dc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31dc10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31dc10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31dc14: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x31dc14u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31dc18: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x31dc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31dc1c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x31dc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31dc20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31dc20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31dc24: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x31dc24u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x31dc28: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x31DC28u;
    SET_GPR_U32(ctx, 31, 0x31DC30u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x31DC28u, 0x31DC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DC30u;
label_31dc30:
    // 0x31dc30: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x31dc30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x31dc34: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x31dc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31dc38: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x31dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x31dc3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31dc3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31dc40: 0x0  nop
    ctx->pc = 0x31dc40u;
    // NOP
    // 0x31dc44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31dc44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31dc48: 0x0  nop
    ctx->pc = 0x31dc48u;
    // NOP
    // 0x31dc4c: 0x450000a0  bc1f        . + 4 + (0xA0 << 2)
    ctx->pc = 0x31DC4Cu;
    {
        const bool branch_taken_0x31dc4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31dc4c) {
            ctx->pc = 0x31DED0u;
            goto label_31ded0;
        }
    }
    ctx->pc = 0x31DC54u;
    // 0x31dc54: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x31dc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31dc58: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x31dc58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31dc5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31dc60: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x31dc60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x31dc64: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x31DC64u;
    {
        const bool branch_taken_0x31dc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dc64) {
            ctx->pc = 0x31DED0u;
            goto label_31ded0;
        }
    }
    ctx->pc = 0x31DC6Cu;
label_31dc6c:
    // 0x31dc6c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31dc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31dc70: 0x8c22aea0  lw          $v0, -0x5160($at)
    ctx->pc = 0x31dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AEA0u));
    // 0x31dc74: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x31DC74u;
    {
        const bool branch_taken_0x31dc74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31dc74) {
            ctx->pc = 0x31DCF8u;
            goto label_31dcf8;
        }
    }
    ctx->pc = 0x31DC7Cu;
    // 0x31dc7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31dc80: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31dc80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31dc84: 0xac22aea0  sw          $v0, -0x5160($at)
    ctx->pc = 0x31dc84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AEA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AEA0u, _value); } while (0);
    // 0x31dc88: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x31dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31dc8c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31dc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31dc90: 0xa022af3c  sb          $v0, -0x50C4($at)
    ctx->pc = 0x31dc90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AF3Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x85AF3Cu, _value); } while (0);
    // 0x31dc94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31dc98: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31dc98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31dc9c: 0xa022af38  sb          $v0, -0x50C8($at)
    ctx->pc = 0x31dc9cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AF38u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x85AF38u, _value); } while (0);
    // 0x31dca0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x31dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x31dca4: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31dca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31dca8: 0xa022af39  sb          $v0, -0x50C7($at)
    ctx->pc = 0x31dca8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AF39u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x85AF39u, _value); } while (0);
    // 0x31dcac: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x31dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x31dcb0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31dcb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31dcb4: 0xa022af3b  sb          $v0, -0x50C5($at)
    ctx->pc = 0x31dcb4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AF3Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x85AF3Bu, _value); } while (0);
    // 0x31dcb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31dcbc: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x31dcbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x31dcc0: 0xa022c775  sb          $v0, -0x388B($at)
    ctx->pc = 0x31dcc0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x62C775u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x62C775u, _value); } while (0);
    // 0x31dcc4: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x31dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x31dcc8: 0x2442aeb0  addiu       $v0, $v0, -0x5150
    ctx->pc = 0x31dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946480));
    // 0x31dccc: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x31dcccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x31dcd0: 0xac22c778  sw          $v0, -0x3888($at)
    ctx->pc = 0x31dcd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x62C778u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62C778u, _value); } while (0);
    // 0x31dcd4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31dcd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31dcd8: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x31dcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x31dcdc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x31dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x31dce0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31dce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31dce4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31dce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31dce8: 0xac221a3c  sw          $v0, 0x1A3C($at)
    ctx->pc = 0x31dce8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x31dcec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31dcf0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31dcf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31dcf4: 0xa022fe13  sb          $v0, -0x1ED($at)
    ctx->pc = 0x31dcf4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFE13u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CFE13u, _value); } while (0);
label_31dcf8:
    // 0x31dcf8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31dcfc: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x31dcfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x31dd00: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31dd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31dd04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31dd08: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x31DD08u;
    {
        const bool branch_taken_0x31dd08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31dd08) {
            ctx->pc = 0x31DD50u;
            goto label_31dd50;
        }
    }
    ctx->pc = 0x31DD10u;
    // 0x31dd10: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31DD10u;
    {
        const bool branch_taken_0x31dd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dd10) {
            ctx->pc = 0x31DD20u;
            goto label_31dd20;
        }
    }
    ctx->pc = 0x31DD18u;
    // 0x31dd18: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x31DD18u;
    {
        const bool branch_taken_0x31dd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dd18) {
            ctx->pc = 0x31DDC4u;
            goto label_31ddc4;
        }
    }
    ctx->pc = 0x31DD20u;
label_31dd20:
    // 0x31dd20: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31dd20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31dd24: 0x8c23af60  lw          $v1, -0x50A0($at)
    ctx->pc = 0x31dd24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85AF60u));
    // 0x31dd28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31dd2c: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x31DD2Cu;
    {
        const bool branch_taken_0x31dd2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31dd2c) {
            ctx->pc = 0x31DDC4u;
            goto label_31ddc4;
        }
    }
    ctx->pc = 0x31DD34u;
    // 0x31dd34: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31dd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31dd38: 0x8c22af60  lw          $v0, -0x50A0($at)
    ctx->pc = 0x31dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AF60u));
    // 0x31dd3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31dd40: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31dd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31dd44: 0xac22af60  sw          $v0, -0x50A0($at)
    ctx->pc = 0x31dd44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AF60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AF60u, _value); } while (0);
    // 0x31dd48: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x31DD48u;
    {
        const bool branch_taken_0x31dd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dd48) {
            ctx->pc = 0x31DDC4u;
            goto label_31ddc4;
        }
    }
    ctx->pc = 0x31DD50u;
label_31dd50:
    // 0x31dd50: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31dd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31dd54: 0x8422ec66  lh          $v0, -0x139A($at)
    ctx->pc = 0x31dd54u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x31dd58: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x31dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x31dd5c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31dd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31dd60: 0xa422ec66  sh          $v0, -0x139A($at)
    ctx->pc = 0x31dd60u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEC66u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEC66u, _value); } while (0);
    // 0x31dd64: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31dd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31dd68: 0x8422ec66  lh          $v0, -0x139A($at)
    ctx->pc = 0x31dd68u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x31dd6c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x31dd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31dd70: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x31dd70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31dd74: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31dd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31dd78: 0x8422ef4c  lh          $v0, -0x10B4($at)
    ctx->pc = 0x31dd78u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEF4Cu));
    // 0x31dd7c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x31dd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31dd80: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31dd80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x31dd84: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x31dd84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31dd88: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x31DD88u;
    {
        const bool branch_taken_0x31dd88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dd88) {
            ctx->pc = 0x31DDA0u;
            goto label_31dda0;
        }
    }
    ctx->pc = 0x31DD90u;
    // 0x31dd90: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31dd90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31dd94: 0x8422ef4c  lh          $v0, -0x10B4($at)
    ctx->pc = 0x31dd94u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEF4Cu));
    // 0x31dd98: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31dd98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31dd9c: 0xa422ec66  sh          $v0, -0x139A($at)
    ctx->pc = 0x31dd9cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEC66u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEC66u, _value); } while (0);
label_31dda0:
    // 0x31dda0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x31dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x31dda4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x31dda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x31dda8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31dda8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31ddac: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x31ddacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x31ddb0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x31ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x31ddb4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x31ddb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x31ddb8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x31ddb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31ddbc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x31DDBCu;
    SET_GPR_U32(ctx, 31, 0x31DDC4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x31DDBCu, 0x31DDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DDC4u;
label_31ddc4:
    // 0x31ddc4: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31ddc8: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x31ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x31ddcc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x31ddccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x31ddd0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31DDD0u;
    {
        const bool branch_taken_0x31ddd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ddd0) {
            ctx->pc = 0x31DE14u;
            goto label_31de14;
        }
    }
    ctx->pc = 0x31DDD8u;
    // 0x31ddd8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31dddc: 0x8c4212a0  lw          $v0, 0x12A0($v0)
    ctx->pc = 0x31dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4768)));
    // 0x31dde0: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x31dde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x31dde4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31dde8: 0x622006  srlv        $a0, $v0, $v1
    ctx->pc = 0x31dde8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x31ddec: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31ddf0: 0x8c4212a0  lw          $v0, 0x12A0($v0)
    ctx->pc = 0x31ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4768)));
    // 0x31ddf4: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x31ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x31ddf8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31ddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31ddfc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x31ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x31de00: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x31de00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x31de04: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x31de04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31de08: 0x8c621a64  lw          $v0, 0x1A64($v1)
    ctx->pc = 0x31de08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6756)));
    // 0x31de0c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x31de0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x31de10: 0xac621a64  sw          $v0, 0x1A64($v1)
    ctx->pc = 0x31de10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6756), GPR_U32(ctx, 2));
label_31de14:
    // 0x31de14: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31de14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31de18: 0x8c670130  lw          $a3, 0x130($v1)
    ctx->pc = 0x31de18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x31de1c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x31de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31de20: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x31de20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31de24: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x31de24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31de28: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x31DE28u;
    SET_GPR_U32(ctx, 31, 0x31DE30u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x31DE28u, 0x31DE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DE30u;
label_31de30:
    // 0x31de30: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31de30u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31de34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31de34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31de38: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31de38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31de3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x31de3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31de40: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31de40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31de44: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x31de44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31de48: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31de48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31de4c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x31de4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31de50: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x31de50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31de54: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x31de54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31de58: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31de58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31de5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x31de5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x31de60: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31de60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31de64: 0xac601298  sw          $zero, 0x1298($v1)
    ctx->pc = 0x31de64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4760), GPR_U32(ctx, 0));
    // 0x31de68: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31de68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31de6c: 0xac601290  sw          $zero, 0x1290($v1)
    ctx->pc = 0x31de6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 0));
    // 0x31de70: 0x3c04c974  lui         $a0, 0xC974
    ctx->pc = 0x31de70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51572 << 16));
    // 0x31de74: 0x34832400  ori         $v1, $a0, 0x2400
    ctx->pc = 0x31de74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9216);
    // 0x31de78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31de78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31de7c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31de80: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x31de80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x31de84: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x31de84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x31de88: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x31de88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x31de8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31de8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31de90: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x31de90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31de94: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x31de94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x31de98: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x31de98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x31de9c: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x31de9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x31dea0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31dea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31dea4: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31dea8: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x31dea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x31deac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31deacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31deb0: 0x8fa70118  lw          $a3, 0x118($sp)
    ctx->pc = 0x31deb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31deb4: 0xe4e001a0  swc1        $f0, 0x1A0($a3)
    ctx->pc = 0x31deb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 416), bits); }
    // 0x31deb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31deb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31debc: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x31debcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31dec0: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x31dec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x31dec4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31dec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31dec8: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x31dec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31decc: 0xe4c001a8  swc1        $f0, 0x1A8($a2)
    ctx->pc = 0x31deccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 424), bits); }
label_31ded0:
    // 0x31ded0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x31ded0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ded4: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x31ded4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x31ded8: 0x3e00008  jr          $ra
    ctx->pc = 0x31DED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DEE0u;
}
