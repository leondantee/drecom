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

// Function: entry_0036d3c4
// Address: 0x36d3c4 - 0x36d3e4
void entry_0036d3c4_0x36d3c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d3c4_0x36d3c4");
#endif

    switch (ctx->pc) {
        case 0x36d3ccu: goto label_36d3cc;
        default: break;
    }

    ctx->pc = 0x36d3c4u;

    // 0x36d3c4: 0xc097c6c  jal         func_25F1B0
    ctx->pc = 0x36D3C4u;
    SET_GPR_U32(ctx, 31, 0x36D3CCu);
    ctx->pc = 0x25F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F1B0u, 0x36D3C4u, 0x36D3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D3CCu;
label_36d3cc:
    // 0x36d3cc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x36d3ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d3d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36d3d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d3d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36d3d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d3d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x36d3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36d3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x36D3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D3E4u;
}
