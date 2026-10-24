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

// Function: Em09_R1_mv13
// Address: 0x34bea0 - 0x34d224
void Em09_R1_mv13_0x34bea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv13_0x34bea0");
#endif

    switch (ctx->pc) {
        case 0x34bf54u: goto label_34bf54;
        case 0x34c010u: goto label_34c010;
        case 0x34c068u: goto label_34c068;
        case 0x34c084u: goto label_34c084;
        case 0x34c09cu: goto label_34c09c;
        case 0x34c0b0u: goto label_34c0b0;
        case 0x34c0c4u: goto label_34c0c4;
        case 0x34c0d8u: goto label_34c0d8;
        case 0x34c118u: goto label_34c118;
        case 0x34c140u: goto label_34c140;
        case 0x34c154u: goto label_34c154;
        case 0x34c164u: goto label_34c164;
        case 0x34c1acu: goto label_34c1ac;
        case 0x34c204u: goto label_34c204;
        case 0x34c214u: goto label_34c214;
        case 0x34c224u: goto label_34c224;
        case 0x34c230u: goto label_34c230;
        case 0x34c3a0u: goto label_34c3a0;
        case 0x34c424u: goto label_34c424;
        case 0x34c430u: goto label_34c430;
        case 0x34c4bcu: goto label_34c4bc;
        case 0x34c4d0u: goto label_34c4d0;
        case 0x34c4e4u: goto label_34c4e4;
        case 0x34c524u: goto label_34c524;
        case 0x34c55cu: goto label_34c55c;
        case 0x34c570u: goto label_34c570;
        case 0x34c580u: goto label_34c580;
        case 0x34c5b0u: goto label_34c5b0;
        case 0x34c5c4u: goto label_34c5c4;
        case 0x34c5d0u: goto label_34c5d0;
        case 0x34c5f0u: goto label_34c5f0;
        case 0x34c608u: goto label_34c608;
        case 0x34c614u: goto label_34c614;
        case 0x34c708u: goto label_34c708;
        case 0x34c718u: goto label_34c718;
        case 0x34c764u: goto label_34c764;
        case 0x34c808u: goto label_34c808;
        case 0x34c8d8u: goto label_34c8d8;
        case 0x34c960u: goto label_34c960;
        case 0x34c96cu: goto label_34c96c;
        case 0x34c9fcu: goto label_34c9fc;
        case 0x34ca14u: goto label_34ca14;
        case 0x34ca2cu: goto label_34ca2c;
        case 0x34ca48u: goto label_34ca48;
        case 0x34ca5cu: goto label_34ca5c;
        case 0x34ca74u: goto label_34ca74;
        case 0x34ca88u: goto label_34ca88;
        case 0x34cbf8u: goto label_34cbf8;
        case 0x34ccc8u: goto label_34ccc8;
        case 0x34cce0u: goto label_34cce0;
        case 0x34ccf4u: goto label_34ccf4;
        case 0x34cdccu: goto label_34cdcc;
        case 0x34cde8u: goto label_34cde8;
        case 0x34ce00u: goto label_34ce00;
        case 0x34ce18u: goto label_34ce18;
        case 0x34ce2cu: goto label_34ce2c;
        case 0x34ce74u: goto label_34ce74;
        case 0x34d0b4u: goto label_34d0b4;
        case 0x34d0d0u: goto label_34d0d0;
        case 0x34d0ecu: goto label_34d0ec;
        case 0x34d174u: goto label_34d174;
        case 0x34d180u: goto label_34d180;
        case 0x34d19cu: goto label_34d19c;
        case 0x34d1b8u: goto label_34d1b8;
        case 0x34d204u: goto label_34d204;
        default: break;
    }

    ctx->pc = 0x34bea0u;

    // 0x34bea0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x34bea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x34bea4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x34bea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x34bea8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34bea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34beac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34beacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34beb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34beb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34beb4: 0xafa40128  sw          $a0, 0x128($sp)
    ctx->pc = 0x34beb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 4));
    // 0x34beb8: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34beb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bebc: 0x8c9002d0  lw          $s0, 0x2D0($a0)
    ctx->pc = 0x34bebcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x34bec0: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x34bec0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x34bec4: 0x24c3dbc0  addiu       $v1, $a2, -0x2440
    ctx->pc = 0x34bec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958016));
    // 0x34bec8: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x34bec8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x34becc: 0x8fb00128  lw          $s0, 0x128($sp)
    ctx->pc = 0x34beccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bed0: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x34bed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x34bed4: 0x8c700020  lw          $s0, 0x20($v1)
    ctx->pc = 0x34bed4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x34bed8: 0x26100005  addiu       $s0, $s0, 0x5
    ctx->pc = 0x34bed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x34bedc: 0xac700020  sw          $s0, 0x20($v1)
    ctx->pc = 0x34bedcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 16));
    // 0x34bee0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bee4: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x34bee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bee8: 0x8cc40024  lw          $a0, 0x24($a2)
    ctx->pc = 0x34bee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x34beec: 0x24830005  addiu       $v1, $a0, 0x5
    ctx->pc = 0x34beecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x34bef0: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x34bef0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x34bef4: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34bef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bef8: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x34bef8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x34befc: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x34befcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34bf00: 0x2cc10008  sltiu       $at, $a2, 0x8
    ctx->pc = 0x34bf00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x34bf04: 0x102003f2  beqz        $at, . + 4 + (0x3F2 << 2)
    ctx->pc = 0x34BF04u;
    {
        const bool branch_taken_0x34bf04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bf04) {
            ctx->pc = 0x34CED0u;
            goto label_34ced0;
        }
    }
    ctx->pc = 0x34BF0Cu;
    // 0x34bf0c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x34bf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x34bf10: 0x246329c0  addiu       $v1, $v1, 0x29C0
    ctx->pc = 0x34bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10688));
    // 0x34bf14: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x34bf14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x34bf18: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x34bf18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x34bf1c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x34bf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34bf20: 0x800008  jr          $a0
    ctx->pc = 0x34BF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x34BF28u: goto label_34bf28;
            case 0x34C01Cu: goto label_34c01c;
            case 0x34C130u: goto label_34c130;
            case 0x34C1F4u: goto label_34c1f4;
            case 0x34C54Cu: goto label_34c54c;
            case 0x34CA38u: goto label_34ca38;
            case 0x34CCB4u: goto label_34ccb4;
            case 0x34CD9Cu: goto label_34cd9c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BF20u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x34BF28u;
