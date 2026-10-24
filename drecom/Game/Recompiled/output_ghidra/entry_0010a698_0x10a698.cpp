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

// Function: entry_0010a698
// Address: 0x10a698 - 0x10a6b8
void entry_0010a698_0x10a698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a698_0x10a698");
#endif

    switch (ctx->pc) {
        case 0x10a6a0u: goto label_10a6a0;
        default: break;
    }

    ctx->pc = 0x10a698u;

label_10a698:
    // 0x10a698: 0xc041d2e  jal         func_1074B8
    ctx->pc = 0x10A698u;
    SET_GPR_U32(ctx, 31, 0x10A6A0u);
    ctx->pc = 0x1074B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1074B8u, 0x10A698u, 0x10A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A6A0u;
label_10a6a0:
    // 0x10a6a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x10a6a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6a4: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A6A4u;
    {
        const bool branch_taken_0x10a6a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6A4u;
        // 0x10a6a8: 0x8e233dac  lw          $v1, 0x3DAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6a4) {
            ctx->pc = 0x10A6B8u;
            return;
        }
    }
    ctx->pc = 0x10A6ACu;
    // 0x10a6ac: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x10a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x10a6b0: 0x1462fff9  bne         $v1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10A6B0u;
    {
        const bool branch_taken_0x10a6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10a6b0) {
            ctx->pc = 0x10A698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a698;
        }
    }
    ctx->pc = 0x10A6B8u;
}
