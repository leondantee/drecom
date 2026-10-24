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

// Function: entry_002542fc
// Address: 0x2542fc - 0x254314
void entry_002542fc_0x2542fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002542fc_0x2542fc");
#endif

    switch (ctx->pc) {
        case 0x254304u: goto label_254304;
        default: break;
    }

    ctx->pc = 0x2542fcu;

    // 0x2542fc: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2542FCu;
    SET_GPR_U32(ctx, 31, 0x254304u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2542FCu, 0x254304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254304u;
label_254304:
    // 0x254304: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x254304u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254308: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x254308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25430c: 0x3e00008  jr          $ra
    ctx->pc = 0x25430Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25430Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254314u;
}
