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

// Function: entry_002144fc
// Address: 0x2144fc - 0x214514
void entry_002144fc_0x2144fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002144fc_0x2144fc");
#endif

    switch (ctx->pc) {
        case 0x21450cu: goto label_21450c;
        default: break;
    }

    ctx->pc = 0x2144fcu;

    // 0x2144fc: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2144fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x214500: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x214500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x214504: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x214504u;
    SET_GPR_U32(ctx, 31, 0x21450Cu);
    ctx->pc = 0x214508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214504u;
    // 0x214508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x214504u, 0x21450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21450Cu;
label_21450c:
    // 0x21450c: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x21450Cu;
    {
        const bool branch_taken_0x21450c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x214510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21450Cu;
        // 0x214510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21450c) {
            ctx->pc = 0x2144E8u;
            return;
        }
    }
    ctx->pc = 0x214514u;
}
