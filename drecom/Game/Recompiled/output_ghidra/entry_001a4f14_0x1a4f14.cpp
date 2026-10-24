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

// Function: entry_001a4f14
// Address: 0x1a4f14 - 0x1a4f28
void entry_001a4f14_0x1a4f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4f14_0x1a4f14");
#endif

    switch (ctx->pc) {
        case 0x1a4f20u: goto label_1a4f20;
        default: break;
    }

    ctx->pc = 0x1a4f14u;

    // 0x1a4f14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a4f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a4f18: 0xc0693d4  jal         func_1A4F50
    ctx->pc = 0x1A4F18u;
    SET_GPR_U32(ctx, 31, 0x1A4F20u);
    ctx->pc = 0x1A4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F50u, 0x1A4F18u, 0x1A4F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F20u;
label_1a4f20:
    // 0x1a4f20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4F20u;
    {
        const bool branch_taken_0x1a4f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4f20) {
            ctx->pc = 0x1A4F34u;
            return;
        }
    }
    ctx->pc = 0x1A4F28u;
}
