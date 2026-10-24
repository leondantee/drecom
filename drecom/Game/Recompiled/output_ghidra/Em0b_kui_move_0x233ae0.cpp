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

// Function: Em0b_kui_move
// Address: 0x233ae0 - 0x234b14
void Em0b_kui_move_0x233ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_kui_move_0x233ae0");
#endif

    switch (ctx->pc) {
        case 0x233e28u: goto label_233e28;
        case 0x2340f8u: goto label_2340f8;
        case 0x2343bcu: goto label_2343bc;
        case 0x23453cu: goto label_23453c;
        case 0x23454cu: goto label_23454c;
        case 0x234594u: goto label_234594;
        case 0x23459cu: goto label_23459c;
        case 0x2345c0u: goto label_2345c0;
        case 0x2345d4u: goto label_2345d4;
        case 0x234644u: goto label_234644;
        case 0x234650u: goto label_234650;
        case 0x2346dcu: goto label_2346dc;
        case 0x2346f8u: goto label_2346f8;
        case 0x234720u: goto label_234720;
        case 0x234738u: goto label_234738;
        case 0x234770u: goto label_234770;
        case 0x234968u: goto label_234968;
        case 0x234994u: goto label_234994;
        case 0x2349d8u: goto label_2349d8;
        case 0x2349e0u: goto label_2349e0;
        case 0x2349f0u: goto label_2349f0;
        case 0x234a3cu: goto label_234a3c;
        case 0x234a48u: goto label_234a48;
        case 0x234a6cu: goto label_234a6c;
        case 0x234a84u: goto label_234a84;
        case 0x234ac0u: goto label_234ac0;
        case 0x234accu: goto label_234acc;
        default: break;
    }

    ctx->pc = 0x233ae0u;

    // 0x233ae0: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x233ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x233ae4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x233ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x233ae8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x233ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x233aec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x233aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x233af0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x233af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x233af4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x233af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x233af8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x233af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x233afc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x233afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x233b00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x233b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x233b04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x233b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x233b08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x233b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x233b0c: 0xafa401c0  sw          $a0, 0x1C0($sp)
    ctx->pc = 0x233b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 4));
    // 0x233b10: 0xafa501c8  sw          $a1, 0x1C8($sp)
    ctx->pc = 0x233b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 5));
    // 0x233b14: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x233b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233b18: 0x8c7502d0  lw          $s5, 0x2D0($v1)
    ctx->pc = 0x233b18u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x233b1c: 0x26a33b60  addiu       $v1, $s5, 0x3B60
    ctx->pc = 0x233b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 15200));
    // 0x233b20: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x233b20u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x233b24: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x233b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233b28: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x233b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x233b2c: 0x24630980  addiu       $v1, $v1, 0x980
    ctx->pc = 0x233b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2432));
    // 0x233b30: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x233b30u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x233b34: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x233b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233b38: 0x8fa701c8  lw          $a3, 0x1C8($sp)
    ctx->pc = 0x233b38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x233b3c: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x233b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x233b40: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x233b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x233b44: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x233b44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x233b48: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x233b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x233b4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x233b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x233b50: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x233b50u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x233b54: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x233b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233b58: 0x8c710058  lw          $s1, 0x58($v1)
    ctx->pc = 0x233b58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x233b5c: 0x26230750  addiu       $v1, $s1, 0x750
    ctx->pc = 0x233b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1872));
    // 0x233b60: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x233b60u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x233b64: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x233b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x233b68: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x233b68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x233b6c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x233b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x233b70: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x233b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x233b74: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x233B74u;
    {
        const bool branch_taken_0x233b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x233b74) {
            ctx->pc = 0x233BF0u;
            goto label_233bf0;
        }
    }
    ctx->pc = 0x233B7Cu;
    // 0x233b7c: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x233b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233b80: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x233b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x233b84: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x233b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x233b88: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x233b88u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x233b8c: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x233b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x233b90: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x233b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x233b94: 0x10640014  beq         $v1, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x233B94u;
    {
        const bool branch_taken_0x233b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x233b94) {
            ctx->pc = 0x233BE8u;
            goto label_233be8;
        }
    }
    ctx->pc = 0x233B9Cu;
    // 0x233b9c: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x233b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x233ba0: 0x24670008  addiu       $a3, $v1, 0x8
    ctx->pc = 0x233ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x233ba4: 0xae270060  sw          $a3, 0x60($s1)
    ctx->pc = 0x233ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 7));
    // 0x233ba8: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x233ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x233bac: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x233bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x233bb0: 0xae250064  sw          $a1, 0x64($s1)
    ctx->pc = 0x233bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 5));
    // 0x233bb4: 0x8e260068  lw          $a2, 0x68($s1)
    ctx->pc = 0x233bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x233bb8: 0x24d20008  addiu       $s2, $a2, 0x8
    ctx->pc = 0x233bb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x233bbc: 0xae320068  sw          $s2, 0x68($s1)
    ctx->pc = 0x233bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 18));
    // 0x233bc0: 0x8e270060  lw          $a3, 0x60($s1)
    ctx->pc = 0x233bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x233bc4: 0x2ce400ff  sltiu       $a0, $a3, 0xFF
    ctx->pc = 0x233bc4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x233bc8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x233BC8u;
    {
        const bool branch_taken_0x233bc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x233bc8) {
            ctx->pc = 0x233BE8u;
            goto label_233be8;
        }
    }
    ctx->pc = 0x233BD0u;
    // 0x233bd0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x233bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x233bd4: 0xae250060  sw          $a1, 0x60($s1)
    ctx->pc = 0x233bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 5));
    // 0x233bd8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x233bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x233bdc: 0xae260064  sw          $a2, 0x64($s1)
    ctx->pc = 0x233bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 6));
    // 0x233be0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x233be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x233be4: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x233be4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
label_233be8:
    // 0x233be8: 0x100003bd  b           . + 4 + (0x3BD << 2)
    ctx->pc = 0x233BE8u;
    {
        const bool branch_taken_0x233be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233be8) {
            ctx->pc = 0x234AE0u;
            goto label_234ae0;
        }
    }
    ctx->pc = 0x233BF0u;
