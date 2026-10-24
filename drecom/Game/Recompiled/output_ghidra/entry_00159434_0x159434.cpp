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

// Function: entry_00159434
// Address: 0x159434 - 0x159440
void entry_00159434_0x159434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159434_0x159434");
#endif

    switch (ctx->pc) {
        case 0x15943cu: goto label_15943c;
        default: break;
    }

    ctx->pc = 0x159434u;

    // 0x159434: 0xc056718  jal         func_159C60
    ctx->pc = 0x159434u;
    SET_GPR_U32(ctx, 31, 0x15943Cu);
    ctx->pc = 0x159C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C60u, 0x159434u, 0x15943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15943Cu;
label_15943c:
    // 0x15943c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x15943cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->pc = 0x159440u;
}
