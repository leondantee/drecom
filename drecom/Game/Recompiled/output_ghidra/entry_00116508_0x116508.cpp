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

// Function: entry_00116508
// Address: 0x116508 - 0x116520
void entry_00116508_0x116508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116508_0x116508");
#endif

    switch (ctx->pc) {
        case 0x11651cu: goto label_11651c;
        default: break;
    }

    ctx->pc = 0x116508u;

    // 0x116508: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x116508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x11650c: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x11650cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x116510: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x116510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116514: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x116514u;
    SET_GPR_U32(ctx, 31, 0x11651Cu);
    ctx->pc = 0x116518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116514u;
    // 0x116518: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x116514u, 0x11651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11651Cu;
label_11651c:
    // 0x11651c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11651cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116520u;
}
