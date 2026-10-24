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

// Function: Eff2d_0e
// Address: 0x1ab1d0 - 0x1ab214
void Eff2d_0e_0x1ab1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff2d_0e_0x1ab1d0");
#endif

    switch (ctx->pc) {
        case 0x1ab1d0u: goto label_1ab1d0;
        case 0x1ab1d4u: goto label_1ab1d4;
        case 0x1ab1d8u: goto label_1ab1d8;
        case 0x1ab1dcu: goto label_1ab1dc;
        case 0x1ab1e0u: goto label_1ab1e0;
        case 0x1ab1e4u: goto label_1ab1e4;
        case 0x1ab1e8u: goto label_1ab1e8;
        case 0x1ab1ecu: goto label_1ab1ec;
        case 0x1ab1f0u: goto label_1ab1f0;
        case 0x1ab1f4u: goto label_1ab1f4;
        case 0x1ab1f8u: goto label_1ab1f8;
        case 0x1ab1fcu: goto label_1ab1fc;
        case 0x1ab200u: goto label_1ab200;
        case 0x1ab204u: goto label_1ab204;
        case 0x1ab208u: goto label_1ab208;
        case 0x1ab20cu: goto label_1ab20c;
        case 0x1ab210u: goto label_1ab210;
        default: break;
    }

    ctx->pc = 0x1ab1d0u;

label_1ab1d0:
    // 0x1ab1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ab1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ab1d4:
    // 0x1ab1d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1ab1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1ab1d8:
    // 0x1ab1d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1ab1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1ab1dc:
    // 0x1ab1dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1ab1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1ab1e0:
    // 0x1ab1e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ab1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1ab1e4:
    // 0x1ab1e4: 0x8c420128  lw          $v0, 0x128($v0)
    ctx->pc = 0x1ab1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
label_1ab1e8:
    // 0x1ab1e8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ab1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ab1ec:
    // 0x1ab1ec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ab1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1ab1f0:
    // 0x1ab1f0: 0x244281f0  addiu       $v0, $v0, -0x7E10
    ctx->pc = 0x1ab1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935024));
label_1ab1f4:
    // 0x1ab1f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ab1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ab1f8:
    // 0x1ab1f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ab1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ab1fc:
    // 0x1ab1fc: 0x40f809  jalr        $v0
label_1ab200:
    if (ctx->pc == 0x1AB200u) {
        ctx->pc = 0x1AB204u;
        goto label_1ab204;
    }
    ctx->pc = 0x1AB1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AB204u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB1FCu, 0x1AB204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB204u;
label_1ab204:
    // 0x1ab204: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1ab204u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab208:
    // 0x1ab208: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ab208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ab20c:
    // 0x1ab20c: 0x3e00008  jr          $ra
label_1ab210:
    if (ctx->pc == 0x1AB210u) {
        ctx->pc = 0x1AB214u;
        goto label_fallthrough_0x1ab20c;
    }
    ctx->pc = 0x1AB20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ab20c:
    ctx->pc = 0x1AB214u;
}