label_34bf28:
    // 0x34bf28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34bf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bf2c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34bf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bf30: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x34bf30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x34bf34: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bf38: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bf3c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x34bf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x34bf40: 0x24061e27  addiu       $a2, $zero, 0x1E27
    ctx->pc = 0x34bf40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7719));
    // 0x34bf44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34bf44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bf48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34bf48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34bf4c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34BF4Cu;
    SET_GPR_U32(ctx, 31, 0x34BF54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34BF4Cu, 0x34BF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BF54u;
label_34bf54:
    // 0x34bf54: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34bf54u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34bf58: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34bf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bf5c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34bf60: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34bf64: 0x34440001  ori         $a0, $v0, 0x1
    ctx->pc = 0x34bf64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34bf68: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x34bf68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x34bf6c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34bf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bf70: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x34bf70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x34bf74: 0xa0c0006e  sb          $zero, 0x6E($a2)
    ctx->pc = 0x34bf74u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bf78: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x34bf78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34bf7c: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x34bf7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bf80: 0x25021330  addiu       $v0, $t0, 0x1330
    ctx->pc = 0x34bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x34bf84: 0xa047006f  sb          $a3, 0x6F($v0)
    ctx->pc = 0x34bf84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 7));
    // 0x34bf88: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x34bf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34bf8c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34bf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bf90: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x34bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x34bf94: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x34bf94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
    // 0x34bf98: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34bf98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bf9c: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x34bf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x34bfa0: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x34bfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34bfa4: 0x34850010  ori         $a1, $a0, 0x10
    ctx->pc = 0x34bfa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x34bfa8: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x34bfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x34bfac: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x34bfacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bfb0: 0x8cd202d0  lw          $s2, 0x2D0($a2)
    ctx->pc = 0x34bfb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
    // 0x34bfb4: 0x26460960  addiu       $a2, $s2, 0x960
    ctx->pc = 0x34bfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2400));
    // 0x34bfb8: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x34bfb8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x34bfbc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x34bfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34bfc0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x34bfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34bfc4: 0x34830004  ori         $v1, $a0, 0x4
    ctx->pc = 0x34bfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x34bfc8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x34bfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x34bfcc: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x34bfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x34bfd0: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34bfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bfd4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x34bfd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x34bfd8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34bfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bfdc: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x34bfdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x34bfe0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x34bfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x34bfe4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34bfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34bfe8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34bfe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34bfec: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bff0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bff4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x34bff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x34bff8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34bff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34bffc: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x34bffcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x34c000: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c004: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x34c004u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x34c008: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34C008u;
    SET_GPR_U32(ctx, 31, 0x34C010u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34C008u, 0x34C010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C010u;
label_34c010:
    // 0x34c010: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c010u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c014: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34c014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34c018: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x34c018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_34c01c:
    // 0x34c01c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34c01cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c020: 0x90a409db  lbu         $a0, 0x9DB($a1)
    ctx->pc = 0x34c020u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2523)));
    // 0x34c024: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x34c024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34c028: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x34c028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x34c02c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x34C02Cu;
    {
        const bool branch_taken_0x34c02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c02c) {
            ctx->pc = 0x34C08Cu;
            goto label_34c08c;
        }
    }
    ctx->pc = 0x34C034u;
    // 0x34c034: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x34c034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c038: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c03c: 0x3c053dd6  lui         $a1, 0x3DD6
    ctx->pc = 0x34c03cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15830 << 16));
    // 0x34c040: 0x34a47750  ori         $a0, $a1, 0x7750
    ctx->pc = 0x34c040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30544);
    // 0x34c044: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x34c044u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34c048: 0x24c60120  addiu       $a2, $a2, 0x120
    ctx->pc = 0x34c048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x34c04c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x34c04cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x34c050: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x34c050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34c054: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x34c054u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x34c058: 0x24e8dce0  addiu       $t0, $a3, -0x2320
    ctx->pc = 0x34c058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958304));
    // 0x34c05c: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x34c05cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x34c060: 0xc05c848  jal         func_172120
    ctx->pc = 0x34C060u;
    SET_GPR_U32(ctx, 31, 0x34C068u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x34C060u, 0x34C068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C068u;
label_34c068:
    // 0x34c068: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x34c068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x34c06c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c070: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x34c070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c074: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x34c074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c078: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x34c078u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34c07c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34C07Cu;
    SET_GPR_U32(ctx, 31, 0x34C084u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34C07Cu, 0x34C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C084u;
label_34c084:
    // 0x34c084: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c088: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x34c088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_34c08c:
    // 0x34c08c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c090: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34c090u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c094: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34C094u;
    SET_GPR_U32(ctx, 31, 0x34C09Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34C094u, 0x34C09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C09Cu;
label_34c09c:
    // 0x34c09c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c09cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c0a0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c0a4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x34c0a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x34c0a8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34C0A8u;
    SET_GPR_U32(ctx, 31, 0x34C0B0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34C0A8u, 0x34C0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C0B0u;
label_34c0b0:
    // 0x34c0b0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x34c0b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c0b4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c0b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34c0b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c0bc: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34C0BCu;
    SET_GPR_U32(ctx, 31, 0x34C0C4u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34C0BCu, 0x34C0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C0C4u;
label_34c0c4:
    // 0x34c0c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c0c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c0c8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c0cc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x34c0ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x34c0d0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34C0D0u;
    SET_GPR_U32(ctx, 31, 0x34C0D8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34C0D0u, 0x34C0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C0D8u;
label_34c0d8:
    // 0x34c0d8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c0d8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c0dc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c0e0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34c0e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34c0e4: 0x1060037a  beqz        $v1, . + 4 + (0x37A << 2)
    ctx->pc = 0x34C0E4u;
    {
        const bool branch_taken_0x34c0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c0e4) {
            ctx->pc = 0x34CED0u;
            goto label_34ced0;
        }
    }
    ctx->pc = 0x34C0ECu;
    // 0x34c0ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34c0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34c0f0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c0f4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x34c0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x34c0f8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c0fc: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c100: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x34c100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x34c104: 0x2406042b  addiu       $a2, $zero, 0x42B
    ctx->pc = 0x34c104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1067));
    // 0x34c108: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34c108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c10c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34c10cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34c110: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34C110u;
    SET_GPR_U32(ctx, 31, 0x34C118u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34C110u, 0x34C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C118u;
label_34c118:
    // 0x34c118: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c118u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c11c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x34c11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34c120: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x34c120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c124: 0xa4c3127a  sh          $v1, 0x127A($a2)
    ctx->pc = 0x34c124u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x34c128: 0x10000369  b           . + 4 + (0x369 << 2)
    ctx->pc = 0x34C128u;
    {
        const bool branch_taken_0x34c128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c128) {
            ctx->pc = 0x34CED0u;
            goto label_34ced0;
        }
    }
    ctx->pc = 0x34C130u;
label_34c130:
    // 0x34c130: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c134: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x34c134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34c138: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34C138u;
    SET_GPR_U32(ctx, 31, 0x34C140u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34C138u, 0x34C140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C140u;
label_34c140:
    // 0x34c140: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c140u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c144: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c148: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34c148u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c14c: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34C14Cu;
    SET_GPR_U32(ctx, 31, 0x34C154u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34C14Cu, 0x34C154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C154u;
label_34c154:
    // 0x34c154: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c154u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c158: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c15c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34C15Cu;
    SET_GPR_U32(ctx, 31, 0x34C164u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34C15Cu, 0x34C164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C164u;
label_34c164:
    // 0x34c164: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c164u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c168: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c16c: 0x8465127a  lh          $a1, 0x127A($v1)
    ctx->pc = 0x34c16cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x34c170: 0x24a7ffff  addiu       $a3, $a1, -0x1
    ctx->pc = 0x34c170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x34c174: 0xa467127a  sh          $a3, 0x127A($v1)
    ctx->pc = 0x34c174u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 7));
    // 0x34c178: 0x14a00355  bnez        $a1, . + 4 + (0x355 << 2)
    ctx->pc = 0x34C178u;
    {
        const bool branch_taken_0x34c178 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c178) {
            ctx->pc = 0x34CED0u;
            goto label_34ced0;
        }
    }
    ctx->pc = 0x34C180u;
    // 0x34c180: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34c180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34c184: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c188: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x34c188u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34c18c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c190: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c194: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x34c194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x34c198: 0x24060428  addiu       $a2, $zero, 0x428
    ctx->pc = 0x34c198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1064));
    // 0x34c19c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34c19cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c1a0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34c1a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34c1a4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34C1A4u;
    SET_GPR_U32(ctx, 31, 0x34C1ACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34C1A4u, 0x34C1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C1ACu;
label_34c1ac:
    // 0x34c1ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c1acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c1b0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c1b4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x34c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34c1b8: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x34c1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x34c1bc: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34c1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34c1c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34c1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34c1c4: 0x34650002  ori         $a1, $v1, 0x2
    ctx->pc = 0x34c1c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x34c1c8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x34c1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x34c1cc: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x34c1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c1d0: 0x8ce302d0  lw          $v1, 0x2D0($a3)
    ctx->pc = 0x34c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 720)));
    // 0x34c1d4: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x34c1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x34c1d8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x34c1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34c1dc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x34c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34c1e0: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x34c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x34c1e4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x34c1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x34c1e8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x34c1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x34c1ec: 0x10000338  b           . + 4 + (0x338 << 2)
    ctx->pc = 0x34C1ECu;
    {
        const bool branch_taken_0x34c1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c1ec) {
            ctx->pc = 0x34CED0u;
            goto label_34ced0;
        }
    }
    ctx->pc = 0x34C1F4u;
