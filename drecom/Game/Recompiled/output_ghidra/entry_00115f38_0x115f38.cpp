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

// Function: entry_00115f38
// Address: 0x115f38 - 0x115f5c
void entry_00115f38_0x115f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115f38_0x115f38");
#endif

    switch (ctx->pc) {
        case 0x115f40u: goto label_115f40;
        case 0x115f58u: goto label_115f58;
        default: break;
    }

    ctx->pc = 0x115f38u;

    // 0x115f38: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x115F38u;
    SET_GPR_U32(ctx, 31, 0x115F40u);
    ctx->pc = 0x115F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F38u;
    // 0x115f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x115F38u, 0x115F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F40u;
label_115f40:
    // 0x115f40: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x115F40u;
    {
        const bool branch_taken_0x115f40 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x115F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F40u;
        // 0x115f44: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f40) {
            ctx->pc = 0x115F5Cu;
            return;
        }
    }
    ctx->pc = 0x115F48u;
    // 0x115f48: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x115f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x115f4c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x115f4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x115f50: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x115F50u;
    SET_GPR_U32(ctx, 31, 0x115F58u);
    ctx->pc = 0x115F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F50u;
    // 0x115f54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x115F50u, 0x115F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F58u;
label_115f58:
    // 0x115f58: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x115f58u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x115f5cu;
}
