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

// Function: Em_morph_init
// Address: 0x1afd00 - 0x1b03ac
void Em_morph_init_0x1afd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_morph_init_0x1afd00");
#endif

    switch (ctx->pc) {
        case 0x1afd74u: goto label_1afd74;
        case 0x1afe10u: goto label_1afe10;
        case 0x1afe68u: goto label_1afe68;
        case 0x1afea0u: goto label_1afea0;
        case 0x1aff00u: goto label_1aff00;
        case 0x1aff38u: goto label_1aff38;
        case 0x1b0000u: goto label_1b0000;
        case 0x1b00b8u: goto label_1b00b8;
        case 0x1b01d4u: goto label_1b01d4;
        case 0x1b025cu: goto label_1b025c;
        case 0x1b02b8u: goto label_1b02b8;
        default: break;
    }

    ctx->pc = 0x1afd00u;

    // 0x1afd00: 0x27bdfb30  addiu       $sp, $sp, -0x4D0
    ctx->pc = 0x1afd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966064));
    // 0x1afd04: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1afd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1afd08: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1afd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1afd0c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1afd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1afd10: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1afd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1afd14: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1afd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1afd18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1afd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1afd1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1afd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1afd20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1afd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1afd24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1afd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1afd28: 0xafa404c8  sw          $a0, 0x4C8($sp)
    ctx->pc = 0x1afd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1224), GPR_U32(ctx, 4));
    // 0x1afd2c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1afd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1afd30: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x1afd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1afd34: 0x7060be28  paddub      $s7, $v1, $zero
    ctx->pc = 0x1afd34u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1afd38: 0x8ee30a68  lw          $v1, 0xA68($s7)
    ctx->pc = 0x1afd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1afd3c: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x1afd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1afd40: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1afd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1afd44: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x1afd44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1afd48: 0xaee50a68  sw          $a1, 0xA68($s7)
    ctx->pc = 0x1afd48u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 5));
    // 0x1afd4c: 0x8fa304c8  lw          $v1, 0x4C8($sp)
    ctx->pc = 0x1afd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1224)));
    // 0x1afd50: 0x8c64008c  lw          $a0, 0x8C($v1)
    ctx->pc = 0x1afd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x1afd54: 0xafa40498  sw          $a0, 0x498($sp)
    ctx->pc = 0x1afd54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1176), GPR_U32(ctx, 4));
    // 0x1afd58: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1afd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1afd5c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1afd5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1afd60: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1afd60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1afd64: 0xa7a304be  sh          $v1, 0x4BE($sp)
    ctx->pc = 0x1afd64u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 1214), (uint16_t)GPR_U32(ctx, 3));
    // 0x1afd68: 0xafa004a8  sw          $zero, 0x4A8($sp)
    ctx->pc = 0x1afd68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 0));
    // 0x1afd6c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1afd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1afd70: 0xafa304a0  sw          $v1, 0x4A0($sp)
    ctx->pc = 0x1afd70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 3));
