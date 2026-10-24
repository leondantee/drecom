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

// Function: entry_0027fc50
// Address: 0x27fc50 - 0x27fc6c
void entry_0027fc50_0x27fc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027fc50_0x27fc50");
#endif

    switch (ctx->pc) {
        case 0x27fc58u: goto label_27fc58;
        default: break;
    }

    ctx->pc = 0x27fc50u;

    // 0x27fc50: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27FC50u;
    SET_GPR_U32(ctx, 31, 0x27FC58u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27FC50u, 0x27FC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC58u;
label_27fc58:
    // 0x27fc58: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27fc58u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27fc5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27fc5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27fc60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27fc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27fc64: 0x3e00008  jr          $ra
    ctx->pc = 0x27FC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FC6Cu;
}
