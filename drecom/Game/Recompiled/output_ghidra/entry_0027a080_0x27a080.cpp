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

// Function: entry_0027a080
// Address: 0x27a080 - 0x27a094
void entry_0027a080_0x27a080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027a080_0x27a080");
#endif

    ctx->pc = 0x27a080u;

    // 0x27a080: 0xa420d4be  sh          $zero, -0x2B42($at)
    ctx->pc = 0x27a080u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294956222), (uint16_t)GPR_U32(ctx, 0));
    // 0x27a084: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x27a084u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a088: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27a088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27a08c: 0x3e00008  jr          $ra
    ctx->pc = 0x27A08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A094u;
}
