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

// Function: entry_0012a7cc
// Address: 0x12a7cc - 0x12a7e0
void entry_0012a7cc_0x12a7cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a7cc_0x12a7cc");
#endif

    switch (ctx->pc) {
        case 0x12a7d8u: goto label_12a7d8;
        default: break;
    }

    ctx->pc = 0x12a7ccu;

    // 0x12a7cc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a7d0: 0xc049b80  jal         func_126E00
    ctx->pc = 0x12A7D0u;
    SET_GPR_U32(ctx, 31, 0x12A7D8u);
    ctx->pc = 0x126E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126E00u, 0x12A7D0u, 0x12A7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A7D8u;
label_12a7d8:
    // 0x12a7d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12A7D8u;
    {
        const bool branch_taken_0x12a7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a7d8) {
            ctx->pc = 0x12A7ECu;
            return;
        }
    }
    ctx->pc = 0x12A7E0u;
}
