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

// Function: Mul_index_data_obj3
// Address: 0x1e1a70 - 0x1e2258
void Mul_index_data_obj3_0x1e1a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mul_index_data_obj3_0x1e1a70");
#endif

    switch (ctx->pc) {
        case 0x1e1b28u: goto label_1e1b28;
        case 0x1e1b58u: goto label_1e1b58;
        case 0x1e1dd0u: goto label_1e1dd0;
        case 0x1e1e6cu: goto label_1e1e6c;
        case 0x1e1ed0u: goto label_1e1ed0;
        case 0x1e1f54u: goto label_1e1f54;
        case 0x1e2064u: goto label_1e2064;
        case 0x1e207cu: goto label_1e207c;
        case 0x1e2098u: goto label_1e2098;
        case 0x1e20fcu: goto label_1e20fc;
        case 0x1e2164u: goto label_1e2164;
        case 0x1e21d8u: goto label_1e21d8;
        default: break;
    }

    ctx->pc = 0x1e1a70u;

    // 0x1e1a70: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x1e1a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
    // 0x1e1a74: 0x7fbf00a0  sq          $ra, 0xA0($sp)
    ctx->pc = 0x1e1a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 31));
    // 0x1e1a78: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1e1a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1e1a7c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1e1a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1e1a80: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1e1a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1e1a84: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1e1a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1e1a88: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e1a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e1a8c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e1a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e1a90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e1a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e1a94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e1a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e1a98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e1a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e1a9c: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x1e1a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
    // 0x1e1aa0: 0xafa50268  sw          $a1, 0x268($sp)
    ctx->pc = 0x1e1aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 5));
    // 0x1e1aa4: 0xafa70278  sw          $a3, 0x278($sp)
    ctx->pc = 0x1e1aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 7));
    // 0x1e1aa8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1e1aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e1aac: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x1e1aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x1e1ab0: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x1e1ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    // 0x1e1ab4: 0x8fb30268  lw          $s3, 0x268($sp)
    ctx->pc = 0x1e1ab4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e1ab8: 0x8e640068  lw          $a0, 0x68($s3)
    ctx->pc = 0x1e1ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1e1abc: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1e1abcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e1ac0: 0x8fa50268  lw          $a1, 0x268($sp)
    ctx->pc = 0x1e1ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e1ac4: 0x8ca60028  lw          $a2, 0x28($a1)
    ctx->pc = 0x1e1ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1e1ac8: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x1e1ac8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e1acc: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x1e1accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e1ad0: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1e1ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1e1ad4: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1e1ad4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e1ad8: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x1e1ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e1adc: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1e1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1e1ae0: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x1e1ae0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e1ae4: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x1e1ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e1ae8: 0x8c530048  lw          $s3, 0x48($v0)
    ctx->pc = 0x1e1ae8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1e1aec: 0xafb30250  sw          $s3, 0x250($sp)
    ctx->pc = 0x1e1aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 19));
    // 0x1e1af0: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x1e1af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e1af4: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1e1af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1e1af8: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x1e1af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
    // 0x1e1afc: 0xafa00258  sw          $zero, 0x258($sp)
    ctx->pc = 0x1e1afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 0));
    // 0x1e1b00: 0x8fb30260  lw          $s3, 0x260($sp)
    ctx->pc = 0x1e1b00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e1b04: 0x8e640134  lw          $a0, 0x134($s3)
    ctx->pc = 0x1e1b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
    // 0x1e1b08: 0xafa40254  sw          $a0, 0x254($sp)
    ctx->pc = 0x1e1b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 4));
    // 0x1e1b0c: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x1e1b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e1b10: 0x8cb60134  lw          $s6, 0x134($a1)
    ctx->pc = 0x1e1b10u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 308)));
    // 0x1e1b14: 0x8fa70260  lw          $a3, 0x260($sp)
    ctx->pc = 0x1e1b14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e1b18: 0x8cfe0130  lw          $fp, 0x130($a3)
    ctx->pc = 0x1e1b18u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x1e1b1c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1e1b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e1b20: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E1B20u;
    SET_GPR_U32(ctx, 31, 0x1E1B28u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E1B28u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E1B28u) { return; }
    ctx->pc = 0x1E1B28u;