label_34c1f4:
    // 0x34c1f4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c1f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34c1f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c1fc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34C1FCu;
    SET_GPR_U32(ctx, 31, 0x34C204u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34C1FCu, 0x34C204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C204u;
label_34c204:
    // 0x34c204: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34c204u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c208: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c20c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34C20Cu;
    SET_GPR_U32(ctx, 31, 0x34C214u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34C20Cu, 0x34C214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C214u;
label_34c214:
    // 0x34c214: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c218: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34c218u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c21c: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34C21Cu;
    SET_GPR_U32(ctx, 31, 0x34C224u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34C21Cu, 0x34C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C224u;
label_34c224:
    // 0x34c224: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c228: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34C228u;
    SET_GPR_U32(ctx, 31, 0x34C230u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34C228u, 0x34C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C230u;
label_34c230:
    // 0x34c230: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34c230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c234: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x34c234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34c238: 0x247007d0  addiu       $s0, $v1, 0x7D0
    ctx->pc = 0x34c238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
    // 0x34c23c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34c23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c240: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x34c240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x34c244: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x34c244u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x34c248: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x34c248u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34c24c: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x34c24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c250: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x34c250u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x34c254: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x34c254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c258: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34c258u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34c25c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x34c25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x34c260: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c264: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34c264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34c268: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x34c268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x34c26c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34c26cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34c270: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x34c270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c274: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x34c274u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x34c278: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x34c278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c27c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34c27cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34c280: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x34c280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x34c284: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x34c284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c288: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x34c288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x34c28c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c28cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c290: 0x0  nop
    ctx->pc = 0x34c290u;
    // NOP
    // 0x34c294: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34c294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c298: 0x0  nop
    ctx->pc = 0x34c298u;
    // NOP
    // 0x34c29c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x34C29Cu;
    {
        const bool branch_taken_0x34c29c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34c29c) {
            ctx->pc = 0x34C2C4u;
            goto label_34c2c4;
        }
    }
    ctx->pc = 0x34C2A4u;
    // 0x34c2a4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x34c2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x34c2a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c2a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c2ac: 0x0  nop
    ctx->pc = 0x34c2acu;
    // NOP
    // 0x34c2b0: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x34c2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x34c2b4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x34c2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x34c2b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c2b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c2bc: 0x0  nop
    ctx->pc = 0x34c2bcu;
    // NOP
    // 0x34c2c0: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x34c2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_34c2c4:
    // 0x34c2c4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c2c8: 0x8464127a  lh          $a0, 0x127A($v1)
    ctx->pc = 0x34c2c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x34c2cc: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x34c2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34c2d0: 0xa465127a  sh          $a1, 0x127A($v1)
    ctx->pc = 0x34c2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 5));
    // 0x34c2d4: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x34c2d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x34c2d8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x34c2d8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x34c2dc: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x34c2dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
    // 0x34c2e0: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x34c2e0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x34c2e4: 0x28e1001a  slti        $at, $a3, 0x1A
    ctx->pc = 0x34c2e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x34c2e8: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x34C2E8u;
    {
        const bool branch_taken_0x34c2e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c2e8) {
            ctx->pc = 0x34C32Cu;
            goto label_34c32c;
        }
    }
    ctx->pc = 0x34C2F0u;
    // 0x34c2f0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c2f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34c2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34c2f8: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34c2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c2fc: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x34c2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c300: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34c300u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34c304: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x34c304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x34c308: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34c308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c30c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34c310: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34c310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c314: 0x3c043da3  lui         $a0, 0x3DA3
    ctx->pc = 0x34c314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15779 << 16));
    // 0x34c318: 0x3490d70a  ori         $s0, $a0, 0xD70A
    ctx->pc = 0x34c318u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x34c31c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x34c31cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c320: 0x0  nop
    ctx->pc = 0x34c320u;
    // NOP
    // 0x34c324: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34c324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34c328: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34c328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_34c32c:
    // 0x34c32c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c330: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x34c330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x34c334: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x34c334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x34c338: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x34c338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x34c33c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34c33cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c340: 0x0  nop
    ctx->pc = 0x34c340u;
    // NOP
    // 0x34c344: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x34c344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x34c348: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34c348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c34c: 0x0  nop
    ctx->pc = 0x34c34cu;
    // NOP
    // 0x34c350: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x34c350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x34c354: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34c354u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c358: 0x0  nop
    ctx->pc = 0x34c358u;
    // NOP
    // 0x34c35c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x34c35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x34c360: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34c360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x34c364: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c368: 0x0  nop
    ctx->pc = 0x34c368u;
    // NOP
    // 0x34c36c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x34c36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x34c370: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x34c370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x34c374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34c374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c378: 0x0  nop
    ctx->pc = 0x34c378u;
    // NOP
    // 0x34c37c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x34c37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x34c380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34c380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c384: 0xa7a20094  sh          $v0, 0x94($sp)
    ctx->pc = 0x34c384u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x34c388: 0xa3a00096  sb          $zero, 0x96($sp)
    ctx->pc = 0x34c388u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 150), (uint8_t)GPR_U32(ctx, 0));
    // 0x34c38c: 0xa3a00097  sb          $zero, 0x97($sp)
    ctx->pc = 0x34c38cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 151), (uint8_t)GPR_U32(ctx, 0));
    // 0x34c390: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c394: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x34c394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34c398: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x34C398u;
    SET_GPR_U32(ctx, 31, 0x34C3A0u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x34C398u, 0x34C3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C3A0u;
label_34c3a0:
    // 0x34c3a0: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x34C3A0u;
    {
        const bool branch_taken_0x34c3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c3a0) {
            ctx->pc = 0x34C4E8u;
            goto label_34c4e8;
        }
    }
    ctx->pc = 0x34C3A8u;
    // 0x34c3a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34c3a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c3ac: 0x0  nop
    ctx->pc = 0x34c3acu;
    // NOP
    // 0x34c3b0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x34c3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x34c3b4: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x34c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x34c3b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34c3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c3bc: 0x0  nop
    ctx->pc = 0x34c3bcu;
    // NOP
    // 0x34c3c0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x34c3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x34c3c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34c3c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c3c8: 0x0  nop
    ctx->pc = 0x34c3c8u;
    // NOP
    // 0x34c3cc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x34c3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x34c3d0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x34c3d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c3d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c3d8: 0x0  nop
    ctx->pc = 0x34c3d8u;
    // NOP
    // 0x34c3dc: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x34c3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x34c3e0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c3e4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x34c3e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x34c3e8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x34c3e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x34c3ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x34c3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x34c3f0: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x34c3f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x34c3f4: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x34c3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x34c3f8: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x34c3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x34c3fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34c3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x34c400: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x34c400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x34c404: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c408: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x34c408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x34c40c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x34c40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x34c410: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x34c410u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c414: 0x246701c0  addiu       $a3, $v1, 0x1C0
    ctx->pc = 0x34c414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x34c418: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x34c418u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c41c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x34C41Cu;
    SET_GPR_U32(ctx, 31, 0x34C424u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x34C41Cu, 0x34C424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C424u;
label_34c424:
    // 0x34c424: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c424u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c428: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34C428u;
    SET_GPR_U32(ctx, 31, 0x34C430u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34C428u, 0x34C430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C430u;
label_34c430:
    // 0x34c430: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34c430u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c434: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34C434u;
    {
        const bool branch_taken_0x34c434 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x34c434) {
            ctx->pc = 0x34C450u;
            goto label_34c450;
        }
    }
    ctx->pc = 0x34C43Cu;
    // 0x34c43c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34c43cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c440: 0x0  nop
    ctx->pc = 0x34c440u;
    // NOP
    // 0x34c444: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x34c444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34c448: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34C448u;
    {
        const bool branch_taken_0x34c448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c448) {
            ctx->pc = 0x34C46Cu;
            goto label_34c46c;
        }
    }
    ctx->pc = 0x34C450u;
label_34c450:
    // 0x34c450: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x34c450u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x34c454: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x34c454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x34c458: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x34c458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x34c45c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c45cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c460: 0x0  nop
    ctx->pc = 0x34c460u;
    // NOP
    // 0x34c464: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x34c464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34c468: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34c468u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_34c46c:
    // 0x34c46c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x34c46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c470: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34c470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34c474: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x34c474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x34c478: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c47c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x34c47cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x34c480: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x34c480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x34c484: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x34c484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x34c488: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x34c488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x34c48c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x34c48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x34c490: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34c490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34c494: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x34c494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x34c498: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x34c498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x34c49c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c4a0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x34c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x34c4a4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x34c4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x34c4a8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x34c4a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c4ac: 0x246701c0  addiu       $a3, $v1, 0x1C0
    ctx->pc = 0x34c4acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x34c4b0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x34c4b0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c4b4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x34C4B4u;
    SET_GPR_U32(ctx, 31, 0x34C4BCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x34C4B4u, 0x34C4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C4BCu;
label_34c4bc:
    // 0x34c4bc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c4bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c4c0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x34c4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x34c4c4: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x34c4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x34c4c8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x34C4C8u;
    SET_GPR_U32(ctx, 31, 0x34C4D0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x34C4C8u, 0x34C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C4D0u;
label_34c4d0:
    // 0x34c4d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c4d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c4d4: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x34c4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x34c4d8: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x34c4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x34c4dc: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x34C4DCu;
    SET_GPR_U32(ctx, 31, 0x34C4E4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x34C4DCu, 0x34C4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C4E4u;
label_34c4e4:
    // 0x34c4e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c4e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_34c4e8:
    // 0x34c4e8: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34c4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c4ec: 0x90a309e7  lbu         $v1, 0x9E7($a1)
    ctx->pc = 0x34c4ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x34c4f0: 0x10600277  beqz        $v1, . + 4 + (0x277 << 2)
    ctx->pc = 0x34C4F0u;
    {
        const bool branch_taken_0x34c4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c4f0) {
            ctx->pc = 0x34CED0u;
            goto label_34ced0;
        }
    }
    ctx->pc = 0x34C4F8u;
    // 0x34c4f8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x34c4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34c4fc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c500: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x34c500u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x34c504: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34c504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c508: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c50c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34c50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34c510: 0x24060429  addiu       $a2, $zero, 0x429
    ctx->pc = 0x34c510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1065));
    // 0x34c514: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34c514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c518: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34c518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34c51c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34C51Cu;
    SET_GPR_U32(ctx, 31, 0x34C524u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34C51Cu, 0x34C524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C524u;
label_34c524:
    // 0x34c524: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c524u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c528: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c52c: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x34c52cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x34c530: 0x3c104040  lui         $s0, 0x4040
    ctx->pc = 0x34c530u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16448 << 16));
    // 0x34c534: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x34c534u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c538: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c53c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34c53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34c540: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x34c540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x34c544: 0x10000262  b           . + 4 + (0x262 << 2)
    ctx->pc = 0x34C544u;
    {
        const bool branch_taken_0x34c544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c544) {
            ctx->pc = 0x34CED0u;
            goto label_34ced0;
        }
    }
    ctx->pc = 0x34C54Cu;
