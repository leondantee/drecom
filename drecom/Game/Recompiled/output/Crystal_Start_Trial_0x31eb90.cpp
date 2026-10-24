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

// Function: Crystal_Start_Trial
// Address: 0x31eb90 - 0x31ef50
void Crystal_Start_Trial_0x31eb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Crystal_Start_Trial_0x31eb90");
#endif

    switch (ctx->pc) {
        case 0x31ebc0u: goto label_31ebc0;
        case 0x31ec34u: goto label_31ec34;
        case 0x31ecf0u: goto label_31ecf0;
        case 0x31ed44u: goto label_31ed44;
        case 0x31ed50u: goto label_31ed50;
        case 0x31ed80u: goto label_31ed80;
        case 0x31ed8cu: goto label_31ed8c;
        case 0x31edc4u: goto label_31edc4;
        case 0x31edd0u: goto label_31edd0;
        case 0x31ee00u: goto label_31ee00;
        case 0x31ee0cu: goto label_31ee0c;
        default: break;
    }

    ctx->pc = 0x31eb90u;

    // 0x31eb90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x31eb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x31eb94: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x31eb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x31eb98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31eb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31eb9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31eb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31eba0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31eba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31eba4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31eba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31eba8: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x31eba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x31ebac: 0xa7a50070  sh          $a1, 0x70($sp)
    ctx->pc = 0x31ebacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 5));
    // 0x31ebb0: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x31ebb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
    // 0x31ebb4: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x31ebb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x31ebb8: 0xafa80088  sw          $t0, 0x88($sp)
    ctx->pc = 0x31ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 8));
    // 0x31ebbc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x31ebbcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31ebc0:
    // 0x31ebc0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31ebc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31ebc4: 0x8c22af6c  lw          $v0, -0x5094($at)
    ctx->pc = 0x31ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AF6Cu));
    // 0x31ebc8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x31ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x31ebcc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31ebd0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x31ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x31ebd4: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x31ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x31ebd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31ebdc: 0x8c421390  lw          $v0, 0x1390($v0)
    ctx->pc = 0x31ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x31ebe0: 0x8c431298  lw          $v1, 0x1298($v0)
    ctx->pc = 0x31ebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x31ebe4: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x31ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x31ebe8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31ebe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31ebec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31EBECu;
    {
        const bool branch_taken_0x31ebec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ebec) {
            ctx->pc = 0x31EC10u;
            goto label_31ec10;
        }
    }
    ctx->pc = 0x31EBF4u;
    // 0x31ebf4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31ebf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31ebf8: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31ebf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31ebfc: 0x9422af66  lhu         $v0, -0x509A($at)
    ctx->pc = 0x31ebfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x85AF66u));
    // 0x31ec00: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x31ec00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31ec04: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x31ec04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31ec08: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x31EC08u;
    {
        const bool branch_taken_0x31ec08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ec08) {
            ctx->pc = 0x31EBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ebc0;
        }
    }
    ctx->pc = 0x31EC10u;
