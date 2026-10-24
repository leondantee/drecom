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

// Function: entry_0010771c
// Address: 0x10771c - 0x10772c
void entry_0010771c_0x10771c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010771c_0x10771c");
#endif

    switch (ctx->pc) {
        case 0x107724u: goto label_107724;
        default: break;
    }

    ctx->pc = 0x10771cu;

    // 0x10771c: 0xc041c58  jal         func_107160
    ctx->pc = 0x10771Cu;
    SET_GPR_U32(ctx, 31, 0x107724u);
    ctx->pc = 0x107720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10771Cu;
    // 0x107720: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107160u, 0x10771Cu, 0x107724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107724u;
label_107724:
    // 0x107724: 0xc041cf8  jal         func_1073E0
    ctx->pc = 0x107724u;
    SET_GPR_U32(ctx, 31, 0x10772Cu);
    ctx->pc = 0x1073E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1073E0u, 0x107724u, 0x10772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10772Cu;
}