label_1afd74:
    // 0x1afd74: 0x8fbe04a8  lw          $fp, 0x4A8($sp)
    ctx->pc = 0x1afd74u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1afd78: 0x1e2080  sll         $a0, $fp, 2
    ctx->pc = 0x1afd78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1afd7c: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1afd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1afd80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1afd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1afd84: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1afd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1afd88: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1afd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1afd8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1afd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1afd90: 0xafa304a4  sw          $v1, 0x4A4($sp)
    ctx->pc = 0x1afd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 3));
    // 0x1afd94: 0x8fa304a4  lw          $v1, 0x4A4($sp)
    ctx->pc = 0x1afd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
    // 0x1afd98: 0xafa3049c  sw          $v1, 0x49C($sp)
    ctx->pc = 0x1afd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1180), GPR_U32(ctx, 3));
    // 0x1afd9c: 0x8fa4049c  lw          $a0, 0x49C($sp)
    ctx->pc = 0x1afd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1180)));
    // 0x1afda0: 0x24960004  addiu       $s6, $a0, 0x4
    ctx->pc = 0x1afda0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1afda4: 0x8fa304c8  lw          $v1, 0x4C8($sp)
    ctx->pc = 0x1afda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1224)));
    // 0x1afda8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1afda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1afdac: 0xafa30494  sw          $v1, 0x494($sp)
    ctx->pc = 0x1afdacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 3));
    // 0x1afdb0: 0x8fa3049c  lw          $v1, 0x49C($sp)
    ctx->pc = 0x1afdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1180)));
    // 0x1afdb4: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1afdb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1afdb8: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x1afdb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1afdbc: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1afdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1afdc0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1afdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1afdc4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1afdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1afdc8: 0x8fa30494  lw          $v1, 0x494($sp)
    ctx->pc = 0x1afdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
    // 0x1afdcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1afdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1afdd0: 0xafa30494  sw          $v1, 0x494($sp)
    ctx->pc = 0x1afdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 3));
    // 0x1afdd4: 0x8fa30494  lw          $v1, 0x494($sp)
    ctx->pc = 0x1afdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
    // 0x1afdd8: 0x8c750034  lw          $s5, 0x34($v1)
    ctx->pc = 0x1afdd8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1afddc: 0xafa004b0  sw          $zero, 0x4B0($sp)
    ctx->pc = 0x1afddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 0));
    // 0x1afde0: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1afde0u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1afde4: 0x8fa3049c  lw          $v1, 0x49C($sp)
    ctx->pc = 0x1afde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1180)));
    // 0x1afde8: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1afde8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1afdec: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x1afdecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1afdf0: 0x8fa304a0  lw          $v1, 0x4A0($sp)
    ctx->pc = 0x1afdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x1afdf4: 0x10830082  beq         $a0, $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x1AFDF4u;
    {
        const bool branch_taken_0x1afdf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1afdf4) {
            ctx->pc = 0x1B0000u;
            goto label_1b0000;
        }
    }
    ctx->pc = 0x1AFDFCu;
    // 0x1afdfc: 0x8fa3049c  lw          $v1, 0x49C($sp)
    ctx->pc = 0x1afdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1180)));
    // 0x1afe00: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1afe00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1afe04: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x1afe04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1afe08: 0xafa304a0  sw          $v1, 0x4A0($sp)
    ctx->pc = 0x1afe08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 3));
    // 0x1afe0c: 0x0  nop
    ctx->pc = 0x1afe0cu;
    // NOP
label_1afe10:
    // 0x1afe10: 0x8fa304a8  lw          $v1, 0x4A8($sp)
    ctx->pc = 0x1afe10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1afe14: 0x1460005d  bnez        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x1AFE14u;
    {
        const bool branch_taken_0x1afe14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afe14) {
            ctx->pc = 0x1AFF8Cu;
            goto label_1aff8c;
        }
    }
    ctx->pc = 0x1AFE1Cu;
    // 0x1afe1c: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x1afe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1afe20: 0xaec3000c  sw          $v1, 0xC($s6)
    ctx->pc = 0x1afe20u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 3));
    // 0x1afe24: 0x8eb00028  lw          $s0, 0x28($s5)
    ctx->pc = 0x1afe24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1afe28: 0x8ef30a68  lw          $s3, 0xA68($s7)
    ctx->pc = 0x1afe28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1afe2c: 0x72609628  paddub      $s2, $s3, $zero
    ctx->pc = 0x1afe2cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1afe30: 0x8fa404b0  lw          $a0, 0x4B0($sp)
    ctx->pc = 0x1afe30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x1afe34: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1afe34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1afe38: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1afe38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1afe3c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFE3Cu;
    {
        const bool branch_taken_0x1afe3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afe3c) {
            ctx->pc = 0x1AFE48u;
            goto label_1afe48;
        }
    }
    ctx->pc = 0x1AFE44u;
    // 0x1afe44: 0xaed00008  sw          $s0, 0x8($s6)
    ctx->pc = 0x1afe44u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 16));
label_1afe48:
    // 0x1afe48: 0x73c01e28  paddub      $v1, $fp, $zero
    ctx->pc = 0x1afe48u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x1afe4c: 0x247e0001  addiu       $fp, $v1, 0x1
    ctx->pc = 0x1afe4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1afe50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1afe50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1afe54: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1afe54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1afe58: 0xac700090  sw          $s0, 0x90($v1)
    ctx->pc = 0x1afe58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 16));
    // 0x1afe5c: 0x8eb10020  lw          $s1, 0x20($s5)
    ctx->pc = 0x1afe5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1afe60: 0x0  nop
    ctx->pc = 0x1afe60u;
    // NOP
    // 0x1afe64: 0x0  nop
    ctx->pc = 0x1afe64u;
    // NOP
