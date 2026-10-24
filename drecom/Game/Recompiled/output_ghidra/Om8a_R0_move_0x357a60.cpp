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

// Function: Om8a_R0_move
// Address: 0x357a60 - 0x357aa8
void Om8a_R0_move_0x357a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8a_R0_move_0x357a60");
#endif

    switch (ctx->pc) {
        case 0x357a60u: goto label_357a60;
        case 0x357a64u: goto label_357a64;
        case 0x357a68u: goto label_357a68;
        case 0x357a6cu: goto label_357a6c;
        case 0x357a70u: goto label_357a70;
        case 0x357a74u: goto label_357a74;
        case 0x357a78u: goto label_357a78;
        case 0x357a7cu: goto label_357a7c;
        case 0x357a80u: goto label_357a80;
        case 0x357a84u: goto label_357a84;
        case 0x357a88u: goto label_357a88;
        case 0x357a8cu: goto label_357a8c;
        case 0x357a90u: goto label_357a90;
        case 0x357a94u: goto label_357a94;
        case 0x357a98u: goto label_357a98;
        case 0x357a9cu: goto label_357a9c;
        case 0x357aa0u: goto label_357aa0;
        case 0x357aa4u: goto label_357aa4;
        default: break;
    }

    ctx->pc = 0x357a60u;

label_357a60:
    // 0x357a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_357a64:
    // 0x357a64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x357a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_357a68:
    // 0x357a68: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x357a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_357a6c:
    // 0x357a6c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x357a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_357a70:
    // 0x357a70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x357a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_357a74:
    // 0x357a74: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x357a74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_357a78:
    // 0x357a78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x357a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_357a7c:
    // 0x357a7c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x357a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_357a80:
    // 0x357a80: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x357a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_357a84:
    // 0x357a84: 0x2442a6e0  addiu       $v0, $v0, -0x5920
    ctx->pc = 0x357a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944480));
label_357a88:
    // 0x357a88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x357a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_357a8c:
    // 0x357a8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x357a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_357a90:
    // 0x357a90: 0x40f809  jalr        $v0
label_357a94:
    if (ctx->pc == 0x357A94u) {
        ctx->pc = 0x357A98u;
        goto label_357a98;
    }
    ctx->pc = 0x357A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x357A98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357A90u, 0x357A98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x357A98u;
label_357a98:
    // 0x357a98: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x357a98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_357a9c:
    // 0x357a9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x357a9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_357aa0:
    // 0x357aa0: 0x3e00008  jr          $ra
label_357aa4:
    if (ctx->pc == 0x357AA4u) {
        ctx->pc = 0x357AA8u;
        goto label_fallthrough_0x357aa0;
    }
    ctx->pc = 0x357AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x357aa0:
    ctx->pc = 0x357AA8u;
}