label_31ec10:
    // 0x31ec10: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31ec10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31ec14: 0x9422af66  lhu         $v0, -0x509A($at)
    ctx->pc = 0x31ec14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x85AF66u));
    // 0x31ec18: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x31ec18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31ec1c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x31ec1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31ec20: 0x1440009a  bnez        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x31EC20u;
    {
        const bool branch_taken_0x31ec20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ec20) {
            ctx->pc = 0x31EE8Cu;
            goto label_31ee8c;
        }
    }
    ctx->pc = 0x31EC28u;
    // 0x31ec28: 0x24122710  addiu       $s2, $zero, 0x2710
    ctx->pc = 0x31ec28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x31ec2c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x31ec2cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31ec30: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x31ec30u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31ec34:
    // 0x31ec34: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31ec34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31ec38: 0x8c22af6c  lw          $v0, -0x5094($at)
    ctx->pc = 0x31ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AF6Cu));
    // 0x31ec3c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x31ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x31ec40: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31ec40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31ec44: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x31ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x31ec48: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x31ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x31ec4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31ec50: 0x8c421390  lw          $v0, 0x1390($v0)
    ctx->pc = 0x31ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x31ec54: 0x8c421330  lw          $v0, 0x1330($v0)
    ctx->pc = 0x31ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4912)));
    // 0x31ec58: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x31ec58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x31ec5c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x31EC5Cu;
    {
        const bool branch_taken_0x31ec5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ec5c) {
            ctx->pc = 0x31EC90u;
            goto label_31ec90;
        }
    }
    ctx->pc = 0x31EC64u;
    // 0x31ec64: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31ec64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31ec68: 0x8c22af6c  lw          $v0, -0x5094($at)
    ctx->pc = 0x31ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AF6Cu));
    // 0x31ec6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x31ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x31ec70: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31ec74: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x31ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x31ec78: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x31ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x31ec7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31ec80: 0x8c421390  lw          $v0, 0x1390($v0)
    ctx->pc = 0x31ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x31ec84: 0x8c521330  lw          $s2, 0x1330($v0)
    ctx->pc = 0x31ec84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4912)));
    // 0x31ec88: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x31ec88u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x31ec8c: 0x0  nop
    ctx->pc = 0x31ec8cu;
    // NOP
label_31ec90:
    // 0x31ec90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31ec90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31ec94: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31ec94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31ec98: 0x9422af66  lhu         $v0, -0x509A($at)
    ctx->pc = 0x31ec98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x85AF66u));
    // 0x31ec9c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x31ec9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31eca0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x31eca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31eca4: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x31ECA4u;
    {
        const bool branch_taken_0x31eca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31eca4) {
            ctx->pc = 0x31EC34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ec34;
        }
    }
    ctx->pc = 0x31ECACu;
    // 0x31ecac: 0x72608e28  paddub      $s1, $s3, $zero
    ctx->pc = 0x31ecacu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x31ecb0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31ecb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31ecb4: 0x8c22af6c  lw          $v0, -0x5094($at)
    ctx->pc = 0x31ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AF6Cu));
    // 0x31ecb8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x31ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x31ecbc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31ecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31ecc0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x31ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x31ecc4: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x31ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x31ecc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31ecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31eccc: 0x8c501390  lw          $s0, 0x1390($v0)
    ctx->pc = 0x31ecccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x31ecd0: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x31ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x31ecd4: 0xae021330  sw          $v0, 0x1330($s0)
    ctx->pc = 0x31ecd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4912), GPR_U32(ctx, 2));
    // 0x31ecd8: 0x8e070130  lw          $a3, 0x130($s0)
    ctx->pc = 0x31ecd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x31ecdc: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x31ecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31ece0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x31ece0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31ece4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x31ece4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31ece8: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x31ECE8u;
    SET_GPR_U32(ctx, 31, 0x31ECF0u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x31ECE8u, 0x31ECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ECF0u;
label_31ecf0:
    // 0x31ecf0: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x31ecf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x31ecf4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31ecf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31ecf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ecfc: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x31ECFCu;
    {
        const bool branch_taken_0x31ecfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31ecfc) {
            ctx->pc = 0x31ED94u;
            goto label_31ed94;
        }
    }
    ctx->pc = 0x31ED04u;
    // 0x31ed04: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31ED04u;
    {
        const bool branch_taken_0x31ed04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ed04) {
            ctx->pc = 0x31ED14u;
            goto label_31ed14;
        }
    }
    ctx->pc = 0x31ED0Cu;
    // 0x31ed0c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x31ED0Cu;
    {
        const bool branch_taken_0x31ed0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ed0c) {
            ctx->pc = 0x31EE0Cu;
            goto label_31ee0c;
        }
    }
    ctx->pc = 0x31ED14u;
