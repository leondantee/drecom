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

// Function: entry_0021e18c
// Address: 0x21e18c - 0x21e1ac
void entry_0021e18c_0x21e18c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021e18c_0x21e18c");
#endif

    switch (ctx->pc) {
        case 0x21e194u: goto label_21e194;
        default: break;
    }

    ctx->pc = 0x21e18cu;

    // 0x21e18c: 0xc0c9918  jal         func_326460
    ctx->pc = 0x21E18Cu;
    SET_GPR_U32(ctx, 31, 0x21E194u);
    ctx->pc = 0x326460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326460u, 0x21E18Cu, 0x21E194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E194u;
label_21e194:
    // 0x21e194: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x21e194u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e198: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21e198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e19c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21e19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e1a0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x21e1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21e1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x21E1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E1ACu;
}
