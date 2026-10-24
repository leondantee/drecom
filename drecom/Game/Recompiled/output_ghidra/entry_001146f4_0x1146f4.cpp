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

// Function: entry_001146f4
// Address: 0x1146f4 - 0x114704
void entry_001146f4_0x1146f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001146f4_0x1146f4");
#endif

    switch (ctx->pc) {
        case 0x1146fcu: goto label_1146fc;
        default: break;
    }

    ctx->pc = 0x1146f4u;

    // 0x1146f4: 0xc044a0c  jal         func_112830
    ctx->pc = 0x1146F4u;
    SET_GPR_U32(ctx, 31, 0x1146FCu);
    ctx->pc = 0x1146F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1146F4u;
    // 0x1146f8: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112830u, 0x1146F4u, 0x1146FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1146FCu;
label_1146fc:
    // 0x1146fc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1146FCu;
    {
        const bool branch_taken_0x1146fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146FCu;
        // 0x114700: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146fc) {
            ctx->pc = 0x114750u;
            return;
        }
    }
    ctx->pc = 0x114704u;
}
