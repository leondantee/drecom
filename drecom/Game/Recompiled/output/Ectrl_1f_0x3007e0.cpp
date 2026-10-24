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

// Function: Ectrl_1f
// Address: 0x3007e0 - 0x300824
void Ectrl_1f_0x3007e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_1f_0x3007e0");
#endif

    switch (ctx->pc) {
        case 0x3007e0u: goto label_3007e0;
        case 0x3007e4u: goto label_3007e4;
        case 0x3007e8u: goto label_3007e8;
        case 0x3007ecu: goto label_3007ec;
        case 0x3007f0u: goto label_3007f0;
        case 0x3007f4u: goto label_3007f4;
        case 0x3007f8u: goto label_3007f8;
        case 0x3007fcu: goto label_3007fc;
        case 0x300800u: goto label_300800;
        case 0x300804u: goto label_300804;
        case 0x300808u: goto label_300808;
        case 0x30080cu: goto label_30080c;
        case 0x300810u: goto label_300810;
        case 0x300814u: goto label_300814;
        case 0x300818u: goto label_300818;
        case 0x30081cu: goto label_30081c;
        case 0x300820u: goto label_300820;
        default: break;
    }

    ctx->pc = 0x3007e0u;

label_3007e0:
    // 0x3007e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3007e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3007e4:
    // 0x3007e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3007e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_3007e8:
    // 0x3007e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3007e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_3007ec:
    // 0x3007ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3007ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3007f0:
    // 0x3007f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3007f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3007f4:
    // 0x3007f4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3007f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3007f8:
    // 0x3007f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3007f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3007fc:
    // 0x3007fc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3007fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_300800:
    // 0x300800: 0x24429240  addiu       $v0, $v0, -0x6DC0
    ctx->pc = 0x300800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
label_300804:
    // 0x300804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x300804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_300808:
    // 0x300808: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x300808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30080c:
    // 0x30080c: 0x40f809  jalr        $v0
label_300810:
    if (ctx->pc == 0x300810u) {
        ctx->pc = 0x300814u;
        goto label_300814;
    }
    ctx->pc = 0x30080Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300814u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30080Cu, 0x300814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300814u;
label_300814:
    // 0x300814: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x300814u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_300818:
    // 0x300818: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x300818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_30081c:
    // 0x30081c: 0x3e00008  jr          $ra
label_300820:
    if (ctx->pc == 0x300820u) {
        ctx->pc = 0x300824u;
        goto label_fallthrough_0x30081c;
    }
    ctx->pc = 0x30081Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30081Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30081c:
    ctx->pc = 0x300824u;
}