label_1e1b28:
    // 0x1e1b28: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e1b28u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e1b2c: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x1e1b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e1b30: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x1e1b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1b34: 0xe7a0025c  swc1        $f0, 0x25C($sp)
    ctx->pc = 0x1e1b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
    // 0x1e1b38: 0x8fa40268  lw          $a0, 0x268($sp)
    ctx->pc = 0x1e1b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e1b3c: 0xc48100a4  lwc1        $f1, 0xA4($a0)
    ctx->pc = 0x1e1b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1b40: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x1e1b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e1b44: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x1e1b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1b48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e1b48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e1b4c: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x1e1b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x1e1b50: 0xafa00240  sw          $zero, 0x240($sp)
    ctx->pc = 0x1e1b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 0));
    // 0x1e1b54: 0xafa00244  sw          $zero, 0x244($sp)
    ctx->pc = 0x1e1b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 0));
label_1e1b58:
    // 0x1e1b58: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x1e1b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e1b5c: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x1e1b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e1b60: 0x10a0019f  beqz        $a1, . + 4 + (0x19F << 2)
    ctx->pc = 0x1E1B60u;
    {
        const bool branch_taken_0x1e1b60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1b60) {
            ctx->pc = 0x1E21E0u;
            goto label_1e21e0;
        }
    }
    ctx->pc = 0x1E1B68u;
    // 0x1e1b68: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1e1b68u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e1b6c: 0x8e040108  lw          $a0, 0x108($s0)
    ctx->pc = 0x1e1b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e1b70: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x1e1b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x1e1b74: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E1B74u;
    {
        const bool branch_taken_0x1e1b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1b74) {
            ctx->pc = 0x1E1B98u;
            goto label_1e1b98;
        }
    }
    ctx->pc = 0x1E1B7Cu;
    // 0x1e1b7c: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e1b7cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e1b80: 0x8fa30258  lw          $v1, 0x258($sp)
    ctx->pc = 0x1e1b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x1e1b84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e1b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e1b88: 0xafa30258  sw          $v1, 0x258($sp)
    ctx->pc = 0x1e1b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 3));
    // 0x1e1b8c: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x1e1b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e1b90: 0x10000195  b           . + 4 + (0x195 << 2)
    ctx->pc = 0x1E1B90u;
    {
        const bool branch_taken_0x1e1b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1b90) {
            ctx->pc = 0x1E21E8u;
            goto label_1e21e8;
        }
    }
    ctx->pc = 0x1E1B98u;
