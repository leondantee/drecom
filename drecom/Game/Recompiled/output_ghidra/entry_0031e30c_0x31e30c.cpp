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

// Function: entry_0031e30c
// Address: 0x31e30c - 0x31e324
void entry_0031e30c_0x31e30c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e30c_0x31e30c");
#endif

    switch (ctx->pc) {
        case 0x31e314u: goto label_31e314;
        default: break;
    }

    ctx->pc = 0x31e30cu;

    // 0x31e30c: 0xc0848cc  jal         func_212330
    ctx->pc = 0x31E30Cu;
    SET_GPR_U32(ctx, 31, 0x31E314u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x31E30Cu, 0x31E314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E314u;
label_31e314:
    // 0x31e314: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x31e314u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e318: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x31e318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31e31c: 0x3e00008  jr          $ra
    ctx->pc = 0x31E31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E324u;
}
