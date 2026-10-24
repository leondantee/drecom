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

// Function: entry_0010fa10
// Address: 0x10fa10 - 0x10fa1c
void entry_0010fa10_0x10fa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fa10_0x10fa10");
#endif

    switch (ctx->pc) {
        case 0x10fa18u: goto label_10fa18;
        default: break;
    }

    ctx->pc = 0x10fa10u;

    // 0x10fa10: 0xc043f3c  jal         func_10FCF0
    ctx->pc = 0x10FA10u;
    SET_GPR_U32(ctx, 31, 0x10FA18u);
    ctx->pc = 0x10FA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FA10u;
    // 0x10fa14: 0x24070009  addiu       $a3, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCF0u, 0x10FA10u, 0x10FA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FA18u;
label_10fa18:
    // 0x10fa18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fa18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x10fa1cu;
}
