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

// Function: entry_00336ba4
// Address: 0x336ba4 - 0x336bb4
void entry_00336ba4_0x336ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336ba4_0x336ba4");
#endif

    switch (ctx->pc) {
        case 0x336bacu: goto label_336bac;
        default: break;
    }

    ctx->pc = 0x336ba4u;

    // 0x336ba4: 0xc0a15a8  jal         func_2856A0
    ctx->pc = 0x336BA4u;
    SET_GPR_U32(ctx, 31, 0x336BACu);
    ctx->pc = 0x2856A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2856A0u, 0x336BA4u, 0x336BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336BACu;
label_336bac:
    // 0x336bac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x336BACu;
    {
        const bool branch_taken_0x336bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336bac) {
            ctx->pc = 0x336BBCu;
            return;
        }
    }
    ctx->pc = 0x336BB4u;
}
