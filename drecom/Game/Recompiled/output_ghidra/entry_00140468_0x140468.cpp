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

// Function: entry_00140468
// Address: 0x140468 - 0x140478
void entry_00140468_0x140468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140468_0x140468");
#endif

    switch (ctx->pc) {
        case 0x140470u: goto label_140470;
        default: break;
    }

    ctx->pc = 0x140468u;

    // 0x140468: 0xc06b8cc  jal         func_1AE330
    ctx->pc = 0x140468u;
    SET_GPR_U32(ctx, 31, 0x140470u);
    ctx->pc = 0x1AE330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE330u, 0x140468u, 0x140470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140470u;
label_140470:
    // 0x140470: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x140470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x140474: 0x0  nop
    ctx->pc = 0x140474u;
    // NOP
    ctx->pc = 0x140478u;
}
