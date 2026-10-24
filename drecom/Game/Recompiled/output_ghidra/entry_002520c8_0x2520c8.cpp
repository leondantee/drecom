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

// Function: entry_002520c8
// Address: 0x2520c8 - 0x2520e4
void entry_002520c8_0x2520c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002520c8_0x2520c8");
#endif

    ctx->pc = 0x2520c8u;

    // 0x2520c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2520c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2520cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2520ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2520d0: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x2520d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x2520d4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2520d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2520d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2520d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2520dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2520DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2520DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2520E4u;
}
