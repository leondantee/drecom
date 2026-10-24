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

// Function: Em10_parts_bomb_02
// Address: 0x138a40 - 0x1392ac
void Em10_parts_bomb_02_0x138a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_parts_bomb_02_0x138a40");
#endif

    switch (ctx->pc) {
        case 0x138abcu: goto label_138abc;
        case 0x138b38u: goto label_138b38;
        case 0x138bc0u: goto label_138bc0;
        case 0x138c48u: goto label_138c48;
        case 0x138c68u: goto label_138c68;
        case 0x138c88u: goto label_138c88;
        case 0x138ca8u: goto label_138ca8;
        case 0x138cc8u: goto label_138cc8;
        case 0x138ce8u: goto label_138ce8;
        case 0x138d54u: goto label_138d54;
        case 0x138da0u: goto label_138da0;
        case 0x138dbcu: goto label_138dbc;
        case 0x138dd0u: goto label_138dd0;
        case 0x138de4u: goto label_138de4;
        case 0x138e54u: goto label_138e54;
        case 0x138e78u: goto label_138e78;
        case 0x138ec4u: goto label_138ec4;
        case 0x138ee0u: goto label_138ee0;
        case 0x138ef4u: goto label_138ef4;
        case 0x138f08u: goto label_138f08;
        case 0x138f74u: goto label_138f74;
        case 0x138f98u: goto label_138f98;
        case 0x138fe4u: goto label_138fe4;
        case 0x139000u: goto label_139000;
        case 0x139014u: goto label_139014;
        case 0x139028u: goto label_139028;
        case 0x139094u: goto label_139094;
        case 0x13912cu: goto label_13912c;
        case 0x139178u: goto label_139178;
        case 0x1391c8u: goto label_1391c8;
        default: break;
    }

    ctx->pc = 0x138a40u;

    // 0x138a40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x138a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x138a44: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x138a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x138a48: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x138a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x138a4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x138a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x138a50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x138a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x138a54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x138a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x138a58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x138a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x138a5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x138a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x138a60: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x138a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x138a64: 0x8fb00088  lw          $s0, 0x88($sp)
    ctx->pc = 0x138a64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138a68: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x138a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x138a6c: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x138a6cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x138a70: 0x9265009a  lbu         $a1, 0x9A($s3)
    ctx->pc = 0x138a70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
    // 0x138a74: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x138a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x138a78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x138a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x138a7c: 0x108301e6  beq         $a0, $v1, . + 4 + (0x1E6 << 2)
    ctx->pc = 0x138A7Cu;
    {
        const bool branch_taken_0x138a7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x138a7c) {
            ctx->pc = 0x139218u;
            goto label_139218;
        }
    }
    ctx->pc = 0x138A84u;
    // 0x138a84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x138a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x138a88: 0x108301a5  beq         $a0, $v1, . + 4 + (0x1A5 << 2)
    ctx->pc = 0x138A88u;
    {
        const bool branch_taken_0x138a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x138a88) {
            ctx->pc = 0x139120u;
            goto label_139120;
        }
    }
    ctx->pc = 0x138A90u;
    // 0x138a90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x138a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138a94: 0x108300a6  beq         $a0, $v1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x138A94u;
    {
        const bool branch_taken_0x138a94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x138a94) {
            ctx->pc = 0x138D30u;
            goto label_138d30;
        }
    }
    ctx->pc = 0x138A9Cu;
    // 0x138a9c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x138A9Cu;
    {
        const bool branch_taken_0x138a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x138a9c) {
            ctx->pc = 0x138AACu;
            goto label_138aac;
        }
    }
    ctx->pc = 0x138AA4u;
    // 0x138aa4: 0x100001dc  b           . + 4 + (0x1DC << 2)
    ctx->pc = 0x138AA4u;
    {
        const bool branch_taken_0x138aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138aa4) {
            ctx->pc = 0x139218u;
            goto label_139218;
        }
    }
    ctx->pc = 0x138AACu;
label_138aac:
    // 0x138aac: 0xa260009c  sb          $zero, 0x9C($s3)
    ctx->pc = 0x138aacu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 156), (uint8_t)GPR_U32(ctx, 0));
    // 0x138ab0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138ab0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138ab4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x138AB4u;
    {
        const bool branch_taken_0x138ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138ab4) {
            ctx->pc = 0x138B08u;
            goto label_138b08;
        }
    }
    ctx->pc = 0x138ABCu;
