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

// Function: Mul_index_data_obj7
// Address: 0x1e3870 - 0x1e3fac
void Mul_index_data_obj7_0x1e3870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mul_index_data_obj7_0x1e3870");
#endif

    switch (ctx->pc) {
        case 0x1e38c4u: goto label_1e38c4;
        case 0x1e3938u: goto label_1e3938;
        case 0x1e3998u: goto label_1e3998;
        case 0x1e3bf0u: goto label_1e3bf0;
        case 0x1e3c9cu: goto label_1e3c9c;
        case 0x1e3cfcu: goto label_1e3cfc;
        case 0x1e3d10u: goto label_1e3d10;
        case 0x1e3de0u: goto label_1e3de0;
        case 0x1e3df8u: goto label_1e3df8;
        case 0x1e3e5cu: goto label_1e3e5c;
        case 0x1e3ec4u: goto label_1e3ec4;
        case 0x1e3f34u: goto label_1e3f34;
        default: break;
    }

    ctx->pc = 0x1e3870u;

    // 0x1e3870: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x1e3870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x1e3874: 0x7fbf00a0  sq          $ra, 0xA0($sp)
    ctx->pc = 0x1e3874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 31));
    // 0x1e3878: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1e3878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1e387c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1e387cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1e3880: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1e3880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1e3884: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1e3884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1e3888: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e3888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e388c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e388cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e3890: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e3890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e3894: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e3894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e3898: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e3898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e389c: 0xafa401a0  sw          $a0, 0x1A0($sp)
    ctx->pc = 0x1e389cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 4));
    // 0x1e38a0: 0xafa501a8  sw          $a1, 0x1A8($sp)
    ctx->pc = 0x1e38a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 5));
    // 0x1e38a4: 0xafa701b8  sw          $a3, 0x1B8($sp)
    ctx->pc = 0x1e38a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 7));
    // 0x1e38a8: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e38a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e38ac: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x1e38acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x1e38b0: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x1e38b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x1e38b4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e38b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e38b8: 0xc44c0124  lwc1        $f12, 0x124($v0)
    ctx->pc = 0x1e38b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e38bc: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1E38BCu;
    SET_GPR_U32(ctx, 31, 0x1E38C4u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1E38BCu, 0x1E38C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E38C4u;
label_1e38c4:
    // 0x1e38c4: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x1e38c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    // 0x1e38c8: 0x8fb201a8  lw          $s2, 0x1A8($sp)
    ctx->pc = 0x1e38c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e38cc: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x1e38ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1e38d0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e38d0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e38d4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1e38d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e38d8: 0x8c720028  lw          $s2, 0x28($v1)
    ctx->pc = 0x1e38d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1e38dc: 0x72409e28  paddub      $s3, $s2, $zero
    ctx->pc = 0x1e38dcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e38e0: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x1e38e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e38e4: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1e38e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1e38e8: 0x70a0be28  paddub      $s7, $a1, $zero
    ctx->pc = 0x1e38e8u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e38ec: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x1e38ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e38f0: 0x8cc70040  lw          $a3, 0x40($a2)
    ctx->pc = 0x1e38f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x1e38f4: 0x70e0ae28  paddub      $s5, $a3, $zero
    ctx->pc = 0x1e38f4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1e38f8: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1e38f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e38fc: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x1e38fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1e3900: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x1e3900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
    // 0x1e3904: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1e3904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e3908: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x1e3908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e390c: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x1e390cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
    // 0x1e3910: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1e3910u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e3914: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1e3914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e3918: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1e3918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e391c: 0xafa30194  sw          $v1, 0x194($sp)
    ctx->pc = 0x1e391cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 3));
    // 0x1e3920: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1e3920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e3924: 0x8c960134  lw          $s6, 0x134($a0)
    ctx->pc = 0x1e3924u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 308)));
    // 0x1e3928: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1e3928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e392c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1e392cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1e3930: 0xafa30198  sw          $v1, 0x198($sp)
    ctx->pc = 0x1e3930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 3));
    // 0x1e3934: 0xafa00184  sw          $zero, 0x184($sp)
    ctx->pc = 0x1e3934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