label_34c54c:
    // 0x34c54c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c550: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34c550u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c554: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34C554u;
    SET_GPR_U32(ctx, 31, 0x34C55Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34C554u, 0x34C55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C55Cu;
label_34c55c:
    // 0x34c55c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c55cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c560: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c564: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34c564u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c568: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34C568u;
    SET_GPR_U32(ctx, 31, 0x34C570u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34C568u, 0x34C570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C570u;
label_34c570:
    // 0x34c570: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c570u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c574: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c578: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34C578u;
    SET_GPR_U32(ctx, 31, 0x34C580u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34C578u, 0x34C580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C580u;
label_34c580:
    // 0x34c580: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x34c580u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c584: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x34c584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c588: 0x8cc302d0  lw          $v1, 0x2D0($a2)
    ctx->pc = 0x34c588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
    // 0x34c58c: 0x247007d0  addiu       $s0, $v1, 0x7D0
    ctx->pc = 0x34c58cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
    // 0x34c590: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c594: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x34c594u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34c598: 0x261007d0  addiu       $s0, $s0, 0x7D0
    ctx->pc = 0x34c598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2000));
    // 0x34c59c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c5a0: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x34c5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34c5a4: 0xc4cc0010  lwc1        $f12, 0x10($a2)
    ctx->pc = 0x34c5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34c5a8: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x34C5A8u;
    SET_GPR_U32(ctx, 31, 0x34C5B0u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x34C5A8u, 0x34C5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C5B0u;
label_34c5b0:
    // 0x34c5b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34c5b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c5b4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x34c5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x34c5b8: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x34c5b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x34c5bc: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x34C5BCu;
    SET_GPR_U32(ctx, 31, 0x34C5C4u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x34C5BCu, 0x34C5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C5C4u;
label_34c5c4:
    // 0x34c5c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34c5c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c5c8: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x34C5C8u;
    SET_GPR_U32(ctx, 31, 0x34C5D0u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x34C5C8u, 0x34C5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C5D0u;
label_34c5d0:
    // 0x34c5d0: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x34c5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c5d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34c5d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34c5d8: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x34c5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x34c5dc: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x34c5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c5e0: 0x24c31330  addiu       $v1, $a2, 0x1330
    ctx->pc = 0x34c5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x34c5e4: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x34c5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34c5e8: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x34C5E8u;
    SET_GPR_U32(ctx, 31, 0x34C5F0u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x34C5E8u, 0x34C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C5F0u;
label_34c5f0:
    // 0x34c5f0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c5f0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c5f4: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x34c5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x34c5f8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x34c5f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x34c5fc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x34c5fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x34c600: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x34C600u;
    SET_GPR_U32(ctx, 31, 0x34C608u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x34C600u, 0x34C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C608u;
label_34c608:
    // 0x34c608: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34c608u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c60c: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x34C60Cu;
    SET_GPR_U32(ctx, 31, 0x34C614u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x34C60Cu, 0x34C614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C614u;
label_34c614:
    // 0x34c614: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x34c614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c618: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34c618u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34c61c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x34c61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x34c620: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x34c620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c624: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x34c624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x34c628: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34c628u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c62c: 0x0  nop
    ctx->pc = 0x34c62cu;
    // NOP
    // 0x34c630: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34c630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c634: 0x0  nop
    ctx->pc = 0x34c634u;
    // NOP
    // 0x34c638: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x34C638u;
    {
        const bool branch_taken_0x34c638 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34c638) {
            ctx->pc = 0x34C660u;
            goto label_34c660;
        }
    }
    ctx->pc = 0x34C640u;
    // 0x34c640: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x34c640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x34c644: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c648: 0x0  nop
    ctx->pc = 0x34c648u;
    // NOP
    // 0x34c64c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x34c64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x34c650: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x34c650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x34c654: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c658: 0x0  nop
    ctx->pc = 0x34c658u;
    // NOP
    // 0x34c65c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x34c65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_34c660:
    // 0x34c660: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c664: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34c664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34c668: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x34c668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c66c: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x34c66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c670: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34c670u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34c674: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x34c674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x34c678: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x34c678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c67c: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x34c67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x34c680: 0xc4e10010  lwc1        $f1, 0x10($a3)
    ctx->pc = 0x34c680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c684: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x34c684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x34c688: 0x3468999a  ori         $t0, $v1, 0x999A
    ctx->pc = 0x34c688u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x34c68c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x34c68cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c690: 0x0  nop
    ctx->pc = 0x34c690u;
    // NOP
    // 0x34c694: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34c694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34c698: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x34c698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x34c69c: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x34c69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c6a0: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x34c6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x34c6a4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34c6a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c6a8: 0x0  nop
    ctx->pc = 0x34c6a8u;
    // NOP
    // 0x34c6ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34c6acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c6b0: 0x0  nop
    ctx->pc = 0x34c6b0u;
    // NOP
    // 0x34c6b4: 0x45010061  bc1t        . + 4 + (0x61 << 2)
    ctx->pc = 0x34C6B4u;
    {
        const bool branch_taken_0x34c6b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34c6b4) {
            ctx->pc = 0x34C83Cu;
            goto label_34c83c;
        }
    }
    ctx->pc = 0x34C6BCu;
    // 0x34c6bc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x34c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x34c6c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c6c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c6c4: 0x0  nop
    ctx->pc = 0x34c6c4u;
    // NOP
    // 0x34c6c8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x34c6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x34c6cc: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c6d0: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34c6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34c6d4: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x34c6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c6d8: 0x3c063e19  lui         $a2, 0x3E19
    ctx->pc = 0x34c6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15897 << 16));
    // 0x34c6dc: 0x34c5999a  ori         $a1, $a2, 0x999A
    ctx->pc = 0x34c6dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)39322);
    // 0x34c6e0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x34c6e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c6e4: 0x0  nop
    ctx->pc = 0x34c6e4u;
    // NOP
    // 0x34c6e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34c6e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34c6ec: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x34c6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x34c6f0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x34c6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34c6f4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x34c6f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x34c6f8: 0x26280120  addiu       $t0, $s1, 0x120
    ctx->pc = 0x34c6f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x34c6fc: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x34c6fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x34c700: 0xc040c9e  jal         func_103278
    ctx->pc = 0x34C700u;
    SET_GPR_U32(ctx, 31, 0x34C708u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x34C708u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x34C708u) { return; }
    ctx->pc = 0x34C708u;
label_34c708:
    // 0x34c708: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x34c708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34c70c: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x34c70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x34c710: 0xc040c9e  jal         func_103278
    ctx->pc = 0x34C710u;
    SET_GPR_U32(ctx, 31, 0x34C718u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x34C718u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x34C718u) { return; }
    ctx->pc = 0x34C718u;
label_34c718:
    // 0x34c718: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c718u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c71c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x34c71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c720: 0x3c054248  lui         $a1, 0x4248
    ctx->pc = 0x34c720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16968 << 16));
    // 0x34c724: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x34c724u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c728: 0x0  nop
    ctx->pc = 0x34c728u;
    // NOP
    // 0x34c72c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34c72cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34c730: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x34c730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x34c734: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x34c734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c738: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x34c738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x34c73c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c73cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c740: 0x0  nop
    ctx->pc = 0x34c740u;
    // NOP
    // 0x34c744: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34c744u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34c748: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x34c748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x34c74c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x34c74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34c750: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x34c750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34c754: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x34c754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34c758: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x34c758u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c75c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x34C75Cu;
    SET_GPR_U32(ctx, 31, 0x34C764u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x34C75Cu, 0x34C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C764u;
label_34c764:
    // 0x34c764: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x34c764u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c768: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x34c768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c76c: 0x94c510a4  lhu         $a1, 0x10A4($a2)
    ctx->pc = 0x34c76cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4260)));
    // 0x34c770: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x34c770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x34c774: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x34c774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34c778: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34c778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34c77c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x34c77cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x34c780: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x34c780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x34c784: 0x24635ac0  addiu       $v1, $v1, 0x5AC0
    ctx->pc = 0x34c784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23232));
    // 0x34c788: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34c788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34c78c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x34c78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x34c790: 0x12430005  beq         $s2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34C790u;
    {
        const bool branch_taken_0x34c790 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x34c790) {
            ctx->pc = 0x34C7A8u;
            goto label_34c7a8;
        }
    }
    ctx->pc = 0x34C798u;
    // 0x34c798: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c79c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x34c79cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x34c7a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34c7a4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x34c7a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_34c7a8:
    // 0x34c7a8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c7ac: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x34c7acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x34c7b0: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x34c7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x34c7b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x34c7b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x34c7b8: 0x2861002e  slti        $at, $v1, 0x2E
    ctx->pc = 0x34c7b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x34c7bc: 0x1420001f  bnez        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x34C7BCu;
    {
        const bool branch_taken_0x34c7bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c7bc) {
            ctx->pc = 0x34C83Cu;
            goto label_34c83c;
        }
    }
    ctx->pc = 0x34C7C4u;
    // 0x34c7c4: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34c7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c7c8: 0x84a4127c  lh          $a0, 0x127C($a1)
    ctx->pc = 0x34c7c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4732)));
    // 0x34c7cc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x34c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x34c7d0: 0xa4a3127c  sh          $v1, 0x127C($a1)
    ctx->pc = 0x34c7d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x34c7d4: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x34C7D4u;
    {
        const bool branch_taken_0x34c7d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c7d4) {
            ctx->pc = 0x34C814u;
            goto label_34c814;
        }
    }
    ctx->pc = 0x34C7DCu;
    // 0x34c7dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x34c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34c7e0: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x34c7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c7e4: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x34c7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34c7e8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c7ec: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c7f0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x34c7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x34c7f4: 0x2406042a  addiu       $a2, $zero, 0x42A
    ctx->pc = 0x34c7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1066));
    // 0x34c7f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34c7f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c7fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34c7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34c800: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34C800u;
    SET_GPR_U32(ctx, 31, 0x34C808u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34C800u, 0x34C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C808u;
label_34c808:
    // 0x34c808: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c808u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c80c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34C80Cu;
    {
        const bool branch_taken_0x34c80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c80c) {
            ctx->pc = 0x34C83Cu;
            goto label_34c83c;
        }
    }
    ctx->pc = 0x34C814u;