label_233bf0:
    // 0x233bf0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x233bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x233bf4: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x233bf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x233bf8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x233bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x233bfc: 0x30850002  andi        $a1, $a0, 0x2
    ctx->pc = 0x233bfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x233c00: 0x10a00074  beqz        $a1, . + 4 + (0x74 << 2)
    ctx->pc = 0x233C00u;
    {
        const bool branch_taken_0x233c00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x233c00) {
            ctx->pc = 0x233DD4u;
            goto label_233dd4;
        }
    }
    ctx->pc = 0x233C08u;
    // 0x233c08: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x233c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x233c0c: 0x94850006  lhu         $a1, 0x6($a0)
    ctx->pc = 0x233c0cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x233c10: 0x30a3fffd  andi        $v1, $a1, 0xFFFD
    ctx->pc = 0x233c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65533);
    // 0x233c14: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x233c14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x233c18: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x233c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x233c1c: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x233c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x233c20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233c24: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x233c24u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x233c28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x233c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233c2c: 0xa2660000  sb          $a2, 0x0($s3)
    ctx->pc = 0x233c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x233c30: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x233c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233c34: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x233c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x233c38: 0x24724010  addiu       $s2, $v1, 0x4010
    ctx->pc = 0x233c38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 16400));
    // 0x233c3c: 0x96460140  lhu         $a2, 0x140($s2)
    ctx->pc = 0x233c3cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 320)));
    // 0x233c40: 0x34c50008  ori         $a1, $a2, 0x8
    ctx->pc = 0x233c40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x233c44: 0xa6450140  sh          $a1, 0x140($s2)
    ctx->pc = 0x233c44u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 320), (uint16_t)GPR_U32(ctx, 5));
    // 0x233c48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x233c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233c4c: 0x0  nop
    ctx->pc = 0x233c4cu;
    // NOP
    // 0x233c50: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x233c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
    // 0x233c54: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x233c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x233c58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x233c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233c5c: 0x0  nop
    ctx->pc = 0x233c5cu;
    // NOP
    // 0x233c60: 0xe640012c  swc1        $f0, 0x12C($s2)
    ctx->pc = 0x233c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
    // 0x233c64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x233c64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233c68: 0x0  nop
    ctx->pc = 0x233c68u;
    // NOP
    // 0x233c6c: 0xe6400130  swc1        $f0, 0x130($s2)
    ctx->pc = 0x233c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
    // 0x233c70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x233c70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233c74: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x233c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x233c78: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x233c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x233c7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x233c7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233c80: 0x26170150  addiu       $s7, $s0, 0x150
    ctx->pc = 0x233c80u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x233c84: 0xe6e0001c  swc1        $f0, 0x1C($s7)
    ctx->pc = 0x233c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 28), bits); }
    // 0x233c88: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x233c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233c8c: 0x946310a4  lhu         $v1, 0x10A4($v1)
    ctx->pc = 0x233c8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4260)));
    // 0x233c90: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x233c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x233c94: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x233c94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x233c98: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x233c98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x233c9c: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x233c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x233ca0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x233ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x233ca4: 0x853821  addu        $a3, $a0, $a1
    ctx->pc = 0x233ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233ca8: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x233ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x233cac: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x233cacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x233cb0: 0x24a4cfd0  addiu       $a0, $a1, -0x3030
    ctx->pc = 0x233cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954960));
    // 0x233cb4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x233cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x233cb8: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x233cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x233cbc: 0x8fa601c0  lw          $a2, 0x1C0($sp)
    ctx->pc = 0x233cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233cc0: 0x94c410a4  lhu         $a0, 0x10A4($a2)
    ctx->pc = 0x233cc0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4260)));
    // 0x233cc4: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x233cc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x233cc8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x233cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x233ccc: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x233cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233cd0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x233cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x233cd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x233cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x233cd8: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x233cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x233cdc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x233cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x233ce0: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x233ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x233ce4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x233ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x233ce8: 0x2485cfd0  addiu       $a1, $a0, -0x3030
    ctx->pc = 0x233ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x233cec: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x233cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x233cf0: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x233cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x233cf4: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x233cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233cf8: 0x948610a4  lhu         $a2, 0x10A4($a0)
    ctx->pc = 0x233cf8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x233cfc: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x233cfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x233d00: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x233d00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x233d04: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x233d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233d08: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x233d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x233d0c: 0x24640002  addiu       $a0, $v1, 0x2
    ctx->pc = 0x233d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x233d10: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x233d10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x233d14: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x233d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x233d18: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x233d18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x233d1c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x233d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x233d20: 0x2484cfd0  addiu       $a0, $a0, -0x3030
    ctx->pc = 0x233d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x233d24: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x233d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233d28: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x233d28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x233d2c: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x233d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233d30: 0x94a410a4  lhu         $a0, 0x10A4($a1)
    ctx->pc = 0x233d30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4260)));
    // 0x233d34: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x233d34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x233d38: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x233d38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x233d3c: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x233d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x233d40: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x233d40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x233d44: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x233d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x233d48: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x233d48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x233d4c: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x233d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x233d50: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x233d50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x233d54: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x233d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x233d58: 0x2484cfd0  addiu       $a0, $a0, -0x3030
    ctx->pc = 0x233d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x233d5c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x233d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233d60: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x233d60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x233d64: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x233d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233d68: 0x94a410a4  lhu         $a0, 0x10A4($a1)
    ctx->pc = 0x233d68u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4260)));
    // 0x233d6c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x233d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x233d70: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x233d70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x233d74: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x233d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x233d78: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x233d78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x233d7c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x233d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x233d80: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x233d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x233d84: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x233d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x233d88: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x233d88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x233d8c: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x233d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x233d90: 0x24a4cfd0  addiu       $a0, $a1, -0x3030
    ctx->pc = 0x233d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954960));
    // 0x233d94: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x233d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x233d98: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x233d98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x233d9c: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x233d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233da0: 0x94a410a4  lhu         $a0, 0x10A4($a1)
    ctx->pc = 0x233da0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4260)));
    // 0x233da4: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x233da4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x233da8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x233da8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x233dac: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x233dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233db0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x233db0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x233db4: 0x24840005  addiu       $a0, $a0, 0x5
    ctx->pc = 0x233db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x233db8: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x233db8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x233dbc: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x233dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x233dc0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x233dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x233dc4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x233dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x233dc8: 0x2463cfd0  addiu       $v1, $v1, -0x3030
    ctx->pc = 0x233dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954960));
    // 0x233dcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x233dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x233dd0: 0xa4600014  sh          $zero, 0x14($v1)
    ctx->pc = 0x233dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 0));
label_233dd4:
    // 0x233dd4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x233dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x233dd8: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x233dd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x233ddc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x233ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x233de0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x233de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x233de4: 0x10830247  beq         $a0, $v1, . + 4 + (0x247 << 2)
    ctx->pc = 0x233DE4u;
    {
        const bool branch_taken_0x233de4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x233de4) {
            ctx->pc = 0x234704u;
            goto label_234704;
        }
    }
    ctx->pc = 0x233DECu;
    // 0x233dec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233df0: 0x10830088  beq         $a0, $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x233DF0u;
    {
        const bool branch_taken_0x233df0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x233df0) {
            ctx->pc = 0x234014u;
            goto label_234014;
        }
    }
    ctx->pc = 0x233DF8u;
    // 0x233df8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x233DF8u;
    {
        const bool branch_taken_0x233df8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x233df8) {
            ctx->pc = 0x233E08u;
            goto label_233e08;
        }
    }
    ctx->pc = 0x233E00u;
    // 0x233e00: 0x10000337  b           . + 4 + (0x337 << 2)
    ctx->pc = 0x233E00u;
    {
        const bool branch_taken_0x233e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233e00) {
            ctx->pc = 0x234AE0u;
            goto label_234ae0;
        }
    }
    ctx->pc = 0x233E08u;
label_233e08:
    // 0x233e08: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x233e08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x233e0c: 0x344400a4  ori         $a0, $v0, 0xA4
    ctx->pc = 0x233e0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)164);
    // 0x233e10: 0xa6040140  sh          $a0, 0x140($s0)
    ctx->pc = 0x233e10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 4));
    // 0x233e14: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x233e14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x233e18: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x233e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x233e1c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x233e1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x233e20: 0xc040c00  jal         func_103000
    ctx->pc = 0x233E20u;
    SET_GPR_U32(ctx, 31, 0x233E28u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x233E28u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x233E28u) { return; }
    ctx->pc = 0x233E28u;
