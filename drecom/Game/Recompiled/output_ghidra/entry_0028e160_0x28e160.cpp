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

// Function: entry_0028e160
// Address: 0x28e160 - 0x28e180
void entry_0028e160_0x28e160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e160_0x28e160");
#endif

    switch (ctx->pc) {
        case 0x28e178u: goto label_28e178;
        default: break;
    }

    ctx->pc = 0x28e160u;

    // 0x28e160: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x28e160u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e164: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x28e164u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e168: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x28e168u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x28e16c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28e16cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e170: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x28E170u;
    SET_GPR_U32(ctx, 31, 0x28E178u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x28E170u, 0x28E178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E178u;
label_28e178:
    // 0x28e178: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x28E178u;
    {
        const bool branch_taken_0x28e178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e178) {
            ctx->pc = 0x28E1E8u;
            return;
        }
    }
    ctx->pc = 0x28E180u;
}
