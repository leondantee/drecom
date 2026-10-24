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

// Function: entry_003405f0
// Address: 0x3405f0 - 0x34060c
void entry_003405f0_0x3405f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003405f0_0x3405f0");
#endif

    switch (ctx->pc) {
        case 0x3405f8u: goto label_3405f8;
        default: break;
    }

    ctx->pc = 0x3405f0u;

    // 0x3405f0: 0xc0cffc8  jal         func_33FF20
    ctx->pc = 0x3405F0u;
    SET_GPR_U32(ctx, 31, 0x3405F8u);
    ctx->pc = 0x33FF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FF20u, 0x3405F0u, 0x3405F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3405F8u;
label_3405f8:
    // 0x3405f8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3405f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3405fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3405fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340600: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x340600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x340604: 0x3e00008  jr          $ra
    ctx->pc = 0x340604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34060Cu;
}
