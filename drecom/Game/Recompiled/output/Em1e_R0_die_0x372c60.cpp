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

// Function: Em1e_R0_die
// Address: 0x372c60 - 0x372ca8
void Em1e_R0_die_0x372c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1e_R0_die_0x372c60");
#endif

    switch (ctx->pc) {
        case 0x372c60u: goto label_372c60;
        case 0x372c64u: goto label_372c64;
        case 0x372c68u: goto label_372c68;
        case 0x372c6cu: goto label_372c6c;
        case 0x372c70u: goto label_372c70;
        case 0x372c74u: goto label_372c74;
        case 0x372c78u: goto label_372c78;
        case 0x372c7cu: goto label_372c7c;
        case 0x372c80u: goto label_372c80;
        case 0x372c84u: goto label_372c84;
        case 0x372c88u: goto label_372c88;
        case 0x372c8cu: goto label_372c8c;
        case 0x372c90u: goto label_372c90;
        case 0x372c94u: goto label_372c94;
        case 0x372c98u: goto label_372c98;
        case 0x372c9cu: goto label_372c9c;
        case 0x372ca0u: goto label_372ca0;
        case 0x372ca4u: goto label_372ca4;
        default: break;
    }

    ctx->pc = 0x372c60u;

label_372c60:
    // 0x372c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x372c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_372c64:
    // 0x372c64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x372c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_372c68:
    // 0x372c68: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x372c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_372c6c:
    // 0x372c6c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x372c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_372c70:
    // 0x372c70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x372c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_372c74:
    // 0x372c74: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x372c74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_372c78:
    // 0x372c78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_372c7c:
    // 0x372c7c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x372c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_372c80:
    // 0x372c80: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x372c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_372c84:
    // 0x372c84: 0x2442b5d8  addiu       $v0, $v0, -0x4A28
    ctx->pc = 0x372c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948312));
label_372c88:
    // 0x372c88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x372c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_372c8c:
    // 0x372c8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x372c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_372c90:
    // 0x372c90: 0x40f809  jalr        $v0
label_372c94:
    if (ctx->pc == 0x372C94u) {
        ctx->pc = 0x372C98u;
        goto label_372c98;
    }
    ctx->pc = 0x372C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x372C98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372C90u, 0x372C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x372C98u;
label_372c98:
    // 0x372c98: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x372c98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_372c9c:
    // 0x372c9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x372c9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_372ca0:
    // 0x372ca0: 0x3e00008  jr          $ra
label_372ca4:
    if (ctx->pc == 0x372CA4u) {
        ctx->pc = 0x372CA8u;
        goto label_fallthrough_0x372ca0;
    }
    ctx->pc = 0x372CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x372ca0:
    ctx->pc = 0x372CA8u;
}