label_1afe68:
    // 0x1afe68: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1afe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1afe6c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1afe6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afe70: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1afe70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afe74: 0xe6620000  swc1        $f2, 0x0($s3)
    ctx->pc = 0x1afe74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1afe78: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x1afe78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1afe7c: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1afe7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1afe80: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1afe80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1afe84: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1afe84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1afe88: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1afe88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1afe8c: 0x1620fff6  bnez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1AFE8Cu;
    {
        const bool branch_taken_0x1afe8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afe8c) {
            ctx->pc = 0x1AFE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afe68;
        }
    }
    ctx->pc = 0x1AFE94u;
    // 0x1afe94: 0x8eb40018  lw          $s4, 0x18($s5)
    ctx->pc = 0x1afe94u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x1afe98: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x1afe98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1afe9c: 0xaeb20028  sw          $s2, 0x28($s5)
    ctx->pc = 0x1afe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 18));
label_1afea0:
    // 0x1afea0: 0xae920044  sw          $s2, 0x44($s4)
    ctx->pc = 0x1afea0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 18));
    // 0x1afea4: 0x26520240  addiu       $s2, $s2, 0x240
    ctx->pc = 0x1afea4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x1afea8: 0x269400a0  addiu       $s4, $s4, 0xA0
    ctx->pc = 0x1afea8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x1afeac: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1afeacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1afeb0: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AFEB0u;
    {
        const bool branch_taken_0x1afeb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afeb0) {
            ctx->pc = 0x1AFEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afea0;
        }
    }
    ctx->pc = 0x1AFEB8u;
    // 0x1afeb8: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x1afeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1afebc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1afebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1afec0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1afec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1afec4: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1afec4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1afec8: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1afec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1afecc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1afeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1afed0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1afed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1afed4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1afed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1afed8: 0x8ee30a68  lw          $v1, 0xA68($s7)
    ctx->pc = 0x1afed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1afedc: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x1afedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1afee0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1afee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1afee4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1afee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1afee8: 0xaee30a68  sw          $v1, 0xA68($s7)
    ctx->pc = 0x1afee8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 3));
    // 0x1afeec: 0x8eb00028  lw          $s0, 0x28($s5)
    ctx->pc = 0x1afeecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1afef0: 0x8ef30a68  lw          $s3, 0xA68($s7)
    ctx->pc = 0x1afef0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1afef4: 0x72609628  paddub      $s2, $s3, $zero
    ctx->pc = 0x1afef4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1afef8: 0x8eb10020  lw          $s1, 0x20($s5)
    ctx->pc = 0x1afef8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1afefc: 0x0  nop
    ctx->pc = 0x1afefcu;
    // NOP
label_1aff00:
    // 0x1aff00: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1aff00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1aff04: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1aff04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aff08: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1aff08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aff0c: 0xe6620000  swc1        $f2, 0x0($s3)
    ctx->pc = 0x1aff0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1aff10: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x1aff10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1aff14: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1aff14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1aff18: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1aff18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1aff1c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1aff1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1aff20: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1aff20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1aff24: 0x1620fff6  bnez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1AFF24u;
    {
        const bool branch_taken_0x1aff24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aff24) {
            ctx->pc = 0x1AFF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aff00;
        }
    }
    ctx->pc = 0x1AFF2Cu;
    // 0x1aff2c: 0x8eb4001c  lw          $s4, 0x1C($s5)
    ctx->pc = 0x1aff2cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1aff30: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x1aff30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1aff34: 0xaeb2002c  sw          $s2, 0x2C($s5)
    ctx->pc = 0x1aff34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 18));