label_233e28:
    // 0x233e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233e2c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x233e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x233e30: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x233e30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x233e34: 0x24070438  addiu       $a3, $zero, 0x438
    ctx->pc = 0x233e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1080));
    // 0x233e38: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x233e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x233e3c: 0xa4870002  sh          $a3, 0x2($a0)
    ctx->pc = 0x233e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x233e40: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x233e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233e44: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x233e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x233e48: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x233e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x233e4c: 0x34a30100  ori         $v1, $a1, 0x100
    ctx->pc = 0x233e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x233e50: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x233e50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x233e54: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x233e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233e58: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x233e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x233e5c: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x233e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x233e60: 0x3c08c0a0  lui         $t0, 0xC0A0
    ctx->pc = 0x233e60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49312 << 16));
    // 0x233e64: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x233e64u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233e68: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x233e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x233e6c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x233e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x233e70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233e74: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x233e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233e78: 0x949510a4  lhu         $s5, 0x10A4($a0)
    ctx->pc = 0x233e78u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x233e7c: 0x32a5ffff  andi        $a1, $s5, 0xFFFF
    ctx->pc = 0x233e7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x233e80: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x233e80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x233e84: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x233e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233e88: 0x4b040  sll         $s6, $a0, 1
    ctx->pc = 0x233e88u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x233e8c: 0x162080  sll         $a0, $s6, 2
    ctx->pc = 0x233e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x233e90: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x233e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x233e94: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x233e94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x233e98: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x233e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x233e9c: 0x2484cfd0  addiu       $a0, $a0, -0x3030
    ctx->pc = 0x233e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x233ea0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x233ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233ea4: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x233ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x233ea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233eac: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x233eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233eb0: 0x948410a4  lhu         $a0, 0x10A4($a0)
    ctx->pc = 0x233eb0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x233eb4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x233eb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x233eb8: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x233eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x233ebc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x233ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x233ec0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x233ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x233ec4: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x233ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x233ec8: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x233ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x233ecc: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x233eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x233ed0: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x233ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x233ed4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x233ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x233ed8: 0x2484cfd0  addiu       $a0, $a0, -0x3030
    ctx->pc = 0x233ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x233edc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x233edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233ee0: 0xa4a30014  sh          $v1, 0x14($a1)
    ctx->pc = 0x233ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x233ee4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233ee8: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x233ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233eec: 0x948410a4  lhu         $a0, 0x10A4($a0)
    ctx->pc = 0x233eecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x233ef0: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x233ef0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x233ef4: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x233ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x233ef8: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x233ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x233efc: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x233efcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x233f00: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x233f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x233f04: 0x4b080  sll         $s6, $a0, 2
    ctx->pc = 0x233f04u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x233f08: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x233f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x233f0c: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x233f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x233f10: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x233f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x233f14: 0x2484cfd0  addiu       $a0, $a0, -0x3030
    ctx->pc = 0x233f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x233f18: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x233f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233f1c: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x233f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x233f20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233f24: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x233f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233f28: 0x948610a4  lhu         $a2, 0x10A4($a0)
    ctx->pc = 0x233f28u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x233f2c: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x233f2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x233f30: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x233f30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x233f34: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x233f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233f38: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x233f38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x233f3c: 0x24850003  addiu       $a1, $a0, 0x3
    ctx->pc = 0x233f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x233f40: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x233f40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x233f44: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x233f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233f48: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x233f48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x233f4c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x233f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x233f50: 0x2482cfd0  addiu       $v0, $a0, -0x3030
    ctx->pc = 0x233f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x233f54: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x233f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x233f58: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x233f58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x233f5c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x233f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233f60: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x233f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233f64: 0x944410a4  lhu         $a0, 0x10A4($v0)
    ctx->pc = 0x233f64u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4260)));
    // 0x233f68: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x233f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x233f6c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x233f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x233f70: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x233f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x233f74: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x233f74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x233f78: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x233f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x233f7c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x233f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x233f80: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x233f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x233f84: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x233f84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x233f88: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x233f88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x233f8c: 0x24c2cfd0  addiu       $v0, $a2, -0x3030
    ctx->pc = 0x233f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954960));
    // 0x233f90: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x233f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x233f94: 0xa4470014  sh          $a3, 0x14($v0)
    ctx->pc = 0x233f94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 7));
    // 0x233f98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233f9c: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x233f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233fa0: 0x946310a4  lhu         $v1, 0x10A4($v1)
    ctx->pc = 0x233fa0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4260)));
    // 0x233fa4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x233fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x233fa8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x233fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x233fac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x233facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x233fb0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x233fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x233fb4: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x233fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x233fb8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x233fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x233fbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x233fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x233fc0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x233fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x233fc4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x233fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x233fc8: 0x2463cfd0  addiu       $v1, $v1, -0x3030
    ctx->pc = 0x233fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954960));
    // 0x233fcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x233fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x233fd0: 0xa4620014  sh          $v0, 0x14($v1)
    ctx->pc = 0x233fd0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x233fd4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x233fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x233fd8: 0x2475acd0  addiu       $s5, $v1, -0x5330
    ctx->pc = 0x233fd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946000));
    // 0x233fdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233fe0: 0xa2a30001  sb          $v1, 0x1($s5)
    ctx->pc = 0x233fe0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38ACD1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x38ACD1u, _value); } while (0);
    // 0x233fe4: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x233fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
    // 0x233fe8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x233fe8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233fec: 0x0  nop
    ctx->pc = 0x233fecu;
    // NOP
    // 0x233ff0: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x233ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38ACD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38ACD4u, _value); } while (0); }
    // 0x233ff4: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x233ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
    // 0x233ff8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x233ff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233ffc: 0x0  nop
    ctx->pc = 0x233ffcu;
    // NOP
    // 0x234000: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x234000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38ACD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38ACD8u, _value); } while (0); }
    // 0x234004: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x234004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x234008: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x234008u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23400c: 0x0  nop
    ctx->pc = 0x23400cu;
    // NOP
    // 0x234010: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x234010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38ACDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38ACDCu, _value); } while (0); }
label_234014:
    // 0x234014: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x234014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x234018: 0x94670002  lhu         $a3, 0x2($v1)
    ctx->pc = 0x234018u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x23401c: 0x24e4ffff  addiu       $a0, $a3, -0x1
    ctx->pc = 0x23401cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x234020: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x234020u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x234024: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x234024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x234028: 0x94c40002  lhu         $a0, 0x2($a2)
    ctx->pc = 0x234028u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x23402c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x23402cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x234030: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x234030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x234034: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x234034u;
    {
        const bool branch_taken_0x234034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x234034) {
            ctx->pc = 0x234050u;
            goto label_234050;
        }
    }
    ctx->pc = 0x23403Cu;
    // 0x23403c: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x23403cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234040: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x234040u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x234044: 0x32230002  andi        $v1, $s1, 0x2
    ctx->pc = 0x234044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x234048: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x234048u;
    {
        const bool branch_taken_0x234048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x234048) {
            ctx->pc = 0x23405Cu;
            goto label_23405c;
        }
    }
    ctx->pc = 0x234050u;
label_234050:
    // 0x234050: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x234050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234054: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x234054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x234058: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x234058u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_23405c:
    // 0x23405c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x23405cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x234060: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x234060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234064: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x234064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234068: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x234068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23406c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x23406cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x234070: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x234070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x234074: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x234074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234078: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x234078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23407c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x23407cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234080: 0x0  nop
    ctx->pc = 0x234080u;
    // NOP
    // 0x234084: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x234084u;
    {
        const bool branch_taken_0x234084 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x234084) {
            ctx->pc = 0x2340ACu;
            goto label_2340ac;
        }
    }
    ctx->pc = 0x23408Cu;
    // 0x23408c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x23408cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x234090: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x234090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234094: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x234094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x234098: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x234098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x23409c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23409cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2340a0: 0x0  nop
    ctx->pc = 0x2340a0u;
    // NOP
    // 0x2340a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2340a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2340a8: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2340a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_2340ac:
    // 0x2340ac: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2340acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2340b0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2340b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2340b4: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2340b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2340b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2340b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2340bc: 0x0  nop
    ctx->pc = 0x2340bcu;
    // NOP
    // 0x2340c0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2340C0u;
    {
        const bool branch_taken_0x2340c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2340c0) {
            ctx->pc = 0x2340E8u;
            goto label_2340e8;
        }
    }
    ctx->pc = 0x2340C8u;
    // 0x2340c8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2340c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2340cc: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x2340ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2340d0: 0x3c073d4c  lui         $a3, 0x3D4C
    ctx->pc = 0x2340d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15692 << 16));
    // 0x2340d4: 0x34e3cccd  ori         $v1, $a3, 0xCCCD
    ctx->pc = 0x2340d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x2340d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2340d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2340dc: 0x0  nop
    ctx->pc = 0x2340dcu;
    // NOP
    // 0x2340e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2340e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2340e4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2340e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_2340e8:
    // 0x2340e8: 0x73c02628  paddub      $a0, $fp, $zero
    ctx->pc = 0x2340e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x2340ec: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2340ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2340f0: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2340F0u;
    SET_GPR_U32(ctx, 31, 0x2340F8u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2340F8u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2340F8u) { return; }
    ctx->pc = 0x2340F8u;
