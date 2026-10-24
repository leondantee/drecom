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

// Function: entry_001a9b04
// Address: 0x1a9b04 - 0x1a9b1c
void entry_001a9b04_0x1a9b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9b04_0x1a9b04");
#endif

    ctx->pc = 0x1a9b04u;

    // 0x1a9b04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a9b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9b08: 0xfc6401f0  sd          $a0, 0x1F0($v1)
    ctx->pc = 0x1a9b08u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 496), GPR_U64(ctx, 4));
    // 0x1a9b0c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1a9b0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9b10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a9b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a9b14: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9B1Cu;
}