label_1e3938:
    // 0x1e3938: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1e3938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1e393c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e393cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e3940: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E3940u;
    {
        const bool branch_taken_0x1e3940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3940) {
            ctx->pc = 0x1E3960u;
            goto label_1e3960;
        }
    }
    ctx->pc = 0x1E3948u;
    // 0x1e3948: 0x8e040108  lw          $a0, 0x108($s0)
    ctx->pc = 0x1e3948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e394c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1e394cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1e3950: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e3950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e3954: 0xae030108  sw          $v1, 0x108($s0)
    ctx->pc = 0x1e3954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 3));
    // 0x1e3958: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e3958u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e395c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1e395cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_1e3960:
    // 0x1e3960: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x1e3960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e3964: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e3964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e3968: 0x10600173  beqz        $v1, . + 4 + (0x173 << 2)
    ctx->pc = 0x1E3968u;
    {
        const bool branch_taken_0x1e3968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3968) {
            ctx->pc = 0x1E3F38u;
            goto label_1e3f38;
        }
    }
    ctx->pc = 0x1E3970u;
    // 0x1e3970: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1e3970u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e3974: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e3974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e3978: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e3978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e397c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E397Cu;
    {
        const bool branch_taken_0x1e397c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e397c) {
            ctx->pc = 0x1E39A8u;
            goto label_1e39a8;
        }
    }
    ctx->pc = 0x1E3984u;
    // 0x1e3984: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e3984u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e3988: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e3988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e398c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1e398cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e3990: 0xc077ff4  jal         func_1DFFD0
    ctx->pc = 0x1E3990u;
    SET_GPR_U32(ctx, 31, 0x1E3998u);
    ctx->pc = 0x1DFFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFFD0u, 0x1E3990u, 0x1E3998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3998u;
label_1e3998:
    // 0x1e3998: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1e3998u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1e399c: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x1e399cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e39a0: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x1E39A0u;
    {
        const bool branch_taken_0x1e39a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e39a0) {
            ctx->pc = 0x1E3F40u;
            goto label_1e3f40;
        }
    }
    ctx->pc = 0x1E39A8u;
