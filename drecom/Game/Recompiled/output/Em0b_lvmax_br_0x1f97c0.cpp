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

// Function: Em0b_lvmax_br
// Address: 0x1f97c0 - 0x1f99e4
void Em0b_lvmax_br_0x1f97c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_lvmax_br_0x1f97c0");
#endif

    ctx->pc = 0x1f97c0u;

    // 0x1f97c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f97c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f97c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f97c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f97c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f97c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f97cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f97ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f97d0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1f97d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1f97d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f97d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f97d8: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x1f97d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x1f97dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f97dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f97e0: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x1f97e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x1f97e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f97e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f97e8: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x1f97e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x1f97ec: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1f97ecu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f97f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f97f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f97f4: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1f97f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1f97f8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1f97f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f97fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f97fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f9800: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9800u;
    {
        const bool branch_taken_0x1f9800 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1f9800) {
            ctx->pc = 0x1F981Cu;
            goto label_1f981c;
        }
    }
    ctx->pc = 0x1F9808u;
    // 0x1f9808: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f9808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f980c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1f980cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1f9810: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1f9810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1f9814: 0xac640030  sw          $a0, 0x30($v1)
    ctx->pc = 0x1f9814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 4));
    // 0x1f9818: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f981c:
    // 0x1f981c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f9820: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9824: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x1f9824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1f9828: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9828u;
    {
        const bool branch_taken_0x1f9828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9828) {
            ctx->pc = 0x1F984Cu;
            goto label_1f984c;
        }
    }
    ctx->pc = 0x1F9830u;
    // 0x1f9830: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f9830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f9834: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9838: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x1f9838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1f983c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1f983cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1f9840: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1f9840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1f9844: 0xac640030  sw          $a0, 0x30($v1)
    ctx->pc = 0x1f9844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 4));
    // 0x1f9848: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f984c:
    // 0x1f984c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f984cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f9850: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9854: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x1f9854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1f9858: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9858u;
    {
        const bool branch_taken_0x1f9858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9858) {
            ctx->pc = 0x1F987Cu;
            goto label_1f987c;
        }
    }
    ctx->pc = 0x1F9860u;
    // 0x1f9860: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f9860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f9864: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9868: 0x8c640064  lw          $a0, 0x64($v1)
    ctx->pc = 0x1f9868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1f986c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1f986cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1f9870: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1f9870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1f9874: 0xac640030  sw          $a0, 0x30($v1)
    ctx->pc = 0x1f9874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 4));
    // 0x1f9878: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f987c:
    // 0x1f987c: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x1f987cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1f9880: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f9880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f9884: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F9884u;
    {
        const bool branch_taken_0x1f9884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f9884) {
            ctx->pc = 0x1F98D8u;
            goto label_1f98d8;
        }
    }
    ctx->pc = 0x1F988Cu;
    // 0x1f988c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f988cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f9890: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f9890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f9894: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F9894u;
    {
        const bool branch_taken_0x1f9894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f9894) {
            ctx->pc = 0x1F98D8u;
            goto label_1f98d8;
        }
    }
    ctx->pc = 0x1F989Cu;
    // 0x1f989c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1f989cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1f98a0: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1f98a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1f98a4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f98a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f98a8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f98a8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f98ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f98acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f98b0: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1f98b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1f98b4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1f98b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f98b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f98b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f98bc: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1f98bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f98c0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F98C0u;
    {
        const bool branch_taken_0x1f98c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f98c0) {
            ctx->pc = 0x1F98D8u;
            goto label_1f98d8;
        }
    }
    ctx->pc = 0x1F98C8u;
    // 0x1f98c8: 0x8fb20038  lw          $s2, 0x38($sp)
    ctx->pc = 0x1f98c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f98cc: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1f98ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1f98d0: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x1f98d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x1f98d4: 0xafb20034  sw          $s2, 0x34($sp)
    ctx->pc = 0x1f98d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 18));
