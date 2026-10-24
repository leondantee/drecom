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

// Function: entry_00372ae0
// Address: 0x372ae0 - 0x372af8
void entry_00372ae0_0x372ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00372ae0_0x372ae0");
#endif

    switch (ctx->pc) {
        case 0x372aecu: goto label_372aec;
        default: break;
    }

    ctx->pc = 0x372ae0u;

    // 0x372ae0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x372ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372ae4: 0xc0dce3c  jal         func_3738F0
    ctx->pc = 0x372AE4u;
    SET_GPR_U32(ctx, 31, 0x372AECu);
    ctx->pc = 0x3738F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3738F0u, 0x372AE4u, 0x372AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372AECu;
label_372aec:
    // 0x372aec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x372aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372af0: 0xc097c6c  jal         func_25F1B0
    ctx->pc = 0x372AF0u;
    SET_GPR_U32(ctx, 31, 0x372AF8u);
    ctx->pc = 0x25F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F1B0u, 0x372AF0u, 0x372AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372AF8u;
}