label_31ed14:
    // 0x31ed14: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x31ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x31ed18: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31ed18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31ed1c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31ed1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31ed20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31ed20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31ed24: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31ed24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31ed28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31ed28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31ed2c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31ed2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31ed30: 0x24046102  addiu       $a0, $zero, 0x6102
    ctx->pc = 0x31ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24834));
    // 0x31ed34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31ed34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31ed38: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x31ed38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31ed3c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31ED3Cu;
    SET_GPR_U32(ctx, 31, 0x31ED44u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31ED3Cu, 0x31ED44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED44u;
label_31ed44:
    // 0x31ed44: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31ed44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31ed48: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31ED48u;
    SET_GPR_U32(ctx, 31, 0x31ED50u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31ED48u, 0x31ED50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED50u;
label_31ed50:
    // 0x31ed50: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x31ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x31ed54: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31ed54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31ed58: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31ed58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31ed5c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31ed5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31ed60: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31ed60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31ed64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31ed64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31ed68: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31ed68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31ed6c: 0x24046202  addiu       $a0, $zero, 0x6202
    ctx->pc = 0x31ed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25090));
    // 0x31ed70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31ed70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31ed74: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x31ed74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31ed78: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31ED78u;
    SET_GPR_U32(ctx, 31, 0x31ED80u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31ED78u, 0x31ED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED80u;
label_31ed80:
    // 0x31ed80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31ed80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31ed84: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31ED84u;
    SET_GPR_U32(ctx, 31, 0x31ED8Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31ED84u, 0x31ED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED8Cu;
label_31ed8c:
    // 0x31ed8c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x31ED8Cu;
    {
        const bool branch_taken_0x31ed8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ed8c) {
            ctx->pc = 0x31EE0Cu;
            goto label_31ee0c;
        }
    }
    ctx->pc = 0x31ED94u;
label_31ed94:
    // 0x31ed94: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x31ed94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x31ed98: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31ed98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31ed9c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31ed9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31eda0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31eda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31eda4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31eda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31eda8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31eda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31edac: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31edacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31edb0: 0x24046107  addiu       $a0, $zero, 0x6107
    ctx->pc = 0x31edb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24839));
    // 0x31edb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31edb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31edb8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x31edb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31edbc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31EDBCu;
    SET_GPR_U32(ctx, 31, 0x31EDC4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31EDBCu, 0x31EDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EDC4u;
label_31edc4:
    // 0x31edc4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31edc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31edc8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31EDC8u;
    SET_GPR_U32(ctx, 31, 0x31EDD0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31EDC8u, 0x31EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EDD0u;
label_31edd0:
    // 0x31edd0: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x31edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x31edd4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31edd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31edd8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31edd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31eddc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31eddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31ede0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31ede0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31ede4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31ede4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31ede8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31ede8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31edec: 0x24046207  addiu       $a0, $zero, 0x6207
    ctx->pc = 0x31edecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25095));
    // 0x31edf0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31edf0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31edf4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x31edf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31edf8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31EDF8u;
    SET_GPR_U32(ctx, 31, 0x31EE00u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31EDF8u, 0x31EE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EE00u;
label_31ee00:
    // 0x31ee00: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31ee00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31ee04: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31EE04u;
    SET_GPR_U32(ctx, 31, 0x31EE0Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31EE04u, 0x31EE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EE0Cu;
label_31ee0c:
    // 0x31ee0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ee10: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x31ee10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x31ee14: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x31ee14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ee18: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x31ee18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ee1c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x31ee1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ee20: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31ee20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x31ee24: 0xae001298  sw          $zero, 0x1298($s0)
    ctx->pc = 0x31ee24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4760), GPR_U32(ctx, 0));
    // 0x31ee28: 0xae001290  sw          $zero, 0x1290($s0)
    ctx->pc = 0x31ee28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4752), GPR_U32(ctx, 0));
    // 0x31ee2c: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x31ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x31ee30: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x31ee30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x31ee34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31ee34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ee38: 0x0  nop
    ctx->pc = 0x31ee38u;
    // NOP
    // 0x31ee3c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x31ee3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x31ee40: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x31ee40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x31ee44: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x31ee44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x31ee48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31ee48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ee4c: 0x0  nop
    ctx->pc = 0x31ee4cu;
    // NOP
    // 0x31ee50: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x31ee50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x31ee54: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x31ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x31ee58: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x31ee58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x31ee5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31ee5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ee60: 0x0  nop
    ctx->pc = 0x31ee60u;
    // NOP
    // 0x31ee64: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x31ee64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x31ee68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31ee68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ee6c: 0x0  nop
    ctx->pc = 0x31ee6cu;
    // NOP
    // 0x31ee70: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x31ee70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x31ee74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31ee74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ee78: 0x0  nop
    ctx->pc = 0x31ee78u;
    // NOP
    // 0x31ee7c: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x31ee7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x31ee80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31ee80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ee84: 0x0  nop
    ctx->pc = 0x31ee84u;
    // NOP
    // 0x31ee88: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x31ee88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
