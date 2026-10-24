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

// Function: entry_001bdec0
// Address: 0x1bdec0 - 0x1bded4
void entry_001bdec0_0x1bdec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdec0_0x1bdec0");
#endif

    switch (ctx->pc) {
        case 0x1bdec8u: goto label_1bdec8;
        default: break;
    }

    ctx->pc = 0x1bdec0u;

    // 0x1bdec0: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BDEC0u;
    SET_GPR_U32(ctx, 31, 0x1BDEC8u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BDEC0u, 0x1BDEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDEC8u;
label_1bdec8:
    // 0x1bdec8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bdec8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bdecc: 0x1000020f  b           . + 4 + (0x20F << 2)
    ctx->pc = 0x1BDECCu;
    {
        const bool branch_taken_0x1bdecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdecc) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BDED4u;
}
