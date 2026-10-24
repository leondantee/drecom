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

// Function: entry_002046d0
// Address: 0x2046d0 - 0x204804
void entry_002046d0_0x2046d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002046d0_0x2046d0");
#endif

    switch (ctx->pc) {
        case 0x2046e8u: goto label_2046e8;
        case 0x2046f8u: goto label_2046f8;
        case 0x204714u: goto label_204714;
        case 0x204728u: goto label_204728;
        case 0x204738u: goto label_204738;
        case 0x20474cu: goto label_20474c;
        case 0x204768u: goto label_204768;
        case 0x204780u: goto label_204780;
        case 0x20479cu: goto label_20479c;
        default: break;
    }

    ctx->pc = 0x2046d0u;

    // 0x2046d0: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2046d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2046d4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2046d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2046d8: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2046d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2046dc: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2046dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2046e0: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x2046E0u;
    SET_GPR_U32(ctx, 31, 0x2046E8u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x2046E0u, 0x2046E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2046E8u;
label_2046e8:
    // 0x2046e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2046e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2046ec: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2046ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2046f0: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x2046F0u;
    SET_GPR_U32(ctx, 31, 0x2046F8u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x2046F0u, 0x2046F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2046F8u;
label_2046f8:
    // 0x2046f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2046f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2046fc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2046fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204700: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x204700u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x204704: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x204704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x204708: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x204708u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x20470c: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x20470Cu;
    SET_GPR_U32(ctx, 31, 0x204714u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x20470Cu, 0x204714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204714u;
label_204714:
    // 0x204714: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x204714u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204718: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20471c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x20471cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x204720: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204720u;
    SET_GPR_U32(ctx, 31, 0x204728u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204720u, 0x204728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204728u;
label_204728:
    // 0x204728: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20472c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x20472cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x204730: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204730u;
    SET_GPR_U32(ctx, 31, 0x204738u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204730u, 0x204738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204738u;
label_204738:
    // 0x204738: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20473c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x20473cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204740: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x204740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x204744: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204744u;
    SET_GPR_U32(ctx, 31, 0x20474Cu);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204744u, 0x20474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20474Cu;
label_20474c:
    // 0x20474c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x20474cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204750: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x204750u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204754: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x204754u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x204758: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x204758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20475c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x20475cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204760: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204760u;
    SET_GPR_U32(ctx, 31, 0x204768u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204760u, 0x204768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204768u;
label_204768:
    // 0x204768: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x204768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20476c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x20476cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x204770: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x204770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x204774: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x204774u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204778: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204778u;
    SET_GPR_U32(ctx, 31, 0x204780u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204778u, 0x204780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204780u;
label_204780:
    // 0x204780: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204780u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204784: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204784u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204788: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x204788u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x20478c: 0x2408001b  addiu       $t0, $zero, 0x1B
    ctx->pc = 0x20478cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x204790: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x204790u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x204794: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204794u;
    SET_GPR_U32(ctx, 31, 0x20479Cu);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204794u, 0x20479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20479Cu;
label_20479c:
    // 0x20479c: 0x1040026d  beqz        $v0, . + 4 + (0x26D << 2)
    ctx->pc = 0x20479Cu;
    {
        const bool branch_taken_0x20479c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20479c) {
            ctx->pc = 0x205154u;
            return;
        }
    }
    ctx->pc = 0x2047A4u;
    // 0x2047a4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2047a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2047a8: 0x94a60094  lhu         $a2, 0x94($a1)
    ctx->pc = 0x2047a8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x2047ac: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x2047acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2047b0: 0xa4a70094  sh          $a3, 0x94($a1)
    ctx->pc = 0x2047b0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 148), (uint16_t)GPR_U32(ctx, 7));
    // 0x2047b4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2047b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2047b8: 0x94a70094  lhu         $a3, 0x94($a1)
    ctx->pc = 0x2047b8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x2047bc: 0x30e8ffff  andi        $t0, $a3, 0xFFFF
    ctx->pc = 0x2047bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2047c0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2047c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2047c4: 0x110401a0  beq         $t0, $a0, . + 4 + (0x1A0 << 2)
    ctx->pc = 0x2047C4u;
    {
        const bool branch_taken_0x2047c4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        if (branch_taken_0x2047c4) {
            ctx->pc = 0x204E48u;
            return;
        }
    }
    ctx->pc = 0x2047CCu;
    // 0x2047cc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2047ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2047d0: 0x1105013d  beq         $t0, $a1, . + 4 + (0x13D << 2)
    ctx->pc = 0x2047D0u;
    {
        const bool branch_taken_0x2047d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x2047d0) {
            ctx->pc = 0x204CC8u;
            return;
        }
    }
    ctx->pc = 0x2047D8u;
    // 0x2047d8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2047d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2047dc: 0x110600c6  beq         $t0, $a2, . + 4 + (0xC6 << 2)
    ctx->pc = 0x2047DCu;
    {
        const bool branch_taken_0x2047dc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        if (branch_taken_0x2047dc) {
            ctx->pc = 0x204AF8u;
            return;
        }
    }
    ctx->pc = 0x2047E4u;
    // 0x2047e4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2047e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2047e8: 0x11070064  beq         $t0, $a3, . + 4 + (0x64 << 2)
    ctx->pc = 0x2047E8u;
    {
        const bool branch_taken_0x2047e8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x2047e8) {
            ctx->pc = 0x20497Cu;
            return;
        }
    }
    ctx->pc = 0x2047F0u;
    // 0x2047f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2047f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2047f4: 0x11050003  beq         $t0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2047F4u;
    {
        const bool branch_taken_0x2047f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x2047f4) {
            ctx->pc = 0x204804u;
            return;
        }
    }
    ctx->pc = 0x2047FCu;
    // 0x2047fc: 0x10000255  b           . + 4 + (0x255 << 2)
    ctx->pc = 0x2047FCu;
    {
        const bool branch_taken_0x2047fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2047fc) {
            ctx->pc = 0x205154u;
            return;
        }
    }
    ctx->pc = 0x204804u;
}
