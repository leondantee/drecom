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

// Function: entry_003574ac
// Address: 0x3574ac - 0x3574c8
void entry_003574ac_0x3574ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003574ac_0x3574ac");
#endif

    ctx->pc = 0x3574acu;

    // 0x3574ac: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x3574acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3574b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3574b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3574b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3574b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3574b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3574b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3574bc: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x3574bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3574c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3574C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3574C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3574C8u;
}
