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

// Function: entry_003370c0
// Address: 0x3370c0 - 0x3370dc
void entry_003370c0_0x3370c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003370c0_0x3370c0");
#endif

    switch (ctx->pc) {
        case 0x3370d4u: goto label_3370d4;
        default: break;
    }

    ctx->pc = 0x3370c0u;

    // 0x3370c0: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x3370c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x3370c4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x3370c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3370c8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3370c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3370cc: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x3370CCu;
    SET_GPR_U32(ctx, 31, 0x3370D4u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x3370CCu, 0x3370D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3370D4u;
label_3370d4:
    // 0x3370d4: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x3370D4u;
    {
        const bool branch_taken_0x3370d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3370d4) {
            ctx->pc = 0x3375ECu;
            return;
        }
    }
    ctx->pc = 0x3370DCu;
}
