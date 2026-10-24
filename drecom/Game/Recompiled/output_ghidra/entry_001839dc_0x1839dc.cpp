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

// Function: entry_001839dc
// Address: 0x1839dc - 0x1839f8
void entry_001839dc_0x1839dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001839dc_0x1839dc");
#endif

    switch (ctx->pc) {
        case 0x1839e4u: goto label_1839e4;
        default: break;
    }

    ctx->pc = 0x1839dcu;

    // 0x1839dc: 0xc05f910  jal         func_17E440
    ctx->pc = 0x1839DCu;
    SET_GPR_U32(ctx, 31, 0x1839E4u);
    ctx->pc = 0x17E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E440u, 0x1839DCu, 0x1839E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1839E4u;
label_1839e4:
    // 0x1839e4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1839e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1839e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1839e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1839ec: 0x27bd0200  addiu       $sp, $sp, 0x200
    ctx->pc = 0x1839ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1839f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1839F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1839F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1839F8u;
}
