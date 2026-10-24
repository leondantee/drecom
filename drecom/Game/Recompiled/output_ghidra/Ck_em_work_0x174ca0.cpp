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

// Function: Ck_em_work
// Address: 0x174ca0 - 0x174ea4
void Ck_em_work_0x174ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ck_em_work_0x174ca0");
#endif

    switch (ctx->pc) {
        case 0x174d38u: goto label_174d38;
        case 0x174df0u: goto label_174df0;
        default: break;
    }

    ctx->pc = 0x174ca0u;

    // 0x174ca0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x174ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x174ca4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x174ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x174ca8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x174ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x174cac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x174cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x174cb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x174cb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x174cb8: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x174cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x174cbc: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x174cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x174cc0: 0xafa60068  sw          $a2, 0x68($sp)
    ctx->pc = 0x174cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 6));
    // 0x174cc4: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x174cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x174cc8: 0xafa80078  sw          $t0, 0x78($sp)
    ctx->pc = 0x174cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 8));
    // 0x174ccc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x174cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x174cd0: 0x2452bb48  addiu       $s2, $v0, -0x44B8
    ctx->pc = 0x174cd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949704));
    // 0x174cd4: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x174cd4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x174cd8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x174cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x174cdc: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x174cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x174ce0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174CE0u;
    {
        const bool branch_taken_0x174ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174ce0) {
            ctx->pc = 0x174CF4u;
            goto label_174cf4;
        }
    }
    ctx->pc = 0x174CE8u;
    // 0x174ce8: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x174ce8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x174cec: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x174CECu;
    {
        const bool branch_taken_0x174cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174cec) {
            ctx->pc = 0x174E84u;
            goto label_174e84;
        }
    }
    ctx->pc = 0x174CF4u;
label_174cf4:
    // 0x174cf4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x174cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x174cf8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x174cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x174cfc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x174cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x174d00: 0x24027530  addiu       $v0, $zero, 0x7530
    ctx->pc = 0x174d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
    // 0x174d04: 0x2a43c  dsll32      $s4, $v0, 16
    ctx->pc = 0x174d04u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 16));
    // 0x174d08: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x174d08u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x174d0c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x174d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x174d10: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x174D10u;
    {
        const bool branch_taken_0x174d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174d10) {
            ctx->pc = 0x174D1Cu;
            goto label_174d1c;
        }
    }
    ctx->pc = 0x174D18u;
    // 0x174d18: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x174d18u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_174d1c:
    // 0x174d1c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x174d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x174d20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x174d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x174d24: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x174D24u;
    {
        const bool branch_taken_0x174d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x174d24) {
            ctx->pc = 0x174DE4u;
            goto label_174de4;
        }
    }
    ctx->pc = 0x174D2Cu;
    // 0x174d2c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x174d2cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x174d30: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x174D30u;
    {
        const bool branch_taken_0x174d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174d30) {
            ctx->pc = 0x174DC8u;
            goto label_174dc8;
        }
    }
    ctx->pc = 0x174D38u;
label_174d38:
    // 0x174d38: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x174d38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x174d3c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x174d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x174d40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x174d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x174d44: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x174D44u;
    {
        const bool branch_taken_0x174d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174d44) {
            ctx->pc = 0x174DC0u;
            goto label_174dc0;
        }
    }
    ctx->pc = 0x174D4Cu;
    // 0x174d4c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x174d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x174d50: 0x1202001b  beq         $s0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x174D50u;
    {
        const bool branch_taken_0x174d50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x174d50) {
            ctx->pc = 0x174DC0u;
            goto label_174dc0;
        }
    }
    ctx->pc = 0x174D58u;
    // 0x174d58: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x174d58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x174d5c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x174d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x174d60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x174d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x174d64: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x174D64u;
    {
        const bool branch_taken_0x174d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x174d64) {
            ctx->pc = 0x174DC0u;
            goto label_174dc0;
        }
    }
    ctx->pc = 0x174D6Cu;
    // 0x174d6c: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x174d6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x174d70: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x174d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x174d74: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x174d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x174d78: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x174D78u;
    {
        const bool branch_taken_0x174d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x174d78) {
            ctx->pc = 0x174DC0u;
            goto label_174dc0;
        }
    }
    ctx->pc = 0x174D80u;
    // 0x174d80: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x174d80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x174d84: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x174d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x174d88: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x174d88u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x174d8c: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x174d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x174d90: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x174d90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x174d94: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x174d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x174d98: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x174D98u;
    {
        const bool branch_taken_0x174d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174d98) {
            ctx->pc = 0x174DC0u;
            goto label_174dc0;
        }
    }
    ctx->pc = 0x174DA0u;
    // 0x174da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174da4: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x174da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x174da8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x174da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x174dac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x174dacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x174db0: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x174db0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x174db4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x174db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x174db8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x174db8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x174dbc: 0x0  nop
    ctx->pc = 0x174dbcu;
    // NOP
