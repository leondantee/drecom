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

// Function: entry_002f2a54
// Address: 0x2f2a54 - 0x2f2a78
void entry_002f2a54_0x2f2a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f2a54_0x2f2a54");
#endif

    ctx->pc = 0x2f2a54u;

    // 0x2f2a54: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x2f2a54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f2a58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f2a58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2a5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f2a5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2a60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f2a60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2a64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f2a64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2a68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f2a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2a6c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2f2a6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f2a70: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2A78u;
}
