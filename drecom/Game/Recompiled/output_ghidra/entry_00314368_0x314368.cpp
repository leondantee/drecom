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

// Function: entry_00314368
// Address: 0x314368 - 0x314374
void entry_00314368_0x314368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00314368_0x314368");
#endif

    switch (ctx->pc) {
        case 0x314370u: goto label_314370;
        default: break;
    }

    ctx->pc = 0x314368u;

    // 0x314368: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x314368u;
    SET_GPR_U32(ctx, 31, 0x314370u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x314368u, 0x314370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314370u;
label_314370:
    // 0x314370: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x314370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x314374u;
}