label_2340f8:
    // 0x2340f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2340f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2340fc: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x2340fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234100: 0x8ca602d0  lw          $a2, 0x2D0($a1)
    ctx->pc = 0x234100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x234104: 0x24d24010  addiu       $s2, $a2, 0x4010
    ctx->pc = 0x234104u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 16400));
    // 0x234108: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x234108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23410c: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x23410cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234110: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x234110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
    // 0x234114: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x234114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x234118: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x234118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23411c: 0xe6400130  swc1        $f0, 0x130($s2)
    ctx->pc = 0x23411cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
    // 0x234120: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x234120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x234124: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x234124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234128: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x234128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23412c: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x23412cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234130: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x234130u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x234134: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x234134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x234138: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x234138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23413c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x23413cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234140: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x234140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x234144: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x234144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234148: 0x0  nop
    ctx->pc = 0x234148u;
    // NOP
    // 0x23414c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23414cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234150: 0x0  nop
    ctx->pc = 0x234150u;
    // NOP
    // 0x234154: 0x4501009d  bc1t        . + 4 + (0x9D << 2)
    ctx->pc = 0x234154u;
    {
        const bool branch_taken_0x234154 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x234154) {
            ctx->pc = 0x2343CCu;
            goto label_2343cc;
        }
    }
    ctx->pc = 0x23415Cu;
    // 0x23415c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x23415cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x234160: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x234160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234164: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x234164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x234168: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x234168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x23416c: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x23416cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234170: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x234170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x234174: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x234174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x234178: 0x34a30200  ori         $v1, $a1, 0x200
    ctx->pc = 0x234178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x23417c: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x23417cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x234180: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x234180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234184: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x234184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234188: 0x946610a4  lhu         $a2, 0x10A4($v1)
    ctx->pc = 0x234188u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4260)));
    // 0x23418c: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x23418cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x234190: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x234190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x234194: 0x659021  addu        $s2, $v1, $a1
    ctx->pc = 0x234194u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x234198: 0x123040  sll         $a2, $s2, 1
    ctx->pc = 0x234198u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x23419c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x23419cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2341a0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x2341a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2341a4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2341a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2341a8: 0x3c170062  lui         $s7, 0x62
    ctx->pc = 0x2341a8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)98 << 16));
    // 0x2341ac: 0x26e3cfd0  addiu       $v1, $s7, -0x3030
    ctx->pc = 0x2341acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294954960));
    // 0x2341b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2341b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2341b4: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x2341b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x2341b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2341b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2341bc: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x2341bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2341c0: 0x949210a4  lhu         $s2, 0x10A4($a0)
    ctx->pc = 0x2341c0u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x2341c4: 0x3245ffff  andi        $a1, $s2, 0xFFFF
    ctx->pc = 0x2341c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x2341c8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2341c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2341cc: 0x853821  addu        $a3, $a0, $a1
    ctx->pc = 0x2341ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2341d0: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x2341d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2341d4: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x2341d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2341d8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2341d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2341dc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2341dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2341e0: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x2341e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2341e4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2341e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2341e8: 0x2485cfd0  addiu       $a1, $a0, -0x3030
    ctx->pc = 0x2341e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x2341ec: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x2341ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2341f0: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x2341f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x2341f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2341f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2341f8: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x2341f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2341fc: 0x948410a4  lhu         $a0, 0x10A4($a0)
    ctx->pc = 0x2341fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x234200: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x234200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x234204: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x234204u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x234208: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x234208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x23420c: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x23420cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x234210: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x234210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x234214: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x234214u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x234218: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x234218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x23421c: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x23421cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x234220: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x234220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x234224: 0x24a4cfd0  addiu       $a0, $a1, -0x3030
    ctx->pc = 0x234224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954960));
    // 0x234228: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x234228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x23422c: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x23422cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x234230: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x234230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234234: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x234234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234238: 0x948610a4  lhu         $a2, 0x10A4($a0)
    ctx->pc = 0x234238u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x23423c: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x23423cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x234240: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x234240u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x234244: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x234244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x234248: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x234248u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23424c: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x23424cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x234250: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x234250u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x234254: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x234254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x234258: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x234258u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x23425c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x23425cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x234260: 0x2485cfd0  addiu       $a1, $a0, -0x3030
    ctx->pc = 0x234260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x234264: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x234264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x234268: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x234268u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x23426c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23426cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234270: 0x8fa601c0  lw          $a2, 0x1C0($sp)
    ctx->pc = 0x234270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234274: 0x94c410a4  lhu         $a0, 0x10A4($a2)
    ctx->pc = 0x234274u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4260)));
    // 0x234278: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x234278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x23427c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x23427cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x234280: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x234280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x234284: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x234284u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x234288: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x234288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x23428c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x23428cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x234290: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x234290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x234294: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x234294u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x234298: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x234298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x23429c: 0x24a4cfd0  addiu       $a0, $a1, -0x3030
    ctx->pc = 0x23429cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954960));
    // 0x2342a0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2342a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2342a4: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x2342a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x2342a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2342a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2342ac: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x2342acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2342b0: 0x948610a4  lhu         $a2, 0x10A4($a0)
    ctx->pc = 0x2342b0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x2342b4: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x2342b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2342b8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2342b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2342bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2342bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2342c0: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x2342c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2342c4: 0x24a40005  addiu       $a0, $a1, 0x5
    ctx->pc = 0x2342c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x2342c8: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2342c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2342cc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2342ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2342d0: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x2342d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2342d4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2342d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2342d8: 0x2484cfd0  addiu       $a0, $a0, -0x3030
    ctx->pc = 0x2342d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x2342dc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2342dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2342e0: 0xa4a30014  sh          $v1, 0x14($a1)
    ctx->pc = 0x2342e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x2342e4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2342e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2342e8: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x2342e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2342ec: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2342ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2342f0: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2342f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2342f4: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2342F4u;
    {
        const bool branch_taken_0x2342f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2342f4) {
            ctx->pc = 0x2343CCu;
            goto label_2343cc;
        }
    }
    ctx->pc = 0x2342FCu;
    // 0x2342fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2342fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234300: 0x0  nop
    ctx->pc = 0x234300u;
    // NOP
    // 0x234304: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x234304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x234308: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x234308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x23430c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23430cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234310: 0x0  nop
    ctx->pc = 0x234310u;
    // NOP
    // 0x234314: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x234314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x234318: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x234318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23431c: 0x0  nop
    ctx->pc = 0x23431cu;
    // NOP
    // 0x234320: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x234320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x234324: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x234324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x234328: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x234328u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23432c: 0x0  nop
    ctx->pc = 0x23432cu;
    // NOP
    // 0x234330: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x234330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x234334: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x234334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234338: 0x0  nop
    ctx->pc = 0x234338u;
    // NOP
    // 0x23433c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x23433cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x234340: 0x3c03442f  lui         $v1, 0x442F
    ctx->pc = 0x234340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17455 << 16));
    // 0x234344: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x234344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234348: 0x0  nop
    ctx->pc = 0x234348u;
    // NOP
    // 0x23434c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x23434cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x234350: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x234350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234354: 0x0  nop
    ctx->pc = 0x234354u;
    // NOP
    // 0x234358: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x234358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x23435c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x23435cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x234360: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x234360u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234364: 0x0  nop
    ctx->pc = 0x234364u;
    // NOP
    // 0x234368: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x234368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x23436c: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x23436cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234370: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x234370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x234374: 0x24620880  addiu       $v0, $v1, 0x880
    ctx->pc = 0x234374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x234378: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x234378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23437c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x23437cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x234380: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x234380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x234384: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x234384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
    // 0x234388: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x234388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23438c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x23438cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x234390: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x234390u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x234394: 0x34e40020  ori         $a0, $a3, 0x20
    ctx->pc = 0x234394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32);
    // 0x234398: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x234398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x23439c: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x23439cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x2343a0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2343a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2343a4: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x2343a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2343a8: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x2343a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2343ac: 0x24470980  addiu       $a3, $v0, 0x980
    ctx->pc = 0x2343acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2432));
    // 0x2343b0: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x2343b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2343b4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2343B4u;
    SET_GPR_U32(ctx, 31, 0x2343BCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2343B4u, 0x2343BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2343BCu;
label_2343bc:
    // 0x2343bc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2343bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2343c0: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x2343c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2343c4: 0x34958000  ori         $s5, $a0, 0x8000
    ctx->pc = 0x2343c4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2343c8: 0xa4750002  sh          $s5, 0x2($v1)
    ctx->pc = 0x2343c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 21));
