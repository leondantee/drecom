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

// Function: entry_00183be8
// Address: 0x183be8 - 0x183c04
void entry_00183be8_0x183be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183be8_0x183be8");
#endif

    switch (ctx->pc) {
        case 0x183bf0u: goto label_183bf0;
        default: break;
    }

    ctx->pc = 0x183be8u;

    // 0x183be8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x183BE8u;
    SET_GPR_U32(ctx, 31, 0x183BF0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x183BF0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x183BF0u) { return; }
    ctx->pc = 0x183BF0u;
label_183bf0:
    // 0x183bf0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x183bf0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183bf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183bf8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x183bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x183bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x183BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183C04u;
}
