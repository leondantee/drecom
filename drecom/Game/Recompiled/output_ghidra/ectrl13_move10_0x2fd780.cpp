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

// Function: ectrl13_move10
// Address: 0x2fd780 - 0x2fda7c
void ectrl13_move10_0x2fd780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl13_move10_0x2fd780");
#endif

    switch (ctx->pc) {
        case 0x2fd814u: goto label_2fd814;
        case 0x2fd820u: goto label_2fd820;
        case 0x2fd848u: goto label_2fd848;
        case 0x2fd854u: goto label_2fd854;
        case 0x2fd87cu: goto label_2fd87c;
        case 0x2fd888u: goto label_2fd888;
        case 0x2fd8b0u: goto label_2fd8b0;
        case 0x2fd8bcu: goto label_2fd8bc;
        case 0x2fd900u: goto label_2fd900;
        case 0x2fd918u: goto label_2fd918;
        case 0x2fd930u: goto label_2fd930;
        case 0x2fd93cu: goto label_2fd93c;
        case 0x2fd980u: goto label_2fd980;
        case 0x2fd998u: goto label_2fd998;
        case 0x2fd9b0u: goto label_2fd9b0;
        case 0x2fd9bcu: goto label_2fd9bc;
        case 0x2fda00u: goto label_2fda00;
        case 0x2fda18u: goto label_2fda18;
        case 0x2fda30u: goto label_2fda30;
        case 0x2fda3cu: goto label_2fda3c;
        default: break;
    }

    ctx->pc = 0x2fd780u;

    // 0x2fd780: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2fd780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2fd784: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2fd784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2fd788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fd788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fd78c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fd78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fd790: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x2fd790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x2fd794: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2fd794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2fd798: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x2fd798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x2fd79c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2fd79cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2fd7a0: 0x246390f0  addiu       $v1, $v1, -0x6F10
    ctx->pc = 0x2fd7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938864));
    // 0x2fd7a4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2fd7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fd7a8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fd7a8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3990F0u));
    // 0x2fd7ac: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2fd7acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2fd7b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2fd7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2fd7b4: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fd7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fd7b8: 0x28610018  slti        $at, $v1, 0x18
    ctx->pc = 0x2fd7b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2fd7bc: 0x1420009f  bnez        $at, . + 4 + (0x9F << 2)
    ctx->pc = 0x2FD7BCu;
    {
        const bool branch_taken_0x2fd7bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd7bc) {
            ctx->pc = 0x2FDA3Cu;
            goto label_2fda3c;
        }
    }
    ctx->pc = 0x2FD7C4u;
    // 0x2fd7c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2fd7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2fd7c8: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fd7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fd7cc: 0x2861001a  slti        $at, $v1, 0x1A
    ctx->pc = 0x2fd7ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x2fd7d0: 0x1020009a  beqz        $at, . + 4 + (0x9A << 2)
    ctx->pc = 0x2FD7D0u;
    {
        const bool branch_taken_0x2fd7d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd7d0) {
            ctx->pc = 0x2FDA3Cu;
            goto label_2fda3c;
        }
    }
    ctx->pc = 0x2FD7D8u;
    // 0x2fd7d8: 0x860215f0  lh          $v0, 0x15F0($s0)
    ctx->pc = 0x2fd7d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5616)));
    // 0x2fd7dc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2fd7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2fd7e0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd7e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd7e4: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x2fd7e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2fd7e8: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x2fd7e8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
    // 0x2fd7ec: 0x11163c  dsll32      $v0, $s1, 24
    ctx->pc = 0x2fd7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 24));
    // 0x2fd7f0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd7f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd7f4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd7f8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2fd7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2fd7fc: 0x2404042b  addiu       $a0, $zero, 0x42B
    ctx->pc = 0x2fd7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1067));
    // 0x2fd800: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fd800u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fd804: 0x24461600  addiu       $a2, $v0, 0x1600
    ctx->pc = 0x2fd804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x2fd808: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fd808u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fd80c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FD80Cu;
    SET_GPR_U32(ctx, 31, 0x2FD814u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FD80Cu, 0x2FD814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD814u;
label_2fd814:
    // 0x2fd814: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fd814u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fd818: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FD818u;
    SET_GPR_U32(ctx, 31, 0x2FD820u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FD818u, 0x2FD820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD820u;
label_2fd820:
    // 0x2fd820: 0x11163c  dsll32      $v0, $s1, 24
    ctx->pc = 0x2fd820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 24));
    // 0x2fd824: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd824u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd828: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd82c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2fd82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2fd830: 0x2404042b  addiu       $a0, $zero, 0x42B
    ctx->pc = 0x2fd830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1067));
    // 0x2fd834: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fd834u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fd838: 0x24461620  addiu       $a2, $v0, 0x1620
    ctx->pc = 0x2fd838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5664));
    // 0x2fd83c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fd83cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fd840: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FD840u;
    SET_GPR_U32(ctx, 31, 0x2FD848u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FD840u, 0x2FD848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD848u;
label_2fd848:
    // 0x2fd848: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fd848u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fd84c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FD84Cu;
    SET_GPR_U32(ctx, 31, 0x2FD854u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FD84Cu, 0x2FD854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD854u;
label_2fd854:
    // 0x2fd854: 0x11163c  dsll32      $v0, $s1, 24
    ctx->pc = 0x2fd854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 24));
    // 0x2fd858: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd858u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd85c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd860: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2fd860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2fd864: 0x2404042b  addiu       $a0, $zero, 0x42B
    ctx->pc = 0x2fd864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1067));
    // 0x2fd868: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fd868u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fd86c: 0x24461640  addiu       $a2, $v0, 0x1640
    ctx->pc = 0x2fd86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5696));
    // 0x2fd870: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fd870u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fd874: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FD874u;
    SET_GPR_U32(ctx, 31, 0x2FD87Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FD874u, 0x2FD87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD87Cu;
label_2fd87c:
    // 0x2fd87c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fd87cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fd880: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FD880u;
    SET_GPR_U32(ctx, 31, 0x2FD888u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FD880u, 0x2FD888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD888u;
label_2fd888:
    // 0x2fd888: 0x11163c  dsll32      $v0, $s1, 24
    ctx->pc = 0x2fd888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 24));
    // 0x2fd88c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd88cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd890: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd894: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2fd894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2fd898: 0x2404042b  addiu       $a0, $zero, 0x42B
    ctx->pc = 0x2fd898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1067));
    // 0x2fd89c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fd89cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fd8a0: 0x24461660  addiu       $a2, $v0, 0x1660
    ctx->pc = 0x2fd8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5728));
    // 0x2fd8a4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fd8a4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fd8a8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FD8A8u;
    SET_GPR_U32(ctx, 31, 0x2FD8B0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FD8A8u, 0x2FD8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD8B0u;
label_2fd8b0:
    // 0x2fd8b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fd8b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fd8b4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FD8B4u;
    SET_GPR_U32(ctx, 31, 0x2FD8BCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FD8B4u, 0x2FD8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD8BCu;
label_2fd8bc:
    // 0x2fd8bc: 0x11163c  dsll32      $v0, $s1, 24
    ctx->pc = 0x2fd8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 24));
    // 0x2fd8c0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd8c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd8c4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd8c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2fd8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2fd8cc: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x2fd8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x2fd8d0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2fd8d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd8d4: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2fd8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fd8d8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2fd8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2fd8dc: 0x11163c  dsll32      $v0, $s1, 24
    ctx->pc = 0x2fd8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 24));
    // 0x2fd8e0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd8e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd8e4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd8e8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2fd8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2fd8ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2fd8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fd8f0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2fd8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fd8f4: 0x24461620  addiu       $a2, $v0, 0x1620
    ctx->pc = 0x2fd8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5664));
    // 0x2fd8f8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x2FD8F8u;
    SET_GPR_U32(ctx, 31, 0x2FD900u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x2FD900u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD900u) { return; }
    ctx->pc = 0x2FD900u;
