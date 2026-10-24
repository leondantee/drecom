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

// Function: entry_003770cc
// Address: 0x3770cc - 0x3770f0
void entry_003770cc_0x3770cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003770cc_0x3770cc");
#endif

    switch (ctx->pc) {
        case 0x3770d4u: goto label_3770d4;
        default: break;
    }

    ctx->pc = 0x3770ccu;

    // 0x3770cc: 0xc096254  jal         func_258950
    ctx->pc = 0x3770CCu;
    SET_GPR_U32(ctx, 31, 0x3770D4u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x3770CCu, 0x3770D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3770D4u;
label_3770d4:
    // 0x3770d4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x3770d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3770d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3770d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3770dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3770dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3770e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3770e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3770e4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3770e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3770e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3770E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3770E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3770F0u;
}