label_138abc:
    // 0x138abc: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x138abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138ac0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x138ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x138ac4: 0x24634ec8  addiu       $v1, $v1, 0x4EC8
    ctx->pc = 0x138ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20168));
    // 0x138ac8: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x138ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x138acc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x138accu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x138ad0: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x138ad0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x138ad4: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x138ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x138ad8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x138ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x138adc: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x138adcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x138ae0: 0x8cc30058  lw          $v1, 0x58($a2)
    ctx->pc = 0x138ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x138ae4: 0x659021  addu        $s2, $v1, $a1
    ctx->pc = 0x138ae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x138ae8: 0x8e540034  lw          $s4, 0x34($s2)
    ctx->pc = 0x138ae8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x138aec: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x138aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x138af0: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x138af0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x138af4: 0xae840024  sw          $a0, 0x24($s4)
    ctx->pc = 0x138af4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 4));
    // 0x138af8: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x138af8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x138afc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x138afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138b00: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x138b00u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x138b04: 0x0  nop
    ctx->pc = 0x138b04u;
    // NOP
label_138b08:
    // 0x138b08: 0x2a03000b  slti        $v1, $s0, 0xB
    ctx->pc = 0x138b08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x138b0c: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x138B0Cu;
    {
        const bool branch_taken_0x138b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138b0c) {
            ctx->pc = 0x138ABCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138abc;
        }
    }
    ctx->pc = 0x138B14u;
    // 0x138b14: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x138b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138b18: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x138b18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x138b1c: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x138b1cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x138b20: 0x32500020  andi        $s0, $s2, 0x20
    ctx->pc = 0x138b20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x138b24: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x138B24u;
    {
        const bool branch_taken_0x138b24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x138b24) {
            ctx->pc = 0x138B94u;
            goto label_138b94;
        }
    }
    ctx->pc = 0x138B2Cu;
    // 0x138b2c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138b2cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138b30: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x138B30u;
    {
        const bool branch_taken_0x138b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138b30) {
            ctx->pc = 0x138B80u;
            goto label_138b80;
        }
    }
    ctx->pc = 0x138B38u;
label_138b38:
    // 0x138b38: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x138b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138b3c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x138b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x138b40: 0x24634ee0  addiu       $v1, $v1, 0x4EE0
    ctx->pc = 0x138b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20192));
    // 0x138b44: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x138b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x138b48: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x138b48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138b4c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x138b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x138b50: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x138b50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x138b54: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x138b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x138b58: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x138b58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x138b5c: 0x8cc30058  lw          $v1, 0x58($a2)
    ctx->pc = 0x138b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x138b60: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x138b60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x138b64: 0x8e540034  lw          $s4, 0x34($s2)
    ctx->pc = 0x138b64u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x138b68: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x138b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x138b6c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x138b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x138b70: 0xae830024  sw          $v1, 0x24($s4)
    ctx->pc = 0x138b70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 3));
    // 0x138b74: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x138b74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x138b78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x138b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138b7c: 0x0  nop
    ctx->pc = 0x138b7cu;
    // NOP
label_138b80:
    // 0x138b80: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x138b80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138b84: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x138B84u;
    {
        const bool branch_taken_0x138b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138b84) {
            ctx->pc = 0x138B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138b38;
        }
    }
    ctx->pc = 0x138B8Cu;
    // 0x138b8c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x138B8Cu;
    {
        const bool branch_taken_0x138b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138b8c) {
            ctx->pc = 0x138C18u;
            goto label_138c18;
        }
    }
    ctx->pc = 0x138B94u;
label_138b94:
    // 0x138b94: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x138b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x138b98: 0x30720008  andi        $s2, $v1, 0x8
    ctx->pc = 0x138b98u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x138b9c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x138B9Cu;
    {
        const bool branch_taken_0x138b9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x138b9c) {
            ctx->pc = 0x138BB0u;
            goto label_138bb0;
        }
    }
    ctx->pc = 0x138BA4u;
    // 0x138ba4: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x138ba4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x138ba8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x138BA8u;
    {
        const bool branch_taken_0x138ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138ba8) {
            ctx->pc = 0x138BB4u;
            goto label_138bb4;
        }
    }
    ctx->pc = 0x138BB0u;
label_138bb0:
    // 0x138bb0: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x138bb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_138bb4:
    // 0x138bb4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138bb4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138bb8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x138BB8u;
    {
        const bool branch_taken_0x138bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138bb8) {
            ctx->pc = 0x138C08u;
            goto label_138c08;
        }
    }
    ctx->pc = 0x138BC0u;