label_1f98d8:
    // 0x1f98d8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f98d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f98dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f98dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f98e0: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F98E0u;
    {
        const bool branch_taken_0x1f98e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f98e0) {
            ctx->pc = 0x1F9934u;
            goto label_1f9934;
        }
    }
    ctx->pc = 0x1F98E8u;
    // 0x1f98e8: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x1f98e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1f98ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f98ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f98f0: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F98F0u;
    {
        const bool branch_taken_0x1f98f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f98f0) {
            ctx->pc = 0x1F9934u;
            goto label_1f9934;
        }
    }
    ctx->pc = 0x1F98F8u;
    // 0x1f98f8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f98f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f98fc: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1f98fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1f9900: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f9900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f9904: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f9904u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f9908: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1f9908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1f990c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1f990cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1f9910: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1f9910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f9914: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f9914u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f9918: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1f9918u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f991c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F991Cu;
    {
        const bool branch_taken_0x1f991c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f991c) {
            ctx->pc = 0x1F9934u;
            goto label_1f9934;
        }
    }
    ctx->pc = 0x1F9924u;
    // 0x1f9924: 0x8fb20034  lw          $s2, 0x34($sp)
    ctx->pc = 0x1f9924u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1f9928: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f9928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f992c: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x1f992cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x1f9930: 0xafb20030  sw          $s2, 0x30($sp)
    ctx->pc = 0x1f9930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 18));
label_1f9934:
    // 0x1f9934: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1f9934u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9938: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f9938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f993c: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F993Cu;
    {
        const bool branch_taken_0x1f993c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f993c) {
            ctx->pc = 0x1F9954u;
            goto label_1f9954;
        }
    }
    ctx->pc = 0x1F9944u;
    // 0x1f9944: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f9944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f9948: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1f9948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1f994c: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f994cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f9950: 0xa060007a  sb          $zero, 0x7A($v1)
    ctx->pc = 0x1f9950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 122), (uint8_t)GPR_U32(ctx, 0));
label_1f9954:
    // 0x1f9954: 0x8fb00034  lw          $s0, 0x34($sp)
    ctx->pc = 0x1f9954u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1f9958: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f9958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f995c: 0x1203000b  beq         $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F995Cu;
    {
        const bool branch_taken_0x1f995c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f995c) {
            ctx->pc = 0x1F998Cu;
            goto label_1f998c;
        }
    }
    ctx->pc = 0x1F9964u;
    // 0x1f9964: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f9964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9968: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f9968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f996c: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x1f996cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x1f9970: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f9970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9974: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f9974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f9978: 0xa064007a  sb          $a0, 0x7A($v1)
    ctx->pc = 0x1f9978u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 122), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f997c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1f997cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9980: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x1f9980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1f9984: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f9984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f9988: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x1f9988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
label_1f998c:
    // 0x1f998c: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x1f998cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f9990: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f9990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f9994: 0x1203000d  beq         $s0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F9994u;
    {
        const bool branch_taken_0x1f9994 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f9994) {
            ctx->pc = 0x1F99CCu;
            goto label_1f99cc;
        }
    }
    ctx->pc = 0x1F999Cu;
    // 0x1f999c: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x1f999cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1f99a0: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f99a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f99a4: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x1f99a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x1f99a8: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f99a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f99ac: 0xac600068  sw          $zero, 0x68($v1)
    ctx->pc = 0x1f99acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 0));
    // 0x1f99b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f99b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f99b4: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f99b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f99b8: 0xa064007a  sb          $a0, 0x7A($v1)
    ctx->pc = 0x1f99b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 122), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f99bc: 0x8fb00034  lw          $s0, 0x34($sp)
    ctx->pc = 0x1f99bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1f99c0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f99c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f99c4: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f99c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f99c8: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x1f99c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
label_1f99cc:
    // 0x1f99cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f99ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f99d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f99d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f99d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f99d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f99d8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1f99d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f99dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F99DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F99DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F99E4u;
}
