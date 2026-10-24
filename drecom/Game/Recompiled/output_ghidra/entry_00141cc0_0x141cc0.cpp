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

// Function: entry_00141cc0
// Address: 0x141cc0 - 0x141ce0
void entry_00141cc0_0x141cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141cc0_0x141cc0");
#endif

    ctx->pc = 0x141cc0u;

    // 0x141cc0: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x141cc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x141cc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x141cc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141cc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x141cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141ccc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141cd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141cd4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x141cd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x141cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x141CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141CE0u;
}
