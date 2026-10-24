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

// Function: entry_0031e9f4
// Address: 0x31e9f4 - 0x31ea10
void entry_0031e9f4_0x31e9f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e9f4_0x31e9f4");
#endif

    ctx->pc = 0x31e9f4u;

    // 0x31e9f4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x31e9f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31e9f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31e9f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31e9fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31e9fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ea00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31ea00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ea04: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x31ea04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31ea08: 0x3e00008  jr          $ra
    ctx->pc = 0x31EA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EA10u;
}
