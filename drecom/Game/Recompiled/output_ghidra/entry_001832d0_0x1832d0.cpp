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

// Function: entry_001832d0
// Address: 0x1832d0 - 0x1832e8
void entry_001832d0_0x1832d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001832d0_0x1832d0");
#endif

    switch (ctx->pc) {
        case 0x1832d8u: goto label_1832d8;
        default: break;
    }

    ctx->pc = 0x1832d0u;

    // 0x1832d0: 0xc05f910  jal         func_17E440
    ctx->pc = 0x1832D0u;
    SET_GPR_U32(ctx, 31, 0x1832D8u);
    ctx->pc = 0x17E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E440u, 0x1832D0u, 0x1832D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1832D8u;
label_1832d8:
    // 0x1832d8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1832d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1832dc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1832dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1832e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1832E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1832E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1832E8u;
}
