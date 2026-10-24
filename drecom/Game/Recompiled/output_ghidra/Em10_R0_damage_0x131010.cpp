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

// Function: Em10_R0_damage
// Address: 0x131010 - 0x131084
void Em10_R0_damage_0x131010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R0_damage_0x131010");
#endif

    switch (ctx->pc) {
        case 0x131010u: goto label_131010;
        case 0x131014u: goto label_131014;
        case 0x131018u: goto label_131018;
        case 0x13101cu: goto label_13101c;
        case 0x131020u: goto label_131020;
        case 0x131024u: goto label_131024;
        case 0x131028u: goto label_131028;
        case 0x13102cu: goto label_13102c;
        case 0x131030u: goto label_131030;
        case 0x131034u: goto label_131034;
        case 0x131038u: goto label_131038;
        case 0x13103cu: goto label_13103c;
        case 0x131040u: goto label_131040;
        case 0x131044u: goto label_131044;
        case 0x131048u: goto label_131048;
        case 0x13104cu: goto label_13104c;
        case 0x131050u: goto label_131050;
        case 0x131054u: goto label_131054;
        case 0x131058u: goto label_131058;
        case 0x13105cu: goto label_13105c;
        case 0x131060u: goto label_131060;
        case 0x131064u: goto label_131064;
        case 0x131068u: goto label_131068;
        case 0x13106cu: goto label_13106c;
        case 0x131070u: goto label_131070;
        case 0x131074u: goto label_131074;
        case 0x131078u: goto label_131078;
        case 0x13107cu: goto label_13107c;
        case 0x131080u: goto label_131080;
        default: break;
    }

    ctx->pc = 0x131010u;

label_131010:
    // 0x131010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_131014:
    // 0x131014: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x131014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_131018:
    // 0x131018: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x131018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_13101c:
    // 0x13101c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x13101cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_131020:
    // 0x131020: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x131020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_131024:
    // 0x131024: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x131024u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_131028:
    // 0x131028: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x131028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13102c:
    // 0x13102c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13102cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_131030:
    // 0x131030: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x131030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_131034:
    // 0x131034: 0x24425060  addiu       $v0, $v0, 0x5060
    ctx->pc = 0x131034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20576));
label_131038:
    // 0x131038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x131038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13103c:
    // 0x13103c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13103cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_131040:
    // 0x131040: 0x40f809  jalr        $v0
label_131044:
    if (ctx->pc == 0x131044u) {
        ctx->pc = 0x131048u;
        goto label_131048;
    }
    ctx->pc = 0x131040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x131048u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131040u, 0x131048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x131048u;
label_131048:
    // 0x131048: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x131048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_13104c:
    // 0x13104c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13104cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_131050:
    // 0x131050: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x131050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_131054:
    // 0x131054: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x131054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_131058:
    // 0x131058: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x131058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_13105c:
    // 0x13105c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x13105cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_131060:
    // 0x131060: 0x24425080  addiu       $v0, $v0, 0x5080
    ctx->pc = 0x131060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20608));
label_131064:
    // 0x131064: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x131064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_131068:
    // 0x131068: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x131068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13106c:
    // 0x13106c: 0x40f809  jalr        $v0
label_131070:
    if (ctx->pc == 0x131070u) {
        ctx->pc = 0x131074u;
        goto label_131074;
    }
    ctx->pc = 0x13106Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x131074u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13106Cu, 0x131074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x131074u;
label_131074:
    // 0x131074: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x131074u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_131078:
    // 0x131078: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x131078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13107c:
    // 0x13107c: 0x3e00008  jr          $ra
label_131080:
    if (ctx->pc == 0x131080u) {
        ctx->pc = 0x131084u;
        goto label_fallthrough_0x13107c;
    }
    ctx->pc = 0x13107Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13107Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13107c:
    ctx->pc = 0x131084u;
}
