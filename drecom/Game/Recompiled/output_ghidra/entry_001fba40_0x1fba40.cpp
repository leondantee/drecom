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

// Function: entry_001fba40
// Address: 0x1fba40 - 0x1fba54
void entry_001fba40_0x1fba40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fba40_0x1fba40");
#endif

    switch (ctx->pc) {
        case 0x1fba4cu: goto label_1fba4c;
        default: break;
    }

    ctx->pc = 0x1fba40u;

    // 0x1fba40: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fba40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fba44: 0xc07f4e0  jal         func_1FD380
    ctx->pc = 0x1FBA44u;
    SET_GPR_U32(ctx, 31, 0x1FBA4Cu);
    ctx->pc = 0x1FD380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD380u, 0x1FBA44u, 0x1FBA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA4Cu;
label_1fba4c:
    // 0x1fba4c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1FBA4Cu;
    {
        const bool branch_taken_0x1fba4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fba4c) {
            ctx->pc = 0x1FBB18u;
            return;
        }
    }
    ctx->pc = 0x1FBA54u;
}
