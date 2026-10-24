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

// Function: entry_00115768
// Address: 0x115768 - 0x115778
void entry_00115768_0x115768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115768_0x115768");
#endif

    switch (ctx->pc) {
        case 0x115770u: goto label_115770;
        default: break;
    }

    ctx->pc = 0x115768u;

    // 0x115768: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x115768u;
    SET_GPR_U32(ctx, 31, 0x115770u);
    ctx->pc = 0x11576Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115768u;
    // 0x11576c: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x115768u, 0x115770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115770u;
label_115770:
    // 0x115770: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x115770u;
    {
        const bool branch_taken_0x115770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115770u;
        // 0x115774: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115770) {
            ctx->pc = 0x115780u;
            return;
        }
    }
    ctx->pc = 0x115778u;
}
