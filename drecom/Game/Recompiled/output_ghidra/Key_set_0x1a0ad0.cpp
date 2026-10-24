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

// Function: Key_set
// Address: 0x1a0ad0 - 0x1a0e7c
void Key_set_0x1a0ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Key_set_0x1a0ad0");
#endif

    switch (ctx->pc) {
        case 0x1a0b40u: goto label_1a0b40;
        default: break;
    }

    ctx->pc = 0x1a0ad0u;

    // 0x1a0ad0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a0ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0ad4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a0ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a0ad8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a0ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a0adc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a0adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a0ae0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a0ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a0ae4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1a0ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1a0ae8: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x1a0ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x1a0aec: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1a0aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1a0af0: 0x24730080  addiu       $s3, $v1, 0x80
    ctx->pc = 0x1a0af0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1a0af4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0af8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1a0af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a0afc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0b00: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1a0b00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x1a0b04: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0b08: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1a0b08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1a0b0c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0b10: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1a0b10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1a0b14: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0b18: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1a0b18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x1a0b1c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a0b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0b20: 0x8e631ab4  lw          $v1, 0x1AB4($s3)
    ctx->pc = 0x1a0b20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1B34u));
    // 0x1a0b24: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1a0b24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1a0b28: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a0b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a0b2c: 0x24638080  addiu       $v1, $v1, -0x7F80
    ctx->pc = 0x1a0b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934656));
    // 0x1a0b30: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1a0b30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a0b34: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1a0b34u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a0b38: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1A0B38u;
    {
        const bool branch_taken_0x1a0b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0b38) {
            ctx->pc = 0x1A0BE0u;
            goto label_1a0be0;
        }
    }
    ctx->pc = 0x1A0B40u;
label_1a0b40:
    // 0x1a0b40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0b44: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a0b44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0b48: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a0b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a0b4c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1a0b4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a0b50: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a0b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a0b54: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a0b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a0b58: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0B58u;
    {
        const bool branch_taken_0x1a0b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0b58) {
            ctx->pc = 0x1A0B70u;
            goto label_1a0b70;
        }
    }
    ctx->pc = 0x1A0B60u;
    // 0x1a0b60: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a0b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0b64: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1a0b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a0b68: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x1a0b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x1a0b6c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1a0b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1a0b70:
    // 0x1a0b70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0b74: 0x94630012  lhu         $v1, 0x12($v1)
    ctx->pc = 0x1a0b74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x1a0b78: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a0b78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a0b7c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1a0b7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a0b80: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a0b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a0b84: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a0b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a0b88: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0B88u;
    {
        const bool branch_taken_0x1a0b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0b88) {
            ctx->pc = 0x1A0BA0u;
            goto label_1a0ba0;
        }
    }
    ctx->pc = 0x1A0B90u;
    // 0x1a0b90: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a0b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0b94: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1a0b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a0b98: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x1a0b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x1a0b9c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1a0b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_1a0ba0:
    // 0x1a0ba0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0ba4: 0x94630014  lhu         $v1, 0x14($v1)
    ctx->pc = 0x1a0ba4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1a0ba8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a0ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a0bac: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1a0bacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a0bb0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a0bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a0bb4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a0bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a0bb8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0BB8u;
    {
        const bool branch_taken_0x1a0bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0bb8) {
            ctx->pc = 0x1A0BD0u;
            goto label_1a0bd0;
        }
    }
    ctx->pc = 0x1A0BC0u;
    // 0x1a0bc0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a0bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0bc4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1a0bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1a0bc8: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x1a0bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x1a0bcc: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1a0bccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_1a0bd0:
    // 0x1a0bd0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1a0bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1a0bd4: 0x118840  sll         $s1, $s1, 1
    ctx->pc = 0x1a0bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1a0bd8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a0bd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a0bdc: 0x0  nop
    ctx->pc = 0x1a0bdcu;
    // NOP
