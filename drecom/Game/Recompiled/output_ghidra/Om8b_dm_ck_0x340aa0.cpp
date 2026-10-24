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

// Function: Om8b_dm_ck
// Address: 0x340aa0 - 0x340d60
void Om8b_dm_ck_0x340aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8b_dm_ck_0x340aa0");
#endif

    switch (ctx->pc) {
        case 0x340c24u: goto label_340c24;
        case 0x340c30u: goto label_340c30;
        case 0x340c94u: goto label_340c94;
        case 0x340cb8u: goto label_340cb8;
        default: break;
    }

    ctx->pc = 0x340aa0u;

    // 0x340aa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x340aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x340aa4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x340aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x340aa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x340aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x340aac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x340aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x340ab0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x340ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x340ab4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x340ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x340ab8: 0x2451dbc0  addiu       $s1, $v0, -0x2440
    ctx->pc = 0x340ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x340abc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x340abcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340ac0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340ac4: 0x904211ee  lbu         $v0, 0x11EE($v0)
    ctx->pc = 0x340ac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4590)));
    // 0x340ac8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x340AC8u;
    {
        const bool branch_taken_0x340ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340ac8) {
            ctx->pc = 0x340ADCu;
            goto label_340adc;
        }
    }
    ctx->pc = 0x340AD0u;
    // 0x340ad0: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x340ad0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x340ad4: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x340AD4u;
    {
        const bool branch_taken_0x340ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340ad4) {
            ctx->pc = 0x340D48u;
            goto label_340d48;
        }
    }
    ctx->pc = 0x340ADCu;
label_340adc:
    // 0x340adc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340ae0: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x340ae0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x340ae4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x340ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x340ae8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x340ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x340aec: 0x1062005a  beq         $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x340AECu;
    {
        const bool branch_taken_0x340aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340aec) {
            ctx->pc = 0x340C58u;
            goto label_340c58;
        }
    }
    ctx->pc = 0x340AF4u;
    // 0x340af4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x340af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340af8: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x340AF8u;
    {
        const bool branch_taken_0x340af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340af8) {
            ctx->pc = 0x340C08u;
            goto label_340c08;
        }
    }
    ctx->pc = 0x340B00u;
    // 0x340b00: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x340b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x340b04: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x340B04u;
    {
        const bool branch_taken_0x340b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b04) {
            ctx->pc = 0x340BFCu;
            goto label_340bfc;
        }
    }
    ctx->pc = 0x340B0Cu;
    // 0x340b0c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x340b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x340b10: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x340B10u;
    {
        const bool branch_taken_0x340b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b10) {
            ctx->pc = 0x340BB0u;
            goto label_340bb0;
        }
    }
    ctx->pc = 0x340B18u;
    // 0x340b18: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x340b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x340b1c: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x340B1Cu;
    {
        const bool branch_taken_0x340b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b1c) {
            ctx->pc = 0x340BA4u;
            goto label_340ba4;
        }
    }
    ctx->pc = 0x340B24u;
    // 0x340b24: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x340b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x340b28: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x340B28u;
    {
        const bool branch_taken_0x340b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b28) {
            ctx->pc = 0x340BA4u;
            goto label_340ba4;
        }
    }
    ctx->pc = 0x340B30u;
    // 0x340b30: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x340b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x340b34: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x340B34u;
    {
        const bool branch_taken_0x340b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b34) {
            ctx->pc = 0x340BA4u;
            goto label_340ba4;
        }
    }
    ctx->pc = 0x340B3Cu;
    // 0x340b3c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x340b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x340b40: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x340B40u;
    {
        const bool branch_taken_0x340b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b40) {
            ctx->pc = 0x340BA4u;
            goto label_340ba4;
        }
    }
    ctx->pc = 0x340B48u;
    // 0x340b48: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x340b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x340b4c: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x340B4Cu;
    {
        const bool branch_taken_0x340b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b4c) {
            ctx->pc = 0x340BA4u;
            goto label_340ba4;
        }
    }
    ctx->pc = 0x340B54u;
    // 0x340b54: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x340b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x340b58: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x340B58u;
    {
        const bool branch_taken_0x340b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b58) {
            ctx->pc = 0x340BA4u;
            goto label_340ba4;
        }
    }
    ctx->pc = 0x340B60u;
    // 0x340b60: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x340b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x340b64: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x340B64u;
    {
        const bool branch_taken_0x340b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b64) {
            ctx->pc = 0x340BA4u;
            goto label_340ba4;
        }
    }
    ctx->pc = 0x340B6Cu;
    // 0x340b6c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x340b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x340b70: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x340B70u;
    {
        const bool branch_taken_0x340b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b70) {
            ctx->pc = 0x340B98u;
            goto label_340b98;
        }
    }
    ctx->pc = 0x340B78u;
    // 0x340b78: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x340b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x340b7c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x340B7Cu;
    {
        const bool branch_taken_0x340b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b7c) {
            ctx->pc = 0x340B98u;
            goto label_340b98;
        }
    }
    ctx->pc = 0x340B84u;
    // 0x340b84: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x340b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x340b88: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x340B88u;
    {
        const bool branch_taken_0x340b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340b88) {
            ctx->pc = 0x340B98u;
            goto label_340b98;
        }
    }
    ctx->pc = 0x340B90u;
    // 0x340b90: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x340B90u;
    {
        const bool branch_taken_0x340b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340b90) {
            ctx->pc = 0x340CE0u;
            goto label_340ce0;
        }
    }
    ctx->pc = 0x340B98u;