label_1e39a8:
    // 0x1e39a8: 0x96020100  lhu         $v0, 0x100($s0)
    ctx->pc = 0x1e39a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1e39ac: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1e39acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e39b0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e39b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e39b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e39b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e39b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e39bc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e39bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e39c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e39c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e39c4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1e39c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e39c8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e39c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e39cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e39ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e39d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e39d4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e39d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e39d8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e39d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e39dc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1e39dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1e39e0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e39e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e39e4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e39e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e39e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e39e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e39ec: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e39ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e39f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e39f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e39f4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1e39f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e39f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e39f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e39fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e39fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3a00: 0x0  nop
    ctx->pc = 0x1e3a00u;
    // NOP
    // 0x1e3a04: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1e3a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1e3a08: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e3a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e3a0c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e3a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e3a10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3a14: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e3a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e3a18: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e3a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3a1c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e3a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e3a20: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e3a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e3a24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e3a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e3a28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3a2c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e3a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e3a30: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1e3a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3a34: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e3a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1e3a38: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e3a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e3a3c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e3a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e3a40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3a44: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e3a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e3a48: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1e3a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3a4c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1e3a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1e3a50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e3a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e3a54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3a58: 0x0  nop
    ctx->pc = 0x1e3a58u;
    // NOP
    // 0x1e3a5c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1e3a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1e3a60: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e3a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e3a64: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e3a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e3a68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3a6c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e3a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e3a70: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1e3a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3a74: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1e3a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1e3a78: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e3a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e3a7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e3a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e3a80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3a84: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e3a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e3a88: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1e3a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3a8c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1e3a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1e3a90: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e3a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e3a94: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e3a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e3a98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3a9c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e3a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e3aa0: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e3aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3aa4: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1e3aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1e3aa8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e3aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e3aac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3ab0: 0x0  nop
    ctx->pc = 0x1e3ab0u;
    // NOP
    // 0x1e3ab4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1e3ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1e3ab8: 0x86020102  lh          $v0, 0x102($s0)
    ctx->pc = 0x1e3ab8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 258)));
    // 0x1e3abc: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1E3ABCu;
    {
        const bool branch_taken_0x1e3abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3abc) {
            ctx->pc = 0x1E3CA4u;
            goto label_1e3ca4;
        }
    }
    ctx->pc = 0x1E3AC4u;
    // 0x1e3ac4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e3ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e3ac8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e3acc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3ad0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e3ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e3ad4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e3ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3ad8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1e3ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1e3adc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e3adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e3ae0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e3ae4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3ae8: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e3ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e3aec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e3aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3af0: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1e3af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1e3af4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e3af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e3af8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e3af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e3afc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3b00: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1e3b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e3b04: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e3b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3b08: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1e3b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1e3b0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e3b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e3b10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3b14: 0x0  nop
    ctx->pc = 0x1e3b14u;
    // NOP
    // 0x1e3b18: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1e3b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1e3b1c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e3b20: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1e3b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1e3b24: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e3b24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e3b28: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1e3b28u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e3b2c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e3b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e3b30: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e3b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e3b34: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e3b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e3b38: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e3b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e3b3c: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x1e3b3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e3b40: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e3b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e3b44: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e3b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e3b48: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e3b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e3b4c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e3b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e3b50: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e3b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e3b54: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x1e3b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
    // 0x1e3b58: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e3b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e3b5c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e3b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1e3b60: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1E3B60u;
    {
        const bool branch_taken_0x1e3b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3b60) {
            ctx->pc = 0x1E3C78u;
            goto label_1e3c78;
        }
    }
    ctx->pc = 0x1E3B68u;
    // 0x1e3b68: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x1e3b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1e3b6c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1E3B6Cu;
    {
        const bool branch_taken_0x1e3b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3b6c) {
            ctx->pc = 0x1E3C00u;
            goto label_1e3c00;
        }
    }
    ctx->pc = 0x1E3B74u;
    // 0x1e3b74: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x1e3b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1e3b78: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e3b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1e3b7c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e3b80: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e3b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e3b84: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1e3b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1e3b88: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1e3b88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1e3b8c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e3b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e3b90: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e3b90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e3b94: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e3b94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e3b98: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1e3b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e3b9c: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1e3b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e3ba0: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x1e3ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e3ba4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e3ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e3ba8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1e3ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1e3bac: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1e3bacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1e3bb0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e3bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e3bb4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e3bb4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e3bb8: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e3bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e3bbc: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1e3bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e3bc0: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1e3bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e3bc4: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x1e3bc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e3bc8: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x1e3bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e3bcc: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x1e3bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1e3bd0: 0x645021  addu        $t2, $v1, $a0
    ctx->pc = 0x1e3bd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e3bd4: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1e3bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e3bd8: 0x8fa501b8  lw          $a1, 0x1B8($sp)
    ctx->pc = 0x1e3bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1e3bdc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e3bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e3be0: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x1e3be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e3be4: 0x27ab0160  addiu       $t3, $sp, 0x160
    ctx->pc = 0x1e3be4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e3be8: 0xc05d3ac  jal         func_174EB0
    ctx->pc = 0x1E3BE8u;
    SET_GPR_U32(ctx, 31, 0x1E3BF0u);
    ctx->pc = 0x174EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174EB0u, 0x1E3BE8u, 0x1E3BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3BF0u;
label_1e3bf0:
    // 0x1e3bf0: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x1e3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1e3bf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e3bf8: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x1e3bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x1e3bfc: 0x0  nop
    ctx->pc = 0x1e3bfcu;
    // NOP
label_1e3c00:
    // 0x1e3c00: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1e3c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e3c04: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e3c08: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1e3c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1e3c0c: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x1e3c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1e3c10: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e3c14: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1e3c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1e3c18: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x1e3c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1e3c1c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e3c20: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1e3c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x1e3c24: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1e3c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e3c28: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e3c2c: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x1e3c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x1e3c30: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x1e3c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1e3c34: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e3c38: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x1e3c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x1e3c3c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x1e3c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1e3c40: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e3c44: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x1e3c44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x1e3c48: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1e3c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e3c4c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e3c50: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x1e3c50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
    // 0x1e3c54: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x1e3c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1e3c58: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e3c5c: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x1e3c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
    // 0x1e3c60: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x1e3c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1e3c64: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e3c68: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x1e3c68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x1e3c6c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e3c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e3c70: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1e3c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1e3c74: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e3c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_1e3c78:
    // 0x1e3c78: 0x86020102  lh          $v0, 0x102($s0)
    ctx->pc = 0x1e3c78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 258)));
    // 0x1e3c7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e3c80: 0xa6020102  sh          $v0, 0x102($s0)
    ctx->pc = 0x1e3c80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 258), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e3c84: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e3c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e3c88: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e3c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e3c8c: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e3c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e3c90: 0x72c03628  paddub      $a2, $s6, $zero
    ctx->pc = 0x1e3c90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e3c94: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E3C94u;
    SET_GPR_U32(ctx, 31, 0x1E3C9Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E3C94u, 0x1E3C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3C9Cu;
label_1e3c9c:
    // 0x1e3c9c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1E3C9Cu;
    {
        const bool branch_taken_0x1e3c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3c9c) {
            ctx->pc = 0x1E3DE0u;
            goto label_1e3de0;
        }
    }
    ctx->pc = 0x1E3CA4u;
