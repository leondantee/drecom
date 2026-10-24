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

// Function: entry_00266c20
// Address: 0x266c20 - 0x266c38
void entry_00266c20_0x266c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266c20_0x266c20");
#endif

    switch (ctx->pc) {
        case 0x266c30u: goto label_266c30;
        default: break;
    }

    ctx->pc = 0x266c20u;

    // 0x266c20: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x266c20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x266c24: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x266c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x266c28: 0xc05be64  jal         func_16F990
    ctx->pc = 0x266C28u;
    SET_GPR_U32(ctx, 31, 0x266C30u);
    ctx->pc = 0x16F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F990u, 0x266C28u, 0x266C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C30u;
label_266c30:
    // 0x266c30: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x266C30u;
    {
        const bool branch_taken_0x266c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266c30) {
            ctx->pc = 0x266C78u;
            return;
        }
    }
    ctx->pc = 0x266C38u;
}
