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

// Function: entry_00116660
// Address: 0x116660 - 0x116688
void entry_00116660_0x116660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116660_0x116660");
#endif

    switch (ctx->pc) {
        case 0x116670u: goto label_116670;
        case 0x116680u: goto label_116680;
        default: break;
    }

    ctx->pc = 0x116660u;

    // 0x116660: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x116660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x116664: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x116664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x116668: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x116668u;
    SET_GPR_U32(ctx, 31, 0x116670u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x116668u, 0x116670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116670u;
label_116670:
    // 0x116670: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116674: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x116674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116678: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x116678u;
    SET_GPR_U32(ctx, 31, 0x116680u);
    ctx->pc = 0x11667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116678u;
    // 0x11667c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x116678u, 0x116680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116680u;
label_116680:
    // 0x116680: 0x10400204  beqz        $v0, . + 4 + (0x204 << 2)
    ctx->pc = 0x116680u;
    {
        const bool branch_taken_0x116680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116680u;
        // 0x116684: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116680) {
            ctx->pc = 0x116E94u;
            return;
        }
    }
    ctx->pc = 0x116688u;
}
