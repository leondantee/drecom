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

// Function: Mul_index_data_obj5
// Address: 0x1e2a30 - 0x1e32f0
void Mul_index_data_obj5_0x1e2a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mul_index_data_obj5_0x1e2a30");
#endif

    switch (ctx->pc) {
        case 0x1e2aecu: goto label_1e2aec;
        case 0x1e2b18u: goto label_1e2b18;
        case 0x1e2d9cu: goto label_1e2d9c;
        case 0x1e2e50u: goto label_1e2e50;
        case 0x1e2eb0u: goto label_1e2eb0;
        case 0x1e2ec4u: goto label_1e2ec4;
        case 0x1e2fc8u: goto label_1e2fc8;
        case 0x1e305cu: goto label_1e305c;
        case 0x1e3118u: goto label_1e3118;
        case 0x1e3130u: goto label_1e3130;
        case 0x1e3194u: goto label_1e3194;
        case 0x1e3200u: goto label_1e3200;
        case 0x1e3278u: goto label_1e3278;
        default: break;
    }

    ctx->pc = 0x1e2a30u;

    // 0x1e2a30: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x1e2a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x1e2a34: 0x7fbf00a0  sq          $ra, 0xA0($sp)
    ctx->pc = 0x1e2a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 31));
    // 0x1e2a38: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1e2a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1e2a3c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1e2a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1e2a40: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1e2a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1e2a44: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1e2a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1e2a48: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e2a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e2a4c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e2a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e2a50: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e2a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e2a54: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e2a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e2a58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e2a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e2a5c: 0xafa401f0  sw          $a0, 0x1F0($sp)
    ctx->pc = 0x1e2a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 4));
    // 0x1e2a60: 0xafa501f8  sw          $a1, 0x1F8($sp)
    ctx->pc = 0x1e2a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 5));
    // 0x1e2a64: 0xafa70208  sw          $a3, 0x208($sp)
    ctx->pc = 0x1e2a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 7));
    // 0x1e2a68: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1e2a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e2a6c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x1e2a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x1e2a70: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x1e2a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
    // 0x1e2a74: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x1e2a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1e2a78: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1e2a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1e2a7c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1e2a7cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e2a80: 0x8fb301f8  lw          $s3, 0x1F8($sp)
    ctx->pc = 0x1e2a80u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1e2a84: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x1e2a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x1e2a88: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1e2a88u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e2a8c: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x1e2a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1e2a90: 0x8c530030  lw          $s3, 0x30($v0)
    ctx->pc = 0x1e2a90u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1e2a94: 0x7260be28  paddub      $s7, $s3, $zero
    ctx->pc = 0x1e2a94u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1e2a98: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x1e2a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1e2a9c: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x1e2a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1e2aa0: 0x70a0ae28  paddub      $s5, $a1, $zero
    ctx->pc = 0x1e2aa0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e2aa4: 0x8fa601f8  lw          $a2, 0x1F8($sp)
    ctx->pc = 0x1e2aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1e2aa8: 0x8cc20048  lw          $v0, 0x48($a2)
    ctx->pc = 0x1e2aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x1e2aac: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x1e2aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
    // 0x1e2ab0: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x1e2ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1e2ab4: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1e2ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1e2ab8: 0xafa201cc  sw          $v0, 0x1CC($sp)
    ctx->pc = 0x1e2ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
    // 0x1e2abc: 0xafa001dc  sw          $zero, 0x1DC($sp)
    ctx->pc = 0x1e2abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 0));
    // 0x1e2ac0: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1e2ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e2ac4: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x1e2ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e2ac8: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x1e2ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
    // 0x1e2acc: 0x8fb301f0  lw          $s3, 0x1F0($sp)
    ctx->pc = 0x1e2accu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e2ad0: 0x8e760134  lw          $s6, 0x134($s3)
    ctx->pc = 0x1e2ad0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
    // 0x1e2ad4: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1e2ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e2ad8: 0x8c530130  lw          $s3, 0x130($v0)
    ctx->pc = 0x1e2ad8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e2adc: 0xafb301e0  sw          $s3, 0x1E0($sp)
    ctx->pc = 0x1e2adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 19));
    // 0x1e2ae0: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1e2ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e2ae4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E2AE4u;
    SET_GPR_U32(ctx, 31, 0x1E2AECu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E2AECu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E2AECu) { return; }
    ctx->pc = 0x1E2AECu;
