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

// Function: entry_00148e98
// Address: 0x148e98 - 0x148eb8
void entry_00148e98_0x148e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148e98_0x148e98");
#endif

    switch (ctx->pc) {
        case 0x148ea0u: goto label_148ea0;
        default: break;
    }

    ctx->pc = 0x148e98u;

    // 0x148e98: 0xc059b14  jal         func_166C50
    ctx->pc = 0x148E98u;
    SET_GPR_U32(ctx, 31, 0x148EA0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x148E98u, 0x148EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148EA0u;
label_148ea0:
    // 0x148ea0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x148ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x148ea4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x148ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x148ea8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x148ea8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148eac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x148eacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x148eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x148EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148EB8u;
}
