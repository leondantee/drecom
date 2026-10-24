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

// Function: entry_001bf6a4
// Address: 0x1bf6a4 - 0x1bf6b8
void entry_001bf6a4_0x1bf6a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf6a4_0x1bf6a4");
#endif

    switch (ctx->pc) {
        case 0x1bf6b0u: goto label_1bf6b0;
        default: break;
    }

    ctx->pc = 0x1bf6a4u;

    // 0x1bf6a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf6a8: 0xc06d2d8  jal         func_1B4B60
    ctx->pc = 0x1BF6A8u;
    SET_GPR_U32(ctx, 31, 0x1BF6B0u);
    ctx->pc = 0x1B4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4B60u, 0x1BF6A8u, 0x1BF6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF6B0u;
label_1bf6b0:
    // 0x1bf6b0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1BF6B0u;
    {
        const bool branch_taken_0x1bf6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf6b0) {
            ctx->pc = 0x1BF738u;
            return;
        }
    }
    ctx->pc = 0x1BF6B8u;
}