label_1a0be0:
    // 0x1a0be0: 0x2e430020  sltiu       $v1, $s2, 0x20
    ctx->pc = 0x1a0be0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1a0be4: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1A0BE4u;
    {
        const bool branch_taken_0x1a0be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0be4) {
            ctx->pc = 0x1A0B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0b40;
        }
    }
    ctx->pc = 0x1A0BECu;
    // 0x1a0bec: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a0becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0bf0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0bf4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1a0bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a0bf8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1a0bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a0bfc: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x1a0bfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x1a0c00: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0c04: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1a0c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a0c08: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x1a0c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1a0c0c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0c10: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1a0c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x1a0c14: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a0c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0c18: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0c1c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1a0c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a0c20: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1a0c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a0c24: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x1a0c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x1a0c28: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0c2c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1a0c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a0c30: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x1a0c30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1a0c34: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0c38: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x1a0c38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x1a0c3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a0c40: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x1a0c40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x1a0c44: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1a0c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1a0c48: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x1A0C48u;
    {
        const bool branch_taken_0x1a0c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0c48) {
            ctx->pc = 0x1A0D50u;
            goto label_1a0d50;
        }
    }
    ctx->pc = 0x1A0C50u;
    // 0x1a0c50: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0c54: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1a0c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a0c58: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1a0c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1a0c5c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1a0c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a0c60: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0c64: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a0c64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a0c68: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1a0c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0c6c: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x1a0c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1a0c70: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1a0c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1a0c74: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a0c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a0c78: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x1a0c78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x1a0c7c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1a0c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0c80: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x1a0c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1a0c84: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1a0c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1a0c88: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a0c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a0c8c: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x1a0c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x1a0c90: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1a0c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0c94: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1a0c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a0c98: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1a0c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1a0c9c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a0c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a0ca0: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1a0ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1a0ca4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1a0ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0ca8: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x1a0ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1a0cac: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1a0cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1a0cb0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a0cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a0cb4: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x1a0cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x1a0cb8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1a0cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a0cbc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0cc0: 0xa064001c  sb          $a0, 0x1C($v1)
    ctx->pc = 0x1a0cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0cc4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1a0cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a0cc8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0ccc: 0xa064001d  sb          $a0, 0x1D($v1)
    ctx->pc = 0x1a0cccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0cd0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1a0cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a0cd4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0cd8: 0xa064001e  sb          $a0, 0x1E($v1)
    ctx->pc = 0x1a0cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0cdc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1a0cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a0ce0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0ce4: 0xa064001f  sb          $a0, 0x1F($v1)
    ctx->pc = 0x1a0ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 31), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0ce8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0cec: 0xa0600023  sb          $zero, 0x23($v1)
    ctx->pc = 0x1a0cecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 35), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0cf0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0cf4: 0xa0600022  sb          $zero, 0x22($v1)
    ctx->pc = 0x1a0cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0cf8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0cfc: 0xa0600020  sb          $zero, 0x20($v1)
    ctx->pc = 0x1a0cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0d00: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d04: 0xa0600021  sb          $zero, 0x21($v1)
    ctx->pc = 0x1a0d04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0d08: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d0c: 0xa0600024  sb          $zero, 0x24($v1)
    ctx->pc = 0x1a0d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0d10: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d14: 0xa0600027  sb          $zero, 0x27($v1)
    ctx->pc = 0x1a0d14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 39), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0d18: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d1c: 0xa0600025  sb          $zero, 0x25($v1)
    ctx->pc = 0x1a0d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0d20: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d24: 0xa0600026  sb          $zero, 0x26($v1)
    ctx->pc = 0x1a0d24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0d28: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d2c: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x1a0d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0d30: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d34: 0xa0600029  sb          $zero, 0x29($v1)
    ctx->pc = 0x1a0d34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0d38: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d3c: 0xa060002a  sb          $zero, 0x2A($v1)
    ctx->pc = 0x1a0d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0d40: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d44: 0xa060002b  sb          $zero, 0x2B($v1)
    ctx->pc = 0x1a0d44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0d48: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1A0D48u;
    {
        const bool branch_taken_0x1a0d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0d48) {
            ctx->pc = 0x1A0E60u;
            goto label_1a0e60;
        }
    }
    ctx->pc = 0x1A0D50u;
