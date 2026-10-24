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

// Function: Ck_em_alive
// Address: 0x33d050 - 0x33d200
void Ck_em_alive_0x33d050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ck_em_alive_0x33d050");
#endif

    switch (ctx->pc) {
        case 0x33d0c0u: goto label_33d0c0;
        case 0x33d160u: goto label_33d160;
        default: break;
    }

    ctx->pc = 0x33d050u;

    // 0x33d050: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x33d050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x33d054: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x33d054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x33d058: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33d058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33d05c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33d05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33d060: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33d060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33d064: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33d064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33d068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33d068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33d06c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x33d06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x33d070: 0xa7a50068  sh          $a1, 0x68($sp)
    ctx->pc = 0x33d070u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 104), (uint16_t)GPR_U32(ctx, 5));
    // 0x33d074: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33d074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33d078: 0x2452bb48  addiu       $s2, $v0, -0x44B8
    ctx->pc = 0x33d078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949704));
    // 0x33d07c: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x33d07cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33d080: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x33d080u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33d084: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x33d084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x33d088: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x33d088u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x33d08c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33D08Cu;
    {
        const bool branch_taken_0x33d08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d08c) {
            ctx->pc = 0x33D0A0u;
            goto label_33d0a0;
        }
    }
    ctx->pc = 0x33D094u;
    // 0x33d094: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x33d094u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x33d098: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x33D098u;
    {
        const bool branch_taken_0x33d098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d098) {
            ctx->pc = 0x33D1DCu;
            goto label_33d1dc;
        }
    }
    ctx->pc = 0x33D0A0u;
label_33d0a0:
    // 0x33d0a0: 0x97a20068  lhu         $v0, 0x68($sp)
    ctx->pc = 0x33d0a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33d0a4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33d0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33d0a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x33d0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33d0ac: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x33D0ACu;
    {
        const bool branch_taken_0x33d0ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33d0ac) {
            ctx->pc = 0x33D154u;
            goto label_33d154;
        }
    }
    ctx->pc = 0x33D0B4u;
    // 0x33d0b4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x33d0b4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33d0b8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x33D0B8u;
    {
        const bool branch_taken_0x33d0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d0b8) {
            ctx->pc = 0x33D138u;
            goto label_33d138;
        }
    }
    ctx->pc = 0x33D0C0u;
label_33d0c0:
    // 0x33d0c0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x33d0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33d0c4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x33d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33d0c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33d0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33d0cc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x33D0CCu;
    {
        const bool branch_taken_0x33d0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d0cc) {
            ctx->pc = 0x33D130u;
            goto label_33d130;
        }
    }
    ctx->pc = 0x33D0D4u;
    // 0x33d0d4: 0x12150016  beq         $s0, $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x33D0D4u;
    {
        const bool branch_taken_0x33d0d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        if (branch_taken_0x33d0d4) {
            ctx->pc = 0x33D130u;
            goto label_33d130;
        }
    }
    ctx->pc = 0x33D0DCu;
    // 0x33d0dc: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x33d0dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x33d0e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33d0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33d0e4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x33d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33d0e8: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x33D0E8u;
    {
        const bool branch_taken_0x33d0e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33d0e8) {
            ctx->pc = 0x33D130u;
            goto label_33d130;
        }
    }
    ctx->pc = 0x33D0F0u;
    // 0x33d0f0: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x33d0f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x33d0f4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33d0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33d0f8: 0x97a20068  lhu         $v0, 0x68($sp)
    ctx->pc = 0x33d0f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33d0fc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33d0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33d100: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x33D100u;
    {
        const bool branch_taken_0x33d100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33d100) {
            ctx->pc = 0x33D130u;
            goto label_33d130;
        }
    }
    ctx->pc = 0x33D108u;
    // 0x33d108: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x33d108u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x33d10c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x33d10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33d110: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33d110u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x33d114: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x33d114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x33d118: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33d118u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x33d11c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x33d11cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33d120: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33D120u;
    {
        const bool branch_taken_0x33d120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d120) {
            ctx->pc = 0x33D130u;
            goto label_33d130;
        }
    }
    ctx->pc = 0x33D128u;
    // 0x33d128: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x33d128u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x33d12c: 0x0  nop
    ctx->pc = 0x33d12cu;
    // NOP
label_33d130:
    // 0x33d130: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x33d130u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x33d134: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33d134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_33d138:
    // 0x33d138: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x33d138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x33d13c: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x33d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x33d140: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x33d140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33d144: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x33D144u;
    {
        const bool branch_taken_0x33d144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d144) {
            ctx->pc = 0x33D0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d0c0;
        }
    }
    ctx->pc = 0x33D14Cu;
    // 0x33d14c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x33D14Cu;
    {
        const bool branch_taken_0x33d14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d14c) {
            ctx->pc = 0x33D1D8u;
            goto label_33d1d8;
        }
    }
    ctx->pc = 0x33D154u;
label_33d154:
    // 0x33d154: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x33d154u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33d158: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x33D158u;
    {
        const bool branch_taken_0x33d158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d158) {
            ctx->pc = 0x33D1C0u;
            goto label_33d1c0;
        }
    }
    ctx->pc = 0x33D160u;
label_33d160:
    // 0x33d160: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x33d160u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33d164: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x33d164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33d168: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33d168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33d16c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x33D16Cu;
    {
        const bool branch_taken_0x33d16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d16c) {
            ctx->pc = 0x33D1B8u;
            goto label_33d1b8;
        }
    }
    ctx->pc = 0x33D174u;
    // 0x33d174: 0x12150010  beq         $s0, $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x33D174u;
    {
        const bool branch_taken_0x33d174 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        if (branch_taken_0x33d174) {
            ctx->pc = 0x33D1B8u;
            goto label_33d1b8;
        }
    }
    ctx->pc = 0x33D17Cu;
    // 0x33d17c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x33d17cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x33d180: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33d180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33d184: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x33d184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33d188: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x33D188u;
    {
        const bool branch_taken_0x33d188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33d188) {
            ctx->pc = 0x33D1B8u;
            goto label_33d1b8;
        }
    }
    ctx->pc = 0x33D190u;
    // 0x33d190: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x33d190u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x33d194: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x33d194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33d198: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33d198u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x33d19c: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x33d19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x33d1a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33d1a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x33d1a4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x33d1a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33d1a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33D1A8u;
    {
        const bool branch_taken_0x33d1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d1a8) {
            ctx->pc = 0x33D1B8u;
            goto label_33d1b8;
        }
    }
    ctx->pc = 0x33D1B0u;
    // 0x33d1b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x33d1b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x33d1b4: 0x0  nop
    ctx->pc = 0x33d1b4u;
    // NOP
label_33d1b8:
    // 0x33d1b8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x33d1b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x33d1bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33d1bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_33d1c0:
    // 0x33d1c0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x33d1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x33d1c4: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x33d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x33d1c8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x33d1c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33d1cc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x33D1CCu;
    {
        const bool branch_taken_0x33d1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d1cc) {
            ctx->pc = 0x33D160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d160;
        }
    }
    ctx->pc = 0x33D1D4u;
    // 0x33d1d4: 0x0  nop
    ctx->pc = 0x33d1d4u;
    // NOP
label_33d1d8:
    // 0x33d1d8: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x33d1d8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_33d1dc:
    // 0x33d1dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33d1dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33d1e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33d1e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33d1e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33d1e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33d1e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33d1e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33d1ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33d1ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33d1f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33d1f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d1f4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x33d1f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33d1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x33D1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D200u;
}
