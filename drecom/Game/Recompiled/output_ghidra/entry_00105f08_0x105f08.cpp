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

// Function: entry_00105f08
// Address: 0x105f08 - 0x105f1c
void entry_00105f08_0x105f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105f08_0x105f08");
#endif

    switch (ctx->pc) {
        case 0x105f10u: goto label_105f10;
        default: break;
    }

    ctx->pc = 0x105f08u;

    // 0x105f08: 0xc042b2a  jal         func_10ACA8
    ctx->pc = 0x105F08u;
    SET_GPR_U32(ctx, 31, 0x105F10u);
    ctx->pc = 0x105F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105F08u;
    // 0x105f0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACA8u, 0x105F08u, 0x105F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105F10u;
label_105f10:
    // 0x105f10: 0xaed53d08  sw          $s5, 0x3D08($s6)
    ctx->pc = 0x105f10u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 15624), GPR_U32(ctx, 21));
    // 0x105f14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x105F14u;
    {
        const bool branch_taken_0x105f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F14u;
        // 0x105f18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f14) {
            ctx->pc = 0x105F28u;
            return;
        }
    }
    ctx->pc = 0x105F1Cu;
}
