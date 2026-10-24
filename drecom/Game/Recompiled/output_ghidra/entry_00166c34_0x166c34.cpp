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

// Function: entry_00166c34
// Address: 0x166c34 - 0x166c4c
void entry_00166c34_0x166c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166c34_0x166c34");
#endif

    ctx->pc = 0x166c34u;

    // 0x166c34: 0xac22fe00  sw          $v0, -0x200($at)
    ctx->pc = 0x166c34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966784), GPR_U32(ctx, 2));
    // 0x166c38: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x166c38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166c3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166c40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x166c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x166c44: 0x3e00008  jr          $ra
    ctx->pc = 0x166C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166C4Cu;
}
