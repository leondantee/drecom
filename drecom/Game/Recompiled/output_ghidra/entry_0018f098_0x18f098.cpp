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

// Function: entry_0018f098
// Address: 0x18f098 - 0x18f0b8
void entry_0018f098_0x18f098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f098_0x18f098");
#endif

    ctx->pc = 0x18f098u;

    // 0x18f098: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18f098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f09c: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x18f09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x18f0a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f0a4: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x18f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x18f0a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f0a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f0ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18f0acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18f0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x18F0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F0B8u;
}
