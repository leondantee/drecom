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

// Function: entry_001b0824
// Address: 0x1b0824 - 0x1b083c
void entry_001b0824_0x1b0824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0824_0x1b0824");
#endif

    switch (ctx->pc) {
        case 0x1b0834u: goto label_1b0834;
        default: break;
    }

    ctx->pc = 0x1b0824u;

    // 0x1b0824: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b0824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0828: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1b0828u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1b082c: 0xc06c310  jal         func_1B0C40
    ctx->pc = 0x1B082Cu;
    SET_GPR_U32(ctx, 31, 0x1B0834u);
    ctx->pc = 0x1B0C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0C40u, 0x1B082Cu, 0x1B0834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0834u;
label_1b0834:
    // 0x1b0834: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B0834u;
    {
        const bool branch_taken_0x1b0834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0834) {
            ctx->pc = 0x1B0874u;
            return;
        }
    }
    ctx->pc = 0x1B083Cu;
}
