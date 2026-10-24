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

// Function: entry_001839cc
// Address: 0x1839cc - 0x1839dc
void entry_001839cc_0x1839cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001839cc_0x1839cc");
#endif

    switch (ctx->pc) {
        case 0x1839d8u: goto label_1839d8;
        default: break;
    }

    ctx->pc = 0x1839ccu;

    // 0x1839cc: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x1839ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1839d0: 0xc05f8f8  jal         func_17E3E0
    ctx->pc = 0x1839D0u;
    SET_GPR_U32(ctx, 31, 0x1839D8u);
    ctx->pc = 0x17E3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3E0u, 0x1839D0u, 0x1839D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1839D8u;
label_1839d8:
    // 0x1839d8: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x1839d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    ctx->pc = 0x1839dcu;
}
