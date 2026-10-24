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

// Function: Om87_R0_move
// Address: 0x362590 - 0x3625d8
void Om87_R0_move_0x362590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om87_R0_move_0x362590");
#endif

    switch (ctx->pc) {
        case 0x362590u: goto label_362590;
        case 0x362594u: goto label_362594;
        case 0x362598u: goto label_362598;
        case 0x36259cu: goto label_36259c;
        case 0x3625a0u: goto label_3625a0;
        case 0x3625a4u: goto label_3625a4;
        case 0x3625a8u: goto label_3625a8;
        case 0x3625acu: goto label_3625ac;
        case 0x3625b0u: goto label_3625b0;
        case 0x3625b4u: goto label_3625b4;
        case 0x3625b8u: goto label_3625b8;
        case 0x3625bcu: goto label_3625bc;
        case 0x3625c0u: goto label_3625c0;
        case 0x3625c4u: goto label_3625c4;
        case 0x3625c8u: goto label_3625c8;
        case 0x3625ccu: goto label_3625cc;
        case 0x3625d0u: goto label_3625d0;
        case 0x3625d4u: goto label_3625d4;
        default: break;
    }

    ctx->pc = 0x362590u;

label_362590:
    // 0x362590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x362590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_362594:
    // 0x362594: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x362594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_362598:
    // 0x362598: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x362598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_36259c:
    // 0x36259c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36259cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3625a0:
    // 0x3625a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3625a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3625a4:
    // 0x3625a4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x3625a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3625a8:
    // 0x3625a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3625a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3625ac:
    // 0x3625ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3625acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3625b0:
    // 0x3625b0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3625b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3625b4:
    // 0x3625b4: 0x2442acd0  addiu       $v0, $v0, -0x5330
    ctx->pc = 0x3625b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946000));
label_3625b8:
    // 0x3625b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3625b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3625bc:
    // 0x3625bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3625bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3625c0:
    // 0x3625c0: 0x40f809  jalr        $v0
label_3625c4:
    if (ctx->pc == 0x3625C4u) {
        ctx->pc = 0x3625C8u;
        goto label_3625c8;
    }
    ctx->pc = 0x3625C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3625C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3625C0u, 0x3625C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3625C8u;
label_3625c8:
    // 0x3625c8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3625c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3625cc:
    // 0x3625cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3625ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3625d0:
    // 0x3625d0: 0x3e00008  jr          $ra
label_3625d4:
    if (ctx->pc == 0x3625D4u) {
        ctx->pc = 0x3625D8u;
        goto label_fallthrough_0x3625d0;
    }
    ctx->pc = 0x3625D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3625D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3625d0:
    ctx->pc = 0x3625D8u;
}