label_1e3ca4:
    // 0x1e3ca4: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e3ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e3ca8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e3ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1e3cac: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1E3CACu;
    {
        const bool branch_taken_0x1e3cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3cac) {
            ctx->pc = 0x1E3D40u;
            goto label_1e3d40;
        }
    }
    ctx->pc = 0x1E3CB4u;
    // 0x1e3cb4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e3cb8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1e3cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1e3cbc: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e3cbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e3cc0: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1e3cc0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e3cc4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e3cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e3cc8: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e3cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e3ccc: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e3cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e3cd0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e3cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e3cd4: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x1e3cd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e3cd8: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e3cdc: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e3cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e3ce0: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e3ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e3ce4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e3ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e3ce8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e3cec: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x1e3cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
    // 0x1e3cf0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e3cf0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e3cf4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E3CF4u;
    SET_GPR_U32(ctx, 31, 0x1E3CFCu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E3CFCu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E3CFCu) { return; }
    ctx->pc = 0x1E3CFCu;
label_1e3cfc:
    // 0x1e3cfc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e3cfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e3d00: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x1e3d00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e3d04: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e3d04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e3d08: 0xc040c00  jal         func_103000
    ctx->pc = 0x1E3D08u;
    SET_GPR_U32(ctx, 31, 0x1E3D10u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1E3D10u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E3D10u) { return; }
    ctx->pc = 0x1E3D10u;
label_1e3d10:
    // 0x1e3d10: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e3d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e3d14: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1e3d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1e3d18: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e3d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e3d1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e3d1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3d20: 0x0  nop
    ctx->pc = 0x1e3d20u;
    // NOP
    // 0x1e3d24: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1e3d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1e3d28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e3d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3d2c: 0x0  nop
    ctx->pc = 0x1e3d2cu;
    // NOP
    // 0x1e3d30: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e3d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e3d34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e3d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3d38: 0x0  nop
    ctx->pc = 0x1e3d38u;
    // NOP
    // 0x1e3d3c: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1e3d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
label_1e3d40:
    // 0x1e3d40: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e3d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3d44: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x1e3d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3d48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e3d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e3d4c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1e3d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1e3d50: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e3d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3d54: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1e3d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1e3d58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3d5c: 0x0  nop
    ctx->pc = 0x1e3d5cu;
    // NOP
    // 0x1e3d60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e3d60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e3d64: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e3d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e3d68: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1e3d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3d6c: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1e3d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1e3d70: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E3D70u;
    {
        const bool branch_taken_0x1e3d70 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e3d70) {
            ctx->pc = 0x1E3D8Cu;
            goto label_1e3d8c;
        }
    }
    ctx->pc = 0x1E3D78u;
    // 0x1e3d78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3d7c: 0x0  nop
    ctx->pc = 0x1e3d7cu;
    // NOP
    // 0x1e3d80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e3d80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e3d84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E3D84u;
    {
        const bool branch_taken_0x1e3d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3d84) {
            ctx->pc = 0x1E3DA8u;
            goto label_1e3da8;
        }
    }
    ctx->pc = 0x1E3D8Cu;