label_34c814:
    // 0x34c814: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x34c814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34c818: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c81c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x34c81cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34c820: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c824: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x34c824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34c828: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x34c828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x34c82c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34c82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34c830: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34c830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34c834: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x34c834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x34c838: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x34c838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_34c83c:
    // 0x34c83c: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x34c83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c840: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x34c840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x34c844: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c844u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c848: 0x0  nop
    ctx->pc = 0x34c848u;
    // NOP
    // 0x34c84c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x34c84cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c850: 0x0  nop
    ctx->pc = 0x34c850u;
    // NOP
    // 0x34c854: 0x4501019e  bc1t        . + 4 + (0x19E << 2)
    ctx->pc = 0x34C854u;
    {
        const bool branch_taken_0x34c854 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34c854) {
            ctx->pc = 0x34CED0u;
            goto label_34ced0;
        }
    }
    ctx->pc = 0x34C85Cu;
    // 0x34c85c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c860: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x34c860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x34c864: 0x246401c0  addiu       $a0, $v1, 0x1C0
    ctx->pc = 0x34c864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x34c868: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x34c868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x34c86c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34c86cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c870: 0x0  nop
    ctx->pc = 0x34c870u;
    // NOP
    // 0x34c874: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x34c874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x34c878: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34c878u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c87c: 0x0  nop
    ctx->pc = 0x34c87cu;
    // NOP
    // 0x34c880: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x34c880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x34c884: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34c884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c888: 0x0  nop
    ctx->pc = 0x34c888u;
    // NOP
    // 0x34c88c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x34c88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x34c890: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34c890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x34c894: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c898: 0x0  nop
    ctx->pc = 0x34c898u;
    // NOP
    // 0x34c89c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x34c89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x34c8a0: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x34c8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x34c8a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c8a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c8a8: 0x0  nop
    ctx->pc = 0x34c8a8u;
    // NOP
    // 0x34c8ac: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x34c8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x34c8b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34c8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c8b4: 0xa7a400d4  sh          $a0, 0xD4($sp)
    ctx->pc = 0x34c8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 212), (uint16_t)GPR_U32(ctx, 4));
    // 0x34c8b8: 0xa3a000d6  sb          $zero, 0xD6($sp)
    ctx->pc = 0x34c8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x34c8bc: 0xa3a000d7  sb          $zero, 0xD7($sp)
    ctx->pc = 0x34c8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 215), (uint8_t)GPR_U32(ctx, 0));
    // 0x34c8c0: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34c8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c8c4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x34c8c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x34c8c8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x34c8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x34c8cc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x34c8ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x34c8d0: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x34C8D0u;
    SET_GPR_U32(ctx, 31, 0x34C8D8u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x34C8D0u, 0x34C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C8D8u;
label_34c8d8:
    // 0x34c8d8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x34c8d8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c8dc: 0x10e0017c  beqz        $a3, . + 4 + (0x17C << 2)
    ctx->pc = 0x34C8DCu;
    {
        const bool branch_taken_0x34c8dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c8dc) {
            ctx->pc = 0x34CED0u;
            goto label_34ced0;
        }
    }
    ctx->pc = 0x34C8E4u;
    // 0x34c8e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34c8e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c8e8: 0x0  nop
    ctx->pc = 0x34c8e8u;
    // NOP
    // 0x34c8ec: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x34c8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x34c8f0: 0x3c0843c8  lui         $t0, 0x43C8
    ctx->pc = 0x34c8f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17352 << 16));
    // 0x34c8f4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x34c8f4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c8f8: 0x0  nop
    ctx->pc = 0x34c8f8u;
    // NOP
    // 0x34c8fc: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x34c8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x34c900: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34c900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c904: 0x0  nop
    ctx->pc = 0x34c904u;
    // NOP
    // 0x34c908: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x34c908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x34c90c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34c90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x34c910: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c914: 0x0  nop
    ctx->pc = 0x34c914u;
    // NOP
    // 0x34c918: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x34c918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x34c91c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c920: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x34c920u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x34c924: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x34c924u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x34c928: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x34c928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x34c92c: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x34c92cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
    // 0x34c930: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x34c930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x34c934: 0xc32024  and         $a0, $a2, $v1
    ctx->pc = 0x34c934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x34c938: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x34c938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x34c93c: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x34c93cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x34c940: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c944: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x34c944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x34c948: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x34c948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x34c94c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x34c94cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c950: 0x246701c0  addiu       $a3, $v1, 0x1C0
    ctx->pc = 0x34c950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x34c954: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x34c954u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c958: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x34C958u;
    SET_GPR_U32(ctx, 31, 0x34C960u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x34C958u, 0x34C960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C960u;
label_34c960:
    // 0x34c960: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c960u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c964: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34C964u;
    SET_GPR_U32(ctx, 31, 0x34C96Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34C964u, 0x34C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C96Cu;
label_34c96c:
    // 0x34c96c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34c96cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c970: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34C970u;
    {
        const bool branch_taken_0x34c970 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x34c970) {
            ctx->pc = 0x34C98Cu;
            goto label_34c98c;
        }
    }
    ctx->pc = 0x34C978u;
    // 0x34c978: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34c978u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c97c: 0x0  nop
    ctx->pc = 0x34c97cu;
    // NOP
    // 0x34c980: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x34c980u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34c984: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34C984u;
    {
        const bool branch_taken_0x34c984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c984) {
            ctx->pc = 0x34C9A8u;
            goto label_34c9a8;
        }
    }
    ctx->pc = 0x34C98Cu;