label_138bc0:
    // 0x138bc0: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x138bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138bc4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x138bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x138bc8: 0x24634ed8  addiu       $v1, $v1, 0x4ED8
    ctx->pc = 0x138bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20184));
    // 0x138bcc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x138bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x138bd0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x138bd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138bd4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x138bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x138bd8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x138bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x138bdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x138bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x138be0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x138be0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x138be4: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x138be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x138be8: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x138be8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x138bec: 0x8e540034  lw          $s4, 0x34($s2)
    ctx->pc = 0x138becu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x138bf0: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x138bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x138bf4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x138bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x138bf8: 0xae830024  sw          $v1, 0x24($s4)
    ctx->pc = 0x138bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 3));
    // 0x138bfc: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x138bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x138c00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x138c00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138c04: 0x0  nop
    ctx->pc = 0x138c04u;
    // NOP
label_138c08:
    // 0x138c08: 0x215182a  slt         $v1, $s0, $s5
    ctx->pc = 0x138c08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x138c0c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x138C0Cu;
    {
        const bool branch_taken_0x138c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138c0c) {
            ctx->pc = 0x138BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138bc0;
        }
    }
    ctx->pc = 0x138C14u;
    // 0x138c14: 0x0  nop
    ctx->pc = 0x138c14u;
    // NOP
label_138c18:
    // 0x138c18: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x138c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138c1c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x138c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x138c20: 0xa0600f30  sb          $zero, 0xF30($v1)
    ctx->pc = 0x138c20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3888), (uint8_t)GPR_U32(ctx, 0));
    // 0x138c24: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x138c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138c28: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x138c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x138c2c: 0xa0600ea0  sb          $zero, 0xEA0($v1)
    ctx->pc = 0x138c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3744), (uint8_t)GPR_U32(ctx, 0));
    // 0x138c30: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x138c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138c34: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x138c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x138c38: 0xa0601170  sb          $zero, 0x1170($v1)
    ctx->pc = 0x138c38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4464), (uint8_t)GPR_U32(ctx, 0));
    // 0x138c3c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138c3cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138c40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x138C40u;
    {
        const bool branch_taken_0x138c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138c40) {
            ctx->pc = 0x138C70u;
            goto label_138c70;
        }
    }
    ctx->pc = 0x138C48u;
label_138c48:
    // 0x138c48: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x138c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x138c4c: 0x24424e98  addiu       $v0, $v0, 0x4E98
    ctx->pc = 0x138c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20120));
    // 0x138c50: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x138c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x138c54: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x138c54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138c58: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x138c58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x138c5c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x138c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138c60: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x138C60u;
    SET_GPR_U32(ctx, 31, 0x138C68u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x138C60u, 0x138C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C68u;
label_138c68:
    // 0x138c68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x138c68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138c6c: 0x0  nop
    ctx->pc = 0x138c6cu;
    // NOP
label_138c70:
    // 0x138c70: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x138c70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138c74: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x138C74u;
    {
        const bool branch_taken_0x138c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138c74) {
            ctx->pc = 0x138C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138c48;
        }
    }
    ctx->pc = 0x138C7Cu;
    // 0x138c7c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138c7cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138c80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x138C80u;
    {
        const bool branch_taken_0x138c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138c80) {
            ctx->pc = 0x138CB0u;
            goto label_138cb0;
        }
    }
    ctx->pc = 0x138C88u;
label_138c88:
    // 0x138c88: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x138c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x138c8c: 0x24424ea0  addiu       $v0, $v0, 0x4EA0
    ctx->pc = 0x138c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20128));
    // 0x138c90: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x138c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x138c94: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x138c94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138c98: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x138c98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x138c9c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x138c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138ca0: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x138CA0u;
    SET_GPR_U32(ctx, 31, 0x138CA8u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x138CA0u, 0x138CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138CA8u;
label_138ca8:
    // 0x138ca8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x138ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138cac: 0x0  nop
    ctx->pc = 0x138cacu;
    // NOP
label_138cb0:
    // 0x138cb0: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x138cb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138cb4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x138CB4u;
    {
        const bool branch_taken_0x138cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138cb4) {
            ctx->pc = 0x138C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138c88;
        }
    }
    ctx->pc = 0x138CBCu;
    // 0x138cbc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138cbcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138cc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x138CC0u;
    {
        const bool branch_taken_0x138cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138cc0) {
            ctx->pc = 0x138CF0u;
            goto label_138cf0;
        }
    }
    ctx->pc = 0x138CC8u;
