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

// Function: entry_0033613c
// Address: 0x33613c - 0x336158
void entry_0033613c_0x33613c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033613c_0x33613c");
#endif

    switch (ctx->pc) {
        case 0x336150u: goto label_336150;
        default: break;
    }

    ctx->pc = 0x33613cu;

    // 0x33613c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x33613cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336140: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x336140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x336144: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x336144u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336148: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x336148u;
    SET_GPR_U32(ctx, 31, 0x336150u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x336148u, 0x336150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336150u;
label_336150:
    // 0x336150: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x336150u;
    {
        const bool branch_taken_0x336150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336150) {
            ctx->pc = 0x3366D8u;
            return;
        }
    }
    ctx->pc = 0x336158u;
}
