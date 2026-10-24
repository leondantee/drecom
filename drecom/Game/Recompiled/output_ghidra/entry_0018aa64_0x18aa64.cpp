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

// Function: entry_0018aa64
// Address: 0x18aa64 - 0x18aa7c
void entry_0018aa64_0x18aa64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018aa64_0x18aa64");
#endif

    ctx->pc = 0x18aa64u;

    // 0x18aa64: 0xac230ae8  sw          $v1, 0xAE8($at)
    ctx->pc = 0x18aa64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2792), GPR_U32(ctx, 3));
    // 0x18aa68: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x18aa68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18aa6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18aa6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18aa70: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x18aa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18aa74: 0x3e00008  jr          $ra
    ctx->pc = 0x18AA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AA7Cu;
}