label_34c98c:
    // 0x34c98c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x34c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x34c990: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x34c990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x34c994: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x34c994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x34c998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c99c: 0x0  nop
    ctx->pc = 0x34c99cu;
    // NOP
    // 0x34c9a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x34c9a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34c9a4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34c9a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_34c9a8:
    // 0x34c9a8: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x34c9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c9ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34c9acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34c9b0: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x34c9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x34c9b4: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34c9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c9b8: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x34c9b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x34c9bc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x34c9bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x34c9c0: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x34c9c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x34c9c4: 0x74438  dsll        $t0, $a3, 16
    ctx->pc = 0x34c9c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << 16);
    // 0x34c9c8: 0x3503ffff  ori         $v1, $t0, 0xFFFF
    ctx->pc = 0x34c9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x34c9cc: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x34c9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x34c9d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x34c9d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x34c9d4: 0x34700006  ori         $s0, $v1, 0x6
    ctx->pc = 0x34c9d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x34c9d8: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c9dc: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x34c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x34c9e0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x34c9e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x34c9e4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x34c9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x34c9e8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x34c9e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c9ec: 0x246701c0  addiu       $a3, $v1, 0x1C0
    ctx->pc = 0x34c9ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x34c9f0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x34c9f0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c9f4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x34C9F4u;
    SET_GPR_U32(ctx, 31, 0x34C9FCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x34C9F4u, 0x34C9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C9FCu;
label_34c9fc:
    // 0x34c9fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c9fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ca00: 0x3c100100  lui         $s0, 0x100
    ctx->pc = 0x34ca00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)256 << 16));
    // 0x34ca04: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x34ca04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x34ca08: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x34ca08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x34ca0c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x34CA0Cu;
    SET_GPR_U32(ctx, 31, 0x34CA14u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x34CA0Cu, 0x34CA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CA14u;
label_34ca14:
    // 0x34ca14: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34ca14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ca18: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x34ca18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x34ca1c: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x34ca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x34ca20: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x34ca20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x34ca24: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x34CA24u;
    SET_GPR_U32(ctx, 31, 0x34CA2Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x34CA24u, 0x34CA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CA2Cu;
label_34ca2c:
    // 0x34ca2c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34ca2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ca30: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x34CA30u;
    {
        const bool branch_taken_0x34ca30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ca30) {
            ctx->pc = 0x34CED0u;
            goto label_34ced0;
        }
    }
    ctx->pc = 0x34CA38u;
label_34ca38:
    // 0x34ca38: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34ca38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ca3c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34ca3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34ca40: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34CA40u;
    SET_GPR_U32(ctx, 31, 0x34CA48u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34CA40u, 0x34CA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CA48u;
label_34ca48:
    // 0x34ca48: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34ca48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ca4c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ca50: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34ca50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ca54: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34CA54u;
    SET_GPR_U32(ctx, 31, 0x34CA5Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34CA54u, 0x34CA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CA5Cu;
label_34ca5c:
    // 0x34ca5c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34ca5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ca60: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ca64: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34ca64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ca68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34ca68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34ca6c: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34CA6Cu;
    SET_GPR_U32(ctx, 31, 0x34CA74u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34CA6Cu, 0x34CA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CA74u;
label_34ca74:
    // 0x34ca74: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34ca74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ca78: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ca7c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34ca7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ca80: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34CA80u;
    SET_GPR_U32(ctx, 31, 0x34CA88u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34CA80u, 0x34CA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CA88u;
label_34ca88:
    // 0x34ca88: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34ca88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ca8c: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x34ca8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34ca90: 0x260507d0  addiu       $a1, $s0, 0x7D0
    ctx->pc = 0x34ca90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2000));
    // 0x34ca94: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x34ca94u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x34ca98: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x34ca98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ca9c: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x34ca9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x34caa0: 0x3c043f19  lui         $a0, 0x3F19
    ctx->pc = 0x34caa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16153 << 16));
    // 0x34caa4: 0x3483999a  ori         $v1, $a0, 0x999A
    ctx->pc = 0x34caa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x34caa8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34caa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34caac: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x34caacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cab0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x34cab0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34cab4: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x34cab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cab8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34cab8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34cabc: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x34cabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x34cac0: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x34cac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cac4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x34cac8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34cac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cacc: 0x0  nop
    ctx->pc = 0x34caccu;
    // NOP
    // 0x34cad0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34cad0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cad4: 0x0  nop
    ctx->pc = 0x34cad4u;
    // NOP
    // 0x34cad8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x34CAD8u;
    {
        const bool branch_taken_0x34cad8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34cad8) {
            ctx->pc = 0x34CAF0u;
            goto label_34caf0;
        }
    }
    ctx->pc = 0x34CAE0u;
    // 0x34cae0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x34cae4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34cae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cae8: 0x0  nop
    ctx->pc = 0x34cae8u;
    // NOP
    // 0x34caec: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x34caecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_34caf0:
    // 0x34caf0: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x34caf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34caf4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x34caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x34caf8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34caf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34cafc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34cafcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cb00: 0x0  nop
    ctx->pc = 0x34cb00u;
    // NOP
    // 0x34cb04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34cb04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34cb08: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x34cb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x34cb0c: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x34cb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cb10: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x34cb10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
    // 0x34cb14: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x34cb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x34cb18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34cb18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cb1c: 0x0  nop
    ctx->pc = 0x34cb1cu;
    // NOP
    // 0x34cb20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34cb20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34cb24: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x34cb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x34cb28: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x34cb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cb2c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x34cb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x34cb30: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x34cb30u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cb34: 0x0  nop
    ctx->pc = 0x34cb34u;
    // NOP
    // 0x34cb38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34cb38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cb3c: 0x0  nop
    ctx->pc = 0x34cb3cu;
    // NOP
    // 0x34cb40: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x34CB40u;
    {
        const bool branch_taken_0x34cb40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34cb40) {
            ctx->pc = 0x34CB68u;
            goto label_34cb68;
        }
    }
    ctx->pc = 0x34CB48u;
    // 0x34cb48: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x34cb48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x34cb4c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x34cb4cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cb50: 0x0  nop
    ctx->pc = 0x34cb50u;
    // NOP
    // 0x34cb54: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x34cb54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x34cb58: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x34cb58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x34cb5c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x34cb5cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cb60: 0x0  nop
    ctx->pc = 0x34cb60u;
    // NOP
    // 0x34cb64: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x34cb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_34cb68:
    // 0x34cb68: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cb6c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34cb6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34cb70: 0x106000d7  beqz        $v1, . + 4 + (0xD7 << 2)
    ctx->pc = 0x34CB70u;
    {
        const bool branch_taken_0x34cb70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cb70) {
            ctx->pc = 0x34CED0u;
            goto label_34ced0;
        }
    }
    ctx->pc = 0x34CB78u;
    // 0x34cb78: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34cb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cb7c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34cb80: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34cb80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34cb84: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34cb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34cb88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34cb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34cb8c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x34cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x34cb90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34cb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34cb94: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x34cb94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x34cb98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cb9c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cba0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x34cba0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x34cba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cba8: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34cba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cbac: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x34cbacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x34cbb0: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34cbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cbb4: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x34cbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cbb8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cbbc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x34cbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cbc0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cbc4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34cbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x34cbc8: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x34cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34cbcc: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cbd0: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x34cbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34cbd4: 0xa4a30068  sh          $v1, 0x68($a1)
    ctx->pc = 0x34cbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 104), (uint16_t)GPR_U32(ctx, 3));
    // 0x34cbd8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cbdc: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34cbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34cbe0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34cbe4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x34cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34cbe8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34cbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34cbec: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x34cbecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x34cbf0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34CBF0u;
    SET_GPR_U32(ctx, 31, 0x34CBF8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34CBF0u, 0x34CBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CBF8u;
label_34cbf8:
    // 0x34cbf8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34cbf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34cbfc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x34cbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34cc00: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x34cc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x34cc04: 0x246500fa  addiu       $a1, $v1, 0xFA
    ctx->pc = 0x34cc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 250));
    // 0x34cc08: 0x53c3c  dsll32      $a3, $a1, 16
    ctx->pc = 0x34cc08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 16));
    // 0x34cc0c: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x34cc0cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x34cc10: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cc14: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34cc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cc18: 0xa4870034  sh          $a3, 0x34($a0)
    ctx->pc = 0x34cc18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 7));
    // 0x34cc1c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cc20: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34cc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cc24: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x34cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34cc28: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x34cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x34cc2c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x34cc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x34cc30: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x34cc34: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cc38: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34cc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cc3c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x34cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34cc40: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x34cc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x34cc44: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34CC44u;
    {
        const bool branch_taken_0x34cc44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cc44) {
            ctx->pc = 0x34CC80u;
            goto label_34cc80;
        }
    }
    ctx->pc = 0x34CC4Cu;
    // 0x34cc4c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34cc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cc50: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34cc54: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x34cc54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cc58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cc5c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34cc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cc60: 0x24a71330  addiu       $a3, $a1, 0x1330
    ctx->pc = 0x34cc60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x34cc64: 0xa0e3006f  sb          $v1, 0x6F($a3)
    ctx->pc = 0x34cc64u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 111), (uint8_t)GPR_U32(ctx, 3));
    // 0x34cc68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34cc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34cc6c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34cc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cc70: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34cc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34cc74: 0xa0a30072  sb          $v1, 0x72($a1)
    ctx->pc = 0x34cc74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x34cc78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34CC78u;
    {
        const bool branch_taken_0x34cc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cc78) {
            ctx->pc = 0x34CCA8u;
            goto label_34cca8;
        }
    }
    ctx->pc = 0x34CC80u;
label_34cc80:
    // 0x34cc80: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cc84: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34cc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cc88: 0xa080006e  sb          $zero, 0x6E($a0)
    ctx->pc = 0x34cc88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cc8c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34cc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cc90: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x34cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x34cc94: 0xa060006f  sb          $zero, 0x6F($v1)
    ctx->pc = 0x34cc94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cc98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34cc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34cc9c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cca0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34cca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cca4: 0xa0850072  sb          $a1, 0x72($a0)
    ctx->pc = 0x34cca4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 114), (uint8_t)GPR_U32(ctx, 5));
label_34cca8:
    // 0x34cca8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ccac: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x34CCACu;
    {
        const bool branch_taken_0x34ccac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ccac) {
            ctx->pc = 0x34CED0u;
            goto label_34ced0;
        }
    }
    ctx->pc = 0x34CCB4u;
label_34ccb4:
    // 0x34ccb4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ccb8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34ccb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ccbc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34ccbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34ccc0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34CCC0u;
    SET_GPR_U32(ctx, 31, 0x34CCC8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34CCC0u, 0x34CCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CCC8u;
label_34ccc8:
    // 0x34ccc8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34ccc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34cccc: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34ccccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ccd0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x34ccd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x34ccd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34ccd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34ccd8: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34CCD8u;
    SET_GPR_U32(ctx, 31, 0x34CCE0u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34CCD8u, 0x34CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CCE0u;
label_34cce0:
    // 0x34cce0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x34cce0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34cce4: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x34cce4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cce8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x34cce8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x34ccec: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34CCECu;
    SET_GPR_U32(ctx, 31, 0x34CCF4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34CCECu, 0x34CCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CCF4u;
label_34ccf4:
    // 0x34ccf4: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x34ccf4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ccf8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34ccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ccfc: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x34ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34cd00: 0x247007d0  addiu       $s0, $v1, 0x7D0
    ctx->pc = 0x34cd00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
    // 0x34cd04: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cd08: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34cd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cd0c: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x34cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x34cd10: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x34cd10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x34cd14: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x34cd14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34cd18: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x34cd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cd1c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x34cd1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34cd20: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x34cd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cd24: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34cd24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34cd28: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x34cd28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x34cd2c: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x34cd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cd30: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x34cd30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x34cd34: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34cd34u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cd38: 0x0  nop
    ctx->pc = 0x34cd38u;
    // NOP
    // 0x34cd3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34cd3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cd40: 0x0  nop
    ctx->pc = 0x34cd40u;
    // NOP
    // 0x34cd44: 0x45000062  bc1f        . + 4 + (0x62 << 2)
    ctx->pc = 0x34CD44u;
    {
        const bool branch_taken_0x34cd44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34cd44) {
            ctx->pc = 0x34CED0u;
            goto label_34ced0;
        }
    }
    ctx->pc = 0x34CD4Cu;
    // 0x34cd4c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x34cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x34cd50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34cd50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cd54: 0x0  nop
    ctx->pc = 0x34cd54u;
    // NOP
    // 0x34cd58: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x34cd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x34cd5c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x34cd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34cd60: 0x8fb00128  lw          $s0, 0x128($sp)
    ctx->pc = 0x34cd60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cd64: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x34cd64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x34cd68: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x34cd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x34cd6c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cd70: 0xa466127a  sh          $a2, 0x127A($v1)
    ctx->pc = 0x34cd70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 6));
    // 0x34cd74: 0x8fb00128  lw          $s0, 0x128($sp)
    ctx->pc = 0x34cd74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cd78: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x34cd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x34cd7c: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x34cd7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x34cd80: 0x26100150  addiu       $s0, $s0, 0x150
    ctx->pc = 0x34cd80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34cd84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34cd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34cd88: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x34cd88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x34cd8c: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x34cd8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x34cd90: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x34cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x34cd94: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x34CD94u;
    {
        const bool branch_taken_0x34cd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cd94) {
            ctx->pc = 0x34CED0u;
            goto label_34ced0;
        }
    }
    ctx->pc = 0x34CD9Cu;
