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

// Function: entry_0018fa60
// Address: 0x18fa60 - 0x18fa90
void entry_0018fa60_0x18fa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fa60_0x18fa60");
#endif

    ctx->pc = 0x18fa60u;

    // 0x18fa60: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x18fa60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18fa64: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18fa64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18fa68: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18fa68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18fa6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18fa6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18fa70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18fa70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18fa74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18fa74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18fa78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18fa78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18fa7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18fa7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fa80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18fa80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fa84: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x18fa84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x18fa88: 0x3e00008  jr          $ra
    ctx->pc = 0x18FA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FA90u;
}
