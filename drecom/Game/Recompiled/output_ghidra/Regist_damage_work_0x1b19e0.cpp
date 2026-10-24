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

// Function: Regist_damage_work
// Address: 0x1b19e0 - 0x1b1b9c
void Regist_damage_work_0x1b19e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Regist_damage_work_0x1b19e0");
#endif

    switch (ctx->pc) {
        case 0x1b1a5cu: goto label_1b1a5c;
        case 0x1b1afcu: goto label_1b1afc;
        default: break;
    }

    ctx->pc = 0x1b19e0u;

    // 0x1b19e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b19e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b19e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b19e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b19e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b19e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b19ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b19ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b19f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b19f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b19f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b19f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b19f8: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1b19f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1b19fc: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1b19fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1b1a00: 0xafa60068  sw          $a2, 0x68($sp)
    ctx->pc = 0x1b1a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 6));
    // 0x1b1a04: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1b1a04u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b1a08: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1b1a08u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b1a0c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b1a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b1a10: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1b1a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1b1a14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1A14u;
    {
        const bool branch_taken_0x1b1a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a14) {
            ctx->pc = 0x1B1A20u;
            goto label_1b1a20;
        }
    }
    ctx->pc = 0x1B1A1Cu;
    // 0x1b1a1c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1b1a1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b1a20:
    // 0x1b1a20: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1b1a20u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b1a24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b1a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b1a28: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1b1a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1b1a2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1A2Cu;
    {
        const bool branch_taken_0x1b1a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a2c) {
            ctx->pc = 0x1B1A40u;
            goto label_1b1a40;
        }
    }
    ctx->pc = 0x1B1A34u;
    // 0x1b1a34: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1b1a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1b1a38: 0x8c34bb40  lw          $s4, -0x44C0($at)
    ctx->pc = 0x1b1a38u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x47BB40u));
    // 0x1b1a3c: 0x0  nop
    ctx->pc = 0x1b1a3cu;
    // NOP
label_1b1a40:
    // 0x1b1a40: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1b1a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b1a44: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1b1a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1b1a48: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x1b1a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x1b1a4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b1a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1a50: 0x24530008  addiu       $s3, $v0, 0x8
    ctx->pc = 0x1b1a50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1b1a54: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1B1A54u;
    {
        const bool branch_taken_0x1b1a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a54) {
            ctx->pc = 0x1B1AC0u;
            goto label_1b1ac0;
        }
    }
    ctx->pc = 0x1B1A5Cu;
label_1b1a5c:
    // 0x1b1a5c: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x1b1a5cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1b1a60: 0x24530004  addiu       $s3, $v0, 0x4
    ctx->pc = 0x1b1a60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b1a64: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1b1a64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1a68: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x1b1a68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1b1a6c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b1a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b1a70: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b1a70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b1a74: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B1A74u;
    {
        const bool branch_taken_0x1b1a74 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b1a74) {
            ctx->pc = 0x1B1AB8u;
            goto label_1b1ab8;
        }
    }
    ctx->pc = 0x1B1A7Cu;
    // 0x1b1a7c: 0x920210a8  lbu         $v0, 0x10A8($s0)
    ctx->pc = 0x1b1a7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4264)));
    // 0x1b1a80: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B1A80u;
    {
        const bool branch_taken_0x1b1a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a80) {
            ctx->pc = 0x1B1AB8u;
            goto label_1b1ab8;
        }
    }
    ctx->pc = 0x1B1A88u;
    // 0x1b1a88: 0x920211ee  lbu         $v0, 0x11EE($s0)
    ctx->pc = 0x1b1a88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4590)));
    // 0x1b1a8c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B1A8Cu;
    {
        const bool branch_taken_0x1b1a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a8c) {
            ctx->pc = 0x1B1AB8u;
            goto label_1b1ab8;
        }
    }
    ctx->pc = 0x1B1A94u;
    // 0x1b1a94: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1b1a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b1a98: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1A98u;
    {
        const bool branch_taken_0x1b1a98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b1a98) {
            ctx->pc = 0x1B1AB8u;
            goto label_1b1ab8;
        }
    }
    ctx->pc = 0x1B1AA0u;
    // 0x1b1aa0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1b1aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1b1aa4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1b1aa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b1aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1aac: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b1aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b1ab0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b1ab0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b1ab4: 0x0  nop
    ctx->pc = 0x1b1ab4u;
    // NOP