label_2343cc:
    // 0x2343cc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2343ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2343d0: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x2343d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2343d4: 0x3c043727  lui         $a0, 0x3727
    ctx->pc = 0x2343d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14119 << 16));
    // 0x2343d8: 0x3484c5ac  ori         $a0, $a0, 0xC5AC
    ctx->pc = 0x2343d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)50604);
    // 0x2343dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2343dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2343e0: 0x0  nop
    ctx->pc = 0x2343e0u;
    // NOP
    // 0x2343e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2343e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2343e8: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x2343e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x2343ec: 0x26160150  addiu       $s6, $s0, 0x150
    ctx->pc = 0x2343ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2343f0: 0x3c043f99  lui         $a0, 0x3F99
    ctx->pc = 0x2343f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16281 << 16));
    // 0x2343f4: 0x3484999a  ori         $a0, $a0, 0x999A
    ctx->pc = 0x2343f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x2343f8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2343f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2343fc: 0xc6c0001c  lwc1        $f0, 0x1C($s6)
    ctx->pc = 0x2343fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234400: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x234400u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x234404: 0xe6c0001c  swc1        $f0, 0x1C($s6)
    ctx->pc = 0x234404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 28), bits); }
    // 0x234408: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x234408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23440c: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x23440cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x234410: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x234410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x234414: 0x30844000  andi        $a0, $a0, 0x4000
    ctx->pc = 0x234414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x234418: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x234418u;
    {
        const bool branch_taken_0x234418 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x234418) {
            ctx->pc = 0x234490u;
            goto label_234490;
        }
    }
    ctx->pc = 0x234420u;
    // 0x234420: 0x8e830060  lw          $v1, 0x60($s4)
    ctx->pc = 0x234420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x234424: 0x24640006  addiu       $a0, $v1, 0x6
    ctx->pc = 0x234424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x234428: 0xae840060  sw          $a0, 0x60($s4)
    ctx->pc = 0x234428u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 4));
    // 0x23442c: 0x8e840064  lw          $a0, 0x64($s4)
    ctx->pc = 0x23442cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x234430: 0x24840006  addiu       $a0, $a0, 0x6
    ctx->pc = 0x234430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x234434: 0xae840064  sw          $a0, 0x64($s4)
    ctx->pc = 0x234434u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 4));
    // 0x234438: 0x8e850068  lw          $a1, 0x68($s4)
    ctx->pc = 0x234438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x23443c: 0x24a40006  addiu       $a0, $a1, 0x6
    ctx->pc = 0x23443cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x234440: 0xae840068  sw          $a0, 0x68($s4)
    ctx->pc = 0x234440u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 4));
    // 0x234444: 0x8e640060  lw          $a0, 0x60($s3)
    ctx->pc = 0x234444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x234448: 0x24850006  addiu       $a1, $a0, 0x6
    ctx->pc = 0x234448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x23444c: 0xae650060  sw          $a1, 0x60($s3)
    ctx->pc = 0x23444cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 5));
    // 0x234450: 0x8e660064  lw          $a2, 0x64($s3)
    ctx->pc = 0x234450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x234454: 0x24c40006  addiu       $a0, $a2, 0x6
    ctx->pc = 0x234454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x234458: 0xae640064  sw          $a0, 0x64($s3)
    ctx->pc = 0x234458u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 4));
    // 0x23445c: 0x8e650068  lw          $a1, 0x68($s3)
    ctx->pc = 0x23445cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x234460: 0x24a40006  addiu       $a0, $a1, 0x6
    ctx->pc = 0x234460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x234464: 0xae640068  sw          $a0, 0x68($s3)
    ctx->pc = 0x234464u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 4));
    // 0x234468: 0x8e640060  lw          $a0, 0x60($s3)
    ctx->pc = 0x234468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x23446c: 0x2c850200  sltiu       $a1, $a0, 0x200
    ctx->pc = 0x23446cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x234470: 0x14a00021  bnez        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x234470u;
    {
        const bool branch_taken_0x234470 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x234470) {
            ctx->pc = 0x2344F8u;
            goto label_2344f8;
        }
    }
    ctx->pc = 0x234478u;
    // 0x234478: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x234478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23447c: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x23447cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x234480: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x234480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x234484: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x234484u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x234488: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x234488u;
    {
        const bool branch_taken_0x234488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234488) {
            ctx->pc = 0x2344F8u;
            goto label_2344f8;
        }
    }
    ctx->pc = 0x234490u;
label_234490:
    // 0x234490: 0x8e870060  lw          $a3, 0x60($s4)
    ctx->pc = 0x234490u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x234494: 0x24e4fffc  addiu       $a0, $a3, -0x4
    ctx->pc = 0x234494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x234498: 0xae840060  sw          $a0, 0x60($s4)
    ctx->pc = 0x234498u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 4));
    // 0x23449c: 0x8e860064  lw          $a2, 0x64($s4)
    ctx->pc = 0x23449cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x2344a0: 0x24c4fffc  addiu       $a0, $a2, -0x4
    ctx->pc = 0x2344a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x2344a4: 0xae840064  sw          $a0, 0x64($s4)
    ctx->pc = 0x2344a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 4));
    // 0x2344a8: 0x8e840068  lw          $a0, 0x68($s4)
    ctx->pc = 0x2344a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x2344ac: 0x2496fffc  addiu       $s6, $a0, -0x4
    ctx->pc = 0x2344acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2344b0: 0xae960068  sw          $s6, 0x68($s4)
    ctx->pc = 0x2344b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 22));
    // 0x2344b4: 0x8e640060  lw          $a0, 0x60($s3)
    ctx->pc = 0x2344b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x2344b8: 0x2485fffc  addiu       $a1, $a0, -0x4
    ctx->pc = 0x2344b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2344bc: 0xae650060  sw          $a1, 0x60($s3)
    ctx->pc = 0x2344bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 5));
    // 0x2344c0: 0x8e640064  lw          $a0, 0x64($s3)
    ctx->pc = 0x2344c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x2344c4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x2344c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2344c8: 0xae640064  sw          $a0, 0x64($s3)
    ctx->pc = 0x2344c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 4));
    // 0x2344cc: 0x8e640068  lw          $a0, 0x68($s3)
    ctx->pc = 0x2344ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x2344d0: 0x2483fffc  addiu       $v1, $a0, -0x4
    ctx->pc = 0x2344d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2344d4: 0xae630068  sw          $v1, 0x68($s3)
    ctx->pc = 0x2344d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 3));
    // 0x2344d8: 0x8e640060  lw          $a0, 0x60($s3)
    ctx->pc = 0x2344d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x2344dc: 0x2c810041  sltiu       $at, $a0, 0x41
    ctx->pc = 0x2344dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x2344e0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2344E0u;
    {
        const bool branch_taken_0x2344e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2344e0) {
            ctx->pc = 0x2344F8u;
            goto label_2344f8;
        }
    }
    ctx->pc = 0x2344E8u;
    // 0x2344e8: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x2344e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2344ec: 0x94c50002  lhu         $a1, 0x2($a2)
    ctx->pc = 0x2344ecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2344f0: 0x30a4bfff  andi        $a0, $a1, 0xBFFF
    ctx->pc = 0x2344f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)49151);
    // 0x2344f4: 0xa4c40002  sh          $a0, 0x2($a2)
    ctx->pc = 0x2344f4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 4));
