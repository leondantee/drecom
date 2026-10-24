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

// Function: Om19_R0_move
// Address: 0x315d60 - 0x315da8
void Om19_R0_move_0x315d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om19_R0_move_0x315d60");
#endif

    switch (ctx->pc) {
        case 0x315d60u: goto label_315d60;
        case 0x315d64u: goto label_315d64;
        case 0x315d68u: goto label_315d68;
        case 0x315d6cu: goto label_315d6c;
        case 0x315d70u: goto label_315d70;
        case 0x315d74u: goto label_315d74;
        case 0x315d78u: goto label_315d78;
        case 0x315d7cu: goto label_315d7c;
        case 0x315d80u: goto label_315d80;
        case 0x315d84u: goto label_315d84;
        case 0x315d88u: goto label_315d88;
        case 0x315d8cu: goto label_315d8c;
        case 0x315d90u: goto label_315d90;
        case 0x315d94u: goto label_315d94;
        case 0x315d98u: goto label_315d98;
        case 0x315d9cu: goto label_315d9c;
        case 0x315da0u: goto label_315da0;
        case 0x315da4u: goto label_315da4;
        default: break;
    }

    ctx->pc = 0x315d60u;

label_315d60:
    // 0x315d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_315d64:
    // 0x315d64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x315d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_315d68:
    // 0x315d68: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x315d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_315d6c:
    // 0x315d6c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x315d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_315d70:
    // 0x315d70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x315d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_315d74:
    // 0x315d74: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x315d74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_315d78:
    // 0x315d78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x315d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_315d7c:
    // 0x315d7c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x315d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_315d80:
    // 0x315d80: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x315d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_315d84:
    // 0x315d84: 0x24429b80  addiu       $v0, $v0, -0x6480
    ctx->pc = 0x315d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941568));
label_315d88:
    // 0x315d88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_315d8c:
    // 0x315d8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x315d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_315d90:
    // 0x315d90: 0x40f809  jalr        $v0
label_315d94:
    if (ctx->pc == 0x315D94u) {
        ctx->pc = 0x315D98u;
        goto label_315d98;
    }
    ctx->pc = 0x315D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x315D98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315D90u, 0x315D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315D98u;
label_315d98:
    // 0x315d98: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x315d98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_315d9c:
    // 0x315d9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x315d9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_315da0:
    // 0x315da0: 0x3e00008  jr          $ra
label_315da4:
    if (ctx->pc == 0x315DA4u) {
        ctx->pc = 0x315DA8u;
        goto label_fallthrough_0x315da0;
    }
    ctx->pc = 0x315DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x315da0:
    ctx->pc = 0x315DA8u;
}
