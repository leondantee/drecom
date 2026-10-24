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

// Function: entry_001ba174
// Address: 0x1ba174 - 0x1ba184
void entry_001ba174_0x1ba174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba174_0x1ba174");
#endif

    switch (ctx->pc) {
        case 0x1ba17cu: goto label_1ba17c;
        default: break;
    }

    ctx->pc = 0x1ba174u;

    // 0x1ba174: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BA174u;
    SET_GPR_U32(ctx, 31, 0x1BA17Cu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BA174u, 0x1BA17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA17Cu;
label_1ba17c:
    // 0x1ba17c: 0x100002b5  b           . + 4 + (0x2B5 << 2)
    ctx->pc = 0x1BA17Cu;
    {
        const bool branch_taken_0x1ba17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba17c) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA184u;
}