label_2344f8:
    // 0x2344f8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2344f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2344fc: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2344fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234500: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x234500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x234504: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x234504u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234508: 0x0  nop
    ctx->pc = 0x234508u;
    // NOP
    // 0x23450c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23450cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234510: 0x0  nop
    ctx->pc = 0x234510u;
    // NOP
    // 0x234514: 0x4500004f  bc1f        . + 4 + (0x4F << 2)
    ctx->pc = 0x234514u;
    {
        const bool branch_taken_0x234514 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x234514) {
            ctx->pc = 0x234654u;
            goto label_234654;
        }
    }
    ctx->pc = 0x23451Cu;
    // 0x23451c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x23451cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x234520: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x234520u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x234524: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x234524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x234528: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x234528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x23452c: 0x14a00049  bnez        $a1, . + 4 + (0x49 << 2)
    ctx->pc = 0x23452Cu;
    {
        const bool branch_taken_0x23452c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x23452c) {
            ctx->pc = 0x234654u;
            goto label_234654;
        }
    }
    ctx->pc = 0x234534u;
    // 0x234534: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x234534u;
    SET_GPR_U32(ctx, 31, 0x23453Cu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x234534u, 0x23453Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23453Cu;
label_23453c:
    // 0x23453c: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x23453cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x234540: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x234540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x234544: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x234544u;
    SET_GPR_U32(ctx, 31, 0x23454Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x234544u, 0x23454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23454Cu;
label_23454c:
    // 0x23454c: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x23454cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x234550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x234550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234554: 0x0  nop
    ctx->pc = 0x234554u;
    // NOP
    // 0x234558: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x234558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x23455c: 0x3c07442f  lui         $a3, 0x442F
    ctx->pc = 0x23455cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17455 << 16));
    // 0x234560: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x234560u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x234564: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x234564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234568: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x234568u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x23456c: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x23456cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234570: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x234570u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x234574: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x234574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x234578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x234578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23457c: 0x0  nop
    ctx->pc = 0x23457cu;
    // NOP
    // 0x234580: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x234580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x234584: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x234584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x234588: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x234588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x23458c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x23458Cu;
    SET_GPR_U32(ctx, 31, 0x234594u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x234594u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x234594u) { return; }
    ctx->pc = 0x234594u;
label_234594:
    // 0x234594: 0xc06765c  jal         func_19D970
    ctx->pc = 0x234594u;
    SET_GPR_U32(ctx, 31, 0x23459Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x234594u, 0x23459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23459Cu;
label_23459c:
    // 0x23459c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x23459cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2345a0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x2345a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2345a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2345a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2345a8: 0x0  nop
    ctx->pc = 0x2345a8u;
    // NOP
    // 0x2345ac: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2345acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2345b0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2345b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2345b4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2345b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2345b8: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x2345B8u;
    SET_GPR_U32(ctx, 31, 0x2345C0u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x2345C0u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2345C0u) { return; }
    ctx->pc = 0x2345C0u;
label_2345c0:
    // 0x2345c0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2345c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2345c4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2345c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2345c8: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2345c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2345cc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2345CCu;
    SET_GPR_U32(ctx, 31, 0x2345D4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2345D4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2345D4u) { return; }
    ctx->pc = 0x2345D4u;
label_2345d4:
    // 0x2345d4: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x2345d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2345d8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2345d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2345dc: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x2345dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2345e0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2345e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2345e4: 0x3c0445bb  lui         $a0, 0x45BB
    ctx->pc = 0x2345e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17851 << 16));
    // 0x2345e8: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x2345e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2345ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2345ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2345f0: 0x0  nop
    ctx->pc = 0x2345f0u;
    // NOP
    // 0x2345f4: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2345f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2345f8: 0x3c033b03  lui         $v1, 0x3B03
    ctx->pc = 0x2345f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15107 << 16));
    // 0x2345fc: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2345fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x234600: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x234600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234604: 0x0  nop
    ctx->pc = 0x234604u;
    // NOP
    // 0x234608: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x234608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x23460c: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x23460cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234610: 0x8c750130  lw          $s5, 0x130($v1)
    ctx->pc = 0x234610u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x234614: 0x26a30980  addiu       $v1, $s5, 0x980
    ctx->pc = 0x234614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 2432));
    // 0x234618: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x234618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x23461c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x23461cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x234620: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x234620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x234624: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x234624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x234628: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x234628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x23462c: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x23462cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x234630: 0x24042503  addiu       $a0, $zero, 0x2503
    ctx->pc = 0x234630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9475));
    // 0x234634: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x234634u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234638: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x234638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x23463c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x23463Cu;
    SET_GPR_U32(ctx, 31, 0x234644u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x23463Cu, 0x234644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234644u;
label_234644:
    // 0x234644: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234644u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234648: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x234648u;
    SET_GPR_U32(ctx, 31, 0x234650u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x234648u, 0x234650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234650u;
label_234650:
    // 0x234650: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x234650u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_234654:
    // 0x234654: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x234654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234658: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x234658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x23465c: 0x24710480  addiu       $s1, $v1, 0x480
    ctx->pc = 0x23465cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x234660: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x234660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x234664: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x234664u;
    {
        const bool branch_taken_0x234664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x234664) {
            ctx->pc = 0x2346ACu;
            goto label_2346ac;
        }
    }
    ctx->pc = 0x23466Cu;
    // 0x23466c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x23466cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x234670: 0x2483fffc  addiu       $v1, $a0, -0x4
    ctx->pc = 0x234670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x234674: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x234674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x234678: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x234678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x23467c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x23467cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x234680: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x234680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x234684: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x234684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x234688: 0x2483fffc  addiu       $v1, $a0, -0x4
    ctx->pc = 0x234688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x23468c: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x23468cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x234690: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x234690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x234694: 0x2c610005  sltiu       $at, $v1, 0x5
    ctx->pc = 0x234694u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x234698: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x234698u;
    {
        const bool branch_taken_0x234698 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x234698) {
            ctx->pc = 0x2346ACu;
            goto label_2346ac;
        }
    }
    ctx->pc = 0x2346A0u;
    // 0x2346a0: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x2346a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x2346a4: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x2346a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x2346a8: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x2346a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
label_2346ac:
    // 0x2346ac: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x2346acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2346b0: 0x846410a6  lh          $a0, 0x10A6($v1)
    ctx->pc = 0x2346b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x2346b4: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x2346b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2346b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2346b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2346bc: 0x4610108  bgez        $v1, . + 4 + (0x108 << 2)
    ctx->pc = 0x2346BCu;
    {
        const bool branch_taken_0x2346bc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2346bc) {
            ctx->pc = 0x234AE0u;
            goto label_234ae0;
        }
    }
    ctx->pc = 0x2346C4u;
    // 0x2346c4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2346c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2346c8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2346c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2346cc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2346ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2346d0: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x2346d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2346d4: 0xc065580  jal         func_195600
    ctx->pc = 0x2346D4u;
    SET_GPR_U32(ctx, 31, 0x2346DCu);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2346D4u, 0x2346DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2346DCu;
