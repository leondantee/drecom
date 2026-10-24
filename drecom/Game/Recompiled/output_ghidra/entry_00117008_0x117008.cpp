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

// Function: entry_00117008
// Address: 0x117008 - 0x11701c
void entry_00117008_0x117008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117008_0x117008");
#endif

    switch (ctx->pc) {
        case 0x117018u: goto label_117018;
        default: break;
    }

    ctx->pc = 0x117008u;

    // 0x117008: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x117008u;
    {
        const bool branch_taken_0x117008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117008) {
            ctx->pc = 0x11700Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117008u;
            // 0x11700c: 0x8623000c  lh          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11701Cu;
            return;
        }
    }
    ctx->pc = 0x117010u;
    // 0x117010: 0xc045ca0  jal         func_117280
    ctx->pc = 0x117010u;
    SET_GPR_U32(ctx, 31, 0x117018u);
    ctx->pc = 0x117014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117010u;
    // 0x117014: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x117010u, 0x117018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117018u;
label_117018:
    // 0x117018: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x117018u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->pc = 0x11701cu;
}