label_138cc8:
    // 0x138cc8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x138cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x138ccc: 0x24424ea8  addiu       $v0, $v0, 0x4EA8
    ctx->pc = 0x138cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20136));
    // 0x138cd0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x138cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x138cd4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x138cd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138cd8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x138cd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x138cdc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x138cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138ce0: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x138CE0u;
    SET_GPR_U32(ctx, 31, 0x138CE8u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x138CE0u, 0x138CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138CE8u;
label_138ce8:
    // 0x138ce8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x138ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138cec: 0x0  nop
    ctx->pc = 0x138cecu;
    // NOP
label_138cf0:
    // 0x138cf0: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x138cf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138cf4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x138CF4u;
    {
        const bool branch_taken_0x138cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138cf4) {
            ctx->pc = 0x138CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138cc8;
        }
    }
    ctx->pc = 0x138CFCu;
    // 0x138cfc: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x138cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x138d00: 0xa663008e  sh          $v1, 0x8E($s3)
    ctx->pc = 0x138d00u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 142), (uint16_t)GPR_U32(ctx, 3));
    // 0x138d04: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x138d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x138d08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x138d08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138d0c: 0x0  nop
    ctx->pc = 0x138d0cu;
    // NOP
    // 0x138d10: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x138d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x138d14: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x138d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x138d18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x138d18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138d1c: 0x0  nop
    ctx->pc = 0x138d1cu;
    // NOP
    // 0x138d20: 0xe6600048  swc1        $f0, 0x48($s3)
    ctx->pc = 0x138d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
    // 0x138d24: 0x9263009a  lbu         $v1, 0x9A($s3)
    ctx->pc = 0x138d24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
    // 0x138d28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x138d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x138d2c: 0xa263009a  sb          $v1, 0x9A($s3)
    ctx->pc = 0x138d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 3));
label_138d30:
    // 0x138d30: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x138d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138d34: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x138d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x138d38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x138d38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138d3c: 0x0  nop
    ctx->pc = 0x138d3cu;
    // NOP
    // 0x138d40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x138d40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x138d44: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x138d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x138d48: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138d48u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138d4c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x138D4Cu;
    {
        const bool branch_taken_0x138d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138d4c) {
            ctx->pc = 0x138E60u;
            goto label_138e60;
        }
    }
    ctx->pc = 0x138D54u;
label_138d54:
    // 0x138d54: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x138d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138d58: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x138d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x138d5c: 0x24424e98  addiu       $v0, $v0, 0x4E98
    ctx->pc = 0x138d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20120));
    // 0x138d60: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x138d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x138d64: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x138d64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138d68: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x138d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x138d6c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x138d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138d70: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x138d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138d74: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x138d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138d78: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x138d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x138d7c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x138d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x138d80: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x138d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x138d84: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x138d84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138d88: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x138d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138d8c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x138d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138d90: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x138d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138d94: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x138d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x138d98: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x138D98u;
    SET_GPR_U32(ctx, 31, 0x138DA0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x138D98u, 0x138DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138DA0u;
label_138da0:
    // 0x138da0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138da0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138da4: 0x0  nop
    ctx->pc = 0x138da4u;
    // NOP
    // 0x138da8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x138da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x138dac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x138dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138db0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x138db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138db4: 0xc040c24  jal         func_103090
    ctx->pc = 0x138DB4u;
    SET_GPR_U32(ctx, 31, 0x138DBCu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x138DBCu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x138DBCu) { return; }
    ctx->pc = 0x138DBCu;
label_138dbc:
    // 0x138dbc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x138dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138dc0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x138dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138dc4: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x138dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x138dc8: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x138DC8u;
    SET_GPR_U32(ctx, 31, 0x138DD0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x138DD0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x138DD0u) { return; }
    ctx->pc = 0x138DD0u;
label_138dd0:
    // 0x138dd0: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x138dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138dd4: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x138dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138dd8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x138dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138ddc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x138DDCu;
    SET_GPR_U32(ctx, 31, 0x138DE4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x138DDCu, 0x138DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138DE4u;
label_138de4:
    // 0x138de4: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x138de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138de8: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x138de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138dec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x138decu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x138df0: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x138df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x138df4: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x138df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138df8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x138df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138dfc: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x138dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138e00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x138e00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138e04: 0x0  nop
    ctx->pc = 0x138e04u;
    // NOP
    // 0x138e08: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x138E08u;
    {
        const bool branch_taken_0x138e08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x138e08) {
            ctx->pc = 0x138E20u;
            goto label_138e20;
        }
    }
    ctx->pc = 0x138E10u;
    // 0x138e10: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x138e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138e14: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x138e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138e18: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x138e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x138e1c: 0x0  nop
    ctx->pc = 0x138e1cu;
    // NOP
label_138e20:
    // 0x138e20: 0x8663008e  lh          $v1, 0x8E($s3)
    ctx->pc = 0x138e20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
    // 0x138e24: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x138e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x138e28: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x138e28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x138e2c: 0x28610015  slti        $at, $v1, 0x15
    ctx->pc = 0x138e2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x138e30: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x138E30u;
    {
        const bool branch_taken_0x138e30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x138e30) {
            ctx->pc = 0x138E58u;
            goto label_138e58;
        }
    }
    ctx->pc = 0x138E38u;
    // 0x138e38: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x138e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x138e3c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x138e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x138e40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x138e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138e44: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x138e44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x138e48: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x138e48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x138e4c: 0xc06776c  jal         func_19DDB0
    ctx->pc = 0x138E4Cu;
    SET_GPR_U32(ctx, 31, 0x138E54u);
    ctx->pc = 0x19DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DDB0u, 0x138E4Cu, 0x138E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E54u;
