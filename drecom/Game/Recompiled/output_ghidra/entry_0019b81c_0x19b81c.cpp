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

// Function: entry_0019b81c
// Address: 0x19b81c - 0x19b828
void entry_0019b81c_0x19b81c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b81c_0x19b81c");
#endif

    switch (ctx->pc) {
        case 0x19b824u: goto label_19b824;
        default: break;
    }

    ctx->pc = 0x19b81cu;

    // 0x19b81c: 0xc05d1b8  jal         func_1746E0
    ctx->pc = 0x19B81Cu;
    SET_GPR_U32(ctx, 31, 0x19B824u);
    ctx->pc = 0x1746E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1746E0u, 0x19B81Cu, 0x19B824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B824u;
label_19b824:
    // 0x19b824: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x19b828u;
}
