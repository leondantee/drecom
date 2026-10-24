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

// Function: entry_002729e4
// Address: 0x2729e4 - 0x2729fc
void entry_002729e4_0x2729e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002729e4_0x2729e4");
#endif

    switch (ctx->pc) {
        case 0x2729ecu: goto label_2729ec;
        default: break;
    }

    ctx->pc = 0x2729e4u;

    // 0x2729e4: 0xc084934  jal         func_2124D0
    ctx->pc = 0x2729E4u;
    SET_GPR_U32(ctx, 31, 0x2729ECu);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x2729E4u, 0x2729ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2729ECu;
label_2729ec:
    // 0x2729ec: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2729ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2729f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2729f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2729f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2729F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2729F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2729FCu;
}
