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

// Function: entry_0021d834
// Address: 0x21d834 - 0x21d858
void entry_0021d834_0x21d834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021d834_0x21d834");
#endif

    switch (ctx->pc) {
        case 0x21d83cu: goto label_21d83c;
        default: break;
    }

    ctx->pc = 0x21d834u;

    // 0x21d834: 0xc0c9918  jal         func_326460
    ctx->pc = 0x21D834u;
    SET_GPR_U32(ctx, 31, 0x21D83Cu);
    ctx->pc = 0x326460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326460u, 0x21D834u, 0x21D83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D83Cu;
label_21d83c:
    // 0x21d83c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x21d83cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21d840: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21d840u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d844: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21d844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21d848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d84c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x21d84cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x21d850: 0x3e00008  jr          $ra
    ctx->pc = 0x21D850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D858u;
}
