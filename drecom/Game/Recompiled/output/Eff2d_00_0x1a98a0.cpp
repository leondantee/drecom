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

// Function: Eff2d_00
// Address: 0x1a98a0 - 0x1a98e4
void Eff2d_00_0x1a98a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff2d_00_0x1a98a0");
#endif

    switch (ctx->pc) {
        case 0x1a98a0u: goto label_1a98a0;
        case 0x1a98a4u: goto label_1a98a4;
        case 0x1a98a8u: goto label_1a98a8;
        case 0x1a98acu: goto label_1a98ac;
        case 0x1a98b0u: goto label_1a98b0;
        case 0x1a98b4u: goto label_1a98b4;
        case 0x1a98b8u: goto label_1a98b8;
        case 0x1a98bcu: goto label_1a98bc;
        case 0x1a98c0u: goto label_1a98c0;
        case 0x1a98c4u: goto label_1a98c4;
        case 0x1a98c8u: goto label_1a98c8;
        case 0x1a98ccu: goto label_1a98cc;
        case 0x1a98d0u: goto label_1a98d0;
        case 0x1a98d4u: goto label_1a98d4;
        case 0x1a98d8u: goto label_1a98d8;
        case 0x1a98dcu: goto label_1a98dc;
        case 0x1a98e0u: goto label_1a98e0;
        default: break;
    }

    ctx->pc = 0x1a98a0u;

label_1a98a0:
    // 0x1a98a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a98a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a98a4:
    // 0x1a98a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1a98a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1a98a8:
    // 0x1a98a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1a98a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1a98ac:
    // 0x1a98ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1a98acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1a98b0:
    // 0x1a98b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a98b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1a98b4:
    // 0x1a98b4: 0x8c420128  lw          $v0, 0x128($v0)
    ctx->pc = 0x1a98b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
label_1a98b8:
    // 0x1a98b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a98b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a98bc:
    // 0x1a98bc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1a98bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1a98c0:
    // 0x1a98c0: 0x24428150  addiu       $v0, $v0, -0x7EB0
    ctx->pc = 0x1a98c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934864));
label_1a98c4:
    // 0x1a98c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a98c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a98c8:
    // 0x1a98c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a98c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a98cc:
    // 0x1a98cc: 0x40f809  jalr        $v0
label_1a98d0:
    if (ctx->pc == 0x1A98D0u) {
        ctx->pc = 0x1A98D4u;
        goto label_1a98d4;
    }
    ctx->pc = 0x1A98CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A98D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A98CCu, 0x1A98D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A98D4u;
label_1a98d4:
    // 0x1a98d4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1a98d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a98d8:
    // 0x1a98d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a98d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a98dc:
    // 0x1a98dc: 0x3e00008  jr          $ra
label_1a98e0:
    if (ctx->pc == 0x1A98E0u) {
        ctx->pc = 0x1A98E4u;
        goto label_fallthrough_0x1a98dc;
    }
    ctx->pc = 0x1A98DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A98DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a98dc:
    ctx->pc = 0x1A98E4u;
}
