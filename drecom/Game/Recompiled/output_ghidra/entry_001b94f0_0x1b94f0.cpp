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

// Function: entry_001b94f0
// Address: 0x1b94f0 - 0x1b9504
void entry_001b94f0_0x1b94f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b94f0_0x1b94f0");
#endif

    switch (ctx->pc) {
        case 0x1b94f8u: goto label_1b94f8;
        default: break;
    }

    ctx->pc = 0x1b94f0u;

    // 0x1b94f0: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1B94F0u;
    SET_GPR_U32(ctx, 31, 0x1B94F8u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B94F0u, 0x1B94F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B94F8u;
label_1b94f8:
    // 0x1b94f8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b94f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b94fc: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x1B94FCu;
    {
        const bool branch_taken_0x1b94fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b94fc) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B9504u;
}