label_174dc0:
    // 0x174dc0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x174dc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x174dc4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x174dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_174dc8:
    // 0x174dc8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x174dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x174dcc: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x174dccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x174dd0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x174dd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x174dd4: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x174DD4u;
    {
        const bool branch_taken_0x174dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174dd4) {
            ctx->pc = 0x174D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174d38;
        }
    }
    ctx->pc = 0x174DDCu;
    // 0x174ddc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x174DDCu;
    {
        const bool branch_taken_0x174ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174ddc) {
            ctx->pc = 0x174E80u;
            goto label_174e80;
        }
    }
    ctx->pc = 0x174DE4u;
label_174de4:
    // 0x174de4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x174de4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x174de8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x174DE8u;
    {
        const bool branch_taken_0x174de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174de8) {
            ctx->pc = 0x174E68u;
            goto label_174e68;
        }
    }
    ctx->pc = 0x174DF0u;
label_174df0:
    // 0x174df0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x174df0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x174df4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x174df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x174df8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x174df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x174dfc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x174DFCu;
    {
        const bool branch_taken_0x174dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174dfc) {
            ctx->pc = 0x174E60u;
            goto label_174e60;
        }
    }
    ctx->pc = 0x174E04u;
    // 0x174e04: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x174e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x174e08: 0x12020015  beq         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x174E08u;
    {
        const bool branch_taken_0x174e08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x174e08) {
            ctx->pc = 0x174E60u;
            goto label_174e60;
        }
    }
    ctx->pc = 0x174E10u;
    // 0x174e10: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x174e10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x174e14: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x174e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x174e18: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x174e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x174e1c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x174E1Cu;
    {
        const bool branch_taken_0x174e1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x174e1c) {
            ctx->pc = 0x174E60u;
            goto label_174e60;
        }
    }
    ctx->pc = 0x174E24u;
    // 0x174e24: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x174e24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x174e28: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x174e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x174e2c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x174e2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x174e30: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x174e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x174e34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x174e34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x174e38: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x174e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x174e3c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x174E3Cu;
    {
        const bool branch_taken_0x174e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174e3c) {
            ctx->pc = 0x174E60u;
            goto label_174e60;
        }
    }
    ctx->pc = 0x174E44u;
    // 0x174e44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174e48: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x174e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x174e4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x174e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x174e50: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x174e50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x174e54: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x174e54u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x174e58: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x174e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x174e5c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x174e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_174e60:
    // 0x174e60: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x174e60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x174e64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x174e64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_174e68:
    // 0x174e68: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x174e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x174e6c: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x174e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x174e70: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x174e70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x174e74: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x174E74u;
    {
        const bool branch_taken_0x174e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174e74) {
            ctx->pc = 0x174DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174df0;
        }
    }
    ctx->pc = 0x174E7Cu;
    // 0x174e7c: 0x0  nop
    ctx->pc = 0x174e7cu;
    // NOP
label_174e80:
    // 0x174e80: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x174e80u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_174e84:
    // 0x174e84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x174e84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174e88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x174e88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174e8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174e8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174e90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174e94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174e98: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x174e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x174e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x174E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174EA4u;
}