label_138e54:
    // 0x138e54: 0x0  nop
    ctx->pc = 0x138e54u;
    // NOP
label_138e58:
    // 0x138e58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x138e58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138e5c: 0x0  nop
    ctx->pc = 0x138e5cu;
    // NOP
label_138e60:
    // 0x138e60: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x138e60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138e64: 0x1460ffbb  bnez        $v1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x138E64u;
    {
        const bool branch_taken_0x138e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138e64) {
            ctx->pc = 0x138D54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138d54;
        }
    }
    ctx->pc = 0x138E6Cu;
    // 0x138e6c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138e6cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138e70: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x138E70u;
    {
        const bool branch_taken_0x138e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138e70) {
            ctx->pc = 0x138F80u;
            goto label_138f80;
        }
    }
    ctx->pc = 0x138E78u;
label_138e78:
    // 0x138e78: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x138e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138e7c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x138e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x138e80: 0x24424ea0  addiu       $v0, $v0, 0x4EA0
    ctx->pc = 0x138e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20128));
    // 0x138e84: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x138e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x138e88: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x138e88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138e8c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x138e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x138e90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x138e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138e94: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x138e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138e98: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x138e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138e9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x138e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x138ea0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x138ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x138ea4: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x138ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x138ea8: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x138ea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138eac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x138eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138eb0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x138eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138eb4: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x138eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138eb8: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x138eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x138ebc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x138EBCu;
    SET_GPR_U32(ctx, 31, 0x138EC4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x138EBCu, 0x138EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138EC4u;
label_138ec4:
    // 0x138ec4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138ec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138ec8: 0x0  nop
    ctx->pc = 0x138ec8u;
    // NOP
    // 0x138ecc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x138eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x138ed0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x138ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138ed4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x138ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138ed8: 0xc040c24  jal         func_103090
    ctx->pc = 0x138ED8u;
    SET_GPR_U32(ctx, 31, 0x138EE0u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x138EE0u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x138EE0u) { return; }
    ctx->pc = 0x138EE0u;
label_138ee0:
    // 0x138ee0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x138ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138ee4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x138ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138ee8: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x138ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x138eec: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x138EECu;
    SET_GPR_U32(ctx, 31, 0x138EF4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x138EF4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x138EF4u) { return; }
    ctx->pc = 0x138EF4u;
label_138ef4:
    // 0x138ef4: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x138ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138ef8: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x138ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138efc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x138efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138f00: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x138F00u;
    SET_GPR_U32(ctx, 31, 0x138F08u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x138F00u, 0x138F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138F08u;
label_138f08:
    // 0x138f08: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x138f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138f0c: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x138f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138f10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x138f10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x138f14: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x138f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x138f18: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x138f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138f1c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x138f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138f20: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x138f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138f24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x138f24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138f28: 0x0  nop
    ctx->pc = 0x138f28u;
    // NOP
    // 0x138f2c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x138F2Cu;
    {
        const bool branch_taken_0x138f2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x138f2c) {
            ctx->pc = 0x138F40u;
            goto label_138f40;
        }
    }
    ctx->pc = 0x138F34u;
    // 0x138f34: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x138f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138f38: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x138f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138f3c: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x138f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_138f40:
    // 0x138f40: 0x8663008e  lh          $v1, 0x8E($s3)
    ctx->pc = 0x138f40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
    // 0x138f44: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x138f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x138f48: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x138f48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x138f4c: 0x28610015  slti        $at, $v1, 0x15
    ctx->pc = 0x138f4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x138f50: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x138F50u;
    {
        const bool branch_taken_0x138f50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x138f50) {
            ctx->pc = 0x138F78u;
            goto label_138f78;
        }
    }
    ctx->pc = 0x138F58u;
    // 0x138f58: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x138f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x138f5c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x138f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x138f60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x138f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138f64: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x138f64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x138f68: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x138f68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x138f6c: 0xc06776c  jal         func_19DDB0
    ctx->pc = 0x138F6Cu;
    SET_GPR_U32(ctx, 31, 0x138F74u);
    ctx->pc = 0x19DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DDB0u, 0x138F6Cu, 0x138F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138F74u;
