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

// Function: entry_00221dcc
// Address: 0x221dcc - 0x221dec
void entry_00221dcc_0x221dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00221dcc_0x221dcc");
#endif

    ctx->pc = 0x221dccu;

    // 0x221dcc: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x221dccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221dd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x221dd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221dd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x221dd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221dd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x221dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221ddc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x221ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221de0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0
    ctx->pc = 0x221de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x221de4: 0x3e00008  jr          $ra
    ctx->pc = 0x221DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221DECu;
}
