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

// Function: entry_001832c4
// Address: 0x1832c4 - 0x1832d0
void entry_001832c4_0x1832c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001832c4_0x1832c4");
#endif

    switch (ctx->pc) {
        case 0x1832ccu: goto label_1832cc;
        default: break;
    }

    ctx->pc = 0x1832c4u;

    // 0x1832c4: 0xc05f8f8  jal         func_17E3E0
    ctx->pc = 0x1832C4u;
    SET_GPR_U32(ctx, 31, 0x1832CCu);
    ctx->pc = 0x17E3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3E0u, 0x1832C4u, 0x1832CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1832CCu;
label_1832cc:
    // 0x1832cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1832ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->pc = 0x1832d0u;
}