label_138f74:
    // 0x138f74: 0x0  nop
    ctx->pc = 0x138f74u;
    // NOP
label_138f78:
    // 0x138f78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x138f78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138f7c: 0x0  nop
    ctx->pc = 0x138f7cu;
    // NOP
label_138f80:
    // 0x138f80: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x138f80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138f84: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x138F84u;
    {
        const bool branch_taken_0x138f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138f84) {
            ctx->pc = 0x138E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138e78;
        }
    }
    ctx->pc = 0x138F8Cu;
    // 0x138f8c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138f8cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138f90: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x138F90u;
    {
        const bool branch_taken_0x138f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138f90) {
            ctx->pc = 0x1390A0u;
            goto label_1390a0;
        }
    }
    ctx->pc = 0x138F98u;
label_138f98:
    // 0x138f98: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x138f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138f9c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x138f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x138fa0: 0x24424ea8  addiu       $v0, $v0, 0x4EA8
    ctx->pc = 0x138fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20136));
    // 0x138fa4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x138fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x138fa8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x138fa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138fac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x138facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x138fb0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x138fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138fb4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x138fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138fb8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x138fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138fbc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x138fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x138fc0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x138fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x138fc4: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x138fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x138fc8: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x138fc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138fcc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x138fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138fd0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x138fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138fd4: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x138fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138fd8: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x138fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x138fdc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x138FDCu;
    SET_GPR_U32(ctx, 31, 0x138FE4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x138FDCu, 0x138FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138FE4u;
label_138fe4:
    // 0x138fe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138fe8: 0x0  nop
    ctx->pc = 0x138fe8u;
    // NOP
    // 0x138fec: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x138fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x138ff0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x138ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138ff4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x138ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138ff8: 0xc040c24  jal         func_103090
    ctx->pc = 0x138FF8u;
    SET_GPR_U32(ctx, 31, 0x139000u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x139000u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x139000u) { return; }
    ctx->pc = 0x139000u;
label_139000:
    // 0x139000: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x139000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x139004: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x139004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x139008: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x139008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13900c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x13900Cu;
    SET_GPR_U32(ctx, 31, 0x139014u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x139014u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x139014u) { return; }
    ctx->pc = 0x139014u;
label_139014:
    // 0x139014: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x139014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x139018: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x139018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13901c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x13901cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x139020: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x139020u;
    SET_GPR_U32(ctx, 31, 0x139028u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x139020u, 0x139028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139028u;
label_139028:
    // 0x139028: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x139028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13902c: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x13902cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139030: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x139030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x139034: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x139034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x139038: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x139038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13903c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x13903cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x139040: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x139040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139044: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x139044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139048: 0x0  nop
    ctx->pc = 0x139048u;
    // NOP
    // 0x13904c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13904Cu;
    {
        const bool branch_taken_0x13904c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13904c) {
            ctx->pc = 0x139060u;
            goto label_139060;
        }
    }
    ctx->pc = 0x139054u;
    // 0x139054: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x139054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x139058: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x139058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13905c: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x13905cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_139060:
    // 0x139060: 0x8663008e  lh          $v1, 0x8E($s3)
    ctx->pc = 0x139060u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
    // 0x139064: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x139064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x139068: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x139068u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13906c: 0x28610015  slti        $at, $v1, 0x15
    ctx->pc = 0x13906cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x139070: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x139070u;
    {
        const bool branch_taken_0x139070 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x139070) {
            ctx->pc = 0x139098u;
            goto label_139098;
        }
    }
    ctx->pc = 0x139078u;
    // 0x139078: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x139078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x13907c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x13907cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x139080: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x139080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x139084: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x139084u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x139088: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x139088u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13908c: 0xc06776c  jal         func_19DDB0
    ctx->pc = 0x13908Cu;
    SET_GPR_U32(ctx, 31, 0x139094u);
    ctx->pc = 0x19DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DDB0u, 0x13908Cu, 0x139094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139094u;
