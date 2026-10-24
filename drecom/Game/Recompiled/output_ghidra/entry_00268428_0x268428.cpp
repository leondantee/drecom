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

// Function: entry_00268428
// Address: 0x268428 - 0x26843c
void entry_00268428_0x268428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00268428_0x268428");
#endif

    ctx->pc = 0x268428u;

    // 0x268428: 0xac23dbc8  sw          $v1, -0x2438($at)
    ctx->pc = 0x268428u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958024), GPR_U32(ctx, 3));
    // 0x26842c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x26842cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268430: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x268430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x268434: 0x3e00008  jr          $ra
    ctx->pc = 0x268434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26843Cu;
}