label_1aff38:
    // 0x1aff38: 0xae920044  sw          $s2, 0x44($s4)
    ctx->pc = 0x1aff38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 18));
    // 0x1aff3c: 0x26520240  addiu       $s2, $s2, 0x240
    ctx->pc = 0x1aff3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x1aff40: 0x269400a0  addiu       $s4, $s4, 0xA0
    ctx->pc = 0x1aff40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x1aff44: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1aff44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1aff48: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AFF48u;
    {
        const bool branch_taken_0x1aff48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aff48) {
            ctx->pc = 0x1AFF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aff38;
        }
    }
    ctx->pc = 0x1AFF50u;
    // 0x1aff50: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x1aff50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1aff54: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1aff54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1aff58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1aff58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1aff5c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1aff5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aff60: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1aff60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1aff64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1aff64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1aff68: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1aff68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1aff6c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1aff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1aff70: 0x8ee30a68  lw          $v1, 0xA68($s7)
    ctx->pc = 0x1aff70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1aff74: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x1aff74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1aff78: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1aff78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1aff7c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1aff7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1aff80: 0xaee30a68  sw          $v1, 0xA68($s7)
    ctx->pc = 0x1aff80u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 3));
    // 0x1aff84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1AFF84u;
    {
        const bool branch_taken_0x1aff84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aff84) {
            ctx->pc = 0x1AFFB8u;
            goto label_1affb8;
        }
    }
    ctx->pc = 0x1AFF8Cu;
label_1aff8c:
    // 0x1aff8c: 0x8fa404b0  lw          $a0, 0x4B0($sp)
    ctx->pc = 0x1aff8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x1aff90: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1aff90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1aff94: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1aff94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1aff98: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFF98u;
    {
        const bool branch_taken_0x1aff98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aff98) {
            ctx->pc = 0x1AFFB0u;
            goto label_1affb0;
        }
    }
    ctx->pc = 0x1AFFA0u;
    // 0x1affa0: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x1affa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1affa4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1affa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1affa8: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x1affa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x1affac: 0xaec30008  sw          $v1, 0x8($s6)
    ctx->pc = 0x1affacu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 3));
label_1affb0:
    // 0x1affb0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1affb0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1affb4: 0x0  nop
    ctx->pc = 0x1affb4u;
    // NOP
label_1affb8:
    // 0x1affb8: 0x8fa404b0  lw          $a0, 0x4B0($sp)
    ctx->pc = 0x1affb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x1affbc: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1affbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1affc0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1affc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1affc4: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFFC4u;
    {
        const bool branch_taken_0x1affc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1affc4) {
            ctx->pc = 0x1AFFD0u;
            goto label_1affd0;
        }
    }
    ctx->pc = 0x1AFFCCu;
    // 0x1affcc: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1affccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_1affd0:
    // 0x1affd0: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1affd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1affd4: 0x8fa304b0  lw          $v1, 0x4B0($sp)
    ctx->pc = 0x1affd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x1affd8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1affd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1affdc: 0xafa404b0  sw          $a0, 0x4B0($sp)
    ctx->pc = 0x1affdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 4));
    // 0x1affe0: 0x8fa30494  lw          $v1, 0x494($sp)
    ctx->pc = 0x1affe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
    // 0x1affe4: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1affe4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1affe8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1affe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1affec: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1affecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1afff0: 0x1460ff87  bnez        $v1, . + 4 + (-0x79 << 2)
    ctx->pc = 0x1AFFF0u;
    {
        const bool branch_taken_0x1afff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afff0) {
            ctx->pc = 0x1AFE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afe10;
        }
    }
    ctx->pc = 0x1AFFF8u;
    // 0x1afff8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1AFFF8u;
    {
        const bool branch_taken_0x1afff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afff8) {
            ctx->pc = 0x1B0070u;
            goto label_1b0070;
        }
    }
    ctx->pc = 0x1B0000u;
label_1b0000:
    // 0x1b0000: 0x8fa404b0  lw          $a0, 0x4B0($sp)
    ctx->pc = 0x1b0000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x1b0004: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1b0004u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1b0008: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b0008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b000c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B000Cu;
    {
        const bool branch_taken_0x1b000c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b000c) {
            ctx->pc = 0x1B0028u;
            goto label_1b0028;
        }
    }
    ctx->pc = 0x1B0014u;
    // 0x1b0014: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x1b0014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1b0018: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1b0018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1b001c: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x1b001cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x1b0020: 0xaec30008  sw          $v1, 0x8($s6)
    ctx->pc = 0x1b0020u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 3));
    // 0x1b0024: 0x0  nop
    ctx->pc = 0x1b0024u;
    // NOP
