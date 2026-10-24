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

// Function: entry_0011cbc0
// Address: 0x11cbc0 - 0x11cbd4
void entry_0011cbc0_0x11cbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cbc0_0x11cbc0");
#endif

    switch (ctx->pc) {
        case 0x11cbd0u: goto label_11cbd0;
        default: break;
    }

    ctx->pc = 0x11cbc0u;

    // 0x11cbc0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CBC0u;
    {
        const bool branch_taken_0x11cbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11cbc0) {
            ctx->pc = 0x11CBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CBC0u;
            // 0x11cbc4: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CBD4u;
            return;
        }
    }
    ctx->pc = 0x11CBC8u;
    // 0x11cbc8: 0xc045ca0  jal         func_117280
    ctx->pc = 0x11CBC8u;
    SET_GPR_U32(ctx, 31, 0x11CBD0u);
    ctx->pc = 0x11CBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CBC8u;
    // 0x11cbcc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x11CBC8u, 0x11CBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CBD0u;
label_11cbd0:
    // 0x11cbd0: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x11cbd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x11cbd4u;
}
