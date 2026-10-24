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

// Function: Crystal_set_init
// Address: 0x31ea10 - 0x31eb88
void Crystal_set_init_0x31ea10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Crystal_set_init_0x31ea10");
#endif

    switch (ctx->pc) {
        case 0x31eb50u: goto label_31eb50;
        default: break;
    }

    ctx->pc = 0x31ea10u;

    // 0x31ea10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31ea10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x31ea14: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x31ea14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x31ea18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31ea18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31ea1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31ea1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31ea20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31ea20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31ea24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31ea24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31ea28: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x31ea28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x31ea2c: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x31ea2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x31ea30: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x31ea30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x31ea34: 0xafa70068  sw          $a3, 0x68($sp)
    ctx->pc = 0x31ea34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 7));
    // 0x31ea38: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x31ea38u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31ea3c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x31ea3cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31ea40: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x31ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x31ea44: 0x2450af60  addiu       $s0, $v0, -0x50A0
    ctx->pc = 0x31ea44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946656));
    // 0x31ea48: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x31ea48u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31ea4c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31ea4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31ea50: 0x8422ec66  lh          $v0, -0x139A($at)
    ctx->pc = 0x31ea50u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x31ea54: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x31ea54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31ea58: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31ea58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x31ea5c: 0x284103e8  slti        $at, $v0, 0x3E8
    ctx->pc = 0x31ea5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x31ea60: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x31EA60u;
    {
        const bool branch_taken_0x31ea60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ea60) {
            ctx->pc = 0x31EA88u;
            goto label_31ea88;
        }
    }
    ctx->pc = 0x31EA68u;
    // 0x31ea68: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x31ea68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x31ea6c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x31ea6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31ea70: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31ea70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x31ea74: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x31ea74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x31ea78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31EA78u;
    {
        const bool branch_taken_0x31ea78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ea78) {
            ctx->pc = 0x31EA88u;
            goto label_31ea88;
        }
    }
    ctx->pc = 0x31EA80u;
    // 0x31ea80: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x31ea80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ea84: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x31ea84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31ea88:
    // 0x31ea88: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31ea88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31ea8c: 0x8422ec66  lh          $v0, -0x139A($at)
    ctx->pc = 0x31ea8cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x31ea90: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x31ea90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31ea94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31ea94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x31ea98: 0x284101f4  slti        $at, $v0, 0x1F4
    ctx->pc = 0x31ea98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)500) ? 1 : 0);
    // 0x31ea9c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x31EA9Cu;
    {
        const bool branch_taken_0x31ea9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ea9c) {
            ctx->pc = 0x31EAC4u;
            goto label_31eac4;
        }
    }
    ctx->pc = 0x31EAA4u;
    // 0x31eaa4: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x31eaa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x31eaa8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x31eaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31eaac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31eaacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x31eab0: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x31eab0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x31eab4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x31EAB4u;
    {
        const bool branch_taken_0x31eab4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31eab4) {
            ctx->pc = 0x31EAC4u;
            goto label_31eac4;
        }
    }
    ctx->pc = 0x31EABCu;
    // 0x31eabc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x31eabcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31eac0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x31eac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31eac4:
    // 0x31eac4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31eac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31eac8: 0x8422ec66  lh          $v0, -0x139A($at)
    ctx->pc = 0x31eac8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x31eacc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x31eaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31ead0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31ead0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x31ead4: 0x284101f4  slti        $at, $v0, 0x1F4
    ctx->pc = 0x31ead4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)500) ? 1 : 0);
    // 0x31ead8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x31EAD8u;
    {
        const bool branch_taken_0x31ead8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ead8) {
            ctx->pc = 0x31EB00u;
            goto label_31eb00;
        }
    }
    ctx->pc = 0x31EAE0u;
    // 0x31eae0: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x31eae0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x31eae4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x31eae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31eae8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31eae8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x31eaec: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x31eaecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x31eaf0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x31EAF0u;
    {
        const bool branch_taken_0x31eaf0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31eaf0) {
            ctx->pc = 0x31EB00u;
            goto label_31eb00;
        }
    }
    ctx->pc = 0x31EAF8u;
    // 0x31eaf8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x31eaf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31eafc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x31eafcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31eb00:
    // 0x31eb00: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x31EB00u;
    {
        const bool branch_taken_0x31eb00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eb00) {
            ctx->pc = 0x31EB0Cu;
            goto label_31eb0c;
        }
    }
    ctx->pc = 0x31EB08u;
    // 0x31eb08: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x31eb08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
label_31eb0c:
    // 0x31eb0c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x31eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31eb10: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x31eb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x31eb14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31EB14u;
    {
        const bool branch_taken_0x31eb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eb14) {
            ctx->pc = 0x31EB20u;
            goto label_31eb20;
        }
    }
    ctx->pc = 0x31EB1Cu;
    // 0x31eb1c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x31eb1cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31eb20:
    // 0x31eb20: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x31eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31eb24: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x31eb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x31eb28: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31EB28u;
    {
        const bool branch_taken_0x31eb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eb28) {
            ctx->pc = 0x31EB34u;
            goto label_31eb34;
        }
    }
    ctx->pc = 0x31EB30u;
    // 0x31eb30: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x31eb30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31eb34:
    // 0x31eb34: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x31eb34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x31eb38: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x31eb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31eb3c: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x31eb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31eb40: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x31eb40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31eb44: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x31eb44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31eb48: 0xc0c7ae4  jal         func_31EB90
    ctx->pc = 0x31EB48u;
    SET_GPR_U32(ctx, 31, 0x31EB50u);
    ctx->pc = 0x31EB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EB90u, 0x31EB48u, 0x31EB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EB50u;
label_31eb50:
    // 0x31eb50: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x31eb50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x31eb54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31eb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31eb58: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x31eb58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x31eb5c: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x31eb5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31eb60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31eb64: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x31eb64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x31eb68: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x31eb68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31eb6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31eb6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31eb70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31eb70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31eb74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31eb74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31eb78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31eb78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31eb7c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x31eb7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31eb80: 0x3e00008  jr          $ra
    ctx->pc = 0x31EB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EB88u;
}
