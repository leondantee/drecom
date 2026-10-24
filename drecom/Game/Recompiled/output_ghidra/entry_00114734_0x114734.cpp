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

// Function: entry_00114734
// Address: 0x114734 - 0x114744
void entry_00114734_0x114734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114734_0x114734");
#endif

    switch (ctx->pc) {
        case 0x11473cu: goto label_11473c;
        default: break;
    }

    ctx->pc = 0x114734u;

    // 0x114734: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x114734u;
    SET_GPR_U32(ctx, 31, 0x11473Cu);
    ctx->pc = 0x114738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114734u;
    // 0x114738: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x114734u, 0x11473Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11473Cu;
label_11473c:
    // 0x11473c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11473Cu;
    {
        const bool branch_taken_0x11473c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11473Cu;
        // 0x114740: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11473c) {
            ctx->pc = 0x114750u;
            return;
        }
    }
    ctx->pc = 0x114744u;
}