label_139094:
    // 0x139094: 0x0  nop
    ctx->pc = 0x139094u;
    // NOP
label_139098:
    // 0x139098: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x139098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13909c: 0x0  nop
    ctx->pc = 0x13909cu;
    // NOP
label_1390a0:
    // 0x1390a0: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1390a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1390a4: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x1390A4u;
    {
        const bool branch_taken_0x1390a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1390a4) {
            ctx->pc = 0x138F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138f98;
        }
    }
    ctx->pc = 0x1390ACu;
    // 0x1390ac: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x1390acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1390b0: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x1390b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x1390b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1390b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1390b8: 0x0  nop
    ctx->pc = 0x1390b8u;
    // NOP
    // 0x1390bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1390bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1390c0: 0xe6600048  swc1        $f0, 0x48($s3)
    ctx->pc = 0x1390c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
    // 0x1390c4: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x1390c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1390c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1390c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1390cc: 0x0  nop
    ctx->pc = 0x1390ccu;
    // NOP
    // 0x1390d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1390d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1390d4: 0x0  nop
    ctx->pc = 0x1390d4u;
    // NOP
    // 0x1390d8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1390D8u;
    {
        const bool branch_taken_0x1390d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1390d8) {
            ctx->pc = 0x1390ECu;
            goto label_1390ec;
        }
    }
    ctx->pc = 0x1390E0u;
    // 0x1390e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1390e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1390e4: 0x0  nop
    ctx->pc = 0x1390e4u;
    // NOP
    // 0x1390e8: 0xe6600048  swc1        $f0, 0x48($s3)
    ctx->pc = 0x1390e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
label_1390ec:
    // 0x1390ec: 0x8663008e  lh          $v1, 0x8E($s3)
    ctx->pc = 0x1390ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
    // 0x1390f0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1390F0u;
    {
        const bool branch_taken_0x1390f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1390f0) {
            ctx->pc = 0x13910Cu;
            goto label_13910c;
        }
    }
    ctx->pc = 0x1390F8u;
    // 0x1390f8: 0x8663008e  lh          $v1, 0x8E($s3)
    ctx->pc = 0x1390f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
    // 0x1390fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1390fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x139100: 0xa663008e  sh          $v1, 0x8E($s3)
    ctx->pc = 0x139100u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 142), (uint16_t)GPR_U32(ctx, 3));
    // 0x139104: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x139104u;
    {
        const bool branch_taken_0x139104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139104) {
            ctx->pc = 0x139218u;
            goto label_139218;
        }
    }
    ctx->pc = 0x13910Cu;
label_13910c:
    // 0x13910c: 0x9263009a  lbu         $v1, 0x9A($s3)
    ctx->pc = 0x13910cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
    // 0x139110: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x139110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x139114: 0xa263009a  sb          $v1, 0x9A($s3)
    ctx->pc = 0x139114u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 3));
    // 0x139118: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x139118u;
    {
        const bool branch_taken_0x139118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139118) {
            ctx->pc = 0x139218u;
            goto label_139218;
        }
    }
    ctx->pc = 0x139120u;
label_139120:
    // 0x139120: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x139120u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x139124: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x139124u;
    {
        const bool branch_taken_0x139124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139124) {
            ctx->pc = 0x139160u;
            goto label_139160;
        }
    }
    ctx->pc = 0x13912Cu;
label_13912c:
    // 0x13912c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x13912cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x139130: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x139130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x139134: 0x24634eb0  addiu       $v1, $v1, 0x4EB0
    ctx->pc = 0x139134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20144));
    // 0x139138: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x139138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13913c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13913cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139140: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x139140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x139144: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x139144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x139148: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x139148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13914c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x13914cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x139150: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x139150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x139154: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x139154u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x139158: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x139158u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x13915c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13915cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_139160:
    // 0x139160: 0x2a030007  slti        $v1, $s0, 0x7
    ctx->pc = 0x139160u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x139164: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x139164u;
    {
        const bool branch_taken_0x139164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x139164) {
            ctx->pc = 0x13912Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13912c;
        }
    }
    ctx->pc = 0x13916Cu;
    // 0x13916c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x13916cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x139170: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x139170u;
    {
        const bool branch_taken_0x139170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139170) {
            ctx->pc = 0x1391B0u;
            goto label_1391b0;
        }
    }
    ctx->pc = 0x139178u;
