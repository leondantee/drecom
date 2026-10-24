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

// Function: Em05_R0_damage
// Address: 0x20e070 - 0x20e0c4
void Em05_R0_damage_0x20e070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R0_damage_0x20e070");
#endif

    switch (ctx->pc) {
        case 0x20e070u: goto label_20e070;
        case 0x20e074u: goto label_20e074;
        case 0x20e078u: goto label_20e078;
        case 0x20e07cu: goto label_20e07c;
        case 0x20e080u: goto label_20e080;
        case 0x20e084u: goto label_20e084;
        case 0x20e088u: goto label_20e088;
        case 0x20e08cu: goto label_20e08c;
        case 0x20e090u: goto label_20e090;
        case 0x20e094u: goto label_20e094;
        case 0x20e098u: goto label_20e098;
        case 0x20e09cu: goto label_20e09c;
        case 0x20e0a0u: goto label_20e0a0;
        case 0x20e0a4u: goto label_20e0a4;
        case 0x20e0a8u: goto label_20e0a8;
        case 0x20e0acu: goto label_20e0ac;
        case 0x20e0b0u: goto label_20e0b0;
        case 0x20e0b4u: goto label_20e0b4;
        case 0x20e0b8u: goto label_20e0b8;
        case 0x20e0bcu: goto label_20e0bc;
        case 0x20e0c0u: goto label_20e0c0;
        default: break;
    }

    ctx->pc = 0x20e070u;

label_20e070:
    // 0x20e070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20e070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20e074:
    // 0x20e074: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x20e074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_20e078:
    // 0x20e078: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x20e078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_20e07c:
    // 0x20e07c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_20e080:
    // 0x20e080: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20e080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_20e084:
    // 0x20e084: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x20e084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_20e088:
    // 0x20e088: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20e088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_20e08c:
    // 0x20e08c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x20e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20e090:
    // 0x20e090: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20e090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_20e094:
    // 0x20e094: 0x2442a088  addiu       $v0, $v0, -0x5F78
    ctx->pc = 0x20e094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942856));
label_20e098:
    // 0x20e098: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20e09c:
    // 0x20e09c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20e0a0:
    // 0x20e0a0: 0x40f809  jalr        $v0
label_20e0a4:
    if (ctx->pc == 0x20E0A4u) {
        ctx->pc = 0x20E0A8u;
        goto label_20e0a8;
    }
    ctx->pc = 0x20E0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20E0A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E0A0u, 0x20E0A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E0A8u;
label_20e0a8:
    // 0x20e0a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_20e0ac:
    // 0x20e0ac: 0xc05d1b8  jal         func_1746E0
label_20e0b0:
    if (ctx->pc == 0x20E0B0u) {
        ctx->pc = 0x20E0B4u;
        goto label_20e0b4;
    }
    ctx->pc = 0x20E0ACu;
    SET_GPR_U32(ctx, 31, 0x20E0B4u);
    ctx->pc = 0x1746E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1746E0u, 0x20E0ACu, 0x20E0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E0B4u;
label_20e0b4:
    // 0x20e0b4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x20e0b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20e0b8:
    // 0x20e0b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20e0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20e0bc:
    // 0x20e0bc: 0x3e00008  jr          $ra
label_20e0c0:
    if (ctx->pc == 0x20E0C0u) {
        ctx->pc = 0x20E0C4u;
        goto label_fallthrough_0x20e0bc;
    }
    ctx->pc = 0x20E0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20e0bc:
    ctx->pc = 0x20E0C4u;
}
