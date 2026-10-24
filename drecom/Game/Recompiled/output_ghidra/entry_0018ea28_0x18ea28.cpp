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

// Function: entry_0018ea28
// Address: 0x18ea28 - 0x18eab8
void entry_0018ea28_0x18ea28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ea28_0x18ea28");
#endif

    switch (ctx->pc) {
        case 0x18ea74u: goto label_18ea74;
        default: break;
    }

    ctx->pc = 0x18ea28u;

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
            return;
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
            return;
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
            return;
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
        goto label_fallthrough_0x18eab0;
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
label_fallthrough_0x18eab0:
    ctx->pc = 0x18EAB8u;
}