label_139178:
    // 0x139178: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x139178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x13917c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x13917cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x139180: 0x24834eb8  addiu       $v1, $a0, 0x4EB8
    ctx->pc = 0x139180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20152));
    // 0x139184: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x139184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x139188: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x139188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13918c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x13918cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x139190: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x139190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x139194: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x139194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x139198: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x139198u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13919c: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x13919cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1391a0: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1391a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1391a4: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x1391a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1391a8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1391a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1391ac: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1391acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1391b0:
    // 0x1391b0: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1391b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1391b4: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1391B4u;
    {
        const bool branch_taken_0x1391b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1391b4) {
            ctx->pc = 0x139178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_139178;
        }
    }
    ctx->pc = 0x1391BCu;
    // 0x1391bc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1391bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1391c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1391C0u;
    {
        const bool branch_taken_0x1391c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1391c0) {
            ctx->pc = 0x139200u;
            goto label_139200;
        }
    }
    ctx->pc = 0x1391C8u;
label_1391c8:
    // 0x1391c8: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1391c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1391cc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1391ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1391d0: 0x24724ec0  addiu       $s2, $v1, 0x4EC0
    ctx->pc = 0x1391d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 20160));
    // 0x1391d4: 0x250a021  addu        $s4, $s2, $s0
    ctx->pc = 0x1391d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1391d8: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x1391d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1391dc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1391dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1391e0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1391e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1391e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1391e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1391e8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1391e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1391ec: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x1391ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1391f0: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1391f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1391f4: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x1391f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1391f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1391f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1391fc: 0x0  nop
    ctx->pc = 0x1391fcu;
    // NOP
label_139200:
    // 0x139200: 0x2a060004  slti        $a2, $s0, 0x4
    ctx->pc = 0x139200u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x139204: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x139204u;
    {
        const bool branch_taken_0x139204 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x139204) {
            ctx->pc = 0x1391C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1391c8;
        }
    }
    ctx->pc = 0x13920Cu;
    // 0x13920c: 0x9263009a  lbu         $v1, 0x9A($s3)
    ctx->pc = 0x13920cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
    // 0x139210: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x139210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x139214: 0xa263009a  sb          $v1, 0x9A($s3)
    ctx->pc = 0x139214u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 3));
label_139218:
    // 0x139218: 0x9263009c  lbu         $v1, 0x9C($s3)
    ctx->pc = 0x139218u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x13921c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x13921cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x139220: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x139220u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x139224: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x139224u;
    {
        const bool branch_taken_0x139224 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x139224) {
            ctx->pc = 0x139284u;
            goto label_139284;
        }
    }
    ctx->pc = 0x13922Cu;
    // 0x13922c: 0x9263009c  lbu         $v1, 0x9C($s3)
    ctx->pc = 0x13922cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x139230: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x139230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x139234: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x139234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x139238: 0x24644ec8  addiu       $a0, $v1, 0x4EC8
    ctx->pc = 0x139238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20168));
    // 0x13923c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x13923cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x139240: 0x90720000  lbu         $s2, 0x0($v1)
    ctx->pc = 0x139240u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139244: 0x325400ff  andi        $s4, $s2, 0xFF
    ctx->pc = 0x139244u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x139248: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x139248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x13924c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x13924cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x139250: 0x38100  sll         $s0, $v1, 4
    ctx->pc = 0x139250u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x139254: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x139254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x139258: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x139258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x13925c: 0x709021  addu        $s2, $v1, $s0
    ctx->pc = 0x13925cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x139260: 0x8e550034  lw          $s5, 0x34($s2)
    ctx->pc = 0x139260u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x139264: 0x72a0a628  paddub      $s4, $s5, $zero
    ctx->pc = 0x139264u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x139268: 0x8e950024  lw          $s5, 0x24($s4)
    ctx->pc = 0x139268u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x13926c: 0x36a50002  ori         $a1, $s5, 0x2
    ctx->pc = 0x13926cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
    // 0x139270: 0xae850024  sw          $a1, 0x24($s4)
    ctx->pc = 0x139270u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 5));
    // 0x139274: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x139274u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x139278: 0x9263009c  lbu         $v1, 0x9C($s3)
    ctx->pc = 0x139278u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x13927c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13927cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x139280: 0xa263009c  sb          $v1, 0x9C($s3)
    ctx->pc = 0x139280u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 156), (uint8_t)GPR_U32(ctx, 3));
label_139284:
    // 0x139284: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x139284u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x139288: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x139288u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13928c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13928cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139290: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x139290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139294: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x139294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139298: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x139298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13929c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13929cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1392a0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1392a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1392a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1392A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1392A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1392ACu;
}
