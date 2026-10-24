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

// Function: entry_00139324
// Address: 0x139324 - 0x139338
void entry_00139324_0x139324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139324_0x139324");
#endif

    switch (ctx->pc) {
        case 0x139330u: goto label_139330;
        default: break;
    }

    ctx->pc = 0x139324u;

    // 0x139324: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x139324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x139328: 0xc04e06c  jal         func_1381B0
    ctx->pc = 0x139328u;
    SET_GPR_U32(ctx, 31, 0x139330u);
    ctx->pc = 0x1381B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1381B0u, 0x139328u, 0x139330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139330u;
label_139330:
    // 0x139330: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x139330u;
    {
        const bool branch_taken_0x139330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139330) {
            ctx->pc = 0x139344u;
            return;
        }
    }
    ctx->pc = 0x139338u;
}