label_1e2aec:
    // 0x1e2aec: 0x8fa601f8  lw          $a2, 0x1F8($sp)
    ctx->pc = 0x1e2aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1e2af0: 0xc4c000a0  lwc1        $f0, 0xA0($a2)
    ctx->pc = 0x1e2af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2af4: 0xe7a001e4  swc1        $f0, 0x1E4($sp)
    ctx->pc = 0x1e2af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
    // 0x1e2af8: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x1e2af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1e2afc: 0xc46100a4  lwc1        $f1, 0xA4($v1)
    ctx->pc = 0x1e2afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2b00: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x1e2b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1e2b04: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x1e2b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2b08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e2b08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e2b0c: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x1e2b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x1e2b10: 0xafa001c4  sw          $zero, 0x1C4($sp)
    ctx->pc = 0x1e2b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 0));
    // 0x1e2b14: 0xafa001c8  sw          $zero, 0x1C8($sp)
    ctx->pc = 0x1e2b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 0));
label_1e2b18:
    // 0x1e2b18: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x1e2b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2b1c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e2b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e2b20: 0x106001d5  beqz        $v1, . + 4 + (0x1D5 << 2)
    ctx->pc = 0x1E2B20u;
    {
        const bool branch_taken_0x1e2b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2b20) {
            ctx->pc = 0x1E3278u;
            goto label_1e3278;
        }
    }
    ctx->pc = 0x1E2B28u;
    // 0x1e2b28: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1e2b28u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e2b2c: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x1e2b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2b30: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1e2b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1e2b34: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E2B34u;
    {
        const bool branch_taken_0x1e2b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2b34) {
            ctx->pc = 0x1E2B60u;
            goto label_1e2b60;
        }
    }
    ctx->pc = 0x1E2B3Cu;
    // 0x1e2b3c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e2b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e2b40: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1e2b40u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e2b44: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x1e2b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1e2b48: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x1e2b48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e2b4c: 0xafb301dc  sw          $s3, 0x1DC($sp)
    ctx->pc = 0x1e2b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 19));
    // 0x1e2b50: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x1e2b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e2b54: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1e2b54u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e2b58: 0x100001c9  b           . + 4 + (0x1C9 << 2)
    ctx->pc = 0x1E2B58u;
    {
        const bool branch_taken_0x1e2b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2b58) {
            ctx->pc = 0x1E3280u;
            goto label_1e3280;
        }
    }
    ctx->pc = 0x1E2B60u;
