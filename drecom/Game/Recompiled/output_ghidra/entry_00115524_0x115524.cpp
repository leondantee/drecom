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

// Function: entry_00115524
// Address: 0x115524 - 0x115544
void entry_00115524_0x115524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115524_0x115524");
#endif

    switch (ctx->pc) {
        case 0x11553cu: goto label_11553c;
        default: break;
    }

    ctx->pc = 0x115524u;

    // 0x115524: 0x8e83d888  lw          $v1, -0x2778($s4)
    ctx->pc = 0x115524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294957192)));
    // 0x115528: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x115528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11552c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11552Cu;
    {
        const bool branch_taken_0x11552c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11552c) {
            ctx->pc = 0x115544u;
            return;
        }
    }
    ctx->pc = 0x115534u;
    // 0x115534: 0xc04527a  jal         func_1149E8
    ctx->pc = 0x115534u;
    SET_GPR_U32(ctx, 31, 0x11553Cu);
    ctx->pc = 0x115538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115534u;
    // 0x115538: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1149E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1149E8u, 0x115534u, 0x11553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11553Cu;
label_11553c:
    // 0x11553c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11553Cu;
    {
        const bool branch_taken_0x11553c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11553Cu;
        // 0x115540: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11553c) {
            ctx->pc = 0x115558u;
            return;
        }
    }
    ctx->pc = 0x115544u;
}
