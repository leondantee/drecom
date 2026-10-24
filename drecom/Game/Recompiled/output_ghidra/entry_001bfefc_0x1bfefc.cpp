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

// Function: entry_001bfefc
// Address: 0x1bfefc - 0x1bff10
void entry_001bfefc_0x1bfefc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfefc_0x1bfefc");
#endif

    ctx->pc = 0x1bfefcu;

    // 0x1bfefc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1bfefcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bff00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bff00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bff04: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1bff04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bff08: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFF10u;
}
