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

// Function: entry_00106544
// Address: 0x106544 - 0x106554
void entry_00106544_0x106544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106544_0x106544");
#endif

    switch (ctx->pc) {
        case 0x10654cu: goto label_10654c;
        default: break;
    }

    ctx->pc = 0x106544u;

    // 0x106544: 0xc041c9e  jal         func_107278
    ctx->pc = 0x106544u;
    SET_GPR_U32(ctx, 31, 0x10654Cu);
    ctx->pc = 0x106548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106544u;
    // 0x106548: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x106544u, 0x10654Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10654Cu;
label_10654c:
    // 0x10654c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x10654Cu;
    {
        const bool branch_taken_0x10654c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10654Cu;
        // 0x106550: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10654c) {
            ctx->pc = 0x106584u;
            return;
        }
    }
    ctx->pc = 0x106554u;
}
