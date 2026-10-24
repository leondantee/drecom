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

// Function: entry_00115668
// Address: 0x115668 - 0x115678
void entry_00115668_0x115668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115668_0x115668");
#endif

    switch (ctx->pc) {
        case 0x115670u: goto label_115670;
        default: break;
    }

    ctx->pc = 0x115668u;

    // 0x115668: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x115668u;
    SET_GPR_U32(ctx, 31, 0x115670u);
    ctx->pc = 0x11566Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115668u;
    // 0x11566c: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x115668u, 0x115670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115670u;
label_115670:
    // 0x115670: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x115670u;
    {
        const bool branch_taken_0x115670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115670u;
        // 0x115674: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115670) {
            ctx->pc = 0x115680u;
            return;
        }
    }
    ctx->pc = 0x115678u;
}
