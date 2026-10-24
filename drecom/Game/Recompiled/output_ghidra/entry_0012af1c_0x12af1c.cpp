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

// Function: entry_0012af1c
// Address: 0x12af1c - 0x12af28
void entry_0012af1c_0x12af1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012af1c_0x12af1c");
#endif

    switch (ctx->pc) {
        case 0x12af24u: goto label_12af24;
        default: break;
    }

    ctx->pc = 0x12af1cu;

    // 0x12af1c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12AF1Cu;
    SET_GPR_U32(ctx, 31, 0x12AF24u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12AF1Cu, 0x12AF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF24u;
label_12af24:
    // 0x12af24: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12af24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x12af28u;
}
