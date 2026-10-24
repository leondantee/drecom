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

// Function: entry_00141e44
// Address: 0x141e44 - 0x141e5c
void entry_00141e44_0x141e44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141e44_0x141e44");
#endif

    ctx->pc = 0x141e44u;

    // 0x141e44: 0x24638f10  addiu       $v1, $v1, -0x70F0
    ctx->pc = 0x141e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938384));
    // 0x141e48: 0xae030a74  sw          $v1, 0xA74($s0)
    ctx->pc = 0x141e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2676), GPR_U32(ctx, 3));
    // 0x141e4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141e50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x141e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x141e54: 0x3e00008  jr          $ra
    ctx->pc = 0x141E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141E5Cu;
}