label_1b0028:
    // 0x1b0028: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1b0028u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1b002c: 0x8fa404b0  lw          $a0, 0x4B0($sp)
    ctx->pc = 0x1b002cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x1b0030: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1b0030u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1b0034: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b0034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b0038: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0038u;
    {
        const bool branch_taken_0x1b0038 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b0038) {
            ctx->pc = 0x1B0048u;
            goto label_1b0048;
        }
    }
    ctx->pc = 0x1B0040u;
    // 0x1b0040: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1b0040u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1b0044: 0x0  nop
    ctx->pc = 0x1b0044u;
    // NOP
label_1b0048:
    // 0x1b0048: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1b0048u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1b004c: 0x8fa304b0  lw          $v1, 0x4B0($sp)
    ctx->pc = 0x1b004cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x1b0050: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b0050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b0054: 0xafa404b0  sw          $a0, 0x4B0($sp)
    ctx->pc = 0x1b0054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 4));
    // 0x1b0058: 0x8fa30494  lw          $v1, 0x494($sp)
    ctx->pc = 0x1b0058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
    // 0x1b005c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1b005cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1b0060: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b0060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b0064: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1b0064u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b0068: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1B0068u;
    {
        const bool branch_taken_0x1b0068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0068) {
            ctx->pc = 0x1B0000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0000;
        }
    }
    ctx->pc = 0x1B0070u;
label_1b0070:
    // 0x1b0070: 0x8fa304a8  lw          $v1, 0x4A8($sp)
    ctx->pc = 0x1b0070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1b0074: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b0074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b0078: 0xafa404a8  sw          $a0, 0x4A8($sp)
    ctx->pc = 0x1b0078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 4));
    // 0x1b007c: 0x97a304be  lhu         $v1, 0x4BE($sp)
    ctx->pc = 0x1b007cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 1214)));
    // 0x1b0080: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b0080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b0084: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1b0084u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b0088: 0x1460ff3a  bnez        $v1, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x1B0088u;
    {
        const bool branch_taken_0x1b0088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0088) {
            ctx->pc = 0x1AFD74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afd74;
        }
    }
    ctx->pc = 0x1B0090u;
    // 0x1b0090: 0x8ee30a68  lw          $v1, 0xA68($s7)
    ctx->pc = 0x1b0090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1b0094: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x1b0094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1b0098: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1b0098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1b009c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b009cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b00a0: 0xaee30a68  sw          $v1, 0xA68($s7)
    ctx->pc = 0x1b00a0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 3));
    // 0x1b00a4: 0x8ee30a68  lw          $v1, 0xA68($s7)
    ctx->pc = 0x1b00a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1b00a8: 0xafa304b8  sw          $v1, 0x4B8($sp)
    ctx->pc = 0x1b00a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1208), GPR_U32(ctx, 3));
    // 0x1b00ac: 0xafa004a8  sw          $zero, 0x4A8($sp)
    ctx->pc = 0x1b00acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 0));
    // 0x1b00b0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1B00B0u;
    {
        const bool branch_taken_0x1b00b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b00b0) {
            ctx->pc = 0x1B0180u;
            goto label_1b0180;
        }
    }
    ctx->pc = 0x1B00B8u;