label_340b98:
    // 0x340b98: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x340b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340b9c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x340B9Cu;
    {
        const bool branch_taken_0x340b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340b9c) {
            ctx->pc = 0x340D00u;
            goto label_340d00;
        }
    }
    ctx->pc = 0x340BA4u;
label_340ba4:
    // 0x340ba4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x340ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x340ba8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x340BA8u;
    {
        const bool branch_taken_0x340ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340ba8) {
            ctx->pc = 0x340D00u;
            goto label_340d00;
        }
    }
    ctx->pc = 0x340BB0u;
label_340bb0:
    // 0x340bb0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x340bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x340bb4: 0x9022f136  lbu         $v0, -0xECA($at)
    ctx->pc = 0x340bb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EF136u));
    // 0x340bb8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x340bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x340bbc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x340bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x340bc0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x340BC0u;
    {
        const bool branch_taken_0x340bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x340bc0) {
            ctx->pc = 0x340BD4u;
            goto label_340bd4;
        }
    }
    ctx->pc = 0x340BC8u;
    // 0x340bc8: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x340bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x340bcc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x340BCCu;
    {
        const bool branch_taken_0x340bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340bcc) {
            ctx->pc = 0x340D00u;
            goto label_340d00;
        }
    }
    ctx->pc = 0x340BD4u;
label_340bd4:
    // 0x340bd4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x340bd4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340bd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x340bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340bdc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340be0: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x340be0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x340be4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340be8: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x340be8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x340bec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340bf0: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x340bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x340bf4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x340BF4u;
    {
        const bool branch_taken_0x340bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340bf4) {
            ctx->pc = 0x340D00u;
            goto label_340d00;
        }
    }
    ctx->pc = 0x340BFCu;
label_340bfc:
    // 0x340bfc: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x340bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x340c00: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x340C00u;
    {
        const bool branch_taken_0x340c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340c00) {
            ctx->pc = 0x340D00u;
            goto label_340d00;
        }
    }
    ctx->pc = 0x340C08u;
label_340c08:
    // 0x340c08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340c0c: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x340c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x340c10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x340c10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340c14: 0x24461200  addiu       $a2, $v0, 0x1200
    ctx->pc = 0x340c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x340c18: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x340c18u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340c1c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x340C1Cu;
    SET_GPR_U32(ctx, 31, 0x340C24u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x340C1Cu, 0x340C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340C24u;
label_340c24:
    // 0x340c24: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x340c24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x340c28: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x340C28u;
    SET_GPR_U32(ctx, 31, 0x340C30u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x340C28u, 0x340C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340C30u;
label_340c30:
    // 0x340c30: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x340c30u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340c34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x340c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340c38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340c3c: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x340c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x340c40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340c44: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x340c44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x340c48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340c4c: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x340c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x340c50: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x340C50u;
    {
        const bool branch_taken_0x340c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340c50) {
            ctx->pc = 0x340D00u;
            goto label_340d00;
        }
    }
    ctx->pc = 0x340C58u;
label_340c58:
    // 0x340c58: 0x922213a6  lbu         $v0, 0x13A6($s1)
    ctx->pc = 0x340c58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5030)));
    // 0x340c5c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x340c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x340c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x340c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340c64: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x340C64u;
    {
        const bool branch_taken_0x340c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340c64) {
            ctx->pc = 0x340C9Cu;
            goto label_340c9c;
        }
    }
    ctx->pc = 0x340C6Cu;
    // 0x340c6c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x340C6Cu;
    {
        const bool branch_taken_0x340c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x340c6c) {
            ctx->pc = 0x340C7Cu;
            goto label_340c7c;
        }
    }
    ctx->pc = 0x340C74u;
    // 0x340c74: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x340C74u;
    {
        const bool branch_taken_0x340c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340c74) {
            ctx->pc = 0x340CB8u;
            goto label_340cb8;
        }
    }
    ctx->pc = 0x340C7Cu;
