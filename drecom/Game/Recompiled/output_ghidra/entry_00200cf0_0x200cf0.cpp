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

// Function: entry_00200cf0
// Address: 0x200cf0 - 0x200d14
void entry_00200cf0_0x200cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200cf0_0x200cf0");
#endif

    switch (ctx->pc) {
        case 0x200d04u: goto label_200d04;
        default: break;
    }

    ctx->pc = 0x200cf0u;

label_200cf0:
    // 0x200cf0: 0x24429f90  addiu       $v0, $v0, -0x6070
    ctx->pc = 0x200cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942608));
label_200cf4:
    // 0x200cf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_200cf8:
    // 0x200cf8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x200cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_200cfc:
    // 0x200cfc: 0x40f809  jalr        $v0
label_200d00:
    if (ctx->pc == 0x200D00u) {
        ctx->pc = 0x200D04u;
        goto label_200d04;
    }
    ctx->pc = 0x200CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200D04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200CFCu, 0x200D04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200D04u;
label_200d04:
    // 0x200d04: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x200d04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_200d08:
    // 0x200d08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x200d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_200d0c:
    // 0x200d0c: 0x3e00008  jr          $ra
label_200d10:
    if (ctx->pc == 0x200D10u) {
        ctx->pc = 0x200D14u;
        goto label_fallthrough_0x200d0c;
    }
    ctx->pc = 0x200D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x200d0c:
    ctx->pc = 0x200D14u;
}