label_1b00b8:
    // 0x1b00b8: 0x8ee60a68  lw          $a2, 0xA68($s7)
    ctx->pc = 0x1b00b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1b00bc: 0xafa604b4  sw          $a2, 0x4B4($sp)
    ctx->pc = 0x1b00bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 6));
    // 0x1b00c0: 0x8fa504c8  lw          $a1, 0x4C8($sp)
    ctx->pc = 0x1b00c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1224)));
    // 0x1b00c4: 0x8fa404a8  lw          $a0, 0x4A8($sp)
    ctx->pc = 0x1b00c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1b00c8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1b00c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1b00cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b00ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b00d0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1b00d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b00d4: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x1b00d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1b00d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b00d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b00dc: 0xac660050  sw          $a2, 0x50($v1)
    ctx->pc = 0x1b00dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 6));
    // 0x1b00e0: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b00e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b00e4: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x1b00e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b00e8: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b00e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b00ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1b00ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1b00f0: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b00f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b00f4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1b00f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1b00f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b00f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b00fc: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b00fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b0100: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x1b0100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1b0104: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b0104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0108: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b0108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b010c: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b010cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b0110: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1b0110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1b0114: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0118: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b0118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b011c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1b011cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1b0120: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b0120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b0124: 0xa0600019  sb          $zero, 0x19($v1)
    ctx->pc = 0x1b0124u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b0128: 0x300400ff  andi        $a0, $zero, 0xFF
    ctx->pc = 0x1b0128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x1b012c: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b012cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b0130: 0xa0640018  sb          $a0, 0x18($v1)
    ctx->pc = 0x1b0130u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b0134: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0138: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b0138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b013c: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x1b013cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x1b0140: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b0140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b0144: 0xa060001b  sb          $zero, 0x1B($v1)
    ctx->pc = 0x1b0144u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b0148: 0x300400ff  andi        $a0, $zero, 0xFF
    ctx->pc = 0x1b0148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x1b014c: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b014cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b0150: 0xa064001a  sb          $a0, 0x1A($v1)
    ctx->pc = 0x1b0150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b0154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0158: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b0158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b015c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1b015cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1b0160: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1b0160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1b0164: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b0164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b0168: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x1b0168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x1b016c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b016cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b0170: 0x8fa304a8  lw          $v1, 0x4A8($sp)
    ctx->pc = 0x1b0170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1b0174: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b0174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b0178: 0xafa304a8  sw          $v1, 0x4A8($sp)
    ctx->pc = 0x1b0178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 3));
    // 0x1b017c: 0x0  nop
    ctx->pc = 0x1b017cu;
    // NOP
label_1b0180:
    // 0x1b0180: 0x8fa404a8  lw          $a0, 0x4A8($sp)
    ctx->pc = 0x1b0180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1b0184: 0x8fa304c8  lw          $v1, 0x4C8($sp)
    ctx->pc = 0x1b0184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1224)));
    // 0x1b0188: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x1b0188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1b018c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1b018cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b0190: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b0190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b0194: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1b0194u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b0198: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1B0198u;
    {
        const bool branch_taken_0x1b0198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0198) {
            ctx->pc = 0x1B00B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b00b8;
        }
    }
    ctx->pc = 0x1B01A0u;
    // 0x1b01a0: 0x8ee30a68  lw          $v1, 0xA68($s7)
    ctx->pc = 0x1b01a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1b01a4: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x1b01a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1b01a8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1b01a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1b01ac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b01acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b01b0: 0xaee30a68  sw          $v1, 0xA68($s7)
    ctx->pc = 0x1b01b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 3));
    // 0x1b01b4: 0x8fa304c8  lw          $v1, 0x4C8($sp)
    ctx->pc = 0x1b01b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1224)));
    // 0x1b01b8: 0x8c63008c  lw          $v1, 0x8C($v1)
    ctx->pc = 0x1b01b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x1b01bc: 0xafa30498  sw          $v1, 0x498($sp)
    ctx->pc = 0x1b01bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1176), GPR_U32(ctx, 3));
    // 0x1b01c0: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1b01c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1b01c4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1b01c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1b01c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b01c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b01cc: 0xa7a304be  sh          $v1, 0x4BE($sp)
    ctx->pc = 0x1b01ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 1214), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b01d0: 0xafa004a8  sw          $zero, 0x4A8($sp)
    ctx->pc = 0x1b01d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 0));
