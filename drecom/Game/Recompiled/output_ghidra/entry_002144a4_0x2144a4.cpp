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

// Function: entry_002144a4
// Address: 0x2144a4 - 0x2144c4
void entry_002144a4_0x2144a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002144a4_0x2144a4");
#endif

    switch (ctx->pc) {
        case 0x2144b4u: goto label_2144b4;
        default: break;
    }

    ctx->pc = 0x2144a4u;

    // 0x2144a4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2144a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2144a8: 0xdc250f60  ld          $a1, 0xF60($at)
    ctx->pc = 0x2144a8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3B0F60u));
    // 0x2144ac: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x2144ACu;
    SET_GPR_U32(ctx, 31, 0x2144B4u);
    ctx->pc = 0x2144B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2144ACu;
    // 0x2144b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x2144ACu, 0x2144B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2144B4u;
label_2144b4:
    // 0x2144b4: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2144B4u;
    {
        const bool branch_taken_0x2144b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2144B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144B4u;
        // 0x2144b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2144b4) {
            ctx->pc = 0x214490u;
            return;
        }
    }
    ctx->pc = 0x2144BCu;
    // 0x2144bc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2144BCu;
    {
        const bool branch_taken_0x2144bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2144bc) {
            ctx->pc = 0x214514u;
            return;
        }
    }
    ctx->pc = 0x2144C4u;
}