label_1a0d50:
    // 0x1a0d50: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d54: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1a0d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a0d58: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d5c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a0d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a0d60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0d64: 0x90640036  lbu         $a0, 0x36($v1)
    ctx->pc = 0x1a0d64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x1a0d68: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d6c: 0xa064001c  sb          $a0, 0x1C($v1)
    ctx->pc = 0x1a0d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0d70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0d74: 0x90640037  lbu         $a0, 0x37($v1)
    ctx->pc = 0x1a0d74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 55)));
    // 0x1a0d78: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d7c: 0xa064001d  sb          $a0, 0x1D($v1)
    ctx->pc = 0x1a0d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0d80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0d84: 0x90640038  lbu         $a0, 0x38($v1)
    ctx->pc = 0x1a0d84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1a0d88: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d8c: 0xa064001e  sb          $a0, 0x1E($v1)
    ctx->pc = 0x1a0d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0d90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0d94: 0x90640039  lbu         $a0, 0x39($v1)
    ctx->pc = 0x1a0d94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x1a0d98: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d9c: 0xa064001f  sb          $a0, 0x1F($v1)
    ctx->pc = 0x1a0d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 31), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0da0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0da4: 0x9064003d  lbu         $a0, 0x3D($v1)
    ctx->pc = 0x1a0da4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 61)));
    // 0x1a0da8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0dac: 0xa0640023  sb          $a0, 0x23($v1)
    ctx->pc = 0x1a0dacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 35), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0db0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0db4: 0x9064003c  lbu         $a0, 0x3C($v1)
    ctx->pc = 0x1a0db4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1a0db8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0dbc: 0xa0640022  sb          $a0, 0x22($v1)
    ctx->pc = 0x1a0dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 34), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0dc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0dc4: 0x9064003a  lbu         $a0, 0x3A($v1)
    ctx->pc = 0x1a0dc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x1a0dc8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0dcc: 0xa0640020  sb          $a0, 0x20($v1)
    ctx->pc = 0x1a0dccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0dd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0dd4: 0x9064003b  lbu         $a0, 0x3B($v1)
    ctx->pc = 0x1a0dd4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 59)));
    // 0x1a0dd8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0ddc: 0xa0640021  sb          $a0, 0x21($v1)
    ctx->pc = 0x1a0ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 33), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0de0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0de4: 0x9064003e  lbu         $a0, 0x3E($v1)
    ctx->pc = 0x1a0de4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 62)));
    // 0x1a0de8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0dec: 0xa0640024  sb          $a0, 0x24($v1)
    ctx->pc = 0x1a0decu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 36), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0df0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0df4: 0x90640041  lbu         $a0, 0x41($v1)
    ctx->pc = 0x1a0df4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 65)));
    // 0x1a0df8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0dfc: 0xa0640027  sb          $a0, 0x27($v1)
    ctx->pc = 0x1a0dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 39), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0e00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0e04: 0x9064003f  lbu         $a0, 0x3F($v1)
    ctx->pc = 0x1a0e04u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 63)));
    // 0x1a0e08: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0e0c: 0xa0640025  sb          $a0, 0x25($v1)
    ctx->pc = 0x1a0e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 37), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0e10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0e14: 0x90640040  lbu         $a0, 0x40($v1)
    ctx->pc = 0x1a0e14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1a0e18: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0e1c: 0xa0640026  sb          $a0, 0x26($v1)
    ctx->pc = 0x1a0e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 38), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0e20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0e24: 0x90640042  lbu         $a0, 0x42($v1)
    ctx->pc = 0x1a0e24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 66)));
    // 0x1a0e28: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0e2c: 0xa0640028  sb          $a0, 0x28($v1)
    ctx->pc = 0x1a0e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0e30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0e34: 0x90640043  lbu         $a0, 0x43($v1)
    ctx->pc = 0x1a0e34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 67)));
    // 0x1a0e38: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0e3c: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x1a0e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0e40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0e44: 0x90640044  lbu         $a0, 0x44($v1)
    ctx->pc = 0x1a0e44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1a0e48: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0e4c: 0xa064002a  sb          $a0, 0x2A($v1)
    ctx->pc = 0x1a0e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 42), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0e50: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0e54: 0x90640045  lbu         $a0, 0x45($v1)
    ctx->pc = 0x1a0e54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 69)));
    // 0x1a0e58: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0e5c: 0xa064002b  sb          $a0, 0x2B($v1)
    ctx->pc = 0x1a0e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 4));
label_1a0e60:
    // 0x1a0e60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a0e60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0e64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a0e64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0e68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a0e68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0e6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0e70: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a0e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a0e74: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0E7Cu;
}
