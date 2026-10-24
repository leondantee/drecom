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

// Function: entry_0017df4c
// Address: 0x17df4c - 0x17df64
void entry_0017df4c_0x17df4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017df4c_0x17df4c");
#endif

    switch (ctx->pc) {
        case 0x17df54u: goto label_17df54;
        default: break;
    }

    ctx->pc = 0x17df4cu;

    // 0x17df4c: 0xc045630  jal         func_1158C0
    ctx->pc = 0x17DF4Cu;
    SET_GPR_U32(ctx, 31, 0x17DF54u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x17DF4Cu, 0x17DF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF54u;
label_17df54:
    // 0x17df54: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x17df54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17df58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17df58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17df5c: 0x3e00008  jr          $ra
    ctx->pc = 0x17DF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DF64u;
}
