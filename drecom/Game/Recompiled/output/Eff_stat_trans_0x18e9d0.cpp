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

// Function: Eff_stat_trans
// Address: 0x18e9d0 - 0x18eae0
void Eff_stat_trans_0x18e9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_stat_trans_0x18e9d0");
#endif

    switch (ctx->pc) {
        case 0x18e9d0u: goto label_18e9d0;
        case 0x18e9d4u: goto label_18e9d4;
        case 0x18e9d8u: goto label_18e9d8;
        case 0x18e9dcu: goto label_18e9dc;
        case 0x18e9e0u: goto label_18e9e0;
        case 0x18e9e4u: goto label_18e9e4;
        case 0x18e9e8u: goto label_18e9e8;
        case 0x18e9ecu: goto label_18e9ec;
        case 0x18e9f0u: goto label_18e9f0;
        case 0x18e9f4u: goto label_18e9f4;
        case 0x18e9f8u: goto label_18e9f8;
        case 0x18e9fcu: goto label_18e9fc;
        case 0x18ea00u: goto label_18ea00;
        case 0x18ea04u: goto label_18ea04;
        case 0x18ea08u: goto label_18ea08;
        case 0x18ea0cu: goto label_18ea0c;
        case 0x18ea10u: goto label_18ea10;
        case 0x18ea14u: goto label_18ea14;
        case 0x18ea18u: goto label_18ea18;
        case 0x18ea1cu: goto label_18ea1c;
        case 0x18ea20u: goto label_18ea20;
        case 0x18ea24u: goto label_18ea24;
        case 0x18ea28u: goto label_18ea28;
        case 0x18ea2cu: goto label_18ea2c;
        case 0x18ea30u: goto label_18ea30;
        case 0x18ea34u: goto label_18ea34;
        case 0x18ea38u: goto label_18ea38;
        case 0x18ea3cu: goto label_18ea3c;
        case 0x18ea40u: goto label_18ea40;
        case 0x18ea44u: goto label_18ea44;
        case 0x18ea48u: goto label_18ea48;
        case 0x18ea4cu: goto label_18ea4c;
        case 0x18ea50u: goto label_18ea50;
        case 0x18ea54u: goto label_18ea54;
        case 0x18ea58u: goto label_18ea58;
        case 0x18ea5cu: goto label_18ea5c;
        case 0x18ea60u: goto label_18ea60;
        case 0x18ea64u: goto label_18ea64;
        case 0x18ea68u: goto label_18ea68;
        case 0x18ea6cu: goto label_18ea6c;
        case 0x18ea70u: goto label_18ea70;
        case 0x18ea74u: goto label_18ea74;
        case 0x18ea78u: goto label_18ea78;
        case 0x18ea7cu: goto label_18ea7c;
        case 0x18ea80u: goto label_18ea80;
        case 0x18ea84u: goto label_18ea84;
        case 0x18ea88u: goto label_18ea88;
        case 0x18ea8cu: goto label_18ea8c;
        case 0x18ea90u: goto label_18ea90;
        case 0x18ea94u: goto label_18ea94;
        case 0x18ea98u: goto label_18ea98;
        case 0x18ea9cu: goto label_18ea9c;
        case 0x18eaa0u: goto label_18eaa0;
        case 0x18eaa4u: goto label_18eaa4;
        case 0x18eaa8u: goto label_18eaa8;
        case 0x18eaacu: goto label_18eaac;
        case 0x18eab0u: goto label_18eab0;
        case 0x18eab4u: goto label_18eab4;
        case 0x18eab8u: goto label_18eab8;
        case 0x18eabcu: goto label_18eabc;
        case 0x18eac0u: goto label_18eac0;
        case 0x18eac4u: goto label_18eac4;
        case 0x18eac8u: goto label_18eac8;
        case 0x18eaccu: goto label_18eacc;
        case 0x18ead0u: goto label_18ead0;
        case 0x18ead4u: goto label_18ead4;
        case 0x18ead8u: goto label_18ead8;
        case 0x18eadcu: goto label_18eadc;
        default: break;
    }

    ctx->pc = 0x18e9d0u;

