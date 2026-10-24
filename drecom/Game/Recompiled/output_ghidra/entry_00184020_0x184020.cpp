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

// Function: entry_00184020
// Address: 0x184020 - 0x18402c
void entry_00184020_0x184020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184020_0x184020");
#endif

    switch (ctx->pc) {
        case 0x184028u: goto label_184028;
        default: break;
    }

    ctx->pc = 0x184020u;

    // 0x184020: 0xc05f8f8  jal         func_17E3E0
    ctx->pc = 0x184020u;
    SET_GPR_U32(ctx, 31, 0x184028u);
    ctx->pc = 0x17E3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3E0u, 0x184020u, 0x184028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184028u;
label_184028:
    // 0x184028: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x184028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->pc = 0x18402cu;
}
