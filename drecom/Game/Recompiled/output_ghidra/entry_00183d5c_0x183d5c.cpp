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

// Function: entry_00183d5c
// Address: 0x183d5c - 0x183d68
void entry_00183d5c_0x183d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183d5c_0x183d5c");
#endif

    switch (ctx->pc) {
        case 0x183d64u: goto label_183d64;
        default: break;
    }

    ctx->pc = 0x183d5cu;

    // 0x183d5c: 0xc05f8f8  jal         func_17E3E0
    ctx->pc = 0x183D5Cu;
    SET_GPR_U32(ctx, 31, 0x183D64u);
    ctx->pc = 0x17E3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3E0u, 0x183D5Cu, 0x183D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D64u;
label_183d64:
    // 0x183d64: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x183d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->pc = 0x183d68u;
}