label_1e1b98:
    // 0x1e1b98: 0x96020100  lhu         $v0, 0x100($s0)
    ctx->pc = 0x1e1b98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1e1b9c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1e1b9cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e1ba0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1ba4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1ba8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1bac: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e1bb0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e1bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1bb4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1e1bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e1bb8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1bbc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1bc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1bc4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e1bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e1bc8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e1bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1bcc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1e1bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1e1bd0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1bd4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1bd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1bdc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e1bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e1be0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e1be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1be4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1e1be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e1be8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e1be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e1bec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1bf0: 0x0  nop
    ctx->pc = 0x1e1bf0u;
    // NOP
    // 0x1e1bf4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1e1bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1e1bf8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1bfc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1c00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1c04: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e1c08: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e1c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1c0c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e1c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e1c10: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1c14: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1c18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1c1c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e1c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e1c20: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1e1c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1c24: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e1c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1e1c28: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1c2c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1c30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1c34: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e1c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e1c38: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1e1c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1c3c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1e1c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1e1c40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e1c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1c48: 0x0  nop
    ctx->pc = 0x1e1c48u;
    // NOP
    // 0x1e1c4c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1e1c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1e1c50: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1c54: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1c58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1c5c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e1c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e1c60: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1e1c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1c64: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1e1c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1e1c68: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1c6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1c70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1c74: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e1c78: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1e1c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1c7c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1e1c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1e1c80: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1c84: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1c88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1c8c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e1c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e1c90: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e1c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1c94: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1e1c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1e1c98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e1c9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1ca0: 0x0  nop
    ctx->pc = 0x1e1ca0u;
    // NOP
    // 0x1e1ca4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1e1ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1e1ca8: 0x86020102  lh          $v0, 0x102($s0)
    ctx->pc = 0x1e1ca8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 258)));
    // 0x1e1cac: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1E1CACu;
    {
        const bool branch_taken_0x1e1cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1cac) {
            ctx->pc = 0x1E1E74u;
            goto label_1e1e74;
        }
    }
    ctx->pc = 0x1E1CB4u;
    // 0x1e1cb4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1cb8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1cbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1cc0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e1cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e1cc4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e1cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1cc8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1e1cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1e1ccc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1cd0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1cd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1cd8: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e1cdc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e1cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1ce0: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1e1ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1e1ce4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1ce8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1cec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1cf0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e1cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e1cf4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e1cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1cf8: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1e1cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1e1cfc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e1cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e1d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1d04: 0x0  nop
    ctx->pc = 0x1e1d04u;
    // NOP
    // 0x1e1d08: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1e1d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1e1d0c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e1d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e1d10: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1e1d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1e1d14: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e1d14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e1d18: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1e1d18u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e1d1c: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1e1d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e1d20: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e1d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e1d24: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e1d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e1d28: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e1d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e1d2c: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x1e1d2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e1d30: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1e1d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e1d34: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e1d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e1d38: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e1d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e1d3c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e1d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e1d40: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x1e1d40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e1d44: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e1d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e1d48: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e1d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1e1d4c: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1E1D4Cu;
    {
        const bool branch_taken_0x1e1d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1d4c) {
            ctx->pc = 0x1E1E48u;
            goto label_1e1e48;
        }
    }
    ctx->pc = 0x1E1D54u;
    // 0x1e1d54: 0x27a20230  addiu       $v0, $sp, 0x230
    ctx->pc = 0x1e1d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1e1d58: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e1d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1e1d5c: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1e1d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e1d60: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e1d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e1d64: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1e1d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1e1d68: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1e1d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1e1d6c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e1d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e1d70: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e1d70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e1d74: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e1d74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e1d78: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x1e1d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e1d7c: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1e1d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e1d80: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x1e1d80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e1d84: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e1d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e1d88: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1e1d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1e1d8c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1e1d8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1e1d90: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e1d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e1d94: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e1d94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e1d98: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e1d98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e1d9c: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x1e1d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e1da0: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1e1da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e1da4: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x1e1da4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e1da8: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x1e1da8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1dac: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x1e1dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1e1db0: 0x645021  addu        $t2, $v1, $a0
    ctx->pc = 0x1e1db0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e1db4: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1e1db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e1db8: 0x8fa50278  lw          $a1, 0x278($sp)
    ctx->pc = 0x1e1db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x1e1dbc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e1dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e1dc0: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x1e1dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e1dc4: 0x27ab0220  addiu       $t3, $sp, 0x220
    ctx->pc = 0x1e1dc4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1e1dc8: 0xc05d3ac  jal         func_174EB0
    ctx->pc = 0x1E1DC8u;
    SET_GPR_U32(ctx, 31, 0x1E1DD0u);
    ctx->pc = 0x174EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174EB0u, 0x1E1DC8u, 0x1E1DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1DD0u;