label_1e2b60:
    // 0x1e2b60: 0x96050100  lhu         $a1, 0x100($s0)
    ctx->pc = 0x1e2b60u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1e2b64: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x1e2b64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1e2b68: 0x113840  sll         $a3, $s1, 1
    ctx->pc = 0x1e2b68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2b6c: 0xf11021  addu        $v0, $a3, $s1
    ctx->pc = 0x1e2b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x1e2b70: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e2b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2b74: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1e2b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1e2b78: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1e2b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2b7c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1e2b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e2b80: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1e2b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2b84: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1e2b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1e2b88: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1e2b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e2b8c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1e2b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1e2b90: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1e2b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2b94: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1e2b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1e2b98: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x1e2b98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2b9c: 0xb12021  addu        $a0, $a1, $s1
    ctx->pc = 0x1e2b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1e2ba0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1e2ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e2ba4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1e2ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1e2ba8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1e2ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2bac: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1e2bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e2bb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2bb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2bb8: 0x0  nop
    ctx->pc = 0x1e2bb8u;
    // NOP
    // 0x1e2bbc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1e2bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1e2bc0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2bc4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2bc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2bcc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e2bd0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e2bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2bd4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e2bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e2bd8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2bdc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2be0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2be4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e2be8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1e2be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2bec: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e2becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1e2bf0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2bf4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2bf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2bfc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e2c00: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1e2c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2c04: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1e2c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1e2c08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2c0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2c10: 0x0  nop
    ctx->pc = 0x1e2c10u;
    // NOP
    // 0x1e2c14: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1e2c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1e2c18: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2c1c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2c20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2c24: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e2c28: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1e2c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2c2c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1e2c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1e2c30: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2c34: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2c38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2c3c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e2c40: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1e2c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2c44: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1e2c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1e2c48: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2c4c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2c50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2c54: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e2c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e2c58: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e2c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2c5c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1e2c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1e2c60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2c64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2c68: 0x0  nop
    ctx->pc = 0x1e2c68u;
    // NOP
    // 0x1e2c6c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1e2c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1e2c70: 0x86020102  lh          $v0, 0x102($s0)
    ctx->pc = 0x1e2c70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 258)));
    // 0x1e2c74: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x1E2C74u;
    {
        const bool branch_taken_0x1e2c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2c74) {
            ctx->pc = 0x1E2E58u;
            goto label_1e2e58;
        }
    }
    ctx->pc = 0x1E2C7Cu;
    // 0x1e2c7c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e2c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e2c80: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1e2c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1e2c84: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e2c84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e2c88: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1e2c88u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e2c8c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1e2c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e2c90: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e2c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e2c94: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e2c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e2c98: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e2c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e2c9c: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x1e2c9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e2ca0: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1e2ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e2ca4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e2ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e2ca8: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e2ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e2cac: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e2cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e2cb0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e2cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e2cb4: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x1e2cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
    // 0x1e2cb8: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e2cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2cbc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e2cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1e2cc0: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1E2CC0u;
    {
        const bool branch_taken_0x1e2cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2cc0) {
            ctx->pc = 0x1E2E18u;
            goto label_1e2e18;
        }
    }
    ctx->pc = 0x1E2CC8u;
    // 0x1e2cc8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2ccc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2cd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2cd4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e2cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e2cd8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e2cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2cdc: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1e2cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1e2ce0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2ce4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2ce8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2cec: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e2cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e2cf0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e2cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2cf4: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1e2cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1e2cf8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e2cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2cfc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e2d00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2d04: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e2d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e2d08: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e2d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2d0c: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1e2d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1e2d10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2d18: 0x0  nop
    ctx->pc = 0x1e2d18u;
    // NOP
    // 0x1e2d1c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1e2d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1e2d20: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x1e2d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e2d24: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e2d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1e2d28: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1e2d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e2d2c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e2d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e2d30: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1e2d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1e2d34: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1e2d34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1e2d38: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e2d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e2d3c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e2d3cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e2d40: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e2d40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e2d44: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x1e2d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e2d48: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1e2d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e2d4c: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x1e2d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e2d50: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e2d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e2d54: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1e2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1e2d58: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1e2d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1e2d5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e2d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e2d60: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e2d60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e2d64: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e2d64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e2d68: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x1e2d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e2d6c: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1e2d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e2d70: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x1e2d70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e2d74: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x1e2d74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e2d78: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x1e2d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e2d7c: 0x645021  addu        $t2, $v1, $a0
    ctx->pc = 0x1e2d7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e2d80: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1e2d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e2d84: 0x8fa50208  lw          $a1, 0x208($sp)
    ctx->pc = 0x1e2d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1e2d88: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e2d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e2d8c: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x1e2d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e2d90: 0x27ab01a0  addiu       $t3, $sp, 0x1A0
    ctx->pc = 0x1e2d90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e2d94: 0xc05d3ac  jal         func_174EB0
    ctx->pc = 0x1E2D94u;
    SET_GPR_U32(ctx, 31, 0x1E2D9Cu);
    ctx->pc = 0x174EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174EB0u, 0x1E2D94u, 0x1E2D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2D9Cu;
label_1e2d9c:
    // 0x1e2d9c: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x1e2d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1e2da0: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2da4: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1e2da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1e2da8: 0x8fa301b4  lw          $v1, 0x1B4($sp)
    ctx->pc = 0x1e2da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x1e2dac: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2db0: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1e2db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1e2db4: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x1e2db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1e2db8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2dbc: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1e2dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x1e2dc0: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x1e2dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1e2dc4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2dc8: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x1e2dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x1e2dcc: 0x8fa301b4  lw          $v1, 0x1B4($sp)
    ctx->pc = 0x1e2dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x1e2dd0: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2dd4: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x1e2dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x1e2dd8: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x1e2dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1e2ddc: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2de0: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x1e2de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x1e2de4: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x1e2de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1e2de8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2dec: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x1e2decu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
    // 0x1e2df0: 0x8fa301b4  lw          $v1, 0x1B4($sp)
    ctx->pc = 0x1e2df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x1e2df4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2df8: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x1e2df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
    // 0x1e2dfc: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x1e2dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1e2e00: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2e04: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x1e2e04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x1e2e08: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e2e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2e0c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1e2e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1e2e10: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e2e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e2e14: 0x0  nop
    ctx->pc = 0x1e2e14u;
    // NOP
