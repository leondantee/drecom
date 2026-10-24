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

// Function: entry_0015020c
// Address: 0x15020c - 0x150230
void entry_0015020c_0x15020c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015020c_0x15020c");
#endif

    switch (ctx->pc) {
        case 0x15021cu: goto label_15021c;
        case 0x150228u: goto label_150228;
        default: break;
    }

    ctx->pc = 0x15020cu;

    // 0x15020c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15020cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x150210: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x150210u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x150214: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x150214u;
    SET_GPR_U32(ctx, 31, 0x15021Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x150214u, 0x15021Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15021Cu;
label_15021c:
    // 0x15021c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15021cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x150220: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x150220u;
    SET_GPR_U32(ctx, 31, 0x150228u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x150220u, 0x150228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150228u;
label_150228:
    // 0x150228: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x150228u;
    {
        const bool branch_taken_0x150228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150228) {
            ctx->pc = 0x1504C8u;
            return;
        }
    }
    ctx->pc = 0x150230u;
}