label_34cd9c:
    // 0x34cd9c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cda0: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34cda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cda4: 0x3c063dd6  lui         $a2, 0x3DD6
    ctx->pc = 0x34cda4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15830 << 16));
    // 0x34cda8: 0x34c47750  ori         $a0, $a2, 0x7750
    ctx->pc = 0x34cda8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)30544);
    // 0x34cdac: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x34cdacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34cdb0: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x34cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x34cdb4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x34cdb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x34cdb8: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x34cdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34cdbc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x34cdc0: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x34cdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x34cdc4: 0xc05c848  jal         func_172120
    ctx->pc = 0x34CDC4u;
    SET_GPR_U32(ctx, 31, 0x34CDCCu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x34CDC4u, 0x34CDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CDCCu;
label_34cdcc:
    // 0x34cdcc: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x34cdccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x34cdd0: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34cdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cdd4: 0xc4a100d4  lwc1        $f1, 0xD4($a1)
    ctx->pc = 0x34cdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cdd8: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x34cdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cddc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x34cddcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34cde0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34CDE0u;
    SET_GPR_U32(ctx, 31, 0x34CDE8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34CDE0u, 0x34CDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CDE8u;
label_34cde8:
    // 0x34cde8: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34cde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cdec: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x34cdecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x34cdf0: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cdf4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34cdf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34cdf8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34CDF8u;
    SET_GPR_U32(ctx, 31, 0x34CE00u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34CDF8u, 0x34CE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CE00u;
label_34ce00:
    // 0x34ce00: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34ce00u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ce04: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34ce04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ce08: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x34ce08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x34ce0c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34ce0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34ce10: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34CE10u;
    SET_GPR_U32(ctx, 31, 0x34CE18u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34CE10u, 0x34CE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CE18u;
label_34ce18:
    // 0x34ce18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34ce18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ce1c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34ce1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ce20: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x34ce20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x34ce24: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34CE24u;
    SET_GPR_U32(ctx, 31, 0x34CE2Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34CE24u, 0x34CE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CE2Cu;
label_34ce2c:
    // 0x34ce2c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x34ce2cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ce30: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x34ce30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ce34: 0x84e8127a  lh          $t0, 0x127A($a3)
    ctx->pc = 0x34ce34u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4730)));
    // 0x34ce38: 0x2503ffff  addiu       $v1, $t0, -0x1
    ctx->pc = 0x34ce38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x34ce3c: 0xa4e3127a  sh          $v1, 0x127A($a3)
    ctx->pc = 0x34ce3cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x34ce40: 0x15000023  bnez        $t0, . + 4 + (0x23 << 2)
    ctx->pc = 0x34CE40u;
    {
        const bool branch_taken_0x34ce40 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ce40) {
            ctx->pc = 0x34CED0u;
            goto label_34ced0;
        }
    }
    ctx->pc = 0x34CE48u;
    // 0x34ce48: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34ce48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34ce4c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ce50: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x34ce50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x34ce54: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ce58: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34ce58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ce5c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34ce5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34ce60: 0x24060428  addiu       $a2, $zero, 0x428
    ctx->pc = 0x34ce60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1064));
    // 0x34ce64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34ce64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ce68: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34ce68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34ce6c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34CE6Cu;
    SET_GPR_U32(ctx, 31, 0x34CE74u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34CE6Cu, 0x34CE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CE74u;
label_34ce74:
    // 0x34ce74: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34ce74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ce78: 0x8c8502d0  lw          $a1, 0x2D0($a0)
    ctx->pc = 0x34ce78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x34ce7c: 0x24a30960  addiu       $v1, $a1, 0x960
    ctx->pc = 0x34ce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2400));
    // 0x34ce80: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x34ce80u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x34ce84: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x34ce84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34ce88: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x34ce88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34ce8c: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x34ce8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x34ce90: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x34ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x34ce94: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34ce94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ce98: 0x8ca602d0  lw          $a2, 0x2D0($a1)
    ctx->pc = 0x34ce98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x34ce9c: 0x24d20960  addiu       $s2, $a2, 0x960
    ctx->pc = 0x34ce9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 2400));
    // 0x34cea0: 0x72408628  paddub      $s0, $s2, $zero
    ctx->pc = 0x34cea0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x34cea4: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x34cea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34cea8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x34cea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34ceac: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x34ceacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x34ceb0: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x34ceb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x34ceb4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x34ceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x34ceb8: 0x3c043d4c  lui         $a0, 0x3D4C
    ctx->pc = 0x34ceb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15692 << 16));
    // 0x34cebc: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x34cebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x34cec0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34cec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cec4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cec8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34cec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cecc: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34ceccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_34ced0:
    // 0x34ced0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34ced0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ced4: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x34ced4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x34ced8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34ced8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34cedc: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x34cedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x34cee0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34CEE0u;
    {
        const bool branch_taken_0x34cee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cee0) {
            ctx->pc = 0x34CF1Cu;
            goto label_34cf1c;
        }
    }
    ctx->pc = 0x34CEE8u;
    // 0x34cee8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ceec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34ceecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cef0: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x34cef0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cef4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x34cef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34cef8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cefc: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34cefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cf00: 0xa0a40029  sb          $a0, 0x29($a1)
    ctx->pc = 0x34cf00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x34cf04: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x34cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x34cf08: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x34cf08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34cf0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34cf0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cf10: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cf14: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x34cf14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cf18: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x34cf18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
