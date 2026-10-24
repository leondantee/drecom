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

// Function: entry_001d9f60
// Address: 0x1d9f60 - 0x1d9f78
void entry_001d9f60_0x1d9f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9f60_0x1d9f60");
#endif

    switch (ctx->pc) {
        case 0x1d9f74u: goto label_1d9f74;
        default: break;
    }

    ctx->pc = 0x1d9f60u;

    // 0x1d9f60: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d9f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9f64: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1d9f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d9f68: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1d9f68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9f6c: 0xc076d9c  jal         func_1DB670
    ctx->pc = 0x1D9F6Cu;
    SET_GPR_U32(ctx, 31, 0x1D9F74u);
    ctx->pc = 0x1DB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB670u, 0x1D9F6Cu, 0x1D9F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9F74u;
label_1d9f74:
    // 0x1d9f74: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1d9f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->pc = 0x1d9f78u;
}