label_1b01d4:
    // 0x1b01d4: 0x8fa304a8  lw          $v1, 0x4A8($sp)
    ctx->pc = 0x1b01d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1b01d8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1b01d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b01dc: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1b01dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1b01e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b01e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b01e4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1b01e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b01e8: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1b01e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1b01ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b01ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b01f0: 0xafa304a4  sw          $v1, 0x4A4($sp)
    ctx->pc = 0x1b01f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 3));
    // 0x1b01f4: 0x8fa304a4  lw          $v1, 0x4A4($sp)
    ctx->pc = 0x1b01f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
    // 0x1b01f8: 0xafa3049c  sw          $v1, 0x49C($sp)
    ctx->pc = 0x1b01f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1180), GPR_U32(ctx, 3));
    // 0x1b01fc: 0x8fa3049c  lw          $v1, 0x49C($sp)
    ctx->pc = 0x1b01fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1180)));
    // 0x1b0200: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1b0200u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1b0204: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x1b0204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1b0208: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1b0208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1b020c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b020cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b0210: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1b0210u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b0214: 0x8fa304b8  lw          $v1, 0x4B8($sp)
    ctx->pc = 0x1b0214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
    // 0x1b0218: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1b0218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b021c: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x1b021cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1b0220: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b0220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b0224: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x1b0224u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b0228: 0x8fa304a8  lw          $v1, 0x4A8($sp)
    ctx->pc = 0x1b0228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1b022c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b022cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b0230: 0xafa404a8  sw          $a0, 0x4A8($sp)
    ctx->pc = 0x1b0230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 4));
    // 0x1b0234: 0x97a304be  lhu         $v1, 0x4BE($sp)
    ctx->pc = 0x1b0234u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 1214)));
    // 0x1b0238: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b0238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b023c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1b023cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b0240: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1B0240u;
    {
        const bool branch_taken_0x1b0240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0240) {
            ctx->pc = 0x1B01D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b01d4;
        }
    }
    ctx->pc = 0x1B0248u;
    // 0x1b0248: 0x8fa304b8  lw          $v1, 0x4B8($sp)
    ctx->pc = 0x1b0248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
    // 0x1b024c: 0xafa304b4  sw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b024cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 3));
    // 0x1b0250: 0xafa004a8  sw          $zero, 0x4A8($sp)
    ctx->pc = 0x1b0250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 0));
    // 0x1b0254: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1B0254u;
    {
        const bool branch_taken_0x1b0254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0254) {
            ctx->pc = 0x1B0348u;
            goto label_1b0348;
        }
    }
    ctx->pc = 0x1B025Cu;
label_1b025c:
    // 0x1b025c: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b025cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b0260: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1b0260u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1b0264: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1B0264u;
    {
        const bool branch_taken_0x1b0264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0264) {
            ctx->pc = 0x1B0330u;
            goto label_1b0330;
        }
    }
    ctx->pc = 0x1B026Cu;
    // 0x1b026c: 0x8ee40a68  lw          $a0, 0xA68($s7)
    ctx->pc = 0x1b026cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1b0270: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b0270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b0274: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1b0274u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1b0278: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b0278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b027c: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1b027cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1b0280: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1b0280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b0284: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1b0284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1b0288: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b0288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b028c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b028cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b0290: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b0290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b0294: 0x8fa304c8  lw          $v1, 0x4C8($sp)
    ctx->pc = 0x1b0294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1224)));
    // 0x1b0298: 0x8c63008c  lw          $v1, 0x8C($v1)
    ctx->pc = 0x1b0298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x1b029c: 0xafa30498  sw          $v1, 0x498($sp)
    ctx->pc = 0x1b029cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1176), GPR_U32(ctx, 3));
    // 0x1b02a0: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1b02a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1b02a4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1b02a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1b02a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b02a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b02ac: 0xa7a304be  sh          $v1, 0x4BE($sp)
    ctx->pc = 0x1b02acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 1214), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b02b0: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1b02b0u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b02b4: 0xafa004ac  sw          $zero, 0x4AC($sp)
    ctx->pc = 0x1b02b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1196), GPR_U32(ctx, 0));