label_1e3d8c:
    // 0x1e3d8c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e3d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e3d90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e3d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e3d94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e3d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e3d98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e3d98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3d9c: 0x0  nop
    ctx->pc = 0x1e3d9cu;
    // NOP
    // 0x1e3da0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e3da0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e3da4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e3da4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1e3da8:
    // 0x1e3da8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e3da8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3dac: 0x0  nop
    ctx->pc = 0x1e3dacu;
    // NOP
    // 0x1e3db0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E3DB0u;
    {
        const bool branch_taken_0x1e3db0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e3db0) {
            ctx->pc = 0x1E3DC8u;
            goto label_1e3dc8;
        }
    }
    ctx->pc = 0x1E3DB8u;
    // 0x1e3db8: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e3db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e3dbc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1e3dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1e3dc0: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e3dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e3dc4: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e3dc4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e3dc8:
    // 0x1e3dc8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e3dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e3dcc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e3dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e3dd0: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e3dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e3dd4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e3dd4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e3dd8: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E3DD8u;
    SET_GPR_U32(ctx, 31, 0x1E3DE0u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E3DD8u, 0x1E3DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3DE0u;
label_1e3de0:
    // 0x1e3de0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1e3de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e3de4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e3de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e3de8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e3de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e3dec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e3decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3df0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E3DF0u;
    SET_GPR_U32(ctx, 31, 0x1E3DF8u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E3DF8u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E3DF8u) { return; }
    ctx->pc = 0x1E3DF8u;
label_1e3df8:
    // 0x1e3df8: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1e3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e3dfc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3e00: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e3e00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e3e04: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e3e04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e3e08: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E3E08u;
    {
        const bool branch_taken_0x1e3e08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3e08) {
            ctx->pc = 0x1E3E28u;
            goto label_1e3e28;
        }
    }
    ctx->pc = 0x1E3E10u;
    // 0x1e3e10: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x1e3e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1e3e14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3e18: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e3e18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e3e1c: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e3e1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e3e20: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3E20u;
    {
        const bool branch_taken_0x1e3e20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3e20) {
            ctx->pc = 0x1E3E30u;
            goto label_1e3e30;
        }
    }
    ctx->pc = 0x1E3E28u;
label_1e3e28:
    // 0x1e3e28: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e3e28u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e3e2c: 0x0  nop
    ctx->pc = 0x1e3e2cu;
    // NOP
label_1e3e30:
    // 0x1e3e30: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x1e3e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1e3e34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3e38: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e3e38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e3e3c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E3E3Cu;
    {
        const bool branch_taken_0x1e3e3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3e3c) {
            ctx->pc = 0x1E3E48u;
            goto label_1e3e48;
        }
    }
    ctx->pc = 0x1E3E44u;
    // 0x1e3e44: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e3e44u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e3e48:
    // 0x1e3e48: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1e3e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e3e4c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1e3e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e3e50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e3e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3e54: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E3E54u;
    SET_GPR_U32(ctx, 31, 0x1E3E5Cu);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E3E54u, 0x1E3E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3E5Cu;
label_1e3e5c:
    // 0x1e3e5c: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x1e3e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e3e60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3e64: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e3e64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e3e68: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e3e68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e3e6c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E3E6Cu;
    {
        const bool branch_taken_0x1e3e6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3e6c) {
            ctx->pc = 0x1E3E90u;
            goto label_1e3e90;
        }
    }
    ctx->pc = 0x1E3E74u;
    // 0x1e3e74: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x1e3e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1e3e78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3e7c: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e3e7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e3e80: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e3e80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e3e84: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3E84u;
    {
        const bool branch_taken_0x1e3e84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3e84) {
            ctx->pc = 0x1E3E98u;
            goto label_1e3e98;
        }
    }
    ctx->pc = 0x1E3E8Cu;
    // 0x1e3e8c: 0x0  nop
    ctx->pc = 0x1e3e8cu;
    // NOP
label_1e3e90:
    // 0x1e3e90: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e3e90u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e3e94: 0x0  nop
    ctx->pc = 0x1e3e94u;
    // NOP
label_1e3e98:
    // 0x1e3e98: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x1e3e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1e3e9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3ea0: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e3ea0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e3ea4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E3EA4u;
    {
        const bool branch_taken_0x1e3ea4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3ea4) {
            ctx->pc = 0x1E3EB0u;
            goto label_1e3eb0;
        }
    }
    ctx->pc = 0x1E3EACu;
    // 0x1e3eac: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e3eacu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e3eb0:
    // 0x1e3eb0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1e3eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e3eb4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1e3eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e3eb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e3eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3ebc: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E3EBCu;
    SET_GPR_U32(ctx, 31, 0x1E3EC4u);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E3EBCu, 0x1E3EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3EC4u;