label_1e1dd0:
    // 0x1e1dd0: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x1e1dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1e1dd4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1dd8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1e1dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1e1ddc: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x1e1ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1e1de0: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1de4: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1e1de4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1e1de8: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x1e1de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1e1dec: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1df0: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1e1df0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x1e1df4: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x1e1df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1e1df8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1dfc: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x1e1dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x1e1e00: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x1e1e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1e1e04: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1e08: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x1e1e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x1e1e0c: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x1e1e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1e1e10: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1e14: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x1e1e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x1e1e18: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x1e1e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1e1e1c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1e20: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x1e1e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
    // 0x1e1e24: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x1e1e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1e1e28: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1e2c: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x1e1e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
    // 0x1e1e30: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x1e1e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1e1e34: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1e38: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x1e1e38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x1e1e3c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e1e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e1e40: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1e1e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1e1e44: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e1e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_1e1e48:
    // 0x1e1e48: 0x86020102  lh          $v0, 0x102($s0)
    ctx->pc = 0x1e1e48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 258)));
    // 0x1e1e4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e1e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e1e50: 0xa6020102  sh          $v0, 0x102($s0)
    ctx->pc = 0x1e1e50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 258), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e1e54: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1e1e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e1e58: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e1e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e1e5c: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e1e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e1e60: 0x72c03628  paddub      $a2, $s6, $zero
    ctx->pc = 0x1e1e60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e1e64: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E1E64u;
    SET_GPR_U32(ctx, 31, 0x1E1E6Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E1E64u, 0x1E1E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E6Cu;
label_1e1e6c:
    // 0x1e1e6c: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1E1E6Cu;
    {
        const bool branch_taken_0x1e1e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1e6c) {
            ctx->pc = 0x1E2080u;
            goto label_1e2080;
        }
    }
    ctx->pc = 0x1E1E74u;
label_1e1e74:
    // 0x1e1e74: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e1e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e1e78: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e1e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1e1e7c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1E1E7Cu;
    {
        const bool branch_taken_0x1e1e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1e7c) {
            ctx->pc = 0x1E1F28u;
            goto label_1e1f28;
        }
    }
    ctx->pc = 0x1E1E84u;
    // 0x1e1e84: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e1e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e1e88: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1e1e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1e1e8c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e1e8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e1e90: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1e1e90u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e1e94: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1e1e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e1e98: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e1e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e1e9c: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e1e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e1ea0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e1ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e1ea4: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x1e1ea4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e1ea8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1e1ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e1eac: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e1eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e1eb0: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e1eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e1eb4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e1eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e1eb8: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x1e1eb8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e1ebc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e1ebcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e1ec0: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x1e1ec0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e1ec4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e1ec4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e1ec8: 0xc040c00  jal         func_103000
    ctx->pc = 0x1E1EC8u;
    SET_GPR_U32(ctx, 31, 0x1E1ED0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1E1ED0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E1ED0u) { return; }
    ctx->pc = 0x1E1ED0u;
label_1e1ed0:
    // 0x1e1ed0: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e1ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e1ed4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1e1ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1e1ed8: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e1ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e1edc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1edcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1ee0: 0x0  nop
    ctx->pc = 0x1e1ee0u;
    // NOP
    // 0x1e1ee4: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1e1ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1e1ee8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1ee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1eec: 0x0  nop
    ctx->pc = 0x1e1eecu;
    // NOP
    // 0x1e1ef0: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e1ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e1ef4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1ef4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1ef8: 0x0  nop
    ctx->pc = 0x1e1ef8u;
    // NOP
    // 0x1e1efc: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1e1efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x1e1f00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1f00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1f04: 0x0  nop
    ctx->pc = 0x1e1f04u;
    // NOP
    // 0x1e1f08: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x1e1f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x1e1f0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1f0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1f10: 0x0  nop
    ctx->pc = 0x1e1f10u;
    // NOP
    // 0x1e1f14: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x1e1f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x1e1f18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1f1c: 0x0  nop
    ctx->pc = 0x1e1f1cu;
    // NOP
    // 0x1e1f20: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x1e1f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x1e1f24: 0x0  nop
    ctx->pc = 0x1e1f24u;
    // NOP
label_1e1f28:
    // 0x1e1f28: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e1f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1f2c: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x1e1f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x1e1f30: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x1e1f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1f34: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x1e1f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x1e1f38: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e1f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1f3c: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x1e1f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x1e1f40: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1e1f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e1f44: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1e1f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e1f48: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e1f48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e1f4c: 0xc067618  jal         func_19D860
    ctx->pc = 0x1E1F4Cu;
    SET_GPR_U32(ctx, 31, 0x1E1F54u);
    ctx->pc = 0x19D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D860u, 0x1E1F4Cu, 0x1E1F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1F54u;
