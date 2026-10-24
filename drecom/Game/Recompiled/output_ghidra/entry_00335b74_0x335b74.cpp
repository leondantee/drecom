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

// Function: entry_00335b74
// Address: 0x335b74 - 0x335ba8
void entry_00335b74_0x335b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00335b74_0x335b74");
#endif

    ctx->pc = 0x335b74u;

    // 0x335b74: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x335b74u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x335b78: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x335b78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x335b7c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x335b7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x335b80: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x335b80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x335b84: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x335b84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x335b88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x335b88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x335b8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x335b8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x335b90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x335b90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x335b94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x335b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335b98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x335b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335b9c: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x335b9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x335ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x335BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335BA8u;
}