label_1b02b8:
    // 0x1b02b8: 0x1e2080  sll         $a0, $fp, 2
    ctx->pc = 0x1b02b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1b02bc: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1b02bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1b02c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b02c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b02c4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1b02c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b02c8: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1b02c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1b02cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b02ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b02d0: 0xafa304a4  sw          $v1, 0x4A4($sp)
    ctx->pc = 0x1b02d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 3));
    // 0x1b02d4: 0x8fa304a4  lw          $v1, 0x4A4($sp)
    ctx->pc = 0x1b02d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
    // 0x1b02d8: 0xafa3049c  sw          $v1, 0x49C($sp)
    ctx->pc = 0x1b02d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1180), GPR_U32(ctx, 3));
    // 0x1b02dc: 0x8fa3049c  lw          $v1, 0x49C($sp)
    ctx->pc = 0x1b02dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1180)));
    // 0x1b02e0: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1b02e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1b02e4: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x1b02e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1b02e8: 0x8fa304a8  lw          $v1, 0x4A8($sp)
    ctx->pc = 0x1b02e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1b02ec: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1B02ECu;
    {
        const bool branch_taken_0x1b02ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b02ec) {
            ctx->pc = 0x1B0318u;
            goto label_1b0318;
        }
    }
    ctx->pc = 0x1B02F4u;
    // 0x1b02f4: 0x33c500ff  andi        $a1, $fp, 0xFF
    ctx->pc = 0x1b02f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x1b02f8: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b02f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b02fc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1b02fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b0300: 0x8fa304ac  lw          $v1, 0x4AC($sp)
    ctx->pc = 0x1b0300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1196)));
    // 0x1b0304: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1b0304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b0308: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1b0308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1b030c: 0x8fa304ac  lw          $v1, 0x4AC($sp)
    ctx->pc = 0x1b030cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1196)));
    // 0x1b0310: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b0310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b0314: 0xafa304ac  sw          $v1, 0x4AC($sp)
    ctx->pc = 0x1b0314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1196), GPR_U32(ctx, 3));
label_1b0318:
    // 0x1b0318: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1b0318u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1b031c: 0x97a404be  lhu         $a0, 0x4BE($sp)
    ctx->pc = 0x1b031cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 1214)));
    // 0x1b0320: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1b0320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1b0324: 0x3c3182b  sltu        $v1, $fp, $v1
    ctx->pc = 0x1b0324u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b0328: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1B0328u;
    {
        const bool branch_taken_0x1b0328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0328) {
            ctx->pc = 0x1B02B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b02b8;
        }
    }
    ctx->pc = 0x1B0330u;
label_1b0330:
    // 0x1b0330: 0x8fa404b4  lw          $a0, 0x4B4($sp)
    ctx->pc = 0x1b0330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b0334: 0x24830024  addiu       $v1, $a0, 0x24
    ctx->pc = 0x1b0334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x1b0338: 0xafa304b4  sw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b0338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 3));
    // 0x1b033c: 0x8fa304a8  lw          $v1, 0x4A8($sp)
    ctx->pc = 0x1b033cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1b0340: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b0340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b0344: 0xafa304a8  sw          $v1, 0x4A8($sp)
    ctx->pc = 0x1b0344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 3));
label_1b0348:
    // 0x1b0348: 0x8fa404a8  lw          $a0, 0x4A8($sp)
    ctx->pc = 0x1b0348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1b034c: 0x8fb604c8  lw          $s6, 0x4C8($sp)
    ctx->pc = 0x1b034cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1224)));
    // 0x1b0350: 0x8ec3005c  lw          $v1, 0x5C($s6)
    ctx->pc = 0x1b0350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 92)));
    // 0x1b0354: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1b0354u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b0358: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b0358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b035c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1b035cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b0360: 0x1460ffbe  bnez        $v1, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1B0360u;
    {
        const bool branch_taken_0x1b0360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0360) {
            ctx->pc = 0x1B025Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b025c;
        }
    }
    ctx->pc = 0x1B0368u;
    // 0x1b0368: 0x8ee30a68  lw          $v1, 0xA68($s7)
    ctx->pc = 0x1b0368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1b036c: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x1b036cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1b0370: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1b0370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1b0374: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1b0374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b0378: 0xaee40a68  sw          $a0, 0xA68($s7)
    ctx->pc = 0x1b0378u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 4));
    // 0x1b037c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b037cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b0380: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b0380u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b0384: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b0384u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b0388: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b0388u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b038c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b038cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0390: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b0390u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0394: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b0394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0398: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b0398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b039c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b039cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b03a0: 0x27bd04d0  addiu       $sp, $sp, 0x4D0
    ctx->pc = 0x1b03a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    // 0x1b03a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B03A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B03A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B03ACu;
}