label_18e9d0:
    // 0x18e9d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18e9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18e9d4:
    // 0x18e9d4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x18e9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_18e9d8:
    // 0x18e9d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18e9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18e9dc:
    // 0x18e9dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18e9e0:
    // 0x18e9e0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_18e9e4:
    // 0x18e9e4: 0x2471a630  addiu       $s1, $v1, -0x59D0
    ctx->pc = 0x18e9e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944304));
label_18e9e8:
    // 0x18e9e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18e9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_18e9ec:
    // 0x18e9ec: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x18e9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 316)));
label_18e9f0:
    // 0x18e9f0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18e9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_18e9f4:
    // 0x18e9f4: 0x32480  sll         $a0, $v1, 18
    ctx->pc = 0x18e9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 18));
label_18e9f8:
    // 0x18e9f8: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x18e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_18e9fc:
    // 0x18e9fc: 0x24632580  addiu       $v1, $v1, 0x2580
    ctx->pc = 0x18e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9600));
label_18ea00:
    // 0x18ea00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18ea04:
    // 0x18ea04: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x18ea04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_18ea08:
    // 0x18ea08: 0xac232580  sw          $v1, 0x2580($at)
    ctx->pc = 0x18ea08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9600), GPR_U32(ctx, 3));
label_18ea0c:
    // 0x18ea0c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x18ea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_18ea10:
    // 0x18ea10: 0x24632600  addiu       $v1, $v1, 0x2600
    ctx->pc = 0x18ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9728));
label_18ea14:
    // 0x18ea14: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18ea14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_18ea18:
    // 0x18ea18: 0xac23a600  sw          $v1, -0x5A00($at)
    ctx->pc = 0x18ea18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944256), GPR_U32(ctx, 3));
label_18ea1c:
    // 0x18ea1c: 0x8e300038  lw          $s0, 0x38($s1)
    ctx->pc = 0x18ea1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_18ea20:
    // 0x18ea20: 0x10000027  b           . + 4 + (0x27 << 2)
label_18ea24:
    if (ctx->pc == 0x18EA24u) {
        ctx->pc = 0x18EA28u;
        goto label_18ea28;
    }
    ctx->pc = 0x18EA20u;
    {
        const bool branch_taken_0x18ea20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ea20) {
            ctx->pc = 0x18EAC0u;
            goto label_18eac0;
        }
    }
    ctx->pc = 0x18EA28u;
label_18ea28:
    // 0x18ea28: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x18ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_18ea2c:
    // 0x18ea2c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x18ea2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_18ea30:
    // 0x18ea30: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_18ea34:
    if (ctx->pc == 0x18EA34u) {
        ctx->pc = 0x18EA38u;
        goto label_18ea38;
    }
    ctx->pc = 0x18EA30u;
    {
        const bool branch_taken_0x18ea30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ea30) {
            ctx->pc = 0x18EAB8u;
            goto label_18eab8;
        }
    }
    ctx->pc = 0x18EA38u;
label_18ea38:
    // 0x18ea38: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x18ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_18ea3c:
    // 0x18ea3c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x18ea3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_18ea40:
    // 0x18ea40: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_18ea44:
    if (ctx->pc == 0x18EA44u) {
        ctx->pc = 0x18EA48u;
        goto label_18ea48;
    }
    ctx->pc = 0x18EA40u;
    {
        const bool branch_taken_0x18ea40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ea40) {
            ctx->pc = 0x18EAB8u;
            goto label_18eab8;
        }
    }
    ctx->pc = 0x18EA48u;
label_18ea48:
    // 0x18ea48: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18ea48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18ea4c:
    // 0x18ea4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x18ea4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_18ea50:
    // 0x18ea50: 0x9202011e  lbu         $v0, 0x11E($s0)
    ctx->pc = 0x18ea50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 286)));
