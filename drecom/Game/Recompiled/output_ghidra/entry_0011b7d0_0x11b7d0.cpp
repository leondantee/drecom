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

// Function: entry_0011b7d0
// Address: 0x11b7d0 - 0x11b7fc
void entry_0011b7d0_0x11b7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b7d0_0x11b7d0");
#endif

    switch (ctx->pc) {
        case 0x11b7d8u: goto label_11b7d8;
        case 0x11b7e8u: goto label_11b7e8;
        default: break;
    }

    ctx->pc = 0x11b7d0u;

    // 0x11b7d0: 0xc04525a  jal         func_114968
    ctx->pc = 0x11B7D0u;
    SET_GPR_U32(ctx, 31, 0x11B7D8u);
    ctx->pc = 0x11B7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B7D0u;
    // 0x11b7d4: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114968u, 0x11B7D0u, 0x11B7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B7D8u;
label_11b7d8:
    // 0x11b7d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11B7D8u;
    {
        const bool branch_taken_0x11b7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7D8u;
        // 0x11b7dc: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7d8) {
            ctx->pc = 0x11B808u;
            return;
        }
    }
    ctx->pc = 0x11B7E0u;
    // 0x11b7e0: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x11B7E0u;
    SET_GPR_U32(ctx, 31, 0x11B7E8u);
    ctx->pc = 0x11B7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B7E0u;
    // 0x11b7e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x11B7E0u, 0x11B7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B7E8u;
label_11b7e8:
    // 0x11b7e8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B7E8u;
    {
        const bool branch_taken_0x11b7e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7E8u;
        // 0x11b7ec: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7e8) {
            ctx->pc = 0x11B7FCu;
            return;
        }
    }
    ctx->pc = 0x11B7F0u;
    // 0x11b7f0: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x11b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x11b7f4: 0xa3a201d1  sb          $v0, 0x1D1($sp)
    ctx->pc = 0x11b7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
    // 0x11b7f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    ctx->pc = 0x11b7fcu;
}