label_1e1f54:
    // 0x1e1f54: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e1f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e1f58: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e1f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e1f5c: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1E1F5Cu;
    {
        const bool branch_taken_0x1e1f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1f5c) {
            ctx->pc = 0x1E2028u;
            goto label_1e2028;
        }
    }
    ctx->pc = 0x1E1F64u;
    // 0x1e1f64: 0xc60100f0  lwc1        $f1, 0xF0($s0)
    ctx->pc = 0x1e1f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1f68: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e1f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1f6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e1f6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e1f70: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e1f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1e1f74: 0xc60100f0  lwc1        $f1, 0xF0($s0)
    ctx->pc = 0x1e1f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1f78: 0x3c023bc4  lui         $v0, 0x3BC4
    ctx->pc = 0x1e1f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15300 << 16));
    // 0x1e1f7c: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x1e1f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x1e1f80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1f84: 0x0  nop
    ctx->pc = 0x1e1f84u;
    // NOP
    // 0x1e1f88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e1f88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e1f8c: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x1e1f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x1e1f90: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1e1f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1f94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1f94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1f98: 0x0  nop
    ctx->pc = 0x1e1f98u;
    // NOP
    // 0x1e1f9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e1f9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1fa0: 0x0  nop
    ctx->pc = 0x1e1fa0u;
    // NOP
    // 0x1e1fa4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1E1FA4u;
    {
        const bool branch_taken_0x1e1fa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1fa4) {
            ctx->pc = 0x1E1FC8u;
            goto label_1e1fc8;
        }
    }
    ctx->pc = 0x1E1FACu;
    // 0x1e1fac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1fb0: 0x0  nop
    ctx->pc = 0x1e1fb0u;
    // NOP
    // 0x1e1fb4: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e1fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1e1fb8: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e1fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e1fbc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1e1fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1e1fc0: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e1fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e1fc4: 0x0  nop
    ctx->pc = 0x1e1fc4u;
    // NOP
label_1e1fc8:
    // 0x1e1fc8: 0xc60100f4  lwc1        $f1, 0xF4($s0)
    ctx->pc = 0x1e1fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1fcc: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x1e1fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1fd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e1fd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e1fd4: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x1e1fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x1e1fd8: 0xc60100f4  lwc1        $f1, 0xF4($s0)
    ctx->pc = 0x1e1fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1fdc: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1e1fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1e1fe0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e1fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1e1fe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1fe8: 0x0  nop
    ctx->pc = 0x1e1fe8u;
    // NOP
    // 0x1e1fec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e1fecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e1ff0: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x1e1ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x1e1ff4: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1e1ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1ff8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1e1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1e1ffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2000: 0x0  nop
    ctx->pc = 0x1e2000u;
    // NOP
    // 0x1e2004: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e2004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2008: 0x0  nop
    ctx->pc = 0x1e2008u;
    // NOP
    // 0x1e200c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E200Cu;
    {
        const bool branch_taken_0x1e200c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e200c) {
            ctx->pc = 0x1E2028u;
            goto label_1e2028;
        }
    }
    ctx->pc = 0x1E2014u;
    // 0x1e2014: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e2014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2018: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1e2018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1e201c: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e201cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e2020: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e2020u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e2024: 0x0  nop
    ctx->pc = 0x1e2024u;
    // NOP
