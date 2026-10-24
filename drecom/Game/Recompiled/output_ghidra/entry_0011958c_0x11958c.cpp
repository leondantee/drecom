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

// Function: entry_0011958c
// Address: 0x11958c - 0x1195a8
void entry_0011958c_0x11958c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011958c_0x11958c");
#endif

    switch (ctx->pc) {
        case 0x119594u: goto label_119594;
        default: break;
    }

    ctx->pc = 0x11958cu;

    // 0x11958c: 0xc046348  jal         func_118D20
    ctx->pc = 0x11958Cu;
    SET_GPR_U32(ctx, 31, 0x119594u);
    ctx->pc = 0x119590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11958Cu;
    // 0x119590: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D20u, 0x11958Cu, 0x119594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119594u;
label_119594:
    // 0x119594: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x119594u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119598: 0x1a80000a  blez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x119598u;
    {
        const bool branch_taken_0x119598 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x11959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119598u;
        // 0x11959c: 0x26a60014  addiu       $a2, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119598) {
            ctx->pc = 0x1195C4u;
            return;
        }
    }
    ctx->pc = 0x1195A0u;
    // 0x1195a0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1195a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1195a4: 0x0  nop
    ctx->pc = 0x1195a4u;
    // NOP
    ctx->pc = 0x1195a8u;
}
