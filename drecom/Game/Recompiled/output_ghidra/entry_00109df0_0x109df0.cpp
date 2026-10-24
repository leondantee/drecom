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

// Function: entry_00109df0
// Address: 0x109df0 - 0x109e08
void entry_00109df0_0x109df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109df0_0x109df0");
#endif

    switch (ctx->pc) {
        case 0x109e00u: goto label_109e00;
        default: break;
    }

    ctx->pc = 0x109df0u;

    // 0x109df0: 0x10a0003f  beqz        $a1, . + 4 + (0x3F << 2)
    ctx->pc = 0x109DF0u;
    {
        const bool branch_taken_0x109df0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x109DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DF0u;
        // 0x109df4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109df0) {
            ctx->pc = 0x109EF0u;
            return;
        }
    }
    ctx->pc = 0x109DF8u;
    // 0x109df8: 0xc042430  jal         func_1090C0
    ctx->pc = 0x109DF8u;
    SET_GPR_U32(ctx, 31, 0x109E00u);
    ctx->pc = 0x109DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109DF8u;
    // 0x109dfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1090C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1090C0u, 0x109DF8u, 0x109E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E00u;
label_109e00:
    // 0x109e00: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x109E00u;
    {
        const bool branch_taken_0x109e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E00u;
        // 0x109e04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e00) {
            ctx->pc = 0x109EF0u;
            return;
        }
    }
    ctx->pc = 0x109E08u;
}
