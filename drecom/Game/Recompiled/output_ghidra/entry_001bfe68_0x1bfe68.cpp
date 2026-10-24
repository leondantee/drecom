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

// Function: entry_001bfe68
// Address: 0x1bfe68 - 0x1bfe7c
void entry_001bfe68_0x1bfe68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfe68_0x1bfe68");
#endif

    switch (ctx->pc) {
        case 0x1bfe74u: goto label_1bfe74;
        default: break;
    }

    ctx->pc = 0x1bfe68u;

    // 0x1bfe68: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1bfe68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfe6c: 0xc06d2d8  jal         func_1B4B60
    ctx->pc = 0x1BFE6Cu;
    SET_GPR_U32(ctx, 31, 0x1BFE74u);
    ctx->pc = 0x1B4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4B60u, 0x1BFE6Cu, 0x1BFE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFE74u;
label_1bfe74:
    // 0x1bfe74: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1BFE74u;
    {
        const bool branch_taken_0x1bfe74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe74) {
            ctx->pc = 0x1BFEFCu;
            return;
        }
    }
    ctx->pc = 0x1BFE7Cu;
}