label_1e2028:
    // 0x1e2028: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e2028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e202c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x1e202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2030: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e2030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e2034: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1e2034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1e2038: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e2038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e203c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1e203cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1e2040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2044: 0x0  nop
    ctx->pc = 0x1e2044u;
    // NOP
    // 0x1e2048: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e2048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e204c: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e204cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e2050: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e2050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e2054: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1e2054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e2058: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x1e2058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1e205c: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E205Cu;
    SET_GPR_U32(ctx, 31, 0x1E2064u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E205Cu, 0x1E2064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2064u;
label_1e2064:
    // 0x1e2064: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1e2064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e2068: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e2068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e206c: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e206cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e2070: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1e2070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e2074: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E2074u;
    SET_GPR_U32(ctx, 31, 0x1E207Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E2074u, 0x1E207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E207Cu;
label_1e207c:
    // 0x1e207c: 0x0  nop
    ctx->pc = 0x1e207cu;
    // NOP
label_1e2080:
    // 0x1e2080: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1e2080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e2084: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1e2084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e2088: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e2088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e208c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e208cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2090: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E2090u;
    SET_GPR_U32(ctx, 31, 0x1E2098u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E2098u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E2098u) { return; }
    ctx->pc = 0x1E2098u;
label_1e2098:
    // 0x1e2098: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1e2098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e209c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e20a0: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e20a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e20a4: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e20a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e20a8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E20A8u;
    {
        const bool branch_taken_0x1e20a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e20a8) {
            ctx->pc = 0x1E20C8u;
            goto label_1e20c8;
        }
    }
    ctx->pc = 0x1E20B0u;
    // 0x1e20b0: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x1e20b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1e20b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e20b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e20b8: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e20b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e20bc: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e20bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e20c0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E20C0u;
    {
        const bool branch_taken_0x1e20c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e20c0) {
            ctx->pc = 0x1E20D0u;
            goto label_1e20d0;
        }
    }
    ctx->pc = 0x1E20C8u;
label_1e20c8:
    // 0x1e20c8: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e20c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e20cc: 0x0  nop
    ctx->pc = 0x1e20ccu;
    // NOP
label_1e20d0:
    // 0x1e20d0: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x1e20d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1e20d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e20d8: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e20d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e20dc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E20DCu;
    {
        const bool branch_taken_0x1e20dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e20dc) {
            ctx->pc = 0x1E20E8u;
            goto label_1e20e8;
        }
    }
    ctx->pc = 0x1E20E4u;
    // 0x1e20e4: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e20e4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e20e8:
    // 0x1e20e8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1e20e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e20ec: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1e20ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e20f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e20f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e20f4: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E20F4u;
    SET_GPR_U32(ctx, 31, 0x1E20FCu);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E20F4u, 0x1E20FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E20FCu;
label_1e20fc:
    // 0x1e20fc: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x1e20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e2100: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e2100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2104: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e2104u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e2108: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e2108u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e210c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E210Cu;
    {
        const bool branch_taken_0x1e210c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e210c) {
            ctx->pc = 0x1E2130u;
            goto label_1e2130;
        }
    }
    ctx->pc = 0x1E2114u;
    // 0x1e2114: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x1e2114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1e2118: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e2118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e211c: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e211cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e2120: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e2120u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e2124: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2124u;
    {
        const bool branch_taken_0x1e2124 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2124) {
            ctx->pc = 0x1E2138u;
            goto label_1e2138;
        }
    }
    ctx->pc = 0x1E212Cu;
    // 0x1e212c: 0x0  nop
    ctx->pc = 0x1e212cu;
    // NOP
label_1e2130:
    // 0x1e2130: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e2130u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e2134: 0x0  nop
    ctx->pc = 0x1e2134u;
    // NOP
label_1e2138:
    // 0x1e2138: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x1e2138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1e213c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e213cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2140: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e2140u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e2144: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2144u;
    {
        const bool branch_taken_0x1e2144 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2144) {
            ctx->pc = 0x1E2150u;
            goto label_1e2150;
        }
    }
    ctx->pc = 0x1E214Cu;
    // 0x1e214c: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e214cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e2150:
    // 0x1e2150: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1e2150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e2154: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1e2154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e2158: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e2158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e215c: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E215Cu;
    SET_GPR_U32(ctx, 31, 0x1E2164u);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E215Cu, 0x1E2164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2164u;
