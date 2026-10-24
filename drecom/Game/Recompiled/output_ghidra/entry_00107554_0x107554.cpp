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

// Function: entry_00107554
// Address: 0x107554 - 0x107564
void entry_00107554_0x107554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107554_0x107554");
#endif

    switch (ctx->pc) {
        case 0x10755cu: goto label_10755c;
        default: break;
    }

    ctx->pc = 0x107554u;

    // 0x107554: 0xc042b8a  jal         func_10AE28
    ctx->pc = 0x107554u;
    SET_GPR_U32(ctx, 31, 0x10755Cu);
    ctx->pc = 0x10AE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE28u, 0x107554u, 0x10755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10755Cu;
label_10755c:
    // 0x10755c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x10755Cu;
    {
        const bool branch_taken_0x10755c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10755c) {
            ctx->pc = 0x107508u;
            return;
        }
    }
    ctx->pc = 0x107564u;
}
