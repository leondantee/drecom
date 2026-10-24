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

// Function: entry_00271950
// Address: 0x271950 - 0x271974
void entry_00271950_0x271950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271950_0x271950");
#endif

    switch (ctx->pc) {
        case 0x271958u: goto label_271958;
        default: break;
    }

    ctx->pc = 0x271950u;

    // 0x271950: 0xc084934  jal         func_2124D0
    ctx->pc = 0x271950u;
    SET_GPR_U32(ctx, 31, 0x271958u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x271950u, 0x271958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271958u;
label_271958:
    // 0x271958: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x271958u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27195c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27195cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271960: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x271960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271968: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x271968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27196c: 0x3e00008  jr          $ra
    ctx->pc = 0x27196Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27196Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271974u;
}
