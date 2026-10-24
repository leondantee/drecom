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

// Function: entry_0019909c
// Address: 0x19909c - 0x1990a8
void entry_0019909c_0x19909c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019909c_0x19909c");
#endif

    switch (ctx->pc) {
        case 0x1990a4u: goto label_1990a4;
        default: break;
    }

    ctx->pc = 0x19909cu;

    // 0x19909c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x19909Cu;
    SET_GPR_U32(ctx, 31, 0x1990A4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x19909Cu, 0x1990A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1990A4u;
label_1990a4:
    // 0x1990a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1990a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x1990a8u;
}
