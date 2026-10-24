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

// Function: entry_002124f4
// Address: 0x2124f4 - 0x21250c
void entry_002124f4_0x2124f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002124f4_0x2124f4");
#endif

    switch (ctx->pc) {
        case 0x2124fcu: goto label_2124fc;
        default: break;
    }

    ctx->pc = 0x2124f4u;

    // 0x2124f4: 0xc084a18  jal         func_212860
    ctx->pc = 0x2124F4u;
    SET_GPR_U32(ctx, 31, 0x2124FCu);
    ctx->pc = 0x212860u;
    {
        ctx->pc = 0x2124FCu;
        ps2_syscalls::ExitDeleteThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2124FCu) { return; }
    ctx->pc = 0x2124FCu;
label_2124fc:
    // 0x2124fc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2124fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212500: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x212500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x212504: 0x3e00008  jr          $ra
    ctx->pc = 0x212504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21250Cu;
}
