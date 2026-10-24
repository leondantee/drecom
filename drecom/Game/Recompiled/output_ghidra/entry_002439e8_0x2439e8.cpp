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

// Function: entry_002439e8
// Address: 0x2439e8 - 0x243a0c
void entry_002439e8_0x2439e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002439e8_0x2439e8");
#endif

    switch (ctx->pc) {
        case 0x2439f0u: goto label_2439f0;
        default: break;
    }

    ctx->pc = 0x2439e8u;

    // 0x2439e8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x2439E8u;
    SET_GPR_U32(ctx, 31, 0x2439F0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x2439E8u, 0x2439F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2439F0u;
label_2439f0:
    // 0x2439f0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2439f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2439f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2439f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2439f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2439f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2439fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2439fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243a00: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x243a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x243a04: 0x3e00008  jr          $ra
    ctx->pc = 0x243A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243A0Cu;
}