label_1e2e18:
    // 0x1e2e18: 0xc60100fc  lwc1        $f1, 0xFC($s0)
    ctx->pc = 0x1e2e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2e1c: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x1e2e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2e20: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e2e20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2e24: 0x0  nop
    ctx->pc = 0x1e2e24u;
    // NOP
    // 0x1e2e28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2E28u;
    {
        const bool branch_taken_0x1e2e28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2e28) {
            ctx->pc = 0x1E2E38u;
            goto label_1e2e38;
        }
    }
    ctx->pc = 0x1E2E30u;
    // 0x1e2e30: 0xa6000102  sh          $zero, 0x102($s0)
    ctx->pc = 0x1e2e30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 258), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e2e34: 0x0  nop
    ctx->pc = 0x1e2e34u;
    // NOP
label_1e2e38:
    // 0x1e2e38: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e2e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e2e3c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e2e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e2e40: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e2e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e2e44: 0x72c03628  paddub      $a2, $s6, $zero
    ctx->pc = 0x1e2e44u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e2e48: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E2E48u;
    SET_GPR_U32(ctx, 31, 0x1E2E50u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E2E48u, 0x1E2E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E50u;
label_1e2e50:
    // 0x1e2e50: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x1E2E50u;
    {
        const bool branch_taken_0x1e2e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2e50) {
            ctx->pc = 0x1E3118u;
            goto label_1e3118;
        }
    }
    ctx->pc = 0x1E2E58u;
label_1e2e58:
    // 0x1e2e58: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e2e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2e5c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e2e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1e2e60: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1E2E60u;
    {
        const bool branch_taken_0x1e2e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2e60) {
            ctx->pc = 0x1E2F30u;
            goto label_1e2f30;
        }
    }
    ctx->pc = 0x1E2E68u;
    // 0x1e2e68: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e2e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e2e6c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1e2e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1e2e70: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e2e70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e2e74: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1e2e74u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e2e78: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1e2e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e2e7c: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e2e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e2e80: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e2e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e2e84: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e2e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e2e88: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x1e2e88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e2e8c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1e2e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e2e90: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e2e94: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e2e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e2e98: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e2e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e2e9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e2e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e2ea0: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x1e2ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
    // 0x1e2ea4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e2ea4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e2ea8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E2EA8u;
    SET_GPR_U32(ctx, 31, 0x1E2EB0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E2EB0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E2EB0u) { return; }
    ctx->pc = 0x1E2EB0u;
label_1e2eb0:
    // 0x1e2eb0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e2eb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e2eb4: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x1e2eb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e2eb8: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e2eb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e2ebc: 0xc040c00  jal         func_103000
    ctx->pc = 0x1E2EBCu;
    SET_GPR_U32(ctx, 31, 0x1E2EC4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1E2EC4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E2EC4u) { return; }
    ctx->pc = 0x1E2EC4u;
label_1e2ec4:
    // 0x1e2ec4: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e2ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2ec8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1e2ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1e2ecc: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e2eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e2ed0: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1e2ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x1e2ed4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2ed8: 0x0  nop
    ctx->pc = 0x1e2ed8u;
    // NOP
    // 0x1e2edc: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1e2edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1e2ee0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e2ee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2ee4: 0x0  nop
    ctx->pc = 0x1e2ee4u;
    // NOP
    // 0x1e2ee8: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e2ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e2eec: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1e2eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x1e2ef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2ef4: 0x0  nop
    ctx->pc = 0x1e2ef4u;
    // NOP
    // 0x1e2ef8: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1e2ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x1e2efc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2f00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2f04: 0x0  nop
    ctx->pc = 0x1e2f04u;
    // NOP
    // 0x1e2f08: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e2f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1e2f0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2f14: 0x0  nop
    ctx->pc = 0x1e2f14u;
    // NOP
    // 0x1e2f18: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x1e2f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x1e2f1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2f24: 0x0  nop
    ctx->pc = 0x1e2f24u;
    // NOP
    // 0x1e2f28: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x1e2f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x1e2f2c: 0x0  nop
    ctx->pc = 0x1e2f2cu;
    // NOP