label_1e2164:
    // 0x1e2164: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1e2164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e2168: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e2168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e216c: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e216cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e2170: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e2170u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e2174: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E2174u;
    {
        const bool branch_taken_0x1e2174 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2174) {
            ctx->pc = 0x1E2198u;
            goto label_1e2198;
        }
    }
    ctx->pc = 0x1E217Cu;
    // 0x1e217c: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x1e217cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x1e2180: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e2180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2184: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e2184u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e2188: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e2188u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e218c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E218Cu;
    {
        const bool branch_taken_0x1e218c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e218c) {
            ctx->pc = 0x1E21A0u;
            goto label_1e21a0;
        }
    }
    ctx->pc = 0x1E2194u;
    // 0x1e2194: 0x0  nop
    ctx->pc = 0x1e2194u;
    // NOP
label_1e2198:
    // 0x1e2198: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e2198u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e219c: 0x0  nop
    ctx->pc = 0x1e219cu;
    // NOP
label_1e21a0:
    // 0x1e21a0: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x1e21a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x1e21a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e21a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e21a8: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e21a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e21ac: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E21ACu;
    {
        const bool branch_taken_0x1e21ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e21ac) {
            ctx->pc = 0x1E21B8u;
            goto label_1e21b8;
        }
    }
    ctx->pc = 0x1E21B4u;
    // 0x1e21b4: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e21b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e21b8:
    // 0x1e21b8: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e21b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e21bc: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1e21bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e21c0: 0x27b60100  addiu       $s6, $sp, 0x100
    ctx->pc = 0x1e21c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e21c4: 0x72c03628  paddub      $a2, $s6, $zero
    ctx->pc = 0x1e21c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e21c8: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x1e21c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e21cc: 0x72604628  paddub      $t0, $s3, $zero
    ctx->pc = 0x1e21ccu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1e21d0: 0xc077f60  jal         func_1DFD80
    ctx->pc = 0x1E21D0u;
    SET_GPR_U32(ctx, 31, 0x1E21D8u);
    ctx->pc = 0x1DFD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD80u, 0x1E21D0u, 0x1E21D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E21D8u;
label_1e21d8:
    // 0x1e21d8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x1e21d8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e21dc: 0x0  nop
    ctx->pc = 0x1e21dcu;
    // NOP
label_1e21e0:
    // 0x1e21e0: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x1e21e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e21e4: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1e21e4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1e21e8:
    // 0x1e21e8: 0x8fa30248  lw          $v1, 0x248($sp)
    ctx->pc = 0x1e21e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1e21ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e21ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e21f0: 0xafa30248  sw          $v1, 0x248($sp)
    ctx->pc = 0x1e21f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 3));
    // 0x1e21f4: 0x1460fe58  bnez        $v1, . + 4 + (-0x1A8 << 2)
    ctx->pc = 0x1E21F4u;
    {
        const bool branch_taken_0x1e21f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e21f4) {
            ctx->pc = 0x1E1B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1b58;
        }
    }
    ctx->pc = 0x1E21FCu;
    // 0x1e21fc: 0x8fa40258  lw          $a0, 0x258($sp)
    ctx->pc = 0x1e21fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x1e2200: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x1e2200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e2204: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x1e2204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e2208: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2208u;
    {
        const bool branch_taken_0x1e2208 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e2208) {
            ctx->pc = 0x1E2224u;
            goto label_1e2224;
        }
    }
    ctx->pc = 0x1E2210u;
    // 0x1e2210: 0x8fa50268  lw          $a1, 0x268($sp)
    ctx->pc = 0x1e2210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e2214: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x1e2214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1e2218: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1e2218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1e221c: 0x839824  and         $s3, $a0, $v1
    ctx->pc = 0x1e221cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e2220: 0xacb30024  sw          $s3, 0x24($a1)
    ctx->pc = 0x1e2220u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 19));
label_1e2224:
    // 0x1e2224: 0x7bbf00a0  lq          $ra, 0xA0($sp)
    ctx->pc = 0x1e2224u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e2228: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1e2228u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e222c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1e222cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e2230: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1e2230u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e2234: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1e2234u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e2238: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e2238u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e223c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e223cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2240: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e2240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2244: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e2244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2248: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e2248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e224c: 0x27bd0280  addiu       $sp, $sp, 0x280
    ctx->pc = 0x1e224cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x1e2250: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2258u;
}
