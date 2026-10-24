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

// Function: entry_002838cc
// Address: 0x2838cc - 0x2838e8
void entry_002838cc_0x2838cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002838cc_0x2838cc");
#endif

    ctx->pc = 0x2838ccu;

    // 0x2838cc: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x2838ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 3));
    // 0x2838d0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2838d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2838d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2838d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2838d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2838d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2838dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2838dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2838e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2838E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2838E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2838E8u;
}
