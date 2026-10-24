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

// Function: Em18_stencil_set
// Address: 0x2da700 - 0x2da8f0
void Em18_stencil_set_0x2da700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_stencil_set_0x2da700");
#endif

    switch (ctx->pc) {
        case 0x2da760u: goto label_2da760;
        case 0x2da7a4u: goto label_2da7a4;
        case 0x2da7ccu: goto label_2da7cc;
        case 0x2da810u: goto label_2da810;
        case 0x2da854u: goto label_2da854;
        case 0x2da86cu: goto label_2da86c;
        case 0x2da8b0u: goto label_2da8b0;
        case 0x2da8d8u: goto label_2da8d8;
        default: break;
    }

    ctx->pc = 0x2da700u;

    // 0x2da700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2da700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2da704: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2da704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2da708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2da708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2da70c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2da70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2da710: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2da710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2da714: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2da714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2da718: 0x24511330  addiu       $s1, $v0, 0x1330
    ctx->pc = 0x2da718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2da71c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2da71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2da720: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2da720u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2da724: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2da724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2da728: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2da728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2da72c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da730: 0x8c500234  lw          $s0, 0x234($v0)
    ctx->pc = 0x2da730u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 564)));
    // 0x2da734: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2da734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2da738: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2da738u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2da73c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2da73cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2da740: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da744: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2da744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2da748: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2da748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2da74c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da750: 0x24440204  addiu       $a0, $v0, 0x204
    ctx->pc = 0x2da750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
    // 0x2da754: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2da754u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2da758: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x2DA758u;
    SET_GPR_U32(ctx, 31, 0x2DA760u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x2DA758u, 0x2DA760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA760u;
label_2da760:
    // 0x2da760: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2da760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2da764: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2da764u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2da768: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2da768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2da76c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da770: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2da770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2da774: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2da774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2da778: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2da778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da77c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2da77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2da780: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2da780u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2da784: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2da784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2da788: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2da788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2da78c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da790: 0x8c450244  lw          $a1, 0x244($v0)
    ctx->pc = 0x2da790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x2da794: 0x24840204  addiu       $a0, $a0, 0x204
    ctx->pc = 0x2da794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 516));
    // 0x2da798: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2da798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2da79c: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x2DA79Cu;
    SET_GPR_U32(ctx, 31, 0x2DA7A4u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2DA79Cu, 0x2DA7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA7A4u;
label_2da7a4:
    // 0x2da7a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2da7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2da7a8: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2da7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2da7ac: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2da7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2da7b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da7b4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2da7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2da7b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2da7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2da7bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da7c0: 0x24440204  addiu       $a0, $v0, 0x204
    ctx->pc = 0x2da7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
    // 0x2da7c4: 0xc06b0d4  jal         func_1AC350
    ctx->pc = 0x2DA7C4u;
    SET_GPR_U32(ctx, 31, 0x2DA7CCu);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x2DA7C4u, 0x2DA7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA7CCu;
label_2da7cc:
    // 0x2da7cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2da7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2da7d0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2da7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2da7d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2da7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2da7d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2da7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2da7dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da7e0: 0x8c50023c  lw          $s0, 0x23C($v0)
    ctx->pc = 0x2da7e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
    // 0x2da7e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2da7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2da7e8: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2da7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2da7ec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2da7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2da7f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da7f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2da7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2da7f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2da7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2da7fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da800: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x2da800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x2da804: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2da804u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2da808: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x2DA808u;
    SET_GPR_U32(ctx, 31, 0x2DA810u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x2DA808u, 0x2DA810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA810u;
label_2da810:
    // 0x2da810: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2da810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2da814: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2da814u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2da818: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2da818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2da81c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da820: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2da820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2da824: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2da824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2da828: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2da828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da82c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2da82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2da830: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2da830u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2da834: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2da834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2da838: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2da838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2da83c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da840: 0x8c45024c  lw          $a1, 0x24C($v0)
    ctx->pc = 0x2da840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x2da844: 0x2484021c  addiu       $a0, $a0, 0x21C
    ctx->pc = 0x2da844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 540));
    // 0x2da848: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2da848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2da84c: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x2DA84Cu;
    SET_GPR_U32(ctx, 31, 0x2DA854u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2DA84Cu, 0x2DA854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA854u;
label_2da854:
    // 0x2da854: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2da854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2da858: 0x8c44024c  lw          $a0, 0x24C($v0)
    ctx->pc = 0x2da858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x2da85c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2da85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2da860: 0x8c450250  lw          $a1, 0x250($v0)
    ctx->pc = 0x2da860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2da864: 0xc075898  jal         func_1D6260
    ctx->pc = 0x2DA864u;
    SET_GPR_U32(ctx, 31, 0x2DA86Cu);
    ctx->pc = 0x1D6260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6260u, 0x2DA864u, 0x2DA86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA86Cu;
label_2da86c:
    // 0x2da86c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2da86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2da870: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2da870u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2da874: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2da874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2da878: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da87c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2da87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2da880: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2da880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2da884: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2da884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da888: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2da888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2da88c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2da88cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2da890: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2da890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2da894: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2da894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2da898: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da89c: 0x8c450254  lw          $a1, 0x254($v0)
    ctx->pc = 0x2da89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 596)));
    // 0x2da8a0: 0x2484021c  addiu       $a0, $a0, 0x21C
    ctx->pc = 0x2da8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 540));
    // 0x2da8a4: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2da8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2da8a8: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x2DA8A8u;
    SET_GPR_U32(ctx, 31, 0x2DA8B0u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2DA8A8u, 0x2DA8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA8B0u;
label_2da8b0:
    // 0x2da8b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2da8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2da8b4: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2da8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2da8b8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2da8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2da8bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da8c0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2da8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2da8c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2da8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2da8c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da8cc: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x2da8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x2da8d0: 0xc06b0d4  jal         func_1AC350
    ctx->pc = 0x2DA8D0u;
    SET_GPR_U32(ctx, 31, 0x2DA8D8u);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x2DA8D0u, 0x2DA8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA8D8u;
label_2da8d8:
    // 0x2da8d8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2da8d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da8dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2da8dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da8e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2da8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da8e4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2da8e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2da8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA8F0u;
}
