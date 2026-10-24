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

// Function: Em04_R0_damage
// Address: 0x33edb0 - 0x33f094
void Em04_R0_damage_0x33edb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em04_R0_damage_0x33edb0");
#endif

    switch (ctx->pc) {
        case 0x33ee80u: goto label_33ee80;
        case 0x33ef28u: goto label_33ef28;
        case 0x33efc8u: goto label_33efc8;
        default: break;
    }

    ctx->pc = 0x33edb0u;

    // 0x33edb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x33edb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x33edb4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x33edb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x33edb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33edb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33edbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33edbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33edc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33edc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33edc4: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x33edc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x33edc8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33edc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33edcc: 0x946311f4  lhu         $v1, 0x11F4($v1)
    ctx->pc = 0x33edccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
    // 0x33edd0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33edd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33edd4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x33edd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33edd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33edd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33eddc: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x33eddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x33ede0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33ede0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33ede4: 0x8c631348  lw          $v1, 0x1348($v1)
    ctx->pc = 0x33ede4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4936)));
    // 0x33ede8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x33ede8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x33edec: 0x1460005d  bnez        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x33EDECu;
    {
        const bool branch_taken_0x33edec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33edec) {
            ctx->pc = 0x33EF64u;
            goto label_33ef64;
        }
    }
    ctx->pc = 0x33EDF4u;
    // 0x33edf4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33edf8: 0x2442a190  addiu       $v0, $v0, -0x5E70
    ctx->pc = 0x33edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943120));
    // 0x33edfc: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x33edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33ee00: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x33ee00u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3AA190u));
    // 0x33ee04: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x33ee04u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x33ee08: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33ee0c: 0x2442a1a0  addiu       $v0, $v0, -0x5E60
    ctx->pc = 0x33ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943136));
    // 0x33ee10: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x33ee10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33ee14: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x33ee14u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3AA1A0u));
    // 0x33ee18: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x33ee18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x33ee1c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x33ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33ee20: 0x944211f4  lhu         $v0, 0x11F4($v0)
    ctx->pc = 0x33ee20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
    // 0x33ee24: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33ee24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33ee28: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x33ee2c: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x33ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x33ee30: 0x402027  not         $a0, $v0
    ctx->pc = 0x33ee30u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x33ee34: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33ee34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33ee38: 0x8c62121c  lw          $v0, 0x121C($v1)
    ctx->pc = 0x33ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4636)));
    // 0x33ee3c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x33ee3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x33ee40: 0xac62121c  sw          $v0, 0x121C($v1)
    ctx->pc = 0x33ee40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 2));
    // 0x33ee44: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x33ee44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33ee48: 0x8c42121c  lw          $v0, 0x121C($v0)
    ctx->pc = 0x33ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4636)));
    // 0x33ee4c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x33EE4Cu;
    {
        const bool branch_taken_0x33ee4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ee4c) {
            ctx->pc = 0x33EEC0u;
            goto label_33eec0;
        }
    }
    ctx->pc = 0x33EE54u;
    // 0x33ee54: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x33ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33ee58: 0x904210a9  lbu         $v0, 0x10A9($v0)
    ctx->pc = 0x33ee58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4265)));
    // 0x33ee5c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33ee5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33ee60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x33ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33ee64: 0x944211f4  lhu         $v0, 0x11F4($v0)
    ctx->pc = 0x33ee64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
    // 0x33ee68: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33ee68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33ee6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33ee70: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x33EE70u;
    {
        const bool branch_taken_0x33ee70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33ee70) {
            ctx->pc = 0x33EEC0u;
            goto label_33eec0;
        }
    }
    ctx->pc = 0x33EE78u;
    // 0x33ee78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33EE78u;
    {
        const bool branch_taken_0x33ee78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ee78) {
            ctx->pc = 0x33EE90u;
            goto label_33ee90;
        }
    }
    ctx->pc = 0x33EE80u;
label_33ee80:
    // 0x33ee80: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33ee84: 0x906210a9  lbu         $v0, 0x10A9($v1)
    ctx->pc = 0x33ee84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4265)));
    // 0x33ee88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33ee8c: 0xa06210a9  sb          $v0, 0x10A9($v1)
    ctx->pc = 0x33ee8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4265), (uint8_t)GPR_U32(ctx, 2));
label_33ee90:
    // 0x33ee90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x33ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33ee94: 0x904210a9  lbu         $v0, 0x10A9($v0)
    ctx->pc = 0x33ee94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4265)));
    // 0x33ee98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33ee98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33ee9c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x33ee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33eea0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x33eea4: 0x621806  srlv        $v1, $v0, $v1
    ctx->pc = 0x33eea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x33eea8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x33eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33eeac: 0x8c42121c  lw          $v0, 0x121C($v0)
    ctx->pc = 0x33eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4636)));
    // 0x33eeb0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33eeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33eeb4: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x33EEB4u;
    {
        const bool branch_taken_0x33eeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33eeb4) {
            ctx->pc = 0x33EE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ee80;
        }
    }
    ctx->pc = 0x33EEBCu;
    // 0x33eebc: 0x0  nop
    ctx->pc = 0x33eebcu;
    // NOP