label_2346dc:
    // 0x2346dc: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x2346dcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2346e0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2346e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2346e4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2346e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2346e8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2346e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2346ec: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x2346ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2346f0: 0xc0655c0  jal         func_195700
    ctx->pc = 0x2346F0u;
    SET_GPR_U32(ctx, 31, 0x2346F8u);
    ctx->pc = 0x195700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195700u, 0x2346F0u, 0x2346F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2346F8u;
label_2346f8:
    // 0x2346f8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2346f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2346fc: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x2346FCu;
    {
        const bool branch_taken_0x2346fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2346fc) {
            ctx->pc = 0x234AE0u;
            goto label_234ae0;
        }
    }
    ctx->pc = 0x234704u;
label_234704:
    // 0x234704: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x234704u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x234708: 0x3063ff5b  andi        $v1, $v1, 0xFF5B
    ctx->pc = 0x234708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65371);
    // 0x23470c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x23470cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x234710: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x234710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x234714: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x234714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x234718: 0xc040c44  jal         func_103110
    ctx->pc = 0x234718u;
    SET_GPR_U32(ctx, 31, 0x234720u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x234720u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x234720u) { return; }
    ctx->pc = 0x234720u;
label_234720:
    // 0x234720: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234720u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234724: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x234724u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x234728: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x234728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x23472c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x23472cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x234730: 0xc040c00  jal         func_103000
    ctx->pc = 0x234730u;
    SET_GPR_U32(ctx, 31, 0x234738u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x234738u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x234738u) { return; }
    ctx->pc = 0x234738u;
label_234738:
    // 0x234738: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x234738u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23473c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23473cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234740: 0x0  nop
    ctx->pc = 0x234740u;
    // NOP
    // 0x234744: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x234744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x234748: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x234748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23474c: 0x0  nop
    ctx->pc = 0x23474cu;
    // NOP
    // 0x234750: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x234750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x234754: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x234754u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234758: 0x0  nop
    ctx->pc = 0x234758u;
    // NOP
    // 0x23475c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x23475cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x234760: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x234760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x234764: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x234764u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x234768: 0xc040ca2  jal         func_103288
    ctx->pc = 0x234768u;
    SET_GPR_U32(ctx, 31, 0x234770u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x234770u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x234770u) { return; }
    ctx->pc = 0x234770u;
label_234770:
    // 0x234770: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x234770u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234774: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x234774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x234778: 0x94c50006  lhu         $a1, 0x6($a2)
    ctx->pc = 0x234778u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x23477c: 0x30a3fffe  andi        $v1, $a1, 0xFFFE
    ctx->pc = 0x23477cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65534);
    // 0x234780: 0xa4c30006  sh          $v1, 0x6($a2)
    ctx->pc = 0x234780u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x234784: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x234784u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x234788: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x234788u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23478c: 0x8fb201c0  lw          $s2, 0x1C0($sp)
    ctx->pc = 0x23478cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234790: 0x26461330  addiu       $a2, $s2, 0x1330
    ctx->pc = 0x234790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4912));
    // 0x234794: 0x8cc50030  lw          $a1, 0x30($a2)
    ctx->pc = 0x234794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x234798: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x234798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x23479c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x23479cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2347a0: 0xacc50030  sw          $a1, 0x30($a2)
    ctx->pc = 0x2347a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 5));
    // 0x2347a4: 0x8e970034  lw          $s7, 0x34($s4)
    ctx->pc = 0x2347a4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x2347a8: 0x8ee30024  lw          $v1, 0x24($s7)
    ctx->pc = 0x2347a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
    // 0x2347ac: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2347acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2347b0: 0xaee30024  sw          $v1, 0x24($s7)
    ctx->pc = 0x2347b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 36), GPR_U32(ctx, 3));
    // 0x2347b4: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x2347b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2347b8: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x2347b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2347bc: 0x24924010  addiu       $s2, $a0, 0x4010
    ctx->pc = 0x2347bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 16400));
    // 0x2347c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2347c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2347c4: 0x0  nop
    ctx->pc = 0x2347c4u;
    // NOP
    // 0x2347c8: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x2347c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
    // 0x2347cc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2347ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2347d0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2347d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2347d4: 0x0  nop
    ctx->pc = 0x2347d4u;
    // NOP
    // 0x2347d8: 0xe640012c  swc1        $f0, 0x12C($s2)
    ctx->pc = 0x2347d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
    // 0x2347dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2347dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2347e0: 0x0  nop
    ctx->pc = 0x2347e0u;
    // NOP
    // 0x2347e4: 0xe6400130  swc1        $f0, 0x130($s2)
    ctx->pc = 0x2347e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
    // 0x2347e8: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x2347e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2347ec: 0x24871330  addiu       $a3, $a0, 0x1330
    ctx->pc = 0x2347ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2347f0: 0x8ce60030  lw          $a2, 0x30($a3)
    ctx->pc = 0x2347f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x2347f4: 0x2405fdff  addiu       $a1, $zero, -0x201
    ctx->pc = 0x2347f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x2347f8: 0xc52024  and         $a0, $a2, $a1
    ctx->pc = 0x2347f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x2347fc: 0xace40030  sw          $a0, 0x30($a3)
    ctx->pc = 0x2347fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 4));
    // 0x234800: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x234800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234804: 0x948610a4  lhu         $a2, 0x10A4($a0)
    ctx->pc = 0x234804u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x234808: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x234808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x23480c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x23480cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x234810: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x234810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x234814: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x234814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x234818: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x234818u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23481c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x23481cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x234820: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x234820u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x234824: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x234824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x234828: 0x2486cfd0  addiu       $a2, $a0, -0x3030
    ctx->pc = 0x234828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x23482c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x23482cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x234830: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x234830u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x234834: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x234834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234838: 0x94a410a4  lhu         $a0, 0x10A4($a1)
    ctx->pc = 0x234838u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4260)));
    // 0x23483c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x23483cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x234840: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x234840u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x234844: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x234844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x234848: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x234848u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x23484c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23484cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x234850: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x234850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x234854: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x234854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x234858: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x234858u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x23485c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x23485cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x234860: 0x2485cfd0  addiu       $a1, $a0, -0x3030
    ctx->pc = 0x234860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x234864: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x234864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x234868: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x234868u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x23486c: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x23486cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234870: 0x948410a4  lhu         $a0, 0x10A4($a0)
    ctx->pc = 0x234870u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x234874: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x234874u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x234878: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x234878u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x23487c: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x23487cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x234880: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x234880u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x234884: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x234884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x234888: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x234888u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23488c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x23488cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x234890: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x234890u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x234894: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x234894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x234898: 0x2485cfd0  addiu       $a1, $a0, -0x3030
    ctx->pc = 0x234898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x23489c: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x23489cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2348a0: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x2348a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x2348a4: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x2348a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2348a8: 0x948410a4  lhu         $a0, 0x10A4($a0)
    ctx->pc = 0x2348a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x2348ac: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x2348acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2348b0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2348b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2348b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2348b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2348b8: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x2348b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2348bc: 0x24c50003  addiu       $a1, $a2, 0x3
    ctx->pc = 0x2348bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x2348c0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2348c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2348c4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2348c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2348c8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2348c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2348cc: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2348ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2348d0: 0x2486cfd0  addiu       $a2, $a0, -0x3030
    ctx->pc = 0x2348d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x2348d4: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x2348d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2348d8: 0xa4a00014  sh          $zero, 0x14($a1)
    ctx->pc = 0x2348d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x2348dc: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x2348dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2348e0: 0x948410a4  lhu         $a0, 0x10A4($a0)
    ctx->pc = 0x2348e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x2348e4: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x2348e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2348e8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2348e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2348ec: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2348ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2348f0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2348f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2348f4: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x2348f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2348f8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2348f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2348fc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2348fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x234900: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x234900u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x234904: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x234904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x234908: 0x2464cfd0  addiu       $a0, $v1, -0x3030
    ctx->pc = 0x234908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954960));
    // 0x23490c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x23490cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x234910: 0xa4600014  sh          $zero, 0x14($v1)
    ctx->pc = 0x234910u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x234914: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x234914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234918: 0x946310a4  lhu         $v1, 0x10A4($v1)
    ctx->pc = 0x234918u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4260)));
    // 0x23491c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x23491cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x234920: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x234920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x234924: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x234924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x234928: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x234928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23492c: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x23492cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x234930: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x234930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x234934: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x234934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x234938: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x234938u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x23493c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x23493cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x234940: 0x2443cfd0  addiu       $v1, $v0, -0x3030
    ctx->pc = 0x234940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954960));
    // 0x234944: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x234944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x234948: 0xa4400014  sh          $zero, 0x14($v0)
    ctx->pc = 0x234948u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x23494c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x23494cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x234950: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x234950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x234954: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x234954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x234958: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x234958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x23495c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x23495cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234960: 0xc065580  jal         func_195600
    ctx->pc = 0x234960u;
    SET_GPR_U32(ctx, 31, 0x234968u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x234960u, 0x234968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234968u;
label_234968:
    // 0x234968: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x234968u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23496c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x23496cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x234970: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x234970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x234974: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x234974u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x234978: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x234978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x23497c: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x23497cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x234980: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x234980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x234984: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x234984u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234988: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x234988u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x23498c: 0xc0655c0  jal         func_195700
    ctx->pc = 0x23498Cu;
    SET_GPR_U32(ctx, 31, 0x234994u);
    ctx->pc = 0x195700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195700u, 0x23498Cu, 0x234994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234994u;
label_234994:
    // 0x234994: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x234994u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234998: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x234998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x23499c: 0x2495acd0  addiu       $s5, $a0, -0x5330
    ctx->pc = 0x23499cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946000));
    // 0x2349a0: 0xa2a00001  sb          $zero, 0x1($s5)
    ctx->pc = 0x2349a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x38ACD1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x38ACD1u, _value); } while (0);
    // 0x2349a4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2349a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2349a8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2349a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2349ac: 0x0  nop
    ctx->pc = 0x2349acu;
    // NOP
    // 0x2349b0: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x2349b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38ACD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38ACD4u, _value); } while (0); }
    // 0x2349b4: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x2349b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x2349b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2349b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2349bc: 0x0  nop
    ctx->pc = 0x2349bcu;
    // NOP
    // 0x2349c0: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x2349c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38ACD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38ACD8u, _value); } while (0); }
    // 0x2349c4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2349c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2349c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2349c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2349cc: 0x0  nop
    ctx->pc = 0x2349ccu;
    // NOP
    // 0x2349d0: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x2349d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38ACDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38ACDCu, _value); } while (0); }
    // 0x2349d4: 0x2416000f  addiu       $s6, $zero, 0xF
    ctx->pc = 0x2349d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2349d8:
    // 0x2349d8: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2349D8u;
    SET_GPR_U32(ctx, 31, 0x2349E0u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2349D8u, 0x2349E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349E0u;
label_2349e0:
    // 0x2349e0: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x2349e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x2349e4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2349e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2349e8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2349E8u;
    SET_GPR_U32(ctx, 31, 0x2349F0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2349E8u, 0x2349F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349F0u;
label_2349f0:
    // 0x2349f0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2349f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2349f4: 0x3c05c248  lui         $a1, 0xC248
    ctx->pc = 0x2349f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49736 << 16));
    // 0x2349f8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2349f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2349fc: 0x0  nop
    ctx->pc = 0x2349fcu;
    // NOP
    // 0x234a00: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x234a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x234a04: 0x3c044448  lui         $a0, 0x4448
    ctx->pc = 0x234a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17480 << 16));
    // 0x234a08: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x234a08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x234a0c: 0xc7a001bc  lwc1        $f0, 0x1BC($sp)
    ctx->pc = 0x234a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234a10: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x234a10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x234a14: 0xc7a001bc  lwc1        $f0, 0x1BC($sp)
    ctx->pc = 0x234a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234a18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x234a18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x234a1c: 0x3c044448  lui         $a0, 0x4448
    ctx->pc = 0x234a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17480 << 16));
    // 0x234a20: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x234a20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234a24: 0x0  nop
    ctx->pc = 0x234a24u;
    // NOP
    // 0x234a28: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x234a28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x234a2c: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x234a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x234a30: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x234a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x234a34: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x234A34u;
    SET_GPR_U32(ctx, 31, 0x234A3Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x234A3Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x234A3Cu) { return; }
    ctx->pc = 0x234A3Cu;
