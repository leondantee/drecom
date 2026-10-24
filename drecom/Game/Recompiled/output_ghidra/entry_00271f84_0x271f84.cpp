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

// Function: entry_00271f84
// Address: 0x271f84 - 0x271f9c
void entry_00271f84_0x271f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271f84_0x271f84");
#endif

    ctx->pc = 0x271f84u;

    // 0x271f84: 0xa420d41e  sh          $zero, -0x2BE2($at)
    ctx->pc = 0x271f84u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294956062), (uint16_t)GPR_U32(ctx, 0));
    // 0x271f88: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x271f88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271f8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271f90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x271f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x271f94: 0x3e00008  jr          $ra
    ctx->pc = 0x271F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271F9Cu;
}