label_33eec0:
    // 0x33eec0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x33eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33eec4: 0x944211f4  lhu         $v0, 0x11F4($v0)
    ctx->pc = 0x33eec4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
    // 0x33eec8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33eec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33eecc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x33eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33eed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33eed4: 0x622004  sllv        $a0, $v0, $v1
    ctx->pc = 0x33eed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x33eed8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33eed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33eedc: 0x8c621348  lw          $v0, 0x1348($v1)
    ctx->pc = 0x33eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4936)));
    // 0x33eee0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x33eee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x33eee4: 0xac621348  sw          $v0, 0x1348($v1)
    ctx->pc = 0x33eee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4936), GPR_U32(ctx, 2));
    // 0x33eee8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x33eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33eeec: 0x944211f4  lhu         $v0, 0x11F4($v0)
    ctx->pc = 0x33eeecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
    // 0x33eef0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33eef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33eef4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33eef8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x33eef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x33eefc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x33eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33ef00: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x33ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x33ef04: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x33ef04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ef08: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x33ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x33ef0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33ef0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33ef10: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33ef10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33ef14: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x33ef14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33ef18: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x33ef18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33ef1c: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x33ef1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33ef20: 0xc0d5f88  jal         func_357E20
    ctx->pc = 0x33EF20u;
    SET_GPR_U32(ctx, 31, 0x33EF28u);
    ctx->pc = 0x357E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357E20u, 0x33EF20u, 0x33EF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EF28u;
label_33ef28:
    // 0x33ef28: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33ef2c: 0x946311f4  lhu         $v1, 0x11F4($v1)
    ctx->pc = 0x33ef2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
    // 0x33ef30: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33ef30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33ef34: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x33ef34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33ef38: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x33ef38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33ef3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33ef40: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x33ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x33ef44: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33ef48: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x33ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x33ef4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33ef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33ef50: 0x24700090  addiu       $s0, $v1, 0x90
    ctx->pc = 0x33ef50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x33ef54: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x33ef54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x33ef58: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x33ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x33ef5c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x33ef5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x33ef60: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x33ef60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_33ef64:
    // 0x33ef64: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33ef64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33ef68: 0x946311f4  lhu         $v1, 0x11F4($v1)
    ctx->pc = 0x33ef68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
    // 0x33ef6c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33ef6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33ef70: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x33ef70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33ef74: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x33ef74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33ef78: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x33ef78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33ef7c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x33ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33ef80: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33ef84: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x33ef84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x33ef88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33ef8c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x33ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x33ef90: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x33ef90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33ef94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33ef94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x33ef98: 0x8c231a50  lw          $v1, 0x1A50($at)
    ctx->pc = 0x33ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x33ef9c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x33ef9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x33efa0: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x33EFA0u;
    {
        const bool branch_taken_0x33efa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33efa0) {
            ctx->pc = 0x33EFDCu;
            goto label_33efdc;
        }
    }
    ctx->pc = 0x33EFA8u;
    // 0x33efa8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x33efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x33efac: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x33efacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x33efb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33efb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33efb4: 0x240405a4  addiu       $a0, $zero, 0x5A4
    ctx->pc = 0x33efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1444));
    // 0x33efb8: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x33efb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x33efbc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x33efbcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33efc0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x33EFC0u;
    SET_GPR_U32(ctx, 31, 0x33EFC8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x33EFC0u, 0x33EFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EFC8u;
label_33efc8:
    // 0x33efc8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33efc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x33efcc: 0x8c231a50  lw          $v1, 0x1A50($at)
    ctx->pc = 0x33efccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x33efd0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x33efd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x33efd4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33efd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x33efd8: 0xac231a50  sw          $v1, 0x1A50($at)
    ctx->pc = 0x33efd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A50u, _value); } while (0);
label_33efdc:
    // 0x33efdc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33efdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33efe0: 0x8c63121c  lw          $v1, 0x121C($v1)
    ctx->pc = 0x33efe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4636)));
    // 0x33efe4: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x33EFE4u;
    {
        const bool branch_taken_0x33efe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33efe4) {
            ctx->pc = 0x33F040u;
            goto label_33f040;
        }
    }
    ctx->pc = 0x33EFECu;
    // 0x33efec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33efecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33eff0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33eff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33eff4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x33eff4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33eff8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33effc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x33effcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f000: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33f000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33f004: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x33f004u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f008: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33f008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33f00c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x33f00cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f010: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33f010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33f014: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x33f014u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x33f018: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x33f018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33f01c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x33f01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x33f020: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x33f020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x33f024: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x33f024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x33f028: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x33f028u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x33f02c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x33f02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33f030: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33f030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33f034: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x33f034u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x33f038: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x33F038u;
    {
        const bool branch_taken_0x33f038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f038) {
            ctx->pc = 0x33F078u;
            goto label_33f078;
        }
    }
    ctx->pc = 0x33F040u;
label_33f040:
    // 0x33f040: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33f040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33f044: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x33f044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f048: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33f048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f04c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33f050: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x33f050u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33f054: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33f054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f058: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33f058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33f05c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x33f05cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x33f060: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33f060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33f064: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x33f064u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f068: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33f068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33f06c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x33f06cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f070: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33f070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33f074: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x33f074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_33f078:
    // 0x33f078: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x33f078u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33f07c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33f07cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33f080: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33f080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33f084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f088: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x33f088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33f08c: 0x3e00008  jr          $ra
    ctx->pc = 0x33F08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F094u;
}
