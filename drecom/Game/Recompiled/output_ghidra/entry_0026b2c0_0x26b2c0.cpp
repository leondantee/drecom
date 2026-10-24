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

// Function: entry_0026b2c0
// Address: 0x26b2c0 - 0x26b2e4
void entry_0026b2c0_0x26b2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026b2c0_0x26b2c0");
#endif

    ctx->pc = 0x26b2c0u;

    // 0x26b2c0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26b2c4: 0x8483127c  lh          $v1, 0x127C($a0)
    ctx->pc = 0x26b2c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4732)));
    // 0x26b2c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26b2cc: 0xa483127c  sh          $v1, 0x127C($a0)
    ctx->pc = 0x26b2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x26b2d0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x26b2d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b2d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26b2d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b2d8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x26b2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26b2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x26B2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B2E4u;
}