label_2fd900:
    // 0x2fd900: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2fd900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2fd904: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fd904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd908: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2fd908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fd90c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2fd90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fd910: 0xc040c8c  jal         func_103230
    ctx->pc = 0x2FD910u;
    SET_GPR_U32(ctx, 31, 0x2FD918u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x2FD918u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD918u) { return; }
    ctx->pc = 0x2FD918u;
label_2fd918:
    // 0x2fd918: 0x2404042b  addiu       $a0, $zero, 0x42B
    ctx->pc = 0x2fd918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1067));
    // 0x2fd91c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fd91cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fd920: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2fd920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fd924: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fd924u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fd928: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FD928u;
    SET_GPR_U32(ctx, 31, 0x2FD930u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FD928u, 0x2FD930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD930u;
label_2fd930:
    // 0x2fd930: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fd930u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fd934: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FD934u;
    SET_GPR_U32(ctx, 31, 0x2FD93Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FD934u, 0x2FD93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD93Cu;
label_2fd93c:
    // 0x2fd93c: 0x11163c  dsll32      $v0, $s1, 24
    ctx->pc = 0x2fd93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 24));
    // 0x2fd940: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd940u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd944: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd948: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2fd948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2fd94c: 0x24421620  addiu       $v0, $v0, 0x1620
    ctx->pc = 0x2fd94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5664));
    // 0x2fd950: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2fd950u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd954: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2fd954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fd958: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2fd958u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2fd95c: 0x11163c  dsll32      $v0, $s1, 24
    ctx->pc = 0x2fd95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 24));
    // 0x2fd960: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd960u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd964: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd968: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2fd968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2fd96c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2fd96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fd970: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2fd970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fd974: 0x24461640  addiu       $a2, $v0, 0x1640
    ctx->pc = 0x2fd974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5696));
    // 0x2fd978: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x2FD978u;
    SET_GPR_U32(ctx, 31, 0x2FD980u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x2FD980u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD980u) { return; }
    ctx->pc = 0x2FD980u;