label_234a3c:
    // 0x234a3c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x234a3cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234a40: 0xc06765c  jal         func_19D970
    ctx->pc = 0x234A40u;
    SET_GPR_U32(ctx, 31, 0x234A48u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x234A40u, 0x234A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A48u;
label_234a48:
    // 0x234a48: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x234a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x234a4c: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x234a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x234a50: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x234a50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x234a54: 0x0  nop
    ctx->pc = 0x234a54u;
    // NOP
    // 0x234a58: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x234a58u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x234a5c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x234a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x234a60: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x234a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x234a64: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x234A64u;
    SET_GPR_U32(ctx, 31, 0x234A6Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x234A6Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x234A6Cu) { return; }
    ctx->pc = 0x234A6Cu;
label_234a6c:
    // 0x234a6c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234a6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234a70: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x234a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x234a74: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x234a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x234a78: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x234a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x234a7c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x234A7Cu;
    SET_GPR_U32(ctx, 31, 0x234A84u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x234A84u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x234A84u) { return; }
    ctx->pc = 0x234A84u;
label_234a84:
    // 0x234a84: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234a84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234a88: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x234a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234a8c: 0x8ca40130  lw          $a0, 0x130($a1)
    ctx->pc = 0x234a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x234a90: 0x24840980  addiu       $a0, $a0, 0x980
    ctx->pc = 0x234a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2432));
    // 0x234a94: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x234a94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x234a98: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x234a98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x234a9c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x234a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x234aa0: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x234aa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x234aa4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x234aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x234aa8: 0xa43824  and         $a3, $a1, $a0
    ctx->pc = 0x234aa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x234aac: 0x24042503  addiu       $a0, $zero, 0x2503
    ctx->pc = 0x234aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9475));
    // 0x234ab0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x234ab0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234ab4: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x234ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x234ab8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x234AB8u;
    SET_GPR_U32(ctx, 31, 0x234AC0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x234AB8u, 0x234AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234AC0u;
label_234ac0:
    // 0x234ac0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234ac0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234ac4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x234AC4u;
    SET_GPR_U32(ctx, 31, 0x234ACCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x234AC4u, 0x234ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234ACCu;
label_234acc:
    // 0x234acc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234accu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234ad0: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x234ad0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x234ad4: 0x16c0ffc0  bnez        $s6, . + 4 + (-0x40 << 2)
    ctx->pc = 0x234AD4u;
    {
        const bool branch_taken_0x234ad4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x234ad4) {
            ctx->pc = 0x2349D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2349d8;
        }
    }
    ctx->pc = 0x234ADCu;
    // 0x234adc: 0x0  nop
    ctx->pc = 0x234adcu;
    // NOP
label_234ae0:
    // 0x234ae0: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x234ae0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x234ae4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x234ae4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x234ae8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x234ae8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x234aec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x234aecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x234af0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x234af0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x234af4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x234af4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x234af8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x234af8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234afc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x234afcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234b00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x234b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234b04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x234b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234b08: 0x27bd01d0  addiu       $sp, $sp, 0x1D0
    ctx->pc = 0x234b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x234b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x234B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234B14u;
}
