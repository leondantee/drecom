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

// Function: entry_001b9810
// Address: 0x1b9810 - 0x1b981c
void entry_001b9810_0x1b9810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9810_0x1b9810");
#endif

    switch (ctx->pc) {
        case 0x1b9818u: goto label_1b9818;
        default: break;
    }

    ctx->pc = 0x1b9810u;

    // 0x1b9810: 0xc0c5244  jal         func_314910
    ctx->pc = 0x1B9810u;
    SET_GPR_U32(ctx, 31, 0x1B9818u);
    ctx->pc = 0x314910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314910u, 0x1B9810u, 0x1B9818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9818u;
label_1b9818:
    // 0x1b9818: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b9818u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b981cu;
}