label_1e2f30:
    // 0x1e2f30: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e2f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2f34: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x1e2f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1e2f38: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e2f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2f3c: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x1e2f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x1e2f40: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e2f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2f44: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x1e2f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x1e2f48: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e2f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2f4c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e2f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e2f50: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1E2F50u;
    {
        const bool branch_taken_0x1e2f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2f50) {
            ctx->pc = 0x1E30C8u;
            goto label_1e30c8;
        }
    }
    ctx->pc = 0x1E2F58u;
    // 0x1e2f58: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1e2f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2f5c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1e2f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1e2f60: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e2f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1e2f64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2f68: 0x0  nop
    ctx->pc = 0x1e2f68u;
    // NOP
    // 0x1e2f6c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e2f6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e2f70: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e2f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1e2f74: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1e2f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2f78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e2f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2f7c: 0x0  nop
    ctx->pc = 0x1e2f7cu;
    // NOP
    // 0x1e2f80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e2f80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2f84: 0x0  nop
    ctx->pc = 0x1e2f84u;
    // NOP
    // 0x1e2f88: 0x4500004f  bc1f        . + 4 + (0x4F << 2)
    ctx->pc = 0x1E2F88u;
    {
        const bool branch_taken_0x1e2f88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2f88) {
            ctx->pc = 0x1E30C8u;
            goto label_1e30c8;
        }
    }
    ctx->pc = 0x1E2F90u;
    // 0x1e2f90: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e2f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2f94: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1e2f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1e2f98: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e2f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e2f9c: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e2f9cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e2fa0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2fa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2fa8: 0x0  nop
    ctx->pc = 0x1e2fa8u;
    // NOP
    // 0x1e2fac: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x1e2facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x1e2fb0: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x1e2fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x1e2fb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e2fb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e2fb8: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x1e2fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1e2fbc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e2fbcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e2fc0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1E2FC0u;
    SET_GPR_U32(ctx, 31, 0x1E2FC8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E2FC0u, 0x1E2FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2FC8u;
label_1e2fc8:
    // 0x1e2fc8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e2fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e2fcc: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x1e2fccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x1e2fd0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e2fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e2fd4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e2fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e2fd8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x1e2fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x1e2fdc: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x1e2fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e2fe0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e2fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e2fe4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x1e2fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x1e2fe8: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x1e2fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e2fec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e2fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e2ff0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x1e2ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x1e2ff4: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x1e2ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e2ff8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e2ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e2ffc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x1e2ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x1e3000: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x1e3000u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3004: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e3004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e3008: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x1e3008u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x1e300c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x1e300cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3010: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e3010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e3014: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x1e3014u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x1e3018: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x1e3018u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e301c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e301cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e3020: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x1e3020u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x1e3024: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x1e3024u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3028: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e3028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e302c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x1e302cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x1e3030: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x1e3030u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3034: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e3034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e3038: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x1e3038u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x1e303c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x1e303cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3040: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e3040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e3044: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x1e3044u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x1e3048: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x1e3048u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e304c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e304cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e3050: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x1e3050u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x1e3054: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1E3054u;
    SET_GPR_U32(ctx, 31, 0x1E305Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E3054u, 0x1E305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E305Cu;
label_1e305c:
    // 0x1e305c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e305cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e3060: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x1e3060u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x1e3064: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e3064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e3068: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x1e3068u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x1e306c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1e306cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1e3070: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x1e3070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x1e3074: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3074u;
    {
        const bool branch_taken_0x1e3074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e3074) {
            ctx->pc = 0x1E3088u;
            goto label_1e3088;
        }
    }
    ctx->pc = 0x1E307Cu;
    // 0x1e307c: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1e307cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e3080: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E3080u;
    {
        const bool branch_taken_0x1e3080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3080) {
            ctx->pc = 0x1E30B0u;
            goto label_1e30b0;
        }
    }
    ctx->pc = 0x1E3088u;
label_1e3088:
    // 0x1e3088: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e3088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e308c: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x1e308cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x1e3090: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e3090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e3094: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x1e3094u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x1e3098: 0x24420118  addiu       $v0, $v0, 0x118
    ctx->pc = 0x1e3098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x1e309c: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x1e309cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
    // 0x1e30a0: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x1e30a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e30a4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1e30a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e30a8: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x1e30a8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e30ac: 0x0  nop
    ctx->pc = 0x1e30acu;
    // NOP
