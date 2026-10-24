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

// Function: entry_00278a08
// Address: 0x278a08 - 0x278a20
void entry_00278a08_0x278a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00278a08_0x278a08");
#endif

    switch (ctx->pc) {
        case 0x278a10u: goto label_278a10;
        default: break;
    }

    ctx->pc = 0x278a08u;

    // 0x278a08: 0xc09e354  jal         func_278D50
    ctx->pc = 0x278A08u;
    SET_GPR_U32(ctx, 31, 0x278A10u);
    ctx->pc = 0x278D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278D50u, 0x278A08u, 0x278A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278A10u;
label_278a10:
    // 0x278a10: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x278a10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278a14: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x278a14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x278a18: 0x3e00008  jr          $ra
    ctx->pc = 0x278A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278A20u;
}
