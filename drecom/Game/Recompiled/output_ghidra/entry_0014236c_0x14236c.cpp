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

// Function: entry_0014236c
// Address: 0x14236c - 0x142390
void entry_0014236c_0x14236c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014236c_0x14236c");
#endif

    switch (ctx->pc) {
        case 0x142374u: goto label_142374;
        default: break;
    }

    ctx->pc = 0x14236cu;

    // 0x14236c: 0xc0674dc  jal         func_19D370
    ctx->pc = 0x14236Cu;
    SET_GPR_U32(ctx, 31, 0x142374u);
    ctx->pc = 0x19D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D370u, 0x14236Cu, 0x142374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142374u;
label_142374:
    // 0x142374: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x142374u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142378: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x142378u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14237c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14237cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142384: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x142384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x142388: 0x3e00008  jr          $ra
    ctx->pc = 0x142388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142390u;
}
