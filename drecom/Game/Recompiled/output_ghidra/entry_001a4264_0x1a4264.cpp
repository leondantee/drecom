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

// Function: entry_001a4264
// Address: 0x1a4264 - 0x1a4278
void entry_001a4264_0x1a4264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4264_0x1a4264");
#endif

    switch (ctx->pc) {
        case 0x1a4270u: goto label_1a4270;
        default: break;
    }

    ctx->pc = 0x1a4264u;

    // 0x1a4264: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1a4264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a4268: 0xc0690a8  jal         func_1A42A0
    ctx->pc = 0x1A4268u;
    SET_GPR_U32(ctx, 31, 0x1A4270u);
    ctx->pc = 0x1A42A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A42A0u, 0x1A4268u, 0x1A4270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4270u;
label_1a4270:
    // 0x1a4270: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4270u;
    {
        const bool branch_taken_0x1a4270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4270) {
            ctx->pc = 0x1A4284u;
            return;
        }
    }
    ctx->pc = 0x1A4278u;
}
