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

// Function: Eff2d_06
// Address: 0x21f690 - 0x21f6d4
void Eff2d_06_0x21f690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff2d_06_0x21f690");
#endif

    switch (ctx->pc) {
        case 0x21f690u: goto label_21f690;
        case 0x21f694u: goto label_21f694;
        case 0x21f698u: goto label_21f698;
        case 0x21f69cu: goto label_21f69c;
        case 0x21f6a0u: goto label_21f6a0;
        case 0x21f6a4u: goto label_21f6a4;
        case 0x21f6a8u: goto label_21f6a8;
        case 0x21f6acu: goto label_21f6ac;
        case 0x21f6b0u: goto label_21f6b0;
        case 0x21f6b4u: goto label_21f6b4;
        case 0x21f6b8u: goto label_21f6b8;
        case 0x21f6bcu: goto label_21f6bc;
        case 0x21f6c0u: goto label_21f6c0;
        case 0x21f6c4u: goto label_21f6c4;
        case 0x21f6c8u: goto label_21f6c8;
        case 0x21f6ccu: goto label_21f6cc;
        case 0x21f6d0u: goto label_21f6d0;
        default: break;
    }

    ctx->pc = 0x21f690u;

label_21f690:
    // 0x21f690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21f690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21f694:
    // 0x21f694: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x21f694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_21f698:
    // 0x21f698: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x21f698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_21f69c:
    // 0x21f69c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x21f69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_21f6a0:
    // 0x21f6a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x21f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_21f6a4:
    // 0x21f6a4: 0x8c420128  lw          $v0, 0x128($v0)
    ctx->pc = 0x21f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
label_21f6a8:
    // 0x21f6a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x21f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21f6ac:
    // 0x21f6ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x21f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_21f6b0:
    // 0x21f6b0: 0x2442ab48  addiu       $v0, $v0, -0x54B8
    ctx->pc = 0x21f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945608));
label_21f6b4:
    // 0x21f6b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21f6b8:
    // 0x21f6b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21f6bc:
    // 0x21f6bc: 0x40f809  jalr        $v0
label_21f6c0:
    if (ctx->pc == 0x21F6C0u) {
        ctx->pc = 0x21F6C4u;
        goto label_21f6c4;
    }
    ctx->pc = 0x21F6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21F6C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F6BCu, 0x21F6C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21F6C4u;
label_21f6c4:
    // 0x21f6c4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x21f6c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21f6c8:
    // 0x21f6c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x21f6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21f6cc:
    // 0x21f6cc: 0x3e00008  jr          $ra
label_21f6d0:
    if (ctx->pc == 0x21F6D0u) {
        ctx->pc = 0x21F6D4u;
        goto label_fallthrough_0x21f6cc;
    }
    ctx->pc = 0x21F6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21f6cc:
    ctx->pc = 0x21F6D4u;
}
