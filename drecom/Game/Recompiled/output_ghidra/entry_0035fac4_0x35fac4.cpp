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

// Function: entry_0035fac4
// Address: 0x35fac4 - 0x35fae4
void entry_0035fac4_0x35fac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035fac4_0x35fac4");
#endif

    switch (ctx->pc) {
        case 0x35faccu: goto label_35facc;
        default: break;
    }

    ctx->pc = 0x35fac4u;

    // 0x35fac4: 0xc096234  jal         func_2588D0
    ctx->pc = 0x35FAC4u;
    SET_GPR_U32(ctx, 31, 0x35FACCu);
    ctx->pc = 0x2588D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2588D0u, 0x35FAC4u, 0x35FACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FACCu;
label_35facc:
    // 0x35facc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x35faccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35fad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35fad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35fad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35fad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fad8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x35fad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x35fadc: 0x3e00008  jr          $ra
    ctx->pc = 0x35FADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FAE4u;
}
