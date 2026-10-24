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

// Function: entry_003727a0
// Address: 0x3727a0 - 0x3727b0
void entry_003727a0_0x3727a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003727a0_0x3727a0");
#endif

    switch (ctx->pc) {
        case 0x3727acu: goto label_3727ac;
        default: break;
    }

    ctx->pc = 0x3727a0u;

    // 0x3727a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3727a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3727a4: 0xc0dce3c  jal         func_3738F0
    ctx->pc = 0x3727A4u;
    SET_GPR_U32(ctx, 31, 0x3727ACu);
    ctx->pc = 0x3738F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3738F0u, 0x3727A4u, 0x3727ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3727ACu;
label_3727ac:
    // 0x3727ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3727acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->pc = 0x3727b0u;
}