label_34cf1c:
    // 0x34cf1c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cf20: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x34cf20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x34cf24: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x34cf24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34cf28: 0x30a60010  andi        $a2, $a1, 0x10
    ctx->pc = 0x34cf28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x34cf2c: 0x10c00059  beqz        $a2, . + 4 + (0x59 << 2)
    ctx->pc = 0x34CF2Cu;
    {
        const bool branch_taken_0x34cf2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cf2c) {
            ctx->pc = 0x34D094u;
            goto label_34d094;
        }
    }
    ctx->pc = 0x34CF34u;
    // 0x34cf34: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x34cf34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cf38: 0x84e8127e  lh          $t0, 0x127E($a3)
    ctx->pc = 0x34cf38u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4734)));
    // 0x34cf3c: 0x11000049  beqz        $t0, . + 4 + (0x49 << 2)
    ctx->pc = 0x34CF3Cu;
    {
        const bool branch_taken_0x34cf3c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cf3c) {
            ctx->pc = 0x34D064u;
            goto label_34d064;
        }
    }
    ctx->pc = 0x34CF44u;
    // 0x34cf44: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cf48: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cf4c: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x34cf4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cf50: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x34cf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34cf54: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cf58: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cf5c: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x34cf5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x34cf60: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x34cf60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x34cf64: 0x34908889  ori         $s0, $a0, 0x8889
    ctx->pc = 0x34cf64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x34cf68: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x34cf68u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cf6c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cf70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cf74: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x34cf74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x34cf78: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cf7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cf80: 0xa060008e  sb          $zero, 0x8E($v1)
    ctx->pc = 0x34cf80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 142), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cf84: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cf88: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34cf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cf8c: 0xa4800090  sh          $zero, 0x90($a0)
    ctx->pc = 0x34cf8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 0));
    // 0x34cf90: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x34cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x34cf94: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x34cf94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x34cf98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34cf98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cf9c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34cf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cfa0: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34cfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34cfa4: 0xe4a00094  swc1        $f0, 0x94($a1)
    ctx->pc = 0x34cfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 148), bits); }
    // 0x34cfa8: 0x3c073c23  lui         $a3, 0x3C23
    ctx->pc = 0x34cfa8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15395 << 16));
    // 0x34cfac: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x34cfacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x34cfb0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x34cfb0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cfb4: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x34cfb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cfb8: 0x25031330  addiu       $v1, $t0, 0x1330
    ctx->pc = 0x34cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x34cfbc: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x34cfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x34cfc0: 0x3c063c23  lui         $a2, 0x3C23
    ctx->pc = 0x34cfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15395 << 16));
    // 0x34cfc4: 0x34c3d70a  ori         $v1, $a2, 0xD70A
    ctx->pc = 0x34cfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x34cfc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34cfc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cfcc: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34cfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cfd0: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34cfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34cfd4: 0xe4a0009c  swc1        $f0, 0x9C($a1)
    ctx->pc = 0x34cfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 156), bits); }
    // 0x34cfd8: 0x3c043ba3  lui         $a0, 0x3BA3
    ctx->pc = 0x34cfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15267 << 16));
    // 0x34cfdc: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x34cfdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x34cfe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34cfe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cfe4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cfe8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34cfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cfec: 0xe48000a0  swc1        $f0, 0xA0($a0)
    ctx->pc = 0x34cfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x34cff0: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x34cff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x34cff4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x34cff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x34cff8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34cff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cffc: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34cffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34d000: 0x24a71330  addiu       $a3, $a1, 0x1330
    ctx->pc = 0x34d000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x34d004: 0xe4e000a4  swc1        $f0, 0xA4($a3)
    ctx->pc = 0x34d004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 164), bits); }
    // 0x34d008: 0x3c043ba3  lui         $a0, 0x3BA3
    ctx->pc = 0x34d008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15267 << 16));
    // 0x34d00c: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x34d00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x34d010: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34d010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d014: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34d014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34d018: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34d018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34d01c: 0xe48000a8  swc1        $f0, 0xA8($a0)
    ctx->pc = 0x34d01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x34d020: 0x3c053fc0  lui         $a1, 0x3FC0
    ctx->pc = 0x34d020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16320 << 16));
    // 0x34d024: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x34d024u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d028: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x34d028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34d02c: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x34d02cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x34d030: 0xe4e000ac  swc1        $f0, 0xAC($a3)
    ctx->pc = 0x34d030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 172), bits); }
    // 0x34d034: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x34d034u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
    // 0x34d038: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x34d038u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d03c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34d040: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34d040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34d044: 0xe46000b0  swc1        $f0, 0xB0($v1)
    ctx->pc = 0x34d044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
    // 0x34d048: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x34d048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x34d04c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34d04cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d050: 0x8fb00128  lw          $s0, 0x128($sp)
    ctx->pc = 0x34d050u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34d054: 0x26041330  addiu       $a0, $s0, 0x1330
    ctx->pc = 0x34d054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x34d058: 0xe48000b4  swc1        $f0, 0xB4($a0)
    ctx->pc = 0x34d058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
    // 0x34d05c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x34D05Cu;
    {
        const bool branch_taken_0x34d05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d05c) {
            ctx->pc = 0x34D094u;
            goto label_34d094;
        }
    }
    ctx->pc = 0x34D064u;
label_34d064:
    // 0x34d064: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34d064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34d068: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34d068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34d06c: 0xa0a00028  sb          $zero, 0x28($a1)
    ctx->pc = 0x34d06cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d070: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x34d070u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34d074: 0x24e31330  addiu       $v1, $a3, 0x1330
    ctx->pc = 0x34d074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x34d078: 0xa0600029  sb          $zero, 0x29($v1)
    ctx->pc = 0x34d078u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d07c: 0x3c053ccc  lui         $a1, 0x3CCC
    ctx->pc = 0x34d07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15564 << 16));
    // 0x34d080: 0x34b0cccd  ori         $s0, $a1, 0xCCCD
    ctx->pc = 0x34d080u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x34d084: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x34d084u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d088: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34d088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34d08c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34d08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34d090: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x34d090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
label_34d094:
    // 0x34d094: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34d094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34d098: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x34d098u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x34d09c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x34d09cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34d0a0: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x34d0a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x34d0a4: 0x10200058  beqz        $at, . + 4 + (0x58 << 2)
    ctx->pc = 0x34D0A4u;
    {
        const bool branch_taken_0x34d0a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d0a4) {
            ctx->pc = 0x34D208u;
            goto label_34d208;
        }
    }
    ctx->pc = 0x34D0ACu;
    // 0x34d0ac: 0xc06765c  jal         func_19D970
    ctx->pc = 0x34D0ACu;
    SET_GPR_U32(ctx, 31, 0x34D0B4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x34D0ACu, 0x34D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D0B4u;
label_34d0b4:
    // 0x34d0b4: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x34d0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
    // 0x34d0b8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x34d0b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d0bc: 0x0  nop
    ctx->pc = 0x34d0bcu;
    // NOP
    // 0x34d0c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x34d0c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34d0c4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x34d0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x34d0c8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x34D0C8u;
    SET_GPR_U32(ctx, 31, 0x34D0D0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x34D0C8u, 0x34D0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D0D0u;
label_34d0d0:
    // 0x34d0d0: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x34d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x34d0d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34d0d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d0d8: 0x0  nop
    ctx->pc = 0x34d0d8u;
    // NOP
    // 0x34d0dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x34d0dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34d0e0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x34d0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x34d0e4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x34D0E4u;
    SET_GPR_U32(ctx, 31, 0x34D0ECu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x34D0E4u, 0x34D0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D0ECu;
label_34d0ec:
    // 0x34d0ec: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x34d0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
    // 0x34d0f0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x34d0f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d0f4: 0x0  nop
    ctx->pc = 0x34d0f4u;
    // NOP
    // 0x34d0f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x34d0f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34d0fc: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x34d0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x34d100: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34d100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34d104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d108: 0x0  nop
    ctx->pc = 0x34d108u;
    // NOP
    // 0x34d10c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x34d10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x34d110: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34d110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d114: 0x0  nop
    ctx->pc = 0x34d114u;
    // NOP
    // 0x34d118: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x34d118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x34d11c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34d11cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d120: 0x0  nop
    ctx->pc = 0x34d120u;
    // NOP
    // 0x34d124: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x34d124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x34d128: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34d128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d12c: 0x0  nop
    ctx->pc = 0x34d12cu;
    // NOP
    // 0x34d130: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x34d130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x34d134: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x34d134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x34d138: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x34d138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x34d13c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34d13cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d140: 0x0  nop
    ctx->pc = 0x34d140u;
    // NOP
    // 0x34d144: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x34d144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x34d148: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x34d148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x34d14c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34d14cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34d150: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x34d150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x34d154: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x34d154u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34d158: 0x8fb00128  lw          $s0, 0x128($sp)
    ctx->pc = 0x34d158u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34d15c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x34d15cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x34d160: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x34d160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34d164: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x34d164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x34d168: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x34d168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x34d16c: 0xc0867e0  jal         func_219F80
    ctx->pc = 0x34D16Cu;
    SET_GPR_U32(ctx, 31, 0x34D174u);
    ctx->pc = 0x219F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F80u, 0x34D16Cu, 0x34D174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D174u;
label_34d174:
    // 0x34d174: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34d174u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34d178: 0xc06765c  jal         func_19D970
    ctx->pc = 0x34D178u;
    SET_GPR_U32(ctx, 31, 0x34D180u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x34D178u, 0x34D180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D180u;
label_34d180:
    // 0x34d180: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x34d180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
    // 0x34d184: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x34d184u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d188: 0x0  nop
    ctx->pc = 0x34d188u;
    // NOP
    // 0x34d18c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x34d18cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34d190: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x34d190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x34d194: 0xc06765c  jal         func_19D970
    ctx->pc = 0x34D194u;
    SET_GPR_U32(ctx, 31, 0x34D19Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x34D194u, 0x34D19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D19Cu;
label_34d19c:
    // 0x34d19c: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x34d19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x34d1a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34d1a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d1a4: 0x0  nop
    ctx->pc = 0x34d1a4u;
    // NOP
    // 0x34d1a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x34d1a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34d1ac: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x34d1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x34d1b0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x34D1B0u;
    SET_GPR_U32(ctx, 31, 0x34D1B8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x34D1B0u, 0x34D1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D1B8u;
label_34d1b8:
    // 0x34d1b8: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x34d1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x34d1bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34d1bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d1c0: 0x0  nop
    ctx->pc = 0x34d1c0u;
    // NOP
    // 0x34d1c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x34d1c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34d1c8: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x34d1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x34d1cc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x34d1d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34d1d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d1d4: 0x0  nop
    ctx->pc = 0x34d1d4u;
    // NOP
    // 0x34d1d8: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x34d1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x34d1dc: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x34d1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x34d1e0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x34d1e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34d1e4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x34d1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x34d1e8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x34d1e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34d1ec: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34d1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34d1f0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x34d1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34d1f4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x34d1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x34d1f8: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x34d1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x34d1fc: 0xc0867e0  jal         func_219F80
    ctx->pc = 0x34D1FCu;
    SET_GPR_U32(ctx, 31, 0x34D204u);
    ctx->pc = 0x219F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F80u, 0x34D1FCu, 0x34D204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D204u;
label_34d204:
    // 0x34d204: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34d204u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_34d208:
    // 0x34d208: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x34d208u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34d20c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34d20cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34d210: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34d210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34d214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d218: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x34d218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x34d21c: 0x3e00008  jr          $ra
    ctx->pc = 0x34D21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D224u;
}
