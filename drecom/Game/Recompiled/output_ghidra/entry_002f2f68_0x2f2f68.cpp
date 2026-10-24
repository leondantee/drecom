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

// Function: entry_002f2f68
// Address: 0x2f2f68 - 0x2f2f8c
void entry_002f2f68_0x2f2f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f2f68_0x2f2f68");
#endif

    ctx->pc = 0x2f2f68u;

    // 0x2f2f68: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x2f2f68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f2f6c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2f2f6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f2f70: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f2f70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2f74: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f2f74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2f78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f2f78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2f7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f2f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2f80: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2f2f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2f2f84: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2F8Cu;
}
