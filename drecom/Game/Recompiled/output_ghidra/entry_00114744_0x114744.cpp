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

// Function: entry_00114744
// Address: 0x114744 - 0x114750
void entry_00114744_0x114744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114744_0x114744");
#endif

    switch (ctx->pc) {
        case 0x11474cu: goto label_11474c;
        default: break;
    }

    ctx->pc = 0x114744u;

    // 0x114744: 0xc044d7a  jal         func_1135E8
    ctx->pc = 0x114744u;
    SET_GPR_U32(ctx, 31, 0x11474Cu);
    ctx->pc = 0x114748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114744u;
    // 0x114748: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1135E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1135E8u, 0x114744u, 0x11474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11474Cu;
label_11474c:
    // 0x11474c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11474cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x114750u;
}
