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

// Function: Strip_04
// Address: 0x1fe990 - 0x1fe9d4
void Strip_04_0x1fe990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Strip_04_0x1fe990");
#endif

    switch (ctx->pc) {
        case 0x1fe990u: goto label_1fe990;
        case 0x1fe994u: goto label_1fe994;
        case 0x1fe998u: goto label_1fe998;
        case 0x1fe99cu: goto label_1fe99c;
        case 0x1fe9a0u: goto label_1fe9a0;
        case 0x1fe9a4u: goto label_1fe9a4;
        case 0x1fe9a8u: goto label_1fe9a8;
        case 0x1fe9acu: goto label_1fe9ac;
        case 0x1fe9b0u: goto label_1fe9b0;
        case 0x1fe9b4u: goto label_1fe9b4;
        case 0x1fe9b8u: goto label_1fe9b8;
        case 0x1fe9bcu: goto label_1fe9bc;
        case 0x1fe9c0u: goto label_1fe9c0;
        case 0x1fe9c4u: goto label_1fe9c4;
        case 0x1fe9c8u: goto label_1fe9c8;
        case 0x1fe9ccu: goto label_1fe9cc;
        case 0x1fe9d0u: goto label_1fe9d0;
        default: break;
    }

    ctx->pc = 0x1fe990u;

label_1fe990:
    // 0x1fe990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fe990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fe994:
    // 0x1fe994: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1fe994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1fe998:
    // 0x1fe998: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1fe998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1fe99c:
    // 0x1fe99c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1fe99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1fe9a0:
    // 0x1fe9a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1fe9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1fe9a4:
    // 0x1fe9a4: 0x8c420358  lw          $v0, 0x358($v0)
    ctx->pc = 0x1fe9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 856)));
label_1fe9a8:
    // 0x1fe9a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fe9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fe9ac:
    // 0x1fe9ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1fe9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1fe9b0:
    // 0x1fe9b0: 0x24429f60  addiu       $v0, $v0, -0x60A0
    ctx->pc = 0x1fe9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942560));
label_1fe9b4:
    // 0x1fe9b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fe9b8:
    // 0x1fe9b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fe9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fe9bc:
    // 0x1fe9bc: 0x40f809  jalr        $v0
label_1fe9c0:
    if (ctx->pc == 0x1FE9C0u) {
        ctx->pc = 0x1FE9C4u;
        goto label_1fe9c4;
    }
    ctx->pc = 0x1FE9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE9C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE9BCu, 0x1FE9C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE9C4u;
label_1fe9c4:
    // 0x1fe9c4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1fe9c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe9c8:
    // 0x1fe9c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1fe9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1fe9cc:
    // 0x1fe9cc: 0x3e00008  jr          $ra
label_1fe9d0:
    if (ctx->pc == 0x1FE9D0u) {
        ctx->pc = 0x1FE9D4u;
        goto label_fallthrough_0x1fe9cc;
    }
    ctx->pc = 0x1FE9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fe9cc:
    ctx->pc = 0x1FE9D4u;
}
