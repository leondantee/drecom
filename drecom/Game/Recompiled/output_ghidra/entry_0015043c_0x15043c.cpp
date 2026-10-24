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

// Function: entry_0015043c
// Address: 0x15043c - 0x150460
void entry_0015043c_0x15043c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015043c_0x15043c");
#endif

    switch (ctx->pc) {
        case 0x15044cu: goto label_15044c;
        case 0x150458u: goto label_150458;
        default: break;
    }

    ctx->pc = 0x15043cu;

    // 0x15043c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15043cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x150440: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x150440u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x150444: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x150444u;
    SET_GPR_U32(ctx, 31, 0x15044Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x150444u, 0x15044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15044Cu;
label_15044c:
    // 0x15044c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15044cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x150450: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x150450u;
    SET_GPR_U32(ctx, 31, 0x150458u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x150450u, 0x150458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150458u;
label_150458:
    // 0x150458: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x150458u;
    {
        const bool branch_taken_0x150458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150458) {
            ctx->pc = 0x1504C8u;
            return;
        }
    }
    ctx->pc = 0x150460u;
}
