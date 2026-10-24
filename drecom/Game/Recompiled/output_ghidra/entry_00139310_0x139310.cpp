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

// Function: entry_00139310
// Address: 0x139310 - 0x139324
void entry_00139310_0x139310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139310_0x139310");
#endif

    switch (ctx->pc) {
        case 0x13931cu: goto label_13931c;
        default: break;
    }

    ctx->pc = 0x139310u;

    // 0x139310: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x139310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x139314: 0xc04de08  jal         func_137820
    ctx->pc = 0x139314u;
    SET_GPR_U32(ctx, 31, 0x13931Cu);
    ctx->pc = 0x137820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137820u, 0x139314u, 0x13931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13931Cu;
label_13931c:
    // 0x13931c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13931Cu;
    {
        const bool branch_taken_0x13931c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13931c) {
            ctx->pc = 0x139344u;
            return;
        }
    }
    ctx->pc = 0x139324u;
}
