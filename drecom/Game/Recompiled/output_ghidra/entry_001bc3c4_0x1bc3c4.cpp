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

// Function: entry_001bc3c4
// Address: 0x1bc3c4 - 0x1bc3d4
void entry_001bc3c4_0x1bc3c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc3c4_0x1bc3c4");
#endif

    switch (ctx->pc) {
        case 0x1bc3ccu: goto label_1bc3cc;
        default: break;
    }

    ctx->pc = 0x1bc3c4u;

    // 0x1bc3c4: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BC3C4u;
    SET_GPR_U32(ctx, 31, 0x1BC3CCu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BC3C4u, 0x1BC3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC3CCu;
label_1bc3cc:
    // 0x1bc3cc: 0x10000357  b           . + 4 + (0x357 << 2)
    ctx->pc = 0x1BC3CCu;
    {
        const bool branch_taken_0x1bc3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc3cc) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC3D4u;
}
