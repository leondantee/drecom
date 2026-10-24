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

// Function: entry_0015027c
// Address: 0x15027c - 0x1502a0
void entry_0015027c_0x15027c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015027c_0x15027c");
#endif

    switch (ctx->pc) {
        case 0x15028cu: goto label_15028c;
        case 0x150298u: goto label_150298;
        default: break;
    }

    ctx->pc = 0x15027cu;

    // 0x15027c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15027cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x150280: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x150280u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x150284: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x150284u;
    SET_GPR_U32(ctx, 31, 0x15028Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x150284u, 0x15028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15028Cu;
label_15028c:
    // 0x15028c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15028cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x150290: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x150290u;
    SET_GPR_U32(ctx, 31, 0x150298u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x150290u, 0x150298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150298u;
label_150298:
    // 0x150298: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x150298u;
    {
        const bool branch_taken_0x150298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150298) {
            ctx->pc = 0x1504C8u;
            return;
        }
    }
    ctx->pc = 0x1502A0u;
}
