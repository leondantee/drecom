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

// Function: entry_002fd6d4
// Address: 0x2fd6d4 - 0x2fd6f4
void entry_002fd6d4_0x2fd6d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fd6d4_0x2fd6d4");
#endif

    ctx->pc = 0x2fd6d4u;

    // 0x2fd6d4: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x2fd6d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fd6d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fd6d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fd6dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fd6dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fd6e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fd6e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fd6e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fd6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd6e8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2fd6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2fd6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD6F4u;
}