label_2fd980:
    // 0x2fd980: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2fd980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2fd984: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fd984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd988: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2fd988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fd98c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2fd98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fd990: 0xc040c8c  jal         func_103230
    ctx->pc = 0x2FD990u;
    SET_GPR_U32(ctx, 31, 0x2FD998u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x2FD998u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD998u) { return; }
    ctx->pc = 0x2FD998u;
label_2fd998:
    // 0x2fd998: 0x2404042b  addiu       $a0, $zero, 0x42B
    ctx->pc = 0x2fd998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1067));
    // 0x2fd99c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fd99cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fd9a0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2fd9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fd9a4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fd9a4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fd9a8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FD9A8u;
    SET_GPR_U32(ctx, 31, 0x2FD9B0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FD9A8u, 0x2FD9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD9B0u;
label_2fd9b0:
    // 0x2fd9b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fd9b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fd9b4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FD9B4u;
    SET_GPR_U32(ctx, 31, 0x2FD9BCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FD9B4u, 0x2FD9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD9BCu;
label_2fd9bc:
    // 0x2fd9bc: 0x11163c  dsll32      $v0, $s1, 24
    ctx->pc = 0x2fd9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 24));
    // 0x2fd9c0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd9c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd9c4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd9c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2fd9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2fd9cc: 0x24421640  addiu       $v0, $v0, 0x1640
    ctx->pc = 0x2fd9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5696));
    // 0x2fd9d0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2fd9d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd9d4: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2fd9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fd9d8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2fd9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2fd9dc: 0x11163c  dsll32      $v0, $s1, 24
    ctx->pc = 0x2fd9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 24));
    // 0x2fd9e0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd9e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd9e4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd9e8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2fd9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2fd9ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2fd9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fd9f0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2fd9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fd9f4: 0x24461660  addiu       $a2, $v0, 0x1660
    ctx->pc = 0x2fd9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5728));
    // 0x2fd9f8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x2FD9F8u;
    SET_GPR_U32(ctx, 31, 0x2FDA00u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x2FDA00u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FDA00u) { return; }
    ctx->pc = 0x2FDA00u;
label_2fda00:
    // 0x2fda00: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2fda00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2fda04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fda04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fda08: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2fda08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fda0c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2fda0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fda10: 0xc040c8c  jal         func_103230
    ctx->pc = 0x2FDA10u;
    SET_GPR_U32(ctx, 31, 0x2FDA18u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x2FDA18u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FDA18u) { return; }
    ctx->pc = 0x2FDA18u;
label_2fda18:
    // 0x2fda18: 0x2404042b  addiu       $a0, $zero, 0x42B
    ctx->pc = 0x2fda18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1067));
    // 0x2fda1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fda1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fda20: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2fda20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fda24: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fda24u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fda28: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FDA28u;
    SET_GPR_U32(ctx, 31, 0x2FDA30u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FDA28u, 0x2FDA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDA30u;
label_2fda30:
    // 0x2fda30: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fda30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fda34: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FDA34u;
    SET_GPR_U32(ctx, 31, 0x2FDA3Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FDA34u, 0x2FDA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDA3Cu;
label_2fda3c:
    // 0x2fda3c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2fda3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2fda40: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fda40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fda44: 0x28630032  slti        $v1, $v1, 0x32
    ctx->pc = 0x2fda44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2fda48: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FDA48u;
    {
        const bool branch_taken_0x2fda48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fda48) {
            ctx->pc = 0x2FDA64u;
            goto label_2fda64;
        }
    }
    ctx->pc = 0x2FDA50u;
    // 0x2fda50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2fda50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2fda54: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2fda54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fda58: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2fda58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2fda5c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2fda5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2fda60: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2fda60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2fda64:
    // 0x2fda64: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2fda64u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fda68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fda68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fda6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fda6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fda70: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2fda70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fda74: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDA7Cu;
}
