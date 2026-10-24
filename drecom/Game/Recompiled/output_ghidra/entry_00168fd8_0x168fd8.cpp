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

// Function: entry_00168fd8
// Address: 0x168fd8 - 0x168ff8
void entry_00168fd8_0x168fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168fd8_0x168fd8");
#endif

    ctx->pc = 0x168fd8u;

    // 0x168fd8: 0x8c22ab20  lw          $v0, -0x54E0($at)
    ctx->pc = 0x168fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294945568)));
    // 0x168fdc: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x168fdcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168fe0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x168fe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168fe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168fec: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x168fecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x168ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x168FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168FF8u;
}
