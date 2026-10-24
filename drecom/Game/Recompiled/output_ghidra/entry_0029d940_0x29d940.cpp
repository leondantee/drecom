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

// Function: entry_0029d940
// Address: 0x29d940 - 0x29d970
void entry_0029d940_0x29d940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d940_0x29d940");
#endif

    switch (ctx->pc) {
        case 0x29d94cu: goto label_29d94c;
        case 0x29d958u: goto label_29d958;
        default: break;
    }

    ctx->pc = 0x29d940u;

    // 0x29d940: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29d940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d944: 0xc0aa184  jal         func_2A8610
    ctx->pc = 0x29D944u;
    SET_GPR_U32(ctx, 31, 0x29D94Cu);
    ctx->pc = 0x2A8610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8610u, 0x29D944u, 0x29D94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D94Cu;
label_29d94c:
    // 0x29d94c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29d94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d950: 0xc0aa22c  jal         func_2A88B0
    ctx->pc = 0x29D950u;
    SET_GPR_U32(ctx, 31, 0x29D958u);
    ctx->pc = 0x2A88B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A88B0u, 0x29D950u, 0x29D958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D958u;
label_29d958:
    // 0x29d958: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x29d958u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d95c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d95cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d960: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d964: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x29d964u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29d968: 0x3e00008  jr          $ra
    ctx->pc = 0x29D968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D970u;
}
