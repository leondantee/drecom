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

// Function: entry_00175128
// Address: 0x175128 - 0x175140
void entry_00175128_0x175128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175128_0x175128");
#endif

    switch (ctx->pc) {
        case 0x175130u: goto label_175130;
        default: break;
    }

    ctx->pc = 0x175128u;

    // 0x175128: 0xc096290  jal         func_258A40
    ctx->pc = 0x175128u;
    SET_GPR_U32(ctx, 31, 0x175130u);
    ctx->pc = 0x258A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A40u, 0x175128u, 0x175130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175130u;
label_175130:
    // 0x175130: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x175130u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175134: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x175134u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x175138: 0x3e00008  jr          $ra
    ctx->pc = 0x175138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175140u;
}
