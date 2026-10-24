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

// Function: entry_0027c9fc
// Address: 0x27c9fc - 0x27ca1c
void entry_0027c9fc_0x27c9fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027c9fc_0x27c9fc");
#endif

    switch (ctx->pc) {
        case 0x27ca04u: goto label_27ca04;
        default: break;
    }

    ctx->pc = 0x27c9fcu;

    // 0x27c9fc: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27C9FCu;
    SET_GPR_U32(ctx, 31, 0x27CA04u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27C9FCu, 0x27CA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CA04u;
label_27ca04:
    // 0x27ca04: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x27ca04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ca08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27ca08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ca0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ca0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ca10: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27ca10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27ca14: 0x3e00008  jr          $ra
    ctx->pc = 0x27CA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27CA1Cu;
}
