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

// Function: entry_0011573c
// Address: 0x11573c - 0x115750
void entry_0011573c_0x11573c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011573c_0x11573c");
#endif

    switch (ctx->pc) {
        case 0x115744u: goto label_115744;
        default: break;
    }

    ctx->pc = 0x11573cu;

    // 0x11573c: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x11573Cu;
    SET_GPR_U32(ctx, 31, 0x115744u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x11573Cu, 0x115744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115744u;
label_115744:
    // 0x115744: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x115744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x115748: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x115748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11574c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x115750u;
}
