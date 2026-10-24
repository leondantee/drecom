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

// Function: entry_00114728
// Address: 0x114728 - 0x114734
void entry_00114728_0x114728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114728_0x114728");
#endif

    switch (ctx->pc) {
        case 0x114730u: goto label_114730;
        default: break;
    }

    ctx->pc = 0x114728u;

    // 0x114728: 0xc044a0c  jal         func_112830
    ctx->pc = 0x114728u;
    SET_GPR_U32(ctx, 31, 0x114730u);
    ctx->pc = 0x11472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114728u;
    // 0x11472c: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112830u, 0x114728u, 0x114730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114730u;
label_114730:
    // 0x114730: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x114730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114734u;
}