label_340c7c:
    // 0x340c7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340c80: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x340c80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340c84: 0x24451200  addiu       $a1, $v0, 0x1200
    ctx->pc = 0x340c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x340c88: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x340c88u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340c8c: 0xc0bd488  jal         func_2F5220
    ctx->pc = 0x340C8Cu;
    SET_GPR_U32(ctx, 31, 0x340C94u);
    ctx->pc = 0x2F5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5220u, 0x340C8Cu, 0x340C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340C94u;
label_340c94:
    // 0x340c94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x340C94u;
    {
        const bool branch_taken_0x340c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340c94) {
            ctx->pc = 0x340CB8u;
            goto label_340cb8;
        }
    }
    ctx->pc = 0x340C9Cu;
label_340c9c:
    // 0x340c9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340ca0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x340ca0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340ca4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x340ca4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340ca8: 0x24461200  addiu       $a2, $v0, 0x1200
    ctx->pc = 0x340ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x340cac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x340cacu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340cb0: 0xc087170  jal         func_21C5C0
    ctx->pc = 0x340CB0u;
    SET_GPR_U32(ctx, 31, 0x340CB8u);
    ctx->pc = 0x21C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C5C0u, 0x340CB0u, 0x340CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340CB8u;
label_340cb8:
    // 0x340cb8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x340cb8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340cbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x340cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340cc0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340cc4: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x340cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x340cc8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340ccc: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x340cccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x340cd0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340cd4: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x340cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x340cd8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x340CD8u;
    {
        const bool branch_taken_0x340cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340cd8) {
            ctx->pc = 0x340D00u;
            goto label_340d00;
        }
    }
    ctx->pc = 0x340CE0u;
label_340ce0:
    // 0x340ce0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x340ce0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340ce4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x340ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340ce8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340cec: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x340cecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x340cf0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340cf4: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x340cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x340cf8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340cfc: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x340cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
label_340d00:
    // 0x340d00: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x340d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x340d04: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x340d04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x340d08: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x340d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x340d0c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x340D0Cu;
    {
        const bool branch_taken_0x340d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340d0c) {
            ctx->pc = 0x340D44u;
            goto label_340d44;
        }
    }
    ctx->pc = 0x340D14u;
    // 0x340d14: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x340d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x340d18: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x340D18u;
    {
        const bool branch_taken_0x340d18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x340d18) {
            ctx->pc = 0x340D2Cu;
            goto label_340d2c;
        }
    }
    ctx->pc = 0x340D20u;
    // 0x340d20: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x340d20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x340d24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x340D24u;
    {
        const bool branch_taken_0x340d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340d24) {
            ctx->pc = 0x340D44u;
            goto label_340d44;
        }
    }
    ctx->pc = 0x340D2Cu;
label_340d2c:
    // 0x340d2c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x340D2Cu;
    {
        const bool branch_taken_0x340d2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x340d2c) {
            ctx->pc = 0x340D44u;
            goto label_340d44;
        }
    }
    ctx->pc = 0x340D34u;
    // 0x340d34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x340d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x340d38: 0x12020002  beq         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x340D38u;
    {
        const bool branch_taken_0x340d38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x340d38) {
            ctx->pc = 0x340D44u;
            goto label_340d44;
        }
    }
    ctx->pc = 0x340D40u;
    // 0x340d40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x340d40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_340d44:
    // 0x340d44: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x340d44u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_340d48:
    // 0x340d48: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x340d48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340d4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x340d4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340d50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x340d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340d54: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x340d54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x340d58: 0x3e00008  jr          $ra
    ctx->pc = 0x340D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340D60u;
}
