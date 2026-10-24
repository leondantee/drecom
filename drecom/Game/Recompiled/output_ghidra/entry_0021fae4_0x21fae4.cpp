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

// Function: entry_0021fae4
// Address: 0x21fae4 - 0x21fb04
void entry_0021fae4_0x21fae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fae4_0x21fae4");
#endif

    switch (ctx->pc) {
        case 0x21faecu: goto label_21faec;
        default: break;
    }

    ctx->pc = 0x21fae4u;

    // 0x21fae4: 0xc0c9918  jal         func_326460
    ctx->pc = 0x21FAE4u;
    SET_GPR_U32(ctx, 31, 0x21FAECu);
    ctx->pc = 0x326460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326460u, 0x21FAE4u, 0x21FAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FAECu;
label_21faec:
    // 0x21faec: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x21faecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21faf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21faf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21faf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21faf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21faf8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x21faf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21fafc: 0x3e00008  jr          $ra
    ctx->pc = 0x21FAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FB04u;
}