label_1e30b0:
    // 0x1e30b0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1e30b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1e30b4: 0x2442a610  addiu       $v0, $v0, -0x59F0
    ctx->pc = 0x1e30b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x1e30b8: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x1e30b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
    // 0x1e30bc: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x1e30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x1e30c0: 0x0  nop
    ctx->pc = 0x1e30c0u;
    // NOP
    // 0x1e30c4: 0x0  nop
    ctx->pc = 0x1e30c4u;
    // NOP
label_1e30c8:
    // 0x1e30c8: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1e30c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e30cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e30ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e30d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e30d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e30d4: 0x0  nop
    ctx->pc = 0x1e30d4u;
    // NOP
    // 0x1e30d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e30d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e30dc: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1e30dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1e30e0: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x1e30e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e30e4: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x1e30e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e30e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e30e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e30ec: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1e30ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1e30f0: 0xc60100c8  lwc1        $f1, 0xC8($s0)
    ctx->pc = 0x1e30f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e30f4: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x1e30f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e30f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e30f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e30fc: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1e30fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1e3100: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e3100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e3104: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e3104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e3108: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e3108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e310c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e310cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e3110: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E3110u;
    SET_GPR_U32(ctx, 31, 0x1E3118u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E3110u, 0x1E3118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3118u;
label_1e3118:
    // 0x1e3118: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1e3118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e311c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e311cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e3120: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e3120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e3124: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e3124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3128: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E3128u;
    SET_GPR_U32(ctx, 31, 0x1E3130u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E3130u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E3130u) { return; }
    ctx->pc = 0x1E3130u;
label_1e3130:
    // 0x1e3130: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1e3130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e3134: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3138: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e3138u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e313c: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e313cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e3140: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E3140u;
    {
        const bool branch_taken_0x1e3140 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3140) {
            ctx->pc = 0x1E3160u;
            goto label_1e3160;
        }
    }
    ctx->pc = 0x1E3148u;
    // 0x1e3148: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x1e3148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1e314c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e314cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3150: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e3150u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e3154: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e3154u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e3158: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3158u;
    {
        const bool branch_taken_0x1e3158 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3158) {
            ctx->pc = 0x1E3168u;
            goto label_1e3168;
        }
    }
    ctx->pc = 0x1E3160u;
label_1e3160:
    // 0x1e3160: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e3160u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e3164: 0x0  nop
    ctx->pc = 0x1e3164u;
    // NOP
label_1e3168:
    // 0x1e3168: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x1e3168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1e316c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e316cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3170: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e3170u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e3174: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E3174u;
    {
        const bool branch_taken_0x1e3174 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3174) {
            ctx->pc = 0x1E3180u;
            goto label_1e3180;
        }
    }
    ctx->pc = 0x1E317Cu;
    // 0x1e317c: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e317cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e3180:
    // 0x1e3180: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1e3180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e3184: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1e3184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e3188: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e3188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e318c: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E318Cu;
    SET_GPR_U32(ctx, 31, 0x1E3194u);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E318Cu, 0x1E3194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3194u;
label_1e3194:
    // 0x1e3194: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x1e3194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e3198: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e319c: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e319cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e31a0: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e31a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e31a4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E31A4u;
    {
        const bool branch_taken_0x1e31a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e31a4) {
            ctx->pc = 0x1E31C8u;
            goto label_1e31c8;
        }
    }
    ctx->pc = 0x1E31ACu;
    // 0x1e31ac: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x1e31acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1e31b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e31b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e31b4: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e31b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e31b8: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e31b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e31bc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E31BCu;
    {
        const bool branch_taken_0x1e31bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e31bc) {
            ctx->pc = 0x1E31D0u;
            goto label_1e31d0;
        }
    }
    ctx->pc = 0x1E31C4u;
    // 0x1e31c4: 0x0  nop
    ctx->pc = 0x1e31c4u;
    // NOP
label_1e31c8:
    // 0x1e31c8: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e31c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e31cc: 0x0  nop
    ctx->pc = 0x1e31ccu;
    // NOP
label_1e31d0:
    // 0x1e31d0: 0x27b60108  addiu       $s6, $sp, 0x108
    ctx->pc = 0x1e31d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1e31d4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1e31d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e31d8: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e31d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e31dc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E31DCu;
    {
        const bool branch_taken_0x1e31dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e31dc) {
            ctx->pc = 0x1E31E8u;
            goto label_1e31e8;
        }
    }
    ctx->pc = 0x1E31E4u;
    // 0x1e31e4: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e31e4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e31e8:
    // 0x1e31e8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1e31e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e31ec: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1e31ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e31f0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e31f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e31f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e31f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e31f8: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E31F8u;
    SET_GPR_U32(ctx, 31, 0x1E3200u);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E31F8u, 0x1E3200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3200u;