label_31ee8c:
    // 0x31ee8c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31ee8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31ee90: 0x8c22af6c  lw          $v0, -0x5094($at)
    ctx->pc = 0x31ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AF6Cu));
    // 0x31ee94: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x31ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x31ee98: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31ee98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31ee9c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x31ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x31eea0: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x31eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x31eea4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31eea8: 0x8c501390  lw          $s0, 0x1390($v0)
    ctx->pc = 0x31eea8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x31eeac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x31eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31eeb0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31eeb0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31eeb4: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x31eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31eeb8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31eeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31eebc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x31eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31eec0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31eec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31eec4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31EEC4u;
    {
        const bool branch_taken_0x31eec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31eec4) {
            ctx->pc = 0x31EEE4u;
            goto label_31eee4;
        }
    }
    ctx->pc = 0x31EECCu;
    // 0x31eecc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x31eeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31eed0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x31eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x31eed4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31eed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31eed8: 0x0  nop
    ctx->pc = 0x31eed8u;
    // NOP
    // 0x31eedc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31eedcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31eee0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x31eee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_31eee4:
    // 0x31eee4: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x31eee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31eee8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31eee8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31eeec: 0x260212f0  addiu       $v0, $s0, 0x12F0
    ctx->pc = 0x31eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4848));
    // 0x31eef0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31eef0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31eef4: 0x97a20070  lhu         $v0, 0x70($sp)
    ctx->pc = 0x31eef4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31eef8: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x31eef8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x31eefc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x31eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x31ef00: 0xae021294  sw          $v0, 0x1294($s0)
    ctx->pc = 0x31ef00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4756), GPR_U32(ctx, 2));
    // 0x31ef04: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x31ef04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31ef08: 0xae0212a0  sw          $v0, 0x12A0($s0)
    ctx->pc = 0x31ef08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4768), GPR_U32(ctx, 2));
    // 0x31ef0c: 0x8e031298  lw          $v1, 0x1298($s0)
    ctx->pc = 0x31ef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4760)));
    // 0x31ef10: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x31ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31ef14: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31ef14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31ef18: 0xae021298  sw          $v0, 0x1298($s0)
    ctx->pc = 0x31ef18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4760), GPR_U32(ctx, 2));
    // 0x31ef1c: 0x8e031298  lw          $v1, 0x1298($s0)
    ctx->pc = 0x31ef1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4760)));
    // 0x31ef20: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31ef24: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31ef24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31ef28: 0xae021298  sw          $v0, 0x1298($s0)
    ctx->pc = 0x31ef28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4760), GPR_U32(ctx, 2));
    // 0x31ef2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ef30: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x31ef30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31ef34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31ef34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31ef38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31ef38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31ef3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31ef3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ef40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31ef40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ef44: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x31ef44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x31ef48: 0x3e00008  jr          $ra
    ctx->pc = 0x31EF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EF50u;
}
