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

// Function: entry_00359d10
// Address: 0x359d10 - 0x359d28
void entry_00359d10_0x359d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00359d10_0x359d10");
#endif

    switch (ctx->pc) {
        case 0x359d18u: goto label_359d18;
        default: break;
    }

    ctx->pc = 0x359d10u;

    // 0x359d10: 0xc0d688c  jal         func_35A230
    ctx->pc = 0x359D10u;
    SET_GPR_U32(ctx, 31, 0x359D18u);
    ctx->pc = 0x35A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A230u, 0x359D10u, 0x359D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359D18u;
label_359d18:
    // 0x359d18: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x359d18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359d1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x359d1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x359d20: 0x3e00008  jr          $ra
    ctx->pc = 0x359D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359D28u;
}
