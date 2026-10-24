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

// Function: entry_002144c4
// Address: 0x2144c4 - 0x2144e8
void entry_002144c4_0x2144c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002144c4_0x2144c4");
#endif

    switch (ctx->pc) {
        case 0x2144d4u: goto label_2144d4;
        default: break;
    }

    ctx->pc = 0x2144c4u;

    // 0x2144c4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2144c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2144c8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2144c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2144cc: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x2144CCu;
    SET_GPR_U32(ctx, 31, 0x2144D4u);
    ctx->pc = 0x2144D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2144CCu;
    // 0x2144d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x2144CCu, 0x2144D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2144D4u;
label_2144d4:
    // 0x2144d4: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2144D4u;
    {
        const bool branch_taken_0x2144d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2144D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144D4u;
        // 0x2144d8: 0x3c12003b  lui         $s2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2144d4) {
            ctx->pc = 0x214514u;
            return;
        }
    }
    ctx->pc = 0x2144DCu;
    // 0x2144dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2144DCu;
    {
        const bool branch_taken_0x2144dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2144dc) {
            ctx->pc = 0x2144FCu;
            return;
        }
    }
    ctx->pc = 0x2144E4u;
    // 0x2144e4: 0x0  nop
    ctx->pc = 0x2144e4u;
    // NOP
    ctx->pc = 0x2144e8u;
}
