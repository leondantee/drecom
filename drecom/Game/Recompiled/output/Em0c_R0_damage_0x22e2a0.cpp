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

// Function: Em0c_R0_damage
// Address: 0x22e2a0 - 0x22e2e8
void Em0c_R0_damage_0x22e2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R0_damage_0x22e2a0");
#endif

    switch (ctx->pc) {
        case 0x22e2a0u: goto label_22e2a0;
        case 0x22e2a4u: goto label_22e2a4;
        case 0x22e2a8u: goto label_22e2a8;
        case 0x22e2acu: goto label_22e2ac;
        case 0x22e2b0u: goto label_22e2b0;
        case 0x22e2b4u: goto label_22e2b4;
        case 0x22e2b8u: goto label_22e2b8;
        case 0x22e2bcu: goto label_22e2bc;
        case 0x22e2c0u: goto label_22e2c0;
        case 0x22e2c4u: goto label_22e2c4;
        case 0x22e2c8u: goto label_22e2c8;
        case 0x22e2ccu: goto label_22e2cc;
        case 0x22e2d0u: goto label_22e2d0;
        case 0x22e2d4u: goto label_22e2d4;
        case 0x22e2d8u: goto label_22e2d8;
        case 0x22e2dcu: goto label_22e2dc;
        case 0x22e2e0u: goto label_22e2e0;
        case 0x22e2e4u: goto label_22e2e4;
        default: break;
    }

    ctx->pc = 0x22e2a0u;

label_22e2a0:
    // 0x22e2a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22e2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22e2a4:
    // 0x22e2a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x22e2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_22e2a8:
    // 0x22e2a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x22e2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_22e2ac:
    // 0x22e2ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x22e2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_22e2b0:
    // 0x22e2b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_22e2b4:
    // 0x22e2b4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x22e2b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_22e2b8:
    // 0x22e2b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22e2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_22e2bc:
    // 0x22e2bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x22e2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22e2c0:
    // 0x22e2c0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x22e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_22e2c4:
    // 0x22e2c4: 0x2442aea0  addiu       $v0, $v0, -0x5160
    ctx->pc = 0x22e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946464));
label_22e2c8:
    // 0x22e2c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22e2cc:
    // 0x22e2cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22e2d0:
    // 0x22e2d0: 0x40f809  jalr        $v0
label_22e2d4:
    if (ctx->pc == 0x22E2D4u) {
        ctx->pc = 0x22E2D8u;
        goto label_22e2d8;
    }
    ctx->pc = 0x22E2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22E2D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E2D0u, 0x22E2D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22E2D8u;
label_22e2d8:
    // 0x22e2d8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x22e2d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22e2dc:
    // 0x22e2dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x22e2dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_22e2e0:
    // 0x22e2e0: 0x3e00008  jr          $ra
label_22e2e4:
    if (ctx->pc == 0x22E2E4u) {
        ctx->pc = 0x22E2E8u;
        goto label_fallthrough_0x22e2e0;
    }
    ctx->pc = 0x22E2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22e2e0:
    ctx->pc = 0x22E2E8u;
}
