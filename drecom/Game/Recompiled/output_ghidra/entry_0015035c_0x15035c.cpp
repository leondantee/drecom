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

// Function: entry_0015035c
// Address: 0x15035c - 0x150380
void entry_0015035c_0x15035c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015035c_0x15035c");
#endif

    switch (ctx->pc) {
        case 0x15036cu: goto label_15036c;
        case 0x150378u: goto label_150378;
        default: break;
    }

    ctx->pc = 0x15035cu;

    // 0x15035c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15035cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x150360: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x150360u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x150364: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x150364u;
    SET_GPR_U32(ctx, 31, 0x15036Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x150364u, 0x15036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15036Cu;
label_15036c:
    // 0x15036c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15036cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x150370: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x150370u;
    SET_GPR_U32(ctx, 31, 0x150378u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x150370u, 0x150378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150378u;
label_150378:
    // 0x150378: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x150378u;
    {
        const bool branch_taken_0x150378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150378) {
            ctx->pc = 0x1504C8u;
            return;
        }
    }
    ctx->pc = 0x150380u;
}
