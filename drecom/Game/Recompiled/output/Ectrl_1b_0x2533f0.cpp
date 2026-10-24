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

// Function: Ectrl_1b
// Address: 0x2533f0 - 0x253434
void Ectrl_1b_0x2533f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_1b_0x2533f0");
#endif

    switch (ctx->pc) {
        case 0x2533f0u: goto label_2533f0;
        case 0x2533f4u: goto label_2533f4;
        case 0x2533f8u: goto label_2533f8;
        case 0x2533fcu: goto label_2533fc;
        case 0x253400u: goto label_253400;
        case 0x253404u: goto label_253404;
        case 0x253408u: goto label_253408;
        case 0x25340cu: goto label_25340c;
        case 0x253410u: goto label_253410;
        case 0x253414u: goto label_253414;
        case 0x253418u: goto label_253418;
        case 0x25341cu: goto label_25341c;
        case 0x253420u: goto label_253420;
        case 0x253424u: goto label_253424;
        case 0x253428u: goto label_253428;
        case 0x25342cu: goto label_25342c;
        case 0x253430u: goto label_253430;
        default: break;
    }

    ctx->pc = 0x2533f0u;

label_2533f0:
    // 0x2533f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2533f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2533f4:
    // 0x2533f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2533f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2533f8:
    // 0x2533f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2533f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2533fc:
    // 0x2533fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2533fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_253400:
    // 0x253400: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x253400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_253404:
    // 0x253404: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x253404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_253408:
    // 0x253408: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x253408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25340c:
    // 0x25340c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x25340cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_253410:
    // 0x253410: 0x2442b740  addiu       $v0, $v0, -0x48C0
    ctx->pc = 0x253410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948672));
label_253414:
    // 0x253414: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x253414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_253418:
    // 0x253418: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x253418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25341c:
    // 0x25341c: 0x40f809  jalr        $v0
label_253420:
    if (ctx->pc == 0x253420u) {
        ctx->pc = 0x253424u;
        goto label_253424;
    }
    ctx->pc = 0x25341Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x253424u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25341Cu, 0x253424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x253424u;
label_253424:
    // 0x253424: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x253424u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_253428:
    // 0x253428: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x253428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_25342c:
    // 0x25342c: 0x3e00008  jr          $ra
label_253430:
    if (ctx->pc == 0x253430u) {
        ctx->pc = 0x253434u;
        goto label_fallthrough_0x25342c;
    }
    ctx->pc = 0x25342Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25342Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25342c:
    ctx->pc = 0x253434u;
}
