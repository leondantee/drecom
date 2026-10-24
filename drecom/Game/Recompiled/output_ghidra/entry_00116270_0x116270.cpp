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

// Function: entry_00116270
// Address: 0x116270 - 0x116284
void entry_00116270_0x116270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116270_0x116270");
#endif

    switch (ctx->pc) {
        case 0x11627cu: goto label_11627c;
        default: break;
    }

    ctx->pc = 0x116270u;

    // 0x116270: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x116270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116274: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x116274u;
    SET_GPR_U32(ctx, 31, 0x11627Cu);
    ctx->pc = 0x116278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116274u;
    // 0x116278: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x116274u, 0x11627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11627Cu;
label_11627c:
    // 0x11627c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x11627Cu;
    {
        const bool branch_taken_0x11627c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11627Cu;
        // 0x116280: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11627c) {
            ctx->pc = 0x1162E8u;
            return;
        }
    }
    ctx->pc = 0x116284u;
}
