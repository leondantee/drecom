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

// Function: entry_001c0de8
// Address: 0x1c0de8 - 0x1c0dfc
void entry_001c0de8_0x1c0de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0de8_0x1c0de8");
#endif

    switch (ctx->pc) {
        case 0x1c0df4u: goto label_1c0df4;
        default: break;
    }

    ctx->pc = 0x1c0de8u;

    // 0x1c0de8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c0de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0dec: 0xc06d2d8  jal         func_1B4B60
    ctx->pc = 0x1C0DECu;
    SET_GPR_U32(ctx, 31, 0x1C0DF4u);
    ctx->pc = 0x1B4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4B60u, 0x1C0DECu, 0x1C0DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0DF4u;
label_1c0df4:
    // 0x1c0df4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1C0DF4u;
    {
        const bool branch_taken_0x1c0df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0df4) {
            ctx->pc = 0x1C0E7Cu;
            return;
        }
    }
    ctx->pc = 0x1C0DFCu;
}
