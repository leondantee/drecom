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

// Function: entry_00355f18
// Address: 0x355f18 - 0x355f38
void entry_00355f18_0x355f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00355f18_0x355f18");
#endif

    ctx->pc = 0x355f18u;

    // 0x355f18: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x355f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x355f1c: 0x8483127c  lh          $v1, 0x127C($a0)
    ctx->pc = 0x355f1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4732)));
    // 0x355f20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x355f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x355f24: 0xa483127c  sh          $v1, 0x127C($a0)
    ctx->pc = 0x355f24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x355f28: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x355f28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355f2c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x355f2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x355f30: 0x3e00008  jr          $ra
    ctx->pc = 0x355F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355F38u;
}
