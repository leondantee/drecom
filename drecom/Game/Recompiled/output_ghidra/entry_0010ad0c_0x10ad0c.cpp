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

// Function: entry_0010ad0c
// Address: 0x10ad0c - 0x10ad1c
void entry_0010ad0c_0x10ad0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ad0c_0x10ad0c");
#endif

    switch (ctx->pc) {
        case 0x10ad14u: goto label_10ad14;
        default: break;
    }

    ctx->pc = 0x10ad0cu;

    // 0x10ad0c: 0xc042914  jal         func_10A450
    ctx->pc = 0x10AD0Cu;
    SET_GPR_U32(ctx, 31, 0x10AD14u);
    ctx->pc = 0x10AD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD0Cu;
    // 0x10ad10: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A450u, 0x10AD0Cu, 0x10AD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD14u;
label_10ad14:
    // 0x10ad14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10AD14u;
    {
        const bool branch_taken_0x10ad14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD14u;
        // 0x10ad18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad14) {
            ctx->pc = 0x10AD28u;
            return;
        }
    }
    ctx->pc = 0x10AD1Cu;
}
