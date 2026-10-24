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

// Function: entry_0010a8d8
// Address: 0x10a8d8 - 0x10a8e8
void entry_0010a8d8_0x10a8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a8d8_0x10a8d8");
#endif

    switch (ctx->pc) {
        case 0x10a8e0u: goto label_10a8e0;
        default: break;
    }

    ctx->pc = 0x10a8d8u;

    // 0x10a8d8: 0xc042a40  jal         func_10A900
    ctx->pc = 0x10A8D8u;
    SET_GPR_U32(ctx, 31, 0x10A8E0u);
    ctx->pc = 0x10A900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A900u, 0x10A8D8u, 0x10A8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A8E0u;
label_10a8e0:
    // 0x10a8e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10A8E0u;
    {
        const bool branch_taken_0x10a8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8E0u;
        // 0x10a8e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8e0) {
            ctx->pc = 0x10A8F4u;
            return;
        }
    }
    ctx->pc = 0x10A8E8u;
}