label_1e3ec4:
    // 0x1e3ec4: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1e3ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e3ec8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3ecc: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e3eccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e3ed0: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e3ed0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e3ed4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E3ED4u;
    {
        const bool branch_taken_0x1e3ed4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3ed4) {
            ctx->pc = 0x1E3EF8u;
            goto label_1e3ef8;
        }
    }
    ctx->pc = 0x1E3EDCu;
    // 0x1e3edc: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x1e3edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x1e3ee0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3ee4: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e3ee4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e3ee8: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e3ee8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e3eec: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3EECu;
    {
        const bool branch_taken_0x1e3eec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3eec) {
            ctx->pc = 0x1E3F00u;
            goto label_1e3f00;
        }
    }
    ctx->pc = 0x1E3EF4u;
    // 0x1e3ef4: 0x0  nop
    ctx->pc = 0x1e3ef4u;
    // NOP
label_1e3ef8:
    // 0x1e3ef8: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e3ef8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e3efc: 0x0  nop
    ctx->pc = 0x1e3efcu;
    // NOP
label_1e3f00:
    // 0x1e3f00: 0x27a30118  addiu       $v1, $sp, 0x118
    ctx->pc = 0x1e3f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x1e3f04: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e3f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3f08: 0x2c6159d9  sltiu       $at, $v1, 0x59D9
    ctx->pc = 0x1e3f08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e3f0c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E3F0Cu;
    {
        const bool branch_taken_0x1e3f0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3f0c) {
            ctx->pc = 0x1E3F18u;
            goto label_1e3f18;
        }
    }
    ctx->pc = 0x1E3F14u;
    // 0x1e3f14: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e3f14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e3f18:
    // 0x1e3f18: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e3f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e3f1c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1e3f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e3f20: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1e3f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e3f24: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x1e3f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e3f28: 0x72404628  paddub      $t0, $s2, $zero
    ctx->pc = 0x1e3f28u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e3f2c: 0xc077f60  jal         func_1DFD80
    ctx->pc = 0x1E3F2Cu;
    SET_GPR_U32(ctx, 31, 0x1E3F34u);
    ctx->pc = 0x1DFD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD80u, 0x1E3F2Cu, 0x1E3F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3F34u;
label_1e3f34:
    // 0x1e3f34: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e3f34u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e3f38:
    // 0x1e3f38: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x1e3f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e3f3c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e3f3cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1e3f40:
    // 0x1e3f40: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1e3f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1e3f44: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e3f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e3f48: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x1e3f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
    // 0x1e3f4c: 0x1460fe7a  bnez        $v1, . + 4 + (-0x186 << 2)
    ctx->pc = 0x1E3F4Cu;
    {
        const bool branch_taken_0x1e3f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3f4c) {
            ctx->pc = 0x1E3938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3938;
        }
    }
    ctx->pc = 0x1E3F54u;
    // 0x1e3f54: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1e3f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e3f58: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x1e3f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e3f5c: 0x17c30006  bne         $fp, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E3F5Cu;
    {
        const bool branch_taken_0x1e3f5c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3f5c) {
            ctx->pc = 0x1E3F78u;
            goto label_1e3f78;
        }
    }
    ctx->pc = 0x1E3F64u;
    // 0x1e3f64: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x1e3f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e3f68: 0x8c960024  lw          $s6, 0x24($a0)
    ctx->pc = 0x1e3f68u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1e3f6c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1e3f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1e3f70: 0x2c31824  and         $v1, $s6, $v1
    ctx->pc = 0x1e3f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
    // 0x1e3f74: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x1e3f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
label_1e3f78:
    // 0x1e3f78: 0x7bbf00a0  lq          $ra, 0xA0($sp)
    ctx->pc = 0x1e3f78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e3f7c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1e3f7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e3f80: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1e3f80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e3f84: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1e3f84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e3f88: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1e3f88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e3f8c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e3f8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e3f90: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e3f90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e3f94: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e3f94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3f98: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e3f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3f9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e3f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3fa0: 0x27bd01c0  addiu       $sp, $sp, 0x1C0
    ctx->pc = 0x1e3fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e3fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3FACu;
}
