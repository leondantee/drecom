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

// Function: entry_00119d18
// Address: 0x119d18 - 0x119d2c
void entry_00119d18_0x119d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119d18_0x119d18");
#endif

    switch (ctx->pc) {
        case 0x119d20u: goto label_119d20;
        default: break;
    }

    ctx->pc = 0x119d18u;

    // 0x119d18: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x119D18u;
    SET_GPR_U32(ctx, 31, 0x119D20u);
    ctx->pc = 0x119D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119D18u;
    // 0x119d1c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x119D18u, 0x119D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119D20u;
label_119d20:
    // 0x119d20: 0x1e00fffb  bgtz        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x119D20u;
    {
        const bool branch_taken_0x119d20 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x119D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D20u;
        // 0x119d24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d20) {
            ctx->pc = 0x119D10u;
            return;
        }
    }
    ctx->pc = 0x119D28u;
    // 0x119d28: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x119d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119d2cu;
}