label_1b1ab8:
    // 0x1b1ab8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b1ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b1abc: 0x0  nop
    ctx->pc = 0x1b1abcu;
    // NOP
label_1b1ac0:
    // 0x1b1ac0: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x1b1ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1b1ac4: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1B1AC4u;
    {
        const bool branch_taken_0x1b1ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ac4) {
            ctx->pc = 0x1B1A5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1a5c;
        }
    }
    ctx->pc = 0x1B1ACCu;
    // 0x1b1acc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b1accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b1ad0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1b1ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1b1ad4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1AD4u;
    {
        const bool branch_taken_0x1b1ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ad4) {
            ctx->pc = 0x1B1AE8u;
            goto label_1b1ae8;
        }
    }
    ctx->pc = 0x1B1ADCu;
    // 0x1b1adc: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x1b1adcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1b1ae0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1B1AE0u;
    {
        const bool branch_taken_0x1b1ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ae0) {
            ctx->pc = 0x1B1B7Cu;
            goto label_1b1b7c;
        }
    }
    ctx->pc = 0x1B1AE8u;
label_1b1ae8:
    // 0x1b1ae8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1b1ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1b1aec: 0x2453f9e0  addiu       $s3, $v0, -0x620
    ctx->pc = 0x1b1aecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965728));
    // 0x1b1af0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1b1af0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b1af4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1B1AF4u;
    {
        const bool branch_taken_0x1b1af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1af4) {
            ctx->pc = 0x1B1B60u;
            goto label_1b1b60;
        }
    }
    ctx->pc = 0x1B1AFCu;
label_1b1afc:
    // 0x1b1afc: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x1b1afcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1b1b00: 0x24530004  addiu       $s3, $v0, 0x4
    ctx->pc = 0x1b1b00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b1b04: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1b1b04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1b08: 0x920211ee  lbu         $v0, 0x11EE($s0)
    ctx->pc = 0x1b1b08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4590)));
    // 0x1b1b0c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B1B0Cu;
    {
        const bool branch_taken_0x1b1b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1b0c) {
            ctx->pc = 0x1B1B58u;
            goto label_1b1b58;
        }
    }
    ctx->pc = 0x1B1B14u;
    // 0x1b1b14: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x1b1b14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1b1b18: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b1b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b1b1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b1b1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b1b20: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B1B20u;
    {
        const bool branch_taken_0x1b1b20 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b1b20) {
            ctx->pc = 0x1B1B58u;
            goto label_1b1b58;
        }
    }
    ctx->pc = 0x1B1B28u;
    // 0x1b1b28: 0x920210a8  lbu         $v0, 0x10A8($s0)
    ctx->pc = 0x1b1b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4264)));
    // 0x1b1b2c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B1B2Cu;
    {
        const bool branch_taken_0x1b1b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1b2c) {
            ctx->pc = 0x1B1B58u;
            goto label_1b1b58;
        }
    }
    ctx->pc = 0x1B1B34u;
    // 0x1b1b34: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1b1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b1b38: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1B38u;
    {
        const bool branch_taken_0x1b1b38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b1b38) {
            ctx->pc = 0x1B1B58u;
            goto label_1b1b58;
        }
    }
    ctx->pc = 0x1B1B40u;
    // 0x1b1b40: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1b1b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1b1b44: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1b1b48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1b4c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b1b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b1b50: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b1b50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b1b54: 0x0  nop
    ctx->pc = 0x1b1b54u;
    // NOP
label_1b1b58:
    // 0x1b1b58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b1b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b1b5c: 0x0  nop
    ctx->pc = 0x1b1b5cu;
    // NOP
label_1b1b60:
    // 0x1b1b60: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1b1b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1b1b64: 0x9022e650  lbu         $v0, -0x19B0($at)
    ctx->pc = 0x1b1b64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E650u));
    // 0x1b1b68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b1b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b1b6c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1b1b6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b1b70: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1B1B70u;
    {
        const bool branch_taken_0x1b1b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1b70) {
            ctx->pc = 0x1B1AFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1afc;
        }
    }
    ctx->pc = 0x1B1B78u;
    // 0x1b1b78: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x1b1b78u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1b1b7c:
    // 0x1b1b7c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b1b7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1b80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b1b80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1b84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b1b84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1b88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b1b88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1b8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b1b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1b90: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1b1b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b1b94: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1B9Cu;
}