label_18ea54:
    // 0x18ea54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18ea54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18ea58:
    // 0x18ea58: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18ea5c:
    // 0x18ea5c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_18ea60:
    // 0x18ea60: 0x24427320  addiu       $v0, $v0, 0x7320
    ctx->pc = 0x18ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29472));
label_18ea64:
    // 0x18ea64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18ea68:
    // 0x18ea68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18ea6c:
    // 0x18ea6c: 0x40f809  jalr        $v0
label_18ea70:
    if (ctx->pc == 0x18EA70u) {
        ctx->pc = 0x18EA74u;
        goto label_18ea74;
    }
    ctx->pc = 0x18EA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18EA74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EA6Cu, 0x18EA74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18EA74u;
label_18ea74:
    // 0x18ea74: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18ea74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_18ea78:
    // 0x18ea78: 0x90230e04  lbu         $v1, 0xE04($at)
    ctx->pc = 0x18ea78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 3588)));
label_18ea7c:
    // 0x18ea7c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18ea7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_18ea80:
    // 0x18ea80: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x18ea80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_18ea84:
    // 0x18ea84: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_18ea88:
    if (ctx->pc == 0x18EA88u) {
        ctx->pc = 0x18EA8Cu;
        goto label_18ea8c;
    }
    ctx->pc = 0x18EA84u;
    {
        const bool branch_taken_0x18ea84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ea84) {
            ctx->pc = 0x18EAB8u;
            goto label_18eab8;
        }
    }
    ctx->pc = 0x18EA8Cu;
label_18ea8c:
    // 0x18ea8c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18ea8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18ea90:
    // 0x18ea90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18ea90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18ea94:
    // 0x18ea94: 0x9202011e  lbu         $v0, 0x11E($s0)
    ctx->pc = 0x18ea94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 286)));
label_18ea98:
    // 0x18ea98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18ea98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18ea9c:
    // 0x18ea9c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18ea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18eaa0:
    // 0x18eaa0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_18eaa4:
    // 0x18eaa4: 0x24427320  addiu       $v0, $v0, 0x7320
    ctx->pc = 0x18eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29472));
label_18eaa8:
    // 0x18eaa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18eaac:
    // 0x18eaac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18eab0:
    // 0x18eab0: 0x40f809  jalr        $v0
label_18eab4:
    if (ctx->pc == 0x18EAB4u) {
        ctx->pc = 0x18EAB8u;
        goto label_18eab8;
    }
    ctx->pc = 0x18EAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18EAB8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EAB0u, 0x18EAB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18EAB8u;
label_18eab8:
    // 0x18eab8: 0x8e100218  lw          $s0, 0x218($s0)
    ctx->pc = 0x18eab8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_18eabc:
    // 0x18eabc: 0x0  nop
    ctx->pc = 0x18eabcu;
    // NOP
label_18eac0:
    // 0x18eac0: 0x1600ffd9  bnez        $s0, . + 4 + (-0x27 << 2)
label_18eac4:
    if (ctx->pc == 0x18EAC4u) {
        ctx->pc = 0x18EAC8u;
        goto label_18eac8;
    }
    ctx->pc = 0x18EAC0u;
    {
        const bool branch_taken_0x18eac0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18eac0) {
            ctx->pc = 0x18EA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ea28;
        }
    }
    ctx->pc = 0x18EAC8u;
label_18eac8:
    // 0x18eac8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x18eac8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18eacc:
    // 0x18eacc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18eaccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18ead0:
    // 0x18ead0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ead0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18ead4:
    // 0x18ead4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18ead4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18ead8:
    // 0x18ead8: 0x3e00008  jr          $ra
label_18eadc:
    if (ctx->pc == 0x18EADCu) {
        ctx->pc = 0x18EAE0u;
        goto label_fallthrough_0x18ead8;
    }
    ctx->pc = 0x18EAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18ead8:
    ctx->pc = 0x18EAE0u;
}