label_1e3200:
    // 0x1e3200: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e3200u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e3204: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x1e3204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e3208: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e3208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e320c: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e320cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e3210: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x1e3210u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e3214: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E3214u;
    {
        const bool branch_taken_0x1e3214 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3214) {
            ctx->pc = 0x1E3238u;
            goto label_1e3238;
        }
    }
    ctx->pc = 0x1E321Cu;
    // 0x1e321c: 0x27a30114  addiu       $v1, $sp, 0x114
    ctx->pc = 0x1e321cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x1e3220: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e3220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3224: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e3224u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e3228: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x1e3228u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e322c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E322Cu;
    {
        const bool branch_taken_0x1e322c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e322c) {
            ctx->pc = 0x1E3240u;
            goto label_1e3240;
        }
    }
    ctx->pc = 0x1E3234u;
    // 0x1e3234: 0x0  nop
    ctx->pc = 0x1e3234u;
    // NOP
label_1e3238:
    // 0x1e3238: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e3238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e323c: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1e323cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1e3240:
    // 0x1e3240: 0x27a30118  addiu       $v1, $sp, 0x118
    ctx->pc = 0x1e3240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x1e3244: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e3244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3248: 0x2c6159d9  sltiu       $at, $v1, 0x59D9
    ctx->pc = 0x1e3248u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e324c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E324Cu;
    {
        const bool branch_taken_0x1e324c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e324c) {
            ctx->pc = 0x1E3258u;
            goto label_1e3258;
        }
    }
    ctx->pc = 0x1E3254u;
    // 0x1e3254: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e3254u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e3258:
    // 0x1e3258: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e3258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e325c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1e325cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e3260: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x1e3260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e3264: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x1e3264u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e3268: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x1e3268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e326c: 0x72604628  paddub      $t0, $s3, $zero
    ctx->pc = 0x1e326cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1e3270: 0xc077f60  jal         func_1DFD80
    ctx->pc = 0x1E3270u;
    SET_GPR_U32(ctx, 31, 0x1E3278u);
    ctx->pc = 0x1DFD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD80u, 0x1E3270u, 0x1E3278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3278u;
label_1e3278:
    // 0x1e3278: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x1e3278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e327c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e327cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1e3280:
    // 0x1e3280: 0x8fa301cc  lw          $v1, 0x1CC($sp)
    ctx->pc = 0x1e3280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x1e3284: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e3284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e3288: 0xafa301cc  sw          $v1, 0x1CC($sp)
    ctx->pc = 0x1e3288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 3));
    // 0x1e328c: 0x1460fe22  bnez        $v1, . + 4 + (-0x1DE << 2)
    ctx->pc = 0x1E328Cu;
    {
        const bool branch_taken_0x1e328c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e328c) {
            ctx->pc = 0x1E2B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2b18;
        }
    }
    ctx->pc = 0x1E3294u;
    // 0x1e3294: 0x8fa401dc  lw          $a0, 0x1DC($sp)
    ctx->pc = 0x1e3294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1e3298: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x1e3298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1e329c: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x1e329cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e32a0: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E32A0u;
    {
        const bool branch_taken_0x1e32a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e32a0) {
            ctx->pc = 0x1E32BCu;
            goto label_1e32bc;
        }
    }
    ctx->pc = 0x1E32A8u;
    // 0x1e32a8: 0x8fa501f8  lw          $a1, 0x1F8($sp)
    ctx->pc = 0x1e32a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1e32ac: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x1e32acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1e32b0: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1e32b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1e32b4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e32b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e32b8: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x1e32b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
label_1e32bc:
    // 0x1e32bc: 0x7bbf00a0  lq          $ra, 0xA0($sp)
    ctx->pc = 0x1e32bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e32c0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1e32c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e32c4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1e32c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e32c8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1e32c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e32cc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1e32ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e32d0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e32d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e32d4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e32d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e32d8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e32d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e32dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e32dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e32e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e32e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e32e4: 0x27bd0210  addiu       $sp, $sp, 0x210
    ctx->pc = 0x1e32e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1e32e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E32E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E32E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E32F0u;
}
