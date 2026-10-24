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

// Function: Em1c_R1_move_type01
// Address: 0x36e060 - 0x36e0d4
void Em1c_R1_move_type01_0x36e060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1c_R1_move_type01_0x36e060");
#endif

    switch (ctx->pc) {
        case 0x36e060u: goto label_36e060;
        case 0x36e064u: goto label_36e064;
        case 0x36e068u: goto label_36e068;
        case 0x36e06cu: goto label_36e06c;
        case 0x36e070u: goto label_36e070;
        case 0x36e074u: goto label_36e074;
        case 0x36e078u: goto label_36e078;
        case 0x36e07cu: goto label_36e07c;
        case 0x36e080u: goto label_36e080;
        case 0x36e084u: goto label_36e084;
        case 0x36e088u: goto label_36e088;
        case 0x36e08cu: goto label_36e08c;
        case 0x36e090u: goto label_36e090;
        case 0x36e094u: goto label_36e094;
        case 0x36e098u: goto label_36e098;
        case 0x36e09cu: goto label_36e09c;
        case 0x36e0a0u: goto label_36e0a0;
        case 0x36e0a4u: goto label_36e0a4;
        case 0x36e0a8u: goto label_36e0a8;
        case 0x36e0acu: goto label_36e0ac;
        case 0x36e0b0u: goto label_36e0b0;
        case 0x36e0b4u: goto label_36e0b4;
        case 0x36e0b8u: goto label_36e0b8;
        case 0x36e0bcu: goto label_36e0bc;
        case 0x36e0c0u: goto label_36e0c0;
        case 0x36e0c4u: goto label_36e0c4;
        case 0x36e0c8u: goto label_36e0c8;
        case 0x36e0ccu: goto label_36e0cc;
        case 0x36e0d0u: goto label_36e0d0;
        default: break;
    }

    ctx->pc = 0x36e060u;

label_36e060:
    // 0x36e060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36e060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36e064:
    // 0x36e064: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36e064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_36e068:
    // 0x36e068: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36e068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_36e06c:
    // 0x36e06c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36e070:
    // 0x36e070: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36e074:
    // 0x36e074: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x36e074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_36e078:
    // 0x36e078: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36e078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36e07c:
    // 0x36e07c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36e080:
    // 0x36e080: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36e080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_36e084:
    // 0x36e084: 0x2442b370  addiu       $v0, $v0, -0x4C90
    ctx->pc = 0x36e084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947696));
label_36e088:
    // 0x36e088: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36e088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36e08c:
    // 0x36e08c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36e090:
    // 0x36e090: 0x40f809  jalr        $v0
label_36e094:
    if (ctx->pc == 0x36E094u) {
        ctx->pc = 0x36E098u;
        goto label_36e098;
    }
    ctx->pc = 0x36E090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36E098u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E090u, 0x36E098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36E098u;
label_36e098:
    // 0x36e098: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36e09c:
    // 0x36e09c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36e0a0:
    // 0x36e0a0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x36e0a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_36e0a4:
    // 0x36e0a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36e0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36e0a8:
    // 0x36e0a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36e0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36e0ac:
    // 0x36e0ac: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_36e0b0:
    // 0x36e0b0: 0x2442b390  addiu       $v0, $v0, -0x4C70
    ctx->pc = 0x36e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947728));
label_36e0b4:
    // 0x36e0b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36e0b8:
    // 0x36e0b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36e0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36e0bc:
    // 0x36e0bc: 0x40f809  jalr        $v0
label_36e0c0:
    if (ctx->pc == 0x36E0C0u) {
        ctx->pc = 0x36E0C4u;
        goto label_36e0c4;
    }
    ctx->pc = 0x36E0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36E0C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E0BCu, 0x36E0C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36E0C4u;
label_36e0c4:
    // 0x36e0c4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36e0c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36e0c8:
    // 0x36e0c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36e0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36e0cc:
    // 0x36e0cc: 0x3e00008  jr          $ra
label_36e0d0:
    if (ctx->pc == 0x36E0D0u) {
        ctx->pc = 0x36E0D4u;
        goto label_fallthrough_0x36e0cc;
    }
    ctx->pc = 0x36E0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36e0cc:
    ctx->pc = 0x36E0D4u;
}
